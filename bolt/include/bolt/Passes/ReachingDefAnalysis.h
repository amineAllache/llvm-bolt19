#ifndef BOLT_PASSES_REACHINGDEFANALYSIS_H
#define BOLT_PASSES_REACHINGDEFANALYSIS_H

#include "bolt/Core/BinaryFunction.h"
#include "bolt/Core/BinaryContext.h"

namespace llvm {
namespace bolt {

class ReachingDefAnalysis {
public:
  bool runOnFunction(BinaryContext &BC, BinaryFunction &BF);
};

} // namespace bolt
} // namespace llvm

#endif
