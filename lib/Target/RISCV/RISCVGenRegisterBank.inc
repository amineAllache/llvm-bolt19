/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Register Bank Source Fragments                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_REGBANK_DECLARATIONS
#undef GET_REGBANK_DECLARATIONS
namespace llvm {
namespace RISCV {
enum : unsigned {
  InvalidRegBankID = ~0u,
  FPRBRegBankID = 0,
  GPRBRegBankID = 1,
  VRBRegBankID = 2,
  NumRegisterBanks,
};
} // end namespace RISCV
} // end namespace llvm
#endif // GET_REGBANK_DECLARATIONS

#ifdef GET_TARGET_REGBANK_CLASS
#undef GET_TARGET_REGBANK_CLASS
private:
  static const RegisterBank *RegBanks[];
  static const unsigned Sizes[];

protected:
  RISCVGenRegisterBankInfo(unsigned HwMode = 0);

#endif // GET_TARGET_REGBANK_CLASS

#ifdef GET_TARGET_REGBANK_IMPL
#undef GET_TARGET_REGBANK_IMPL
namespace llvm {
namespace RISCV {
const uint32_t FPRBRegBankCoverageData[] = {
    // 0-31
    (1u << (RISCV::FPR16RegClassID - 0)) |
    (1u << (RISCV::FPR32RegClassID - 0)) |
    (1u << (RISCV::FPR32CRegClassID - 0)) |
    0,
    // 32-63
    (1u << (RISCV::FPR64RegClassID - 32)) |
    (1u << (RISCV::FPR64CRegClassID - 32)) |
    0,
    // 64-95
    0,
};
const uint32_t GPRBRegBankCoverageData[] = {
    // 0-31
    (1u << (RISCV::GPRRegClassID - 0)) |
    (1u << (RISCV::GPRF16RegClassID - 0)) |
    (1u << (RISCV::GPRF32RegClassID - 0)) |
    (1u << (RISCV::GPRNoX0RegClassID - 0)) |
    (1u << (RISCV::GPRNoX0X2RegClassID - 0)) |
    (1u << (RISCV::GPRJALRRegClassID - 0)) |
    (1u << (RISCV::GPRJALRNonX7RegClassID - 0)) |
    (1u << (RISCV::GPRTCNonX7RegClassID - 0)) |
    (1u << (RISCV::GPRC_and_GPRTCRegClassID - 0)) |
    (1u << (RISCV::GPRCRegClassID - 0)) |
    (1u << (RISCV::GPRC_and_SR07RegClassID - 0)) |
    (1u << (RISCV::SR07RegClassID - 0)) |
    (1u << (RISCV::GPRTCRegClassID - 0)) |
    (1u << (RISCV::GPRX7RegClassID - 0)) |
    (1u << (RISCV::GPRX1X5RegClassID - 0)) |
    (1u << (RISCV::GPRX1RegClassID - 0)) |
    (1u << (RISCV::GPRX5RegClassID - 0)) |
    (1u << (RISCV::SPRegClassID - 0)) |
    (1u << (RISCV::GPRX0RegClassID - 0)) |
    0,
    // 32-63
    0,
    // 64-95
    0,
};
const uint32_t VRBRegBankCoverageData[] = {
    // 0-31
    0,
    // 32-63
    (1u << (RISCV::VMRegClassID - 32)) |
    (1u << (RISCV::VRRegClassID - 32)) |
    (1u << (RISCV::VRNoV0RegClassID - 32)) |
    (1u << (RISCV::VRM2RegClassID - 32)) |
    (1u << (RISCV::VRM2NoV0RegClassID - 32)) |
    (1u << (RISCV::VRM4RegClassID - 32)) |
    (1u << (RISCV::VRM4NoV0RegClassID - 32)) |
    (1u << (RISCV::VMV0RegClassID - 32)) |
    (1u << (RISCV::VRM2_with_sub_vrm1_0_in_VMV0RegClassID - 32)) |
    (1u << (RISCV::VRM4_with_sub_vrm1_0_in_VMV0RegClassID - 32)) |
    0,
    // 64-95
    (1u << (RISCV::VRM8RegClassID - 64)) |
    (1u << (RISCV::VRM8NoV0RegClassID - 64)) |
    (1u << (RISCV::VRM8_with_sub_vrm1_0_in_VMV0RegClassID - 64)) |
    0,
};

constexpr RegisterBank FPRBRegBank(/* ID */ RISCV::FPRBRegBankID, /* Name */ "FPRB", /* CoveredRegClasses */ FPRBRegBankCoverageData, /* NumRegClasses */ 87);
constexpr RegisterBank GPRBRegBank(/* ID */ RISCV::GPRBRegBankID, /* Name */ "GPRB", /* CoveredRegClasses */ GPRBRegBankCoverageData, /* NumRegClasses */ 87);
constexpr RegisterBank VRBRegBank(/* ID */ RISCV::VRBRegBankID, /* Name */ "VRB", /* CoveredRegClasses */ VRBRegBankCoverageData, /* NumRegClasses */ 87);
} // end namespace RISCV

const RegisterBank *RISCVGenRegisterBankInfo::RegBanks[] = {
    &RISCV::FPRBRegBank,
    &RISCV::GPRBRegBank,
    &RISCV::VRBRegBank,
};

const unsigned RISCVGenRegisterBankInfo::Sizes[] = {
    // Mode = 0 (Default)
    64,
    32,
    512,
    // Mode = 1 (RV64)
    64,
    64,
    512,
};

RISCVGenRegisterBankInfo::RISCVGenRegisterBankInfo(unsigned HwMode)
    : RegisterBankInfo(RegBanks, RISCV::NumRegisterBanks, Sizes, HwMode) {
  // Assert that RegBank indices match their ID's
#ifndef NDEBUG
  for (auto RB : enumerate(RegBanks))
    assert(RB.index() == RB.value()->getID() && "Index != ID");
#endif // NDEBUG
}
} // end namespace llvm
#endif // GET_TARGET_REGBANK_IMPL
