#include "bolt/Passes/ReachingDefAnalysis.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;
using namespace bolt;

bool ReachingDefAnalysis::runOnFunction(BinaryContext &BC, BinaryFunction &BF) {
  errs() << "[ReachingDef] 🔍 Analyzing binary function: " << BF.getPrintName() << "\n";

  for (BinaryBasicBlock *BB : BF.getLayout().blocks()) {
    errs() << "  🔸 Basic block: " << BB->getName() << "\n";
  }

  return false;
}
