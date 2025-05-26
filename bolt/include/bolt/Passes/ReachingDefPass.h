#ifndef BOLT_PASSES_REACHINGDEFPASS_H
#define BOLT_PASSES_REACHINGDEFPASS_H

#include "bolt/Core/BinaryFunction.h"
#include "bolt/Core/BinaryContext.h"
#include "bolt/Passes/BinaryPasses.h"
#include "llvm/Support/Error.h"

namespace llvm {
namespace bolt {

class ReachingDefPass : public BinaryFunctionPass {
public:
  explicit ReachingDefPass(bool PrintPass);
  bool shouldPrint(const BinaryFunction &BF) const override;
  bool runOnFunction(BinaryFunction &BF);
  Error runOnFunctions(BinaryContext &BC) override;
  const char *getName() const override { return "reaching-def"; }
};

} // namespace bolt
} // namespace llvm

#endif
