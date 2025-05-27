/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Machine Code Emitter                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t RISCVMCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
    SmallVectorImpl<MCFixup> &Fixups,
    const MCSubtargetInfo &STI) const {
  static const uint64_t InstBits[] = {
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(51),	// ADD
    UINT64_C(19),	// ADDI
    UINT64_C(27),	// ADDIW
    UINT64_C(59),	// ADDW
    UINT64_C(134217787),	// ADD_UW
    UINT64_C(704643123),	// AES32DSI
    UINT64_C(771751987),	// AES32DSMI
    UINT64_C(570425395),	// AES32ESI
    UINT64_C(637534259),	// AES32ESMI
    UINT64_C(973078579),	// AES64DS
    UINT64_C(1040187443),	// AES64DSM
    UINT64_C(838860851),	// AES64ES
    UINT64_C(905969715),	// AES64ESM
    UINT64_C(805310483),	// AES64IM
    UINT64_C(822087699),	// AES64KS1I
    UINT64_C(2113929267),	// AES64KS2
    UINT64_C(47),	// AMOADD_B
    UINT64_C(67108911),	// AMOADD_B_AQ
    UINT64_C(100663343),	// AMOADD_B_AQ_RL
    UINT64_C(33554479),	// AMOADD_B_RL
    UINT64_C(12335),	// AMOADD_D
    UINT64_C(67121199),	// AMOADD_D_AQ
    UINT64_C(100675631),	// AMOADD_D_AQ_RL
    UINT64_C(33566767),	// AMOADD_D_RL
    UINT64_C(4143),	// AMOADD_H
    UINT64_C(67113007),	// AMOADD_H_AQ
    UINT64_C(100667439),	// AMOADD_H_AQ_RL
    UINT64_C(33558575),	// AMOADD_H_RL
    UINT64_C(8239),	// AMOADD_W
    UINT64_C(67117103),	// AMOADD_W_AQ
    UINT64_C(100671535),	// AMOADD_W_AQ_RL
    UINT64_C(33562671),	// AMOADD_W_RL
    UINT64_C(1610612783),	// AMOAND_B
    UINT64_C(1677721647),	// AMOAND_B_AQ
    UINT64_C(1711276079),	// AMOAND_B_AQ_RL
    UINT64_C(1644167215),	// AMOAND_B_RL
    UINT64_C(1610625071),	// AMOAND_D
    UINT64_C(1677733935),	// AMOAND_D_AQ
    UINT64_C(1711288367),	// AMOAND_D_AQ_RL
    UINT64_C(1644179503),	// AMOAND_D_RL
    UINT64_C(1610616879),	// AMOAND_H
    UINT64_C(1677725743),	// AMOAND_H_AQ
    UINT64_C(1711280175),	// AMOAND_H_AQ_RL
    UINT64_C(1644171311),	// AMOAND_H_RL
    UINT64_C(1610620975),	// AMOAND_W
    UINT64_C(1677729839),	// AMOAND_W_AQ
    UINT64_C(1711284271),	// AMOAND_W_AQ_RL
    UINT64_C(1644175407),	// AMOAND_W_RL
    UINT64_C(671088687),	// AMOCAS_B
    UINT64_C(738197551),	// AMOCAS_B_AQ
    UINT64_C(771751983),	// AMOCAS_B_AQ_RL
    UINT64_C(704643119),	// AMOCAS_B_RL
    UINT64_C(671100975),	// AMOCAS_D_RV32
    UINT64_C(738209839),	// AMOCAS_D_RV32_AQ
    UINT64_C(771764271),	// AMOCAS_D_RV32_AQ_RL
    UINT64_C(704655407),	// AMOCAS_D_RV32_RL
    UINT64_C(671100975),	// AMOCAS_D_RV64
    UINT64_C(738209839),	// AMOCAS_D_RV64_AQ
    UINT64_C(771764271),	// AMOCAS_D_RV64_AQ_RL
    UINT64_C(704655407),	// AMOCAS_D_RV64_RL
    UINT64_C(671092783),	// AMOCAS_H
    UINT64_C(738201647),	// AMOCAS_H_AQ
    UINT64_C(771756079),	// AMOCAS_H_AQ_RL
    UINT64_C(704647215),	// AMOCAS_H_RL
    UINT64_C(671105071),	// AMOCAS_Q
    UINT64_C(738213935),	// AMOCAS_Q_AQ
    UINT64_C(771768367),	// AMOCAS_Q_AQ_RL
    UINT64_C(704659503),	// AMOCAS_Q_RL
    UINT64_C(671096879),	// AMOCAS_W
    UINT64_C(738205743),	// AMOCAS_W_AQ
    UINT64_C(771760175),	// AMOCAS_W_AQ_RL
    UINT64_C(704651311),	// AMOCAS_W_RL
    UINT64_C(3758096431),	// AMOMAXU_B
    UINT64_C(3825205295),	// AMOMAXU_B_AQ
    UINT64_C(3858759727),	// AMOMAXU_B_AQ_RL
    UINT64_C(3791650863),	// AMOMAXU_B_RL
    UINT64_C(3758108719),	// AMOMAXU_D
    UINT64_C(3825217583),	// AMOMAXU_D_AQ
    UINT64_C(3858772015),	// AMOMAXU_D_AQ_RL
    UINT64_C(3791663151),	// AMOMAXU_D_RL
    UINT64_C(3758100527),	// AMOMAXU_H
    UINT64_C(3825209391),	// AMOMAXU_H_AQ
    UINT64_C(3858763823),	// AMOMAXU_H_AQ_RL
    UINT64_C(3791654959),	// AMOMAXU_H_RL
    UINT64_C(3758104623),	// AMOMAXU_W
    UINT64_C(3825213487),	// AMOMAXU_W_AQ
    UINT64_C(3858767919),	// AMOMAXU_W_AQ_RL
    UINT64_C(3791659055),	// AMOMAXU_W_RL
    UINT64_C(2684354607),	// AMOMAX_B
    UINT64_C(2751463471),	// AMOMAX_B_AQ
    UINT64_C(2785017903),	// AMOMAX_B_AQ_RL
    UINT64_C(2717909039),	// AMOMAX_B_RL
    UINT64_C(2684366895),	// AMOMAX_D
    UINT64_C(2751475759),	// AMOMAX_D_AQ
    UINT64_C(2785030191),	// AMOMAX_D_AQ_RL
    UINT64_C(2717921327),	// AMOMAX_D_RL
    UINT64_C(2684358703),	// AMOMAX_H
    UINT64_C(2751467567),	// AMOMAX_H_AQ
    UINT64_C(2785021999),	// AMOMAX_H_AQ_RL
    UINT64_C(2717913135),	// AMOMAX_H_RL
    UINT64_C(2684362799),	// AMOMAX_W
    UINT64_C(2751471663),	// AMOMAX_W_AQ
    UINT64_C(2785026095),	// AMOMAX_W_AQ_RL
    UINT64_C(2717917231),	// AMOMAX_W_RL
    UINT64_C(3221225519),	// AMOMINU_B
    UINT64_C(3288334383),	// AMOMINU_B_AQ
    UINT64_C(3321888815),	// AMOMINU_B_AQ_RL
    UINT64_C(3254779951),	// AMOMINU_B_RL
    UINT64_C(3221237807),	// AMOMINU_D
    UINT64_C(3288346671),	// AMOMINU_D_AQ
    UINT64_C(3321901103),	// AMOMINU_D_AQ_RL
    UINT64_C(3254792239),	// AMOMINU_D_RL
    UINT64_C(3221229615),	// AMOMINU_H
    UINT64_C(3288338479),	// AMOMINU_H_AQ
    UINT64_C(3321892911),	// AMOMINU_H_AQ_RL
    UINT64_C(3254784047),	// AMOMINU_H_RL
    UINT64_C(3221233711),	// AMOMINU_W
    UINT64_C(3288342575),	// AMOMINU_W_AQ
    UINT64_C(3321897007),	// AMOMINU_W_AQ_RL
    UINT64_C(3254788143),	// AMOMINU_W_RL
    UINT64_C(2147483695),	// AMOMIN_B
    UINT64_C(2214592559),	// AMOMIN_B_AQ
    UINT64_C(2248146991),	// AMOMIN_B_AQ_RL
    UINT64_C(2181038127),	// AMOMIN_B_RL
    UINT64_C(2147495983),	// AMOMIN_D
    UINT64_C(2214604847),	// AMOMIN_D_AQ
    UINT64_C(2248159279),	// AMOMIN_D_AQ_RL
    UINT64_C(2181050415),	// AMOMIN_D_RL
    UINT64_C(2147487791),	// AMOMIN_H
    UINT64_C(2214596655),	// AMOMIN_H_AQ
    UINT64_C(2248151087),	// AMOMIN_H_AQ_RL
    UINT64_C(2181042223),	// AMOMIN_H_RL
    UINT64_C(2147491887),	// AMOMIN_W
    UINT64_C(2214600751),	// AMOMIN_W_AQ
    UINT64_C(2248155183),	// AMOMIN_W_AQ_RL
    UINT64_C(2181046319),	// AMOMIN_W_RL
    UINT64_C(1073741871),	// AMOOR_B
    UINT64_C(1140850735),	// AMOOR_B_AQ
    UINT64_C(1174405167),	// AMOOR_B_AQ_RL
    UINT64_C(1107296303),	// AMOOR_B_RL
    UINT64_C(1073754159),	// AMOOR_D
    UINT64_C(1140863023),	// AMOOR_D_AQ
    UINT64_C(1174417455),	// AMOOR_D_AQ_RL
    UINT64_C(1107308591),	// AMOOR_D_RL
    UINT64_C(1073745967),	// AMOOR_H
    UINT64_C(1140854831),	// AMOOR_H_AQ
    UINT64_C(1174409263),	// AMOOR_H_AQ_RL
    UINT64_C(1107300399),	// AMOOR_H_RL
    UINT64_C(1073750063),	// AMOOR_W
    UINT64_C(1140858927),	// AMOOR_W_AQ
    UINT64_C(1174413359),	// AMOOR_W_AQ_RL
    UINT64_C(1107304495),	// AMOOR_W_RL
    UINT64_C(134217775),	// AMOSWAP_B
    UINT64_C(201326639),	// AMOSWAP_B_AQ
    UINT64_C(234881071),	// AMOSWAP_B_AQ_RL
    UINT64_C(167772207),	// AMOSWAP_B_RL
    UINT64_C(134230063),	// AMOSWAP_D
    UINT64_C(201338927),	// AMOSWAP_D_AQ
    UINT64_C(234893359),	// AMOSWAP_D_AQ_RL
    UINT64_C(167784495),	// AMOSWAP_D_RL
    UINT64_C(134221871),	// AMOSWAP_H
    UINT64_C(201330735),	// AMOSWAP_H_AQ
    UINT64_C(234885167),	// AMOSWAP_H_AQ_RL
    UINT64_C(167776303),	// AMOSWAP_H_RL
    UINT64_C(134225967),	// AMOSWAP_W
    UINT64_C(201334831),	// AMOSWAP_W_AQ
    UINT64_C(234889263),	// AMOSWAP_W_AQ_RL
    UINT64_C(167780399),	// AMOSWAP_W_RL
    UINT64_C(536870959),	// AMOXOR_B
    UINT64_C(603979823),	// AMOXOR_B_AQ
    UINT64_C(637534255),	// AMOXOR_B_AQ_RL
    UINT64_C(570425391),	// AMOXOR_B_RL
    UINT64_C(536883247),	// AMOXOR_D
    UINT64_C(603992111),	// AMOXOR_D_AQ
    UINT64_C(637546543),	// AMOXOR_D_AQ_RL
    UINT64_C(570437679),	// AMOXOR_D_RL
    UINT64_C(536875055),	// AMOXOR_H
    UINT64_C(603983919),	// AMOXOR_H_AQ
    UINT64_C(637538351),	// AMOXOR_H_AQ_RL
    UINT64_C(570429487),	// AMOXOR_H_RL
    UINT64_C(536879151),	// AMOXOR_W
    UINT64_C(603988015),	// AMOXOR_W_AQ
    UINT64_C(637542447),	// AMOXOR_W_AQ_RL
    UINT64_C(570433583),	// AMOXOR_W_RL
    UINT64_C(28723),	// AND
    UINT64_C(28691),	// ANDI
    UINT64_C(1073770547),	// ANDN
    UINT64_C(23),	// AUIPC
    UINT64_C(1207963699),	// BCLR
    UINT64_C(1207963667),	// BCLRI
    UINT64_C(99),	// BEQ
    UINT64_C(1207980083),	// BEXT
    UINT64_C(1207980051),	// BEXTI
    UINT64_C(20579),	// BGE
    UINT64_C(28771),	// BGEU
    UINT64_C(1744834611),	// BINV
    UINT64_C(1744834579),	// BINVI
    UINT64_C(16483),	// BLT
    UINT64_C(24675),	// BLTU
    UINT64_C(4195),	// BNE
    UINT64_C(1752190995),	// BREV8
    UINT64_C(671092787),	// BSET
    UINT64_C(671092755),	// BSETI
    UINT64_C(1056783),	// CBO_CLEAN
    UINT64_C(2105359),	// CBO_FLUSH
    UINT64_C(8207),	// CBO_INVAL
    UINT64_C(4202511),	// CBO_ZERO
    UINT64_C(167776307),	// CLMUL
    UINT64_C(167784499),	// CLMULH
    UINT64_C(167780403),	// CLMULR
    UINT64_C(1610616851),	// CLZ
    UINT64_C(1610616859),	// CLZW
    UINT64_C(40962),	// CM_JALT
    UINT64_C(40962),	// CM_JT
    UINT64_C(44130),	// CM_MVA01S
    UINT64_C(44066),	// CM_MVSA01
    UINT64_C(47618),	// CM_POP
    UINT64_C(48642),	// CM_POPRET
    UINT64_C(48130),	// CM_POPRETZ
    UINT64_C(47106),	// CM_PUSH
    UINT64_C(1612714003),	// CPOP
    UINT64_C(1612714011),	// CPOPW
    UINT64_C(12403),	// CSRRC
    UINT64_C(28787),	// CSRRCI
    UINT64_C(8307),	// CSRRS
    UINT64_C(24691),	// CSRRSI
    UINT64_C(4211),	// CSRRW
    UINT64_C(20595),	// CSRRWI
    UINT64_C(1611665427),	// CTZ
    UINT64_C(1611665435),	// CTZW
    UINT64_C(1342189611),	// CV_ABS
    UINT64_C(1879052411),	// CV_ABS_B
    UINT64_C(1879048315),	// CV_ABS_H
    UINT64_C(8283),	// CV_ADDN
    UINT64_C(2147495979),	// CV_ADDNR
    UINT64_C(2147491931),	// CV_ADDRN
    UINT64_C(2214604843),	// CV_ADDRNR
    UINT64_C(1073750107),	// CV_ADDUN
    UINT64_C(2181050411),	// CV_ADDUNR
    UINT64_C(3221233755),	// CV_ADDURN
    UINT64_C(2248159275),	// CV_ADDURNR
    UINT64_C(4219),	// CV_ADD_B
    UINT64_C(1811947643),	// CV_ADD_DIV2
    UINT64_C(1811955835),	// CV_ADD_DIV4
    UINT64_C(1811964027),	// CV_ADD_DIV8
    UINT64_C(123),	// CV_ADD_H
    UINT64_C(28795),	// CV_ADD_SCI_B
    UINT64_C(24699),	// CV_ADD_SCI_H
    UINT64_C(20603),	// CV_ADD_SC_B
    UINT64_C(16507),	// CV_ADD_SC_H
    UINT64_C(1744834683),	// CV_AND_B
    UINT64_C(1744830587),	// CV_AND_H
    UINT64_C(1744859259),	// CV_AND_SCI_B
    UINT64_C(1744855163),	// CV_AND_SCI_H
    UINT64_C(1744851067),	// CV_AND_SC_B
    UINT64_C(1744846971),	// CV_AND_SC_H
    UINT64_C(402657403),	// CV_AVGU_B
    UINT64_C(402653307),	// CV_AVGU_H
    UINT64_C(402681979),	// CV_AVGU_SCI_B
    UINT64_C(402677883),	// CV_AVGU_SCI_H
    UINT64_C(402673787),	// CV_AVGU_SC_B
    UINT64_C(402669691),	// CV_AVGU_SC_H
    UINT64_C(268439675),	// CV_AVG_B
    UINT64_C(268435579),	// CV_AVG_H
    UINT64_C(268464251),	// CV_AVG_SCI_B
    UINT64_C(268460155),	// CV_AVG_SCI_H
    UINT64_C(268456059),	// CV_AVG_SC_B
    UINT64_C(268451963),	// CV_AVG_SC_H
    UINT64_C(4187),	// CV_BCLR
    UINT64_C(939536427),	// CV_BCLRR
    UINT64_C(24587),	// CV_BEQIMM
    UINT64_C(3221229659),	// CV_BITREV
    UINT64_C(28683),	// CV_BNEIMM
    UINT64_C(1073746011),	// CV_BSET
    UINT64_C(973090859),	// CV_BSETR
    UINT64_C(1174417451),	// CV_CLB
    UINT64_C(1879060523),	// CV_CLIP
    UINT64_C(1946169387),	// CV_CLIPR
    UINT64_C(1912614955),	// CV_CLIPU
    UINT64_C(1979723819),	// CV_CLIPUR
    UINT64_C(67113083),	// CV_CMPEQ_B
    UINT64_C(67108987),	// CV_CMPEQ_H
    UINT64_C(67137659),	// CV_CMPEQ_SCI_B
    UINT64_C(67133563),	// CV_CMPEQ_SCI_H
    UINT64_C(67129467),	// CV_CMPEQ_SC_B
    UINT64_C(67125371),	// CV_CMPEQ_SC_H
    UINT64_C(1006637179),	// CV_CMPGEU_B
    UINT64_C(1006633083),	// CV_CMPGEU_H
    UINT64_C(1006661755),	// CV_CMPGEU_SCI_B
    UINT64_C(1006657659),	// CV_CMPGEU_SCI_H
    UINT64_C(1006653563),	// CV_CMPGEU_SC_B
    UINT64_C(1006649467),	// CV_CMPGEU_SC_H
    UINT64_C(469766267),	// CV_CMPGE_B
    UINT64_C(469762171),	// CV_CMPGE_H
    UINT64_C(469790843),	// CV_CMPGE_SCI_B
    UINT64_C(469786747),	// CV_CMPGE_SCI_H
    UINT64_C(469782651),	// CV_CMPGE_SC_B
    UINT64_C(469778555),	// CV_CMPGE_SC_H
    UINT64_C(872419451),	// CV_CMPGTU_B
    UINT64_C(872415355),	// CV_CMPGTU_H
    UINT64_C(872444027),	// CV_CMPGTU_SCI_B
    UINT64_C(872439931),	// CV_CMPGTU_SCI_H
    UINT64_C(872435835),	// CV_CMPGTU_SC_B
    UINT64_C(872431739),	// CV_CMPGTU_SC_H
    UINT64_C(335548539),	// CV_CMPGT_B
    UINT64_C(335544443),	// CV_CMPGT_H
    UINT64_C(335573115),	// CV_CMPGT_SCI_B
    UINT64_C(335569019),	// CV_CMPGT_SCI_H
    UINT64_C(335564923),	// CV_CMPGT_SC_B
    UINT64_C(335560827),	// CV_CMPGT_SC_H
    UINT64_C(1275072635),	// CV_CMPLEU_B
    UINT64_C(1275068539),	// CV_CMPLEU_H
    UINT64_C(1275097211),	// CV_CMPLEU_SCI_B
    UINT64_C(1275093115),	// CV_CMPLEU_SCI_H
    UINT64_C(1275089019),	// CV_CMPLEU_SC_B
    UINT64_C(1275084923),	// CV_CMPLEU_SC_H
    UINT64_C(738201723),	// CV_CMPLE_B
    UINT64_C(738197627),	// CV_CMPLE_H
    UINT64_C(738226299),	// CV_CMPLE_SCI_B
    UINT64_C(738222203),	// CV_CMPLE_SCI_H
    UINT64_C(738218107),	// CV_CMPLE_SC_B
    UINT64_C(738214011),	// CV_CMPLE_SC_H
    UINT64_C(1140854907),	// CV_CMPLTU_B
    UINT64_C(1140850811),	// CV_CMPLTU_H
    UINT64_C(1140879483),	// CV_CMPLTU_SCI_B
    UINT64_C(1140875387),	// CV_CMPLTU_SCI_H
    UINT64_C(1140871291),	// CV_CMPLTU_SC_B
    UINT64_C(1140867195),	// CV_CMPLTU_SC_H
    UINT64_C(603983995),	// CV_CMPLT_B
    UINT64_C(603979899),	// CV_CMPLT_H
    UINT64_C(604008571),	// CV_CMPLT_SCI_B
    UINT64_C(604004475),	// CV_CMPLT_SCI_H
    UINT64_C(604000379),	// CV_CMPLT_SC_B
    UINT64_C(603996283),	// CV_CMPLT_SC_H
    UINT64_C(201330811),	// CV_CMPNE_B
    UINT64_C(201326715),	// CV_CMPNE_H
    UINT64_C(201355387),	// CV_CMPNE_SCI_B
    UINT64_C(201351291),	// CV_CMPNE_SCI_H
    UINT64_C(201347195),	// CV_CMPNE_SC_B
    UINT64_C(201343099),	// CV_CMPNE_SC_H
    UINT64_C(1207971883),	// CV_CNT
    UINT64_C(1543503995),	// CV_CPLXCONJ
    UINT64_C(1442840699),	// CV_CPLXMUL_I
    UINT64_C(1442848891),	// CV_CPLXMUL_I_DIV2
    UINT64_C(1442857083),	// CV_CPLXMUL_I_DIV4
    UINT64_C(1442865275),	// CV_CPLXMUL_I_DIV8
    UINT64_C(1409286267),	// CV_CPLXMUL_R
    UINT64_C(1409294459),	// CV_CPLXMUL_R_DIV2
    UINT64_C(1409302651),	// CV_CPLXMUL_R_DIV4
    UINT64_C(1409310843),	// CV_CPLXMUL_R_DIV8
    UINT64_C(2415923323),	// CV_DOTSP_B
    UINT64_C(2415919227),	// CV_DOTSP_H
    UINT64_C(2415947899),	// CV_DOTSP_SCI_B
    UINT64_C(2415943803),	// CV_DOTSP_SCI_H
    UINT64_C(2415939707),	// CV_DOTSP_SC_B
    UINT64_C(2415935611),	// CV_DOTSP_SC_H
    UINT64_C(2147487867),	// CV_DOTUP_B
    UINT64_C(2147483771),	// CV_DOTUP_H
    UINT64_C(2147512443),	// CV_DOTUP_SCI_B
    UINT64_C(2147508347),	// CV_DOTUP_SCI_H
    UINT64_C(2147504251),	// CV_DOTUP_SC_B
    UINT64_C(2147500155),	// CV_DOTUP_SC_H
    UINT64_C(2281705595),	// CV_DOTUSP_B
    UINT64_C(2281701499),	// CV_DOTUSP_H
    UINT64_C(2281730171),	// CV_DOTUSP_SCI_B
    UINT64_C(2281726075),	// CV_DOTUSP_SCI_H
    UINT64_C(2281721979),	// CV_DOTUSP_SC_B
    UINT64_C(2281717883),	// CV_DOTUSP_SC_H
    UINT64_C(12299),	// CV_ELW
    UINT64_C(1677733931),	// CV_EXTBS
    UINT64_C(1711288363),	// CV_EXTBZ
    UINT64_C(1610625067),	// CV_EXTHS
    UINT64_C(1644179499),	// CV_EXTHZ
    UINT64_C(91),	// CV_EXTRACT
    UINT64_C(805318699),	// CV_EXTRACTR
    UINT64_C(1073741915),	// CV_EXTRACTU
    UINT64_C(838873131),	// CV_EXTRACTUR
    UINT64_C(3087020155),	// CV_EXTRACTU_B
    UINT64_C(3087016059),	// CV_EXTRACTU_H
    UINT64_C(3087011963),	// CV_EXTRACT_B
    UINT64_C(3087007867),	// CV_EXTRACT_H
    UINT64_C(1107308587),	// CV_FF1
    UINT64_C(1140863019),	// CV_FL1
    UINT64_C(2147483739),	// CV_INSERT
    UINT64_C(872427563),	// CV_INSERTR
    UINT64_C(3087028347),	// CV_INSERT_B
    UINT64_C(3087024251),	// CV_INSERT_H
    UINT64_C(16395),	// CV_LBU_ri_inc
    UINT64_C(402665515),	// CV_LBU_rr
    UINT64_C(268447787),	// CV_LBU_rr_inc
    UINT64_C(11),	// CV_LB_ri_inc
    UINT64_C(134230059),	// CV_LB_rr
    UINT64_C(12331),	// CV_LB_rr_inc
    UINT64_C(20491),	// CV_LHU_ri_inc
    UINT64_C(436219947),	// CV_LHU_rr
    UINT64_C(302002219),	// CV_LHU_rr_inc
    UINT64_C(4107),	// CV_LH_ri_inc
    UINT64_C(167784491),	// CV_LH_rr
    UINT64_C(33566763),	// CV_LH_rr_inc
    UINT64_C(8203),	// CV_LW_ri_inc
    UINT64_C(201338923),	// CV_LW_rr
    UINT64_C(67121195),	// CV_LW_rr_inc
    UINT64_C(2415931435),	// CV_MAC
    UINT64_C(1073766491),	// CV_MACHHSN
    UINT64_C(3221250139),	// CV_MACHHSRN
    UINT64_C(1073770587),	// CV_MACHHUN
    UINT64_C(3221254235),	// CV_MACHHURN
    UINT64_C(24667),	// CV_MACSN
    UINT64_C(2147508315),	// CV_MACSRN
    UINT64_C(28763),	// CV_MACUN
    UINT64_C(2147512411),	// CV_MACURN
    UINT64_C(1509961771),	// CV_MAX
    UINT64_C(1543516203),	// CV_MAXU
    UINT64_C(939528315),	// CV_MAXU_B
    UINT64_C(939524219),	// CV_MAXU_H
    UINT64_C(939552891),	// CV_MAXU_SCI_B
    UINT64_C(939548795),	// CV_MAXU_SCI_H
    UINT64_C(939544699),	// CV_MAXU_SC_B
    UINT64_C(939540603),	// CV_MAXU_SC_H
    UINT64_C(805310587),	// CV_MAX_B
    UINT64_C(805306491),	// CV_MAX_H
    UINT64_C(805335163),	// CV_MAX_SCI_B
    UINT64_C(805331067),	// CV_MAX_SCI_H
    UINT64_C(805326971),	// CV_MAX_SC_B
    UINT64_C(805322875),	// CV_MAX_SC_H
    UINT64_C(1442852907),	// CV_MIN
    UINT64_C(1476407339),	// CV_MINU
    UINT64_C(671092859),	// CV_MINU_B
    UINT64_C(671088763),	// CV_MINU_H
    UINT64_C(671117435),	// CV_MINU_SCI_B
    UINT64_C(671113339),	// CV_MINU_SCI_H
    UINT64_C(671109243),	// CV_MINU_SC_B
    UINT64_C(671105147),	// CV_MINU_SC_H
    UINT64_C(536875131),	// CV_MIN_B
    UINT64_C(536871035),	// CV_MIN_H
    UINT64_C(536899707),	// CV_MIN_SCI_B
    UINT64_C(536895611),	// CV_MIN_SCI_H
    UINT64_C(536891515),	// CV_MIN_SC_B
    UINT64_C(536887419),	// CV_MIN_SC_H
    UINT64_C(2449485867),	// CV_MSU
    UINT64_C(1073758299),	// CV_MULHHSN
    UINT64_C(3221241947),	// CV_MULHHSRN
    UINT64_C(1073762395),	// CV_MULHHUN
    UINT64_C(3221246043),	// CV_MULHHURN
    UINT64_C(16475),	// CV_MULSN
    UINT64_C(2147500123),	// CV_MULSRN
    UINT64_C(20571),	// CV_MULUN
    UINT64_C(2147504219),	// CV_MULURN
    UINT64_C(1476399227),	// CV_OR_B
    UINT64_C(1476395131),	// CV_OR_H
    UINT64_C(1476423803),	// CV_OR_SCI_B
    UINT64_C(1476419707),	// CV_OR_SCI_H
    UINT64_C(1476415611),	// CV_OR_SC_B
    UINT64_C(1476411515),	// CV_OR_SC_H
    UINT64_C(4026531963),	// CV_PACK
    UINT64_C(4194308219),	// CV_PACKHI_B
    UINT64_C(4160753787),	// CV_PACKLO_B
    UINT64_C(4060086395),	// CV_PACK_H
    UINT64_C(1073754155),	// CV_ROR
    UINT64_C(43),	// CV_SB_ri_inc
    UINT64_C(671100971),	// CV_SB_rr
    UINT64_C(536883243),	// CV_SB_rr_inc
    UINT64_C(2818576507),	// CV_SDOTSP_B
    UINT64_C(2818572411),	// CV_SDOTSP_H
    UINT64_C(2818601083),	// CV_SDOTSP_SCI_B
    UINT64_C(2818596987),	// CV_SDOTSP_SCI_H
    UINT64_C(2818592891),	// CV_SDOTSP_SC_B
    UINT64_C(2818588795),	// CV_SDOTSP_SC_H
    UINT64_C(2550141051),	// CV_SDOTUP_B
    UINT64_C(2550136955),	// CV_SDOTUP_H
    UINT64_C(2550165627),	// CV_SDOTUP_SCI_B
    UINT64_C(2550161531),	// CV_SDOTUP_SCI_H
    UINT64_C(2550157435),	// CV_SDOTUP_SC_B
    UINT64_C(2550153339),	// CV_SDOTUP_SC_H
    UINT64_C(2684358779),	// CV_SDOTUSP_B
    UINT64_C(2684354683),	// CV_SDOTUSP_H
    UINT64_C(2684383355),	// CV_SDOTUSP_SCI_B
    UINT64_C(2684379259),	// CV_SDOTUSP_SCI_H
    UINT64_C(2684375163),	// CV_SDOTUSP_SC_B
    UINT64_C(2684371067),	// CV_SDOTUSP_SC_H
    UINT64_C(3758100603),	// CV_SHUFFLE2_B
    UINT64_C(3758096507),	// CV_SHUFFLE2_H
    UINT64_C(3221254267),	// CV_SHUFFLEI0_SCI_B
    UINT64_C(3355471995),	// CV_SHUFFLEI1_SCI_B
    UINT64_C(3489689723),	// CV_SHUFFLEI2_SCI_B
    UINT64_C(3623907451),	// CV_SHUFFLEI3_SCI_B
    UINT64_C(3221229691),	// CV_SHUFFLE_B
    UINT64_C(3221225595),	// CV_SHUFFLE_H
    UINT64_C(3221250171),	// CV_SHUFFLE_SCI_H
    UINT64_C(4139),	// CV_SH_ri_inc
    UINT64_C(704655403),	// CV_SH_rr
    UINT64_C(570437675),	// CV_SH_rr_inc
    UINT64_C(1375744043),	// CV_SLET
    UINT64_C(1409298475),	// CV_SLETU
    UINT64_C(1342181499),	// CV_SLL_B
    UINT64_C(1342177403),	// CV_SLL_H
    UINT64_C(1342206075),	// CV_SLL_SCI_B
    UINT64_C(1342201979),	// CV_SLL_SCI_H
    UINT64_C(1342197883),	// CV_SLL_SC_B
    UINT64_C(1342193787),	// CV_SLL_SC_H
    UINT64_C(1207963771),	// CV_SRA_B
    UINT64_C(1207959675),	// CV_SRA_H
    UINT64_C(1207988347),	// CV_SRA_SCI_B
    UINT64_C(1207984251),	// CV_SRA_SCI_H
    UINT64_C(1207980155),	// CV_SRA_SC_B
    UINT64_C(1207976059),	// CV_SRA_SC_H
    UINT64_C(1073746043),	// CV_SRL_B
    UINT64_C(1073741947),	// CV_SRL_H
    UINT64_C(1073770619),	// CV_SRL_SCI_B
    UINT64_C(1073766523),	// CV_SRL_SCI_H
    UINT64_C(1073762427),	// CV_SRL_SC_B
    UINT64_C(1073758331),	// CV_SRL_SC_H
    UINT64_C(12379),	// CV_SUBN
    UINT64_C(2281713707),	// CV_SUBNR
    UINT64_C(2147496027),	// CV_SUBRN
    UINT64_C(2348822571),	// CV_SUBRNR
    UINT64_C(1677721723),	// CV_SUBROTMJ
    UINT64_C(1677729915),	// CV_SUBROTMJ_DIV2
    UINT64_C(1677738107),	// CV_SUBROTMJ_DIV4
    UINT64_C(1677746299),	// CV_SUBROTMJ_DIV8
    UINT64_C(1073754203),	// CV_SUBUN
    UINT64_C(2315268139),	// CV_SUBUNR
    UINT64_C(3221237851),	// CV_SUBURN
    UINT64_C(2382377003),	// CV_SUBURNR
    UINT64_C(134221947),	// CV_SUB_B
    UINT64_C(1946165371),	// CV_SUB_DIV2
    UINT64_C(1946173563),	// CV_SUB_DIV4
    UINT64_C(1946181755),	// CV_SUB_DIV8
    UINT64_C(134217851),	// CV_SUB_H
    UINT64_C(134246523),	// CV_SUB_SCI_B
    UINT64_C(134242427),	// CV_SUB_SCI_H
    UINT64_C(134238331),	// CV_SUB_SC_B
    UINT64_C(134234235),	// CV_SUB_SC_H
    UINT64_C(8235),	// CV_SW_ri_inc
    UINT64_C(738209835),	// CV_SW_rr
    UINT64_C(603992107),	// CV_SW_rr_inc
    UINT64_C(1610616955),	// CV_XOR_B
    UINT64_C(1610612859),	// CV_XOR_H
    UINT64_C(1610641531),	// CV_XOR_SCI_B
    UINT64_C(1610637435),	// CV_XOR_SCI_H
    UINT64_C(1610633339),	// CV_XOR_SC_B
    UINT64_C(1610629243),	// CV_XOR_SC_H
    UINT64_C(234901555),	// CZERO_EQZ
    UINT64_C(234909747),	// CZERO_NEZ
    UINT64_C(36866),	// C_ADD
    UINT64_C(1),	// C_ADDI
    UINT64_C(24833),	// C_ADDI16SP
    UINT64_C(0),	// C_ADDI4SPN
    UINT64_C(8193),	// C_ADDIW
    UINT64_C(1),	// C_ADDI_HINT_IMM_ZERO
    UINT64_C(1),	// C_ADDI_NOP
    UINT64_C(39969),	// C_ADDW
    UINT64_C(36866),	// C_ADD_HINT
    UINT64_C(35937),	// C_AND
    UINT64_C(34817),	// C_ANDI
    UINT64_C(49153),	// C_BEQZ
    UINT64_C(57345),	// C_BNEZ
    UINT64_C(36866),	// C_EBREAK
    UINT64_C(8192),	// C_FLD
    UINT64_C(8194),	// C_FLDSP
    UINT64_C(24576),	// C_FLW
    UINT64_C(24578),	// C_FLWSP
    UINT64_C(40960),	// C_FSD
    UINT64_C(40962),	// C_FSDSP
    UINT64_C(57344),	// C_FSW
    UINT64_C(57346),	// C_FSWSP
    UINT64_C(40961),	// C_J
    UINT64_C(8193),	// C_JAL
    UINT64_C(36866),	// C_JALR
    UINT64_C(32770),	// C_JR
    UINT64_C(32768),	// C_LBU
    UINT64_C(24576),	// C_LD
    UINT64_C(24578),	// C_LDSP
    UINT64_C(33856),	// C_LH
    UINT64_C(33792),	// C_LHU
    UINT64_C(16385),	// C_LI
    UINT64_C(16385),	// C_LI_HINT
    UINT64_C(24577),	// C_LUI
    UINT64_C(24577),	// C_LUI_HINT
    UINT64_C(16384),	// C_LW
    UINT64_C(16386),	// C_LWSP
    UINT64_C(24705),	// C_MOP1
    UINT64_C(25985),	// C_MOP11
    UINT64_C(26241),	// C_MOP13
    UINT64_C(26497),	// C_MOP15
    UINT64_C(24961),	// C_MOP3
    UINT64_C(25217),	// C_MOP5
    UINT64_C(25473),	// C_MOP7
    UINT64_C(25729),	// C_MOP9
    UINT64_C(40001),	// C_MUL
    UINT64_C(32770),	// C_MV
    UINT64_C(32770),	// C_MV_HINT
    UINT64_C(1),	// C_NOP
    UINT64_C(1),	// C_NOP_HINT
    UINT64_C(40053),	// C_NOT
    UINT64_C(35905),	// C_OR
    UINT64_C(34816),	// C_SB
    UINT64_C(57344),	// C_SD
    UINT64_C(57346),	// C_SDSP
    UINT64_C(40037),	// C_SEXT_B
    UINT64_C(40045),	// C_SEXT_H
    UINT64_C(35840),	// C_SH
    UINT64_C(2),	// C_SLLI
    UINT64_C(2),	// C_SLLI64_HINT
    UINT64_C(2),	// C_SLLI_HINT
    UINT64_C(33793),	// C_SRAI
    UINT64_C(33793),	// C_SRAI64_HINT
    UINT64_C(32769),	// C_SRLI
    UINT64_C(32769),	// C_SRLI64_HINT
    UINT64_C(25217),	// C_SSPOPCHK
    UINT64_C(24705),	// C_SSPUSH
    UINT64_C(35841),	// C_SUB
    UINT64_C(39937),	// C_SUBW
    UINT64_C(49152),	// C_SW
    UINT64_C(49154),	// C_SWSP
    UINT64_C(0),	// C_UNIMP
    UINT64_C(35873),	// C_XOR
    UINT64_C(40033),	// C_ZEXT_B
    UINT64_C(40041),	// C_ZEXT_H
    UINT64_C(40049),	// C_ZEXT_W
    UINT64_C(33570867),	// DIV
    UINT64_C(33574963),	// DIVU
    UINT64_C(33574971),	// DIVUW
    UINT64_C(33570875),	// DIVW
    UINT64_C(2065694835),	// DRET
    UINT64_C(1048691),	// EBREAK
    UINT64_C(115),	// ECALL
    UINT64_C(33554515),	// FADD_D
    UINT64_C(33554515),	// FADD_D_IN32X
    UINT64_C(33554515),	// FADD_D_INX
    UINT64_C(67108947),	// FADD_H
    UINT64_C(67108947),	// FADD_H_INX
    UINT64_C(83),	// FADD_S
    UINT64_C(83),	// FADD_S_INX
    UINT64_C(3791654995),	// FCLASS_D
    UINT64_C(3791654995),	// FCLASS_D_IN32X
    UINT64_C(3791654995),	// FCLASS_D_INX
    UINT64_C(3825209427),	// FCLASS_H
    UINT64_C(3825209427),	// FCLASS_H_INX
    UINT64_C(3758100563),	// FCLASS_S
    UINT64_C(3758100563),	// FCLASS_S_INX
    UINT64_C(3263168595),	// FCVTMOD_W_D
    UINT64_C(1149239379),	// FCVT_BF16_S
    UINT64_C(1109393491),	// FCVT_D_H
    UINT64_C(1109393491),	// FCVT_D_H_IN32X
    UINT64_C(1109393491),	// FCVT_D_H_INX
    UINT64_C(3525312595),	// FCVT_D_L
    UINT64_C(3526361171),	// FCVT_D_LU
    UINT64_C(3526361171),	// FCVT_D_LU_INX
    UINT64_C(3525312595),	// FCVT_D_L_INX
    UINT64_C(1107296339),	// FCVT_D_S
    UINT64_C(1107296339),	// FCVT_D_S_IN32X
    UINT64_C(1107296339),	// FCVT_D_S_INX
    UINT64_C(3523215443),	// FCVT_D_W
    UINT64_C(3524264019),	// FCVT_D_WU
    UINT64_C(3524264019),	// FCVT_D_WU_IN32X
    UINT64_C(3524264019),	// FCVT_D_WU_INX
    UINT64_C(3523215443),	// FCVT_D_W_IN32X
    UINT64_C(3523215443),	// FCVT_D_W_INX
    UINT64_C(1141899347),	// FCVT_H_D
    UINT64_C(1141899347),	// FCVT_H_D_IN32X
    UINT64_C(1141899347),	// FCVT_H_D_INX
    UINT64_C(3558867027),	// FCVT_H_L
    UINT64_C(3559915603),	// FCVT_H_LU
    UINT64_C(3559915603),	// FCVT_H_LU_INX
    UINT64_C(3558867027),	// FCVT_H_L_INX
    UINT64_C(1140850771),	// FCVT_H_S
    UINT64_C(1140850771),	// FCVT_H_S_INX
    UINT64_C(3556769875),	// FCVT_H_W
    UINT64_C(3557818451),	// FCVT_H_WU
    UINT64_C(3557818451),	// FCVT_H_WU_INX
    UINT64_C(3556769875),	// FCVT_H_W_INX
    UINT64_C(3257925715),	// FCVT_LU_D
    UINT64_C(3257925715),	// FCVT_LU_D_INX
    UINT64_C(3291480147),	// FCVT_LU_H
    UINT64_C(3291480147),	// FCVT_LU_H_INX
    UINT64_C(3224371283),	// FCVT_LU_S
    UINT64_C(3224371283),	// FCVT_LU_S_INX
    UINT64_C(3256877139),	// FCVT_L_D
    UINT64_C(3256877139),	// FCVT_L_D_INX
    UINT64_C(3290431571),	// FCVT_L_H
    UINT64_C(3290431571),	// FCVT_L_H_INX
    UINT64_C(3223322707),	// FCVT_L_S
    UINT64_C(3223322707),	// FCVT_L_S_INX
    UINT64_C(1080033363),	// FCVT_S_BF16
    UINT64_C(1074790483),	// FCVT_S_D
    UINT64_C(1074790483),	// FCVT_S_D_IN32X
    UINT64_C(1074790483),	// FCVT_S_D_INX
    UINT64_C(1075839059),	// FCVT_S_H
    UINT64_C(1075839059),	// FCVT_S_H_INX
    UINT64_C(3491758163),	// FCVT_S_L
    UINT64_C(3492806739),	// FCVT_S_LU
    UINT64_C(3492806739),	// FCVT_S_LU_INX
    UINT64_C(3491758163),	// FCVT_S_L_INX
    UINT64_C(3489661011),	// FCVT_S_W
    UINT64_C(3490709587),	// FCVT_S_WU
    UINT64_C(3490709587),	// FCVT_S_WU_INX
    UINT64_C(3489661011),	// FCVT_S_W_INX
    UINT64_C(3255828563),	// FCVT_WU_D
    UINT64_C(3255828563),	// FCVT_WU_D_IN32X
    UINT64_C(3255828563),	// FCVT_WU_D_INX
    UINT64_C(3289382995),	// FCVT_WU_H
    UINT64_C(3289382995),	// FCVT_WU_H_INX
    UINT64_C(3222274131),	// FCVT_WU_S
    UINT64_C(3222274131),	// FCVT_WU_S_INX
    UINT64_C(3254779987),	// FCVT_W_D
    UINT64_C(3254779987),	// FCVT_W_D_IN32X
    UINT64_C(3254779987),	// FCVT_W_D_INX
    UINT64_C(3288334419),	// FCVT_W_H
    UINT64_C(3288334419),	// FCVT_W_H_INX
    UINT64_C(3221225555),	// FCVT_W_S
    UINT64_C(3221225555),	// FCVT_W_S_INX
    UINT64_C(436207699),	// FDIV_D
    UINT64_C(436207699),	// FDIV_D_IN32X
    UINT64_C(436207699),	// FDIV_D_INX
    UINT64_C(469762131),	// FDIV_H
    UINT64_C(469762131),	// FDIV_H_INX
    UINT64_C(402653267),	// FDIV_S
    UINT64_C(402653267),	// FDIV_S_INX
    UINT64_C(15),	// FENCE
    UINT64_C(4111),	// FENCE_I
    UINT64_C(2200961039),	// FENCE_TSO
    UINT64_C(2717917267),	// FEQ_D
    UINT64_C(2717917267),	// FEQ_D_IN32X
    UINT64_C(2717917267),	// FEQ_D_INX
    UINT64_C(2751471699),	// FEQ_H
    UINT64_C(2751471699),	// FEQ_H_INX
    UINT64_C(2684362835),	// FEQ_S
    UINT64_C(2684362835),	// FEQ_S_INX
    UINT64_C(12295),	// FLD
    UINT64_C(2717925459),	// FLEQ_D
    UINT64_C(2751479891),	// FLEQ_H
    UINT64_C(2684371027),	// FLEQ_S
    UINT64_C(2717909075),	// FLE_D
    UINT64_C(2717909075),	// FLE_D_IN32X
    UINT64_C(2717909075),	// FLE_D_INX
    UINT64_C(2751463507),	// FLE_H
    UINT64_C(2751463507),	// FLE_H_INX
    UINT64_C(2684354643),	// FLE_S
    UINT64_C(2684354643),	// FLE_S_INX
    UINT64_C(4103),	// FLH
    UINT64_C(4061134931),	// FLI_D
    UINT64_C(4094689363),	// FLI_H
    UINT64_C(4027580499),	// FLI_S
    UINT64_C(2717929555),	// FLTQ_D
    UINT64_C(2751483987),	// FLTQ_H
    UINT64_C(2684375123),	// FLTQ_S
    UINT64_C(2717913171),	// FLT_D
    UINT64_C(2717913171),	// FLT_D_IN32X
    UINT64_C(2717913171),	// FLT_D_INX
    UINT64_C(2751467603),	// FLT_H
    UINT64_C(2751467603),	// FLT_H_INX
    UINT64_C(2684358739),	// FLT_S
    UINT64_C(2684358739),	// FLT_S_INX
    UINT64_C(8199),	// FLW
    UINT64_C(33554499),	// FMADD_D
    UINT64_C(33554499),	// FMADD_D_IN32X
    UINT64_C(33554499),	// FMADD_D_INX
    UINT64_C(67108931),	// FMADD_H
    UINT64_C(67108931),	// FMADD_H_INX
    UINT64_C(67),	// FMADD_S
    UINT64_C(67),	// FMADD_S_INX
    UINT64_C(704655443),	// FMAXM_D
    UINT64_C(738209875),	// FMAXM_H
    UINT64_C(671101011),	// FMAXM_S
    UINT64_C(704647251),	// FMAX_D
    UINT64_C(704647251),	// FMAX_D_IN32X
    UINT64_C(704647251),	// FMAX_D_INX
    UINT64_C(738201683),	// FMAX_H
    UINT64_C(738201683),	// FMAX_H_INX
    UINT64_C(671092819),	// FMAX_S
    UINT64_C(671092819),	// FMAX_S_INX
    UINT64_C(704651347),	// FMINM_D
    UINT64_C(738205779),	// FMINM_H
    UINT64_C(671096915),	// FMINM_S
    UINT64_C(704643155),	// FMIN_D
    UINT64_C(704643155),	// FMIN_D_IN32X
    UINT64_C(704643155),	// FMIN_D_INX
    UINT64_C(738197587),	// FMIN_H
    UINT64_C(738197587),	// FMIN_H_INX
    UINT64_C(671088723),	// FMIN_S
    UINT64_C(671088723),	// FMIN_S_INX
    UINT64_C(33554503),	// FMSUB_D
    UINT64_C(33554503),	// FMSUB_D_IN32X
    UINT64_C(33554503),	// FMSUB_D_INX
    UINT64_C(67108935),	// FMSUB_H
    UINT64_C(67108935),	// FMSUB_H_INX
    UINT64_C(71),	// FMSUB_S
    UINT64_C(71),	// FMSUB_S_INX
    UINT64_C(301989971),	// FMUL_D
    UINT64_C(301989971),	// FMUL_D_IN32X
    UINT64_C(301989971),	// FMUL_D_INX
    UINT64_C(335544403),	// FMUL_H
    UINT64_C(335544403),	// FMUL_H_INX
    UINT64_C(268435539),	// FMUL_S
    UINT64_C(268435539),	// FMUL_S_INX
    UINT64_C(3792699475),	// FMVH_X_D
    UINT64_C(2986344531),	// FMVP_D_X
    UINT64_C(4060086355),	// FMV_D_X
    UINT64_C(4093640787),	// FMV_H_X
    UINT64_C(4026531923),	// FMV_W_X
    UINT64_C(3791650899),	// FMV_X_D
    UINT64_C(3825205331),	// FMV_X_H
    UINT64_C(3758096467),	// FMV_X_W
    UINT64_C(3758096467),	// FMV_X_W_FPR64
    UINT64_C(33554511),	// FNMADD_D
    UINT64_C(33554511),	// FNMADD_D_IN32X
    UINT64_C(33554511),	// FNMADD_D_INX
    UINT64_C(67108943),	// FNMADD_H
    UINT64_C(67108943),	// FNMADD_H_INX
    UINT64_C(79),	// FNMADD_S
    UINT64_C(79),	// FNMADD_S_INX
    UINT64_C(33554507),	// FNMSUB_D
    UINT64_C(33554507),	// FNMSUB_D_IN32X
    UINT64_C(33554507),	// FNMSUB_D_INX
    UINT64_C(67108939),	// FNMSUB_H
    UINT64_C(67108939),	// FNMSUB_H_INX
    UINT64_C(75),	// FNMSUB_S
    UINT64_C(75),	// FNMSUB_S_INX
    UINT64_C(1112539219),	// FROUNDNX_D
    UINT64_C(1146093651),	// FROUNDNX_H
    UINT64_C(1078984787),	// FROUNDNX_S
    UINT64_C(1111490643),	// FROUND_D
    UINT64_C(1145045075),	// FROUND_H
    UINT64_C(1077936211),	// FROUND_S
    UINT64_C(12327),	// FSD
    UINT64_C(570429523),	// FSGNJN_D
    UINT64_C(570429523),	// FSGNJN_D_IN32X
    UINT64_C(570429523),	// FSGNJN_D_INX
    UINT64_C(603983955),	// FSGNJN_H
    UINT64_C(603983955),	// FSGNJN_H_INX
    UINT64_C(536875091),	// FSGNJN_S
    UINT64_C(536875091),	// FSGNJN_S_INX
    UINT64_C(570433619),	// FSGNJX_D
    UINT64_C(570433619),	// FSGNJX_D_IN32X
    UINT64_C(570433619),	// FSGNJX_D_INX
    UINT64_C(603988051),	// FSGNJX_H
    UINT64_C(603988051),	// FSGNJX_H_INX
    UINT64_C(536879187),	// FSGNJX_S
    UINT64_C(536879187),	// FSGNJX_S_INX
    UINT64_C(570425427),	// FSGNJ_D
    UINT64_C(570425427),	// FSGNJ_D_IN32X
    UINT64_C(570425427),	// FSGNJ_D_INX
    UINT64_C(603979859),	// FSGNJ_H
    UINT64_C(603979859),	// FSGNJ_H_INX
    UINT64_C(536870995),	// FSGNJ_S
    UINT64_C(536870995),	// FSGNJ_S_INX
    UINT64_C(4135),	// FSH
    UINT64_C(1509949523),	// FSQRT_D
    UINT64_C(1509949523),	// FSQRT_D_IN32X
    UINT64_C(1509949523),	// FSQRT_D_INX
    UINT64_C(1543503955),	// FSQRT_H
    UINT64_C(1543503955),	// FSQRT_H_INX
    UINT64_C(1476395091),	// FSQRT_S
    UINT64_C(1476395091),	// FSQRT_S_INX
    UINT64_C(167772243),	// FSUB_D
    UINT64_C(167772243),	// FSUB_D_IN32X
    UINT64_C(167772243),	// FSUB_D_INX
    UINT64_C(201326675),	// FSUB_H
    UINT64_C(201326675),	// FSUB_H_INX
    UINT64_C(134217811),	// FSUB_S
    UINT64_C(134217811),	// FSUB_S_INX
    UINT64_C(8231),	// FSW
    UINT64_C(1644167283),	// HFENCE_GVMA
    UINT64_C(570425459),	// HFENCE_VVMA
    UINT64_C(1711276147),	// HINVAL_GVMA
    UINT64_C(637534323),	// HINVAL_VVMA
    UINT64_C(1680883827),	// HLVX_HU
    UINT64_C(1747992691),	// HLVX_WU
    UINT64_C(1610629235),	// HLV_B
    UINT64_C(1611677811),	// HLV_BU
    UINT64_C(1811955827),	// HLV_D
    UINT64_C(1677738099),	// HLV_H
    UINT64_C(1678786675),	// HLV_HU
    UINT64_C(1744846963),	// HLV_W
    UINT64_C(1745895539),	// HLV_WU
    UINT64_C(1644183667),	// HSV_B
    UINT64_C(1845510259),	// HSV_D
    UINT64_C(1711292531),	// HSV_H
    UINT64_C(1778401395),	// HSV_W
    UINT64_C(0),	// Insn16
    UINT64_C(0),	// Insn32
    UINT64_C(0),	// InsnB
    UINT64_C(0),	// InsnCA
    UINT64_C(0),	// InsnCB
    UINT64_C(0),	// InsnCI
    UINT64_C(0),	// InsnCIW
    UINT64_C(0),	// InsnCJ
    UINT64_C(0),	// InsnCL
    UINT64_C(0),	// InsnCR
    UINT64_C(0),	// InsnCS
    UINT64_C(0),	// InsnCSS
    UINT64_C(0),	// InsnI
    UINT64_C(0),	// InsnI_Mem
    UINT64_C(0),	// InsnJ
    UINT64_C(0),	// InsnR
    UINT64_C(0),	// InsnR4
    UINT64_C(0),	// InsnS
    UINT64_C(0),	// InsnU
    UINT64_C(111),	// JAL
    UINT64_C(103),	// JALR
    UINT64_C(3),	// LB
    UINT64_C(16387),	// LBU
    UINT64_C(872415279),	// LB_AQ
    UINT64_C(905969711),	// LB_AQ_RL
    UINT64_C(12291),	// LD
    UINT64_C(872427567),	// LD_AQ
    UINT64_C(905981999),	// LD_AQ_RL
    UINT64_C(4099),	// LH
    UINT64_C(20483),	// LHU
    UINT64_C(872419375),	// LH_AQ
    UINT64_C(905973807),	// LH_AQ_RL
    UINT64_C(268447791),	// LR_D
    UINT64_C(335556655),	// LR_D_AQ
    UINT64_C(369111087),	// LR_D_AQ_RL
    UINT64_C(302002223),	// LR_D_RL
    UINT64_C(268443695),	// LR_W
    UINT64_C(335552559),	// LR_W_AQ
    UINT64_C(369106991),	// LR_W_AQ_RL
    UINT64_C(301998127),	// LR_W_RL
    UINT64_C(55),	// LUI
    UINT64_C(8195),	// LW
    UINT64_C(24579),	// LWU
    UINT64_C(872423471),	// LW_AQ
    UINT64_C(905977903),	// LW_AQ_RL
    UINT64_C(167796787),	// MAX
    UINT64_C(167800883),	// MAXU
    UINT64_C(167788595),	// MIN
    UINT64_C(167792691),	// MINU
    UINT64_C(2176860275),	// MOPR0
    UINT64_C(2177908851),	// MOPR1
    UINT64_C(2313175155),	// MOPR10
    UINT64_C(2314223731),	// MOPR11
    UINT64_C(2378186867),	// MOPR12
    UINT64_C(2379235443),	// MOPR13
    UINT64_C(2380284019),	// MOPR14
    UINT64_C(2381332595),	// MOPR15
    UINT64_C(3250602099),	// MOPR16
    UINT64_C(3251650675),	// MOPR17
    UINT64_C(3252699251),	// MOPR18
    UINT64_C(3253747827),	// MOPR19
    UINT64_C(2178957427),	// MOPR2
    UINT64_C(3317710963),	// MOPR20
    UINT64_C(3318759539),	// MOPR21
    UINT64_C(3319808115),	// MOPR22
    UINT64_C(3320856691),	// MOPR23
    UINT64_C(3384819827),	// MOPR24
    UINT64_C(3385868403),	// MOPR25
    UINT64_C(3386916979),	// MOPR26
    UINT64_C(3387965555),	// MOPR27
    UINT64_C(3451928691),	// MOPR28
    UINT64_C(3452977267),	// MOPR29
    UINT64_C(2180006003),	// MOPR3
    UINT64_C(3454025843),	// MOPR30
    UINT64_C(3455074419),	// MOPR31
    UINT64_C(2243969139),	// MOPR4
    UINT64_C(2245017715),	// MOPR5
    UINT64_C(2246066291),	// MOPR6
    UINT64_C(2247114867),	// MOPR7
    UINT64_C(2311078003),	// MOPR8
    UINT64_C(2312126579),	// MOPR9
    UINT64_C(2181054579),	// MOPRR0
    UINT64_C(2248163443),	// MOPRR1
    UINT64_C(2315272307),	// MOPRR2
    UINT64_C(2382381171),	// MOPRR3
    UINT64_C(3254796403),	// MOPRR4
    UINT64_C(3321905267),	// MOPRR5
    UINT64_C(3389014131),	// MOPRR6
    UINT64_C(3456122995),	// MOPRR7
    UINT64_C(807403635),	// MRET
    UINT64_C(33554483),	// MUL
    UINT64_C(33558579),	// MULH
    UINT64_C(33562675),	// MULHSU
    UINT64_C(33566771),	// MULHU
    UINT64_C(33554491),	// MULW
    UINT64_C(24627),	// OR
    UINT64_C(678449171),	// ORC_B
    UINT64_C(24595),	// ORI
    UINT64_C(1073766451),	// ORN
    UINT64_C(134234163),	// PACK
    UINT64_C(134246451),	// PACKH
    UINT64_C(134234171),	// PACKW
    UINT64_C(24595),	// PREFETCH_I
    UINT64_C(1073171),	// PREFETCH_R
    UINT64_C(3170323),	// PREFETCH_W
    UINT64_C(8192),	// QK_C_LBU
    UINT64_C(32768),	// QK_C_LBUSP
    UINT64_C(8194),	// QK_C_LHU
    UINT64_C(32800),	// QK_C_LHUSP
    UINT64_C(40960),	// QK_C_SB
    UINT64_C(32832),	// QK_C_SBSP
    UINT64_C(40962),	// QK_C_SH
    UINT64_C(32864),	// QK_C_SHSP
    UINT64_C(33579059),	// REM
    UINT64_C(33583155),	// REMU
    UINT64_C(33583163),	// REMUW
    UINT64_C(33579067),	// REMW
    UINT64_C(1770016787),	// REV8_RV32
    UINT64_C(1803571219),	// REV8_RV64
    UINT64_C(1610616883),	// ROL
    UINT64_C(1610616891),	// ROLW
    UINT64_C(1610633267),	// ROR
    UINT64_C(1610633235),	// RORI
    UINT64_C(1610633243),	// RORIW
    UINT64_C(1610633275),	// RORW
    UINT64_C(35),	// SB
    UINT64_C(1040187439),	// SB_AQ_RL
    UINT64_C(973078575),	// SB_RL
    UINT64_C(402665519),	// SC_D
    UINT64_C(469774383),	// SC_D_AQ
    UINT64_C(503328815),	// SC_D_AQ_RL
    UINT64_C(436219951),	// SC_D_RL
    UINT64_C(402661423),	// SC_W
    UINT64_C(469770287),	// SC_W_AQ
    UINT64_C(503324719),	// SC_W_AQ_RL
    UINT64_C(436215855),	// SC_W_RL
    UINT64_C(12323),	// SD
    UINT64_C(1040199727),	// SD_AQ_RL
    UINT64_C(973090863),	// SD_RL
    UINT64_C(1614811155),	// SEXT_B
    UINT64_C(1615859731),	// SEXT_H
    UINT64_C(403701875),	// SFENCE_INVAL_IR
    UINT64_C(301990003),	// SFENCE_VMA
    UINT64_C(402653299),	// SFENCE_W_INVAL
    UINT64_C(4229955699),	// SF_CDISCARD_D_L1
    UINT64_C(810549363),	// SF_CEASE
    UINT64_C(4227858547),	// SF_CFLUSH_D_L1
    UINT64_C(4131),	// SH
    UINT64_C(536879155),	// SH1ADD
    UINT64_C(536879163),	// SH1ADD_UW
    UINT64_C(536887347),	// SH2ADD
    UINT64_C(536887355),	// SH2ADD_UW
    UINT64_C(536895539),	// SH3ADD
    UINT64_C(536895547),	// SH3ADD_UW
    UINT64_C(270536723),	// SHA256SIG0
    UINT64_C(271585299),	// SHA256SIG1
    UINT64_C(268439571),	// SHA256SUM0
    UINT64_C(269488147),	// SHA256SUM1
    UINT64_C(274731027),	// SHA512SIG0
    UINT64_C(1543503923),	// SHA512SIG0H
    UINT64_C(1409286195),	// SHA512SIG0L
    UINT64_C(275779603),	// SHA512SIG1
    UINT64_C(1577058355),	// SHA512SIG1H
    UINT64_C(1442840627),	// SHA512SIG1L
    UINT64_C(272633875),	// SHA512SUM0
    UINT64_C(1342177331),	// SHA512SUM0R
    UINT64_C(273682451),	// SHA512SUM1
    UINT64_C(1375731763),	// SHA512SUM1R
    UINT64_C(1040191535),	// SH_AQ_RL
    UINT64_C(973082671),	// SH_RL
    UINT64_C(369098867),	// SINVAL_VMA
    UINT64_C(4147),	// SLL
    UINT64_C(4115),	// SLLI
    UINT64_C(4123),	// SLLIW
    UINT64_C(134221851),	// SLLI_UW
    UINT64_C(4155),	// SLLW
    UINT64_C(8243),	// SLT
    UINT64_C(8211),	// SLTI
    UINT64_C(12307),	// SLTIU
    UINT64_C(12339),	// SLTU
    UINT64_C(276828179),	// SM3P0
    UINT64_C(277876755),	// SM3P1
    UINT64_C(805306419),	// SM4ED
    UINT64_C(872415283),	// SM4KS
    UINT64_C(1073762355),	// SRA
    UINT64_C(1073762323),	// SRAI
    UINT64_C(1073762331),	// SRAIW
    UINT64_C(1073762363),	// SRAW
    UINT64_C(270532723),	// SRET
    UINT64_C(20531),	// SRL
    UINT64_C(20499),	// SRLI
    UINT64_C(20507),	// SRLIW
    UINT64_C(20539),	// SRLW
    UINT64_C(1207971887),	// SSAMOSWAP_D
    UINT64_C(1275080751),	// SSAMOSWAP_D_AQ
    UINT64_C(1308635183),	// SSAMOSWAP_D_AQ_RL
    UINT64_C(1241526319),	// SSAMOSWAP_D_RL
    UINT64_C(1207967791),	// SSAMOSWAP_W
    UINT64_C(1275076655),	// SSAMOSWAP_W_AQ
    UINT64_C(1308631087),	// SSAMOSWAP_W_AQ_RL
    UINT64_C(1241522223),	// SSAMOSWAP_W_RL
    UINT64_C(3451928691),	// SSPOPCHK
    UINT64_C(3456122995),	// SSPUSH
    UINT64_C(3451928691),	// SSRDP
    UINT64_C(1073741875),	// SUB
    UINT64_C(1073741883),	// SUBW
    UINT64_C(8227),	// SW
    UINT64_C(1040195631),	// SW_AQ_RL
    UINT64_C(973086767),	// SW_RL
    UINT64_C(2415943691),	// THVdotVMAQASU_VV
    UINT64_C(2483052555),	// THVdotVMAQASU_VX
    UINT64_C(2617270283),	// THVdotVMAQAUS_VX
    UINT64_C(2281725963),	// THVdotVMAQAU_VV
    UINT64_C(2348834827),	// THVdotVMAQAU_VX
    UINT64_C(2147508235),	// THVdotVMAQA_VV
    UINT64_C(2214617099),	// THVdotVMAQA_VX
    UINT64_C(4107),	// TH_ADDSL
    UINT64_C(1048587),	// TH_DCACHE_CALL
    UINT64_C(3145739),	// TH_DCACHE_CIALL
    UINT64_C(45088779),	// TH_DCACHE_CIPA
    UINT64_C(36700171),	// TH_DCACHE_CISW
    UINT64_C(40894475),	// TH_DCACHE_CIVA
    UINT64_C(42991627),	// TH_DCACHE_CPA
    UINT64_C(41943051),	// TH_DCACHE_CPAL1
    UINT64_C(34603019),	// TH_DCACHE_CSW
    UINT64_C(38797323),	// TH_DCACHE_CVA
    UINT64_C(37748747),	// TH_DCACHE_CVAL1
    UINT64_C(2097163),	// TH_DCACHE_IALL
    UINT64_C(44040203),	// TH_DCACHE_IPA
    UINT64_C(35651595),	// TH_DCACHE_ISW
    UINT64_C(39845899),	// TH_DCACHE_IVA
    UINT64_C(8203),	// TH_EXT
    UINT64_C(12299),	// TH_EXTU
    UINT64_C(2214596619),	// TH_FF0
    UINT64_C(2248151051),	// TH_FF1
    UINT64_C(1610637323),	// TH_FLRD
    UINT64_C(1073766411),	// TH_FLRW
    UINT64_C(1879072779),	// TH_FLURD
    UINT64_C(1342201867),	// TH_FLURW
    UINT64_C(1610641419),	// TH_FSRD
    UINT64_C(1073770507),	// TH_FSRW
    UINT64_C(1879076875),	// TH_FSURD
    UINT64_C(1342205963),	// TH_FSURW
    UINT64_C(16777227),	// TH_ICACHE_IALL
    UINT64_C(17825803),	// TH_ICACHE_IALLS
    UINT64_C(58720267),	// TH_ICACHE_IPA
    UINT64_C(50331659),	// TH_ICACHE_IVA
    UINT64_C(22020107),	// TH_L2CACHE_CALL
    UINT64_C(24117259),	// TH_L2CACHE_CIALL
    UINT64_C(23068683),	// TH_L2CACHE_IALL
    UINT64_C(402669579),	// TH_LBIA
    UINT64_C(134234123),	// TH_LBIB
    UINT64_C(2550153227),	// TH_LBUIA
    UINT64_C(2281717771),	// TH_LBUIB
    UINT64_C(4160765963),	// TH_LDD
    UINT64_C(2013282315),	// TH_LDIA
    UINT64_C(1744846859),	// TH_LDIB
    UINT64_C(939540491),	// TH_LHIA
    UINT64_C(671105035),	// TH_LHIB
    UINT64_C(3087024139),	// TH_LHUIA
    UINT64_C(2818588683),	// TH_LHUIB
    UINT64_C(16395),	// TH_LRB
    UINT64_C(2147500043),	// TH_LRBU
    UINT64_C(1610629131),	// TH_LRD
    UINT64_C(536887307),	// TH_LRH
    UINT64_C(2684370955),	// TH_LRHU
    UINT64_C(1073758219),	// TH_LRW
    UINT64_C(3221241867),	// TH_LRWU
    UINT64_C(268451851),	// TH_LURB
    UINT64_C(2415935499),	// TH_LURBU
    UINT64_C(1879064587),	// TH_LURD
    UINT64_C(805322763),	// TH_LURH
    UINT64_C(2952806411),	// TH_LURHU
    UINT64_C(1342193675),	// TH_LURW
    UINT64_C(3489677323),	// TH_LURWU
    UINT64_C(3758112779),	// TH_LWD
    UINT64_C(1476411403),	// TH_LWIA
    UINT64_C(1207975947),	// TH_LWIB
    UINT64_C(4026548235),	// TH_LWUD
    UINT64_C(3623895051),	// TH_LWUIA
    UINT64_C(3355459595),	// TH_LWUIB
    UINT64_C(536875019),	// TH_MULA
    UINT64_C(671092747),	// TH_MULAH
    UINT64_C(603983883),	// TH_MULAW
    UINT64_C(570429451),	// TH_MULS
    UINT64_C(704647179),	// TH_MULSH
    UINT64_C(637538315),	// TH_MULSW
    UINT64_C(1073745931),	// TH_MVEQZ
    UINT64_C(1107300363),	// TH_MVNEZ
    UINT64_C(2181042187),	// TH_REV
    UINT64_C(2415923211),	// TH_REVW
    UINT64_C(402673675),	// TH_SBIA
    UINT64_C(134238219),	// TH_SBIB
    UINT64_C(4160770059),	// TH_SDD
    UINT64_C(2013286411),	// TH_SDIA
    UINT64_C(1744850955),	// TH_SDIB
    UINT64_C(67108875),	// TH_SFENCE_VMAS
    UINT64_C(939544587),	// TH_SHIA
    UINT64_C(671109131),	// TH_SHIB
    UINT64_C(20491),	// TH_SRB
    UINT64_C(1610633227),	// TH_SRD
    UINT64_C(536891403),	// TH_SRH
    UINT64_C(268439563),	// TH_SRRI
    UINT64_C(335548427),	// TH_SRRIW
    UINT64_C(1073762315),	// TH_SRW
    UINT64_C(268455947),	// TH_SURB
    UINT64_C(1879068683),	// TH_SURD
    UINT64_C(805326859),	// TH_SURH
    UINT64_C(1342197771),	// TH_SURW
    UINT64_C(3758116875),	// TH_SWD
    UINT64_C(1476415499),	// TH_SWIA
    UINT64_C(1207980043),	// TH_SWIB
    UINT64_C(25165835),	// TH_SYNC
    UINT64_C(27262987),	// TH_SYNC_I
    UINT64_C(28311563),	// TH_SYNC_IS
    UINT64_C(26214411),	// TH_SYNC_S
    UINT64_C(2281705483),	// TH_TST
    UINT64_C(2147487755),	// TH_TSTNBZ
    UINT64_C(3221229683),	// UNIMP
    UINT64_C(149966867),	// UNZIP_RV32
    UINT64_C(536879191),	// VAADDU_VV
    UINT64_C(536895575),	// VAADDU_VX
    UINT64_C(603988055),	// VAADD_VV
    UINT64_C(604004439),	// VAADD_VX
    UINT64_C(1073754199),	// VADC_VIM
    UINT64_C(1073741911),	// VADC_VVM
    UINT64_C(1073758295),	// VADC_VXM
    UINT64_C(12375),	// VADD_VI
    UINT64_C(87),	// VADD_VV
    UINT64_C(16471),	// VADD_VX
    UINT64_C(2785058935),	// VAESDF_VS
    UINT64_C(2717950071),	// VAESDF_VV
    UINT64_C(2785026167),	// VAESDM_VS
    UINT64_C(2717917303),	// VAESDM_VV
    UINT64_C(2785124471),	// VAESEF_VS
    UINT64_C(2718015607),	// VAESEF_VV
    UINT64_C(2785091703),	// VAESEM_VS
    UINT64_C(2717982839),	// VAESEM_VV
    UINT64_C(2315264119),	// VAESKF1_VI
    UINT64_C(2852135031),	// VAESKF2_VI
    UINT64_C(2785255543),	// VAESZ_VS
    UINT64_C(67108951),	// VANDN_VV
    UINT64_C(67125335),	// VANDN_VX
    UINT64_C(603992151),	// VAND_VI
    UINT64_C(603979863),	// VAND_VV
    UINT64_C(603996247),	// VAND_VX
    UINT64_C(671096919),	// VASUBU_VV
    UINT64_C(671113303),	// VASUBU_VX
    UINT64_C(738205783),	// VASUB_VV
    UINT64_C(738222167),	// VASUB_VX
    UINT64_C(1208229975),	// VBREV8_V
    UINT64_C(1208295511),	// VBREV_V
    UINT64_C(872423511),	// VCLMULH_VV
    UINT64_C(872439895),	// VCLMULH_VX
    UINT64_C(805314647),	// VCLMUL_VV
    UINT64_C(805331031),	// VCLMUL_VX
    UINT64_C(1208361047),	// VCLZ_V
    UINT64_C(1577066583),	// VCOMPRESS_VM
    UINT64_C(1074274391),	// VCPOP_M
    UINT64_C(1208426583),	// VCPOP_V
    UINT64_C(1208393815),	// VCTZ_V
    UINT64_C(704663643),	// VC_FV
    UINT64_C(2852147291),	// VC_FVV
    UINT64_C(4194324571),	// VC_FVW
    UINT64_C(33566811),	// VC_I
    UINT64_C(570437723),	// VC_IV
    UINT64_C(2717921371),	// VC_IVV
    UINT64_C(4060098651),	// VC_IVW
    UINT64_C(570425435),	// VC_VV
    UINT64_C(2717909083),	// VC_VVV
    UINT64_C(4060086363),	// VC_VVW
    UINT64_C(671109211),	// VC_V_FV
    UINT64_C(2818592859),	// VC_V_FVV
    UINT64_C(4160770139),	// VC_V_FVW
    UINT64_C(12379),	// VC_V_I
    UINT64_C(536883291),	// VC_V_IV
    UINT64_C(2684366939),	// VC_V_IVV
    UINT64_C(4026544219),	// VC_V_IVW
    UINT64_C(536871003),	// VC_V_VV
    UINT64_C(2684354651),	// VC_V_VVV
    UINT64_C(4026531931),	// VC_V_VVW
    UINT64_C(16475),	// VC_V_X
    UINT64_C(536887387),	// VC_V_XV
    UINT64_C(2684371035),	// VC_V_XVV
    UINT64_C(4026548315),	// VC_V_XVW
    UINT64_C(33570907),	// VC_X
    UINT64_C(570441819),	// VC_XV
    UINT64_C(2717925467),	// VC_XVV
    UINT64_C(4060102747),	// VC_XVW
    UINT64_C(2147491927),	// VDIVU_VV
    UINT64_C(2147508311),	// VDIVU_VX
    UINT64_C(2214600791),	// VDIV_VV
    UINT64_C(2214617175),	// VDIV_VX
    UINT64_C(20567),	// VFADD_VF
    UINT64_C(4183),	// VFADD_VV
    UINT64_C(1275596887),	// VFCLASS_V
    UINT64_C(1208029271),	// VFCVT_F_XU_V
    UINT64_C(1208062039),	// VFCVT_F_X_V
    UINT64_C(1208160343),	// VFCVT_RTZ_XU_F_V
    UINT64_C(1208193111),	// VFCVT_RTZ_X_F_V
    UINT64_C(1207963735),	// VFCVT_XU_F_V
    UINT64_C(1207996503),	// VFCVT_X_F_V
    UINT64_C(2147504215),	// VFDIV_VF
    UINT64_C(2147487831),	// VFDIV_VV
    UINT64_C(1074307159),	// VFIRST_M
    UINT64_C(2952810583),	// VFMACC_VF
    UINT64_C(2952794199),	// VFMACC_VV
    UINT64_C(2684375127),	// VFMADD_VF
    UINT64_C(2684358743),	// VFMADD_VV
    UINT64_C(402673751),	// VFMAX_VF
    UINT64_C(402657367),	// VFMAX_VV
    UINT64_C(1543524439),	// VFMERGE_VFM
    UINT64_C(268456023),	// VFMIN_VF
    UINT64_C(268439639),	// VFMIN_VV
    UINT64_C(3087028311),	// VFMSAC_VF
    UINT64_C(3087011927),	// VFMSAC_VV
    UINT64_C(2818592855),	// VFMSUB_VF
    UINT64_C(2818576471),	// VFMSUB_VV
    UINT64_C(2415939671),	// VFMUL_VF
    UINT64_C(2415923287),	// VFMUL_VV
    UINT64_C(1107300439),	// VFMV_F_S
    UINT64_C(1107316823),	// VFMV_S_F
    UINT64_C(1577078871),	// VFMV_V_F
    UINT64_C(1208914007),	// VFNCVTBF16_F_F_W
    UINT64_C(1208619095),	// VFNCVT_F_F_W
    UINT64_C(1208553559),	// VFNCVT_F_XU_W
    UINT64_C(1208586327),	// VFNCVT_F_X_W
    UINT64_C(1208651863),	// VFNCVT_ROD_F_F_W
    UINT64_C(1208684631),	// VFNCVT_RTZ_XU_F_W
    UINT64_C(1208717399),	// VFNCVT_RTZ_X_F_W
    UINT64_C(1208488023),	// VFNCVT_XU_F_W
    UINT64_C(1208520791),	// VFNCVT_X_F_W
    UINT64_C(3019919447),	// VFNMACC_VF
    UINT64_C(3019903063),	// VFNMACC_VV
    UINT64_C(2751483991),	// VFNMADD_VF
    UINT64_C(2751467607),	// VFNMADD_VV
    UINT64_C(3154137175),	// VFNMSAC_VF
    UINT64_C(3154120791),	// VFNMSAC_VV
    UINT64_C(2885701719),	// VFNMSUB_VF
    UINT64_C(2885685335),	// VFNMSUB_VV
    UINT64_C(2281721947),	// VFNRCLIP_XU_F_QF
    UINT64_C(2348830811),	// VFNRCLIP_X_F_QF
    UINT64_C(2214613079),	// VFRDIV_VF
    UINT64_C(1275236439),	// VFREC7_V
    UINT64_C(469766231),	// VFREDMAX_VS
    UINT64_C(335548503),	// VFREDMIN_VS
    UINT64_C(201330775),	// VFREDOSUM_VS
    UINT64_C(67113047),	// VFREDUSUM_VS
    UINT64_C(1275203671),	// VFRSQRT7_V
    UINT64_C(2617266263),	// VFRSUB_VF
    UINT64_C(604000343),	// VFSGNJN_VF
    UINT64_C(603983959),	// VFSGNJN_VV
    UINT64_C(671109207),	// VFSGNJX_VF
    UINT64_C(671092823),	// VFSGNJX_VV
    UINT64_C(536891479),	// VFSGNJ_VF
    UINT64_C(536875095),	// VFSGNJ_VV
    UINT64_C(1006653527),	// VFSLIDE1DOWN_VF
    UINT64_C(939544663),	// VFSLIDE1UP_VF
    UINT64_C(1275072599),	// VFSQRT_V
    UINT64_C(134238295),	// VFSUB_VF
    UINT64_C(134221911),	// VFSUB_VV
    UINT64_C(3221246039),	// VFWADD_VF
    UINT64_C(3221229655),	// VFWADD_VV
    UINT64_C(3489681495),	// VFWADD_WF
    UINT64_C(3489665111),	// VFWADD_WV
    UINT64_C(1208389719),	// VFWCVTBF16_F_F_V
    UINT64_C(1208356951),	// VFWCVT_F_F_V
    UINT64_C(1208291415),	// VFWCVT_F_XU_V
    UINT64_C(1208324183),	// VFWCVT_F_X_V
    UINT64_C(1208422487),	// VFWCVT_RTZ_XU_F_V
    UINT64_C(1208455255),	// VFWCVT_RTZ_X_F_V
    UINT64_C(1208225879),	// VFWCVT_XU_F_V
    UINT64_C(1208258647),	// VFWCVT_X_F_V
    UINT64_C(3959443543),	// VFWMACCBF16_VF
    UINT64_C(3959427159),	// VFWMACCBF16_VV
    UINT64_C(4060090459),	// VFWMACC_4x4x4
    UINT64_C(4026552407),	// VFWMACC_VF
    UINT64_C(4026536023),	// VFWMACC_VV
    UINT64_C(4160770135),	// VFWMSAC_VF
    UINT64_C(4160753751),	// VFWMSAC_VV
    UINT64_C(3758116951),	// VFWMUL_VF
    UINT64_C(3758100567),	// VFWMUL_VV
    UINT64_C(4093661271),	// VFWNMACC_VF
    UINT64_C(4093644887),	// VFWNMACC_VV
    UINT64_C(4227878999),	// VFWNMSAC_VF
    UINT64_C(4227862615),	// VFWNMSAC_VV
    UINT64_C(3422556247),	// VFWREDOSUM_VS
    UINT64_C(3288338519),	// VFWREDUSUM_VS
    UINT64_C(3355463767),	// VFWSUB_VF
    UINT64_C(3355447383),	// VFWSUB_VV
    UINT64_C(3623899223),	// VFWSUB_WF
    UINT64_C(3623882839),	// VFWSUB_WV
    UINT64_C(2986352759),	// VGHSH_VV
    UINT64_C(2718474359),	// VGMUL_VV
    UINT64_C(1342742615),	// VID_V
    UINT64_C(1342709847),	// VIOTA_M
    UINT64_C(41963527),	// VL1RE16_V
    UINT64_C(41967623),	// VL1RE32_V
    UINT64_C(41971719),	// VL1RE64_V
    UINT64_C(41943047),	// VL1RE8_V
    UINT64_C(578834439),	// VL2RE16_V
    UINT64_C(578838535),	// VL2RE32_V
    UINT64_C(578842631),	// VL2RE64_V
    UINT64_C(578813959),	// VL2RE8_V
    UINT64_C(1652576263),	// VL4RE16_V
    UINT64_C(1652580359),	// VL4RE32_V
    UINT64_C(1652584455),	// VL4RE64_V
    UINT64_C(1652555783),	// VL4RE8_V
    UINT64_C(3800059911),	// VL8RE16_V
    UINT64_C(3800064007),	// VL8RE32_V
    UINT64_C(3800068103),	// VL8RE64_V
    UINT64_C(3800039431),	// VL8RE8_V
    UINT64_C(16797703),	// VLE16FF_V
    UINT64_C(20487),	// VLE16_V
    UINT64_C(16801799),	// VLE32FF_V
    UINT64_C(24583),	// VLE32_V
    UINT64_C(16805895),	// VLE64FF_V
    UINT64_C(28679),	// VLE64_V
    UINT64_C(16777223),	// VLE8FF_V
    UINT64_C(7),	// VLE8_V
    UINT64_C(45088775),	// VLM_V
    UINT64_C(201347079),	// VLOXEI16_V
    UINT64_C(201351175),	// VLOXEI32_V
    UINT64_C(201355271),	// VLOXEI64_V
    UINT64_C(201326599),	// VLOXEI8_V
    UINT64_C(738217991),	// VLOXSEG2EI16_V
    UINT64_C(738222087),	// VLOXSEG2EI32_V
    UINT64_C(738226183),	// VLOXSEG2EI64_V
    UINT64_C(738197511),	// VLOXSEG2EI8_V
    UINT64_C(1275088903),	// VLOXSEG3EI16_V
    UINT64_C(1275092999),	// VLOXSEG3EI32_V
    UINT64_C(1275097095),	// VLOXSEG3EI64_V
    UINT64_C(1275068423),	// VLOXSEG3EI8_V
    UINT64_C(1811959815),	// VLOXSEG4EI16_V
    UINT64_C(1811963911),	// VLOXSEG4EI32_V
    UINT64_C(1811968007),	// VLOXSEG4EI64_V
    UINT64_C(1811939335),	// VLOXSEG4EI8_V
    UINT64_C(2348830727),	// VLOXSEG5EI16_V
    UINT64_C(2348834823),	// VLOXSEG5EI32_V
    UINT64_C(2348838919),	// VLOXSEG5EI64_V
    UINT64_C(2348810247),	// VLOXSEG5EI8_V
    UINT64_C(2885701639),	// VLOXSEG6EI16_V
    UINT64_C(2885705735),	// VLOXSEG6EI32_V
    UINT64_C(2885709831),	// VLOXSEG6EI64_V
    UINT64_C(2885681159),	// VLOXSEG6EI8_V
    UINT64_C(3422572551),	// VLOXSEG7EI16_V
    UINT64_C(3422576647),	// VLOXSEG7EI32_V
    UINT64_C(3422580743),	// VLOXSEG7EI64_V
    UINT64_C(3422552071),	// VLOXSEG7EI8_V
    UINT64_C(3959443463),	// VLOXSEG8EI16_V
    UINT64_C(3959447559),	// VLOXSEG8EI32_V
    UINT64_C(3959451655),	// VLOXSEG8EI64_V
    UINT64_C(3959422983),	// VLOXSEG8EI8_V
    UINT64_C(134238215),	// VLSE16_V
    UINT64_C(134242311),	// VLSE32_V
    UINT64_C(134246407),	// VLSE64_V
    UINT64_C(134217735),	// VLSE8_V
    UINT64_C(553668615),	// VLSEG2E16FF_V
    UINT64_C(536891399),	// VLSEG2E16_V
    UINT64_C(553672711),	// VLSEG2E32FF_V
    UINT64_C(536895495),	// VLSEG2E32_V
    UINT64_C(553676807),	// VLSEG2E64FF_V
    UINT64_C(536899591),	// VLSEG2E64_V
    UINT64_C(553648135),	// VLSEG2E8FF_V
    UINT64_C(536870919),	// VLSEG2E8_V
    UINT64_C(1090539527),	// VLSEG3E16FF_V
    UINT64_C(1073762311),	// VLSEG3E16_V
    UINT64_C(1090543623),	// VLSEG3E32FF_V
    UINT64_C(1073766407),	// VLSEG3E32_V
    UINT64_C(1090547719),	// VLSEG3E64FF_V
    UINT64_C(1073770503),	// VLSEG3E64_V
    UINT64_C(1090519047),	// VLSEG3E8FF_V
    UINT64_C(1073741831),	// VLSEG3E8_V
    UINT64_C(1627410439),	// VLSEG4E16FF_V
    UINT64_C(1610633223),	// VLSEG4E16_V
    UINT64_C(1627414535),	// VLSEG4E32FF_V
    UINT64_C(1610637319),	// VLSEG4E32_V
    UINT64_C(1627418631),	// VLSEG4E64FF_V
    UINT64_C(1610641415),	// VLSEG4E64_V
    UINT64_C(1627389959),	// VLSEG4E8FF_V
    UINT64_C(1610612743),	// VLSEG4E8_V
    UINT64_C(2164281351),	// VLSEG5E16FF_V
    UINT64_C(2147504135),	// VLSEG5E16_V
    UINT64_C(2164285447),	// VLSEG5E32FF_V
    UINT64_C(2147508231),	// VLSEG5E32_V
    UINT64_C(2164289543),	// VLSEG5E64FF_V
    UINT64_C(2147512327),	// VLSEG5E64_V
    UINT64_C(2164260871),	// VLSEG5E8FF_V
    UINT64_C(2147483655),	// VLSEG5E8_V
    UINT64_C(2701152263),	// VLSEG6E16FF_V
    UINT64_C(2684375047),	// VLSEG6E16_V
    UINT64_C(2701156359),	// VLSEG6E32FF_V
    UINT64_C(2684379143),	// VLSEG6E32_V
    UINT64_C(2701160455),	// VLSEG6E64FF_V
    UINT64_C(2684383239),	// VLSEG6E64_V
    UINT64_C(2701131783),	// VLSEG6E8FF_V
    UINT64_C(2684354567),	// VLSEG6E8_V
    UINT64_C(3238023175),	// VLSEG7E16FF_V
    UINT64_C(3221245959),	// VLSEG7E16_V
    UINT64_C(3238027271),	// VLSEG7E32FF_V
    UINT64_C(3221250055),	// VLSEG7E32_V
    UINT64_C(3238031367),	// VLSEG7E64FF_V
    UINT64_C(3221254151),	// VLSEG7E64_V
    UINT64_C(3238002695),	// VLSEG7E8FF_V
    UINT64_C(3221225479),	// VLSEG7E8_V
    UINT64_C(3774894087),	// VLSEG8E16FF_V
    UINT64_C(3758116871),	// VLSEG8E16_V
    UINT64_C(3774898183),	// VLSEG8E32FF_V
    UINT64_C(3758120967),	// VLSEG8E32_V
    UINT64_C(3774902279),	// VLSEG8E64FF_V
    UINT64_C(3758125063),	// VLSEG8E64_V
    UINT64_C(3774873607),	// VLSEG8E8FF_V
    UINT64_C(3758096391),	// VLSEG8E8_V
    UINT64_C(671109127),	// VLSSEG2E16_V
    UINT64_C(671113223),	// VLSSEG2E32_V
    UINT64_C(671117319),	// VLSSEG2E64_V
    UINT64_C(671088647),	// VLSSEG2E8_V
    UINT64_C(1207980039),	// VLSSEG3E16_V
    UINT64_C(1207984135),	// VLSSEG3E32_V
    UINT64_C(1207988231),	// VLSSEG3E64_V
    UINT64_C(1207959559),	// VLSSEG3E8_V
    UINT64_C(1744850951),	// VLSSEG4E16_V
    UINT64_C(1744855047),	// VLSSEG4E32_V
    UINT64_C(1744859143),	// VLSSEG4E64_V
    UINT64_C(1744830471),	// VLSSEG4E8_V
    UINT64_C(2281721863),	// VLSSEG5E16_V
    UINT64_C(2281725959),	// VLSSEG5E32_V
    UINT64_C(2281730055),	// VLSSEG5E64_V
    UINT64_C(2281701383),	// VLSSEG5E8_V
    UINT64_C(2818592775),	// VLSSEG6E16_V
    UINT64_C(2818596871),	// VLSSEG6E32_V
    UINT64_C(2818600967),	// VLSSEG6E64_V
    UINT64_C(2818572295),	// VLSSEG6E8_V
    UINT64_C(3355463687),	// VLSSEG7E16_V
    UINT64_C(3355467783),	// VLSSEG7E32_V
    UINT64_C(3355471879),	// VLSSEG7E64_V
    UINT64_C(3355443207),	// VLSSEG7E8_V
    UINT64_C(3892334599),	// VLSSEG8E16_V
    UINT64_C(3892338695),	// VLSSEG8E32_V
    UINT64_C(3892342791),	// VLSSEG8E64_V
    UINT64_C(3892314119),	// VLSSEG8E8_V
    UINT64_C(67129351),	// VLUXEI16_V
    UINT64_C(67133447),	// VLUXEI32_V
    UINT64_C(67137543),	// VLUXEI64_V
    UINT64_C(67108871),	// VLUXEI8_V
    UINT64_C(604000263),	// VLUXSEG2EI16_V
    UINT64_C(604004359),	// VLUXSEG2EI32_V
    UINT64_C(604008455),	// VLUXSEG2EI64_V
    UINT64_C(603979783),	// VLUXSEG2EI8_V
    UINT64_C(1140871175),	// VLUXSEG3EI16_V
    UINT64_C(1140875271),	// VLUXSEG3EI32_V
    UINT64_C(1140879367),	// VLUXSEG3EI64_V
    UINT64_C(1140850695),	// VLUXSEG3EI8_V
    UINT64_C(1677742087),	// VLUXSEG4EI16_V
    UINT64_C(1677746183),	// VLUXSEG4EI32_V
    UINT64_C(1677750279),	// VLUXSEG4EI64_V
    UINT64_C(1677721607),	// VLUXSEG4EI8_V
    UINT64_C(2214612999),	// VLUXSEG5EI16_V
    UINT64_C(2214617095),	// VLUXSEG5EI32_V
    UINT64_C(2214621191),	// VLUXSEG5EI64_V
    UINT64_C(2214592519),	// VLUXSEG5EI8_V
    UINT64_C(2751483911),	// VLUXSEG6EI16_V
    UINT64_C(2751488007),	// VLUXSEG6EI32_V
    UINT64_C(2751492103),	// VLUXSEG6EI64_V
    UINT64_C(2751463431),	// VLUXSEG6EI8_V
    UINT64_C(3288354823),	// VLUXSEG7EI16_V
    UINT64_C(3288358919),	// VLUXSEG7EI32_V
    UINT64_C(3288363015),	// VLUXSEG7EI64_V
    UINT64_C(3288334343),	// VLUXSEG7EI8_V
    UINT64_C(3825225735),	// VLUXSEG8EI16_V
    UINT64_C(3825229831),	// VLUXSEG8EI32_V
    UINT64_C(3825233927),	// VLUXSEG8EI64_V
    UINT64_C(3825205255),	// VLUXSEG8EI8_V
    UINT64_C(3019907159),	// VMACC_VV
    UINT64_C(3019923543),	// VMACC_VX
    UINT64_C(1174417495),	// VMADC_VI
    UINT64_C(1140863063),	// VMADC_VIM
    UINT64_C(1174405207),	// VMADC_VV
    UINT64_C(1140850775),	// VMADC_VVM
    UINT64_C(1174421591),	// VMADC_VX
    UINT64_C(1140867159),	// VMADC_VXM
    UINT64_C(2751471703),	// VMADD_VV
    UINT64_C(2751488087),	// VMADD_VX
    UINT64_C(1644175447),	// VMANDN_MM
    UINT64_C(1711284311),	// VMAND_MM
    UINT64_C(402653271),	// VMAXU_VV
    UINT64_C(402669655),	// VMAXU_VX
    UINT64_C(469762135),	// VMAX_VV
    UINT64_C(469778519),	// VMAX_VX
    UINT64_C(1543516247),	// VMERGE_VIM
    UINT64_C(1543503959),	// VMERGE_VVM
    UINT64_C(1543520343),	// VMERGE_VXM
    UINT64_C(1610633303),	// VMFEQ_VF
    UINT64_C(1610616919),	// VMFEQ_VV
    UINT64_C(2080395351),	// VMFGE_VF
    UINT64_C(1946177623),	// VMFGT_VF
    UINT64_C(1677742167),	// VMFLE_VF
    UINT64_C(1677725783),	// VMFLE_VV
    UINT64_C(1811959895),	// VMFLT_VF
    UINT64_C(1811943511),	// VMFLT_VV
    UINT64_C(1879068759),	// VMFNE_VF
    UINT64_C(1879052375),	// VMFNE_VV
    UINT64_C(268435543),	// VMINU_VV
    UINT64_C(268451927),	// VMINU_VX
    UINT64_C(335544407),	// VMIN_VV
    UINT64_C(335560791),	// VMIN_VX
    UINT64_C(1979719767),	// VMNAND_MM
    UINT64_C(2046828631),	// VMNOR_MM
    UINT64_C(1912610903),	// VMORN_MM
    UINT64_C(1778393175),	// VMOR_MM
    UINT64_C(1308622935),	// VMSBC_VV
    UINT64_C(1275068503),	// VMSBC_VVM
    UINT64_C(1308639319),	// VMSBC_VX
    UINT64_C(1275084887),	// VMSBC_VXM
    UINT64_C(1342218327),	// VMSBF_M
    UINT64_C(1610625111),	// VMSEQ_VI
    UINT64_C(1610612823),	// VMSEQ_VV
    UINT64_C(1610629207),	// VMSEQ_VX
    UINT64_C(2013278295),	// VMSGTU_VI
    UINT64_C(2013282391),	// VMSGTU_VX
    UINT64_C(2080387159),	// VMSGT_VI
    UINT64_C(2080391255),	// VMSGT_VX
    UINT64_C(1342283863),	// VMSIF_M
    UINT64_C(1879060567),	// VMSLEU_VI
    UINT64_C(1879048279),	// VMSLEU_VV
    UINT64_C(1879064663),	// VMSLEU_VX
    UINT64_C(1946169431),	// VMSLE_VI
    UINT64_C(1946157143),	// VMSLE_VV
    UINT64_C(1946173527),	// VMSLE_VX
    UINT64_C(1744830551),	// VMSLTU_VV
    UINT64_C(1744846935),	// VMSLTU_VX
    UINT64_C(1811939415),	// VMSLT_VV
    UINT64_C(1811955799),	// VMSLT_VX
    UINT64_C(1677733975),	// VMSNE_VI
    UINT64_C(1677721687),	// VMSNE_VV
    UINT64_C(1677738071),	// VMSNE_VX
    UINT64_C(1342251095),	// VMSOF_M
    UINT64_C(2550145111),	// VMULHSU_VV
    UINT64_C(2550161495),	// VMULHSU_VX
    UINT64_C(2415927383),	// VMULHU_VV
    UINT64_C(2415943767),	// VMULHU_VX
    UINT64_C(2617253975),	// VMULH_VV
    UINT64_C(2617270359),	// VMULH_VX
    UINT64_C(2483036247),	// VMUL_VV
    UINT64_C(2483052631),	// VMUL_VX
    UINT64_C(2650812503),	// VMV1R_V
    UINT64_C(2650845271),	// VMV2R_V
    UINT64_C(2650910807),	// VMV4R_V
    UINT64_C(2651041879),	// VMV8R_V
    UINT64_C(1107320919),	// VMV_S_X
    UINT64_C(1577070679),	// VMV_V_I
    UINT64_C(1577058391),	// VMV_V_V
    UINT64_C(1577074775),	// VMV_V_X
    UINT64_C(1107304535),	// VMV_X_S
    UINT64_C(2113937495),	// VMXNOR_MM
    UINT64_C(1845502039),	// VMXOR_MM
    UINT64_C(3087020119),	// VNCLIPU_WI
    UINT64_C(3087007831),	// VNCLIPU_WV
    UINT64_C(3087024215),	// VNCLIPU_WX
    UINT64_C(3154128983),	// VNCLIP_WI
    UINT64_C(3154116695),	// VNCLIP_WV
    UINT64_C(3154133079),	// VNCLIP_WX
    UINT64_C(3154124887),	// VNMSAC_VV
    UINT64_C(3154141271),	// VNMSAC_VX
    UINT64_C(2885689431),	// VNMSUB_VV
    UINT64_C(2885705815),	// VNMSUB_VX
    UINT64_C(3019911255),	// VNSRA_WI
    UINT64_C(3019898967),	// VNSRA_WV
    UINT64_C(3019915351),	// VNSRA_WX
    UINT64_C(2952802391),	// VNSRL_WI
    UINT64_C(2952790103),	// VNSRL_WV
    UINT64_C(2952806487),	// VNSRL_WX
    UINT64_C(671101015),	// VOR_VI
    UINT64_C(671088727),	// VOR_VV
    UINT64_C(671105111),	// VOR_VX
    UINT64_C(3187679323),	// VQMACCSU_2x8x2
    UINT64_C(4261421147),	// VQMACCSU_4x8x4
    UINT64_C(3120570459),	// VQMACCUS_2x8x2
    UINT64_C(4194312283),	// VQMACCUS_4x8x4
    UINT64_C(2986352731),	// VQMACCU_2x8x2
    UINT64_C(4060094555),	// VQMACCU_4x8x4
    UINT64_C(3053461595),	// VQMACC_2x8x2
    UINT64_C(4127203419),	// VQMACC_4x8x4
    UINT64_C(67117143),	// VREDAND_VS
    UINT64_C(402661463),	// VREDMAXU_VS
    UINT64_C(469770327),	// VREDMAX_VS
    UINT64_C(268443735),	// VREDMINU_VS
    UINT64_C(335552599),	// VREDMIN_VS
    UINT64_C(134226007),	// VREDOR_VS
    UINT64_C(8279),	// VREDSUM_VS
    UINT64_C(201334871),	// VREDXOR_VS
    UINT64_C(2281709655),	// VREMU_VV
    UINT64_C(2281726039),	// VREMU_VX
    UINT64_C(2348818519),	// VREM_VV
    UINT64_C(2348834903),	// VREM_VX
    UINT64_C(1208262743),	// VREV8_V
    UINT64_C(939524183),	// VRGATHEREI16_VV
    UINT64_C(805318743),	// VRGATHER_VI
    UINT64_C(805306455),	// VRGATHER_VV
    UINT64_C(805322839),	// VRGATHER_VX
    UINT64_C(1409286231),	// VROL_VV
    UINT64_C(1409302615),	// VROL_VX
    UINT64_C(1342189655),	// VROR_VI
    UINT64_C(1342177367),	// VROR_VV
    UINT64_C(1342193751),	// VROR_VX
    UINT64_C(201338967),	// VRSUB_VI
    UINT64_C(201343063),	// VRSUB_VX
    UINT64_C(41943079),	// VS1R_V
    UINT64_C(578813991),	// VS2R_V
    UINT64_C(1652555815),	// VS4R_V
    UINT64_C(3800039463),	// VS8R_V
    UINT64_C(2147496023),	// VSADDU_VI
    UINT64_C(2147483735),	// VSADDU_VV
    UINT64_C(2147500119),	// VSADDU_VX
    UINT64_C(2214604887),	// VSADD_VI
    UINT64_C(2214592599),	// VSADD_VV
    UINT64_C(2214608983),	// VSADD_VX
    UINT64_C(1207959639),	// VSBC_VVM
    UINT64_C(1207976023),	// VSBC_VXM
    UINT64_C(20519),	// VSE16_V
    UINT64_C(24615),	// VSE32_V
    UINT64_C(28711),	// VSE64_V
    UINT64_C(39),	// VSE8_V
    UINT64_C(3221254231),	// VSETIVLI
    UINT64_C(2147512407),	// VSETVL
    UINT64_C(28759),	// VSETVLI
    UINT64_C(1208197207),	// VSEXT_VF2
    UINT64_C(1208131671),	// VSEXT_VF4
    UINT64_C(1208066135),	// VSEXT_VF8
    UINT64_C(3120570487),	// VSHA2CH_VV
    UINT64_C(3187679351),	// VSHA2CL_VV
    UINT64_C(3053461623),	// VSHA2MS_VV
    UINT64_C(1006657623),	// VSLIDE1DOWN_VX
    UINT64_C(939548759),	// VSLIDE1UP_VX
    UINT64_C(1006645335),	// VSLIDEDOWN_VI
    UINT64_C(1006649431),	// VSLIDEDOWN_VX
    UINT64_C(939536471),	// VSLIDEUP_VI
    UINT64_C(939540567),	// VSLIDEUP_VX
    UINT64_C(2483040343),	// VSLL_VI
    UINT64_C(2483028055),	// VSLL_VV
    UINT64_C(2483044439),	// VSLL_VX
    UINT64_C(2919243895),	// VSM3C_VI
    UINT64_C(2181046391),	// VSM3ME_VV
    UINT64_C(2248155255),	// VSM4K_VI
    UINT64_C(2785550455),	// VSM4R_VS
    UINT64_C(2718441591),	// VSM4R_VV
    UINT64_C(2617245783),	// VSMUL_VV
    UINT64_C(2617262167),	// VSMUL_VX
    UINT64_C(45088807),	// VSM_V
    UINT64_C(201347111),	// VSOXEI16_V
    UINT64_C(201351207),	// VSOXEI32_V
    UINT64_C(201355303),	// VSOXEI64_V
    UINT64_C(201326631),	// VSOXEI8_V
    UINT64_C(738218023),	// VSOXSEG2EI16_V
    UINT64_C(738222119),	// VSOXSEG2EI32_V
    UINT64_C(738226215),	// VSOXSEG2EI64_V
    UINT64_C(738197543),	// VSOXSEG2EI8_V
    UINT64_C(1275088935),	// VSOXSEG3EI16_V
    UINT64_C(1275093031),	// VSOXSEG3EI32_V
    UINT64_C(1275097127),	// VSOXSEG3EI64_V
    UINT64_C(1275068455),	// VSOXSEG3EI8_V
    UINT64_C(1811959847),	// VSOXSEG4EI16_V
    UINT64_C(1811963943),	// VSOXSEG4EI32_V
    UINT64_C(1811968039),	// VSOXSEG4EI64_V
    UINT64_C(1811939367),	// VSOXSEG4EI8_V
    UINT64_C(2348830759),	// VSOXSEG5EI16_V
    UINT64_C(2348834855),	// VSOXSEG5EI32_V
    UINT64_C(2348838951),	// VSOXSEG5EI64_V
    UINT64_C(2348810279),	// VSOXSEG5EI8_V
    UINT64_C(2885701671),	// VSOXSEG6EI16_V
    UINT64_C(2885705767),	// VSOXSEG6EI32_V
    UINT64_C(2885709863),	// VSOXSEG6EI64_V
    UINT64_C(2885681191),	// VSOXSEG6EI8_V
    UINT64_C(3422572583),	// VSOXSEG7EI16_V
    UINT64_C(3422576679),	// VSOXSEG7EI32_V
    UINT64_C(3422580775),	// VSOXSEG7EI64_V
    UINT64_C(3422552103),	// VSOXSEG7EI8_V
    UINT64_C(3959443495),	// VSOXSEG8EI16_V
    UINT64_C(3959447591),	// VSOXSEG8EI32_V
    UINT64_C(3959451687),	// VSOXSEG8EI64_V
    UINT64_C(3959423015),	// VSOXSEG8EI8_V
    UINT64_C(2751475799),	// VSRA_VI
    UINT64_C(2751463511),	// VSRA_VV
    UINT64_C(2751479895),	// VSRA_VX
    UINT64_C(2684366935),	// VSRL_VI
    UINT64_C(2684354647),	// VSRL_VV
    UINT64_C(2684371031),	// VSRL_VX
    UINT64_C(134238247),	// VSSE16_V
    UINT64_C(134242343),	// VSSE32_V
    UINT64_C(134246439),	// VSSE64_V
    UINT64_C(134217767),	// VSSE8_V
    UINT64_C(536891431),	// VSSEG2E16_V
    UINT64_C(536895527),	// VSSEG2E32_V
    UINT64_C(536899623),	// VSSEG2E64_V
    UINT64_C(536870951),	// VSSEG2E8_V
    UINT64_C(1073762343),	// VSSEG3E16_V
    UINT64_C(1073766439),	// VSSEG3E32_V
    UINT64_C(1073770535),	// VSSEG3E64_V
    UINT64_C(1073741863),	// VSSEG3E8_V
    UINT64_C(1610633255),	// VSSEG4E16_V
    UINT64_C(1610637351),	// VSSEG4E32_V
    UINT64_C(1610641447),	// VSSEG4E64_V
    UINT64_C(1610612775),	// VSSEG4E8_V
    UINT64_C(2147504167),	// VSSEG5E16_V
    UINT64_C(2147508263),	// VSSEG5E32_V
    UINT64_C(2147512359),	// VSSEG5E64_V
    UINT64_C(2147483687),	// VSSEG5E8_V
    UINT64_C(2684375079),	// VSSEG6E16_V
    UINT64_C(2684379175),	// VSSEG6E32_V
    UINT64_C(2684383271),	// VSSEG6E64_V
    UINT64_C(2684354599),	// VSSEG6E8_V
    UINT64_C(3221245991),	// VSSEG7E16_V
    UINT64_C(3221250087),	// VSSEG7E32_V
    UINT64_C(3221254183),	// VSSEG7E64_V
    UINT64_C(3221225511),	// VSSEG7E8_V
    UINT64_C(3758116903),	// VSSEG8E16_V
    UINT64_C(3758120999),	// VSSEG8E32_V
    UINT64_C(3758125095),	// VSSEG8E64_V
    UINT64_C(3758096423),	// VSSEG8E8_V
    UINT64_C(2885693527),	// VSSRA_VI
    UINT64_C(2885681239),	// VSSRA_VV
    UINT64_C(2885697623),	// VSSRA_VX
    UINT64_C(2818584663),	// VSSRL_VI
    UINT64_C(2818572375),	// VSSRL_VV
    UINT64_C(2818588759),	// VSSRL_VX
    UINT64_C(671109159),	// VSSSEG2E16_V
    UINT64_C(671113255),	// VSSSEG2E32_V
    UINT64_C(671117351),	// VSSSEG2E64_V
    UINT64_C(671088679),	// VSSSEG2E8_V
    UINT64_C(1207980071),	// VSSSEG3E16_V
    UINT64_C(1207984167),	// VSSSEG3E32_V
    UINT64_C(1207988263),	// VSSSEG3E64_V
    UINT64_C(1207959591),	// VSSSEG3E8_V
    UINT64_C(1744850983),	// VSSSEG4E16_V
    UINT64_C(1744855079),	// VSSSEG4E32_V
    UINT64_C(1744859175),	// VSSSEG4E64_V
    UINT64_C(1744830503),	// VSSSEG4E8_V
    UINT64_C(2281721895),	// VSSSEG5E16_V
    UINT64_C(2281725991),	// VSSSEG5E32_V
    UINT64_C(2281730087),	// VSSSEG5E64_V
    UINT64_C(2281701415),	// VSSSEG5E8_V
    UINT64_C(2818592807),	// VSSSEG6E16_V
    UINT64_C(2818596903),	// VSSSEG6E32_V
    UINT64_C(2818600999),	// VSSSEG6E64_V
    UINT64_C(2818572327),	// VSSSEG6E8_V
    UINT64_C(3355463719),	// VSSSEG7E16_V
    UINT64_C(3355467815),	// VSSSEG7E32_V
    UINT64_C(3355471911),	// VSSSEG7E64_V
    UINT64_C(3355443239),	// VSSSEG7E8_V
    UINT64_C(3892334631),	// VSSSEG8E16_V
    UINT64_C(3892338727),	// VSSSEG8E32_V
    UINT64_C(3892342823),	// VSSSEG8E64_V
    UINT64_C(3892314151),	// VSSSEG8E8_V
    UINT64_C(2281701463),	// VSSUBU_VV
    UINT64_C(2281717847),	// VSSUBU_VX
    UINT64_C(2348810327),	// VSSUB_VV
    UINT64_C(2348826711),	// VSSUB_VX
    UINT64_C(134217815),	// VSUB_VV
    UINT64_C(134234199),	// VSUB_VX
    UINT64_C(67129383),	// VSUXEI16_V
    UINT64_C(67133479),	// VSUXEI32_V
    UINT64_C(67137575),	// VSUXEI64_V
    UINT64_C(67108903),	// VSUXEI8_V
    UINT64_C(604000295),	// VSUXSEG2EI16_V
    UINT64_C(604004391),	// VSUXSEG2EI32_V
    UINT64_C(604008487),	// VSUXSEG2EI64_V
    UINT64_C(603979815),	// VSUXSEG2EI8_V
    UINT64_C(1140871207),	// VSUXSEG3EI16_V
    UINT64_C(1140875303),	// VSUXSEG3EI32_V
    UINT64_C(1140879399),	// VSUXSEG3EI64_V
    UINT64_C(1140850727),	// VSUXSEG3EI8_V
    UINT64_C(1677742119),	// VSUXSEG4EI16_V
    UINT64_C(1677746215),	// VSUXSEG4EI32_V
    UINT64_C(1677750311),	// VSUXSEG4EI64_V
    UINT64_C(1677721639),	// VSUXSEG4EI8_V
    UINT64_C(2214613031),	// VSUXSEG5EI16_V
    UINT64_C(2214617127),	// VSUXSEG5EI32_V
    UINT64_C(2214621223),	// VSUXSEG5EI64_V
    UINT64_C(2214592551),	// VSUXSEG5EI8_V
    UINT64_C(2751483943),	// VSUXSEG6EI16_V
    UINT64_C(2751488039),	// VSUXSEG6EI32_V
    UINT64_C(2751492135),	// VSUXSEG6EI64_V
    UINT64_C(2751463463),	// VSUXSEG6EI8_V
    UINT64_C(3288354855),	// VSUXSEG7EI16_V
    UINT64_C(3288358951),	// VSUXSEG7EI32_V
    UINT64_C(3288363047),	// VSUXSEG7EI64_V
    UINT64_C(3288334375),	// VSUXSEG7EI8_V
    UINT64_C(3825225767),	// VSUXSEG8EI16_V
    UINT64_C(3825229863),	// VSUXSEG8EI32_V
    UINT64_C(3825233959),	// VSUXSEG8EI64_V
    UINT64_C(3825205287),	// VSUXSEG8EI8_V
    UINT64_C(24699),	// VT_MASKC
    UINT64_C(28795),	// VT_MASKCN
    UINT64_C(3221233751),	// VWADDU_VV
    UINT64_C(3221250135),	// VWADDU_VX
    UINT64_C(3489669207),	// VWADDU_WV
    UINT64_C(3489685591),	// VWADDU_WX
    UINT64_C(3288342615),	// VWADD_VV
    UINT64_C(3288358999),	// VWADD_VX
    UINT64_C(3556778071),	// VWADD_WV
    UINT64_C(3556794455),	// VWADD_WX
    UINT64_C(4227866711),	// VWMACCSU_VV
    UINT64_C(4227883095),	// VWMACCSU_VX
    UINT64_C(4160774231),	// VWMACCUS_VX
    UINT64_C(4026540119),	// VWMACCU_VV
    UINT64_C(4026556503),	// VWMACCU_VX
    UINT64_C(4093648983),	// VWMACC_VV
    UINT64_C(4093665367),	// VWMACC_VX
    UINT64_C(3892322391),	// VWMULSU_VV
    UINT64_C(3892338775),	// VWMULSU_VX
    UINT64_C(3758104663),	// VWMULU_VV
    UINT64_C(3758121047),	// VWMULU_VX
    UINT64_C(3959431255),	// VWMUL_VV
    UINT64_C(3959447639),	// VWMUL_VX
    UINT64_C(3221225559),	// VWREDSUMU_VS
    UINT64_C(3288334423),	// VWREDSUM_VS
    UINT64_C(3556782167),	// VWSLL_VI
    UINT64_C(3556769879),	// VWSLL_VV
    UINT64_C(3556786263),	// VWSLL_VX
    UINT64_C(3355451479),	// VWSUBU_VV
    UINT64_C(3355467863),	// VWSUBU_VX
    UINT64_C(3623886935),	// VWSUBU_WV
    UINT64_C(3623903319),	// VWSUBU_WX
    UINT64_C(3422560343),	// VWSUB_VV
    UINT64_C(3422576727),	// VWSUB_VX
    UINT64_C(3690995799),	// VWSUB_WV
    UINT64_C(3691012183),	// VWSUB_WX
    UINT64_C(738209879),	// VXOR_VI
    UINT64_C(738197591),	// VXOR_VV
    UINT64_C(738213975),	// VXOR_VX
    UINT64_C(1208164439),	// VZEXT_VF2
    UINT64_C(1208098903),	// VZEXT_VF4
    UINT64_C(1208033367),	// VZEXT_VF8
    UINT64_C(273678451),	// WFI
    UINT64_C(13631603),	// WRS_NTO
    UINT64_C(30408819),	// WRS_STO
    UINT64_C(1073758259),	// XNOR
    UINT64_C(16435),	// XOR
    UINT64_C(16403),	// XORI
    UINT64_C(671096883),	// XPERM4
    UINT64_C(671105075),	// XPERM8
    UINT64_C(134234163),	// ZEXT_H_RV32
    UINT64_C(134234171),	// ZEXT_H_RV64
    UINT64_C(149950483),	// ZIP_RV32
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case RISCV::C_EBREAK:
    case RISCV::C_MOP1:
    case RISCV::C_MOP3:
    case RISCV::C_MOP5:
    case RISCV::C_MOP7:
    case RISCV::C_MOP9:
    case RISCV::C_MOP11:
    case RISCV::C_MOP13:
    case RISCV::C_MOP15:
    case RISCV::C_NOP:
    case RISCV::C_SSPOPCHK:
    case RISCV::C_SSPUSH:
    case RISCV::C_UNIMP:
    case RISCV::DRET:
    case RISCV::EBREAK:
    case RISCV::ECALL:
    case RISCV::FENCE_I:
    case RISCV::FENCE_TSO:
    case RISCV::MRET:
    case RISCV::SFENCE_INVAL_IR:
    case RISCV::SFENCE_W_INVAL:
    case RISCV::SF_CEASE:
    case RISCV::SRET:
    case RISCV::TH_DCACHE_CALL:
    case RISCV::TH_DCACHE_CIALL:
    case RISCV::TH_DCACHE_IALL:
    case RISCV::TH_ICACHE_IALL:
    case RISCV::TH_ICACHE_IALLS:
    case RISCV::TH_L2CACHE_CALL:
    case RISCV::TH_L2CACHE_CIALL:
    case RISCV::TH_L2CACHE_IALL:
    case RISCV::TH_SYNC:
    case RISCV::TH_SYNC_I:
    case RISCV::TH_SYNC_IS:
    case RISCV::TH_SYNC_S:
    case RISCV::UNIMP:
    case RISCV::WFI:
    case RISCV::WRS_NTO:
    case RISCV::WRS_STO: {
      break;
    }
    case RISCV::C_NOP_HINT: {
      // op: imm
      op = getImmOpValue(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(32)) << 7;
      Value |= (op & UINT64_C(31)) << 2;
      break;
    }
    case RISCV::C_LI_HINT:
    case RISCV::C_LUI_HINT: {
      // op: imm
      op = getImmOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(32)) << 7;
      Value |= (op & UINT64_C(31)) << 2;
      break;
    }
    case RISCV::C_LI:
    case RISCV::C_LUI: {
      // op: imm
      op = getImmOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(32)) << 7;
      Value |= (op & UINT64_C(31)) << 2;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::VMV_V_I: {
      // op: imm
      op = getImmOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::C_FLDSP:
    case RISCV::C_LDSP: {
      // op: imm
      op = getImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(32)) << 7;
      Value |= (op & UINT64_C(24)) << 2;
      Value |= (op & UINT64_C(448)) >> 4;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::C_FLWSP:
    case RISCV::C_LWSP: {
      // op: imm
      op = getImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(32)) << 7;
      Value |= (op & UINT64_C(28)) << 2;
      Value |= (op & UINT64_C(192)) >> 4;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::C_ADDI:
    case RISCV::C_ADDIW: {
      // op: imm
      op = getImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(32)) << 7;
      Value |= (op & UINT64_C(31)) << 2;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::C_ANDI: {
      // op: imm
      op = getImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(32)) << 7;
      Value |= (op & UINT64_C(31)) << 2;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::C_ADDI4SPN: {
      // op: imm
      op = getImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(48)) << 7;
      Value |= (op & UINT64_C(960)) << 1;
      Value |= (op & UINT64_C(4)) << 4;
      Value |= (op & UINT64_C(8)) << 2;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      break;
    }
    case RISCV::C_ADDI16SP: {
      // op: imm
      op = getImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(512)) << 3;
      Value |= (op & UINT64_C(16)) << 2;
      Value |= (op & UINT64_C(64)) >> 1;
      Value |= (op & UINT64_C(384)) >> 4;
      Value |= (op & UINT64_C(32)) >> 3;
      break;
    }
    case RISCV::C_FSDSP:
    case RISCV::C_SDSP: {
      // op: imm
      op = getImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(56)) << 7;
      Value |= (op & UINT64_C(448)) << 1;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 2;
      Value |= op;
      break;
    }
    case RISCV::C_FSWSP:
    case RISCV::C_SWSP: {
      // op: imm
      op = getImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(60)) << 7;
      Value |= (op & UINT64_C(192)) << 1;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 2;
      Value |= op;
      break;
    }
    case RISCV::C_BEQZ:
    case RISCV::C_BNEZ: {
      // op: imm
      op = getImmOpValueAsr1(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(128)) << 5;
      Value |= (op & UINT64_C(12)) << 8;
      Value |= (op & UINT64_C(96));
      Value |= (op & UINT64_C(3)) << 3;
      Value |= (op & UINT64_C(16)) >> 2;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::C_SLLI_HINT: {
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(32)) << 7;
      Value |= (op & UINT64_C(31)) << 2;
      break;
    }
    case RISCV::C_SLLI: {
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(32)) << 7;
      Value |= (op & UINT64_C(31)) << 2;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::C_SRAI:
    case RISCV::C_SRLI: {
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(32)) << 7;
      Value |= (op & UINT64_C(31)) << 2;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::C_ADDI_NOP: {
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(32);
      op <<= 7;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::PREFETCH_I:
    case RISCV::PREFETCH_R:
    case RISCV::PREFETCH_W: {
      // op: imm12
      op = getImmOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(4064);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      break;
    }
    case RISCV::FSD:
    case RISCV::FSH:
    case RISCV::FSW:
    case RISCV::SB:
    case RISCV::SD:
    case RISCV::SH:
    case RISCV::SW: {
      // op: imm12
      op = getImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(4064)) << 20;
      Value |= (op & UINT64_C(31)) << 7;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      break;
    }
    case RISCV::CV_SB_ri_inc:
    case RISCV::CV_SH_ri_inc:
    case RISCV::CV_SW_ri_inc: {
      // op: imm12
      op = getImmOpValue(MI, 3, Fixups, STI);
      Value |= (op & UINT64_C(4064)) << 20;
      Value |= (op & UINT64_C(31)) << 7;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      break;
    }
    case RISCV::CV_BEQIMM:
    case RISCV::CV_BNEIMM: {
      // op: imm12
      op = getImmOpValueAsr1(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(2048)) << 20;
      Value |= (op & UINT64_C(1008)) << 21;
      Value |= (op & UINT64_C(15)) << 8;
      Value |= (op & UINT64_C(1024)) >> 3;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: imm5
      op = getImmOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      break;
    }
    case RISCV::BEQ:
    case RISCV::BGE:
    case RISCV::BGEU:
    case RISCV::BLT:
    case RISCV::BLTU:
    case RISCV::BNE: {
      // op: imm12
      op = getImmOpValueAsr1(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(2048)) << 20;
      Value |= (op & UINT64_C(1008)) << 21;
      Value |= (op & UINT64_C(15)) << 8;
      Value |= (op & UINT64_C(1024)) >> 3;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      break;
    }
    case RISCV::AUIPC:
    case RISCV::LUI: {
      // op: imm20
      op = getImmOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(1048575);
      op <<= 12;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::JAL: {
      // op: imm20
      op = getImmOpValueAsr1(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(524288)) << 12;
      Value |= (op & UINT64_C(1023)) << 21;
      Value |= (op & UINT64_C(1024)) << 10;
      Value |= (op & UINT64_C(522240)) << 1;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::CM_JALT: {
      // op: index
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 2;
      Value |= op;
      break;
    }
    case RISCV::CM_JT: {
      // op: index
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 2;
      Value |= op;
      break;
    }
    case RISCV::C_J:
    case RISCV::C_JAL: {
      // op: offset
      op = getImmOpValueAsr1(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(1024)) << 2;
      Value |= (op & UINT64_C(8)) << 8;
      Value |= (op & UINT64_C(384)) << 2;
      Value |= (op & UINT64_C(512)) >> 1;
      Value |= (op & UINT64_C(32)) << 2;
      Value |= (op & UINT64_C(64));
      Value |= (op & UINT64_C(7)) << 3;
      Value |= (op & UINT64_C(16)) >> 2;
      break;
    }
    case RISCV::InsnS: {
      // op: opcode
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(127);
      Value |= op;
      // op: funct3
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 12;
      Value |= op;
      // op: imm12
      op = getImmOpValue(MI, 4, Fixups, STI);
      Value |= (op & UINT64_C(4064)) << 20;
      Value |= (op & UINT64_C(31)) << 7;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      break;
    }
    case RISCV::InsnB: {
      // op: opcode
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(127);
      Value |= op;
      // op: funct3
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 12;
      Value |= op;
      // op: imm12
      op = getImmOpValueAsr1(MI, 4, Fixups, STI);
      Value |= (op & UINT64_C(2048)) << 20;
      Value |= (op & UINT64_C(1008)) << 21;
      Value |= (op & UINT64_C(15)) << 8;
      Value |= (op & UINT64_C(1024)) >> 3;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      break;
    }
    case RISCV::InsnCJ: {
      // op: opcode
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: funct3
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 13;
      Value |= op;
      // op: imm11
      op = getImmOpValueAsr1(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(1024)) << 2;
      Value |= (op & UINT64_C(8)) << 8;
      Value |= (op & UINT64_C(384)) << 2;
      Value |= (op & UINT64_C(512)) >> 1;
      Value |= (op & UINT64_C(32)) << 2;
      Value |= (op & UINT64_C(64));
      Value |= (op & UINT64_C(7)) << 3;
      Value |= (op & UINT64_C(16)) >> 2;
      break;
    }
    case RISCV::InsnCS: {
      // op: opcode
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: funct3
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 13;
      Value |= op;
      // op: imm5
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(28)) << 8;
      Value |= (op & UINT64_C(3)) << 5;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::InsnCSS: {
      // op: opcode
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: funct3
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 13;
      Value |= op;
      // op: imm6
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 7;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 2;
      Value |= op;
      break;
    }
    case RISCV::InsnCB: {
      // op: opcode
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: funct3
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 13;
      Value |= op;
      // op: imm8
      op = getImmOpValueAsr1(MI, 3, Fixups, STI);
      Value |= (op & UINT64_C(128)) << 5;
      Value |= (op & UINT64_C(12)) << 8;
      Value |= (op & UINT64_C(96));
      Value |= (op & UINT64_C(3)) << 3;
      Value |= (op & UINT64_C(16)) >> 2;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::InsnR4: {
      // op: opcode
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(127);
      Value |= op;
      // op: funct2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 25;
      Value |= op;
      // op: funct3
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 12;
      Value |= op;
      // op: rs3
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 27;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::InsnI:
    case RISCV::InsnI_Mem: {
      // op: opcode
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(127);
      Value |= op;
      // op: funct3
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 12;
      Value |= op;
      // op: imm12
      op = getImmOpValue(MI, 4, Fixups, STI);
      op &= UINT64_C(4095);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::InsnR: {
      // op: opcode
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(127);
      Value |= op;
      // op: funct7
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 25;
      Value |= op;
      // op: funct3
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 12;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::InsnU: {
      // op: opcode
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(127);
      Value |= op;
      // op: imm20
      op = getImmOpValue(MI, 2, Fixups, STI);
      op &= UINT64_C(1048575);
      op <<= 12;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::InsnJ: {
      // op: opcode
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(127);
      Value |= op;
      // op: imm20
      op = getImmOpValueAsr1(MI, 2, Fixups, STI);
      op &= UINT64_C(1048575);
      op <<= 12;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::InsnCL: {
      // op: opcode
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: funct3
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 13;
      Value |= op;
      // op: imm5
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(28)) << 8;
      Value |= (op & UINT64_C(3)) << 5;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::InsnCI: {
      // op: opcode
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: funct3
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 13;
      Value |= op;
      // op: imm6
      op = getImmOpValue(MI, 3, Fixups, STI);
      Value |= (op & UINT64_C(32)) << 7;
      Value |= (op & UINT64_C(31)) << 2;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::InsnCIW: {
      // op: opcode
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: funct3
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 13;
      Value |= op;
      // op: imm8
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 5;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      break;
    }
    case RISCV::InsnCR: {
      // op: opcode
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: funct4
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 12;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 2;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::InsnCA: {
      // op: opcode
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: funct6
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 10;
      Value |= op;
      // op: funct2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      break;
    }
    case RISCV::FENCE: {
      // op: pred
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 24;
      Value |= op;
      // op: succ
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 20;
      Value |= op;
      break;
    }
    case RISCV::SSRDP: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::CV_LBU_rr:
    case RISCV::CV_LB_rr:
    case RISCV::CV_LHU_rr:
    case RISCV::CV_LH_rr:
    case RISCV::CV_LW_rr: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: cvrr
      op = getRegReg(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(31)) << 20;
      Value |= (op & UINT64_C(992)) << 10;
      break;
    }
    case RISCV::FLI_D:
    case RISCV::FLI_H:
    case RISCV::FLI_S: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      break;
    }
    case RISCV::C_FLD:
    case RISCV::C_LD: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      // op: imm
      op = getImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(56)) << 7;
      Value |= (op & UINT64_C(192)) >> 1;
      break;
    }
    case RISCV::C_FLW:
    case RISCV::C_LW: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      // op: imm
      op = getImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(56)) << 7;
      Value |= (op & UINT64_C(4)) << 4;
      Value |= (op & UINT64_C(64)) >> 1;
      break;
    }
    case RISCV::QK_C_LHU: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      // op: imm
      op = getImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(56)) << 7;
      Value |= (op & UINT64_C(6)) << 4;
      break;
    }
    case RISCV::C_LH:
    case RISCV::C_LHU: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      // op: imm
      op = getImmOpValue(MI, 2, Fixups, STI);
      op &= UINT64_C(2);
      op <<= 4;
      Value |= op;
      break;
    }
    case RISCV::QK_C_LBU: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 12;
      Value |= (op & UINT64_C(24)) << 7;
      Value |= (op & UINT64_C(6)) << 4;
      break;
    }
    case RISCV::C_LBU: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 6;
      Value |= (op & UINT64_C(2)) << 4;
      break;
    }
    case RISCV::C_ADDI_HINT_IMM_ZERO:
    case RISCV::C_SLLI64_HINT: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::C_NOT:
    case RISCV::C_SEXT_B:
    case RISCV::C_SEXT_H:
    case RISCV::C_SRAI64_HINT:
    case RISCV::C_SRLI64_HINT:
    case RISCV::C_ZEXT_B:
    case RISCV::C_ZEXT_H:
    case RISCV::C_ZEXT_W: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::QK_C_LHUSP:
    case RISCV::QK_C_SHSP: {
      // op: rd_rs2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      // op: imm
      op = getImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(14)) << 7;
      Value |= (op & UINT64_C(16)) << 3;
      break;
    }
    case RISCV::QK_C_LBUSP:
    case RISCV::QK_C_SBSP: {
      // op: rd_rs2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::CM_POP:
    case RISCV::CM_POPRET:
    case RISCV::CM_POPRETZ:
    case RISCV::CM_PUSH: {
      // op: rlist
      op = getRlistOpValue(MI, 0, Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      // op: stackadj
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(48);
      op >>= 2;
      Value |= op;
      break;
    }
    case RISCV::CBO_CLEAN:
    case RISCV::CBO_FLUSH:
    case RISCV::CBO_INVAL:
    case RISCV::CBO_ZERO:
    case RISCV::SF_CDISCARD_D_L1:
    case RISCV::SF_CFLUSH_D_L1:
    case RISCV::SSPOPCHK:
    case RISCV::TH_DCACHE_CIPA:
    case RISCV::TH_DCACHE_CISW:
    case RISCV::TH_DCACHE_CIVA:
    case RISCV::TH_DCACHE_CPA:
    case RISCV::TH_DCACHE_CPAL1:
    case RISCV::TH_DCACHE_CSW:
    case RISCV::TH_DCACHE_CVA:
    case RISCV::TH_DCACHE_CVAL1:
    case RISCV::TH_DCACHE_IPA:
    case RISCV::TH_DCACHE_ISW:
    case RISCV::TH_DCACHE_IVA:
    case RISCV::TH_ICACHE_IPA:
    case RISCV::TH_ICACHE_IVA: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      break;
    }
    case RISCV::C_JALR:
    case RISCV::C_JR: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::C_MV: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 2;
      Value |= op;
      break;
    }
    case RISCV::FCVTMOD_W_D:
    case RISCV::FCVT_BF16_S:
    case RISCV::FCVT_D_H:
    case RISCV::FCVT_D_H_IN32X:
    case RISCV::FCVT_D_H_INX:
    case RISCV::FCVT_D_L:
    case RISCV::FCVT_D_LU:
    case RISCV::FCVT_D_LU_INX:
    case RISCV::FCVT_D_L_INX:
    case RISCV::FCVT_D_S:
    case RISCV::FCVT_D_S_IN32X:
    case RISCV::FCVT_D_S_INX:
    case RISCV::FCVT_D_W:
    case RISCV::FCVT_D_WU:
    case RISCV::FCVT_D_WU_IN32X:
    case RISCV::FCVT_D_WU_INX:
    case RISCV::FCVT_D_W_IN32X:
    case RISCV::FCVT_D_W_INX:
    case RISCV::FCVT_H_D:
    case RISCV::FCVT_H_D_IN32X:
    case RISCV::FCVT_H_D_INX:
    case RISCV::FCVT_H_L:
    case RISCV::FCVT_H_LU:
    case RISCV::FCVT_H_LU_INX:
    case RISCV::FCVT_H_L_INX:
    case RISCV::FCVT_H_S:
    case RISCV::FCVT_H_S_INX:
    case RISCV::FCVT_H_W:
    case RISCV::FCVT_H_WU:
    case RISCV::FCVT_H_WU_INX:
    case RISCV::FCVT_H_W_INX:
    case RISCV::FCVT_LU_D:
    case RISCV::FCVT_LU_D_INX:
    case RISCV::FCVT_LU_H:
    case RISCV::FCVT_LU_H_INX:
    case RISCV::FCVT_LU_S:
    case RISCV::FCVT_LU_S_INX:
    case RISCV::FCVT_L_D:
    case RISCV::FCVT_L_D_INX:
    case RISCV::FCVT_L_H:
    case RISCV::FCVT_L_H_INX:
    case RISCV::FCVT_L_S:
    case RISCV::FCVT_L_S_INX:
    case RISCV::FCVT_S_BF16:
    case RISCV::FCVT_S_D:
    case RISCV::FCVT_S_D_IN32X:
    case RISCV::FCVT_S_D_INX:
    case RISCV::FCVT_S_H:
    case RISCV::FCVT_S_H_INX:
    case RISCV::FCVT_S_L:
    case RISCV::FCVT_S_LU:
    case RISCV::FCVT_S_LU_INX:
    case RISCV::FCVT_S_L_INX:
    case RISCV::FCVT_S_W:
    case RISCV::FCVT_S_WU:
    case RISCV::FCVT_S_WU_INX:
    case RISCV::FCVT_S_W_INX:
    case RISCV::FCVT_WU_D:
    case RISCV::FCVT_WU_D_IN32X:
    case RISCV::FCVT_WU_D_INX:
    case RISCV::FCVT_WU_H:
    case RISCV::FCVT_WU_H_INX:
    case RISCV::FCVT_WU_S:
    case RISCV::FCVT_WU_S_INX:
    case RISCV::FCVT_W_D:
    case RISCV::FCVT_W_D_IN32X:
    case RISCV::FCVT_W_D_INX:
    case RISCV::FCVT_W_H:
    case RISCV::FCVT_W_H_INX:
    case RISCV::FCVT_W_S:
    case RISCV::FCVT_W_S_INX:
    case RISCV::FROUNDNX_D:
    case RISCV::FROUNDNX_H:
    case RISCV::FROUNDNX_S:
    case RISCV::FROUND_D:
    case RISCV::FROUND_H:
    case RISCV::FROUND_S:
    case RISCV::FSQRT_D:
    case RISCV::FSQRT_D_IN32X:
    case RISCV::FSQRT_D_INX:
    case RISCV::FSQRT_H:
    case RISCV::FSQRT_H_INX:
    case RISCV::FSQRT_S:
    case RISCV::FSQRT_S_INX: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: frm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 12;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::AES64IM:
    case RISCV::BREV8:
    case RISCV::CLZ:
    case RISCV::CLZW:
    case RISCV::CPOP:
    case RISCV::CPOPW:
    case RISCV::CTZ:
    case RISCV::CTZW:
    case RISCV::CV_ABS:
    case RISCV::CV_ABS_B:
    case RISCV::CV_ABS_H:
    case RISCV::CV_CLB:
    case RISCV::CV_CNT:
    case RISCV::CV_CPLXCONJ:
    case RISCV::CV_EXTBS:
    case RISCV::CV_EXTBZ:
    case RISCV::CV_EXTHS:
    case RISCV::CV_EXTHZ:
    case RISCV::CV_FF1:
    case RISCV::CV_FL1:
    case RISCV::FCLASS_D:
    case RISCV::FCLASS_D_IN32X:
    case RISCV::FCLASS_D_INX:
    case RISCV::FCLASS_H:
    case RISCV::FCLASS_H_INX:
    case RISCV::FCLASS_S:
    case RISCV::FCLASS_S_INX:
    case RISCV::FMVH_X_D:
    case RISCV::FMV_D_X:
    case RISCV::FMV_H_X:
    case RISCV::FMV_W_X:
    case RISCV::FMV_X_D:
    case RISCV::FMV_X_H:
    case RISCV::FMV_X_W:
    case RISCV::FMV_X_W_FPR64:
    case RISCV::HLVX_HU:
    case RISCV::HLVX_WU:
    case RISCV::HLV_B:
    case RISCV::HLV_BU:
    case RISCV::HLV_D:
    case RISCV::HLV_H:
    case RISCV::HLV_HU:
    case RISCV::HLV_W:
    case RISCV::HLV_WU:
    case RISCV::LB_AQ:
    case RISCV::LB_AQ_RL:
    case RISCV::LD_AQ:
    case RISCV::LD_AQ_RL:
    case RISCV::LH_AQ:
    case RISCV::LH_AQ_RL:
    case RISCV::LR_D:
    case RISCV::LR_D_AQ:
    case RISCV::LR_D_AQ_RL:
    case RISCV::LR_D_RL:
    case RISCV::LR_W:
    case RISCV::LR_W_AQ:
    case RISCV::LR_W_AQ_RL:
    case RISCV::LR_W_RL:
    case RISCV::LW_AQ:
    case RISCV::LW_AQ_RL:
    case RISCV::MOPR0:
    case RISCV::MOPR1:
    case RISCV::MOPR2:
    case RISCV::MOPR3:
    case RISCV::MOPR4:
    case RISCV::MOPR5:
    case RISCV::MOPR6:
    case RISCV::MOPR7:
    case RISCV::MOPR8:
    case RISCV::MOPR9:
    case RISCV::MOPR10:
    case RISCV::MOPR11:
    case RISCV::MOPR12:
    case RISCV::MOPR13:
    case RISCV::MOPR14:
    case RISCV::MOPR15:
    case RISCV::MOPR16:
    case RISCV::MOPR17:
    case RISCV::MOPR18:
    case RISCV::MOPR19:
    case RISCV::MOPR20:
    case RISCV::MOPR21:
    case RISCV::MOPR22:
    case RISCV::MOPR23:
    case RISCV::MOPR24:
    case RISCV::MOPR25:
    case RISCV::MOPR26:
    case RISCV::MOPR27:
    case RISCV::MOPR28:
    case RISCV::MOPR29:
    case RISCV::MOPR30:
    case RISCV::MOPR31:
    case RISCV::ORC_B:
    case RISCV::REV8_RV32:
    case RISCV::REV8_RV64:
    case RISCV::SEXT_B:
    case RISCV::SEXT_H:
    case RISCV::SHA256SIG0:
    case RISCV::SHA256SIG1:
    case RISCV::SHA256SUM0:
    case RISCV::SHA256SUM1:
    case RISCV::SHA512SIG0:
    case RISCV::SHA512SIG1:
    case RISCV::SHA512SUM0:
    case RISCV::SHA512SUM1:
    case RISCV::SM3P0:
    case RISCV::SM3P1:
    case RISCV::TH_FF0:
    case RISCV::TH_FF1:
    case RISCV::TH_REV:
    case RISCV::TH_REVW:
    case RISCV::TH_TSTNBZ:
    case RISCV::UNZIP_RV32:
    case RISCV::ZEXT_H_RV32:
    case RISCV::ZEXT_H_RV64:
    case RISCV::ZIP_RV32: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::ADDI:
    case RISCV::ADDIW:
    case RISCV::ANDI:
    case RISCV::CV_ELW:
    case RISCV::FLD:
    case RISCV::FLH:
    case RISCV::FLW:
    case RISCV::JALR:
    case RISCV::LB:
    case RISCV::LBU:
    case RISCV::LD:
    case RISCV::LH:
    case RISCV::LHU:
    case RISCV::LW:
    case RISCV::LWU:
    case RISCV::ORI:
    case RISCV::SLTI:
    case RISCV::SLTIU:
    case RISCV::XORI: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: imm12
      op = getImmOpValue(MI, 2, Fixups, STI);
      op &= UINT64_C(4095);
      op <<= 20;
      Value |= op;
      break;
    }
    case RISCV::CV_CLIP:
    case RISCV::CV_CLIPU: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: imm5
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      break;
    }
    case RISCV::CV_ADD_SCI_B:
    case RISCV::CV_ADD_SCI_H:
    case RISCV::CV_AND_SCI_B:
    case RISCV::CV_AND_SCI_H:
    case RISCV::CV_AVG_SCI_B:
    case RISCV::CV_AVG_SCI_H:
    case RISCV::CV_CMPEQ_SCI_B:
    case RISCV::CV_CMPEQ_SCI_H:
    case RISCV::CV_CMPGE_SCI_B:
    case RISCV::CV_CMPGE_SCI_H:
    case RISCV::CV_CMPGT_SCI_B:
    case RISCV::CV_CMPGT_SCI_H:
    case RISCV::CV_CMPLE_SCI_B:
    case RISCV::CV_CMPLE_SCI_H:
    case RISCV::CV_CMPLT_SCI_B:
    case RISCV::CV_CMPLT_SCI_H:
    case RISCV::CV_CMPNE_SCI_B:
    case RISCV::CV_CMPNE_SCI_H:
    case RISCV::CV_DOTSP_SCI_B:
    case RISCV::CV_DOTSP_SCI_H:
    case RISCV::CV_DOTUSP_SCI_B:
    case RISCV::CV_DOTUSP_SCI_H:
    case RISCV::CV_MAX_SCI_B:
    case RISCV::CV_MAX_SCI_H:
    case RISCV::CV_MIN_SCI_B:
    case RISCV::CV_MIN_SCI_H:
    case RISCV::CV_OR_SCI_B:
    case RISCV::CV_OR_SCI_H:
    case RISCV::CV_SUB_SCI_B:
    case RISCV::CV_SUB_SCI_H:
    case RISCV::CV_XOR_SCI_B:
    case RISCV::CV_XOR_SCI_H: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: imm6
      op = getImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(1)) << 25;
      Value |= (op & UINT64_C(62)) << 19;
      break;
    }
    case RISCV::CV_AVGU_SCI_B:
    case RISCV::CV_AVGU_SCI_H:
    case RISCV::CV_CMPGEU_SCI_B:
    case RISCV::CV_CMPGEU_SCI_H:
    case RISCV::CV_CMPGTU_SCI_B:
    case RISCV::CV_CMPGTU_SCI_H:
    case RISCV::CV_CMPLEU_SCI_B:
    case RISCV::CV_CMPLEU_SCI_H:
    case RISCV::CV_CMPLTU_SCI_B:
    case RISCV::CV_CMPLTU_SCI_H:
    case RISCV::CV_DOTUP_SCI_B:
    case RISCV::CV_DOTUP_SCI_H:
    case RISCV::CV_EXTRACTU_B:
    case RISCV::CV_EXTRACTU_H:
    case RISCV::CV_EXTRACT_B:
    case RISCV::CV_EXTRACT_H:
    case RISCV::CV_MAXU_SCI_B:
    case RISCV::CV_MAXU_SCI_H:
    case RISCV::CV_MINU_SCI_B:
    case RISCV::CV_MINU_SCI_H:
    case RISCV::CV_SHUFFLEI0_SCI_B:
    case RISCV::CV_SHUFFLEI1_SCI_B:
    case RISCV::CV_SHUFFLEI2_SCI_B:
    case RISCV::CV_SHUFFLEI3_SCI_B:
    case RISCV::CV_SHUFFLE_SCI_H:
    case RISCV::CV_SLL_SCI_B:
    case RISCV::CV_SLL_SCI_H:
    case RISCV::CV_SRA_SCI_B:
    case RISCV::CV_SRA_SCI_H:
    case RISCV::CV_SRL_SCI_B:
    case RISCV::CV_SRL_SCI_H: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: imm6
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 25;
      Value |= (op & UINT64_C(62)) << 19;
      break;
    }
    case RISCV::CV_BCLR:
    case RISCV::CV_BITREV:
    case RISCV::CV_BSET:
    case RISCV::CV_EXTRACT:
    case RISCV::CV_EXTRACTU: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: is3
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      // op: is2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      break;
    }
    case RISCV::TH_EXT:
    case RISCV::TH_EXTU: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: msb
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 26;
      Value |= op;
      // op: lsb
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 20;
      Value |= op;
      break;
    }
    case RISCV::AES64KS1I: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: rnum
      op = getImmOpValue(MI, 2, Fixups, STI);
      op &= UINT64_C(15);
      op <<= 20;
      Value |= op;
      break;
    }
    case RISCV::RORIW:
    case RISCV::SLLIW:
    case RISCV::SRAIW:
    case RISCV::SRLIW:
    case RISCV::TH_SRRIW: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: shamt
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      break;
    }
    case RISCV::BCLRI:
    case RISCV::BEXTI:
    case RISCV::BINVI:
    case RISCV::BSETI:
    case RISCV::RORI:
    case RISCV::SLLI:
    case RISCV::SLLI_UW:
    case RISCV::SRAI:
    case RISCV::SRLI:
    case RISCV::TH_SRRI:
    case RISCV::TH_TST: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: shamt
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 20;
      Value |= op;
      break;
    }
    case RISCV::VSETVLI: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: vtypei
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(2047);
      op <<= 20;
      Value |= op;
      break;
    }
    case RISCV::VFMV_V_F:
    case RISCV::VL1RE8_V:
    case RISCV::VL1RE16_V:
    case RISCV::VL1RE32_V:
    case RISCV::VL1RE64_V:
    case RISCV::VL2RE8_V:
    case RISCV::VL2RE16_V:
    case RISCV::VL2RE32_V:
    case RISCV::VL2RE64_V:
    case RISCV::VL4RE8_V:
    case RISCV::VL4RE16_V:
    case RISCV::VL4RE32_V:
    case RISCV::VL4RE64_V:
    case RISCV::VL8RE8_V:
    case RISCV::VL8RE16_V:
    case RISCV::VL8RE32_V:
    case RISCV::VL8RE64_V:
    case RISCV::VLM_V:
    case RISCV::VMV_V_X: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::VLE8FF_V:
    case RISCV::VLE8_V:
    case RISCV::VLE16FF_V:
    case RISCV::VLE16_V:
    case RISCV::VLE32FF_V:
    case RISCV::VLE32_V:
    case RISCV::VLE64FF_V:
    case RISCV::VLE64_V:
    case RISCV::VLSEG2E8FF_V:
    case RISCV::VLSEG2E8_V:
    case RISCV::VLSEG2E16FF_V:
    case RISCV::VLSEG2E16_V:
    case RISCV::VLSEG2E32FF_V:
    case RISCV::VLSEG2E32_V:
    case RISCV::VLSEG2E64FF_V:
    case RISCV::VLSEG2E64_V:
    case RISCV::VLSEG3E8FF_V:
    case RISCV::VLSEG3E8_V:
    case RISCV::VLSEG3E16FF_V:
    case RISCV::VLSEG3E16_V:
    case RISCV::VLSEG3E32FF_V:
    case RISCV::VLSEG3E32_V:
    case RISCV::VLSEG3E64FF_V:
    case RISCV::VLSEG3E64_V:
    case RISCV::VLSEG4E8FF_V:
    case RISCV::VLSEG4E8_V:
    case RISCV::VLSEG4E16FF_V:
    case RISCV::VLSEG4E16_V:
    case RISCV::VLSEG4E32FF_V:
    case RISCV::VLSEG4E32_V:
    case RISCV::VLSEG4E64FF_V:
    case RISCV::VLSEG4E64_V:
    case RISCV::VLSEG5E8FF_V:
    case RISCV::VLSEG5E8_V:
    case RISCV::VLSEG5E16FF_V:
    case RISCV::VLSEG5E16_V:
    case RISCV::VLSEG5E32FF_V:
    case RISCV::VLSEG5E32_V:
    case RISCV::VLSEG5E64FF_V:
    case RISCV::VLSEG5E64_V:
    case RISCV::VLSEG6E8FF_V:
    case RISCV::VLSEG6E8_V:
    case RISCV::VLSEG6E16FF_V:
    case RISCV::VLSEG6E16_V:
    case RISCV::VLSEG6E32FF_V:
    case RISCV::VLSEG6E32_V:
    case RISCV::VLSEG6E64FF_V:
    case RISCV::VLSEG6E64_V:
    case RISCV::VLSEG7E8FF_V:
    case RISCV::VLSEG7E8_V:
    case RISCV::VLSEG7E16FF_V:
    case RISCV::VLSEG7E16_V:
    case RISCV::VLSEG7E32FF_V:
    case RISCV::VLSEG7E32_V:
    case RISCV::VLSEG7E64FF_V:
    case RISCV::VLSEG7E64_V:
    case RISCV::VLSEG8E8FF_V:
    case RISCV::VLSEG8E8_V:
    case RISCV::VLSEG8E16FF_V:
    case RISCV::VLSEG8E16_V:
    case RISCV::VLSEG8E32FF_V:
    case RISCV::VLSEG8E32_V:
    case RISCV::VLSEG8E64FF_V:
    case RISCV::VLSEG8E64_V: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: vm
      op = getVMaskReg(MI, 2, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::VS1R_V:
    case RISCV::VS2R_V:
    case RISCV::VS4R_V:
    case RISCV::VS8R_V:
    case RISCV::VSM_V: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vs3
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::VSE8_V:
    case RISCV::VSE16_V:
    case RISCV::VSE32_V:
    case RISCV::VSE64_V:
    case RISCV::VSSEG2E8_V:
    case RISCV::VSSEG2E16_V:
    case RISCV::VSSEG2E32_V:
    case RISCV::VSSEG2E64_V:
    case RISCV::VSSEG3E8_V:
    case RISCV::VSSEG3E16_V:
    case RISCV::VSSEG3E32_V:
    case RISCV::VSSEG3E64_V:
    case RISCV::VSSEG4E8_V:
    case RISCV::VSSEG4E16_V:
    case RISCV::VSSEG4E32_V:
    case RISCV::VSSEG4E64_V:
    case RISCV::VSSEG5E8_V:
    case RISCV::VSSEG5E16_V:
    case RISCV::VSSEG5E32_V:
    case RISCV::VSSEG5E64_V:
    case RISCV::VSSEG6E8_V:
    case RISCV::VSSEG6E16_V:
    case RISCV::VSSEG6E32_V:
    case RISCV::VSSEG6E64_V:
    case RISCV::VSSEG7E8_V:
    case RISCV::VSSEG7E16_V:
    case RISCV::VSSEG7E32_V:
    case RISCV::VSSEG7E64_V:
    case RISCV::VSSEG8E8_V:
    case RISCV::VSSEG8E16_V:
    case RISCV::VSSEG8E32_V:
    case RISCV::VSSEG8E64_V: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vs3
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: vm
      op = getVMaskReg(MI, 2, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::C_ADD: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 2;
      Value |= op;
      break;
    }
    case RISCV::CV_LBU_ri_inc:
    case RISCV::CV_LB_ri_inc:
    case RISCV::CV_LHU_ri_inc:
    case RISCV::CV_LH_ri_inc:
    case RISCV::CV_LW_ri_inc: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: imm12
      op = getImmOpValue(MI, 3, Fixups, STI);
      op &= UINT64_C(4095);
      op <<= 20;
      Value |= op;
      break;
    }
    case RISCV::CSRRC:
    case RISCV::CSRRCI:
    case RISCV::CSRRS:
    case RISCV::CSRRSI:
    case RISCV::CSRRW:
    case RISCV::CSRRWI: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: imm12
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(4095);
      op <<= 20;
      Value |= op;
      break;
    }
    case RISCV::TH_LBIA:
    case RISCV::TH_LBIB:
    case RISCV::TH_LBUIA:
    case RISCV::TH_LBUIB:
    case RISCV::TH_LDIA:
    case RISCV::TH_LDIB:
    case RISCV::TH_LHIA:
    case RISCV::TH_LHIB:
    case RISCV::TH_LHUIA:
    case RISCV::TH_LHUIB:
    case RISCV::TH_LWIA:
    case RISCV::TH_LWIB:
    case RISCV::TH_LWUIA:
    case RISCV::TH_LWUIB: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: simm5
      op = getImmOpValue(MI, 3, Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: uimm2
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::CV_SDOTSP_SCI_B:
    case RISCV::CV_SDOTSP_SCI_H:
    case RISCV::CV_SDOTUSP_SCI_B:
    case RISCV::CV_SDOTUSP_SCI_H: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: imm6
      op = getImmOpValue(MI, 3, Fixups, STI);
      Value |= (op & UINT64_C(1)) << 25;
      Value |= (op & UINT64_C(62)) << 19;
      break;
    }
    case RISCV::CV_INSERT_B:
    case RISCV::CV_INSERT_H:
    case RISCV::CV_SDOTUP_SCI_B:
    case RISCV::CV_SDOTUP_SCI_H: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: imm6
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 25;
      Value |= (op & UINT64_C(62)) << 19;
      break;
    }
    case RISCV::CV_INSERT: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: is3
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      // op: is2
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      break;
    }
    case RISCV::TH_SBIA:
    case RISCV::TH_SBIB:
    case RISCV::TH_SDIA:
    case RISCV::TH_SDIB:
    case RISCV::TH_SHIA:
    case RISCV::TH_SHIB:
    case RISCV::TH_SWIA:
    case RISCV::TH_SWIB: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: simm5
      op = getImmOpValue(MI, 3, Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: uimm2
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::VFMV_S_F:
    case RISCV::VMV_S_X: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::SSPUSH: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      break;
    }
    case RISCV::CV_SB_rr:
    case RISCV::CV_SH_rr:
    case RISCV::CV_SW_rr: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: cvrr
      op = getRegReg(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(992)) << 10;
      Value |= (op & UINT64_C(31)) << 7;
      break;
    }
    case RISCV::HSV_B:
    case RISCV::HSV_D:
    case RISCV::HSV_H:
    case RISCV::HSV_W: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      break;
    }
    case RISCV::C_FSD:
    case RISCV::C_SD: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      // op: imm
      op = getImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(56)) << 7;
      Value |= (op & UINT64_C(192)) >> 1;
      break;
    }
    case RISCV::C_FSW:
    case RISCV::C_SW: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      // op: imm
      op = getImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(56)) << 7;
      Value |= (op & UINT64_C(4)) << 4;
      Value |= (op & UINT64_C(64)) >> 1;
      break;
    }
    case RISCV::QK_C_SH: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      // op: imm
      op = getImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(56)) << 7;
      Value |= (op & UINT64_C(6)) << 4;
      break;
    }
    case RISCV::C_SH: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      // op: imm
      op = getImmOpValue(MI, 2, Fixups, STI);
      op &= UINT64_C(2);
      op <<= 4;
      Value |= op;
      break;
    }
    case RISCV::QK_C_SB: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 12;
      Value |= (op & UINT64_C(24)) << 7;
      Value |= (op & UINT64_C(6)) << 4;
      break;
    }
    case RISCV::C_SB: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 6;
      Value |= (op & UINT64_C(2)) << 4;
      break;
    }
    case RISCV::VC_I: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getImmOpValue(MI, 3, Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: funct6_lo2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 26;
      Value |= op;
      break;
    }
    case RISCV::HFENCE_GVMA:
    case RISCV::HFENCE_VVMA:
    case RISCV::HINVAL_GVMA:
    case RISCV::HINVAL_VVMA:
    case RISCV::SB_AQ_RL:
    case RISCV::SB_RL:
    case RISCV::SD_AQ_RL:
    case RISCV::SD_RL:
    case RISCV::SFENCE_VMA:
    case RISCV::SH_AQ_RL:
    case RISCV::SH_RL:
    case RISCV::SINVAL_VMA:
    case RISCV::SW_AQ_RL:
    case RISCV::SW_RL:
    case RISCV::TH_SFENCE_VMAS: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      break;
    }
    case RISCV::TH_LDD:
    case RISCV::TH_LWD:
    case RISCV::TH_LWUD:
    case RISCV::TH_SDD:
    case RISCV::TH_SWD: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: uimm2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::VC_X: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: funct6_lo2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 26;
      Value |= op;
      break;
    }
    case RISCV::C_MV_HINT: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 2;
      Value |= op;
      break;
    }
    case RISCV::CM_MVA01S:
    case RISCV::CM_MVSA01: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::VC_V_I:
    case RISCV::VC_V_IV: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getImmOpValue(MI, 3, Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: funct6_lo2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 26;
      Value |= op;
      break;
    }
    case RISCV::VC_IV:
    case RISCV::VC_IVV:
    case RISCV::VC_IVW: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getImmOpValue(MI, 3, Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: funct6_lo2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 26;
      Value |= op;
      break;
    }
    case RISCV::FADD_D:
    case RISCV::FADD_D_IN32X:
    case RISCV::FADD_D_INX:
    case RISCV::FADD_H:
    case RISCV::FADD_H_INX:
    case RISCV::FADD_S:
    case RISCV::FADD_S_INX:
    case RISCV::FDIV_D:
    case RISCV::FDIV_D_IN32X:
    case RISCV::FDIV_D_INX:
    case RISCV::FDIV_H:
    case RISCV::FDIV_H_INX:
    case RISCV::FDIV_S:
    case RISCV::FDIV_S_INX:
    case RISCV::FMUL_D:
    case RISCV::FMUL_D_IN32X:
    case RISCV::FMUL_D_INX:
    case RISCV::FMUL_H:
    case RISCV::FMUL_H_INX:
    case RISCV::FMUL_S:
    case RISCV::FMUL_S_INX:
    case RISCV::FSUB_D:
    case RISCV::FSUB_D_IN32X:
    case RISCV::FSUB_D_INX:
    case RISCV::FSUB_H:
    case RISCV::FSUB_H_INX:
    case RISCV::FSUB_S:
    case RISCV::FSUB_S_INX: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: frm
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 12;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::ADD:
    case RISCV::ADDW:
    case RISCV::ADD_UW:
    case RISCV::AES64DS:
    case RISCV::AES64DSM:
    case RISCV::AES64ES:
    case RISCV::AES64ESM:
    case RISCV::AES64KS2:
    case RISCV::AMOADD_B:
    case RISCV::AMOADD_B_AQ:
    case RISCV::AMOADD_B_AQ_RL:
    case RISCV::AMOADD_B_RL:
    case RISCV::AMOADD_D:
    case RISCV::AMOADD_D_AQ:
    case RISCV::AMOADD_D_AQ_RL:
    case RISCV::AMOADD_D_RL:
    case RISCV::AMOADD_H:
    case RISCV::AMOADD_H_AQ:
    case RISCV::AMOADD_H_AQ_RL:
    case RISCV::AMOADD_H_RL:
    case RISCV::AMOADD_W:
    case RISCV::AMOADD_W_AQ:
    case RISCV::AMOADD_W_AQ_RL:
    case RISCV::AMOADD_W_RL:
    case RISCV::AMOAND_B:
    case RISCV::AMOAND_B_AQ:
    case RISCV::AMOAND_B_AQ_RL:
    case RISCV::AMOAND_B_RL:
    case RISCV::AMOAND_D:
    case RISCV::AMOAND_D_AQ:
    case RISCV::AMOAND_D_AQ_RL:
    case RISCV::AMOAND_D_RL:
    case RISCV::AMOAND_H:
    case RISCV::AMOAND_H_AQ:
    case RISCV::AMOAND_H_AQ_RL:
    case RISCV::AMOAND_H_RL:
    case RISCV::AMOAND_W:
    case RISCV::AMOAND_W_AQ:
    case RISCV::AMOAND_W_AQ_RL:
    case RISCV::AMOAND_W_RL:
    case RISCV::AMOMAXU_B:
    case RISCV::AMOMAXU_B_AQ:
    case RISCV::AMOMAXU_B_AQ_RL:
    case RISCV::AMOMAXU_B_RL:
    case RISCV::AMOMAXU_D:
    case RISCV::AMOMAXU_D_AQ:
    case RISCV::AMOMAXU_D_AQ_RL:
    case RISCV::AMOMAXU_D_RL:
    case RISCV::AMOMAXU_H:
    case RISCV::AMOMAXU_H_AQ:
    case RISCV::AMOMAXU_H_AQ_RL:
    case RISCV::AMOMAXU_H_RL:
    case RISCV::AMOMAXU_W:
    case RISCV::AMOMAXU_W_AQ:
    case RISCV::AMOMAXU_W_AQ_RL:
    case RISCV::AMOMAXU_W_RL:
    case RISCV::AMOMAX_B:
    case RISCV::AMOMAX_B_AQ:
    case RISCV::AMOMAX_B_AQ_RL:
    case RISCV::AMOMAX_B_RL:
    case RISCV::AMOMAX_D:
    case RISCV::AMOMAX_D_AQ:
    case RISCV::AMOMAX_D_AQ_RL:
    case RISCV::AMOMAX_D_RL:
    case RISCV::AMOMAX_H:
    case RISCV::AMOMAX_H_AQ:
    case RISCV::AMOMAX_H_AQ_RL:
    case RISCV::AMOMAX_H_RL:
    case RISCV::AMOMAX_W:
    case RISCV::AMOMAX_W_AQ:
    case RISCV::AMOMAX_W_AQ_RL:
    case RISCV::AMOMAX_W_RL:
    case RISCV::AMOMINU_B:
    case RISCV::AMOMINU_B_AQ:
    case RISCV::AMOMINU_B_AQ_RL:
    case RISCV::AMOMINU_B_RL:
    case RISCV::AMOMINU_D:
    case RISCV::AMOMINU_D_AQ:
    case RISCV::AMOMINU_D_AQ_RL:
    case RISCV::AMOMINU_D_RL:
    case RISCV::AMOMINU_H:
    case RISCV::AMOMINU_H_AQ:
    case RISCV::AMOMINU_H_AQ_RL:
    case RISCV::AMOMINU_H_RL:
    case RISCV::AMOMINU_W:
    case RISCV::AMOMINU_W_AQ:
    case RISCV::AMOMINU_W_AQ_RL:
    case RISCV::AMOMINU_W_RL:
    case RISCV::AMOMIN_B:
    case RISCV::AMOMIN_B_AQ:
    case RISCV::AMOMIN_B_AQ_RL:
    case RISCV::AMOMIN_B_RL:
    case RISCV::AMOMIN_D:
    case RISCV::AMOMIN_D_AQ:
    case RISCV::AMOMIN_D_AQ_RL:
    case RISCV::AMOMIN_D_RL:
    case RISCV::AMOMIN_H:
    case RISCV::AMOMIN_H_AQ:
    case RISCV::AMOMIN_H_AQ_RL:
    case RISCV::AMOMIN_H_RL:
    case RISCV::AMOMIN_W:
    case RISCV::AMOMIN_W_AQ:
    case RISCV::AMOMIN_W_AQ_RL:
    case RISCV::AMOMIN_W_RL:
    case RISCV::AMOOR_B:
    case RISCV::AMOOR_B_AQ:
    case RISCV::AMOOR_B_AQ_RL:
    case RISCV::AMOOR_B_RL:
    case RISCV::AMOOR_D:
    case RISCV::AMOOR_D_AQ:
    case RISCV::AMOOR_D_AQ_RL:
    case RISCV::AMOOR_D_RL:
    case RISCV::AMOOR_H:
    case RISCV::AMOOR_H_AQ:
    case RISCV::AMOOR_H_AQ_RL:
    case RISCV::AMOOR_H_RL:
    case RISCV::AMOOR_W:
    case RISCV::AMOOR_W_AQ:
    case RISCV::AMOOR_W_AQ_RL:
    case RISCV::AMOOR_W_RL:
    case RISCV::AMOSWAP_B:
    case RISCV::AMOSWAP_B_AQ:
    case RISCV::AMOSWAP_B_AQ_RL:
    case RISCV::AMOSWAP_B_RL:
    case RISCV::AMOSWAP_D:
    case RISCV::AMOSWAP_D_AQ:
    case RISCV::AMOSWAP_D_AQ_RL:
    case RISCV::AMOSWAP_D_RL:
    case RISCV::AMOSWAP_H:
    case RISCV::AMOSWAP_H_AQ:
    case RISCV::AMOSWAP_H_AQ_RL:
    case RISCV::AMOSWAP_H_RL:
    case RISCV::AMOSWAP_W:
    case RISCV::AMOSWAP_W_AQ:
    case RISCV::AMOSWAP_W_AQ_RL:
    case RISCV::AMOSWAP_W_RL:
    case RISCV::AMOXOR_B:
    case RISCV::AMOXOR_B_AQ:
    case RISCV::AMOXOR_B_AQ_RL:
    case RISCV::AMOXOR_B_RL:
    case RISCV::AMOXOR_D:
    case RISCV::AMOXOR_D_AQ:
    case RISCV::AMOXOR_D_AQ_RL:
    case RISCV::AMOXOR_D_RL:
    case RISCV::AMOXOR_H:
    case RISCV::AMOXOR_H_AQ:
    case RISCV::AMOXOR_H_AQ_RL:
    case RISCV::AMOXOR_H_RL:
    case RISCV::AMOXOR_W:
    case RISCV::AMOXOR_W_AQ:
    case RISCV::AMOXOR_W_AQ_RL:
    case RISCV::AMOXOR_W_RL:
    case RISCV::AND:
    case RISCV::ANDN:
    case RISCV::BCLR:
    case RISCV::BEXT:
    case RISCV::BINV:
    case RISCV::BSET:
    case RISCV::CLMUL:
    case RISCV::CLMULH:
    case RISCV::CLMULR:
    case RISCV::CV_ADD_B:
    case RISCV::CV_ADD_DIV2:
    case RISCV::CV_ADD_DIV4:
    case RISCV::CV_ADD_DIV8:
    case RISCV::CV_ADD_H:
    case RISCV::CV_ADD_SC_B:
    case RISCV::CV_ADD_SC_H:
    case RISCV::CV_AND_B:
    case RISCV::CV_AND_H:
    case RISCV::CV_AND_SC_B:
    case RISCV::CV_AND_SC_H:
    case RISCV::CV_AVGU_B:
    case RISCV::CV_AVGU_H:
    case RISCV::CV_AVGU_SC_B:
    case RISCV::CV_AVGU_SC_H:
    case RISCV::CV_AVG_B:
    case RISCV::CV_AVG_H:
    case RISCV::CV_AVG_SC_B:
    case RISCV::CV_AVG_SC_H:
    case RISCV::CV_BCLRR:
    case RISCV::CV_BSETR:
    case RISCV::CV_CLIPR:
    case RISCV::CV_CLIPUR:
    case RISCV::CV_CMPEQ_B:
    case RISCV::CV_CMPEQ_H:
    case RISCV::CV_CMPEQ_SC_B:
    case RISCV::CV_CMPEQ_SC_H:
    case RISCV::CV_CMPGEU_B:
    case RISCV::CV_CMPGEU_H:
    case RISCV::CV_CMPGEU_SC_B:
    case RISCV::CV_CMPGEU_SC_H:
    case RISCV::CV_CMPGE_B:
    case RISCV::CV_CMPGE_H:
    case RISCV::CV_CMPGE_SC_B:
    case RISCV::CV_CMPGE_SC_H:
    case RISCV::CV_CMPGTU_B:
    case RISCV::CV_CMPGTU_H:
    case RISCV::CV_CMPGTU_SC_B:
    case RISCV::CV_CMPGTU_SC_H:
    case RISCV::CV_CMPGT_B:
    case RISCV::CV_CMPGT_H:
    case RISCV::CV_CMPGT_SC_B:
    case RISCV::CV_CMPGT_SC_H:
    case RISCV::CV_CMPLEU_B:
    case RISCV::CV_CMPLEU_H:
    case RISCV::CV_CMPLEU_SC_B:
    case RISCV::CV_CMPLEU_SC_H:
    case RISCV::CV_CMPLE_B:
    case RISCV::CV_CMPLE_H:
    case RISCV::CV_CMPLE_SC_B:
    case RISCV::CV_CMPLE_SC_H:
    case RISCV::CV_CMPLTU_B:
    case RISCV::CV_CMPLTU_H:
    case RISCV::CV_CMPLTU_SC_B:
    case RISCV::CV_CMPLTU_SC_H:
    case RISCV::CV_CMPLT_B:
    case RISCV::CV_CMPLT_H:
    case RISCV::CV_CMPLT_SC_B:
    case RISCV::CV_CMPLT_SC_H:
    case RISCV::CV_CMPNE_B:
    case RISCV::CV_CMPNE_H:
    case RISCV::CV_CMPNE_SC_B:
    case RISCV::CV_CMPNE_SC_H:
    case RISCV::CV_DOTSP_B:
    case RISCV::CV_DOTSP_H:
    case RISCV::CV_DOTSP_SC_B:
    case RISCV::CV_DOTSP_SC_H:
    case RISCV::CV_DOTUP_B:
    case RISCV::CV_DOTUP_H:
    case RISCV::CV_DOTUP_SC_B:
    case RISCV::CV_DOTUP_SC_H:
    case RISCV::CV_DOTUSP_B:
    case RISCV::CV_DOTUSP_H:
    case RISCV::CV_DOTUSP_SC_B:
    case RISCV::CV_DOTUSP_SC_H:
    case RISCV::CV_EXTRACTR:
    case RISCV::CV_EXTRACTUR:
    case RISCV::CV_MAX:
    case RISCV::CV_MAXU:
    case RISCV::CV_MAXU_B:
    case RISCV::CV_MAXU_H:
    case RISCV::CV_MAXU_SC_B:
    case RISCV::CV_MAXU_SC_H:
    case RISCV::CV_MAX_B:
    case RISCV::CV_MAX_H:
    case RISCV::CV_MAX_SC_B:
    case RISCV::CV_MAX_SC_H:
    case RISCV::CV_MIN:
    case RISCV::CV_MINU:
    case RISCV::CV_MINU_B:
    case RISCV::CV_MINU_H:
    case RISCV::CV_MINU_SC_B:
    case RISCV::CV_MINU_SC_H:
    case RISCV::CV_MIN_B:
    case RISCV::CV_MIN_H:
    case RISCV::CV_MIN_SC_B:
    case RISCV::CV_MIN_SC_H:
    case RISCV::CV_OR_B:
    case RISCV::CV_OR_H:
    case RISCV::CV_OR_SC_B:
    case RISCV::CV_OR_SC_H:
    case RISCV::CV_PACK:
    case RISCV::CV_PACK_H:
    case RISCV::CV_ROR:
    case RISCV::CV_SHUFFLE_B:
    case RISCV::CV_SHUFFLE_H:
    case RISCV::CV_SLET:
    case RISCV::CV_SLETU:
    case RISCV::CV_SLL_B:
    case RISCV::CV_SLL_H:
    case RISCV::CV_SLL_SC_B:
    case RISCV::CV_SLL_SC_H:
    case RISCV::CV_SRA_B:
    case RISCV::CV_SRA_H:
    case RISCV::CV_SRA_SC_B:
    case RISCV::CV_SRA_SC_H:
    case RISCV::CV_SRL_B:
    case RISCV::CV_SRL_H:
    case RISCV::CV_SRL_SC_B:
    case RISCV::CV_SRL_SC_H:
    case RISCV::CV_SUBROTMJ:
    case RISCV::CV_SUBROTMJ_DIV2:
    case RISCV::CV_SUBROTMJ_DIV4:
    case RISCV::CV_SUBROTMJ_DIV8:
    case RISCV::CV_SUB_B:
    case RISCV::CV_SUB_DIV2:
    case RISCV::CV_SUB_DIV4:
    case RISCV::CV_SUB_DIV8:
    case RISCV::CV_SUB_H:
    case RISCV::CV_SUB_SC_B:
    case RISCV::CV_SUB_SC_H:
    case RISCV::CV_XOR_B:
    case RISCV::CV_XOR_H:
    case RISCV::CV_XOR_SC_B:
    case RISCV::CV_XOR_SC_H:
    case RISCV::CZERO_EQZ:
    case RISCV::CZERO_NEZ:
    case RISCV::DIV:
    case RISCV::DIVU:
    case RISCV::DIVUW:
    case RISCV::DIVW:
    case RISCV::FEQ_D:
    case RISCV::FEQ_D_IN32X:
    case RISCV::FEQ_D_INX:
    case RISCV::FEQ_H:
    case RISCV::FEQ_H_INX:
    case RISCV::FEQ_S:
    case RISCV::FEQ_S_INX:
    case RISCV::FLEQ_D:
    case RISCV::FLEQ_H:
    case RISCV::FLEQ_S:
    case RISCV::FLE_D:
    case RISCV::FLE_D_IN32X:
    case RISCV::FLE_D_INX:
    case RISCV::FLE_H:
    case RISCV::FLE_H_INX:
    case RISCV::FLE_S:
    case RISCV::FLE_S_INX:
    case RISCV::FLTQ_D:
    case RISCV::FLTQ_H:
    case RISCV::FLTQ_S:
    case RISCV::FLT_D:
    case RISCV::FLT_D_IN32X:
    case RISCV::FLT_D_INX:
    case RISCV::FLT_H:
    case RISCV::FLT_H_INX:
    case RISCV::FLT_S:
    case RISCV::FLT_S_INX:
    case RISCV::FMAXM_D:
    case RISCV::FMAXM_H:
    case RISCV::FMAXM_S:
    case RISCV::FMAX_D:
    case RISCV::FMAX_D_IN32X:
    case RISCV::FMAX_D_INX:
    case RISCV::FMAX_H:
    case RISCV::FMAX_H_INX:
    case RISCV::FMAX_S:
    case RISCV::FMAX_S_INX:
    case RISCV::FMINM_D:
    case RISCV::FMINM_H:
    case RISCV::FMINM_S:
    case RISCV::FMIN_D:
    case RISCV::FMIN_D_IN32X:
    case RISCV::FMIN_D_INX:
    case RISCV::FMIN_H:
    case RISCV::FMIN_H_INX:
    case RISCV::FMIN_S:
    case RISCV::FMIN_S_INX:
    case RISCV::FMVP_D_X:
    case RISCV::FSGNJN_D:
    case RISCV::FSGNJN_D_IN32X:
    case RISCV::FSGNJN_D_INX:
    case RISCV::FSGNJN_H:
    case RISCV::FSGNJN_H_INX:
    case RISCV::FSGNJN_S:
    case RISCV::FSGNJN_S_INX:
    case RISCV::FSGNJX_D:
    case RISCV::FSGNJX_D_IN32X:
    case RISCV::FSGNJX_D_INX:
    case RISCV::FSGNJX_H:
    case RISCV::FSGNJX_H_INX:
    case RISCV::FSGNJX_S:
    case RISCV::FSGNJX_S_INX:
    case RISCV::FSGNJ_D:
    case RISCV::FSGNJ_D_IN32X:
    case RISCV::FSGNJ_D_INX:
    case RISCV::FSGNJ_H:
    case RISCV::FSGNJ_H_INX:
    case RISCV::FSGNJ_S:
    case RISCV::FSGNJ_S_INX:
    case RISCV::MAX:
    case RISCV::MAXU:
    case RISCV::MIN:
    case RISCV::MINU:
    case RISCV::MOPRR0:
    case RISCV::MOPRR1:
    case RISCV::MOPRR2:
    case RISCV::MOPRR3:
    case RISCV::MOPRR4:
    case RISCV::MOPRR5:
    case RISCV::MOPRR6:
    case RISCV::MOPRR7:
    case RISCV::MUL:
    case RISCV::MULH:
    case RISCV::MULHSU:
    case RISCV::MULHU:
    case RISCV::MULW:
    case RISCV::OR:
    case RISCV::ORN:
    case RISCV::PACK:
    case RISCV::PACKH:
    case RISCV::PACKW:
    case RISCV::REM:
    case RISCV::REMU:
    case RISCV::REMUW:
    case RISCV::REMW:
    case RISCV::ROL:
    case RISCV::ROLW:
    case RISCV::ROR:
    case RISCV::RORW:
    case RISCV::SC_D:
    case RISCV::SC_D_AQ:
    case RISCV::SC_D_AQ_RL:
    case RISCV::SC_D_RL:
    case RISCV::SC_W:
    case RISCV::SC_W_AQ:
    case RISCV::SC_W_AQ_RL:
    case RISCV::SC_W_RL:
    case RISCV::SH1ADD:
    case RISCV::SH1ADD_UW:
    case RISCV::SH2ADD:
    case RISCV::SH2ADD_UW:
    case RISCV::SH3ADD:
    case RISCV::SH3ADD_UW:
    case RISCV::SHA512SIG0H:
    case RISCV::SHA512SIG0L:
    case RISCV::SHA512SIG1H:
    case RISCV::SHA512SIG1L:
    case RISCV::SHA512SUM0R:
    case RISCV::SHA512SUM1R:
    case RISCV::SLL:
    case RISCV::SLLW:
    case RISCV::SLT:
    case RISCV::SLTU:
    case RISCV::SRA:
    case RISCV::SRAW:
    case RISCV::SRL:
    case RISCV::SRLW:
    case RISCV::SSAMOSWAP_D:
    case RISCV::SSAMOSWAP_D_AQ:
    case RISCV::SSAMOSWAP_D_AQ_RL:
    case RISCV::SSAMOSWAP_D_RL:
    case RISCV::SSAMOSWAP_W:
    case RISCV::SSAMOSWAP_W_AQ:
    case RISCV::SSAMOSWAP_W_AQ_RL:
    case RISCV::SSAMOSWAP_W_RL:
    case RISCV::SUB:
    case RISCV::SUBW:
    case RISCV::VFWMACC_4x4x4:
    case RISCV::VQMACCSU_2x8x2:
    case RISCV::VQMACCSU_4x8x4:
    case RISCV::VQMACCUS_2x8x2:
    case RISCV::VQMACCUS_4x8x4:
    case RISCV::VQMACCU_2x8x2:
    case RISCV::VQMACCU_4x8x4:
    case RISCV::VQMACC_2x8x2:
    case RISCV::VQMACC_4x8x4:
    case RISCV::VSETVL:
    case RISCV::VT_MASKC:
    case RISCV::VT_MASKCN:
    case RISCV::XNOR:
    case RISCV::XOR:
    case RISCV::XPERM4:
    case RISCV::XPERM8: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::AES32DSI:
    case RISCV::AES32DSMI:
    case RISCV::AES32ESI:
    case RISCV::AES32ESMI:
    case RISCV::SM4ED:
    case RISCV::SM4KS: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: bs
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 30;
      Value |= op;
      break;
    }
    case RISCV::CV_ADDN:
    case RISCV::CV_ADDRN:
    case RISCV::CV_ADDUN:
    case RISCV::CV_ADDURN:
    case RISCV::CV_MULHHSN:
    case RISCV::CV_MULHHSRN:
    case RISCV::CV_MULHHUN:
    case RISCV::CV_MULHHURN:
    case RISCV::CV_MULSN:
    case RISCV::CV_MULSRN:
    case RISCV::CV_MULUN:
    case RISCV::CV_MULURN:
    case RISCV::CV_SUBN:
    case RISCV::CV_SUBRN:
    case RISCV::CV_SUBUN:
    case RISCV::CV_SUBURN: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: imm5
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::TH_ADDSL:
    case RISCV::TH_FLRD:
    case RISCV::TH_FLRW:
    case RISCV::TH_FLURD:
    case RISCV::TH_FLURW:
    case RISCV::TH_FSRD:
    case RISCV::TH_FSRW:
    case RISCV::TH_FSURD:
    case RISCV::TH_FSURW:
    case RISCV::TH_LRB:
    case RISCV::TH_LRBU:
    case RISCV::TH_LRD:
    case RISCV::TH_LRH:
    case RISCV::TH_LRHU:
    case RISCV::TH_LRW:
    case RISCV::TH_LRWU:
    case RISCV::TH_LURB:
    case RISCV::TH_LURBU:
    case RISCV::TH_LURD:
    case RISCV::TH_LURH:
    case RISCV::TH_LURHU:
    case RISCV::TH_LURW:
    case RISCV::TH_LURWU:
    case RISCV::TH_SRB:
    case RISCV::TH_SRD:
    case RISCV::TH_SRH:
    case RISCV::TH_SRW:
    case RISCV::TH_SURB:
    case RISCV::TH_SURD:
    case RISCV::TH_SURH:
    case RISCV::TH_SURW: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: uimm2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::VLSE8_V:
    case RISCV::VLSE16_V:
    case RISCV::VLSE32_V:
    case RISCV::VLSE64_V:
    case RISCV::VLSSEG2E8_V:
    case RISCV::VLSSEG2E16_V:
    case RISCV::VLSSEG2E32_V:
    case RISCV::VLSSEG2E64_V:
    case RISCV::VLSSEG3E8_V:
    case RISCV::VLSSEG3E16_V:
    case RISCV::VLSSEG3E32_V:
    case RISCV::VLSSEG3E64_V:
    case RISCV::VLSSEG4E8_V:
    case RISCV::VLSSEG4E16_V:
    case RISCV::VLSSEG4E32_V:
    case RISCV::VLSSEG4E64_V:
    case RISCV::VLSSEG5E8_V:
    case RISCV::VLSSEG5E16_V:
    case RISCV::VLSSEG5E32_V:
    case RISCV::VLSSEG5E64_V:
    case RISCV::VLSSEG6E8_V:
    case RISCV::VLSSEG6E16_V:
    case RISCV::VLSSEG6E32_V:
    case RISCV::VLSSEG6E64_V:
    case RISCV::VLSSEG7E8_V:
    case RISCV::VLSSEG7E16_V:
    case RISCV::VLSSEG7E32_V:
    case RISCV::VLSSEG7E64_V:
    case RISCV::VLSSEG8E8_V:
    case RISCV::VLSSEG8E16_V:
    case RISCV::VLSSEG8E32_V:
    case RISCV::VLSSEG8E64_V: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: vm
      op = getVMaskReg(MI, 3, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::VSSE8_V:
    case RISCV::VSSE16_V:
    case RISCV::VSSE32_V:
    case RISCV::VSSE64_V:
    case RISCV::VSSSEG2E8_V:
    case RISCV::VSSSEG2E16_V:
    case RISCV::VSSSEG2E32_V:
    case RISCV::VSSSEG2E64_V:
    case RISCV::VSSSEG3E8_V:
    case RISCV::VSSSEG3E16_V:
    case RISCV::VSSSEG3E32_V:
    case RISCV::VSSSEG3E64_V:
    case RISCV::VSSSEG4E8_V:
    case RISCV::VSSSEG4E16_V:
    case RISCV::VSSSEG4E32_V:
    case RISCV::VSSSEG4E64_V:
    case RISCV::VSSSEG5E8_V:
    case RISCV::VSSSEG5E16_V:
    case RISCV::VSSSEG5E32_V:
    case RISCV::VSSSEG5E64_V:
    case RISCV::VSSSEG6E8_V:
    case RISCV::VSSSEG6E16_V:
    case RISCV::VSSSEG6E32_V:
    case RISCV::VSSSEG6E64_V:
    case RISCV::VSSSEG7E8_V:
    case RISCV::VSSSEG7E16_V:
    case RISCV::VSSSEG7E32_V:
    case RISCV::VSSSEG7E64_V:
    case RISCV::VSSSEG8E8_V:
    case RISCV::VSSSEG8E16_V:
    case RISCV::VSSSEG8E32_V:
    case RISCV::VSSSEG8E64_V: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vs3
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: vm
      op = getVMaskReg(MI, 3, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::VC_V_FV: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: funct6_lo1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 26;
      Value |= op;
      break;
    }
    case RISCV::VC_V_VV:
    case RISCV::VC_V_X:
    case RISCV::VC_V_XV: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: funct6_lo2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 26;
      Value |= op;
      break;
    }
    case RISCV::VC_FV:
    case RISCV::VC_FVV:
    case RISCV::VC_FVW: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: funct6_lo1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 26;
      Value |= op;
      break;
    }
    case RISCV::VC_VV:
    case RISCV::VC_VVV:
    case RISCV::VC_VVW:
    case RISCV::VC_XV:
    case RISCV::VC_XVV:
    case RISCV::VC_XVW: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: funct6_lo2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 26;
      Value |= op;
      break;
    }
    case RISCV::C_ADD_HINT: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 2;
      Value |= op;
      break;
    }
    case RISCV::C_ADDW:
    case RISCV::C_AND:
    case RISCV::C_MUL:
    case RISCV::C_OR:
    case RISCV::C_SUB:
    case RISCV::C_SUBW:
    case RISCV::C_XOR: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 2;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::VC_V_IVV:
    case RISCV::VC_V_IVW: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getImmOpValue(MI, 4, Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: funct6_lo2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 26;
      Value |= op;
      break;
    }
    case RISCV::CV_LBU_rr_inc:
    case RISCV::CV_LB_rr_inc:
    case RISCV::CV_LHU_rr_inc:
    case RISCV::CV_LH_rr_inc:
    case RISCV::CV_LW_rr_inc: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::AMOCAS_B:
    case RISCV::AMOCAS_B_AQ:
    case RISCV::AMOCAS_B_AQ_RL:
    case RISCV::AMOCAS_B_RL:
    case RISCV::AMOCAS_D_RV32:
    case RISCV::AMOCAS_D_RV32_AQ:
    case RISCV::AMOCAS_D_RV32_AQ_RL:
    case RISCV::AMOCAS_D_RV32_RL:
    case RISCV::AMOCAS_D_RV64:
    case RISCV::AMOCAS_D_RV64_AQ:
    case RISCV::AMOCAS_D_RV64_AQ_RL:
    case RISCV::AMOCAS_D_RV64_RL:
    case RISCV::AMOCAS_H:
    case RISCV::AMOCAS_H_AQ:
    case RISCV::AMOCAS_H_AQ_RL:
    case RISCV::AMOCAS_H_RL:
    case RISCV::AMOCAS_Q:
    case RISCV::AMOCAS_Q_AQ:
    case RISCV::AMOCAS_Q_AQ_RL:
    case RISCV::AMOCAS_Q_RL:
    case RISCV::AMOCAS_W:
    case RISCV::AMOCAS_W_AQ:
    case RISCV::AMOCAS_W_AQ_RL:
    case RISCV::AMOCAS_W_RL:
    case RISCV::CV_ADDNR:
    case RISCV::CV_ADDRNR:
    case RISCV::CV_ADDUNR:
    case RISCV::CV_ADDURNR:
    case RISCV::CV_CPLXMUL_I:
    case RISCV::CV_CPLXMUL_I_DIV2:
    case RISCV::CV_CPLXMUL_I_DIV4:
    case RISCV::CV_CPLXMUL_I_DIV8:
    case RISCV::CV_CPLXMUL_R:
    case RISCV::CV_CPLXMUL_R_DIV2:
    case RISCV::CV_CPLXMUL_R_DIV4:
    case RISCV::CV_CPLXMUL_R_DIV8:
    case RISCV::CV_INSERTR:
    case RISCV::CV_MAC:
    case RISCV::CV_MSU:
    case RISCV::CV_PACKHI_B:
    case RISCV::CV_PACKLO_B:
    case RISCV::CV_SDOTSP_B:
    case RISCV::CV_SDOTSP_H:
    case RISCV::CV_SDOTSP_SC_B:
    case RISCV::CV_SDOTSP_SC_H:
    case RISCV::CV_SDOTUP_B:
    case RISCV::CV_SDOTUP_H:
    case RISCV::CV_SDOTUP_SC_B:
    case RISCV::CV_SDOTUP_SC_H:
    case RISCV::CV_SDOTUSP_B:
    case RISCV::CV_SDOTUSP_H:
    case RISCV::CV_SDOTUSP_SC_B:
    case RISCV::CV_SDOTUSP_SC_H:
    case RISCV::CV_SHUFFLE2_B:
    case RISCV::CV_SHUFFLE2_H:
    case RISCV::CV_SUBNR:
    case RISCV::CV_SUBRNR:
    case RISCV::CV_SUBUNR:
    case RISCV::CV_SUBURNR:
    case RISCV::TH_MULA:
    case RISCV::TH_MULAH:
    case RISCV::TH_MULAW:
    case RISCV::TH_MULS:
    case RISCV::TH_MULSH:
    case RISCV::TH_MULSW:
    case RISCV::TH_MVEQZ:
    case RISCV::TH_MVNEZ: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::CV_MACHHSN:
    case RISCV::CV_MACHHSRN:
    case RISCV::CV_MACHHUN:
    case RISCV::CV_MACHHURN:
    case RISCV::CV_MACSN:
    case RISCV::CV_MACSRN:
    case RISCV::CV_MACUN:
    case RISCV::CV_MACURN: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: imm5
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::VC_V_FVV:
    case RISCV::VC_V_FVW: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: funct6_lo1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 26;
      Value |= op;
      break;
    }
    case RISCV::VC_V_VVV:
    case RISCV::VC_V_VVW:
    case RISCV::VC_V_XVV:
    case RISCV::VC_V_XVW: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: funct6_lo2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 26;
      Value |= op;
      break;
    }
    case RISCV::FMADD_D:
    case RISCV::FMADD_D_IN32X:
    case RISCV::FMADD_D_INX:
    case RISCV::FMADD_H:
    case RISCV::FMADD_H_INX:
    case RISCV::FMADD_S:
    case RISCV::FMADD_S_INX:
    case RISCV::FMSUB_D:
    case RISCV::FMSUB_D_IN32X:
    case RISCV::FMSUB_D_INX:
    case RISCV::FMSUB_H:
    case RISCV::FMSUB_H_INX:
    case RISCV::FMSUB_S:
    case RISCV::FMSUB_S_INX:
    case RISCV::FNMADD_D:
    case RISCV::FNMADD_D_IN32X:
    case RISCV::FNMADD_D_INX:
    case RISCV::FNMADD_H:
    case RISCV::FNMADD_H_INX:
    case RISCV::FNMADD_S:
    case RISCV::FNMADD_S_INX:
    case RISCV::FNMSUB_D:
    case RISCV::FNMSUB_D_IN32X:
    case RISCV::FNMSUB_D_INX:
    case RISCV::FNMSUB_H:
    case RISCV::FNMSUB_H_INX:
    case RISCV::FNMSUB_S:
    case RISCV::FNMSUB_S_INX: {
      // op: rs3
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 27;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: frm
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 12;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::CV_SB_rr_inc:
    case RISCV::CV_SH_rr_inc:
    case RISCV::CV_SW_rr_inc: {
      // op: rs3
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      break;
    }
    case RISCV::VSETIVLI: {
      // op: uimm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: vtypei
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1023);
      op <<= 20;
      Value |= op;
      break;
    }
    case RISCV::Insn32: {
      // op: value
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(4294967295);
      Value |= op;
      break;
    }
    case RISCV::Insn16: {
      // op: value
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(65535);
      Value |= op;
      break;
    }
    case RISCV::VID_V: {
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: vm
      op = getVMaskReg(MI, 1, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::VMV_V_V: {
      // op: vs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::VADC_VIM:
    case RISCV::VMADC_VI:
    case RISCV::VMADC_VIM:
    case RISCV::VMERGE_VIM: {
      // op: vs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: imm
      op = getImmOpValue(MI, 2, Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::VADD_VI:
    case RISCV::VAND_VI:
    case RISCV::VMSEQ_VI:
    case RISCV::VMSGTU_VI:
    case RISCV::VMSGT_VI:
    case RISCV::VMSLEU_VI:
    case RISCV::VMSLE_VI:
    case RISCV::VMSNE_VI:
    case RISCV::VOR_VI:
    case RISCV::VRSUB_VI:
    case RISCV::VSADDU_VI:
    case RISCV::VSADD_VI:
    case RISCV::VXOR_VI: {
      // op: vs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: imm
      op = getImmOpValue(MI, 2, Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: vm
      op = getVMaskReg(MI, 3, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::VROR_VI: {
      // op: vs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(32)) << 21;
      Value |= (op & UINT64_C(31)) << 15;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: vm
      op = getVMaskReg(MI, 3, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::VAESKF1_VI:
    case RISCV::VSM4K_VI: {
      // op: vs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::VNCLIPU_WI:
    case RISCV::VNCLIP_WI:
    case RISCV::VNSRA_WI:
    case RISCV::VNSRL_WI:
    case RISCV::VRGATHER_VI:
    case RISCV::VSLIDEDOWN_VI:
    case RISCV::VSLIDEUP_VI:
    case RISCV::VSLL_VI:
    case RISCV::VSRA_VI:
    case RISCV::VSRL_VI:
    case RISCV::VSSRA_VI:
    case RISCV::VSSRL_VI:
    case RISCV::VWSLL_VI: {
      // op: vs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: vm
      op = getVMaskReg(MI, 3, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::VADC_VXM:
    case RISCV::VFMERGE_VFM:
    case RISCV::VMADC_VX:
    case RISCV::VMADC_VXM:
    case RISCV::VMERGE_VXM:
    case RISCV::VMSBC_VX:
    case RISCV::VMSBC_VXM:
    case RISCV::VSBC_VXM: {
      // op: vs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::VAADDU_VX:
    case RISCV::VAADD_VX:
    case RISCV::VADD_VX:
    case RISCV::VANDN_VX:
    case RISCV::VAND_VX:
    case RISCV::VASUBU_VX:
    case RISCV::VASUB_VX:
    case RISCV::VCLMULH_VX:
    case RISCV::VCLMUL_VX:
    case RISCV::VDIVU_VX:
    case RISCV::VDIV_VX:
    case RISCV::VFADD_VF:
    case RISCV::VFDIV_VF:
    case RISCV::VFMAX_VF:
    case RISCV::VFMIN_VF:
    case RISCV::VFMUL_VF:
    case RISCV::VFNRCLIP_XU_F_QF:
    case RISCV::VFNRCLIP_X_F_QF:
    case RISCV::VFRDIV_VF:
    case RISCV::VFRSUB_VF:
    case RISCV::VFSGNJN_VF:
    case RISCV::VFSGNJX_VF:
    case RISCV::VFSGNJ_VF:
    case RISCV::VFSLIDE1DOWN_VF:
    case RISCV::VFSLIDE1UP_VF:
    case RISCV::VFSUB_VF:
    case RISCV::VFWADD_VF:
    case RISCV::VFWADD_WF:
    case RISCV::VFWMUL_VF:
    case RISCV::VFWSUB_VF:
    case RISCV::VFWSUB_WF:
    case RISCV::VMAXU_VX:
    case RISCV::VMAX_VX:
    case RISCV::VMFEQ_VF:
    case RISCV::VMFGE_VF:
    case RISCV::VMFGT_VF:
    case RISCV::VMFLE_VF:
    case RISCV::VMFLT_VF:
    case RISCV::VMFNE_VF:
    case RISCV::VMINU_VX:
    case RISCV::VMIN_VX:
    case RISCV::VMSEQ_VX:
    case RISCV::VMSGTU_VX:
    case RISCV::VMSGT_VX:
    case RISCV::VMSLEU_VX:
    case RISCV::VMSLE_VX:
    case RISCV::VMSLTU_VX:
    case RISCV::VMSLT_VX:
    case RISCV::VMSNE_VX:
    case RISCV::VMULHSU_VX:
    case RISCV::VMULHU_VX:
    case RISCV::VMULH_VX:
    case RISCV::VMUL_VX:
    case RISCV::VNCLIPU_WX:
    case RISCV::VNCLIP_WX:
    case RISCV::VNSRA_WX:
    case RISCV::VNSRL_WX:
    case RISCV::VOR_VX:
    case RISCV::VREMU_VX:
    case RISCV::VREM_VX:
    case RISCV::VRGATHER_VX:
    case RISCV::VROL_VX:
    case RISCV::VROR_VX:
    case RISCV::VRSUB_VX:
    case RISCV::VSADDU_VX:
    case RISCV::VSADD_VX:
    case RISCV::VSLIDE1DOWN_VX:
    case RISCV::VSLIDE1UP_VX:
    case RISCV::VSLIDEDOWN_VX:
    case RISCV::VSLIDEUP_VX:
    case RISCV::VSLL_VX:
    case RISCV::VSMUL_VX:
    case RISCV::VSRA_VX:
    case RISCV::VSRL_VX:
    case RISCV::VSSRA_VX:
    case RISCV::VSSRL_VX:
    case RISCV::VSSUBU_VX:
    case RISCV::VSSUB_VX:
    case RISCV::VSUB_VX:
    case RISCV::VWADDU_VX:
    case RISCV::VWADDU_WX:
    case RISCV::VWADD_VX:
    case RISCV::VWADD_WX:
    case RISCV::VWMULSU_VX:
    case RISCV::VWMULU_VX:
    case RISCV::VWMUL_VX:
    case RISCV::VWSLL_VX:
    case RISCV::VWSUBU_VX:
    case RISCV::VWSUBU_WX:
    case RISCV::VWSUB_VX:
    case RISCV::VWSUB_WX:
    case RISCV::VXOR_VX: {
      // op: vs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: vm
      op = getVMaskReg(MI, 3, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::VFMV_F_S:
    case RISCV::VMV1R_V:
    case RISCV::VMV2R_V:
    case RISCV::VMV4R_V:
    case RISCV::VMV8R_V:
    case RISCV::VMV_X_S: {
      // op: vs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::VBREV8_V:
    case RISCV::VBREV_V:
    case RISCV::VCLZ_V:
    case RISCV::VCPOP_M:
    case RISCV::VCPOP_V:
    case RISCV::VCTZ_V:
    case RISCV::VFCLASS_V:
    case RISCV::VFCVT_F_XU_V:
    case RISCV::VFCVT_F_X_V:
    case RISCV::VFCVT_RTZ_XU_F_V:
    case RISCV::VFCVT_RTZ_X_F_V:
    case RISCV::VFCVT_XU_F_V:
    case RISCV::VFCVT_X_F_V:
    case RISCV::VFIRST_M:
    case RISCV::VFNCVTBF16_F_F_W:
    case RISCV::VFNCVT_F_F_W:
    case RISCV::VFNCVT_F_XU_W:
    case RISCV::VFNCVT_F_X_W:
    case RISCV::VFNCVT_ROD_F_F_W:
    case RISCV::VFNCVT_RTZ_XU_F_W:
    case RISCV::VFNCVT_RTZ_X_F_W:
    case RISCV::VFNCVT_XU_F_W:
    case RISCV::VFNCVT_X_F_W:
    case RISCV::VFREC7_V:
    case RISCV::VFRSQRT7_V:
    case RISCV::VFSQRT_V:
    case RISCV::VFWCVTBF16_F_F_V:
    case RISCV::VFWCVT_F_F_V:
    case RISCV::VFWCVT_F_XU_V:
    case RISCV::VFWCVT_F_X_V:
    case RISCV::VFWCVT_RTZ_XU_F_V:
    case RISCV::VFWCVT_RTZ_X_F_V:
    case RISCV::VFWCVT_XU_F_V:
    case RISCV::VFWCVT_X_F_V:
    case RISCV::VIOTA_M:
    case RISCV::VMSBF_M:
    case RISCV::VMSIF_M:
    case RISCV::VMSOF_M:
    case RISCV::VREV8_V:
    case RISCV::VSEXT_VF2:
    case RISCV::VSEXT_VF4:
    case RISCV::VSEXT_VF8:
    case RISCV::VZEXT_VF2:
    case RISCV::VZEXT_VF4:
    case RISCV::VZEXT_VF8: {
      // op: vs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: vm
      op = getVMaskReg(MI, 2, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::VADC_VVM:
    case RISCV::VCOMPRESS_VM:
    case RISCV::VMADC_VV:
    case RISCV::VMADC_VVM:
    case RISCV::VMANDN_MM:
    case RISCV::VMAND_MM:
    case RISCV::VMERGE_VVM:
    case RISCV::VMNAND_MM:
    case RISCV::VMNOR_MM:
    case RISCV::VMORN_MM:
    case RISCV::VMOR_MM:
    case RISCV::VMSBC_VV:
    case RISCV::VMSBC_VVM:
    case RISCV::VMXNOR_MM:
    case RISCV::VMXOR_MM:
    case RISCV::VSBC_VVM:
    case RISCV::VSM3ME_VV: {
      // op: vs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: vs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::VAADDU_VV:
    case RISCV::VAADD_VV:
    case RISCV::VADD_VV:
    case RISCV::VANDN_VV:
    case RISCV::VAND_VV:
    case RISCV::VASUBU_VV:
    case RISCV::VASUB_VV:
    case RISCV::VCLMULH_VV:
    case RISCV::VCLMUL_VV:
    case RISCV::VDIVU_VV:
    case RISCV::VDIV_VV:
    case RISCV::VFADD_VV:
    case RISCV::VFDIV_VV:
    case RISCV::VFMAX_VV:
    case RISCV::VFMIN_VV:
    case RISCV::VFMUL_VV:
    case RISCV::VFREDMAX_VS:
    case RISCV::VFREDMIN_VS:
    case RISCV::VFREDOSUM_VS:
    case RISCV::VFREDUSUM_VS:
    case RISCV::VFSGNJN_VV:
    case RISCV::VFSGNJX_VV:
    case RISCV::VFSGNJ_VV:
    case RISCV::VFSUB_VV:
    case RISCV::VFWADD_VV:
    case RISCV::VFWADD_WV:
    case RISCV::VFWMUL_VV:
    case RISCV::VFWREDOSUM_VS:
    case RISCV::VFWREDUSUM_VS:
    case RISCV::VFWSUB_VV:
    case RISCV::VFWSUB_WV:
    case RISCV::VMAXU_VV:
    case RISCV::VMAX_VV:
    case RISCV::VMFEQ_VV:
    case RISCV::VMFLE_VV:
    case RISCV::VMFLT_VV:
    case RISCV::VMFNE_VV:
    case RISCV::VMINU_VV:
    case RISCV::VMIN_VV:
    case RISCV::VMSEQ_VV:
    case RISCV::VMSLEU_VV:
    case RISCV::VMSLE_VV:
    case RISCV::VMSLTU_VV:
    case RISCV::VMSLT_VV:
    case RISCV::VMSNE_VV:
    case RISCV::VMULHSU_VV:
    case RISCV::VMULHU_VV:
    case RISCV::VMULH_VV:
    case RISCV::VMUL_VV:
    case RISCV::VNCLIPU_WV:
    case RISCV::VNCLIP_WV:
    case RISCV::VNSRA_WV:
    case RISCV::VNSRL_WV:
    case RISCV::VOR_VV:
    case RISCV::VREDAND_VS:
    case RISCV::VREDMAXU_VS:
    case RISCV::VREDMAX_VS:
    case RISCV::VREDMINU_VS:
    case RISCV::VREDMIN_VS:
    case RISCV::VREDOR_VS:
    case RISCV::VREDSUM_VS:
    case RISCV::VREDXOR_VS:
    case RISCV::VREMU_VV:
    case RISCV::VREM_VV:
    case RISCV::VRGATHEREI16_VV:
    case RISCV::VRGATHER_VV:
    case RISCV::VROL_VV:
    case RISCV::VROR_VV:
    case RISCV::VSADDU_VV:
    case RISCV::VSADD_VV:
    case RISCV::VSLL_VV:
    case RISCV::VSMUL_VV:
    case RISCV::VSRA_VV:
    case RISCV::VSRL_VV:
    case RISCV::VSSRA_VV:
    case RISCV::VSSRL_VV:
    case RISCV::VSSUBU_VV:
    case RISCV::VSSUB_VV:
    case RISCV::VSUB_VV:
    case RISCV::VWADDU_VV:
    case RISCV::VWADDU_WV:
    case RISCV::VWADD_VV:
    case RISCV::VWADD_WV:
    case RISCV::VWMULSU_VV:
    case RISCV::VWMULU_VV:
    case RISCV::VWMUL_VV:
    case RISCV::VWREDSUMU_VS:
    case RISCV::VWREDSUM_VS:
    case RISCV::VWSLL_VV:
    case RISCV::VWSUBU_VV:
    case RISCV::VWSUBU_WV:
    case RISCV::VWSUB_VV:
    case RISCV::VWSUB_WV:
    case RISCV::VXOR_VV: {
      // op: vs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: vs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: vm
      op = getVMaskReg(MI, 3, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::VAESKF2_VI:
    case RISCV::VSM3C_VI: {
      // op: vs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::VLOXEI8_V:
    case RISCV::VLOXEI16_V:
    case RISCV::VLOXEI32_V:
    case RISCV::VLOXEI64_V:
    case RISCV::VLOXSEG2EI8_V:
    case RISCV::VLOXSEG2EI16_V:
    case RISCV::VLOXSEG2EI32_V:
    case RISCV::VLOXSEG2EI64_V:
    case RISCV::VLOXSEG3EI8_V:
    case RISCV::VLOXSEG3EI16_V:
    case RISCV::VLOXSEG3EI32_V:
    case RISCV::VLOXSEG3EI64_V:
    case RISCV::VLOXSEG4EI8_V:
    case RISCV::VLOXSEG4EI16_V:
    case RISCV::VLOXSEG4EI32_V:
    case RISCV::VLOXSEG4EI64_V:
    case RISCV::VLOXSEG5EI8_V:
    case RISCV::VLOXSEG5EI16_V:
    case RISCV::VLOXSEG5EI32_V:
    case RISCV::VLOXSEG5EI64_V:
    case RISCV::VLOXSEG6EI8_V:
    case RISCV::VLOXSEG6EI16_V:
    case RISCV::VLOXSEG6EI32_V:
    case RISCV::VLOXSEG6EI64_V:
    case RISCV::VLOXSEG7EI8_V:
    case RISCV::VLOXSEG7EI16_V:
    case RISCV::VLOXSEG7EI32_V:
    case RISCV::VLOXSEG7EI64_V:
    case RISCV::VLOXSEG8EI8_V:
    case RISCV::VLOXSEG8EI16_V:
    case RISCV::VLOXSEG8EI32_V:
    case RISCV::VLOXSEG8EI64_V:
    case RISCV::VLUXEI8_V:
    case RISCV::VLUXEI16_V:
    case RISCV::VLUXEI32_V:
    case RISCV::VLUXEI64_V:
    case RISCV::VLUXSEG2EI8_V:
    case RISCV::VLUXSEG2EI16_V:
    case RISCV::VLUXSEG2EI32_V:
    case RISCV::VLUXSEG2EI64_V:
    case RISCV::VLUXSEG3EI8_V:
    case RISCV::VLUXSEG3EI16_V:
    case RISCV::VLUXSEG3EI32_V:
    case RISCV::VLUXSEG3EI64_V:
    case RISCV::VLUXSEG4EI8_V:
    case RISCV::VLUXSEG4EI16_V:
    case RISCV::VLUXSEG4EI32_V:
    case RISCV::VLUXSEG4EI64_V:
    case RISCV::VLUXSEG5EI8_V:
    case RISCV::VLUXSEG5EI16_V:
    case RISCV::VLUXSEG5EI32_V:
    case RISCV::VLUXSEG5EI64_V:
    case RISCV::VLUXSEG6EI8_V:
    case RISCV::VLUXSEG6EI16_V:
    case RISCV::VLUXSEG6EI32_V:
    case RISCV::VLUXSEG6EI64_V:
    case RISCV::VLUXSEG7EI8_V:
    case RISCV::VLUXSEG7EI16_V:
    case RISCV::VLUXSEG7EI32_V:
    case RISCV::VLUXSEG7EI64_V:
    case RISCV::VLUXSEG8EI8_V:
    case RISCV::VLUXSEG8EI16_V:
    case RISCV::VLUXSEG8EI32_V:
    case RISCV::VLUXSEG8EI64_V: {
      // op: vs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: vm
      op = getVMaskReg(MI, 3, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::VSOXEI8_V:
    case RISCV::VSOXEI16_V:
    case RISCV::VSOXEI32_V:
    case RISCV::VSOXEI64_V:
    case RISCV::VSOXSEG2EI8_V:
    case RISCV::VSOXSEG2EI16_V:
    case RISCV::VSOXSEG2EI32_V:
    case RISCV::VSOXSEG2EI64_V:
    case RISCV::VSOXSEG3EI8_V:
    case RISCV::VSOXSEG3EI16_V:
    case RISCV::VSOXSEG3EI32_V:
    case RISCV::VSOXSEG3EI64_V:
    case RISCV::VSOXSEG4EI8_V:
    case RISCV::VSOXSEG4EI16_V:
    case RISCV::VSOXSEG4EI32_V:
    case RISCV::VSOXSEG4EI64_V:
    case RISCV::VSOXSEG5EI8_V:
    case RISCV::VSOXSEG5EI16_V:
    case RISCV::VSOXSEG5EI32_V:
    case RISCV::VSOXSEG5EI64_V:
    case RISCV::VSOXSEG6EI8_V:
    case RISCV::VSOXSEG6EI16_V:
    case RISCV::VSOXSEG6EI32_V:
    case RISCV::VSOXSEG6EI64_V:
    case RISCV::VSOXSEG7EI8_V:
    case RISCV::VSOXSEG7EI16_V:
    case RISCV::VSOXSEG7EI32_V:
    case RISCV::VSOXSEG7EI64_V:
    case RISCV::VSOXSEG8EI8_V:
    case RISCV::VSOXSEG8EI16_V:
    case RISCV::VSOXSEG8EI32_V:
    case RISCV::VSOXSEG8EI64_V:
    case RISCV::VSUXEI8_V:
    case RISCV::VSUXEI16_V:
    case RISCV::VSUXEI32_V:
    case RISCV::VSUXEI64_V:
    case RISCV::VSUXSEG2EI8_V:
    case RISCV::VSUXSEG2EI16_V:
    case RISCV::VSUXSEG2EI32_V:
    case RISCV::VSUXSEG2EI64_V:
    case RISCV::VSUXSEG3EI8_V:
    case RISCV::VSUXSEG3EI16_V:
    case RISCV::VSUXSEG3EI32_V:
    case RISCV::VSUXSEG3EI64_V:
    case RISCV::VSUXSEG4EI8_V:
    case RISCV::VSUXSEG4EI16_V:
    case RISCV::VSUXSEG4EI32_V:
    case RISCV::VSUXSEG4EI64_V:
    case RISCV::VSUXSEG5EI8_V:
    case RISCV::VSUXSEG5EI16_V:
    case RISCV::VSUXSEG5EI32_V:
    case RISCV::VSUXSEG5EI64_V:
    case RISCV::VSUXSEG6EI8_V:
    case RISCV::VSUXSEG6EI16_V:
    case RISCV::VSUXSEG6EI32_V:
    case RISCV::VSUXSEG6EI64_V:
    case RISCV::VSUXSEG7EI8_V:
    case RISCV::VSUXSEG7EI16_V:
    case RISCV::VSUXSEG7EI32_V:
    case RISCV::VSUXSEG7EI64_V:
    case RISCV::VSUXSEG8EI8_V:
    case RISCV::VSUXSEG8EI16_V:
    case RISCV::VSUXSEG8EI32_V:
    case RISCV::VSUXSEG8EI64_V: {
      // op: vs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vs3
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: vm
      op = getVMaskReg(MI, 3, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::VAESDF_VS:
    case RISCV::VAESDF_VV:
    case RISCV::VAESDM_VS:
    case RISCV::VAESDM_VV:
    case RISCV::VAESEF_VS:
    case RISCV::VAESEF_VV:
    case RISCV::VAESEM_VS:
    case RISCV::VAESEM_VV:
    case RISCV::VAESZ_VS:
    case RISCV::VGMUL_VV:
    case RISCV::VSM4R_VS:
    case RISCV::VSM4R_VV: {
      // op: vs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::VGHSH_VV:
    case RISCV::VSHA2CH_VV:
    case RISCV::VSHA2CL_VV:
    case RISCV::VSHA2MS_VV: {
      // op: vs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: vs1
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      break;
    }
    case RISCV::THVdotVMAQASU_VX:
    case RISCV::THVdotVMAQAUS_VX:
    case RISCV::THVdotVMAQAU_VX:
    case RISCV::THVdotVMAQA_VX:
    case RISCV::VFMACC_VF:
    case RISCV::VFMADD_VF:
    case RISCV::VFMSAC_VF:
    case RISCV::VFMSUB_VF:
    case RISCV::VFNMACC_VF:
    case RISCV::VFNMADD_VF:
    case RISCV::VFNMSAC_VF:
    case RISCV::VFNMSUB_VF:
    case RISCV::VFWMACCBF16_VF:
    case RISCV::VFWMACC_VF:
    case RISCV::VFWMSAC_VF:
    case RISCV::VFWNMACC_VF:
    case RISCV::VFWNMSAC_VF:
    case RISCV::VMACC_VX:
    case RISCV::VMADD_VX:
    case RISCV::VNMSAC_VX:
    case RISCV::VNMSUB_VX:
    case RISCV::VWMACCSU_VX:
    case RISCV::VWMACCUS_VX:
    case RISCV::VWMACCU_VX:
    case RISCV::VWMACC_VX: {
      // op: vs2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: vm
      op = getVMaskReg(MI, 4, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 25;
      Value |= op;
      break;
    }
    case RISCV::THVdotVMAQASU_VV:
    case RISCV::THVdotVMAQAU_VV:
    case RISCV::THVdotVMAQA_VV:
    case RISCV::VFMACC_VV:
    case RISCV::VFMADD_VV:
    case RISCV::VFMSAC_VV:
    case RISCV::VFMSUB_VV:
    case RISCV::VFNMACC_VV:
    case RISCV::VFNMADD_VV:
    case RISCV::VFNMSAC_VV:
    case RISCV::VFNMSUB_VV:
    case RISCV::VFWMACCBF16_VV:
    case RISCV::VFWMACC_VV:
    case RISCV::VFWMSAC_VV:
    case RISCV::VFWNMACC_VV:
    case RISCV::VFWNMSAC_VV:
    case RISCV::VMACC_VV:
    case RISCV::VMADD_VV:
    case RISCV::VNMSAC_VV:
    case RISCV::VNMSUB_VV:
    case RISCV::VWMACCSU_VV:
    case RISCV::VWMACCU_VV:
    case RISCV::VWMACC_VV: {
      // op: vs2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: vs1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 15;
      Value |= op;
      // op: vd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 7;
      Value |= op;
      // op: vm
      op = getVMaskReg(MI, 4, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 25;
      Value |= op;
      break;
    }
  default:
    std::string msg;
    raw_string_ostream Msg(msg);
    Msg << "Not supported instr: " << MI;
    report_fatal_error(Msg.str().c_str());
  }
  return Value;
}

#ifdef GET_OPERAND_BIT_OFFSET
#undef GET_OPERAND_BIT_OFFSET

uint32_t RISCVMCCodeEmitter::getOperandBitOffset(const MCInst &MI,
    unsigned OpNum,
    const MCSubtargetInfo &STI) const {
  switch (MI.getOpcode()) {
    case RISCV::C_EBREAK:
    case RISCV::C_MOP1:
    case RISCV::C_MOP3:
    case RISCV::C_MOP5:
    case RISCV::C_MOP7:
    case RISCV::C_MOP9:
    case RISCV::C_MOP11:
    case RISCV::C_MOP13:
    case RISCV::C_MOP15:
    case RISCV::C_NOP:
    case RISCV::C_SSPOPCHK:
    case RISCV::C_SSPUSH:
    case RISCV::C_UNIMP:
    case RISCV::DRET:
    case RISCV::EBREAK:
    case RISCV::ECALL:
    case RISCV::FENCE_I:
    case RISCV::FENCE_TSO:
    case RISCV::MRET:
    case RISCV::SFENCE_INVAL_IR:
    case RISCV::SFENCE_W_INVAL:
    case RISCV::SF_CEASE:
    case RISCV::SRET:
    case RISCV::TH_DCACHE_CALL:
    case RISCV::TH_DCACHE_CIALL:
    case RISCV::TH_DCACHE_IALL:
    case RISCV::TH_ICACHE_IALL:
    case RISCV::TH_ICACHE_IALLS:
    case RISCV::TH_L2CACHE_CALL:
    case RISCV::TH_L2CACHE_CIALL:
    case RISCV::TH_L2CACHE_IALL:
    case RISCV::TH_SYNC:
    case RISCV::TH_SYNC_I:
    case RISCV::TH_SYNC_IS:
    case RISCV::TH_SYNC_S:
    case RISCV::UNIMP:
    case RISCV::WFI:
    case RISCV::WRS_NTO:
    case RISCV::WRS_STO: {
      break;
    }
    case RISCV::C_NOP_HINT: {
      switch (OpNum) {
      case 0:
        // op: imm
        return 2;
      }
      break;
    }
    case RISCV::CM_JALT:
    case RISCV::CM_JT: {
      switch (OpNum) {
      case 0:
        // op: index
        return 2;
      }
      break;
    }
    case RISCV::C_J:
    case RISCV::C_JAL: {
      switch (OpNum) {
      case 0:
        // op: offset
        return 2;
      }
      break;
    }
    case RISCV::InsnS: {
      switch (OpNum) {
      case 0:
        // op: opcode
        return 0;
      case 1:
        // op: funct3
        return 12;
      case 4:
        // op: imm12
        return 7;
      case 2:
        // op: rs2
        return 20;
      case 3:
        // op: rs1
        return 15;
      }
      break;
    }
    case RISCV::InsnB: {
      switch (OpNum) {
      case 0:
        // op: opcode
        return 0;
      case 1:
        // op: funct3
        return 12;
      case 4:
        // op: imm12
        return 7;
      case 3:
        // op: rs2
        return 20;
      case 2:
        // op: rs1
        return 15;
      }
      break;
    }
    case RISCV::InsnCJ: {
      switch (OpNum) {
      case 0:
        // op: opcode
        return 0;
      case 1:
        // op: funct3
        return 13;
      case 2:
        // op: imm11
        return 2;
      }
      break;
    }
    case RISCV::InsnCSS: {
      switch (OpNum) {
      case 0:
        // op: opcode
        return 0;
      case 1:
        // op: funct3
        return 13;
      case 3:
        // op: imm6
        return 7;
      case 2:
        // op: rs2
        return 2;
      }
      break;
    }
    case RISCV::InsnCB: {
      switch (OpNum) {
      case 0:
        // op: opcode
        return 0;
      case 1:
        // op: funct3
        return 13;
      case 3:
        // op: imm8
        return 2;
      case 2:
        // op: rs1
        return 7;
      }
      break;
    }
    case RISCV::InsnCS: {
      switch (OpNum) {
      case 0:
        // op: opcode
        return 0;
      case 1:
        // op: funct3
        return 13;
      case 4:
        // op: imm5
        return 5;
      case 2:
        // op: rs2
        return 2;
      case 3:
        // op: rs1
        return 7;
      }
      break;
    }
    case RISCV::FENCE: {
      switch (OpNum) {
      case 0:
        // op: pred
        return 24;
      case 1:
        // op: succ
        return 20;
      }
      break;
    }
    case RISCV::C_FLD:
    case RISCV::C_FLW:
    case RISCV::C_LBU:
    case RISCV::C_LD:
    case RISCV::C_LH:
    case RISCV::C_LHU:
    case RISCV::C_LW:
    case RISCV::QK_C_LBU:
    case RISCV::QK_C_LHU: {
      switch (OpNum) {
      case 0:
        // op: rd
        return 2;
      case 1:
        // op: rs1
        return 7;
      case 2:
        // op: imm
        return 5;
      }
      break;
    }
    case RISCV::CV_LBU_rr:
    case RISCV::CV_LB_rr:
    case RISCV::CV_LHU_rr:
    case RISCV::CV_LH_rr:
    case RISCV::CV_LW_rr: {
      switch (OpNum) {
      case 0:
        // op: rd
        return 7;
      case 1:
        // op: cvrr
        return 15;
      }
      break;
    }
    case RISCV::FLI_D:
    case RISCV::FLI_H:
    case RISCV::FLI_S: {
      switch (OpNum) {
      case 0:
        // op: rd
        return 7;
      case 1:
        // op: imm
        return 15;
      }
      break;
    }
    case RISCV::SSRDP: {
      switch (OpNum) {
      case 0:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::QK_C_LBUSP:
    case RISCV::QK_C_LHUSP:
    case RISCV::QK_C_SBSP:
    case RISCV::QK_C_SHSP: {
      switch (OpNum) {
      case 0:
        // op: rd_rs2
        return 2;
      case 2:
        // op: imm
        return 7;
      }
      break;
    }
    case RISCV::CM_POP:
    case RISCV::CM_POPRET:
    case RISCV::CM_POPRETZ:
    case RISCV::CM_PUSH: {
      switch (OpNum) {
      case 0:
        // op: rlist
        return 4;
      case 1:
        // op: stackadj
        return 2;
      }
      break;
    }
    case RISCV::CBO_CLEAN:
    case RISCV::CBO_FLUSH:
    case RISCV::CBO_INVAL:
    case RISCV::CBO_ZERO:
    case RISCV::SF_CDISCARD_D_L1:
    case RISCV::SF_CFLUSH_D_L1:
    case RISCV::SSPOPCHK:
    case RISCV::TH_DCACHE_CIPA:
    case RISCV::TH_DCACHE_CISW:
    case RISCV::TH_DCACHE_CIVA:
    case RISCV::TH_DCACHE_CPA:
    case RISCV::TH_DCACHE_CPAL1:
    case RISCV::TH_DCACHE_CSW:
    case RISCV::TH_DCACHE_CVA:
    case RISCV::TH_DCACHE_CVAL1:
    case RISCV::TH_DCACHE_IPA:
    case RISCV::TH_DCACHE_ISW:
    case RISCV::TH_DCACHE_IVA:
    case RISCV::TH_ICACHE_IPA:
    case RISCV::TH_ICACHE_IVA: {
      switch (OpNum) {
      case 0:
        // op: rs1
        return 15;
      }
      break;
    }
    case RISCV::C_MV: {
      switch (OpNum) {
      case 0:
        // op: rs1
        return 7;
      case 1:
        // op: rs2
        return 2;
      }
      break;
    }
    case RISCV::C_JALR:
    case RISCV::C_JR: {
      switch (OpNum) {
      case 0:
        // op: rs1
        return 7;
      }
      break;
    }
    case RISCV::CV_SB_rr:
    case RISCV::CV_SH_rr:
    case RISCV::CV_SW_rr: {
      switch (OpNum) {
      case 0:
        // op: rs2
        return 20;
      case 1:
        // op: cvrr
        return 7;
      }
      break;
    }
    case RISCV::HSV_B:
    case RISCV::HSV_D:
    case RISCV::HSV_H:
    case RISCV::HSV_W: {
      switch (OpNum) {
      case 0:
        // op: rs2
        return 20;
      case 1:
        // op: rs1
        return 15;
      }
      break;
    }
    case RISCV::SSPUSH: {
      switch (OpNum) {
      case 0:
        // op: rs2
        return 20;
      }
      break;
    }
    case RISCV::C_FSD:
    case RISCV::C_FSW:
    case RISCV::C_SB:
    case RISCV::C_SD:
    case RISCV::C_SH:
    case RISCV::C_SW:
    case RISCV::QK_C_SB:
    case RISCV::QK_C_SH: {
      switch (OpNum) {
      case 0:
        // op: rs2
        return 2;
      case 1:
        // op: rs1
        return 7;
      case 2:
        // op: imm
        return 5;
      }
      break;
    }
    case RISCV::Insn16:
    case RISCV::Insn32: {
      switch (OpNum) {
      case 0:
        // op: value
        return 0;
      }
      break;
    }
    case RISCV::VID_V: {
      switch (OpNum) {
      case 0:
        // op: vd
        return 7;
      case 1:
        // op: vm
        return 25;
      }
      break;
    }
    case RISCV::VMV_V_I: {
      switch (OpNum) {
      case 1:
        // op: imm
        return 15;
      case 0:
        // op: vd
        return 7;
      }
      break;
    }
    case RISCV::C_LI:
    case RISCV::C_LUI: {
      switch (OpNum) {
      case 1:
        // op: imm
        return 2;
      case 0:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::C_BEQZ:
    case RISCV::C_BNEZ: {
      switch (OpNum) {
      case 1:
        // op: imm
        return 2;
      case 0:
        // op: rs1
        return 7;
      }
      break;
    }
    case RISCV::C_LI_HINT:
    case RISCV::C_LUI_HINT: {
      switch (OpNum) {
      case 1:
        // op: imm
        return 2;
      }
      break;
    }
    case RISCV::PREFETCH_I:
    case RISCV::PREFETCH_R:
    case RISCV::PREFETCH_W: {
      switch (OpNum) {
      case 1:
        // op: imm12
        return 25;
      case 0:
        // op: rs1
        return 15;
      }
      break;
    }
    case RISCV::AUIPC:
    case RISCV::JAL:
    case RISCV::LUI: {
      switch (OpNum) {
      case 1:
        // op: imm20
        return 12;
      case 0:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::InsnI:
    case RISCV::InsnI_Mem: {
      switch (OpNum) {
      case 1:
        // op: opcode
        return 0;
      case 2:
        // op: funct3
        return 12;
      case 4:
        // op: imm12
        return 20;
      case 3:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::InsnCI: {
      switch (OpNum) {
      case 1:
        // op: opcode
        return 0;
      case 2:
        // op: funct3
        return 13;
      case 3:
        // op: imm6
        return 2;
      case 0:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::InsnCIW: {
      switch (OpNum) {
      case 1:
        // op: opcode
        return 0;
      case 2:
        // op: funct3
        return 13;
      case 3:
        // op: imm8
        return 5;
      case 0:
        // op: rd
        return 2;
      }
      break;
    }
    case RISCV::InsnCL: {
      switch (OpNum) {
      case 1:
        // op: opcode
        return 0;
      case 2:
        // op: funct3
        return 13;
      case 4:
        // op: imm5
        return 5;
      case 0:
        // op: rd
        return 2;
      case 3:
        // op: rs1
        return 7;
      }
      break;
    }
    case RISCV::InsnCR: {
      switch (OpNum) {
      case 1:
        // op: opcode
        return 0;
      case 2:
        // op: funct4
        return 12;
      case 3:
        // op: rs2
        return 2;
      case 0:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::InsnCA: {
      switch (OpNum) {
      case 1:
        // op: opcode
        return 0;
      case 2:
        // op: funct6
        return 10;
      case 3:
        // op: funct2
        return 5;
      case 0:
        // op: rd
        return 7;
      case 4:
        // op: rs2
        return 2;
      }
      break;
    }
    case RISCV::InsnJ:
    case RISCV::InsnU: {
      switch (OpNum) {
      case 1:
        // op: opcode
        return 0;
      case 2:
        // op: imm20
        return 12;
      case 0:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::InsnR4: {
      switch (OpNum) {
      case 1:
        // op: opcode
        return 0;
      case 3:
        // op: funct2
        return 25;
      case 2:
        // op: funct3
        return 12;
      case 6:
        // op: rs3
        return 27;
      case 5:
        // op: rs2
        return 20;
      case 4:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::InsnR: {
      switch (OpNum) {
      case 1:
        // op: opcode
        return 0;
      case 3:
        // op: funct7
        return 25;
      case 2:
        // op: funct3
        return 12;
      case 5:
        // op: rs2
        return 20;
      case 4:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::C_ADDI_HINT_IMM_ZERO:
    case RISCV::C_NOT:
    case RISCV::C_SEXT_B:
    case RISCV::C_SEXT_H:
    case RISCV::C_SLLI64_HINT:
    case RISCV::C_SRAI64_HINT:
    case RISCV::C_SRLI64_HINT:
    case RISCV::C_ZEXT_B:
    case RISCV::C_ZEXT_H:
    case RISCV::C_ZEXT_W: {
      switch (OpNum) {
      case 1:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::ADDI:
    case RISCV::ADDIW:
    case RISCV::ANDI:
    case RISCV::CV_ELW:
    case RISCV::FLD:
    case RISCV::FLH:
    case RISCV::FLW:
    case RISCV::JALR:
    case RISCV::LB:
    case RISCV::LBU:
    case RISCV::LD:
    case RISCV::LH:
    case RISCV::LHU:
    case RISCV::LW:
    case RISCV::LWU:
    case RISCV::ORI:
    case RISCV::SLTI:
    case RISCV::SLTIU:
    case RISCV::XORI: {
      switch (OpNum) {
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      case 2:
        // op: imm12
        return 20;
      }
      break;
    }
    case RISCV::CV_CLIP:
    case RISCV::CV_CLIPU: {
      switch (OpNum) {
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      case 2:
        // op: imm5
        return 20;
      }
      break;
    }
    case RISCV::CV_ADD_SCI_B:
    case RISCV::CV_ADD_SCI_H:
    case RISCV::CV_AND_SCI_B:
    case RISCV::CV_AND_SCI_H:
    case RISCV::CV_AVGU_SCI_B:
    case RISCV::CV_AVGU_SCI_H:
    case RISCV::CV_AVG_SCI_B:
    case RISCV::CV_AVG_SCI_H:
    case RISCV::CV_CMPEQ_SCI_B:
    case RISCV::CV_CMPEQ_SCI_H:
    case RISCV::CV_CMPGEU_SCI_B:
    case RISCV::CV_CMPGEU_SCI_H:
    case RISCV::CV_CMPGE_SCI_B:
    case RISCV::CV_CMPGE_SCI_H:
    case RISCV::CV_CMPGTU_SCI_B:
    case RISCV::CV_CMPGTU_SCI_H:
    case RISCV::CV_CMPGT_SCI_B:
    case RISCV::CV_CMPGT_SCI_H:
    case RISCV::CV_CMPLEU_SCI_B:
    case RISCV::CV_CMPLEU_SCI_H:
    case RISCV::CV_CMPLE_SCI_B:
    case RISCV::CV_CMPLE_SCI_H:
    case RISCV::CV_CMPLTU_SCI_B:
    case RISCV::CV_CMPLTU_SCI_H:
    case RISCV::CV_CMPLT_SCI_B:
    case RISCV::CV_CMPLT_SCI_H:
    case RISCV::CV_CMPNE_SCI_B:
    case RISCV::CV_CMPNE_SCI_H:
    case RISCV::CV_DOTSP_SCI_B:
    case RISCV::CV_DOTSP_SCI_H:
    case RISCV::CV_DOTUP_SCI_B:
    case RISCV::CV_DOTUP_SCI_H:
    case RISCV::CV_DOTUSP_SCI_B:
    case RISCV::CV_DOTUSP_SCI_H:
    case RISCV::CV_EXTRACTU_B:
    case RISCV::CV_EXTRACTU_H:
    case RISCV::CV_EXTRACT_B:
    case RISCV::CV_EXTRACT_H:
    case RISCV::CV_MAXU_SCI_B:
    case RISCV::CV_MAXU_SCI_H:
    case RISCV::CV_MAX_SCI_B:
    case RISCV::CV_MAX_SCI_H:
    case RISCV::CV_MINU_SCI_B:
    case RISCV::CV_MINU_SCI_H:
    case RISCV::CV_MIN_SCI_B:
    case RISCV::CV_MIN_SCI_H:
    case RISCV::CV_OR_SCI_B:
    case RISCV::CV_OR_SCI_H:
    case RISCV::CV_SHUFFLEI0_SCI_B:
    case RISCV::CV_SHUFFLEI1_SCI_B:
    case RISCV::CV_SHUFFLEI2_SCI_B:
    case RISCV::CV_SHUFFLEI3_SCI_B:
    case RISCV::CV_SHUFFLE_SCI_H:
    case RISCV::CV_SLL_SCI_B:
    case RISCV::CV_SLL_SCI_H:
    case RISCV::CV_SRA_SCI_B:
    case RISCV::CV_SRA_SCI_H:
    case RISCV::CV_SRL_SCI_B:
    case RISCV::CV_SRL_SCI_H:
    case RISCV::CV_SUB_SCI_B:
    case RISCV::CV_SUB_SCI_H:
    case RISCV::CV_XOR_SCI_B:
    case RISCV::CV_XOR_SCI_H: {
      switch (OpNum) {
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      case 2:
        // op: imm6
        return 20;
      }
      break;
    }
    case RISCV::CV_BCLR:
    case RISCV::CV_BITREV:
    case RISCV::CV_BSET:
    case RISCV::CV_EXTRACT:
    case RISCV::CV_EXTRACTU: {
      switch (OpNum) {
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      case 2:
        // op: is3
        return 25;
      case 3:
        // op: is2
        return 20;
      }
      break;
    }
    case RISCV::TH_EXT:
    case RISCV::TH_EXTU: {
      switch (OpNum) {
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      case 2:
        // op: msb
        return 26;
      case 3:
        // op: lsb
        return 20;
      }
      break;
    }
    case RISCV::AES64KS1I: {
      switch (OpNum) {
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      case 2:
        // op: rnum
        return 20;
      }
      break;
    }
    case RISCV::BCLRI:
    case RISCV::BEXTI:
    case RISCV::BINVI:
    case RISCV::BSETI:
    case RISCV::RORI:
    case RISCV::RORIW:
    case RISCV::SLLI:
    case RISCV::SLLIW:
    case RISCV::SLLI_UW:
    case RISCV::SRAI:
    case RISCV::SRAIW:
    case RISCV::SRLI:
    case RISCV::SRLIW:
    case RISCV::TH_SRRI:
    case RISCV::TH_SRRIW:
    case RISCV::TH_TST: {
      switch (OpNum) {
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      case 2:
        // op: shamt
        return 20;
      }
      break;
    }
    case RISCV::VSETVLI: {
      switch (OpNum) {
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      case 2:
        // op: vtypei
        return 20;
      }
      break;
    }
    case RISCV::AES64IM:
    case RISCV::BREV8:
    case RISCV::CLZ:
    case RISCV::CLZW:
    case RISCV::CPOP:
    case RISCV::CPOPW:
    case RISCV::CTZ:
    case RISCV::CTZW:
    case RISCV::CV_ABS:
    case RISCV::CV_ABS_B:
    case RISCV::CV_ABS_H:
    case RISCV::CV_CLB:
    case RISCV::CV_CNT:
    case RISCV::CV_CPLXCONJ:
    case RISCV::CV_EXTBS:
    case RISCV::CV_EXTBZ:
    case RISCV::CV_EXTHS:
    case RISCV::CV_EXTHZ:
    case RISCV::CV_FF1:
    case RISCV::CV_FL1:
    case RISCV::FCLASS_D:
    case RISCV::FCLASS_D_IN32X:
    case RISCV::FCLASS_D_INX:
    case RISCV::FCLASS_H:
    case RISCV::FCLASS_H_INX:
    case RISCV::FCLASS_S:
    case RISCV::FCLASS_S_INX:
    case RISCV::FMVH_X_D:
    case RISCV::FMV_D_X:
    case RISCV::FMV_H_X:
    case RISCV::FMV_W_X:
    case RISCV::FMV_X_D:
    case RISCV::FMV_X_H:
    case RISCV::FMV_X_W:
    case RISCV::FMV_X_W_FPR64:
    case RISCV::HLVX_HU:
    case RISCV::HLVX_WU:
    case RISCV::HLV_B:
    case RISCV::HLV_BU:
    case RISCV::HLV_D:
    case RISCV::HLV_H:
    case RISCV::HLV_HU:
    case RISCV::HLV_W:
    case RISCV::HLV_WU:
    case RISCV::LB_AQ:
    case RISCV::LB_AQ_RL:
    case RISCV::LD_AQ:
    case RISCV::LD_AQ_RL:
    case RISCV::LH_AQ:
    case RISCV::LH_AQ_RL:
    case RISCV::LR_D:
    case RISCV::LR_D_AQ:
    case RISCV::LR_D_AQ_RL:
    case RISCV::LR_D_RL:
    case RISCV::LR_W:
    case RISCV::LR_W_AQ:
    case RISCV::LR_W_AQ_RL:
    case RISCV::LR_W_RL:
    case RISCV::LW_AQ:
    case RISCV::LW_AQ_RL:
    case RISCV::MOPR0:
    case RISCV::MOPR1:
    case RISCV::MOPR2:
    case RISCV::MOPR3:
    case RISCV::MOPR4:
    case RISCV::MOPR5:
    case RISCV::MOPR6:
    case RISCV::MOPR7:
    case RISCV::MOPR8:
    case RISCV::MOPR9:
    case RISCV::MOPR10:
    case RISCV::MOPR11:
    case RISCV::MOPR12:
    case RISCV::MOPR13:
    case RISCV::MOPR14:
    case RISCV::MOPR15:
    case RISCV::MOPR16:
    case RISCV::MOPR17:
    case RISCV::MOPR18:
    case RISCV::MOPR19:
    case RISCV::MOPR20:
    case RISCV::MOPR21:
    case RISCV::MOPR22:
    case RISCV::MOPR23:
    case RISCV::MOPR24:
    case RISCV::MOPR25:
    case RISCV::MOPR26:
    case RISCV::MOPR27:
    case RISCV::MOPR28:
    case RISCV::MOPR29:
    case RISCV::MOPR30:
    case RISCV::MOPR31:
    case RISCV::ORC_B:
    case RISCV::REV8_RV32:
    case RISCV::REV8_RV64:
    case RISCV::SEXT_B:
    case RISCV::SEXT_H:
    case RISCV::SHA256SIG0:
    case RISCV::SHA256SIG1:
    case RISCV::SHA256SUM0:
    case RISCV::SHA256SUM1:
    case RISCV::SHA512SIG0:
    case RISCV::SHA512SIG1:
    case RISCV::SHA512SUM0:
    case RISCV::SHA512SUM1:
    case RISCV::SM3P0:
    case RISCV::SM3P1:
    case RISCV::TH_FF0:
    case RISCV::TH_FF1:
    case RISCV::TH_REV:
    case RISCV::TH_REVW:
    case RISCV::TH_TSTNBZ:
    case RISCV::UNZIP_RV32:
    case RISCV::ZEXT_H_RV32:
    case RISCV::ZEXT_H_RV64:
    case RISCV::ZIP_RV32: {
      switch (OpNum) {
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::VLE8FF_V:
    case RISCV::VLE8_V:
    case RISCV::VLE16FF_V:
    case RISCV::VLE16_V:
    case RISCV::VLE32FF_V:
    case RISCV::VLE32_V:
    case RISCV::VLE64FF_V:
    case RISCV::VLE64_V:
    case RISCV::VLSEG2E8FF_V:
    case RISCV::VLSEG2E8_V:
    case RISCV::VLSEG2E16FF_V:
    case RISCV::VLSEG2E16_V:
    case RISCV::VLSEG2E32FF_V:
    case RISCV::VLSEG2E32_V:
    case RISCV::VLSEG2E64FF_V:
    case RISCV::VLSEG2E64_V:
    case RISCV::VLSEG3E8FF_V:
    case RISCV::VLSEG3E8_V:
    case RISCV::VLSEG3E16FF_V:
    case RISCV::VLSEG3E16_V:
    case RISCV::VLSEG3E32FF_V:
    case RISCV::VLSEG3E32_V:
    case RISCV::VLSEG3E64FF_V:
    case RISCV::VLSEG3E64_V:
    case RISCV::VLSEG4E8FF_V:
    case RISCV::VLSEG4E8_V:
    case RISCV::VLSEG4E16FF_V:
    case RISCV::VLSEG4E16_V:
    case RISCV::VLSEG4E32FF_V:
    case RISCV::VLSEG4E32_V:
    case RISCV::VLSEG4E64FF_V:
    case RISCV::VLSEG4E64_V:
    case RISCV::VLSEG5E8FF_V:
    case RISCV::VLSEG5E8_V:
    case RISCV::VLSEG5E16FF_V:
    case RISCV::VLSEG5E16_V:
    case RISCV::VLSEG5E32FF_V:
    case RISCV::VLSEG5E32_V:
    case RISCV::VLSEG5E64FF_V:
    case RISCV::VLSEG5E64_V:
    case RISCV::VLSEG6E8FF_V:
    case RISCV::VLSEG6E8_V:
    case RISCV::VLSEG6E16FF_V:
    case RISCV::VLSEG6E16_V:
    case RISCV::VLSEG6E32FF_V:
    case RISCV::VLSEG6E32_V:
    case RISCV::VLSEG6E64FF_V:
    case RISCV::VLSEG6E64_V:
    case RISCV::VLSEG7E8FF_V:
    case RISCV::VLSEG7E8_V:
    case RISCV::VLSEG7E16FF_V:
    case RISCV::VLSEG7E16_V:
    case RISCV::VLSEG7E32FF_V:
    case RISCV::VLSEG7E32_V:
    case RISCV::VLSEG7E64FF_V:
    case RISCV::VLSEG7E64_V:
    case RISCV::VLSEG8E8FF_V:
    case RISCV::VLSEG8E8_V:
    case RISCV::VLSEG8E16FF_V:
    case RISCV::VLSEG8E16_V:
    case RISCV::VLSEG8E32FF_V:
    case RISCV::VLSEG8E32_V:
    case RISCV::VLSEG8E64FF_V:
    case RISCV::VLSEG8E64_V: {
      switch (OpNum) {
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: vd
        return 7;
      case 2:
        // op: vm
        return 25;
      }
      break;
    }
    case RISCV::VFMV_V_F:
    case RISCV::VL1RE8_V:
    case RISCV::VL1RE16_V:
    case RISCV::VL1RE32_V:
    case RISCV::VL1RE64_V:
    case RISCV::VL2RE8_V:
    case RISCV::VL2RE16_V:
    case RISCV::VL2RE32_V:
    case RISCV::VL2RE64_V:
    case RISCV::VL4RE8_V:
    case RISCV::VL4RE16_V:
    case RISCV::VL4RE32_V:
    case RISCV::VL4RE64_V:
    case RISCV::VL8RE8_V:
    case RISCV::VL8RE16_V:
    case RISCV::VL8RE32_V:
    case RISCV::VL8RE64_V:
    case RISCV::VLM_V:
    case RISCV::VMV_V_X: {
      switch (OpNum) {
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: vd
        return 7;
      }
      break;
    }
    case RISCV::VSE8_V:
    case RISCV::VSE16_V:
    case RISCV::VSE32_V:
    case RISCV::VSE64_V:
    case RISCV::VSSEG2E8_V:
    case RISCV::VSSEG2E16_V:
    case RISCV::VSSEG2E32_V:
    case RISCV::VSSEG2E64_V:
    case RISCV::VSSEG3E8_V:
    case RISCV::VSSEG3E16_V:
    case RISCV::VSSEG3E32_V:
    case RISCV::VSSEG3E64_V:
    case RISCV::VSSEG4E8_V:
    case RISCV::VSSEG4E16_V:
    case RISCV::VSSEG4E32_V:
    case RISCV::VSSEG4E64_V:
    case RISCV::VSSEG5E8_V:
    case RISCV::VSSEG5E16_V:
    case RISCV::VSSEG5E32_V:
    case RISCV::VSSEG5E64_V:
    case RISCV::VSSEG6E8_V:
    case RISCV::VSSEG6E16_V:
    case RISCV::VSSEG6E32_V:
    case RISCV::VSSEG6E64_V:
    case RISCV::VSSEG7E8_V:
    case RISCV::VSSEG7E16_V:
    case RISCV::VSSEG7E32_V:
    case RISCV::VSSEG7E64_V:
    case RISCV::VSSEG8E8_V:
    case RISCV::VSSEG8E16_V:
    case RISCV::VSSEG8E32_V:
    case RISCV::VSSEG8E64_V: {
      switch (OpNum) {
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: vs3
        return 7;
      case 2:
        // op: vm
        return 25;
      }
      break;
    }
    case RISCV::VS1R_V:
    case RISCV::VS2R_V:
    case RISCV::VS4R_V:
    case RISCV::VS8R_V:
    case RISCV::VSM_V: {
      switch (OpNum) {
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: vs3
        return 7;
      }
      break;
    }
    case RISCV::FCVTMOD_W_D:
    case RISCV::FCVT_BF16_S:
    case RISCV::FCVT_D_H:
    case RISCV::FCVT_D_H_IN32X:
    case RISCV::FCVT_D_H_INX:
    case RISCV::FCVT_D_L:
    case RISCV::FCVT_D_LU:
    case RISCV::FCVT_D_LU_INX:
    case RISCV::FCVT_D_L_INX:
    case RISCV::FCVT_D_S:
    case RISCV::FCVT_D_S_IN32X:
    case RISCV::FCVT_D_S_INX:
    case RISCV::FCVT_D_W:
    case RISCV::FCVT_D_WU:
    case RISCV::FCVT_D_WU_IN32X:
    case RISCV::FCVT_D_WU_INX:
    case RISCV::FCVT_D_W_IN32X:
    case RISCV::FCVT_D_W_INX:
    case RISCV::FCVT_H_D:
    case RISCV::FCVT_H_D_IN32X:
    case RISCV::FCVT_H_D_INX:
    case RISCV::FCVT_H_L:
    case RISCV::FCVT_H_LU:
    case RISCV::FCVT_H_LU_INX:
    case RISCV::FCVT_H_L_INX:
    case RISCV::FCVT_H_S:
    case RISCV::FCVT_H_S_INX:
    case RISCV::FCVT_H_W:
    case RISCV::FCVT_H_WU:
    case RISCV::FCVT_H_WU_INX:
    case RISCV::FCVT_H_W_INX:
    case RISCV::FCVT_LU_D:
    case RISCV::FCVT_LU_D_INX:
    case RISCV::FCVT_LU_H:
    case RISCV::FCVT_LU_H_INX:
    case RISCV::FCVT_LU_S:
    case RISCV::FCVT_LU_S_INX:
    case RISCV::FCVT_L_D:
    case RISCV::FCVT_L_D_INX:
    case RISCV::FCVT_L_H:
    case RISCV::FCVT_L_H_INX:
    case RISCV::FCVT_L_S:
    case RISCV::FCVT_L_S_INX:
    case RISCV::FCVT_S_BF16:
    case RISCV::FCVT_S_D:
    case RISCV::FCVT_S_D_IN32X:
    case RISCV::FCVT_S_D_INX:
    case RISCV::FCVT_S_H:
    case RISCV::FCVT_S_H_INX:
    case RISCV::FCVT_S_L:
    case RISCV::FCVT_S_LU:
    case RISCV::FCVT_S_LU_INX:
    case RISCV::FCVT_S_L_INX:
    case RISCV::FCVT_S_W:
    case RISCV::FCVT_S_WU:
    case RISCV::FCVT_S_WU_INX:
    case RISCV::FCVT_S_W_INX:
    case RISCV::FCVT_WU_D:
    case RISCV::FCVT_WU_D_IN32X:
    case RISCV::FCVT_WU_D_INX:
    case RISCV::FCVT_WU_H:
    case RISCV::FCVT_WU_H_INX:
    case RISCV::FCVT_WU_S:
    case RISCV::FCVT_WU_S_INX:
    case RISCV::FCVT_W_D:
    case RISCV::FCVT_W_D_IN32X:
    case RISCV::FCVT_W_D_INX:
    case RISCV::FCVT_W_H:
    case RISCV::FCVT_W_H_INX:
    case RISCV::FCVT_W_S:
    case RISCV::FCVT_W_S_INX:
    case RISCV::FROUNDNX_D:
    case RISCV::FROUNDNX_H:
    case RISCV::FROUNDNX_S:
    case RISCV::FROUND_D:
    case RISCV::FROUND_H:
    case RISCV::FROUND_S:
    case RISCV::FSQRT_D:
    case RISCV::FSQRT_D_IN32X:
    case RISCV::FSQRT_D_INX:
    case RISCV::FSQRT_H:
    case RISCV::FSQRT_H_INX:
    case RISCV::FSQRT_S:
    case RISCV::FSQRT_S_INX: {
      switch (OpNum) {
      case 1:
        // op: rs1
        return 15;
      case 2:
        // op: frm
        return 12;
      case 0:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::C_ADD: {
      switch (OpNum) {
      case 1:
        // op: rs1
        return 7;
      case 2:
        // op: rs2
        return 2;
      }
      break;
    }
    case RISCV::HFENCE_GVMA:
    case RISCV::HFENCE_VVMA:
    case RISCV::HINVAL_GVMA:
    case RISCV::HINVAL_VVMA:
    case RISCV::SB_AQ_RL:
    case RISCV::SB_RL:
    case RISCV::SD_AQ_RL:
    case RISCV::SD_RL:
    case RISCV::SFENCE_VMA:
    case RISCV::SH_AQ_RL:
    case RISCV::SH_RL:
    case RISCV::SINVAL_VMA:
    case RISCV::SW_AQ_RL:
    case RISCV::SW_RL:
    case RISCV::TH_SFENCE_VMAS: {
      switch (OpNum) {
      case 1:
        // op: rs2
        return 20;
      case 0:
        // op: rs1
        return 15;
      }
      break;
    }
    case RISCV::TH_LDD:
    case RISCV::TH_LWD:
    case RISCV::TH_LWUD:
    case RISCV::TH_SDD:
    case RISCV::TH_SWD: {
      switch (OpNum) {
      case 1:
        // op: rs2
        return 20;
      case 2:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      case 3:
        // op: uimm2
        return 25;
      }
      break;
    }
    case RISCV::VC_I:
    case RISCV::VC_X: {
      switch (OpNum) {
      case 1:
        // op: rs2
        return 20;
      case 3:
        // op: rs1
        return 15;
      case 2:
        // op: rd
        return 7;
      case 0:
        // op: funct6_lo2
        return 26;
      }
      break;
    }
    case RISCV::CM_MVA01S:
    case RISCV::CM_MVSA01: {
      switch (OpNum) {
      case 1:
        // op: rs2
        return 2;
      case 0:
        // op: rs1
        return 7;
      }
      break;
    }
    case RISCV::C_MV_HINT: {
      switch (OpNum) {
      case 1:
        // op: rs2
        return 2;
      }
      break;
    }
    case RISCV::VSETIVLI: {
      switch (OpNum) {
      case 1:
        // op: uimm
        return 15;
      case 0:
        // op: rd
        return 7;
      case 2:
        // op: vtypei
        return 20;
      }
      break;
    }
    case RISCV::VMV_V_V: {
      switch (OpNum) {
      case 1:
        // op: vs1
        return 15;
      case 0:
        // op: vd
        return 7;
      }
      break;
    }
    case RISCV::VBREV8_V:
    case RISCV::VBREV_V:
    case RISCV::VCLZ_V:
    case RISCV::VCPOP_M:
    case RISCV::VCPOP_V:
    case RISCV::VCTZ_V:
    case RISCV::VFCLASS_V:
    case RISCV::VFCVT_F_XU_V:
    case RISCV::VFCVT_F_X_V:
    case RISCV::VFCVT_RTZ_XU_F_V:
    case RISCV::VFCVT_RTZ_X_F_V:
    case RISCV::VFCVT_XU_F_V:
    case RISCV::VFCVT_X_F_V:
    case RISCV::VFIRST_M:
    case RISCV::VFNCVTBF16_F_F_W:
    case RISCV::VFNCVT_F_F_W:
    case RISCV::VFNCVT_F_XU_W:
    case RISCV::VFNCVT_F_X_W:
    case RISCV::VFNCVT_ROD_F_F_W:
    case RISCV::VFNCVT_RTZ_XU_F_W:
    case RISCV::VFNCVT_RTZ_X_F_W:
    case RISCV::VFNCVT_XU_F_W:
    case RISCV::VFNCVT_X_F_W:
    case RISCV::VFREC7_V:
    case RISCV::VFRSQRT7_V:
    case RISCV::VFSQRT_V:
    case RISCV::VFWCVTBF16_F_F_V:
    case RISCV::VFWCVT_F_F_V:
    case RISCV::VFWCVT_F_XU_V:
    case RISCV::VFWCVT_F_X_V:
    case RISCV::VFWCVT_RTZ_XU_F_V:
    case RISCV::VFWCVT_RTZ_X_F_V:
    case RISCV::VFWCVT_XU_F_V:
    case RISCV::VFWCVT_X_F_V:
    case RISCV::VIOTA_M:
    case RISCV::VMSBF_M:
    case RISCV::VMSIF_M:
    case RISCV::VMSOF_M:
    case RISCV::VREV8_V:
    case RISCV::VSEXT_VF2:
    case RISCV::VSEXT_VF4:
    case RISCV::VSEXT_VF8:
    case RISCV::VZEXT_VF2:
    case RISCV::VZEXT_VF4:
    case RISCV::VZEXT_VF8: {
      switch (OpNum) {
      case 1:
        // op: vs2
        return 20;
      case 0:
        // op: vd
        return 7;
      case 2:
        // op: vm
        return 25;
      }
      break;
    }
    case RISCV::VFMV_F_S:
    case RISCV::VMV1R_V:
    case RISCV::VMV2R_V:
    case RISCV::VMV4R_V:
    case RISCV::VMV8R_V:
    case RISCV::VMV_X_S: {
      switch (OpNum) {
      case 1:
        // op: vs2
        return 20;
      case 0:
        // op: vd
        return 7;
      }
      break;
    }
    case RISCV::VADD_VI:
    case RISCV::VAND_VI:
    case RISCV::VMSEQ_VI:
    case RISCV::VMSGTU_VI:
    case RISCV::VMSGT_VI:
    case RISCV::VMSLEU_VI:
    case RISCV::VMSLE_VI:
    case RISCV::VMSNE_VI:
    case RISCV::VNCLIPU_WI:
    case RISCV::VNCLIP_WI:
    case RISCV::VNSRA_WI:
    case RISCV::VNSRL_WI:
    case RISCV::VOR_VI:
    case RISCV::VRGATHER_VI:
    case RISCV::VROR_VI:
    case RISCV::VRSUB_VI:
    case RISCV::VSADDU_VI:
    case RISCV::VSADD_VI:
    case RISCV::VSLIDEDOWN_VI:
    case RISCV::VSLIDEUP_VI:
    case RISCV::VSLL_VI:
    case RISCV::VSRA_VI:
    case RISCV::VSRL_VI:
    case RISCV::VSSRA_VI:
    case RISCV::VSSRL_VI:
    case RISCV::VWSLL_VI:
    case RISCV::VXOR_VI: {
      switch (OpNum) {
      case 1:
        // op: vs2
        return 20;
      case 2:
        // op: imm
        return 15;
      case 0:
        // op: vd
        return 7;
      case 3:
        // op: vm
        return 25;
      }
      break;
    }
    case RISCV::VADC_VIM:
    case RISCV::VAESKF1_VI:
    case RISCV::VMADC_VI:
    case RISCV::VMADC_VIM:
    case RISCV::VMERGE_VIM:
    case RISCV::VSM4K_VI: {
      switch (OpNum) {
      case 1:
        // op: vs2
        return 20;
      case 2:
        // op: imm
        return 15;
      case 0:
        // op: vd
        return 7;
      }
      break;
    }
    case RISCV::VAADDU_VX:
    case RISCV::VAADD_VX:
    case RISCV::VADD_VX:
    case RISCV::VANDN_VX:
    case RISCV::VAND_VX:
    case RISCV::VASUBU_VX:
    case RISCV::VASUB_VX:
    case RISCV::VCLMULH_VX:
    case RISCV::VCLMUL_VX:
    case RISCV::VDIVU_VX:
    case RISCV::VDIV_VX:
    case RISCV::VFADD_VF:
    case RISCV::VFDIV_VF:
    case RISCV::VFMAX_VF:
    case RISCV::VFMIN_VF:
    case RISCV::VFMUL_VF:
    case RISCV::VFNRCLIP_XU_F_QF:
    case RISCV::VFNRCLIP_X_F_QF:
    case RISCV::VFRDIV_VF:
    case RISCV::VFRSUB_VF:
    case RISCV::VFSGNJN_VF:
    case RISCV::VFSGNJX_VF:
    case RISCV::VFSGNJ_VF:
    case RISCV::VFSLIDE1DOWN_VF:
    case RISCV::VFSLIDE1UP_VF:
    case RISCV::VFSUB_VF:
    case RISCV::VFWADD_VF:
    case RISCV::VFWADD_WF:
    case RISCV::VFWMUL_VF:
    case RISCV::VFWSUB_VF:
    case RISCV::VFWSUB_WF:
    case RISCV::VMAXU_VX:
    case RISCV::VMAX_VX:
    case RISCV::VMFEQ_VF:
    case RISCV::VMFGE_VF:
    case RISCV::VMFGT_VF:
    case RISCV::VMFLE_VF:
    case RISCV::VMFLT_VF:
    case RISCV::VMFNE_VF:
    case RISCV::VMINU_VX:
    case RISCV::VMIN_VX:
    case RISCV::VMSEQ_VX:
    case RISCV::VMSGTU_VX:
    case RISCV::VMSGT_VX:
    case RISCV::VMSLEU_VX:
    case RISCV::VMSLE_VX:
    case RISCV::VMSLTU_VX:
    case RISCV::VMSLT_VX:
    case RISCV::VMSNE_VX:
    case RISCV::VMULHSU_VX:
    case RISCV::VMULHU_VX:
    case RISCV::VMULH_VX:
    case RISCV::VMUL_VX:
    case RISCV::VNCLIPU_WX:
    case RISCV::VNCLIP_WX:
    case RISCV::VNSRA_WX:
    case RISCV::VNSRL_WX:
    case RISCV::VOR_VX:
    case RISCV::VREMU_VX:
    case RISCV::VREM_VX:
    case RISCV::VRGATHER_VX:
    case RISCV::VROL_VX:
    case RISCV::VROR_VX:
    case RISCV::VRSUB_VX:
    case RISCV::VSADDU_VX:
    case RISCV::VSADD_VX:
    case RISCV::VSLIDE1DOWN_VX:
    case RISCV::VSLIDE1UP_VX:
    case RISCV::VSLIDEDOWN_VX:
    case RISCV::VSLIDEUP_VX:
    case RISCV::VSLL_VX:
    case RISCV::VSMUL_VX:
    case RISCV::VSRA_VX:
    case RISCV::VSRL_VX:
    case RISCV::VSSRA_VX:
    case RISCV::VSSRL_VX:
    case RISCV::VSSUBU_VX:
    case RISCV::VSSUB_VX:
    case RISCV::VSUB_VX:
    case RISCV::VWADDU_VX:
    case RISCV::VWADDU_WX:
    case RISCV::VWADD_VX:
    case RISCV::VWADD_WX:
    case RISCV::VWMULSU_VX:
    case RISCV::VWMULU_VX:
    case RISCV::VWMUL_VX:
    case RISCV::VWSLL_VX:
    case RISCV::VWSUBU_VX:
    case RISCV::VWSUBU_WX:
    case RISCV::VWSUB_VX:
    case RISCV::VWSUB_WX:
    case RISCV::VXOR_VX: {
      switch (OpNum) {
      case 1:
        // op: vs2
        return 20;
      case 2:
        // op: rs1
        return 15;
      case 0:
        // op: vd
        return 7;
      case 3:
        // op: vm
        return 25;
      }
      break;
    }
    case RISCV::VADC_VXM:
    case RISCV::VFMERGE_VFM:
    case RISCV::VMADC_VX:
    case RISCV::VMADC_VXM:
    case RISCV::VMERGE_VXM:
    case RISCV::VMSBC_VX:
    case RISCV::VMSBC_VXM:
    case RISCV::VSBC_VXM: {
      switch (OpNum) {
      case 1:
        // op: vs2
        return 20;
      case 2:
        // op: rs1
        return 15;
      case 0:
        // op: vd
        return 7;
      }
      break;
    }
    case RISCV::VAADDU_VV:
    case RISCV::VAADD_VV:
    case RISCV::VADD_VV:
    case RISCV::VANDN_VV:
    case RISCV::VAND_VV:
    case RISCV::VASUBU_VV:
    case RISCV::VASUB_VV:
    case RISCV::VCLMULH_VV:
    case RISCV::VCLMUL_VV:
    case RISCV::VDIVU_VV:
    case RISCV::VDIV_VV:
    case RISCV::VFADD_VV:
    case RISCV::VFDIV_VV:
    case RISCV::VFMAX_VV:
    case RISCV::VFMIN_VV:
    case RISCV::VFMUL_VV:
    case RISCV::VFREDMAX_VS:
    case RISCV::VFREDMIN_VS:
    case RISCV::VFREDOSUM_VS:
    case RISCV::VFREDUSUM_VS:
    case RISCV::VFSGNJN_VV:
    case RISCV::VFSGNJX_VV:
    case RISCV::VFSGNJ_VV:
    case RISCV::VFSUB_VV:
    case RISCV::VFWADD_VV:
    case RISCV::VFWADD_WV:
    case RISCV::VFWMUL_VV:
    case RISCV::VFWREDOSUM_VS:
    case RISCV::VFWREDUSUM_VS:
    case RISCV::VFWSUB_VV:
    case RISCV::VFWSUB_WV:
    case RISCV::VMAXU_VV:
    case RISCV::VMAX_VV:
    case RISCV::VMFEQ_VV:
    case RISCV::VMFLE_VV:
    case RISCV::VMFLT_VV:
    case RISCV::VMFNE_VV:
    case RISCV::VMINU_VV:
    case RISCV::VMIN_VV:
    case RISCV::VMSEQ_VV:
    case RISCV::VMSLEU_VV:
    case RISCV::VMSLE_VV:
    case RISCV::VMSLTU_VV:
    case RISCV::VMSLT_VV:
    case RISCV::VMSNE_VV:
    case RISCV::VMULHSU_VV:
    case RISCV::VMULHU_VV:
    case RISCV::VMULH_VV:
    case RISCV::VMUL_VV:
    case RISCV::VNCLIPU_WV:
    case RISCV::VNCLIP_WV:
    case RISCV::VNSRA_WV:
    case RISCV::VNSRL_WV:
    case RISCV::VOR_VV:
    case RISCV::VREDAND_VS:
    case RISCV::VREDMAXU_VS:
    case RISCV::VREDMAX_VS:
    case RISCV::VREDMINU_VS:
    case RISCV::VREDMIN_VS:
    case RISCV::VREDOR_VS:
    case RISCV::VREDSUM_VS:
    case RISCV::VREDXOR_VS:
    case RISCV::VREMU_VV:
    case RISCV::VREM_VV:
    case RISCV::VRGATHEREI16_VV:
    case RISCV::VRGATHER_VV:
    case RISCV::VROL_VV:
    case RISCV::VROR_VV:
    case RISCV::VSADDU_VV:
    case RISCV::VSADD_VV:
    case RISCV::VSLL_VV:
    case RISCV::VSMUL_VV:
    case RISCV::VSRA_VV:
    case RISCV::VSRL_VV:
    case RISCV::VSSRA_VV:
    case RISCV::VSSRL_VV:
    case RISCV::VSSUBU_VV:
    case RISCV::VSSUB_VV:
    case RISCV::VSUB_VV:
    case RISCV::VWADDU_VV:
    case RISCV::VWADDU_WV:
    case RISCV::VWADD_VV:
    case RISCV::VWADD_WV:
    case RISCV::VWMULSU_VV:
    case RISCV::VWMULU_VV:
    case RISCV::VWMUL_VV:
    case RISCV::VWREDSUMU_VS:
    case RISCV::VWREDSUM_VS:
    case RISCV::VWSLL_VV:
    case RISCV::VWSUBU_VV:
    case RISCV::VWSUBU_WV:
    case RISCV::VWSUB_VV:
    case RISCV::VWSUB_WV:
    case RISCV::VXOR_VV: {
      switch (OpNum) {
      case 1:
        // op: vs2
        return 20;
      case 2:
        // op: vs1
        return 15;
      case 0:
        // op: vd
        return 7;
      case 3:
        // op: vm
        return 25;
      }
      break;
    }
    case RISCV::VADC_VVM:
    case RISCV::VCOMPRESS_VM:
    case RISCV::VMADC_VV:
    case RISCV::VMADC_VVM:
    case RISCV::VMANDN_MM:
    case RISCV::VMAND_MM:
    case RISCV::VMERGE_VVM:
    case RISCV::VMNAND_MM:
    case RISCV::VMNOR_MM:
    case RISCV::VMORN_MM:
    case RISCV::VMOR_MM:
    case RISCV::VMSBC_VV:
    case RISCV::VMSBC_VVM:
    case RISCV::VMXNOR_MM:
    case RISCV::VMXOR_MM:
    case RISCV::VSBC_VVM:
    case RISCV::VSM3ME_VV: {
      switch (OpNum) {
      case 1:
        // op: vs2
        return 20;
      case 2:
        // op: vs1
        return 15;
      case 0:
        // op: vd
        return 7;
      }
      break;
    }
    case RISCV::C_ADDI_NOP: {
      switch (OpNum) {
      case 2:
        // op: imm
        return 12;
      case 1:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::C_FLDSP:
    case RISCV::C_FLWSP:
    case RISCV::C_LDSP:
    case RISCV::C_LWSP: {
      switch (OpNum) {
      case 2:
        // op: imm
        return 2;
      case 0:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::C_ADDI:
    case RISCV::C_ADDIW:
    case RISCV::C_SLLI: {
      switch (OpNum) {
      case 2:
        // op: imm
        return 2;
      case 1:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::C_ANDI:
    case RISCV::C_SRAI:
    case RISCV::C_SRLI: {
      switch (OpNum) {
      case 2:
        // op: imm
        return 2;
      case 1:
        // op: rs1
        return 7;
      }
      break;
    }
    case RISCV::C_ADDI16SP:
    case RISCV::C_SLLI_HINT: {
      switch (OpNum) {
      case 2:
        // op: imm
        return 2;
      }
      break;
    }
    case RISCV::C_ADDI4SPN: {
      switch (OpNum) {
      case 2:
        // op: imm
        return 5;
      case 0:
        // op: rd
        return 2;
      }
      break;
    }
    case RISCV::C_FSDSP:
    case RISCV::C_FSWSP:
    case RISCV::C_SDSP:
    case RISCV::C_SWSP: {
      switch (OpNum) {
      case 2:
        // op: imm
        return 7;
      case 0:
        // op: rs2
        return 2;
      }
      break;
    }
    case RISCV::CV_BEQIMM:
    case RISCV::CV_BNEIMM: {
      switch (OpNum) {
      case 2:
        // op: imm12
        return 7;
      case 0:
        // op: rs1
        return 15;
      case 1:
        // op: imm5
        return 20;
      }
      break;
    }
    case RISCV::FSD:
    case RISCV::FSH:
    case RISCV::FSW:
    case RISCV::SB:
    case RISCV::SD:
    case RISCV::SH:
    case RISCV::SW: {
      switch (OpNum) {
      case 2:
        // op: imm12
        return 7;
      case 0:
        // op: rs2
        return 20;
      case 1:
        // op: rs1
        return 15;
      }
      break;
    }
    case RISCV::BEQ:
    case RISCV::BGE:
    case RISCV::BGEU:
    case RISCV::BLT:
    case RISCV::BLTU:
    case RISCV::BNE: {
      switch (OpNum) {
      case 2:
        // op: imm12
        return 7;
      case 1:
        // op: rs2
        return 20;
      case 0:
        // op: rs1
        return 15;
      }
      break;
    }
    case RISCV::CSRRC:
    case RISCV::CSRRCI:
    case RISCV::CSRRS:
    case RISCV::CSRRSI:
    case RISCV::CSRRW:
    case RISCV::CSRRWI: {
      switch (OpNum) {
      case 2:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      case 1:
        // op: imm12
        return 20;
      }
      break;
    }
    case RISCV::CV_LBU_ri_inc:
    case RISCV::CV_LB_ri_inc:
    case RISCV::CV_LHU_ri_inc:
    case RISCV::CV_LH_ri_inc:
    case RISCV::CV_LW_ri_inc: {
      switch (OpNum) {
      case 2:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      case 3:
        // op: imm12
        return 20;
      }
      break;
    }
    case RISCV::TH_LBIA:
    case RISCV::TH_LBIB:
    case RISCV::TH_LBUIA:
    case RISCV::TH_LBUIB:
    case RISCV::TH_LDIA:
    case RISCV::TH_LDIB:
    case RISCV::TH_LHIA:
    case RISCV::TH_LHIB:
    case RISCV::TH_LHUIA:
    case RISCV::TH_LHUIB:
    case RISCV::TH_LWIA:
    case RISCV::TH_LWIB:
    case RISCV::TH_LWUIA:
    case RISCV::TH_LWUIB: {
      switch (OpNum) {
      case 2:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      case 3:
        // op: simm5
        return 20;
      case 4:
        // op: uimm2
        return 25;
      }
      break;
    }
    case RISCV::CV_INSERT_B:
    case RISCV::CV_INSERT_H:
    case RISCV::CV_SDOTSP_SCI_B:
    case RISCV::CV_SDOTSP_SCI_H:
    case RISCV::CV_SDOTUP_SCI_B:
    case RISCV::CV_SDOTUP_SCI_H:
    case RISCV::CV_SDOTUSP_SCI_B:
    case RISCV::CV_SDOTUSP_SCI_H: {
      switch (OpNum) {
      case 2:
        // op: rs1
        return 15;
      case 1:
        // op: rd
        return 7;
      case 3:
        // op: imm6
        return 20;
      }
      break;
    }
    case RISCV::CV_INSERT: {
      switch (OpNum) {
      case 2:
        // op: rs1
        return 15;
      case 1:
        // op: rd
        return 7;
      case 3:
        // op: is3
        return 25;
      case 4:
        // op: is2
        return 20;
      }
      break;
    }
    case RISCV::TH_SBIA:
    case RISCV::TH_SBIB:
    case RISCV::TH_SDIA:
    case RISCV::TH_SDIB:
    case RISCV::TH_SHIA:
    case RISCV::TH_SHIB:
    case RISCV::TH_SWIA:
    case RISCV::TH_SWIB: {
      switch (OpNum) {
      case 2:
        // op: rs1
        return 15;
      case 1:
        // op: rd
        return 7;
      case 3:
        // op: simm5
        return 20;
      case 4:
        // op: uimm2
        return 25;
      }
      break;
    }
    case RISCV::VFMV_S_F:
    case RISCV::VMV_S_X: {
      switch (OpNum) {
      case 2:
        // op: rs1
        return 15;
      case 1:
        // op: vd
        return 7;
      }
      break;
    }
    case RISCV::AES32DSI:
    case RISCV::AES32DSMI:
    case RISCV::AES32ESI:
    case RISCV::AES32ESMI:
    case RISCV::SM4ED:
    case RISCV::SM4KS: {
      switch (OpNum) {
      case 2:
        // op: rs2
        return 20;
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      case 3:
        // op: bs
        return 30;
      }
      break;
    }
    case RISCV::CV_ADDN:
    case RISCV::CV_ADDRN:
    case RISCV::CV_ADDUN:
    case RISCV::CV_ADDURN:
    case RISCV::CV_MULHHSN:
    case RISCV::CV_MULHHSRN:
    case RISCV::CV_MULHHUN:
    case RISCV::CV_MULHHURN:
    case RISCV::CV_MULSN:
    case RISCV::CV_MULSRN:
    case RISCV::CV_MULUN:
    case RISCV::CV_MULURN:
    case RISCV::CV_SUBN:
    case RISCV::CV_SUBRN:
    case RISCV::CV_SUBUN:
    case RISCV::CV_SUBURN: {
      switch (OpNum) {
      case 2:
        // op: rs2
        return 20;
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      case 3:
        // op: imm5
        return 25;
      }
      break;
    }
    case RISCV::TH_ADDSL:
    case RISCV::TH_FLRD:
    case RISCV::TH_FLRW:
    case RISCV::TH_FLURD:
    case RISCV::TH_FLURW:
    case RISCV::TH_FSRD:
    case RISCV::TH_FSRW:
    case RISCV::TH_FSURD:
    case RISCV::TH_FSURW:
    case RISCV::TH_LRB:
    case RISCV::TH_LRBU:
    case RISCV::TH_LRD:
    case RISCV::TH_LRH:
    case RISCV::TH_LRHU:
    case RISCV::TH_LRW:
    case RISCV::TH_LRWU:
    case RISCV::TH_LURB:
    case RISCV::TH_LURBU:
    case RISCV::TH_LURD:
    case RISCV::TH_LURH:
    case RISCV::TH_LURHU:
    case RISCV::TH_LURW:
    case RISCV::TH_LURWU:
    case RISCV::TH_SRB:
    case RISCV::TH_SRD:
    case RISCV::TH_SRH:
    case RISCV::TH_SRW:
    case RISCV::TH_SURB:
    case RISCV::TH_SURD:
    case RISCV::TH_SURH:
    case RISCV::TH_SURW: {
      switch (OpNum) {
      case 2:
        // op: rs2
        return 20;
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      case 3:
        // op: uimm2
        return 25;
      }
      break;
    }
    case RISCV::ADD:
    case RISCV::ADDW:
    case RISCV::ADD_UW:
    case RISCV::AES64DS:
    case RISCV::AES64DSM:
    case RISCV::AES64ES:
    case RISCV::AES64ESM:
    case RISCV::AES64KS2:
    case RISCV::AMOADD_B:
    case RISCV::AMOADD_B_AQ:
    case RISCV::AMOADD_B_AQ_RL:
    case RISCV::AMOADD_B_RL:
    case RISCV::AMOADD_D:
    case RISCV::AMOADD_D_AQ:
    case RISCV::AMOADD_D_AQ_RL:
    case RISCV::AMOADD_D_RL:
    case RISCV::AMOADD_H:
    case RISCV::AMOADD_H_AQ:
    case RISCV::AMOADD_H_AQ_RL:
    case RISCV::AMOADD_H_RL:
    case RISCV::AMOADD_W:
    case RISCV::AMOADD_W_AQ:
    case RISCV::AMOADD_W_AQ_RL:
    case RISCV::AMOADD_W_RL:
    case RISCV::AMOAND_B:
    case RISCV::AMOAND_B_AQ:
    case RISCV::AMOAND_B_AQ_RL:
    case RISCV::AMOAND_B_RL:
    case RISCV::AMOAND_D:
    case RISCV::AMOAND_D_AQ:
    case RISCV::AMOAND_D_AQ_RL:
    case RISCV::AMOAND_D_RL:
    case RISCV::AMOAND_H:
    case RISCV::AMOAND_H_AQ:
    case RISCV::AMOAND_H_AQ_RL:
    case RISCV::AMOAND_H_RL:
    case RISCV::AMOAND_W:
    case RISCV::AMOAND_W_AQ:
    case RISCV::AMOAND_W_AQ_RL:
    case RISCV::AMOAND_W_RL:
    case RISCV::AMOMAXU_B:
    case RISCV::AMOMAXU_B_AQ:
    case RISCV::AMOMAXU_B_AQ_RL:
    case RISCV::AMOMAXU_B_RL:
    case RISCV::AMOMAXU_D:
    case RISCV::AMOMAXU_D_AQ:
    case RISCV::AMOMAXU_D_AQ_RL:
    case RISCV::AMOMAXU_D_RL:
    case RISCV::AMOMAXU_H:
    case RISCV::AMOMAXU_H_AQ:
    case RISCV::AMOMAXU_H_AQ_RL:
    case RISCV::AMOMAXU_H_RL:
    case RISCV::AMOMAXU_W:
    case RISCV::AMOMAXU_W_AQ:
    case RISCV::AMOMAXU_W_AQ_RL:
    case RISCV::AMOMAXU_W_RL:
    case RISCV::AMOMAX_B:
    case RISCV::AMOMAX_B_AQ:
    case RISCV::AMOMAX_B_AQ_RL:
    case RISCV::AMOMAX_B_RL:
    case RISCV::AMOMAX_D:
    case RISCV::AMOMAX_D_AQ:
    case RISCV::AMOMAX_D_AQ_RL:
    case RISCV::AMOMAX_D_RL:
    case RISCV::AMOMAX_H:
    case RISCV::AMOMAX_H_AQ:
    case RISCV::AMOMAX_H_AQ_RL:
    case RISCV::AMOMAX_H_RL:
    case RISCV::AMOMAX_W:
    case RISCV::AMOMAX_W_AQ:
    case RISCV::AMOMAX_W_AQ_RL:
    case RISCV::AMOMAX_W_RL:
    case RISCV::AMOMINU_B:
    case RISCV::AMOMINU_B_AQ:
    case RISCV::AMOMINU_B_AQ_RL:
    case RISCV::AMOMINU_B_RL:
    case RISCV::AMOMINU_D:
    case RISCV::AMOMINU_D_AQ:
    case RISCV::AMOMINU_D_AQ_RL:
    case RISCV::AMOMINU_D_RL:
    case RISCV::AMOMINU_H:
    case RISCV::AMOMINU_H_AQ:
    case RISCV::AMOMINU_H_AQ_RL:
    case RISCV::AMOMINU_H_RL:
    case RISCV::AMOMINU_W:
    case RISCV::AMOMINU_W_AQ:
    case RISCV::AMOMINU_W_AQ_RL:
    case RISCV::AMOMINU_W_RL:
    case RISCV::AMOMIN_B:
    case RISCV::AMOMIN_B_AQ:
    case RISCV::AMOMIN_B_AQ_RL:
    case RISCV::AMOMIN_B_RL:
    case RISCV::AMOMIN_D:
    case RISCV::AMOMIN_D_AQ:
    case RISCV::AMOMIN_D_AQ_RL:
    case RISCV::AMOMIN_D_RL:
    case RISCV::AMOMIN_H:
    case RISCV::AMOMIN_H_AQ:
    case RISCV::AMOMIN_H_AQ_RL:
    case RISCV::AMOMIN_H_RL:
    case RISCV::AMOMIN_W:
    case RISCV::AMOMIN_W_AQ:
    case RISCV::AMOMIN_W_AQ_RL:
    case RISCV::AMOMIN_W_RL:
    case RISCV::AMOOR_B:
    case RISCV::AMOOR_B_AQ:
    case RISCV::AMOOR_B_AQ_RL:
    case RISCV::AMOOR_B_RL:
    case RISCV::AMOOR_D:
    case RISCV::AMOOR_D_AQ:
    case RISCV::AMOOR_D_AQ_RL:
    case RISCV::AMOOR_D_RL:
    case RISCV::AMOOR_H:
    case RISCV::AMOOR_H_AQ:
    case RISCV::AMOOR_H_AQ_RL:
    case RISCV::AMOOR_H_RL:
    case RISCV::AMOOR_W:
    case RISCV::AMOOR_W_AQ:
    case RISCV::AMOOR_W_AQ_RL:
    case RISCV::AMOOR_W_RL:
    case RISCV::AMOSWAP_B:
    case RISCV::AMOSWAP_B_AQ:
    case RISCV::AMOSWAP_B_AQ_RL:
    case RISCV::AMOSWAP_B_RL:
    case RISCV::AMOSWAP_D:
    case RISCV::AMOSWAP_D_AQ:
    case RISCV::AMOSWAP_D_AQ_RL:
    case RISCV::AMOSWAP_D_RL:
    case RISCV::AMOSWAP_H:
    case RISCV::AMOSWAP_H_AQ:
    case RISCV::AMOSWAP_H_AQ_RL:
    case RISCV::AMOSWAP_H_RL:
    case RISCV::AMOSWAP_W:
    case RISCV::AMOSWAP_W_AQ:
    case RISCV::AMOSWAP_W_AQ_RL:
    case RISCV::AMOSWAP_W_RL:
    case RISCV::AMOXOR_B:
    case RISCV::AMOXOR_B_AQ:
    case RISCV::AMOXOR_B_AQ_RL:
    case RISCV::AMOXOR_B_RL:
    case RISCV::AMOXOR_D:
    case RISCV::AMOXOR_D_AQ:
    case RISCV::AMOXOR_D_AQ_RL:
    case RISCV::AMOXOR_D_RL:
    case RISCV::AMOXOR_H:
    case RISCV::AMOXOR_H_AQ:
    case RISCV::AMOXOR_H_AQ_RL:
    case RISCV::AMOXOR_H_RL:
    case RISCV::AMOXOR_W:
    case RISCV::AMOXOR_W_AQ:
    case RISCV::AMOXOR_W_AQ_RL:
    case RISCV::AMOXOR_W_RL:
    case RISCV::AND:
    case RISCV::ANDN:
    case RISCV::BCLR:
    case RISCV::BEXT:
    case RISCV::BINV:
    case RISCV::BSET:
    case RISCV::CLMUL:
    case RISCV::CLMULH:
    case RISCV::CLMULR:
    case RISCV::CV_ADD_B:
    case RISCV::CV_ADD_DIV2:
    case RISCV::CV_ADD_DIV4:
    case RISCV::CV_ADD_DIV8:
    case RISCV::CV_ADD_H:
    case RISCV::CV_ADD_SC_B:
    case RISCV::CV_ADD_SC_H:
    case RISCV::CV_AND_B:
    case RISCV::CV_AND_H:
    case RISCV::CV_AND_SC_B:
    case RISCV::CV_AND_SC_H:
    case RISCV::CV_AVGU_B:
    case RISCV::CV_AVGU_H:
    case RISCV::CV_AVGU_SC_B:
    case RISCV::CV_AVGU_SC_H:
    case RISCV::CV_AVG_B:
    case RISCV::CV_AVG_H:
    case RISCV::CV_AVG_SC_B:
    case RISCV::CV_AVG_SC_H:
    case RISCV::CV_BCLRR:
    case RISCV::CV_BSETR:
    case RISCV::CV_CLIPR:
    case RISCV::CV_CLIPUR:
    case RISCV::CV_CMPEQ_B:
    case RISCV::CV_CMPEQ_H:
    case RISCV::CV_CMPEQ_SC_B:
    case RISCV::CV_CMPEQ_SC_H:
    case RISCV::CV_CMPGEU_B:
    case RISCV::CV_CMPGEU_H:
    case RISCV::CV_CMPGEU_SC_B:
    case RISCV::CV_CMPGEU_SC_H:
    case RISCV::CV_CMPGE_B:
    case RISCV::CV_CMPGE_H:
    case RISCV::CV_CMPGE_SC_B:
    case RISCV::CV_CMPGE_SC_H:
    case RISCV::CV_CMPGTU_B:
    case RISCV::CV_CMPGTU_H:
    case RISCV::CV_CMPGTU_SC_B:
    case RISCV::CV_CMPGTU_SC_H:
    case RISCV::CV_CMPGT_B:
    case RISCV::CV_CMPGT_H:
    case RISCV::CV_CMPGT_SC_B:
    case RISCV::CV_CMPGT_SC_H:
    case RISCV::CV_CMPLEU_B:
    case RISCV::CV_CMPLEU_H:
    case RISCV::CV_CMPLEU_SC_B:
    case RISCV::CV_CMPLEU_SC_H:
    case RISCV::CV_CMPLE_B:
    case RISCV::CV_CMPLE_H:
    case RISCV::CV_CMPLE_SC_B:
    case RISCV::CV_CMPLE_SC_H:
    case RISCV::CV_CMPLTU_B:
    case RISCV::CV_CMPLTU_H:
    case RISCV::CV_CMPLTU_SC_B:
    case RISCV::CV_CMPLTU_SC_H:
    case RISCV::CV_CMPLT_B:
    case RISCV::CV_CMPLT_H:
    case RISCV::CV_CMPLT_SC_B:
    case RISCV::CV_CMPLT_SC_H:
    case RISCV::CV_CMPNE_B:
    case RISCV::CV_CMPNE_H:
    case RISCV::CV_CMPNE_SC_B:
    case RISCV::CV_CMPNE_SC_H:
    case RISCV::CV_DOTSP_B:
    case RISCV::CV_DOTSP_H:
    case RISCV::CV_DOTSP_SC_B:
    case RISCV::CV_DOTSP_SC_H:
    case RISCV::CV_DOTUP_B:
    case RISCV::CV_DOTUP_H:
    case RISCV::CV_DOTUP_SC_B:
    case RISCV::CV_DOTUP_SC_H:
    case RISCV::CV_DOTUSP_B:
    case RISCV::CV_DOTUSP_H:
    case RISCV::CV_DOTUSP_SC_B:
    case RISCV::CV_DOTUSP_SC_H:
    case RISCV::CV_EXTRACTR:
    case RISCV::CV_EXTRACTUR:
    case RISCV::CV_MAX:
    case RISCV::CV_MAXU:
    case RISCV::CV_MAXU_B:
    case RISCV::CV_MAXU_H:
    case RISCV::CV_MAXU_SC_B:
    case RISCV::CV_MAXU_SC_H:
    case RISCV::CV_MAX_B:
    case RISCV::CV_MAX_H:
    case RISCV::CV_MAX_SC_B:
    case RISCV::CV_MAX_SC_H:
    case RISCV::CV_MIN:
    case RISCV::CV_MINU:
    case RISCV::CV_MINU_B:
    case RISCV::CV_MINU_H:
    case RISCV::CV_MINU_SC_B:
    case RISCV::CV_MINU_SC_H:
    case RISCV::CV_MIN_B:
    case RISCV::CV_MIN_H:
    case RISCV::CV_MIN_SC_B:
    case RISCV::CV_MIN_SC_H:
    case RISCV::CV_OR_B:
    case RISCV::CV_OR_H:
    case RISCV::CV_OR_SC_B:
    case RISCV::CV_OR_SC_H:
    case RISCV::CV_PACK:
    case RISCV::CV_PACK_H:
    case RISCV::CV_ROR:
    case RISCV::CV_SHUFFLE_B:
    case RISCV::CV_SHUFFLE_H:
    case RISCV::CV_SLET:
    case RISCV::CV_SLETU:
    case RISCV::CV_SLL_B:
    case RISCV::CV_SLL_H:
    case RISCV::CV_SLL_SC_B:
    case RISCV::CV_SLL_SC_H:
    case RISCV::CV_SRA_B:
    case RISCV::CV_SRA_H:
    case RISCV::CV_SRA_SC_B:
    case RISCV::CV_SRA_SC_H:
    case RISCV::CV_SRL_B:
    case RISCV::CV_SRL_H:
    case RISCV::CV_SRL_SC_B:
    case RISCV::CV_SRL_SC_H:
    case RISCV::CV_SUBROTMJ:
    case RISCV::CV_SUBROTMJ_DIV2:
    case RISCV::CV_SUBROTMJ_DIV4:
    case RISCV::CV_SUBROTMJ_DIV8:
    case RISCV::CV_SUB_B:
    case RISCV::CV_SUB_DIV2:
    case RISCV::CV_SUB_DIV4:
    case RISCV::CV_SUB_DIV8:
    case RISCV::CV_SUB_H:
    case RISCV::CV_SUB_SC_B:
    case RISCV::CV_SUB_SC_H:
    case RISCV::CV_XOR_B:
    case RISCV::CV_XOR_H:
    case RISCV::CV_XOR_SC_B:
    case RISCV::CV_XOR_SC_H:
    case RISCV::CZERO_EQZ:
    case RISCV::CZERO_NEZ:
    case RISCV::DIV:
    case RISCV::DIVU:
    case RISCV::DIVUW:
    case RISCV::DIVW:
    case RISCV::FEQ_D:
    case RISCV::FEQ_D_IN32X:
    case RISCV::FEQ_D_INX:
    case RISCV::FEQ_H:
    case RISCV::FEQ_H_INX:
    case RISCV::FEQ_S:
    case RISCV::FEQ_S_INX:
    case RISCV::FLEQ_D:
    case RISCV::FLEQ_H:
    case RISCV::FLEQ_S:
    case RISCV::FLE_D:
    case RISCV::FLE_D_IN32X:
    case RISCV::FLE_D_INX:
    case RISCV::FLE_H:
    case RISCV::FLE_H_INX:
    case RISCV::FLE_S:
    case RISCV::FLE_S_INX:
    case RISCV::FLTQ_D:
    case RISCV::FLTQ_H:
    case RISCV::FLTQ_S:
    case RISCV::FLT_D:
    case RISCV::FLT_D_IN32X:
    case RISCV::FLT_D_INX:
    case RISCV::FLT_H:
    case RISCV::FLT_H_INX:
    case RISCV::FLT_S:
    case RISCV::FLT_S_INX:
    case RISCV::FMAXM_D:
    case RISCV::FMAXM_H:
    case RISCV::FMAXM_S:
    case RISCV::FMAX_D:
    case RISCV::FMAX_D_IN32X:
    case RISCV::FMAX_D_INX:
    case RISCV::FMAX_H:
    case RISCV::FMAX_H_INX:
    case RISCV::FMAX_S:
    case RISCV::FMAX_S_INX:
    case RISCV::FMINM_D:
    case RISCV::FMINM_H:
    case RISCV::FMINM_S:
    case RISCV::FMIN_D:
    case RISCV::FMIN_D_IN32X:
    case RISCV::FMIN_D_INX:
    case RISCV::FMIN_H:
    case RISCV::FMIN_H_INX:
    case RISCV::FMIN_S:
    case RISCV::FMIN_S_INX:
    case RISCV::FMVP_D_X:
    case RISCV::FSGNJN_D:
    case RISCV::FSGNJN_D_IN32X:
    case RISCV::FSGNJN_D_INX:
    case RISCV::FSGNJN_H:
    case RISCV::FSGNJN_H_INX:
    case RISCV::FSGNJN_S:
    case RISCV::FSGNJN_S_INX:
    case RISCV::FSGNJX_D:
    case RISCV::FSGNJX_D_IN32X:
    case RISCV::FSGNJX_D_INX:
    case RISCV::FSGNJX_H:
    case RISCV::FSGNJX_H_INX:
    case RISCV::FSGNJX_S:
    case RISCV::FSGNJX_S_INX:
    case RISCV::FSGNJ_D:
    case RISCV::FSGNJ_D_IN32X:
    case RISCV::FSGNJ_D_INX:
    case RISCV::FSGNJ_H:
    case RISCV::FSGNJ_H_INX:
    case RISCV::FSGNJ_S:
    case RISCV::FSGNJ_S_INX:
    case RISCV::MAX:
    case RISCV::MAXU:
    case RISCV::MIN:
    case RISCV::MINU:
    case RISCV::MOPRR0:
    case RISCV::MOPRR1:
    case RISCV::MOPRR2:
    case RISCV::MOPRR3:
    case RISCV::MOPRR4:
    case RISCV::MOPRR5:
    case RISCV::MOPRR6:
    case RISCV::MOPRR7:
    case RISCV::MUL:
    case RISCV::MULH:
    case RISCV::MULHSU:
    case RISCV::MULHU:
    case RISCV::MULW:
    case RISCV::OR:
    case RISCV::ORN:
    case RISCV::PACK:
    case RISCV::PACKH:
    case RISCV::PACKW:
    case RISCV::REM:
    case RISCV::REMU:
    case RISCV::REMUW:
    case RISCV::REMW:
    case RISCV::ROL:
    case RISCV::ROLW:
    case RISCV::ROR:
    case RISCV::RORW:
    case RISCV::SC_D:
    case RISCV::SC_D_AQ:
    case RISCV::SC_D_AQ_RL:
    case RISCV::SC_D_RL:
    case RISCV::SC_W:
    case RISCV::SC_W_AQ:
    case RISCV::SC_W_AQ_RL:
    case RISCV::SC_W_RL:
    case RISCV::SH1ADD:
    case RISCV::SH1ADD_UW:
    case RISCV::SH2ADD:
    case RISCV::SH2ADD_UW:
    case RISCV::SH3ADD:
    case RISCV::SH3ADD_UW:
    case RISCV::SHA512SIG0H:
    case RISCV::SHA512SIG0L:
    case RISCV::SHA512SIG1H:
    case RISCV::SHA512SIG1L:
    case RISCV::SHA512SUM0R:
    case RISCV::SHA512SUM1R:
    case RISCV::SLL:
    case RISCV::SLLW:
    case RISCV::SLT:
    case RISCV::SLTU:
    case RISCV::SRA:
    case RISCV::SRAW:
    case RISCV::SRL:
    case RISCV::SRLW:
    case RISCV::SSAMOSWAP_D:
    case RISCV::SSAMOSWAP_D_AQ:
    case RISCV::SSAMOSWAP_D_AQ_RL:
    case RISCV::SSAMOSWAP_D_RL:
    case RISCV::SSAMOSWAP_W:
    case RISCV::SSAMOSWAP_W_AQ:
    case RISCV::SSAMOSWAP_W_AQ_RL:
    case RISCV::SSAMOSWAP_W_RL:
    case RISCV::SUB:
    case RISCV::SUBW:
    case RISCV::VFWMACC_4x4x4:
    case RISCV::VQMACCSU_2x8x2:
    case RISCV::VQMACCSU_4x8x4:
    case RISCV::VQMACCUS_2x8x2:
    case RISCV::VQMACCUS_4x8x4:
    case RISCV::VQMACCU_2x8x2:
    case RISCV::VQMACCU_4x8x4:
    case RISCV::VQMACC_2x8x2:
    case RISCV::VQMACC_4x8x4:
    case RISCV::VSETVL:
    case RISCV::VT_MASKC:
    case RISCV::VT_MASKCN:
    case RISCV::XNOR:
    case RISCV::XOR:
    case RISCV::XPERM4:
    case RISCV::XPERM8: {
      switch (OpNum) {
      case 2:
        // op: rs2
        return 20;
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::VLSE8_V:
    case RISCV::VLSE16_V:
    case RISCV::VLSE32_V:
    case RISCV::VLSE64_V:
    case RISCV::VLSSEG2E8_V:
    case RISCV::VLSSEG2E16_V:
    case RISCV::VLSSEG2E32_V:
    case RISCV::VLSSEG2E64_V:
    case RISCV::VLSSEG3E8_V:
    case RISCV::VLSSEG3E16_V:
    case RISCV::VLSSEG3E32_V:
    case RISCV::VLSSEG3E64_V:
    case RISCV::VLSSEG4E8_V:
    case RISCV::VLSSEG4E16_V:
    case RISCV::VLSSEG4E32_V:
    case RISCV::VLSSEG4E64_V:
    case RISCV::VLSSEG5E8_V:
    case RISCV::VLSSEG5E16_V:
    case RISCV::VLSSEG5E32_V:
    case RISCV::VLSSEG5E64_V:
    case RISCV::VLSSEG6E8_V:
    case RISCV::VLSSEG6E16_V:
    case RISCV::VLSSEG6E32_V:
    case RISCV::VLSSEG6E64_V:
    case RISCV::VLSSEG7E8_V:
    case RISCV::VLSSEG7E16_V:
    case RISCV::VLSSEG7E32_V:
    case RISCV::VLSSEG7E64_V:
    case RISCV::VLSSEG8E8_V:
    case RISCV::VLSSEG8E16_V:
    case RISCV::VLSSEG8E32_V:
    case RISCV::VLSSEG8E64_V: {
      switch (OpNum) {
      case 2:
        // op: rs2
        return 20;
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: vd
        return 7;
      case 3:
        // op: vm
        return 25;
      }
      break;
    }
    case RISCV::VSSE8_V:
    case RISCV::VSSE16_V:
    case RISCV::VSSE32_V:
    case RISCV::VSSE64_V:
    case RISCV::VSSSEG2E8_V:
    case RISCV::VSSSEG2E16_V:
    case RISCV::VSSSEG2E32_V:
    case RISCV::VSSSEG2E64_V:
    case RISCV::VSSSEG3E8_V:
    case RISCV::VSSSEG3E16_V:
    case RISCV::VSSSEG3E32_V:
    case RISCV::VSSSEG3E64_V:
    case RISCV::VSSSEG4E8_V:
    case RISCV::VSSSEG4E16_V:
    case RISCV::VSSSEG4E32_V:
    case RISCV::VSSSEG4E64_V:
    case RISCV::VSSSEG5E8_V:
    case RISCV::VSSSEG5E16_V:
    case RISCV::VSSSEG5E32_V:
    case RISCV::VSSSEG5E64_V:
    case RISCV::VSSSEG6E8_V:
    case RISCV::VSSSEG6E16_V:
    case RISCV::VSSSEG6E32_V:
    case RISCV::VSSSEG6E64_V:
    case RISCV::VSSSEG7E8_V:
    case RISCV::VSSSEG7E16_V:
    case RISCV::VSSSEG7E32_V:
    case RISCV::VSSSEG7E64_V:
    case RISCV::VSSSEG8E8_V:
    case RISCV::VSSSEG8E16_V:
    case RISCV::VSSSEG8E32_V:
    case RISCV::VSSSEG8E64_V: {
      switch (OpNum) {
      case 2:
        // op: rs2
        return 20;
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: vs3
        return 7;
      case 3:
        // op: vm
        return 25;
      }
      break;
    }
    case RISCV::FADD_D:
    case RISCV::FADD_D_IN32X:
    case RISCV::FADD_D_INX:
    case RISCV::FADD_H:
    case RISCV::FADD_H_INX:
    case RISCV::FADD_S:
    case RISCV::FADD_S_INX:
    case RISCV::FDIV_D:
    case RISCV::FDIV_D_IN32X:
    case RISCV::FDIV_D_INX:
    case RISCV::FDIV_H:
    case RISCV::FDIV_H_INX:
    case RISCV::FDIV_S:
    case RISCV::FDIV_S_INX:
    case RISCV::FMUL_D:
    case RISCV::FMUL_D_IN32X:
    case RISCV::FMUL_D_INX:
    case RISCV::FMUL_H:
    case RISCV::FMUL_H_INX:
    case RISCV::FMUL_S:
    case RISCV::FMUL_S_INX:
    case RISCV::FSUB_D:
    case RISCV::FSUB_D_IN32X:
    case RISCV::FSUB_D_INX:
    case RISCV::FSUB_H:
    case RISCV::FSUB_H_INX:
    case RISCV::FSUB_S:
    case RISCV::FSUB_S_INX: {
      switch (OpNum) {
      case 2:
        // op: rs2
        return 20;
      case 1:
        // op: rs1
        return 15;
      case 3:
        // op: frm
        return 12;
      case 0:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::VC_V_FV: {
      switch (OpNum) {
      case 2:
        // op: rs2
        return 20;
      case 3:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      case 1:
        // op: funct6_lo1
        return 26;
      }
      break;
    }
    case RISCV::VC_V_I:
    case RISCV::VC_V_IV:
    case RISCV::VC_V_VV:
    case RISCV::VC_V_X:
    case RISCV::VC_V_XV: {
      switch (OpNum) {
      case 2:
        // op: rs2
        return 20;
      case 3:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      case 1:
        // op: funct6_lo2
        return 26;
      }
      break;
    }
    case RISCV::VC_FV:
    case RISCV::VC_FVV:
    case RISCV::VC_FVW: {
      switch (OpNum) {
      case 2:
        // op: rs2
        return 20;
      case 3:
        // op: rs1
        return 15;
      case 1:
        // op: rd
        return 7;
      case 0:
        // op: funct6_lo1
        return 26;
      }
      break;
    }
    case RISCV::VC_IV:
    case RISCV::VC_IVV:
    case RISCV::VC_IVW:
    case RISCV::VC_VV:
    case RISCV::VC_VVV:
    case RISCV::VC_VVW:
    case RISCV::VC_XV:
    case RISCV::VC_XVV:
    case RISCV::VC_XVW: {
      switch (OpNum) {
      case 2:
        // op: rs2
        return 20;
      case 3:
        // op: rs1
        return 15;
      case 1:
        // op: rd
        return 7;
      case 0:
        // op: funct6_lo2
        return 26;
      }
      break;
    }
    case RISCV::C_ADDW:
    case RISCV::C_AND:
    case RISCV::C_MUL:
    case RISCV::C_OR:
    case RISCV::C_SUB:
    case RISCV::C_SUBW:
    case RISCV::C_XOR: {
      switch (OpNum) {
      case 2:
        // op: rs2
        return 2;
      case 1:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::C_ADD_HINT: {
      switch (OpNum) {
      case 2:
        // op: rs2
        return 2;
      }
      break;
    }
    case RISCV::VLOXEI8_V:
    case RISCV::VLOXEI16_V:
    case RISCV::VLOXEI32_V:
    case RISCV::VLOXEI64_V:
    case RISCV::VLOXSEG2EI8_V:
    case RISCV::VLOXSEG2EI16_V:
    case RISCV::VLOXSEG2EI32_V:
    case RISCV::VLOXSEG2EI64_V:
    case RISCV::VLOXSEG3EI8_V:
    case RISCV::VLOXSEG3EI16_V:
    case RISCV::VLOXSEG3EI32_V:
    case RISCV::VLOXSEG3EI64_V:
    case RISCV::VLOXSEG4EI8_V:
    case RISCV::VLOXSEG4EI16_V:
    case RISCV::VLOXSEG4EI32_V:
    case RISCV::VLOXSEG4EI64_V:
    case RISCV::VLOXSEG5EI8_V:
    case RISCV::VLOXSEG5EI16_V:
    case RISCV::VLOXSEG5EI32_V:
    case RISCV::VLOXSEG5EI64_V:
    case RISCV::VLOXSEG6EI8_V:
    case RISCV::VLOXSEG6EI16_V:
    case RISCV::VLOXSEG6EI32_V:
    case RISCV::VLOXSEG6EI64_V:
    case RISCV::VLOXSEG7EI8_V:
    case RISCV::VLOXSEG7EI16_V:
    case RISCV::VLOXSEG7EI32_V:
    case RISCV::VLOXSEG7EI64_V:
    case RISCV::VLOXSEG8EI8_V:
    case RISCV::VLOXSEG8EI16_V:
    case RISCV::VLOXSEG8EI32_V:
    case RISCV::VLOXSEG8EI64_V:
    case RISCV::VLUXEI8_V:
    case RISCV::VLUXEI16_V:
    case RISCV::VLUXEI32_V:
    case RISCV::VLUXEI64_V:
    case RISCV::VLUXSEG2EI8_V:
    case RISCV::VLUXSEG2EI16_V:
    case RISCV::VLUXSEG2EI32_V:
    case RISCV::VLUXSEG2EI64_V:
    case RISCV::VLUXSEG3EI8_V:
    case RISCV::VLUXSEG3EI16_V:
    case RISCV::VLUXSEG3EI32_V:
    case RISCV::VLUXSEG3EI64_V:
    case RISCV::VLUXSEG4EI8_V:
    case RISCV::VLUXSEG4EI16_V:
    case RISCV::VLUXSEG4EI32_V:
    case RISCV::VLUXSEG4EI64_V:
    case RISCV::VLUXSEG5EI8_V:
    case RISCV::VLUXSEG5EI16_V:
    case RISCV::VLUXSEG5EI32_V:
    case RISCV::VLUXSEG5EI64_V:
    case RISCV::VLUXSEG6EI8_V:
    case RISCV::VLUXSEG6EI16_V:
    case RISCV::VLUXSEG6EI32_V:
    case RISCV::VLUXSEG6EI64_V:
    case RISCV::VLUXSEG7EI8_V:
    case RISCV::VLUXSEG7EI16_V:
    case RISCV::VLUXSEG7EI32_V:
    case RISCV::VLUXSEG7EI64_V:
    case RISCV::VLUXSEG8EI8_V:
    case RISCV::VLUXSEG8EI16_V:
    case RISCV::VLUXSEG8EI32_V:
    case RISCV::VLUXSEG8EI64_V: {
      switch (OpNum) {
      case 2:
        // op: vs2
        return 20;
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: vd
        return 7;
      case 3:
        // op: vm
        return 25;
      }
      break;
    }
    case RISCV::VSOXEI8_V:
    case RISCV::VSOXEI16_V:
    case RISCV::VSOXEI32_V:
    case RISCV::VSOXEI64_V:
    case RISCV::VSOXSEG2EI8_V:
    case RISCV::VSOXSEG2EI16_V:
    case RISCV::VSOXSEG2EI32_V:
    case RISCV::VSOXSEG2EI64_V:
    case RISCV::VSOXSEG3EI8_V:
    case RISCV::VSOXSEG3EI16_V:
    case RISCV::VSOXSEG3EI32_V:
    case RISCV::VSOXSEG3EI64_V:
    case RISCV::VSOXSEG4EI8_V:
    case RISCV::VSOXSEG4EI16_V:
    case RISCV::VSOXSEG4EI32_V:
    case RISCV::VSOXSEG4EI64_V:
    case RISCV::VSOXSEG5EI8_V:
    case RISCV::VSOXSEG5EI16_V:
    case RISCV::VSOXSEG5EI32_V:
    case RISCV::VSOXSEG5EI64_V:
    case RISCV::VSOXSEG6EI8_V:
    case RISCV::VSOXSEG6EI16_V:
    case RISCV::VSOXSEG6EI32_V:
    case RISCV::VSOXSEG6EI64_V:
    case RISCV::VSOXSEG7EI8_V:
    case RISCV::VSOXSEG7EI16_V:
    case RISCV::VSOXSEG7EI32_V:
    case RISCV::VSOXSEG7EI64_V:
    case RISCV::VSOXSEG8EI8_V:
    case RISCV::VSOXSEG8EI16_V:
    case RISCV::VSOXSEG8EI32_V:
    case RISCV::VSOXSEG8EI64_V:
    case RISCV::VSUXEI8_V:
    case RISCV::VSUXEI16_V:
    case RISCV::VSUXEI32_V:
    case RISCV::VSUXEI64_V:
    case RISCV::VSUXSEG2EI8_V:
    case RISCV::VSUXSEG2EI16_V:
    case RISCV::VSUXSEG2EI32_V:
    case RISCV::VSUXSEG2EI64_V:
    case RISCV::VSUXSEG3EI8_V:
    case RISCV::VSUXSEG3EI16_V:
    case RISCV::VSUXSEG3EI32_V:
    case RISCV::VSUXSEG3EI64_V:
    case RISCV::VSUXSEG4EI8_V:
    case RISCV::VSUXSEG4EI16_V:
    case RISCV::VSUXSEG4EI32_V:
    case RISCV::VSUXSEG4EI64_V:
    case RISCV::VSUXSEG5EI8_V:
    case RISCV::VSUXSEG5EI16_V:
    case RISCV::VSUXSEG5EI32_V:
    case RISCV::VSUXSEG5EI64_V:
    case RISCV::VSUXSEG6EI8_V:
    case RISCV::VSUXSEG6EI16_V:
    case RISCV::VSUXSEG6EI32_V:
    case RISCV::VSUXSEG6EI64_V:
    case RISCV::VSUXSEG7EI8_V:
    case RISCV::VSUXSEG7EI16_V:
    case RISCV::VSUXSEG7EI32_V:
    case RISCV::VSUXSEG7EI64_V:
    case RISCV::VSUXSEG8EI8_V:
    case RISCV::VSUXSEG8EI16_V:
    case RISCV::VSUXSEG8EI32_V:
    case RISCV::VSUXSEG8EI64_V: {
      switch (OpNum) {
      case 2:
        // op: vs2
        return 20;
      case 1:
        // op: rs1
        return 15;
      case 0:
        // op: vs3
        return 7;
      case 3:
        // op: vm
        return 25;
      }
      break;
    }
    case RISCV::VAESDF_VS:
    case RISCV::VAESDF_VV:
    case RISCV::VAESDM_VS:
    case RISCV::VAESDM_VV:
    case RISCV::VAESEF_VS:
    case RISCV::VAESEF_VV:
    case RISCV::VAESEM_VS:
    case RISCV::VAESEM_VV:
    case RISCV::VAESZ_VS:
    case RISCV::VGMUL_VV:
    case RISCV::VSM4R_VS:
    case RISCV::VSM4R_VV: {
      switch (OpNum) {
      case 2:
        // op: vs2
        return 20;
      case 1:
        // op: vd
        return 7;
      }
      break;
    }
    case RISCV::VAESKF2_VI:
    case RISCV::VSM3C_VI: {
      switch (OpNum) {
      case 2:
        // op: vs2
        return 20;
      case 3:
        // op: imm
        return 15;
      case 1:
        // op: vd
        return 7;
      }
      break;
    }
    case RISCV::VGHSH_VV:
    case RISCV::VSHA2CH_VV:
    case RISCV::VSHA2CL_VV:
    case RISCV::VSHA2MS_VV: {
      switch (OpNum) {
      case 2:
        // op: vs2
        return 20;
      case 3:
        // op: vs1
        return 15;
      case 1:
        // op: vd
        return 7;
      }
      break;
    }
    case RISCV::CV_SB_ri_inc:
    case RISCV::CV_SH_ri_inc:
    case RISCV::CV_SW_ri_inc: {
      switch (OpNum) {
      case 3:
        // op: imm12
        return 7;
      case 1:
        // op: rs2
        return 20;
      case 2:
        // op: rs1
        return 15;
      }
      break;
    }
    case RISCV::CV_LBU_rr_inc:
    case RISCV::CV_LB_rr_inc:
    case RISCV::CV_LHU_rr_inc:
    case RISCV::CV_LH_rr_inc:
    case RISCV::CV_LW_rr_inc: {
      switch (OpNum) {
      case 3:
        // op: rs2
        return 20;
      case 2:
        // op: rs1
        return 15;
      case 0:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::CV_MACHHSN:
    case RISCV::CV_MACHHSRN:
    case RISCV::CV_MACHHUN:
    case RISCV::CV_MACHHURN:
    case RISCV::CV_MACSN:
    case RISCV::CV_MACSRN:
    case RISCV::CV_MACUN:
    case RISCV::CV_MACURN: {
      switch (OpNum) {
      case 3:
        // op: rs2
        return 20;
      case 2:
        // op: rs1
        return 15;
      case 1:
        // op: rd
        return 7;
      case 4:
        // op: imm5
        return 25;
      }
      break;
    }
    case RISCV::AMOCAS_B:
    case RISCV::AMOCAS_B_AQ:
    case RISCV::AMOCAS_B_AQ_RL:
    case RISCV::AMOCAS_B_RL:
    case RISCV::AMOCAS_D_RV32:
    case RISCV::AMOCAS_D_RV32_AQ:
    case RISCV::AMOCAS_D_RV32_AQ_RL:
    case RISCV::AMOCAS_D_RV32_RL:
    case RISCV::AMOCAS_D_RV64:
    case RISCV::AMOCAS_D_RV64_AQ:
    case RISCV::AMOCAS_D_RV64_AQ_RL:
    case RISCV::AMOCAS_D_RV64_RL:
    case RISCV::AMOCAS_H:
    case RISCV::AMOCAS_H_AQ:
    case RISCV::AMOCAS_H_AQ_RL:
    case RISCV::AMOCAS_H_RL:
    case RISCV::AMOCAS_Q:
    case RISCV::AMOCAS_Q_AQ:
    case RISCV::AMOCAS_Q_AQ_RL:
    case RISCV::AMOCAS_Q_RL:
    case RISCV::AMOCAS_W:
    case RISCV::AMOCAS_W_AQ:
    case RISCV::AMOCAS_W_AQ_RL:
    case RISCV::AMOCAS_W_RL:
    case RISCV::CV_ADDNR:
    case RISCV::CV_ADDRNR:
    case RISCV::CV_ADDUNR:
    case RISCV::CV_ADDURNR:
    case RISCV::CV_CPLXMUL_I:
    case RISCV::CV_CPLXMUL_I_DIV2:
    case RISCV::CV_CPLXMUL_I_DIV4:
    case RISCV::CV_CPLXMUL_I_DIV8:
    case RISCV::CV_CPLXMUL_R:
    case RISCV::CV_CPLXMUL_R_DIV2:
    case RISCV::CV_CPLXMUL_R_DIV4:
    case RISCV::CV_CPLXMUL_R_DIV8:
    case RISCV::CV_INSERTR:
    case RISCV::CV_MAC:
    case RISCV::CV_MSU:
    case RISCV::CV_PACKHI_B:
    case RISCV::CV_PACKLO_B:
    case RISCV::CV_SDOTSP_B:
    case RISCV::CV_SDOTSP_H:
    case RISCV::CV_SDOTSP_SC_B:
    case RISCV::CV_SDOTSP_SC_H:
    case RISCV::CV_SDOTUP_B:
    case RISCV::CV_SDOTUP_H:
    case RISCV::CV_SDOTUP_SC_B:
    case RISCV::CV_SDOTUP_SC_H:
    case RISCV::CV_SDOTUSP_B:
    case RISCV::CV_SDOTUSP_H:
    case RISCV::CV_SDOTUSP_SC_B:
    case RISCV::CV_SDOTUSP_SC_H:
    case RISCV::CV_SHUFFLE2_B:
    case RISCV::CV_SHUFFLE2_H:
    case RISCV::CV_SUBNR:
    case RISCV::CV_SUBRNR:
    case RISCV::CV_SUBUNR:
    case RISCV::CV_SUBURNR:
    case RISCV::TH_MULA:
    case RISCV::TH_MULAH:
    case RISCV::TH_MULAW:
    case RISCV::TH_MULS:
    case RISCV::TH_MULSH:
    case RISCV::TH_MULSW:
    case RISCV::TH_MVEQZ:
    case RISCV::TH_MVNEZ: {
      switch (OpNum) {
      case 3:
        // op: rs2
        return 20;
      case 2:
        // op: rs1
        return 15;
      case 1:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::VC_V_FVV:
    case RISCV::VC_V_FVW: {
      switch (OpNum) {
      case 3:
        // op: rs2
        return 20;
      case 4:
        // op: rs1
        return 15;
      case 2:
        // op: rd
        return 7;
      case 1:
        // op: funct6_lo1
        return 26;
      }
      break;
    }
    case RISCV::VC_V_IVV:
    case RISCV::VC_V_IVW:
    case RISCV::VC_V_VVV:
    case RISCV::VC_V_VVW:
    case RISCV::VC_V_XVV:
    case RISCV::VC_V_XVW: {
      switch (OpNum) {
      case 3:
        // op: rs2
        return 20;
      case 4:
        // op: rs1
        return 15;
      case 2:
        // op: rd
        return 7;
      case 1:
        // op: funct6_lo2
        return 26;
      }
      break;
    }
    case RISCV::FMADD_D:
    case RISCV::FMADD_D_IN32X:
    case RISCV::FMADD_D_INX:
    case RISCV::FMADD_H:
    case RISCV::FMADD_H_INX:
    case RISCV::FMADD_S:
    case RISCV::FMADD_S_INX:
    case RISCV::FMSUB_D:
    case RISCV::FMSUB_D_IN32X:
    case RISCV::FMSUB_D_INX:
    case RISCV::FMSUB_H:
    case RISCV::FMSUB_H_INX:
    case RISCV::FMSUB_S:
    case RISCV::FMSUB_S_INX:
    case RISCV::FNMADD_D:
    case RISCV::FNMADD_D_IN32X:
    case RISCV::FNMADD_D_INX:
    case RISCV::FNMADD_H:
    case RISCV::FNMADD_H_INX:
    case RISCV::FNMADD_S:
    case RISCV::FNMADD_S_INX:
    case RISCV::FNMSUB_D:
    case RISCV::FNMSUB_D_IN32X:
    case RISCV::FNMSUB_D_INX:
    case RISCV::FNMSUB_H:
    case RISCV::FNMSUB_H_INX:
    case RISCV::FNMSUB_S:
    case RISCV::FNMSUB_S_INX: {
      switch (OpNum) {
      case 3:
        // op: rs3
        return 27;
      case 2:
        // op: rs2
        return 20;
      case 1:
        // op: rs1
        return 15;
      case 4:
        // op: frm
        return 12;
      case 0:
        // op: rd
        return 7;
      }
      break;
    }
    case RISCV::CV_SB_rr_inc:
    case RISCV::CV_SH_rr_inc:
    case RISCV::CV_SW_rr_inc: {
      switch (OpNum) {
      case 3:
        // op: rs3
        return 7;
      case 1:
        // op: rs2
        return 20;
      case 2:
        // op: rs1
        return 15;
      }
      break;
    }
    case RISCV::THVdotVMAQASU_VX:
    case RISCV::THVdotVMAQAUS_VX:
    case RISCV::THVdotVMAQAU_VX:
    case RISCV::THVdotVMAQA_VX:
    case RISCV::VFMACC_VF:
    case RISCV::VFMADD_VF:
    case RISCV::VFMSAC_VF:
    case RISCV::VFMSUB_VF:
    case RISCV::VFNMACC_VF:
    case RISCV::VFNMADD_VF:
    case RISCV::VFNMSAC_VF:
    case RISCV::VFNMSUB_VF:
    case RISCV::VFWMACCBF16_VF:
    case RISCV::VFWMACC_VF:
    case RISCV::VFWMSAC_VF:
    case RISCV::VFWNMACC_VF:
    case RISCV::VFWNMSAC_VF:
    case RISCV::VMACC_VX:
    case RISCV::VMADD_VX:
    case RISCV::VNMSAC_VX:
    case RISCV::VNMSUB_VX:
    case RISCV::VWMACCSU_VX:
    case RISCV::VWMACCUS_VX:
    case RISCV::VWMACCU_VX:
    case RISCV::VWMACC_VX: {
      switch (OpNum) {
      case 3:
        // op: vs2
        return 20;
      case 2:
        // op: rs1
        return 15;
      case 1:
        // op: vd
        return 7;
      case 4:
        // op: vm
        return 25;
      }
      break;
    }
    case RISCV::THVdotVMAQASU_VV:
    case RISCV::THVdotVMAQAU_VV:
    case RISCV::THVdotVMAQA_VV:
    case RISCV::VFMACC_VV:
    case RISCV::VFMADD_VV:
    case RISCV::VFMSAC_VV:
    case RISCV::VFMSUB_VV:
    case RISCV::VFNMACC_VV:
    case RISCV::VFNMADD_VV:
    case RISCV::VFNMSAC_VV:
    case RISCV::VFNMSUB_VV:
    case RISCV::VFWMACCBF16_VV:
    case RISCV::VFWMACC_VV:
    case RISCV::VFWMSAC_VV:
    case RISCV::VFWNMACC_VV:
    case RISCV::VFWNMSAC_VV:
    case RISCV::VMACC_VV:
    case RISCV::VMADD_VV:
    case RISCV::VNMSAC_VV:
    case RISCV::VNMSUB_VV:
    case RISCV::VWMACCSU_VV:
    case RISCV::VWMACCU_VV:
    case RISCV::VWMACC_VV: {
      switch (OpNum) {
      case 3:
        // op: vs2
        return 20;
      case 2:
        // op: vs1
        return 15;
      case 1:
        // op: vd
        return 7;
      case 4:
        // op: vm
        return 25;
      }
      break;
    }
  }
  std::string msg;
  raw_string_ostream Msg(msg);
  Msg << "Not supported instr[opcode]: " << MI << "[" << OpNum << "]";
  report_fatal_error(Msg.str().c_str());
}

#endif // GET_OPERAND_BIT_OFFSET

