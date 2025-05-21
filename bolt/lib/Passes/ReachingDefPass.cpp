#include "bolt/Passes/ReachingDefPass.h"
#include "bolt/Passes/ReachingDefAnalysis.h"
#include "bolt/Passes/Passes.h"  // ⬅️ TRÈS IMPORTANT pour enregistrer le pass
#include "llvm/Support/raw_ostream.h"

using namespace llvm;
using namespace bolt;

ReachingDefPass::ReachingDefPass(bool PrintPass)
    : BinaryFunctionPass(PrintPass) {}

bool ReachingDefPass::shouldPrint(const BinaryFunction &BF) const {
  return false;
}

bool ReachingDefPass::runOnFunction(BinaryFunction &BF) {
  ReachingDefAnalysis RDA;
  return RDA.runOnFunction(BF.getBinaryContext(), BF);
}

Error ReachingDefPass::runOnFunctions(BinaryContext &BC) {
  for (auto &It : BC.getBinaryFunctions()) {
    BinaryFunction &BF = It.second;
    if (!BF.isSimple())
      continue;
    runOnFunction(BF);
  }
  return Error::success();
}

