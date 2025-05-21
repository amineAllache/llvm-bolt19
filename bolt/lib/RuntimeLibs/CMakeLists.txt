message(STATUS "⚡️ Début du CMakeLists.txt de RuntimeLibs ⚡️")

get_property(exp_targets GLOBAL PROPERTY ENABLED_EXPORTS)
message(STATUS "Current EXPORTS before RuntimeLibs: ${exp_targets}")


set(LLVM_LINK_COMPONENTS
  BinaryFormat
  JITLink
  MC
  Object
  Support
  )

add_llvm_library(LLVMBOLTRuntimeLibs
  RuntimeLibrary.cpp
  HugifyRuntimeLibrary.cpp
  InstrumentationRuntimeLibrary.cpp

  DISABLE_LLVM_LINK_LLVM_DYLIB
  )

target_link_libraries(LLVMBOLTRuntimeLibs
  PRIVATE
  LLVMBOLTCore
  LLVMBOLTPasses
  LLVMBOLTUtils
  )


#install(TARGETS LLVMBOLTRuntimeLibs EXPORT LLVMExports DESTINATION "lib${LLVM_LIBDIR_SUFFIX}")
