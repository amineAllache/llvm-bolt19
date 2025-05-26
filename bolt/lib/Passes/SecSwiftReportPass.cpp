//===-- SecSwiftReportPass.cpp - SecSwift symbol reporting pass ----------===//
//
// This file implements a BOLT pass that discovers all symbols beginning with
// "_SECSWIFT_", creates a corresponding BinaryFunction for each, reports
// every symbol's address, then optionally disassembles each function to
// locate call instructions.
//
//===----------------------------------------------------------------------===//

#include "bolt/Rewrite/RewriteInstance.h"
#include "bolt/Core/BinaryContext.h"
#include "bolt/Core/BinaryFunction.h"
#include "llvm/Object/ELF.h"
#include "llvm/Object/ObjectFile.h"
#include "llvm/Object/SymbolSize.h"
#include "llvm/Support/raw_ostream.h"
#include "bolt/Passes/SecSwiftReportPass.h"

using namespace llvm;
using namespace bolt;
using namespace object;

void SecSwiftReportPass::runOnFunctions(RewriteInstance &RI) {
  // Obtain a mutable reference to the BinaryContext
  BinaryContext &BC = const_cast<BinaryContext &>(RI.getBinaryContext());

  // Ensure we're working with an ELF binary
  const auto *ELFObj = dyn_cast<ELFObjectFileBase>(RI.getFile());
  if (!ELFObj) {
    outs() << "[SecSwift] ❌ Not an ELF binary.\n";
    return;
  }

  // 1) For each symbol starting with "_SECSWIFT_", create a BinaryFunction
  size_t CreatedCount = 0, SkippedCount = 0;
  for (const SymbolRef &Sym : ELFObj->symbols()) {
    // Retrieve the symbol name
    Expected<StringRef> NameOrErr = Sym.getName();
    if (!NameOrErr) { consumeError(NameOrErr.takeError()); continue; }
    StringRef SymName = *NameOrErr;

    // Filter only those that start with our prefix
    if (!SymName.starts_with("_SECSWIFT_")) continue;

    // Get the symbol's address
    Expected<uint64_t> AddrOrErr = Sym.getAddress();
    if (!AddrOrErr) { consumeError(AddrOrErr.takeError()); continue; }
    uint64_t Addr = *AddrOrErr;

    // Find the section containing this address
    BinarySection *Section = nullptr;
    if (auto SecOrErr = BC.getSectionForAddress(Addr))
      Section = &*SecOrErr;

    // If no section found, skip this symbol
    if (!Section) {
      ++SkippedCount;
      continue;
    }

    // Create the function in the context and mark it as simple
    BC.createBinaryFunction(SymName.str(), *Section, Addr, /*Size=*/0)
      ->setSimple(true);
    ++CreatedCount;
  }

  // 2) Print every symbol found with its address
  size_t FoundCount = 0;
  for (const SymbolRef &Sym : ELFObj->symbols()) {
    Expected<StringRef> NameOrErr = Sym.getName();
    if (!NameOrErr) { consumeError(NameOrErr.takeError()); continue; }
    StringRef SymName = *NameOrErr;

    if (!SymName.starts_with("_SECSWIFT_")) continue;

    Expected<uint64_t> AddrOrErr = Sym.getAddress();
    if (!AddrOrErr) { consumeError(AddrOrErr.takeError()); continue; }
    uint64_t Addr = *AddrOrErr;

    outs() << "[SecSwift] ✅ Found symbol: " << SymName
           << " at address: 0x" << Twine::utohexstr(Addr) << "\n";
    ++FoundCount;
  }

  // Summarize symbol discovery
  if (FoundCount == 0) {
    outs() << "[SecSwift] ⚠️ No _SECSWIFT_ symbols found in symbol table.\n";
  } else {
    outs() << "[SecSwift] 📝 Total _SECSWIFT_ symbols found: "
           << FoundCount << "\n";
  }

  // 3) Disassemble each created BinaryFunction and scan for call instructions
  for (auto &KV : BC.getBinaryFunctions()) {
    BinaryFunction &Func = KV.second;
    StringRef Name = Func.getPrintName();

    // Only process our SecSwift functions
    if (!Name.starts_with("_SECSWIFT_")) continue;

    outs() << "[SecSwift] 🔍 Scanning instructions in: " << Name << "\n";

    if (Func.empty()) {
      outs() << "[SecSwift] ⚠️ Function is empty.\n";
      continue;
    }

    // Iterate each basic block and instruction
    for (BinaryBasicBlock *BB : Func.getLayout().blocks()) {
      for (MCInst &Inst : *BB) {
        // If this is a call instruction, print the target expression
        if (BC.MIB->isCall(Inst)) {
          const MCOperand &Op = Inst.getOperand(0);
          if (Op.isExpr()) {
            std::string TargetName;
            raw_string_ostream OS(TargetName);
            Op.getExpr()->print(OS, nullptr);
            OS.flush();
            outs() << "  🔗 Call to: " << TargetName
                   << " in block " << BB->getName() << "\n";
          }
        }
      }
    }
  }

  // Final summary of how many functions were created vs. skipped
  outs() << "[SecSwift] 📊 Summary: created " << CreatedCount
         << " functions, skipped " << SkippedCount << ".\n";
}
