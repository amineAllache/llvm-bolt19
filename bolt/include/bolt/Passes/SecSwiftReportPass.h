#ifndef BOLT_PASSES_SECSWIFT_REPORT_PASS_H
#define BOLT_PASSES_SECSWIFT_REPORT_PASS_H

#include "bolt/Core/BinaryFunction.h"

#include "bolt/Rewrite/RewriteInstance.h"


namespace llvm {
namespace bolt {

class SecSwiftReportPass {
public:
  void runOnFunctions(RewriteInstance &RI);
};

} // namespace bolt
} // namespace llvm

#endif // BOLT_PASSES_SECSWIFT_REPORT_PASS_H
