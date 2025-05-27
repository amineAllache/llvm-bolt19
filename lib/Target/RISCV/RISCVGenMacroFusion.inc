/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Macro Fusion Predicators                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_RISCV_MACRO_FUSION_PRED_DECL
#undef GET_RISCV_MACRO_FUSION_PRED_DECL

namespace llvm {
bool isTuneAUIPCADDIFusion(const TargetInstrInfo &, const TargetSubtargetInfo &, const MachineInstr *, const MachineInstr &);
bool isTuneLDADDFusion(const TargetInstrInfo &, const TargetSubtargetInfo &, const MachineInstr *, const MachineInstr &);
bool isTuneLUIADDIFusion(const TargetInstrInfo &, const TargetSubtargetInfo &, const MachineInstr *, const MachineInstr &);
bool isTuneShiftedZExtWFusion(const TargetInstrInfo &, const TargetSubtargetInfo &, const MachineInstr *, const MachineInstr &);
bool isTuneZExtHFusion(const TargetInstrInfo &, const TargetSubtargetInfo &, const MachineInstr *, const MachineInstr &);
bool isTuneZExtWFusion(const TargetInstrInfo &, const TargetSubtargetInfo &, const MachineInstr *, const MachineInstr &);
} // end namespace llvm

#endif

#ifdef GET_RISCV_MACRO_FUSION_PRED_IMPL
#undef GET_RISCV_MACRO_FUSION_PRED_IMPL

namespace llvm {
bool isTuneAUIPCADDIFusion(
    const TargetInstrInfo &TII,
    const TargetSubtargetInfo &STI,
    const MachineInstr *FirstMI,
    const MachineInstr &SecondMI) {
  [[maybe_unused]] auto &MRI = SecondMI.getMF()->getRegInfo();
  {
    const MachineInstr *MI = &SecondMI;
    if (( MI->getOpcode() != RISCV::ADDI ))
      return false;
  }
  if (!FirstMI)
    return true;
  {
    const MachineInstr *MI = FirstMI;
    if (( MI->getOpcode() != RISCV::AUIPC ))
      return false;
  }
  if (!SecondMI.getOperand(0).getReg().isVirtual()) {
    if (SecondMI.getOperand(0).getReg() != SecondMI.getOperand(1).getReg())
      return false;
  }
  {
    Register FirstDest = FirstMI->getOperand(0).getReg();
    if (FirstDest.isVirtual() && !MRI.hasOneNonDBGUse(FirstDest))
      return false;
  }
  if (!(FirstMI->getOperand(0).isReg() &&
        SecondMI.getOperand(1).isReg() &&
        FirstMI->getOperand(0).getReg() == SecondMI.getOperand(1).getReg()))
    return false;
  return true;
}
bool isTuneLDADDFusion(
    const TargetInstrInfo &TII,
    const TargetSubtargetInfo &STI,
    const MachineInstr *FirstMI,
    const MachineInstr &SecondMI) {
  [[maybe_unused]] auto &MRI = SecondMI.getMF()->getRegInfo();
  {
    const MachineInstr *MI = &SecondMI;
    if (!(
        ( MI->getOpcode() == RISCV::LD )
        && MI->getOperand(2).isImm() 
        && MI->getOperand(2).getImm() == 0
      ))
      return false;
  }
  if (!FirstMI)
    return true;
  {
    const MachineInstr *MI = FirstMI;
    if (( MI->getOpcode() != RISCV::ADD ))
      return false;
  }
  if (!SecondMI.getOperand(0).getReg().isVirtual()) {
    if (SecondMI.getOperand(0).getReg() != SecondMI.getOperand(1).getReg())
      return false;
  }
  {
    Register FirstDest = FirstMI->getOperand(0).getReg();
    if (FirstDest.isVirtual() && !MRI.hasOneNonDBGUse(FirstDest))
      return false;
  }
  if (!(FirstMI->getOperand(0).isReg() &&
        SecondMI.getOperand(1).isReg() &&
        FirstMI->getOperand(0).getReg() == SecondMI.getOperand(1).getReg()))
    return false;
  return true;
}
bool isTuneLUIADDIFusion(
    const TargetInstrInfo &TII,
    const TargetSubtargetInfo &STI,
    const MachineInstr *FirstMI,
    const MachineInstr &SecondMI) {
  [[maybe_unused]] auto &MRI = SecondMI.getMF()->getRegInfo();
  {
    const MachineInstr *MI = &SecondMI;
    if ((
        MI->getOpcode() != RISCV::ADDI
        && MI->getOpcode() != RISCV::ADDIW
      ))
      return false;
  }
  if (!FirstMI)
    return true;
  {
    const MachineInstr *MI = FirstMI;
    if (( MI->getOpcode() != RISCV::LUI ))
      return false;
  }
  if (!SecondMI.getOperand(0).getReg().isVirtual()) {
    if (SecondMI.getOperand(0).getReg() != SecondMI.getOperand(1).getReg())
      return false;
  }
  {
    Register FirstDest = FirstMI->getOperand(0).getReg();
    if (FirstDest.isVirtual() && !MRI.hasOneNonDBGUse(FirstDest))
      return false;
  }
  if (!(FirstMI->getOperand(0).isReg() &&
        SecondMI.getOperand(1).isReg() &&
        FirstMI->getOperand(0).getReg() == SecondMI.getOperand(1).getReg()))
    return false;
  return true;
}
bool isTuneShiftedZExtWFusion(
    const TargetInstrInfo &TII,
    const TargetSubtargetInfo &STI,
    const MachineInstr *FirstMI,
    const MachineInstr &SecondMI) {
  [[maybe_unused]] auto &MRI = SecondMI.getMF()->getRegInfo();
  {
    const MachineInstr *MI = &SecondMI;
    if (!(
        ( MI->getOpcode() == RISCV::SRLI )
        && MI->getOperand(2).isImm() 
        && (
          MI->getOperand(2).getImm() >= 0
          && MI->getOperand(2).getImm() <= 31
        )
      ))
      return false;
  }
  if (!FirstMI)
    return true;
  {
    const MachineInstr *MI = FirstMI;
    if (!(
        ( MI->getOpcode() == RISCV::SLLI )
        && MI->getOperand(2).isImm() 
        && MI->getOperand(2).getImm() == 32
      ))
      return false;
  }
  if (!SecondMI.getOperand(0).getReg().isVirtual()) {
    if (SecondMI.getOperand(0).getReg() != SecondMI.getOperand(1).getReg())
      return false;
  }
  {
    Register FirstDest = FirstMI->getOperand(0).getReg();
    if (FirstDest.isVirtual() && !MRI.hasOneNonDBGUse(FirstDest))
      return false;
  }
  if (!(FirstMI->getOperand(0).isReg() &&
        SecondMI.getOperand(1).isReg() &&
        FirstMI->getOperand(0).getReg() == SecondMI.getOperand(1).getReg()))
    return false;
  return true;
}
bool isTuneZExtHFusion(
    const TargetInstrInfo &TII,
    const TargetSubtargetInfo &STI,
    const MachineInstr *FirstMI,
    const MachineInstr &SecondMI) {
  [[maybe_unused]] auto &MRI = SecondMI.getMF()->getRegInfo();
  {
    const MachineInstr *MI = &SecondMI;
    if (!(
        ( MI->getOpcode() == RISCV::SRLI )
        && MI->getOperand(2).isImm() 
        && MI->getOperand(2).getImm() == 48
      ))
      return false;
  }
  if (!FirstMI)
    return true;
  {
    const MachineInstr *MI = FirstMI;
    if (!(
        ( MI->getOpcode() == RISCV::SLLI )
        && MI->getOperand(2).isImm() 
        && MI->getOperand(2).getImm() == 48
      ))
      return false;
  }
  if (!SecondMI.getOperand(0).getReg().isVirtual()) {
    if (SecondMI.getOperand(0).getReg() != SecondMI.getOperand(1).getReg())
      return false;
  }
  {
    Register FirstDest = FirstMI->getOperand(0).getReg();
    if (FirstDest.isVirtual() && !MRI.hasOneNonDBGUse(FirstDest))
      return false;
  }
  if (!(FirstMI->getOperand(0).isReg() &&
        SecondMI.getOperand(1).isReg() &&
        FirstMI->getOperand(0).getReg() == SecondMI.getOperand(1).getReg()))
    return false;
  return true;
}
bool isTuneZExtWFusion(
    const TargetInstrInfo &TII,
    const TargetSubtargetInfo &STI,
    const MachineInstr *FirstMI,
    const MachineInstr &SecondMI) {
  [[maybe_unused]] auto &MRI = SecondMI.getMF()->getRegInfo();
  {
    const MachineInstr *MI = &SecondMI;
    if (!(
        ( MI->getOpcode() == RISCV::SRLI )
        && MI->getOperand(2).isImm() 
        && MI->getOperand(2).getImm() == 32
      ))
      return false;
  }
  if (!FirstMI)
    return true;
  {
    const MachineInstr *MI = FirstMI;
    if (!(
        ( MI->getOpcode() == RISCV::SLLI )
        && MI->getOperand(2).isImm() 
        && MI->getOperand(2).getImm() == 32
      ))
      return false;
  }
  if (!SecondMI.getOperand(0).getReg().isVirtual()) {
    if (SecondMI.getOperand(0).getReg() != SecondMI.getOperand(1).getReg())
      return false;
  }
  {
    Register FirstDest = FirstMI->getOperand(0).getReg();
    if (FirstDest.isVirtual() && !MRI.hasOneNonDBGUse(FirstDest))
      return false;
  }
  if (!(FirstMI->getOperand(0).isReg() &&
        SecondMI.getOperand(1).isReg() &&
        FirstMI->getOperand(0).getReg() == SecondMI.getOperand(1).getReg()))
    return false;
  return true;
}
} // end namespace llvm

#endif
