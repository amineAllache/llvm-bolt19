//===- PassesModule.h - Declare BOLT passes registration ------*- C++ -*-===//
#ifndef BOLT_PASSES_PASSESMODULE_H
#define BOLT_PASSES_PASSESMODULE_H

#include "llvm/PassRegistry.h"

namespace llvm {
  /// Enregistre toutes les passes définies dans LLVMBOLTPasses
  void initializeLLVMBOLTPasses(llvm::PassRegistry &);
}

#endif // BOLT_PASSES_PASSESMODULE_H
