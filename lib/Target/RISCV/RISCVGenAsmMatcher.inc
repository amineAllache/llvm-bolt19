/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Assembly Matcher Source Fragment                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: RISCV.td                                                             *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  FeatureBitset ComputeAvailableFeatures(const FeatureBitset &FB) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const OperandVector &Operands,
                       const SmallBitVector &OptionalOperandsMask,
                       ArrayRef<unsigned> DefaultsOffset);
  void convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) override;
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo,
                                FeatureBitset &MissingFeatures,
                                bool matchingInlineAsm,
                                unsigned VariantID = 0);
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo,
                                bool matchingInlineAsm,
                                unsigned VariantID = 0) {
    FeatureBitset MissingFeatures;
    return MatchInstructionImpl(Operands, Inst, ErrorInfo, MissingFeatures,
                                matchingInlineAsm, VariantID);
  }

  ParseStatus MatchOperandParserImpl(
    OperandVector &Operands,
    StringRef Mnemonic,
    bool ParseForAllFeatures = false);
  ParseStatus tryCustomParseOperand(
    OperandVector &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

  Match_InvalidBareSymbol,
  Match_InvalidCLUIImm,
  Match_InvalidCSRSystemRegister,
  Match_InvalidCallSymbol,
  Match_InvalidImmXLenLI,
  Match_InvalidImmXLenLI_Restricted,
  Match_InvalidImmZero,
  Match_InvalidLoadFPImm,
  Match_InvalidPseudoJumpSymbol,
  Match_InvalidRTZArg,
  Match_InvalidRegReg,
  Match_InvalidRlist,
  Match_InvalidRnumArg,
  Match_InvalidSImm10Lsb0000NonZero,
  Match_InvalidSImm12,
  Match_InvalidSImm12Lsb0,
  Match_InvalidSImm12Lsb00000,
  Match_InvalidSImm13Lsb0,
  Match_InvalidSImm21Lsb0JAL,
  Match_InvalidSImm5,
  Match_InvalidSImm5Plus1,
  Match_InvalidSImm6,
  Match_InvalidSImm6NonZero,
  Match_InvalidSImm9Lsb0,
  Match_InvalidStackAdj,
  Match_InvalidTLSDESCCallSymbol,
  Match_InvalidTPRelAddSymbol,
  Match_InvalidUImm1,
  Match_InvalidUImm10Lsb00NonZero,
  Match_InvalidUImm16,
  Match_InvalidUImm2,
  Match_InvalidUImm20,
  Match_InvalidUImm20AUIPC,
  Match_InvalidUImm20LUI,
  Match_InvalidUImm2Lsb0,
  Match_InvalidUImm3,
  Match_InvalidUImm32,
  Match_InvalidUImm4,
  Match_InvalidUImm5,
  Match_InvalidUImm5Lsb0,
  Match_InvalidUImm6,
  Match_InvalidUImm6Lsb0,
  Match_InvalidUImm7,
  Match_InvalidUImm7Lsb00,
  Match_InvalidUImm8,
  Match_InvalidUImm8GE32,
  Match_InvalidUImm8Lsb00,
  Match_InvalidUImm8Lsb000,
  Match_InvalidUImm9Lsb000,
  Match_InvalidUImmLog2XLen,
  Match_InvalidUImmLog2XLenHalf,
  Match_InvalidUImmLog2XLenNonZero,
  Match_InvalidVMaskRegister,
  Match_InvalidVTypeI,
  END_OPERAND_DIAGNOSTIC_TYPES
#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_HasStdExtZicbomBit = 41,
  Feature_HasStdExtZicbopBit = 42,
  Feature_HasStdExtZicbozBit = 43,
  Feature_HasStdExtZicsrBit = 47,
  Feature_HasStdExtZicondBit = 46,
  Feature_HasStdExtZifenceiBit = 48,
  Feature_HasStdExtZihintpauseBit = 50,
  Feature_HasStdExtZihintntlBit = 49,
  Feature_HasStdExtZimopBit = 51,
  Feature_HasStdExtZicfilpBit = 44,
  Feature_NoStdExtZicfilpBit = 108,
  Feature_HasStdExtZicfissBit = 45,
  Feature_HasStdExtZmmulBit = 59,
  Feature_HasStdExtMBit = 13,
  Feature_HasStdExtABit = 2,
  Feature_HasStdExtZtsoBit = 60,
  Feature_HasStdExtAOrZaamoBit = 3,
  Feature_HasStdExtZabhaBit = 15,
  Feature_HasStdExtZacasBit = 16,
  Feature_HasStdExtZalasrBit = 17,
  Feature_HasStdExtAOrZalrscBit = 4,
  Feature_HasStdExtZawrsBit = 18,
  Feature_HasStdExtFBit = 11,
  Feature_HasStdExtDBit = 10,
  Feature_HasStdExtZfhminBit = 37,
  Feature_HasStdExtZfhBit = 35,
  Feature_HasStdExtZfbfminBit = 34,
  Feature_HasHalfFPLoadStoreMoveBit = 0,
  Feature_HasStdExtZfaBit = 33,
  Feature_HasStdExtZfinxBit = 38,
  Feature_HasStdExtZdinxBit = 32,
  Feature_HasStdExtZhinxminBit = 40,
  Feature_HasStdExtZhinxBit = 39,
  Feature_HasStdExtCBit = 6,
  Feature_HasRVCHintsBit = 1,
  Feature_HasStdExtCOrZcaBit = 7,
  Feature_HasStdExtZcbBit = 28,
  Feature_HasStdExtCOrZcdBit = 8,
  Feature_HasStdExtZcmpBit = 30,
  Feature_HasStdExtZcmtBit = 31,
  Feature_HasStdExtCOrZcfOrZceBit = 9,
  Feature_HasStdExtZcmopBit = 29,
  Feature_HasStdExtZbaBit = 19,
  Feature_HasStdExtZbbBit = 20,
  Feature_NoStdExtZbbBit = 107,
  Feature_HasStdExtZbcBit = 22,
  Feature_HasStdExtZbsBit = 27,
  Feature_HasStdExtBBit = 5,
  Feature_HasStdExtZbkbBit = 24,
  Feature_HasStdExtZbkxBit = 26,
  Feature_HasStdExtZbbOrZbkbBit = 21,
  Feature_HasStdExtZbkcBit = 25,
  Feature_HasStdExtZbcOrZbkcBit = 23,
  Feature_HasStdExtZkndBit = 52,
  Feature_HasStdExtZkneBit = 54,
  Feature_HasStdExtZkndOrZkneBit = 53,
  Feature_HasStdExtZknhBit = 55,
  Feature_HasStdExtZksedBit = 57,
  Feature_HasStdExtZkshBit = 58,
  Feature_HasStdExtZkrBit = 56,
  Feature_HasStdExtZvfbfminBit = 63,
  Feature_HasStdExtZvfbfwmaBit = 64,
  Feature_HasStdExtZfhOrZvfhBit = 36,
  Feature_HasStdExtZvkbBit = 65,
  Feature_HasStdExtZvbbBit = 61,
  Feature_HasStdExtZvbcBit = 62,
  Feature_HasStdExtZvkgBit = 66,
  Feature_HasStdExtZvknedBit = 67,
  Feature_HasStdExtZvknhaBit = 68,
  Feature_HasStdExtZvknhbBit = 70,
  Feature_HasStdExtZvknhaOrZvknhbBit = 69,
  Feature_HasStdExtZvksedBit = 71,
  Feature_HasStdExtZvkshBit = 72,
  Feature_HasVInstructionsBit = 73,
  Feature_HasVInstructionsI64Bit = 76,
  Feature_HasVInstructionsAnyFBit = 74,
  Feature_HasVInstructionsF16MinimalBit = 75,
  Feature_HasStdExtHBit = 12,
  Feature_HasStdExtSvinvalBit = 14,
  Feature_HasVendorXVentanaCondOpsBit = 103,
  Feature_HasVendorXTHeadBaBit = 92,
  Feature_HasVendorXTHeadBbBit = 93,
  Feature_HasVendorXTHeadBsBit = 94,
  Feature_HasVendorXTHeadCondMovBit = 96,
  Feature_HasVendorXTHeadCmoBit = 95,
  Feature_HasVendorXTHeadFMemIdxBit = 97,
  Feature_HasVendorXTHeadMacBit = 98,
  Feature_HasVendorXTHeadMemIdxBit = 99,
  Feature_HasVendorXTHeadMemPairBit = 100,
  Feature_HasVendorXTHeadSyncBit = 101,
  Feature_HasVendorXTHeadVdotBit = 102,
  Feature_HasVendorXSfvcpBit = 85,
  Feature_HasVendorXSfvqmaccdodBit = 88,
  Feature_HasVendorXSfvqmaccqoqBit = 89,
  Feature_HasVendorXSfvfwmaccqqqBit = 87,
  Feature_HasVendorXSfvfnrclipxfqfBit = 86,
  Feature_HasVendorXSiFivecdiscarddloneBit = 90,
  Feature_HasVendorXSiFivecflushdloneBit = 91,
  Feature_HasVendorXSfceaseBit = 84,
  Feature_HasVendorXCVelwBit = 80,
  Feature_HasVendorXCVbitmanipBit = 79,
  Feature_HasVendorXCVmacBit = 81,
  Feature_HasVendorXCVmemBit = 82,
  Feature_HasVendorXCValuBit = 77,
  Feature_HasVendorXCVsimdBit = 83,
  Feature_HasVendorXCVbiBit = 78,
  Feature_HasVendorXwchcBit = 104,
  Feature_IsRV64Bit = 106,
  Feature_IsRV32Bit = 105,
};

static MCRegister MatchRegisterName(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 1 string to match.
    if (Name[0] != '0')
      break;
    return RISCV::DUMMY_REG_PAIR_WITH_X0;	 // "0"
  case 2:	 // 66 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 30 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 3 strings to match.
        return RISCV::F0_D;	 // "f0"
      case '1':	 // 3 strings to match.
        return RISCV::F1_D;	 // "f1"
      case '2':	 // 3 strings to match.
        return RISCV::F2_D;	 // "f2"
      case '3':	 // 3 strings to match.
        return RISCV::F3_D;	 // "f3"
      case '4':	 // 3 strings to match.
        return RISCV::F4_D;	 // "f4"
      case '5':	 // 3 strings to match.
        return RISCV::F5_D;	 // "f5"
      case '6':	 // 3 strings to match.
        return RISCV::F6_D;	 // "f6"
      case '7':	 // 3 strings to match.
        return RISCV::F7_D;	 // "f7"
      case '8':	 // 3 strings to match.
        return RISCV::F8_D;	 // "f8"
      case '9':	 // 3 strings to match.
        return RISCV::F9_D;	 // "f9"
      }
      break;
    case 'v':	 // 21 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 4 strings to match.
        return RISCV::V0;	 // "v0"
      case '1':	 // 1 string to match.
        return RISCV::V1;	 // "v1"
      case '2':	 // 2 strings to match.
        return RISCV::V2;	 // "v2"
      case '3':	 // 1 string to match.
        return RISCV::V3;	 // "v3"
      case '4':	 // 3 strings to match.
        return RISCV::V4;	 // "v4"
      case '5':	 // 1 string to match.
        return RISCV::V5;	 // "v5"
      case '6':	 // 2 strings to match.
        return RISCV::V6;	 // "v6"
      case '7':	 // 1 string to match.
        return RISCV::V7;	 // "v7"
      case '8':	 // 4 strings to match.
        return RISCV::V8;	 // "v8"
      case '9':	 // 1 string to match.
        return RISCV::V9;	 // "v9"
      case 'l':	 // 1 string to match.
        return RISCV::VL;	 // "vl"
      }
      break;
    case 'x':	 // 15 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 2 strings to match.
        return RISCV::X0;	 // "x0"
      case '1':	 // 1 string to match.
        return RISCV::X1;	 // "x1"
      case '2':	 // 2 strings to match.
        return RISCV::X2;	 // "x2"
      case '3':	 // 1 string to match.
        return RISCV::X3;	 // "x3"
      case '4':	 // 2 strings to match.
        return RISCV::X4;	 // "x4"
      case '5':	 // 1 string to match.
        return RISCV::X5;	 // "x5"
      case '6':	 // 2 strings to match.
        return RISCV::X6;	 // "x6"
      case '7':	 // 1 string to match.
        return RISCV::X7;	 // "x7"
      case '8':	 // 2 strings to match.
        return RISCV::X8;	 // "x8"
      case '9':	 // 1 string to match.
        return RISCV::X9;	 // "x9"
      }
      break;
    }
    break;
  case 3:	 // 141 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 67 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 30 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return RISCV::F10_D;	 // "f10"
        case '1':	 // 3 strings to match.
          return RISCV::F11_D;	 // "f11"
        case '2':	 // 3 strings to match.
          return RISCV::F12_D;	 // "f12"
        case '3':	 // 3 strings to match.
          return RISCV::F13_D;	 // "f13"
        case '4':	 // 3 strings to match.
          return RISCV::F14_D;	 // "f14"
        case '5':	 // 3 strings to match.
          return RISCV::F15_D;	 // "f15"
        case '6':	 // 3 strings to match.
          return RISCV::F16_D;	 // "f16"
        case '7':	 // 3 strings to match.
          return RISCV::F17_D;	 // "f17"
        case '8':	 // 3 strings to match.
          return RISCV::F18_D;	 // "f18"
        case '9':	 // 3 strings to match.
          return RISCV::F19_D;	 // "f19"
        }
        break;
      case '2':	 // 30 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return RISCV::F20_D;	 // "f20"
        case '1':	 // 3 strings to match.
          return RISCV::F21_D;	 // "f21"
        case '2':	 // 3 strings to match.
          return RISCV::F22_D;	 // "f22"
        case '3':	 // 3 strings to match.
          return RISCV::F23_D;	 // "f23"
        case '4':	 // 3 strings to match.
          return RISCV::F24_D;	 // "f24"
        case '5':	 // 3 strings to match.
          return RISCV::F25_D;	 // "f25"
        case '6':	 // 3 strings to match.
          return RISCV::F26_D;	 // "f26"
        case '7':	 // 3 strings to match.
          return RISCV::F27_D;	 // "f27"
        case '8':	 // 3 strings to match.
          return RISCV::F28_D;	 // "f28"
        case '9':	 // 3 strings to match.
          return RISCV::F29_D;	 // "f29"
        }
        break;
      case '3':	 // 6 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return RISCV::F30_D;	 // "f30"
        case '1':	 // 3 strings to match.
          return RISCV::F31_D;	 // "f31"
        }
        break;
      case 'r':	 // 1 string to match.
        if (Name[2] != 'm')
          break;
        return RISCV::FRM;	 // "frm"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sp", 2) != 0)
        break;
      return RISCV::SSP;	 // "ssp"
    case 'v':	 // 40 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 18 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return RISCV::V10;	 // "v10"
        case '1':	 // 1 string to match.
          return RISCV::V11;	 // "v11"
        case '2':	 // 3 strings to match.
          return RISCV::V12;	 // "v12"
        case '3':	 // 1 string to match.
          return RISCV::V13;	 // "v13"
        case '4':	 // 2 strings to match.
          return RISCV::V14;	 // "v14"
        case '5':	 // 1 string to match.
          return RISCV::V15;	 // "v15"
        case '6':	 // 4 strings to match.
          return RISCV::V16;	 // "v16"
        case '7':	 // 1 string to match.
          return RISCV::V17;	 // "v17"
        case '8':	 // 2 strings to match.
          return RISCV::V18;	 // "v18"
        case '9':	 // 1 string to match.
          return RISCV::V19;	 // "v19"
        }
        break;
      case '2':	 // 19 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return RISCV::V20;	 // "v20"
        case '1':	 // 1 string to match.
          return RISCV::V21;	 // "v21"
        case '2':	 // 2 strings to match.
          return RISCV::V22;	 // "v22"
        case '3':	 // 1 string to match.
          return RISCV::V23;	 // "v23"
        case '4':	 // 4 strings to match.
          return RISCV::V24;	 // "v24"
        case '5':	 // 1 string to match.
          return RISCV::V25;	 // "v25"
        case '6':	 // 2 strings to match.
          return RISCV::V26;	 // "v26"
        case '7':	 // 1 string to match.
          return RISCV::V27;	 // "v27"
        case '8':	 // 3 strings to match.
          return RISCV::V28;	 // "v28"
        case '9':	 // 1 string to match.
          return RISCV::V29;	 // "v29"
        }
        break;
      case '3':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return RISCV::V30;	 // "v30"
        case '1':	 // 1 string to match.
          return RISCV::V31;	 // "v31"
        }
        break;
      }
      break;
    case 'x':	 // 33 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 15 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return RISCV::X10;	 // "x10"
        case '1':	 // 1 string to match.
          return RISCV::X11;	 // "x11"
        case '2':	 // 2 strings to match.
          return RISCV::X12;	 // "x12"
        case '3':	 // 1 string to match.
          return RISCV::X13;	 // "x13"
        case '4':	 // 2 strings to match.
          return RISCV::X14;	 // "x14"
        case '5':	 // 1 string to match.
          return RISCV::X15;	 // "x15"
        case '6':	 // 2 strings to match.
          return RISCV::X16;	 // "x16"
        case '7':	 // 1 string to match.
          return RISCV::X17;	 // "x17"
        case '8':	 // 2 strings to match.
          return RISCV::X18;	 // "x18"
        case '9':	 // 1 string to match.
          return RISCV::X19;	 // "x19"
        }
        break;
      case '2':	 // 15 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return RISCV::X20;	 // "x20"
        case '1':	 // 1 string to match.
          return RISCV::X21;	 // "x21"
        case '2':	 // 2 strings to match.
          return RISCV::X22;	 // "x22"
        case '3':	 // 1 string to match.
          return RISCV::X23;	 // "x23"
        case '4':	 // 2 strings to match.
          return RISCV::X24;	 // "x24"
        case '5':	 // 1 string to match.
          return RISCV::X25;	 // "x25"
        case '6':	 // 2 strings to match.
          return RISCV::X26;	 // "x26"
        case '7':	 // 1 string to match.
          return RISCV::X27;	 // "x27"
        case '8':	 // 2 strings to match.
          return RISCV::X28;	 // "x28"
        case '9':	 // 1 string to match.
          return RISCV::X29;	 // "x29"
        }
        break;
      case '3':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return RISCV::X30;	 // "x30"
        case '1':	 // 1 string to match.
          return RISCV::X31;	 // "x31"
        }
        break;
      }
      break;
    }
    break;
  case 4:	 // 1 string to match.
    if (memcmp(Name.data()+0, "vxrm", 4) != 0)
      break;
    return RISCV::VXRM;	 // "vxrm"
  case 5:	 // 3 strings to match.
    if (Name[0] != 'v')
      break;
    switch (Name[1]) {
    default: break;
    case 'l':	 // 1 string to match.
      if (memcmp(Name.data()+2, "enb", 3) != 0)
        break;
      return RISCV::VLENB;	 // "vlenb"
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+2, "ype", 3) != 0)
        break;
      return RISCV::VTYPE;	 // "vtype"
    case 'x':	 // 1 string to match.
      if (memcmp(Name.data()+2, "sat", 3) != 0)
        break;
      return RISCV::VXSAT;	 // "vxsat"
    }
    break;
  case 6:	 // 1 string to match.
    if (memcmp(Name.data()+0, "fflags", 6) != 0)
      break;
    return RISCV::FFLAGS;	 // "fflags"
  case 10:	 // 1 string to match.
    if (memcmp(Name.data()+0, "vcix_state", 10) != 0)
      break;
    return RISCV::VCIX_STATE;	 // "vcix_state"
  }
  return RISCV::NoRegister;
}

static MCRegister MatchRegisterAltName(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 2:	 // 45 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 12 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 2 strings to match.
        return RISCV::X10;	 // "a0"
      case '1':	 // 1 string to match.
        return RISCV::X11;	 // "a1"
      case '2':	 // 2 strings to match.
        return RISCV::X12;	 // "a2"
      case '3':	 // 1 string to match.
        return RISCV::X13;	 // "a3"
      case '4':	 // 2 strings to match.
        return RISCV::X14;	 // "a4"
      case '5':	 // 1 string to match.
        return RISCV::X15;	 // "a5"
      case '6':	 // 2 strings to match.
        return RISCV::X16;	 // "a6"
      case '7':	 // 1 string to match.
        return RISCV::X17;	 // "a7"
      }
      break;
    case 'f':	 // 2 strings to match.
      if (Name[1] != 'p')
        break;
      return RISCV::X8;	 // "fp"
    case 'g':	 // 1 string to match.
      if (Name[1] != 'p')
        break;
      return RISCV::X3;	 // "gp"
    case 'r':	 // 1 string to match.
      if (Name[1] != 'a')
        break;
      return RISCV::X1;	 // "ra"
    case 's':	 // 17 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 2 strings to match.
        return RISCV::X8;	 // "s0"
      case '1':	 // 1 string to match.
        return RISCV::X9;	 // "s1"
      case '2':	 // 2 strings to match.
        return RISCV::X18;	 // "s2"
      case '3':	 // 1 string to match.
        return RISCV::X19;	 // "s3"
      case '4':	 // 2 strings to match.
        return RISCV::X20;	 // "s4"
      case '5':	 // 1 string to match.
        return RISCV::X21;	 // "s5"
      case '6':	 // 2 strings to match.
        return RISCV::X22;	 // "s6"
      case '7':	 // 1 string to match.
        return RISCV::X23;	 // "s7"
      case '8':	 // 2 strings to match.
        return RISCV::X24;	 // "s8"
      case '9':	 // 1 string to match.
        return RISCV::X25;	 // "s9"
      case 'p':	 // 2 strings to match.
        return RISCV::X2;	 // "sp"
      }
      break;
    case 't':	 // 12 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return RISCV::X5;	 // "t0"
      case '1':	 // 2 strings to match.
        return RISCV::X6;	 // "t1"
      case '2':	 // 1 string to match.
        return RISCV::X7;	 // "t2"
      case '3':	 // 2 strings to match.
        return RISCV::X28;	 // "t3"
      case '4':	 // 1 string to match.
        return RISCV::X29;	 // "t4"
      case '5':	 // 2 strings to match.
        return RISCV::X30;	 // "t5"
      case '6':	 // 1 string to match.
        return RISCV::X31;	 // "t6"
      case 'p':	 // 2 strings to match.
        return RISCV::X4;	 // "tp"
      }
      break;
    }
    break;
  case 3:	 // 87 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 84 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 24 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return RISCV::F10_D;	 // "fa0"
        case '1':	 // 3 strings to match.
          return RISCV::F11_D;	 // "fa1"
        case '2':	 // 3 strings to match.
          return RISCV::F12_D;	 // "fa2"
        case '3':	 // 3 strings to match.
          return RISCV::F13_D;	 // "fa3"
        case '4':	 // 3 strings to match.
          return RISCV::F14_D;	 // "fa4"
        case '5':	 // 3 strings to match.
          return RISCV::F15_D;	 // "fa5"
        case '6':	 // 3 strings to match.
          return RISCV::F16_D;	 // "fa6"
        case '7':	 // 3 strings to match.
          return RISCV::F17_D;	 // "fa7"
        }
        break;
      case 's':	 // 30 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return RISCV::F8_D;	 // "fs0"
        case '1':	 // 3 strings to match.
          return RISCV::F9_D;	 // "fs1"
        case '2':	 // 3 strings to match.
          return RISCV::F18_D;	 // "fs2"
        case '3':	 // 3 strings to match.
          return RISCV::F19_D;	 // "fs3"
        case '4':	 // 3 strings to match.
          return RISCV::F20_D;	 // "fs4"
        case '5':	 // 3 strings to match.
          return RISCV::F21_D;	 // "fs5"
        case '6':	 // 3 strings to match.
          return RISCV::F22_D;	 // "fs6"
        case '7':	 // 3 strings to match.
          return RISCV::F23_D;	 // "fs7"
        case '8':	 // 3 strings to match.
          return RISCV::F24_D;	 // "fs8"
        case '9':	 // 3 strings to match.
          return RISCV::F25_D;	 // "fs9"
        }
        break;
      case 't':	 // 30 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return RISCV::F0_D;	 // "ft0"
        case '1':	 // 3 strings to match.
          return RISCV::F1_D;	 // "ft1"
        case '2':	 // 3 strings to match.
          return RISCV::F2_D;	 // "ft2"
        case '3':	 // 3 strings to match.
          return RISCV::F3_D;	 // "ft3"
        case '4':	 // 3 strings to match.
          return RISCV::F4_D;	 // "ft4"
        case '5':	 // 3 strings to match.
          return RISCV::F5_D;	 // "ft5"
        case '6':	 // 3 strings to match.
          return RISCV::F6_D;	 // "ft6"
        case '7':	 // 3 strings to match.
          return RISCV::F7_D;	 // "ft7"
        case '8':	 // 3 strings to match.
          return RISCV::F28_D;	 // "ft8"
        case '9':	 // 3 strings to match.
          return RISCV::F29_D;	 // "ft9"
        }
        break;
      }
      break;
    case 's':	 // 3 strings to match.
      if (Name[1] != '1')
        break;
      switch (Name[2]) {
      default: break;
      case '0':	 // 2 strings to match.
        return RISCV::X26;	 // "s10"
      case '1':	 // 1 string to match.
        return RISCV::X27;	 // "s11"
      }
      break;
    }
    break;
  case 4:	 // 14 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 12 strings to match.
      switch (Name[1]) {
      default: break;
      case 's':	 // 6 strings to match.
        if (Name[2] != '1')
          break;
        switch (Name[3]) {
        default: break;
        case '0':	 // 3 strings to match.
          return RISCV::F26_D;	 // "fs10"
        case '1':	 // 3 strings to match.
          return RISCV::F27_D;	 // "fs11"
        }
        break;
      case 't':	 // 6 strings to match.
        if (Name[2] != '1')
          break;
        switch (Name[3]) {
        default: break;
        case '0':	 // 3 strings to match.
          return RISCV::F30_D;	 // "ft10"
        case '1':	 // 3 strings to match.
          return RISCV::F31_D;	 // "ft11"
        }
        break;
      }
      break;
    case 'z':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ero", 3) != 0)
        break;
      return RISCV::X0;	 // "zero"
    }
    break;
  }
  return RISCV::NoRegister;
}

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_HasStdExtZicbomBit: return "'Zicbom' (Cache-Block Management Instructions)";
  case Feature_HasStdExtZicbopBit: return "'Zicbop' (Cache-Block Prefetch Instructions)";
  case Feature_HasStdExtZicbozBit: return "'Zicboz' (Cache-Block Zero Instructions)";
  case Feature_HasStdExtZicsrBit: return "'Zicsr' (CSRs)";
  case Feature_HasStdExtZicondBit: return "'Zicond' (Integer Conditional Operations)";
  case Feature_HasStdExtZifenceiBit: return "'Zifencei' (fence.i)";
  case Feature_HasStdExtZihintpauseBit: return "'Zihintpause' (Pause Hint)";
  case Feature_HasStdExtZihintntlBit: return "'Zihintntl' (Non-Temporal Locality Hints)";
  case Feature_HasStdExtZimopBit: return "'Zimop' (May-Be-Operations)";
  case Feature_HasStdExtZicfilpBit: return "'Zicfilp' (Landing pad)";
  case Feature_NoStdExtZicfilpBit: return "";
  case Feature_HasStdExtZicfissBit: return "'Zicfiss' (Shadow stack)";
  case Feature_HasStdExtZmmulBit: return "'Zmmul' (Integer Multiplication)";
  case Feature_HasStdExtMBit: return "'M' (Integer Multiplication and Division)";
  case Feature_HasStdExtABit: return "'A' (Atomic Instructions)";
  case Feature_HasStdExtZtsoBit: return "'Ztso' (Memory Model - Total Store Order)";
  case Feature_HasStdExtAOrZaamoBit: return "'A' (Atomic Instructions) or 'Zaamo' (Atomic Memory Operations)";
  case Feature_HasStdExtZabhaBit: return "'Zabha' (Byte and Halfword Atomic Memory Operations)";
  case Feature_HasStdExtZacasBit: return "'Zacas' (Atomic Compare-And-Swap Instructions)";
  case Feature_HasStdExtZalasrBit: return "'Zalasr' (Load-Acquire and Store-Release Instructions)";
  case Feature_HasStdExtAOrZalrscBit: return "'A' (Atomic Instructions) or 'Zalrsc' (Load-Reserved/Store-Conditional)";
  case Feature_HasStdExtZawrsBit: return "'Zawrs' (Wait on Reservation Set)";
  case Feature_HasStdExtFBit: return "'F' (Single-Precision Floating-Point)";
  case Feature_HasStdExtDBit: return "'D' (Double-Precision Floating-Point)";
  case Feature_HasStdExtZfhminBit: return "'Zfh' (Half-Precision Floating-Point) or 'Zfhmin' (Half-Precision Floating-Point Minimal)";
  case Feature_HasStdExtZfhBit: return "'Zfh' (Half-Precision Floating-Point)";
  case Feature_HasStdExtZfbfminBit: return "'Zfbfmin' (Scalar BF16 Converts)";
  case Feature_HasHalfFPLoadStoreMoveBit: return "'Zfh' (Half-Precision Floating-Point) or 'Zfhmin' (Half-Precision Floating-Point Minimal) or 'Zfbfmin' (Scalar BF16 Converts)";
  case Feature_HasStdExtZfaBit: return "'Zfa' (Additional Floating-Point)";
  case Feature_HasStdExtZfinxBit: return "'Zfinx' (Float in Integer)";
  case Feature_HasStdExtZdinxBit: return "'Zdinx' (Double in Integer)";
  case Feature_HasStdExtZhinxminBit: return "'Zhinx' (Half Float in Integer) or 'Zhinxmin' (Half Float in Integer Minimal)";
  case Feature_HasStdExtZhinxBit: return "'Zhinx' (Half Float in Integer)";
  case Feature_HasStdExtCBit: return "'C' (Compressed Instructions)";
  case Feature_HasRVCHintsBit: return "RVC Hint Instructions";
  case Feature_HasStdExtCOrZcaBit: return "'C' (Compressed Instructions) or 'Zca' (part of the C extension, excluding compressed floating point loads/stores)";
  case Feature_HasStdExtZcbBit: return "'Zcb' (Compressed basic bit manipulation instructions)";
  case Feature_HasStdExtCOrZcdBit: return "'C' (Compressed Instructions) or 'Zcd' (Compressed Double-Precision Floating-Point Instructions)";
  case Feature_HasStdExtZcmpBit: return "'Zcmp' (sequenced instructions for code-size reduction)";
  case Feature_HasStdExtZcmtBit: return "'Zcmt' (table jump instructions for code-size reduction)";
  case Feature_HasStdExtCOrZcfOrZceBit: return "'C' (Compressed Instructions) or 'Zcf' (Compressed Single-Precision Floating-Point Instructions)";
  case Feature_HasStdExtZcmopBit: return "'Zcmop' (Compressed May-Be-Operations)";
  case Feature_HasStdExtZbaBit: return "'Zba' (Address Generation Instructions)";
  case Feature_HasStdExtZbbBit: return "'Zbb' (Basic Bit-Manipulation)";
  case Feature_NoStdExtZbbBit: return "";
  case Feature_HasStdExtZbcBit: return "'Zbc' (Carry-Less Multiplication)";
  case Feature_HasStdExtZbsBit: return "'Zbs' (Single-Bit Instructions)";
  case Feature_HasStdExtBBit: return "'B' (the collection of the Zba, Zbb, Zbs extensions)";
  case Feature_HasStdExtZbkbBit: return "'Zbkb' (Bitmanip instructions for Cryptography)";
  case Feature_HasStdExtZbkxBit: return "'Zbkx' (Crossbar permutation instructions)";
  case Feature_HasStdExtZbbOrZbkbBit: return "'Zbb' (Basic Bit-Manipulation) or 'Zbkb' (Bitmanip instructions for Cryptography)";
  case Feature_HasStdExtZbkcBit: return "'Zbkc' (Carry-less multiply instructions for Cryptography)";
  case Feature_HasStdExtZbcOrZbkcBit: return "'Zbc' (Carry-Less Multiplication) or 'Zbkc' (Carry-less multiply instructions for Cryptography)";
  case Feature_HasStdExtZkndBit: return "'Zknd' (NIST Suite: AES Decryption)";
  case Feature_HasStdExtZkneBit: return "'Zkne' (NIST Suite: AES Encryption)";
  case Feature_HasStdExtZkndOrZkneBit: return "'Zknd' (NIST Suite: AES Decryption) or 'Zkne' (NIST Suite: AES Encryption)";
  case Feature_HasStdExtZknhBit: return "'Zknh' (NIST Suite: Hash Function Instructions)";
  case Feature_HasStdExtZksedBit: return "'Zksed' (ShangMi Suite: SM4 Block Cipher Instructions)";
  case Feature_HasStdExtZkshBit: return "'Zksh' (ShangMi Suite: SM3 Hash Function Instructions)";
  case Feature_HasStdExtZkrBit: return "'Zkr' (Entropy Source Extension)";
  case Feature_HasStdExtZvfbfminBit: return "'Zvfbfmin' (Vector BF16 Converts)";
  case Feature_HasStdExtZvfbfwmaBit: return "'Zvfbfwma' (Vector BF16 widening mul-add)";
  case Feature_HasStdExtZfhOrZvfhBit: return "'Zfh' (Half-Precision Floating-Point) or 'Zvfh' (Vector Half-Precision Floating-Point)";
  case Feature_HasStdExtZvkbBit: return "'Zvkb' (Vector Bit-manipulation used in Cryptography)";
  case Feature_HasStdExtZvbbBit: return "'Zvbb' (Vector basic bit-manipulation instructions)";
  case Feature_HasStdExtZvbcBit: return "'Zvbc' (Vector Carryless Multiplication)";
  case Feature_HasStdExtZvkgBit: return "'Zvkg' (Vector GCM instructions for Cryptography)";
  case Feature_HasStdExtZvknedBit: return "'Zvkned' (Vector AES Encryption & Decryption (Single Round))";
  case Feature_HasStdExtZvknhaBit: return "'Zvknha' (Vector SHA-2 (SHA-256 only))";
  case Feature_HasStdExtZvknhbBit: return "'Zvknhb' (Vector SHA-2 (SHA-256 and SHA-512))";
  case Feature_HasStdExtZvknhaOrZvknhbBit: return "'Zvknha' or 'Zvknhb' (Vector SHA-2)";
  case Feature_HasStdExtZvksedBit: return "'Zvksed' (SM4 Block Cipher Instructions)";
  case Feature_HasStdExtZvkshBit: return "'Zvksh' (SM3 Hash Function Instructions)";
  case Feature_HasVInstructionsBit: return "'V' (Vector Extension for Application Processors), 'Zve32x' (Vector Extensions for Embedded Processors)";
  case Feature_HasVInstructionsI64Bit: return "'V' (Vector Extension for Application Processors) or 'Zve64x' (Vector Extensions for Embedded Processors)";
  case Feature_HasVInstructionsAnyFBit: return "'V' (Vector Extension for Application Processors), 'Zve32f' (Vector Extensions for Embedded Processors)";
  case Feature_HasVInstructionsF16MinimalBit: return "'Zvfhmin' (Vector Half-Precision Floating-Point Minimal) or 'Zvfh' (Vector Half-Precision Floating-Point)";
  case Feature_HasStdExtHBit: return "'H' (Hypervisor)";
  case Feature_HasStdExtSvinvalBit: return "'Svinval' (Fine-Grained Address-Translation Cache Invalidation)";
  case Feature_HasVendorXVentanaCondOpsBit: return "'XVentanaCondOps' (Ventana Conditional Ops)";
  case Feature_HasVendorXTHeadBaBit: return "'XTHeadBa' (T-Head address calculation instructions)";
  case Feature_HasVendorXTHeadBbBit: return "'XTHeadBb' (T-Head basic bit-manipulation instructions)";
  case Feature_HasVendorXTHeadBsBit: return "'XTHeadBs' (T-Head single-bit instructions)";
  case Feature_HasVendorXTHeadCondMovBit: return "'XTHeadCondMov' (T-Head conditional move instructions)";
  case Feature_HasVendorXTHeadCmoBit: return "'XTHeadCmo' (T-Head cache management instructions)";
  case Feature_HasVendorXTHeadFMemIdxBit: return "'XTHeadFMemIdx' (T-Head FP Indexed Memory Operations)";
  case Feature_HasVendorXTHeadMacBit: return "'XTHeadMac' (T-Head Multiply-Accumulate Instructions)";
  case Feature_HasVendorXTHeadMemIdxBit: return "'XTHeadMemIdx' (T-Head Indexed Memory Operations)";
  case Feature_HasVendorXTHeadMemPairBit: return "'XTHeadMemPair' (T-Head two-GPR Memory Operations)";
  case Feature_HasVendorXTHeadSyncBit: return "'XTHeadSync' (T-Head multicore synchronization instructions)";
  case Feature_HasVendorXTHeadVdotBit: return "'XTHeadVdot' (T-Head Vector Extensions for Dot)";
  case Feature_HasVendorXSfvcpBit: return "'XSfvcp' (SiFive Custom Vector Coprocessor Interface Instructions)";
  case Feature_HasVendorXSfvqmaccdodBit: return "'XSfvqmaccdod' (SiFive Int8 Matrix Multiplication Instructions (2-by-8 and 8-by-2))";
  case Feature_HasVendorXSfvqmaccqoqBit: return "'XSfvqmaccqoq' (SiFive Int8 Matrix Multiplication Instructions (4-by-8 and 8-by-4))";
  case Feature_HasVendorXSfvfwmaccqqqBit: return "'XSfvfwmaccqqq' (SiFive Matrix Multiply Accumulate Instruction and 4-by-4))";
  case Feature_HasVendorXSfvfnrclipxfqfBit: return "'XSfvfnrclipxfqf' (SiFive FP32-to-int8 Ranged Clip Instructions)";
  case Feature_HasVendorXSiFivecdiscarddloneBit: return "'XSiFivecdiscarddlone' (SiFive sf.cdiscard.d.l1 Instruction)";
  case Feature_HasVendorXSiFivecflushdloneBit: return "'XSiFivecflushdlone' (SiFive sf.cflush.d.l1 Instruction)";
  case Feature_HasVendorXSfceaseBit: return "'XSfcease' (SiFive sf.cease Instruction)";
  case Feature_HasVendorXCVelwBit: return "'XCVelw' (CORE-V Event Load Word)";
  case Feature_HasVendorXCVbitmanipBit: return "'XCVbitmanip' (CORE-V Bit Manipulation)";
  case Feature_HasVendorXCVmacBit: return "'XCVmac' (CORE-V Multiply-Accumulate)";
  case Feature_HasVendorXCVmemBit: return "'XCVmem' (CORE-V Post-incrementing Load & Store)";
  case Feature_HasVendorXCValuBit: return "'XCValu' (CORE-V ALU Operations)";
  case Feature_HasVendorXCVsimdBit: return "'XCVsimd' (CORE-V SIMD ALU)";
  case Feature_HasVendorXCVbiBit: return "'XCVbi' (CORE-V Immediate Branching)";
  case Feature_HasVendorXwchcBit: return "'Xwchc' (WCH/QingKe additional compressed opcodes)";
  case Feature_IsRV64Bit: return "RV64I Base Instruction Set";
  case Feature_IsRV32Bit: return "RV32I Base Instruction Set";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

static void applyMnemonicAliases(StringRef &Mnemonic, const FeatureBitset &Features, unsigned VariantID) {
  switch (VariantID) {
  case 0:
      switch (Mnemonic.size()) {
      default: break;
      case 4:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "move", 4) != 0)
          break;
        Mnemonic = "mv";	 // "move"
        return;
      case 5:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "scall", 5) != 0)
          break;
        Mnemonic = "ecall";	 // "scall"
        return;
      case 6:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "sbreak", 6) != 0)
          break;
        Mnemonic = "ebreak";	 // "sbreak"
        return;
      case 7:	 // 2 strings to match.
        if (memcmp(Mnemonic.data()+0, "fmv.", 4) != 0)
          break;
        switch (Mnemonic[4]) {
        default: break;
        case 's':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+5, ".x", 2) != 0)
            break;
          if (Features.test(Feature_HasStdExtFBit))	 // "fmv.s.x"
            Mnemonic = "fmv.w.x";
          return;
        case 'x':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+5, ".s", 2) != 0)
            break;
          if (Features.test(Feature_HasStdExtFBit))	 // "fmv.x.s"
            Mnemonic = "fmv.x.w";
          return;
        }
        break;
      }
    break;
  }
  switch (Mnemonic.size()) {
  default: break;
  case 4:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "move", 4) != 0)
      break;
    Mnemonic = "mv";	 // "move"
    return;
  case 5:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "scall", 5) != 0)
      break;
    Mnemonic = "ecall";	 // "scall"
    return;
  case 6:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "sbreak", 6) != 0)
      break;
    Mnemonic = "ebreak";	 // "sbreak"
    return;
  case 7:	 // 2 strings to match.
    if (memcmp(Mnemonic.data()+0, "fmv.", 4) != 0)
      break;
    switch (Mnemonic[4]) {
    default: break;
    case 's':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+5, ".x", 2) != 0)
        break;
      if (Features.test(Feature_HasStdExtFBit))	 // "fmv.s.x"
        Mnemonic = "fmv.w.x";
      return;
    case 'x':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+5, ".s", 2) != 0)
        break;
      if (Features.test(Feature_HasStdExtFBit))	 // "fmv.x.s"
        Mnemonic = "fmv.x.w";
      return;
    }
    break;
  }
}

enum {
  Tie0_1_1,
  Tie0_2_2,
  Tie0_3_3,
  Tie1_3_3,
};

static const uint8_t TiedAsmOperandTable[][3] = {
  /* Tie0_1_1 */ { 0, 1, 1 },
  /* Tie0_2_2 */ { 0, 2, 2 },
  /* Tie0_3_3 */ { 0, 3, 3 },
  /* Tie1_3_3 */ { 1, 3, 3 },
};

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addImmOperands,
  CVT_95_addRegOperands,
  CVT_imm_95_0,
  CVT_95_Reg,
  CVT_regX0,
  CVT_regX5,
  CVT_regX2,
  CVT_regX3,
  CVT_regX4,
  CVT_95_addRlistOperands,
  CVT_95_addSpimmOperands,
  CVT_95_addCSRSystemRegisterOperands,
  CVT_95_addRegRegOperands,
  CVT_95_addFRMArgOperands_95_defaultFRMArgOp,
  CVT_95_addFRMArgOperands_95_defaultFRMArgLegacyOp,
  CVT_95_addFRMArgOperands,
  CVT_imm_95_15,
  CVT_95_addFenceArgOperands,
  CVT_95_addFPImmOperands,
  CVT_imm_95_3,
  CVT_imm_95_1,
  CVT_imm_95_2,
  CVT_regX1,
  CVT_imm_95__MINUS_1,
  CVT_imm_95_3072,
  CVT_imm_95_3200,
  CVT_imm_95_3074,
  CVT_imm_95_3202,
  CVT_imm_95_3073,
  CVT_imm_95_3201,
  CVT_95_addRegOperands_95_defaultMaskRegOp,
  CVT_reg0,
  CVT_95_addVTypeIOperands,
  CVT_imm_95_255,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__InsnDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_2__AnyRegOperand1_3__SImm13Lsb01_4,
  Convert__AnyRegCOperand1_3__InsnCDirectiveOpcode1_0__UImm61_1__UImm21_2__AnyRegCOperand1_4,
  Convert__InsnCDirectiveOpcode1_0__UImm31_1__AnyRegCOperand1_2__SImm9Lsb01_3,
  Convert__AnyRegOperand1_2__InsnCDirectiveOpcode1_0__UImm31_1__SImm61_3,
  Convert__AnyRegCOperand1_2__InsnCDirectiveOpcode1_0__UImm31_1__UImm81_3,
  Convert__InsnCDirectiveOpcode1_0__UImm31_1__SImm12Lsb01_2,
  Convert__AnyRegCOperand1_2__InsnCDirectiveOpcode1_0__UImm31_1__AnyRegCOperand1_4__imm_95_0,
  Convert__AnyRegCOperand1_2__InsnCDirectiveOpcode1_0__UImm31_1__AnyRegCOperand1_5__UImm51_3,
  Convert__AnyRegOperand1_2__InsnCDirectiveOpcode1_0__UImm41_1__AnyRegOperand1_3,
  Convert__InsnCDirectiveOpcode1_0__UImm31_1__AnyRegCOperand1_2__AnyRegCOperand1_4__imm_95_0,
  Convert__InsnCDirectiveOpcode1_0__UImm31_1__AnyRegCOperand1_2__AnyRegCOperand1_5__UImm51_3,
  Convert__InsnCDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_2__UImm61_3,
  Convert__AnyRegOperand1_2__InsnDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_3__SImm121_4,
  Convert__AnyRegOperand1_2__InsnDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_4__imm_95_0,
  Convert__AnyRegOperand1_2__InsnDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_5__SImm121_3,
  Convert__AnyRegOperand1_1__InsnDirectiveOpcode1_0__SImm21Lsb0JAL1_2,
  Convert__AnyRegOperand1_3__InsnDirectiveOpcode1_0__UImm31_1__UImm71_2__AnyRegOperand1_4__AnyRegOperand1_5,
  Convert__AnyRegOperand1_3__InsnDirectiveOpcode1_0__UImm31_1__UImm21_2__AnyRegOperand1_4__AnyRegOperand1_5__AnyRegOperand1_6,
  Convert__InsnDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_2__AnyRegOperand1_4__imm_95_0,
  Convert__InsnDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_2__AnyRegOperand1_5__SImm121_3,
  Convert__AnyRegOperand1_1__InsnDirectiveOpcode1_0__UImm20LUI1_2,
  Convert__Reg1_0__Reg1_1__Reg1_2,
  Convert__Reg1_0__Reg1_1__SImm121_2,
  Convert__Reg1_0__Reg1_1__Reg1_2__TPRelAddSymbol1_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3,
  Convert__Reg1_0__Reg1_1,
  Convert__Reg1_0__Reg1_1__RnumArg1_2,
  Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1,
  Convert__Reg1_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__Reg1_1,
  Convert__GPRPairRV321_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__GPRPairRV321_1,
  Convert__GPRPairRV641_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__GPRPairRV641_1,
  Convert__Reg1_0__UImm20AUIPC1_1,
  Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2,
  Convert__Reg1_0__Reg1_1__SImm13Lsb01_2,
  Convert__Reg1_0__regX0__SImm13Lsb01_1,
  Convert__Reg1_1__Reg1_0__SImm13Lsb01_2,
  Convert__regX0__Reg1_0__SImm13Lsb01_1,
  Convert__Reg1_0__Tie0_1_1__Reg1_1,
  Convert__Reg1_0__Tie0_1_1__ImmZero1_1,
  Convert__SImm6NonZero1_1,
  Convert__Reg1_0__Tie0_1_1__SImm6NonZero1_1,
  Convert__Reg1_0__Tie0_1_1__SImm10Lsb0000NonZero1_1,
  Convert__Reg1_0__Reg1_1__UImm10Lsb00NonZero1_2,
  Convert__Reg1_0__Tie0_1_1__SImm61_1,
  Convert__Reg1_0__SImm9Lsb01_1,
  Convert_NoOperands,
  Convert__Reg1_0__Reg1_2__imm_95_0,
  Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1,
  Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1,
  Convert__Reg1_0__Reg1_3__UImm7Lsb001_1,
  Convert__Reg1_0__Reg1_3__UImm8Lsb001_1,
  Convert__SImm12Lsb01_0,
  Convert__Reg1_0,
  Convert__Reg1_0__Reg1_3__UImm21_1,
  Convert__Reg1_0__Reg1_3__UImm2Lsb01_1,
  Convert__Reg1_0__SImm61_1,
  Convert__Reg1_0__CLUIImm1_1,
  Convert__SImm6NonZero1_0,
  Convert__Reg1_0__Tie0_1_1,
  Convert__regX0__Tie0_1_1__regX5,
  Convert__regX0__Tie0_1_1__regX2,
  Convert__regX0__Tie0_1_1__regX3,
  Convert__regX0__Tie0_1_1__regX4,
  Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1,
  Convert__CallSymbol1_0,
  Convert__Reg1_0__CallSymbol1_1,
  Convert__ZeroOffsetMemOpOperand1_0,
  Convert__UImm8GE321_0,
  Convert__UImm51_0,
  Convert__Rlist1_0__StackAdj1_1,
  Convert__Rlist1_0__NegStackAdj1_1,
  Convert__regX0__CSRSystemRegister1_0__Reg1_1,
  Convert__regX0__CSRSystemRegister1_0__UImm51_1,
  Convert__Reg1_0__CSRSystemRegister1_1__regX0,
  Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2,
  Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2,
  Convert__Reg1_0__Reg1_1__SImm61_2,
  Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3,
  Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2,
  Convert__Reg1_0__Reg1_1__UImm61_2,
  Convert__Reg1_0__Reg1_1__UImm51_2__UImm51_3,
  Convert__Reg1_0__SImm51_1__SImm13Lsb01_2,
  Convert__Reg1_0__Reg1_1__UImm21_2__UImm51_3,
  Convert__Reg1_0__Reg1_1__UImm51_2,
  Convert__Reg1_0__Reg1_3__SImm121_1,
  Convert__Reg1_0__Tie0_1_1__Reg1_1__UImm51_2__UImm51_3,
  Convert__Reg1_0__Tie0_1_1__Reg1_1__UImm61_2,
  Convert__Reg1_0__RegReg2_1,
  Convert__Reg1_0__Reg1_2__Tie1_3_3__Reg1_4,
  Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm121_4,
  Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__UImm51_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0,
  Convert__Reg1_2__Reg1_0__Tie0_3_3__Reg1_4,
  Convert__Reg1_2__Reg1_0__Tie0_3_3__SImm121_4,
  Convert__Reg1_0__Tie0_1_1__Reg1_1__SImm61_2,
  Convert__Reg1_0__Reg1_1__UImm31_2,
  Convert__Reg1_0__Reg1_1__UImm41_2,
  Convert__imm_95_0__imm_95_0,
  Convert__Reg1_0__Reg1_1__Reg1_1,
  Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_1,
  Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_1,
  Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_1,
  Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3,
  Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__FRMArg1_3,
  Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2__FRMArg1_3,
  Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3,
  Convert__Reg1_0__GPRF64AsFPR1_1,
  Convert__Reg1_0__GPRPairAsFPR1_1,
  Convert__Reg1_0__GPRAsFPR1_1,
  Convert__Reg1_0__Reg1_1__FRMArg1_2,
  Convert__Reg1_0__Reg1_1__FRMArgLegacy1_2,
  Convert__GPRF64AsFPR1_0__GPRAsFPR1_1__FRMArgLegacy1_2,
  Convert__GPRPairAsFPR1_0__GPRAsFPR1_1__FRMArgLegacy1_2,
  Convert__GPRF64AsFPR1_0__Reg1_1__FRMArg1_2,
  Convert__GPRF64AsFPR1_0__Reg1_1__FRMArgLegacy1_2,
  Convert__GPRPairAsFPR1_0__Reg1_1__FRMArgLegacy1_2,
  Convert__GPRAsFPR1_0__GPRF64AsFPR1_1__FRMArg1_2,
  Convert__GPRAsFPR1_0__GPRPairAsFPR1_1__FRMArg1_2,
  Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2,
  Convert__GPRAsFPR1_0__GPRAsFPR1_1__FRMArg1_2,
  Convert__Reg1_0__GPRF64AsFPR1_1__FRMArg1_2,
  Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2,
  Convert__GPRAsFPR1_0__GPRAsFPR1_1__FRMArgLegacy1_2,
  Convert__Reg1_0__GPRPairAsFPR1_1__FRMArg1_2,
  Convert__Reg1_0__Reg1_1__RTZArg1_2,
  Convert__imm_95_15__imm_95_15,
  Convert__FenceArg1_0__FenceArg1_1,
  Convert__Reg1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2,
  Convert__Reg1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2,
  Convert__Reg1_0__GPRAsFPR1_1__GPRAsFPR1_2,
  Convert__Reg1_0__Reg1_2__Reg1_1,
  Convert__Reg1_0__GPRF64AsFPR1_2__GPRF64AsFPR1_1,
  Convert__Reg1_0__GPRPairAsFPR1_2__GPRPairAsFPR1_1,
  Convert__Reg1_0__GPRAsFPR1_2__GPRAsFPR1_1,
  Convert__Reg1_2__Reg1_0__BareSymbol1_1,
  Convert__Reg1_0__LoadFPImm1_1,
  Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4,
  Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__GPRF64AsFPR1_3__FRMArg1_4,
  Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2__GPRPairAsFPR1_3__FRMArg1_4,
  Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4,
  Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2,
  Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2,
  Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2,
  Convert__Reg1_0__imm_95_3__regX0,
  Convert__Reg1_0__imm_95_1__regX0,
  Convert__Reg1_0__imm_95_2__regX0,
  Convert__regX0__imm_95_3__Reg1_0,
  Convert__Reg1_0__imm_95_3__Reg1_1,
  Convert__regX0__imm_95_1__Reg1_0,
  Convert__Reg1_0__imm_95_1__Reg1_1,
  Convert__regX0__imm_95_1__UImm51_0,
  Convert__Reg1_0__imm_95_1__UImm51_1,
  Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__FRMArg1_2,
  Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__FRMArg1_2,
  Convert__regX0__imm_95_2__Reg1_0,
  Convert__Reg1_0__imm_95_2__Reg1_1,
  Convert__regX0__imm_95_2__UImm51_0,
  Convert__Reg1_0__imm_95_2__UImm51_1,
  Convert__regX0__regX0,
  Convert__Reg1_0__regX0,
  Convert__Reg1_0__ZeroOffsetMemOpOperand1_1,
  Convert__regX0__SImm21Lsb0JAL1_0,
  Convert__regX1__SImm21Lsb0JAL1_0,
  Convert__Reg1_0__SImm21Lsb0JAL1_1,
  Convert__regX1__Reg1_0__imm_95_0,
  Convert__Reg1_0__Reg1_1__imm_95_0,
  Convert__regX1__Reg1_0__SImm121_1,
  Convert__regX1__Reg1_1__imm_95_0,
  Convert__regX1__Reg1_2__SImm121_0,
  Convert__Reg1_0__Reg1_3__SImm121_1__TLSDESCCallSymbol1_5,
  Convert__regX0__Reg1_0__imm_95_0,
  Convert__regX0__Reg1_0__SImm121_1,
  Convert__regX0__Reg1_1__imm_95_0,
  Convert__regX0__Reg1_2__SImm121_0,
  Convert__Reg1_1__PseudoJumpSymbol1_0,
  Convert__Reg1_0__BareSymbol1_1,
  Convert__Reg1_0__ImmXLenLI_Restricted1_1,
  Convert__Reg1_0__regX0__SImm121_1,
  Convert__Reg1_0__ImmXLenLI1_1,
  Convert__regX0__UImm201_0,
  Convert__Reg1_0__UImm20LUI1_1,
  Convert__Reg1_0__regX0__Reg1_1,
  Convert__regX0__regX0__imm_95_0,
  Convert__Reg1_0__Reg1_1__imm_95__MINUS_1,
  Convert__regX0__regX0__regX5,
  Convert__regX0__regX0__regX2,
  Convert__regX0__regX0__regX3,
  Convert__regX0__regX0__regX4,
  Convert__imm_95_1__imm_95_0,
  Convert__Reg1_2__SImm12Lsb000001_0,
  Convert__Reg1_0__Reg1_3__UImm51_1,
  Convert__Reg1_0__Reg1_3__UImm41_1,
  Convert__Reg1_0__Reg1_3__UImm6Lsb01_1,
  Convert__Reg1_0__Reg1_3__UImm5Lsb01_1,
  Convert__Reg1_0__imm_95_3072__regX0,
  Convert__Reg1_0__imm_95_3200__regX0,
  Convert__Reg1_0__imm_95_3074__regX0,
  Convert__Reg1_0__imm_95_3202__regX0,
  Convert__Reg1_0__imm_95_3073__regX0,
  Convert__Reg1_0__imm_95_3201__regX0,
  Convert__regX0__regX1__imm_95_0,
  Convert__ZeroOffsetMemOpOperand1_1__Reg1_0,
  Convert__Reg1_0__Reg1_1__imm_95_1,
  Convert__regX0,
  Convert__UImm11_0__UImm51_1__Reg1_2__Reg1_3,
  Convert__UImm11_0__Reg1_1__Reg1_2__Reg1_3,
  Convert__UImm21_0__UImm51_1__UImm51_2__SImm51_3,
  Convert__UImm21_0__UImm51_1__Reg1_2__SImm51_3,
  Convert__UImm21_0__Reg1_1__Reg1_2__SImm51_3,
  Convert__Reg1_1__UImm11_0__Reg1_2__Reg1_3,
  Convert__Reg1_1__UImm11_0__Tie0_2_2__Reg1_2__Reg1_3,
  Convert__Reg1_2__UImm21_0__UImm51_1__SImm51_3,
  Convert__Reg1_1__UImm21_0__Reg1_2__SImm51_3,
  Convert__Reg1_1__UImm21_0__Tie0_2_2__Reg1_2__SImm51_3,
  Convert__Reg1_1__UImm21_0__Reg1_2__Reg1_3,
  Convert__Reg1_1__UImm21_0__Tie0_2_2__Reg1_2__Reg1_3,
  Convert__Reg1_2__UImm21_0__UImm51_1__Reg1_3,
  Convert__UImm21_0__UImm51_1__Reg1_2__Reg1_3,
  Convert__UImm21_0__Reg1_1__Reg1_2__Reg1_3,
  Convert__UImm21_0__UImm51_1__UImm51_2__Reg1_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__Reg1_1__regX0,
  Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2__UImmLog2XLen1_3,
  Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm51_4__UImm21_5,
  Convert__Reg1_0__Reg1_1__Reg1_3__UImm21_5__UImm71_6,
  Convert__Reg1_2__Reg1_0__Tie0_3_3__SImm51_4__UImm21_5,
  Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__Reg1_1__SImm51_2__imm_95_0,
  Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__Tie0_1_1__Reg1_1__UImm51_2,
  Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2,
  Convert__Reg1_0__Reg1_1__Reg1_1__reg0,
  Convert__Reg1_0__Reg1_1__Reg1_1__RVVMaskRegOpOperand1_2,
  Convert__Reg1_0__RVVMaskRegOpOperand1_1,
  Convert__Reg1_0__Reg1_2,
  Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2,
  Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__Reg1_1__SImm51_2,
  Convert__Reg1_0__Reg1_0__Reg1_0,
  Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__Reg1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__Reg1_4__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__SImm51_1,
  Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__Reg1_1__regX0__reg0,
  Convert__Reg1_0__Reg1_1__regX0__RVVMaskRegOpOperand1_2,
  Convert__Reg1_0__Reg1_1__imm_95__MINUS_1__reg0,
  Convert__Reg1_0__Reg1_1__imm_95__MINUS_1__RVVMaskRegOpOperand1_2,
  Convert__Reg1_0__Reg1_1__UImm61_2__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__UImm51_1__VTypeI101_2,
  Convert__Reg1_0__Reg1_1__VTypeI111_2,
  Convert__Reg1_0__Reg1_1__imm_95_255,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][15] = {
  // Convert__InsnDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_2__AnyRegOperand1_3__SImm13Lsb01_4
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__AnyRegCOperand1_3__InsnCDirectiveOpcode1_0__UImm61_1__UImm21_2__AnyRegCOperand1_4
  { CVT_95_addRegOperands, 4, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addRegOperands, 5, CVT_Done },
  // Convert__InsnCDirectiveOpcode1_0__UImm31_1__AnyRegCOperand1_2__SImm9Lsb01_3
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__AnyRegOperand1_2__InsnCDirectiveOpcode1_0__UImm31_1__SImm61_3
  { CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__AnyRegCOperand1_2__InsnCDirectiveOpcode1_0__UImm31_1__UImm81_3
  { CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__InsnCDirectiveOpcode1_0__UImm31_1__SImm12Lsb01_2
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__AnyRegCOperand1_2__InsnCDirectiveOpcode1_0__UImm31_1__AnyRegCOperand1_4__imm_95_0
  { CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 5, CVT_imm_95_0, 0, CVT_Done },
  // Convert__AnyRegCOperand1_2__InsnCDirectiveOpcode1_0__UImm31_1__AnyRegCOperand1_5__UImm51_3
  { CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 6, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__AnyRegOperand1_2__InsnCDirectiveOpcode1_0__UImm41_1__AnyRegOperand1_3
  { CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 4, CVT_Done },
  // Convert__InsnCDirectiveOpcode1_0__UImm31_1__AnyRegCOperand1_2__AnyRegCOperand1_4__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 5, CVT_imm_95_0, 0, CVT_Done },
  // Convert__InsnCDirectiveOpcode1_0__UImm31_1__AnyRegCOperand1_2__AnyRegCOperand1_5__UImm51_3
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 6, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__InsnCDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_2__UImm61_3
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__AnyRegOperand1_2__InsnDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_3__SImm121_4
  { CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__AnyRegOperand1_2__InsnDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_4__imm_95_0
  { CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 5, CVT_imm_95_0, 0, CVT_Done },
  // Convert__AnyRegOperand1_2__InsnDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_5__SImm121_3
  { CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 6, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__AnyRegOperand1_1__InsnDirectiveOpcode1_0__SImm21Lsb0JAL1_2
  { CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__AnyRegOperand1_3__InsnDirectiveOpcode1_0__UImm31_1__UImm71_2__AnyRegOperand1_4__AnyRegOperand1_5
  { CVT_95_addRegOperands, 4, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addRegOperands, 5, CVT_95_addRegOperands, 6, CVT_Done },
  // Convert__AnyRegOperand1_3__InsnDirectiveOpcode1_0__UImm31_1__UImm21_2__AnyRegOperand1_4__AnyRegOperand1_5__AnyRegOperand1_6
  { CVT_95_addRegOperands, 4, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addRegOperands, 5, CVT_95_addRegOperands, 6, CVT_95_addRegOperands, 7, CVT_Done },
  // Convert__InsnDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_2__AnyRegOperand1_4__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 5, CVT_imm_95_0, 0, CVT_Done },
  // Convert__InsnDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_2__AnyRegOperand1_5__SImm121_3
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 6, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__AnyRegOperand1_1__InsnDirectiveOpcode1_0__UImm20LUI1_2
  { CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm121_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__TPRelAddSymbol1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__RnumArg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 3, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__Reg1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 3, CVT_95_Reg, 2, CVT_Done },
  // Convert__GPRPairRV321_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__GPRPairRV321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GPRPairRV641_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__GPRPairRV641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__UImm20AUIPC1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm13Lsb01_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__regX0__SImm13Lsb01_1
  { CVT_95_Reg, 1, CVT_regX0, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_1__Reg1_0__SImm13Lsb01_2
  { CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__regX0__Reg1_0__SImm13Lsb01_1
  { CVT_regX0, 0, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__Reg1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__ImmZero1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__SImm6NonZero1_1
  { CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__SImm6NonZero1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__SImm10Lsb0000NonZero1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm10Lsb00NonZero1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__SImm61_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__SImm9Lsb01_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_0
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm7Lsb001_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm8Lsb001_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__SImm12Lsb01_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm21_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm2Lsb01_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__SImm61_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__CLUIImm1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__SImm6NonZero1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__regX0__Tie0_1_1__regX5
  { CVT_regX0, 0, CVT_Tied, Tie0_1_1, CVT_regX5, 0, CVT_Done },
  // Convert__regX0__Tie0_1_1__regX2
  { CVT_regX0, 0, CVT_Tied, Tie0_1_1, CVT_regX2, 0, CVT_Done },
  // Convert__regX0__Tie0_1_1__regX3
  { CVT_regX0, 0, CVT_Tied, Tie0_1_1, CVT_regX3, 0, CVT_Done },
  // Convert__regX0__Tie0_1_1__regX4
  { CVT_regX0, 0, CVT_Tied, Tie0_1_1, CVT_regX4, 0, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__CallSymbol1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__CallSymbol1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__ZeroOffsetMemOpOperand1_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__UImm8GE321_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__UImm51_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Rlist1_0__StackAdj1_1
  { CVT_95_addRlistOperands, 1, CVT_95_addSpimmOperands, 2, CVT_Done },
  // Convert__Rlist1_0__NegStackAdj1_1
  { CVT_95_addRlistOperands, 1, CVT_95_addSpimmOperands, 2, CVT_Done },
  // Convert__regX0__CSRSystemRegister1_0__Reg1_1
  { CVT_regX0, 0, CVT_95_addCSRSystemRegisterOperands, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__CSRSystemRegister1_0__UImm51_1
  { CVT_regX0, 0, CVT_95_addCSRSystemRegisterOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__CSRSystemRegister1_1__regX0
  { CVT_95_Reg, 1, CVT_95_addCSRSystemRegisterOperands, 2, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_addCSRSystemRegisterOperands, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2
  { CVT_95_Reg, 1, CVT_95_addCSRSystemRegisterOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm61_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm61_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm51_2__UImm51_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__SImm51_1__SImm13Lsb01_2
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm21_2__UImm51_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm51_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_3__SImm121_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__Reg1_1__UImm51_2__UImm51_3
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__Reg1_1__UImm61_2
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__RegReg2_1
  { CVT_95_Reg, 1, CVT_95_addRegRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Tie1_3_3__Reg1_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_Tied, Tie1_3_3, CVT_95_Reg, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm121_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_Tied, Tie1_3_3, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__UImm51_3
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Tie0_3_3__Reg1_4
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_Tied, Tie0_3_3, CVT_95_Reg, 5, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Tie0_3_3__SImm121_4
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_Tied, Tie0_3_3, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__Reg1_1__SImm61_2
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm31_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm41_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__imm_95_0__imm_95_0
  { CVT_imm_95_0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 2, CVT_Done },
  // Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addFRMArgOperands_95_defaultFRMArgOp, 4, CVT_Done },
  // Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__FRMArg1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addFRMArgOperands_95_defaultFRMArgOp, 4, CVT_Done },
  // Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2__FRMArg1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addFRMArgOperands_95_defaultFRMArgOp, 4, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addFRMArgOperands_95_defaultFRMArgOp, 4, CVT_Done },
  // Convert__Reg1_0__GPRF64AsFPR1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__GPRPairAsFPR1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__GPRAsFPR1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__FRMArg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addFRMArgOperands_95_defaultFRMArgOp, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__FRMArgLegacy1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addFRMArgOperands_95_defaultFRMArgLegacyOp, 3, CVT_Done },
  // Convert__GPRF64AsFPR1_0__GPRAsFPR1_1__FRMArgLegacy1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addFRMArgOperands_95_defaultFRMArgLegacyOp, 3, CVT_Done },
  // Convert__GPRPairAsFPR1_0__GPRAsFPR1_1__FRMArgLegacy1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addFRMArgOperands_95_defaultFRMArgLegacyOp, 3, CVT_Done },
  // Convert__GPRF64AsFPR1_0__Reg1_1__FRMArg1_2
  { CVT_95_addRegOperands, 1, CVT_95_Reg, 2, CVT_95_addFRMArgOperands_95_defaultFRMArgOp, 3, CVT_Done },
  // Convert__GPRF64AsFPR1_0__Reg1_1__FRMArgLegacy1_2
  { CVT_95_addRegOperands, 1, CVT_95_Reg, 2, CVT_95_addFRMArgOperands_95_defaultFRMArgLegacyOp, 3, CVT_Done },
  // Convert__GPRPairAsFPR1_0__Reg1_1__FRMArgLegacy1_2
  { CVT_95_addRegOperands, 1, CVT_95_Reg, 2, CVT_95_addFRMArgOperands_95_defaultFRMArgLegacyOp, 3, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRF64AsFPR1_1__FRMArg1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addFRMArgOperands_95_defaultFRMArgOp, 3, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRPairAsFPR1_1__FRMArg1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addFRMArgOperands_95_defaultFRMArgOp, 3, CVT_Done },
  // Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2
  { CVT_95_addRegOperands, 1, CVT_95_Reg, 2, CVT_95_addFRMArgOperands_95_defaultFRMArgOp, 3, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRAsFPR1_1__FRMArg1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addFRMArgOperands_95_defaultFRMArgOp, 3, CVT_Done },
  // Convert__Reg1_0__GPRF64AsFPR1_1__FRMArg1_2
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_95_addFRMArgOperands_95_defaultFRMArgOp, 3, CVT_Done },
  // Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_95_addFRMArgOperands_95_defaultFRMArgOp, 3, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRAsFPR1_1__FRMArgLegacy1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addFRMArgOperands_95_defaultFRMArgLegacyOp, 3, CVT_Done },
  // Convert__Reg1_0__GPRPairAsFPR1_1__FRMArg1_2
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_95_addFRMArgOperands_95_defaultFRMArgOp, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__RTZArg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addFRMArgOperands, 3, CVT_Done },
  // Convert__imm_95_15__imm_95_15
  { CVT_imm_95_15, 0, CVT_imm_95_15, 0, CVT_Done },
  // Convert__FenceArg1_0__FenceArg1_1
  { CVT_95_addFenceArgOperands, 1, CVT_95_addFenceArgOperands, 2, CVT_Done },
  // Convert__Reg1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__Reg1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__Reg1_0__GPRAsFPR1_1__GPRAsFPR1_2
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__GPRF64AsFPR1_2__GPRF64AsFPR1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__GPRPairAsFPR1_2__GPRPairAsFPR1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__GPRAsFPR1_2__GPRAsFPR1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_0__BareSymbol1_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__LoadFPImm1_1
  { CVT_95_Reg, 1, CVT_95_addFPImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_addFRMArgOperands_95_defaultFRMArgOp, 5, CVT_Done },
  // Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__GPRF64AsFPR1_3__FRMArg1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addFRMArgOperands_95_defaultFRMArgOp, 5, CVT_Done },
  // Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2__GPRPairAsFPR1_3__FRMArg1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addFRMArgOperands_95_defaultFRMArgOp, 5, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addFRMArgOperands_95_defaultFRMArgOp, 5, CVT_Done },
  // Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__Reg1_0__imm_95_3__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_1__regX0
  { CVT_95_Reg, 1, CVT_imm_95_1, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_2__regX0
  { CVT_95_Reg, 1, CVT_imm_95_2, 0, CVT_regX0, 0, CVT_Done },
  // Convert__regX0__imm_95_3__Reg1_0
  { CVT_regX0, 0, CVT_imm_95_3, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_3__Reg1_1
  { CVT_95_Reg, 1, CVT_imm_95_3, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__imm_95_1__Reg1_0
  { CVT_regX0, 0, CVT_imm_95_1, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_1__Reg1_1
  { CVT_95_Reg, 1, CVT_imm_95_1, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__imm_95_1__UImm51_0
  { CVT_regX0, 0, CVT_imm_95_1, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_1__UImm51_1
  { CVT_95_Reg, 1, CVT_imm_95_1, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__FRMArg1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addFRMArgOperands_95_defaultFRMArgOp, 3, CVT_Done },
  // Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__FRMArg1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addFRMArgOperands_95_defaultFRMArgOp, 3, CVT_Done },
  // Convert__regX0__imm_95_2__Reg1_0
  { CVT_regX0, 0, CVT_imm_95_2, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_2__Reg1_1
  { CVT_95_Reg, 1, CVT_imm_95_2, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__imm_95_2__UImm51_0
  { CVT_regX0, 0, CVT_imm_95_2, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_2__UImm51_1
  { CVT_95_Reg, 1, CVT_imm_95_2, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regX0__regX0
  { CVT_regX0, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__regX0
  { CVT_95_Reg, 1, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__ZeroOffsetMemOpOperand1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__regX0__SImm21Lsb0JAL1_0
  { CVT_regX0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regX1__SImm21Lsb0JAL1_0
  { CVT_regX1, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__SImm21Lsb0JAL1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regX1__Reg1_0__imm_95_0
  { CVT_regX1, 0, CVT_95_Reg, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regX1__Reg1_0__SImm121_1
  { CVT_regX1, 0, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regX1__Reg1_1__imm_95_0
  { CVT_regX1, 0, CVT_95_Reg, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regX1__Reg1_2__SImm121_0
  { CVT_regX1, 0, CVT_95_Reg, 3, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_3__SImm121_1__TLSDESCCallSymbol1_5
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__regX0__Reg1_0__imm_95_0
  { CVT_regX0, 0, CVT_95_Reg, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regX0__Reg1_0__SImm121_1
  { CVT_regX0, 0, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regX0__Reg1_1__imm_95_0
  { CVT_regX0, 0, CVT_95_Reg, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regX0__Reg1_2__SImm121_0
  { CVT_regX0, 0, CVT_95_Reg, 3, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_1__PseudoJumpSymbol1_0
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__BareSymbol1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__ImmXLenLI_Restricted1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__regX0__SImm121_1
  { CVT_95_Reg, 1, CVT_regX0, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__ImmXLenLI1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regX0__UImm201_0
  { CVT_regX0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__UImm20LUI1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__regX0__Reg1_1
  { CVT_95_Reg, 1, CVT_regX0, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__regX0__imm_95_0
  { CVT_regX0, 0, CVT_regX0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95__MINUS_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95__MINUS_1, 0, CVT_Done },
  // Convert__regX0__regX0__regX5
  { CVT_regX0, 0, CVT_regX0, 0, CVT_regX5, 0, CVT_Done },
  // Convert__regX0__regX0__regX2
  { CVT_regX0, 0, CVT_regX0, 0, CVT_regX2, 0, CVT_Done },
  // Convert__regX0__regX0__regX3
  { CVT_regX0, 0, CVT_regX0, 0, CVT_regX3, 0, CVT_Done },
  // Convert__regX0__regX0__regX4
  { CVT_regX0, 0, CVT_regX0, 0, CVT_regX4, 0, CVT_Done },
  // Convert__imm_95_1__imm_95_0
  { CVT_imm_95_1, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__SImm12Lsb000001_0
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm51_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm41_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm6Lsb01_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm5Lsb01_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__imm_95_3072__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3072, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3200__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3200, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3074__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3074, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3202__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3202, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3073__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3073, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3201__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3201, 0, CVT_regX0, 0, CVT_Done },
  // Convert__regX0__regX1__imm_95_0
  { CVT_regX0, 0, CVT_regX1, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__ZeroOffsetMemOpOperand1_1__Reg1_0
  { CVT_95_addRegOperands, 2, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__regX0
  { CVT_regX0, 0, CVT_Done },
  // Convert__UImm11_0__UImm51_1__Reg1_2__Reg1_3
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_Done },
  // Convert__UImm11_0__Reg1_1__Reg1_2__Reg1_3
  { CVT_95_addImmOperands, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_Done },
  // Convert__UImm21_0__UImm51_1__UImm51_2__SImm51_3
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__UImm21_0__UImm51_1__Reg1_2__SImm51_3
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__UImm21_0__Reg1_1__Reg1_2__SImm51_3
  { CVT_95_addImmOperands, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_1__UImm11_0__Reg1_2__Reg1_3
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_Done },
  // Convert__Reg1_1__UImm11_0__Tie0_2_2__Reg1_2__Reg1_3
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_Tied, Tie0_2_2, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_Done },
  // Convert__Reg1_2__UImm21_0__UImm51_1__SImm51_3
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_1__UImm21_0__Reg1_2__SImm51_3
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_1__UImm21_0__Tie0_2_2__Reg1_2__SImm51_3
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_Tied, Tie0_2_2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_1__UImm21_0__Reg1_2__Reg1_3
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_Done },
  // Convert__Reg1_1__UImm21_0__Tie0_2_2__Reg1_2__Reg1_3
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_Tied, Tie0_2_2, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_Done },
  // Convert__Reg1_2__UImm21_0__UImm51_1__Reg1_3
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_Reg, 4, CVT_Done },
  // Convert__UImm21_0__UImm51_1__Reg1_2__Reg1_3
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_Done },
  // Convert__UImm21_0__Reg1_1__Reg1_2__Reg1_3
  { CVT_95_addImmOperands, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_Done },
  // Convert__UImm21_0__UImm51_1__UImm51_2__Reg1_3
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_Reg, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__regX0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2__UImmLog2XLen1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm51_4__UImm21_5
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_Tied, Tie1_3_3, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_3__UImm21_5__UImm71_6
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_95_addImmOperands, 6, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Tie0_3_3__SImm51_4__UImm21_5
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_Tied, Tie0_3_3, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm51_2__imm_95_0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__Reg1_1__UImm51_2
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addRegOperands_95_defaultMaskRegOp, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_1__reg0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 2, CVT_reg0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_1__RVVMaskRegOpOperand1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 2, CVT_95_addRegOperands_95_defaultMaskRegOp, 3, CVT_Done },
  // Convert__Reg1_0__RVVMaskRegOpOperand1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands_95_defaultMaskRegOp, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands_95_defaultMaskRegOp, 3, CVT_Done },
  // Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_95_Reg, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm51_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_0__Reg1_0
  { CVT_95_Reg, 1, CVT_95_Reg, 1, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 5, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__SImm51_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__regX0__reg0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_regX0, 0, CVT_reg0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__regX0__RVVMaskRegOpOperand1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_regX0, 0, CVT_95_addRegOperands_95_defaultMaskRegOp, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95__MINUS_1__reg0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95__MINUS_1, 0, CVT_reg0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95__MINUS_1__RVVMaskRegOpOperand1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95__MINUS_1, 0, CVT_95_addRegOperands_95_defaultMaskRegOp, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm61_2__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__UImm51_1__VTypeI101_2
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_95_addVTypeIOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__VTypeI111_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addVTypeIOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_255
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_255, 0, CVT_Done },
};

void RISCVAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands,
                const SmallBitVector &OptionalOperandsMask,
                ArrayRef<unsigned> DefaultsOffset) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p += 2) {
    unsigned OpIdx = *(p + 1) - DefaultsOffset[*(p + 1)];
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied: {
      assert(*(p + 1) < (size_t)(std::end(TiedAsmOperandTable) -
                              std::begin(TiedAsmOperandTable)) &&
             "Tied operand not found");
      unsigned TiedResOpnd = TiedAsmOperandTable[*(p + 1)][0];
      if (TiedResOpnd != (uint8_t)-1)
        Inst.addOperand(Inst.getOperand(TiedResOpnd));
      break;
    }
    case CVT_95_addImmOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addRegOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_95_Reg:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_regX0:
      Inst.addOperand(MCOperand::createReg(RISCV::X0));
      break;
    case CVT_regX5:
      Inst.addOperand(MCOperand::createReg(RISCV::X5));
      break;
    case CVT_regX2:
      Inst.addOperand(MCOperand::createReg(RISCV::X2));
      break;
    case CVT_regX3:
      Inst.addOperand(MCOperand::createReg(RISCV::X3));
      break;
    case CVT_regX4:
      Inst.addOperand(MCOperand::createReg(RISCV::X4));
      break;
    case CVT_95_addRlistOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addRlistOperands(Inst, 1);
      break;
    case CVT_95_addSpimmOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addSpimmOperands(Inst, 1);
      break;
    case CVT_95_addCSRSystemRegisterOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addCSRSystemRegisterOperands(Inst, 1);
      break;
    case CVT_95_addRegRegOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addRegRegOperands(Inst, 2);
      break;
    case CVT_95_addFRMArgOperands_95_defaultFRMArgOp:
      if (OptionalOperandsMask[*(p + 1) - 1]) {
        defaultFRMArgOp()->addFRMArgOperands(Inst, 1);
      } else {
        static_cast<RISCVOperand &>(*Operands[OpIdx]).addFRMArgOperands(Inst, 1);
      }
      break;
    case CVT_95_addFRMArgOperands_95_defaultFRMArgLegacyOp:
      if (OptionalOperandsMask[*(p + 1) - 1]) {
        defaultFRMArgLegacyOp()->addFRMArgOperands(Inst, 1);
      } else {
        static_cast<RISCVOperand &>(*Operands[OpIdx]).addFRMArgOperands(Inst, 1);
      }
      break;
    case CVT_95_addFRMArgOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addFRMArgOperands(Inst, 1);
      break;
    case CVT_imm_95_15:
      Inst.addOperand(MCOperand::createImm(15));
      break;
    case CVT_95_addFenceArgOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addFenceArgOperands(Inst, 1);
      break;
    case CVT_95_addFPImmOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addFPImmOperands(Inst, 1);
      break;
    case CVT_imm_95_3:
      Inst.addOperand(MCOperand::createImm(3));
      break;
    case CVT_imm_95_1:
      Inst.addOperand(MCOperand::createImm(1));
      break;
    case CVT_imm_95_2:
      Inst.addOperand(MCOperand::createImm(2));
      break;
    case CVT_regX1:
      Inst.addOperand(MCOperand::createReg(RISCV::X1));
      break;
    case CVT_imm_95__MINUS_1:
      Inst.addOperand(MCOperand::createImm(-1));
      break;
    case CVT_imm_95_3072:
      Inst.addOperand(MCOperand::createImm(3072));
      break;
    case CVT_imm_95_3200:
      Inst.addOperand(MCOperand::createImm(3200));
      break;
    case CVT_imm_95_3074:
      Inst.addOperand(MCOperand::createImm(3074));
      break;
    case CVT_imm_95_3202:
      Inst.addOperand(MCOperand::createImm(3202));
      break;
    case CVT_imm_95_3073:
      Inst.addOperand(MCOperand::createImm(3073));
      break;
    case CVT_imm_95_3201:
      Inst.addOperand(MCOperand::createImm(3201));
      break;
    case CVT_95_addRegOperands_95_defaultMaskRegOp:
      if (OptionalOperandsMask[*(p + 1) - 1]) {
        defaultMaskRegOp()->addRegOperands(Inst, 1);
      } else {
        static_cast<RISCVOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      }
      break;
    case CVT_reg0:
      Inst.addOperand(MCOperand::createReg(0));
      break;
    case CVT_95_addVTypeIOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addVTypeIOperands(Inst, 1);
      break;
    case CVT_imm_95_255:
      Inst.addOperand(MCOperand::createImm(255));
      break;
    }
  }
}

void RISCVAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p += 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_regX0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regX5:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regX2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regX3:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regX4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addRlistOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addSpimmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addCSRSystemRegisterOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addFRMArgOperands_95_defaultFRMArgOp:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addFRMArgOperands_95_defaultFRMArgLegacyOp:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addFRMArgOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_15:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addFenceArgOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addFPImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_3:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regX1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_imm_95__MINUS_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3072:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3200:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3074:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3202:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3073:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3201:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegOperands_95_defaultMaskRegOp:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_reg0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addVTypeIOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_255:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  OptionalMatchClass = 1,
  MCK__40_, // '('
  MCK__41_, // ')'
  MCK_LAST_TOKEN = MCK__41_,
  MCK_Reg83, // derived register class
  MCK_Reg80, // derived register class
  MCK_Reg77, // derived register class
  MCK_Reg74, // derived register class
  MCK_Reg71, // derived register class
  MCK_Reg68, // derived register class
  MCK_Reg65, // derived register class
  MCK_Reg62, // derived register class
  MCK_Reg59, // derived register class
  MCK_Reg56, // derived register class
  MCK_Reg53, // derived register class
  MCK_Reg45, // derived register class
  MCK_Reg42, // derived register class
  MCK_Reg40, // derived register class
  MCK_Reg38, // derived register class
  MCK_Reg36, // derived register class
  MCK_Reg32, // derived register class
  MCK_Reg29, // derived register class
  MCK_Reg26, // derived register class
  MCK_GPRX0, // register class 'GPRX0,X0'
  MCK_GPRX1, // register class 'GPRX1'
  MCK_GPRX5, // register class 'GPRX5'
  MCK_GPRX7, // register class 'GPRX7'
  MCK_SP, // register class 'SP'
  MCK_VMV0, // register class 'VMV0,V0'
  MCK_Reg14, // derived register class
  MCK_GPRX1X5, // register class 'GPRX1X5'
  MCK_Reg49, // derived register class
  MCK_VCSR, // register class 'VCSR'
  MCK_VRM8NoV0, // register class 'VRM8NoV0'
  MCK_Reg48, // derived register class
  MCK_Reg46, // derived register class
  MCK_VRM8, // register class 'VRM8'
  MCK_Reg50, // derived register class
  MCK_Reg17, // derived register class
  MCK_VRN2M4NoV0, // register class 'VRN2M4NoV0'
  MCK_Reg44, // derived register class
  MCK_VRM4NoV0, // register class 'VRM4NoV0'
  MCK_VRN2M4, // register class 'VRN2M4'
  MCK_FPR32C, // register class 'FPR32C'
  MCK_FPR64C, // register class 'FPR64C'
  MCK_GPRC, // register class 'GPRC'
  MCK_SR07, // register class 'SR07'
  MCK_VRM4, // register class 'VRM4'
  MCK_Reg47, // derived register class
  MCK_VRN4M2NoV0, // register class 'VRN4M2NoV0'
  MCK_Reg43, // derived register class
  MCK_GPRTCNonX7, // register class 'GPRTCNonX7'
  MCK_VRN3M2NoV0, // register class 'VRN3M2NoV0'
  MCK_VRN4M2, // register class 'VRN4M2'
  MCK_Reg41, // derived register class
  MCK_GPRTC, // register class 'GPRTC'
  MCK_VRN2M2NoV0, // register class 'VRN2M2NoV0'
  MCK_VRN3M2, // register class 'VRN3M2'
  MCK_Reg39, // derived register class
  MCK_VRM2NoV0, // register class 'VRM2NoV0'
  MCK_VRN2M2, // register class 'VRN2M2'
  MCK_GPRPair, // register class 'GPRPair'
  MCK_VRM2, // register class 'VRM2'
  MCK_VRN8M1NoV0, // register class 'VRN8M1NoV0'
  MCK_GPRJALRNonX7, // register class 'GPRJALRNonX7'
  MCK_VRN7M1NoV0, // register class 'VRN7M1NoV0'
  MCK_VRN8M1, // register class 'VRN8M1'
  MCK_GPRJALR, // register class 'GPRJALR'
  MCK_VRN6M1NoV0, // register class 'VRN6M1NoV0'
  MCK_VRN7M1, // register class 'VRN7M1'
  MCK_VRN5M1NoV0, // register class 'VRN5M1NoV0'
  MCK_VRN6M1, // register class 'VRN6M1'
  MCK_VRN4M1NoV0, // register class 'VRN4M1NoV0'
  MCK_VRN5M1, // register class 'VRN5M1'
  MCK_VRN3M1NoV0, // register class 'VRN3M1NoV0'
  MCK_VRN4M1, // register class 'VRN4M1'
  MCK_GPRNoX0X2, // register class 'GPRNoX0X2'
  MCK_VRN2M1NoV0, // register class 'VRN2M1NoV0'
  MCK_VRN3M1, // register class 'VRN3M1'
  MCK_GPRNoX0, // register class 'GPRNoX0'
  MCK_VRN2M1, // register class 'VRN2M1'
  MCK_VRNoV0, // register class 'VRNoV0'
  MCK_FPR16, // register class 'FPR16'
  MCK_FPR32, // register class 'FPR32'
  MCK_FPR64, // register class 'FPR64'
  MCK_GPR, // register class 'GPR,GPRF16,GPRF32'
  MCK_VM, // register class 'VM,VR'
  MCK_GPRAll, // register class 'GPRAll'
  MCK_LAST_REGISTER = MCK_GPRAll,
  MCK_AnyRegCOperand, // user defined class 'AnyRegCOperand'
  MCK_AnyRegOperand, // user defined class 'AnyRegOperand'
  MCK_BareSymbol, // user defined class 'BareSymbol'
  MCK_CLUIImm, // user defined class 'CLUIImmAsmOperand'
  MCK_CSRSystemRegister, // user defined class 'CSRSystemRegister'
  MCK_RegReg, // user defined class 'CVrrAsmOperand'
  MCK_CallSymbol, // user defined class 'CallSymbol'
  MCK_FRMArg, // user defined class 'FRMArg'
  MCK_FRMArgLegacy, // user defined class 'FRMArgLegacy'
  MCK_FenceArg, // user defined class 'FenceArg'
  MCK_GPRAsFPR, // user defined class 'GPRAsFPR'
  MCK_GPRF64AsFPR, // user defined class 'GPRF64AsFPR'
  MCK_GPRPairAsFPR, // user defined class 'GPRPairAsFPR'
  MCK_GPRPairRV32, // user defined class 'GPRPairRV32Operand'
  MCK_GPRPairRV64, // user defined class 'GPRPairRV64Operand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_ImmZero, // user defined class 'ImmZeroAsmOperand'
  MCK_InsnCDirectiveOpcode, // user defined class 'InsnCDirectiveOpcode'
  MCK_InsnDirectiveOpcode, // user defined class 'InsnDirectiveOpcode'
  MCK_LoadFPImm, // user defined class 'LoadFPImmOperand'
  MCK_NegStackAdj, // user defined class 'NegStackAdjAsmOperand'
  MCK_PseudoJumpSymbol, // user defined class 'PseudoJumpSymbol'
  MCK_RTZArg, // user defined class 'RTZArg'
  MCK_Rlist, // user defined class 'RlistAsmOperand'
  MCK_RnumArg, // user defined class 'RnumArg'
  MCK_SImm5Plus1, // user defined class 'SImm5Plus1AsmOperand'
  MCK_SImm21Lsb0JAL, // user defined class 'Simm21Lsb0JALAsmOperand'
  MCK_StackAdj, // user defined class 'StackAdjAsmOperand'
  MCK_TLSDESCCallSymbol, // user defined class 'TLSDESCCallSymbol'
  MCK_TPRelAddSymbol, // user defined class 'TPRelAddSymbol'
  MCK_UImmLog2XLen, // user defined class 'UImmLog2XLenAsmOperand'
  MCK_UImmLog2XLenHalf, // user defined class 'UImmLog2XLenHalfAsmOperand'
  MCK_UImmLog2XLenNonZero, // user defined class 'UImmLog2XLenNonZeroAsmOperand'
  MCK_RVVMaskRegOpOperand, // user defined class 'VMaskAsmOperand'
  MCK_ZeroOffsetMemOpOperand, // user defined class 'ZeroOffsetMemOpOperand'
  MCK_VTypeI10, // user defined class 'anonymous_10619'
  MCK_VTypeI11, // user defined class 'anonymous_10620'
  MCK_SImm5, // user defined class 'anonymous_10621'
  MCK_SImm6, // user defined class 'anonymous_48884'
  MCK_SImm6NonZero, // user defined class 'anonymous_48885'
  MCK_UImm7Lsb00, // user defined class 'anonymous_48886'
  MCK_UImm8Lsb00, // user defined class 'anonymous_48887'
  MCK_UImm8Lsb000, // user defined class 'anonymous_48888'
  MCK_SImm9Lsb0, // user defined class 'anonymous_48889'
  MCK_UImm9Lsb000, // user defined class 'anonymous_48890'
  MCK_UImm10Lsb00NonZero, // user defined class 'anonymous_48891'
  MCK_SImm10Lsb0000NonZero, // user defined class 'anonymous_48892'
  MCK_SImm12Lsb0, // user defined class 'anonymous_48893'
  MCK_UImm2Lsb0, // user defined class 'anonymous_48979'
  MCK_UImm8GE32, // user defined class 'anonymous_48980'
  MCK_SImm12Lsb00000, // user defined class 'anonymous_49042'
  MCK_UImm5Lsb0, // user defined class 'anonymous_50761'
  MCK_UImm6Lsb0, // user defined class 'anonymous_50762'
  MCK_UImm1, // user defined class 'anonymous_8990'
  MCK_UImm2, // user defined class 'anonymous_8991'
  MCK_UImm3, // user defined class 'anonymous_8992'
  MCK_UImm4, // user defined class 'anonymous_8993'
  MCK_UImm5, // user defined class 'anonymous_8994'
  MCK_UImm6, // user defined class 'anonymous_8995'
  MCK_UImm7, // user defined class 'anonymous_8996'
  MCK_UImm8, // user defined class 'anonymous_8997'
  MCK_UImm16, // user defined class 'anonymous_8998'
  MCK_UImm32, // user defined class 'anonymous_8999'
  MCK_SImm12, // user defined class 'anonymous_9000'
  MCK_SImm13Lsb0, // user defined class 'anonymous_9001'
  MCK_UImm20LUI, // user defined class 'anonymous_9002'
  MCK_UImm20AUIPC, // user defined class 'anonymous_9003'
  MCK_UImm20, // user defined class 'anonymous_9004'
  MCK_ImmXLenLI, // user defined class 'anonymous_9005'
  MCK_ImmXLenLI_Restricted, // user defined class 'anonymous_9006'
  NumMatchClassKinds
};

} // end anonymous namespace

static unsigned getDiagKindFromRegisterClass(MatchClassKind RegisterClass) {
  return MCTargetAsmParser::Match_InvalidOperand;
}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 2 strings to match.
    switch (Name[0]) {
    default: break;
    case '(':	 // 1 string to match.
      return MCK__40_;	 // "("
    case ')':	 // 1 string to match.
      return MCK__41_;	 // ")"
    }
    break;
  }
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_Reg83:
    return B == MCK_VRN8M1;

  case MCK_Reg80:
    return B == MCK_VRN7M1;

  case MCK_Reg77:
    return B == MCK_VRN6M1;

  case MCK_Reg74:
    return B == MCK_VRN5M1;

  case MCK_Reg71:
    return B == MCK_VRN4M2;

  case MCK_Reg68:
    return B == MCK_VRN4M1;

  case MCK_Reg65:
    return B == MCK_VRN3M2;

  case MCK_Reg62:
    return B == MCK_VRN3M1;

  case MCK_Reg59:
    return B == MCK_VRN2M4;

  case MCK_Reg56:
    return B == MCK_VRN2M2;

  case MCK_Reg53:
    return B == MCK_VRN2M1;

  case MCK_Reg45:
    switch (B) {
    default: return false;
    case MCK_Reg48: return true;
    case MCK_Reg46: return true;
    case MCK_Reg47: return true;
    case MCK_Reg43: return true;
    case MCK_Reg41: return true;
    case MCK_Reg39: return true;
    case MCK_GPRPair: return true;
    }

  case MCK_Reg42:
    switch (B) {
    default: return false;
    case MCK_Reg44: return true;
    case MCK_Reg43: return true;
    case MCK_Reg41: return true;
    case MCK_Reg39: return true;
    case MCK_GPRPair: return true;
    }

  case MCK_Reg40:
    switch (B) {
    default: return false;
    case MCK_Reg41: return true;
    case MCK_Reg39: return true;
    case MCK_GPRPair: return true;
    }

  case MCK_Reg38:
    switch (B) {
    default: return false;
    case MCK_Reg39: return true;
    case MCK_GPRPair: return true;
    }

  case MCK_Reg36:
    return B == MCK_GPRPair;

  case MCK_Reg32:
    return B == MCK_VRM8;

  case MCK_Reg29:
    return B == MCK_VRM4;

  case MCK_Reg26:
    return B == MCK_VRM2;

  case MCK_GPRX0:
    switch (B) {
    default: return false;
    case MCK_GPR: return true;
    case MCK_GPRAll: return true;
    }

  case MCK_GPRX1:
    switch (B) {
    default: return false;
    case MCK_GPRX1X5: return true;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_GPRAll: return true;
    }

  case MCK_GPRX5:
    switch (B) {
    default: return false;
    case MCK_GPRX1X5: return true;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_GPRAll: return true;
    }

  case MCK_GPRX7:
    switch (B) {
    default: return false;
    case MCK_GPRTC: return true;
    case MCK_GPRJALR: return true;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_GPRAll: return true;
    }

  case MCK_SP:
    switch (B) {
    default: return false;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_GPRAll: return true;
    }

  case MCK_VMV0:
    return B == MCK_VM;

  case MCK_Reg14:
    switch (B) {
    default: return false;
    case MCK_GPRC: return true;
    case MCK_SR07: return true;
    case MCK_GPRJALRNonX7: return true;
    case MCK_GPRJALR: return true;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_GPRAll: return true;
    }

  case MCK_GPRX1X5:
    switch (B) {
    default: return false;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_GPRAll: return true;
    }

  case MCK_Reg49:
    switch (B) {
    default: return false;
    case MCK_Reg46: return true;
    case MCK_Reg50: return true;
    case MCK_Reg44: return true;
    case MCK_Reg47: return true;
    case MCK_Reg43: return true;
    case MCK_Reg41: return true;
    case MCK_Reg39: return true;
    case MCK_GPRPair: return true;
    }

  case MCK_VRM8NoV0:
    return B == MCK_VRM8;

  case MCK_Reg48:
    switch (B) {
    default: return false;
    case MCK_Reg47: return true;
    case MCK_Reg43: return true;
    case MCK_Reg41: return true;
    case MCK_Reg39: return true;
    case MCK_GPRPair: return true;
    }

  case MCK_Reg46:
    switch (B) {
    default: return false;
    case MCK_Reg47: return true;
    case MCK_Reg43: return true;
    case MCK_Reg41: return true;
    case MCK_Reg39: return true;
    case MCK_GPRPair: return true;
    }

  case MCK_Reg50:
    switch (B) {
    default: return false;
    case MCK_Reg44: return true;
    case MCK_Reg47: return true;
    case MCK_Reg43: return true;
    case MCK_Reg41: return true;
    case MCK_Reg39: return true;
    case MCK_GPRPair: return true;
    }

  case MCK_Reg17:
    switch (B) {
    default: return false;
    case MCK_GPRC: return true;
    case MCK_GPRTCNonX7: return true;
    case MCK_GPRTC: return true;
    case MCK_GPRJALRNonX7: return true;
    case MCK_GPRJALR: return true;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_GPRAll: return true;
    }

  case MCK_VRN2M4NoV0:
    return B == MCK_VRN2M4;

  case MCK_Reg44:
    switch (B) {
    default: return false;
    case MCK_Reg43: return true;
    case MCK_Reg41: return true;
    case MCK_Reg39: return true;
    case MCK_GPRPair: return true;
    }

  case MCK_VRM4NoV0:
    return B == MCK_VRM4;

  case MCK_FPR32C:
    return B == MCK_FPR32;

  case MCK_FPR64C:
    return B == MCK_FPR64;

  case MCK_GPRC:
    switch (B) {
    default: return false;
    case MCK_GPRJALRNonX7: return true;
    case MCK_GPRJALR: return true;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_GPRAll: return true;
    }

  case MCK_SR07:
    switch (B) {
    default: return false;
    case MCK_GPRJALRNonX7: return true;
    case MCK_GPRJALR: return true;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_GPRAll: return true;
    }

  case MCK_Reg47:
    switch (B) {
    default: return false;
    case MCK_Reg43: return true;
    case MCK_Reg41: return true;
    case MCK_Reg39: return true;
    case MCK_GPRPair: return true;
    }

  case MCK_VRN4M2NoV0:
    return B == MCK_VRN4M2;

  case MCK_Reg43:
    switch (B) {
    default: return false;
    case MCK_Reg41: return true;
    case MCK_Reg39: return true;
    case MCK_GPRPair: return true;
    }

  case MCK_GPRTCNonX7:
    switch (B) {
    default: return false;
    case MCK_GPRTC: return true;
    case MCK_GPRJALRNonX7: return true;
    case MCK_GPRJALR: return true;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_GPRAll: return true;
    }

  case MCK_VRN3M2NoV0:
    return B == MCK_VRN3M2;

  case MCK_Reg41:
    switch (B) {
    default: return false;
    case MCK_Reg39: return true;
    case MCK_GPRPair: return true;
    }

  case MCK_GPRTC:
    switch (B) {
    default: return false;
    case MCK_GPRJALR: return true;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_GPRAll: return true;
    }

  case MCK_VRN2M2NoV0:
    return B == MCK_VRN2M2;

  case MCK_Reg39:
    return B == MCK_GPRPair;

  case MCK_VRM2NoV0:
    return B == MCK_VRM2;

  case MCK_VRN8M1NoV0:
    return B == MCK_VRN8M1;

  case MCK_GPRJALRNonX7:
    switch (B) {
    default: return false;
    case MCK_GPRJALR: return true;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_GPRAll: return true;
    }

  case MCK_VRN7M1NoV0:
    return B == MCK_VRN7M1;

  case MCK_GPRJALR:
    switch (B) {
    default: return false;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_GPRAll: return true;
    }

  case MCK_VRN6M1NoV0:
    return B == MCK_VRN6M1;

  case MCK_VRN5M1NoV0:
    return B == MCK_VRN5M1;

  case MCK_VRN4M1NoV0:
    return B == MCK_VRN4M1;

  case MCK_VRN3M1NoV0:
    return B == MCK_VRN3M1;

  case MCK_GPRNoX0X2:
    switch (B) {
    default: return false;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_GPRAll: return true;
    }

  case MCK_VRN2M1NoV0:
    return B == MCK_VRN2M1;

  case MCK_GPRNoX0:
    switch (B) {
    default: return false;
    case MCK_GPR: return true;
    case MCK_GPRAll: return true;
    }

  case MCK_VRNoV0:
    return B == MCK_VM;

  case MCK_GPR:
    return B == MCK_GPRAll;

  case MCK_FRMArg:
    return B == OptionalMatchClass;

  case MCK_FRMArgLegacy:
    return B == OptionalMatchClass;

  case MCK_RVVMaskRegOpOperand:
    return B == OptionalMatchClass;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  RISCVOperand &Operand = (RISCVOperand &)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken() && Kind <= MCK_LAST_TOKEN)
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
  // 'AnyRegCOperand' class
  case MCK_AnyRegCOperand: {
    DiagnosticPredicate DP(Operand.isAnyRegC());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'AnyRegOperand' class
  case MCK_AnyRegOperand: {
    DiagnosticPredicate DP(Operand.isAnyReg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BareSymbol' class
  case MCK_BareSymbol: {
    DiagnosticPredicate DP(Operand.isBareSymbol());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidBareSymbol;
    break;
    }
  // 'CLUIImm' class
  case MCK_CLUIImm: {
    DiagnosticPredicate DP(Operand.isCLUIImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidCLUIImm;
    break;
    }
  // 'CSRSystemRegister' class
  case MCK_CSRSystemRegister: {
    DiagnosticPredicate DP(Operand.isCSRSystemRegister());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidCSRSystemRegister;
    break;
    }
  // 'RegReg' class
  case MCK_RegReg: {
    DiagnosticPredicate DP(Operand.isRegReg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidRegReg;
    break;
    }
  // 'CallSymbol' class
  case MCK_CallSymbol: {
    DiagnosticPredicate DP(Operand.isCallSymbol());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidCallSymbol;
    break;
    }
  // 'FRMArg' class
  case MCK_FRMArg: {
    DiagnosticPredicate DP(Operand.isFRMArg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'FRMArgLegacy' class
  case MCK_FRMArgLegacy: {
    DiagnosticPredicate DP(Operand.isFRMArgLegacy());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'FenceArg' class
  case MCK_FenceArg: {
    DiagnosticPredicate DP(Operand.isFenceArg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'GPRAsFPR' class
  case MCK_GPRAsFPR: {
    DiagnosticPredicate DP(Operand.isGPRAsFPR());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'GPRF64AsFPR' class
  case MCK_GPRF64AsFPR: {
    DiagnosticPredicate DP(Operand.isGPRAsFPR());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'GPRPairAsFPR' class
  case MCK_GPRPairAsFPR: {
    DiagnosticPredicate DP(Operand.isGPRAsFPR());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'GPRPairRV32' class
  case MCK_GPRPairRV32: {
    DiagnosticPredicate DP(Operand.isGPRPair());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'GPRPairRV64' class
  case MCK_GPRPairRV64: {
    DiagnosticPredicate DP(Operand.isGPRPair());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'Imm' class
  case MCK_Imm: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'ImmZero' class
  case MCK_ImmZero: {
    DiagnosticPredicate DP(Operand.isImmZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidImmZero;
    break;
    }
  // 'InsnCDirectiveOpcode' class
  case MCK_InsnCDirectiveOpcode: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'InsnDirectiveOpcode' class
  case MCK_InsnDirectiveOpcode: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'LoadFPImm' class
  case MCK_LoadFPImm: {
    DiagnosticPredicate DP(Operand.isLoadFPImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidLoadFPImm;
    break;
    }
  // 'NegStackAdj' class
  case MCK_NegStackAdj: {
    DiagnosticPredicate DP(Operand.isSpimm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidStackAdj;
    break;
    }
  // 'PseudoJumpSymbol' class
  case MCK_PseudoJumpSymbol: {
    DiagnosticPredicate DP(Operand.isPseudoJumpSymbol());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidPseudoJumpSymbol;
    break;
    }
  // 'RTZArg' class
  case MCK_RTZArg: {
    DiagnosticPredicate DP(Operand.isRTZArg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidRTZArg;
    break;
    }
  // 'Rlist' class
  case MCK_Rlist: {
    DiagnosticPredicate DP(Operand.isRlist());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidRlist;
    break;
    }
  // 'RnumArg' class
  case MCK_RnumArg: {
    DiagnosticPredicate DP(Operand.isRnumArg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidRnumArg;
    break;
    }
  // 'SImm5Plus1' class
  case MCK_SImm5Plus1: {
    DiagnosticPredicate DP(Operand.isSImm5Plus1());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm5Plus1;
    break;
    }
  // 'SImm21Lsb0JAL' class
  case MCK_SImm21Lsb0JAL: {
    DiagnosticPredicate DP(Operand.isSImm21Lsb0JAL());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm21Lsb0JAL;
    break;
    }
  // 'StackAdj' class
  case MCK_StackAdj: {
    DiagnosticPredicate DP(Operand.isSpimm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidStackAdj;
    break;
    }
  // 'TLSDESCCallSymbol' class
  case MCK_TLSDESCCallSymbol: {
    DiagnosticPredicate DP(Operand.isTLSDESCCallSymbol());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidTLSDESCCallSymbol;
    break;
    }
  // 'TPRelAddSymbol' class
  case MCK_TPRelAddSymbol: {
    DiagnosticPredicate DP(Operand.isTPRelAddSymbol());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidTPRelAddSymbol;
    break;
    }
  // 'UImmLog2XLen' class
  case MCK_UImmLog2XLen: {
    DiagnosticPredicate DP(Operand.isUImmLog2XLen());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImmLog2XLen;
    break;
    }
  // 'UImmLog2XLenHalf' class
  case MCK_UImmLog2XLenHalf: {
    DiagnosticPredicate DP(Operand.isUImmLog2XLenHalf());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImmLog2XLenHalf;
    break;
    }
  // 'UImmLog2XLenNonZero' class
  case MCK_UImmLog2XLenNonZero: {
    DiagnosticPredicate DP(Operand.isUImmLog2XLenNonZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImmLog2XLenNonZero;
    break;
    }
  // 'RVVMaskRegOpOperand' class
  case MCK_RVVMaskRegOpOperand: {
    DiagnosticPredicate DP(Operand.isV0Reg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidVMaskRegister;
    break;
    }
  // 'ZeroOffsetMemOpOperand' class
  case MCK_ZeroOffsetMemOpOperand: {
    DiagnosticPredicate DP(Operand.isGPR());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'VTypeI10' class
  case MCK_VTypeI10: {
    DiagnosticPredicate DP(Operand.isVTypeI10());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidVTypeI;
    break;
    }
  // 'VTypeI11' class
  case MCK_VTypeI11: {
    DiagnosticPredicate DP(Operand.isVTypeI11());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidVTypeI;
    break;
    }
  // 'SImm5' class
  case MCK_SImm5: {
    DiagnosticPredicate DP(Operand.isSImm5());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm5;
    break;
    }
  // 'SImm6' class
  case MCK_SImm6: {
    DiagnosticPredicate DP(Operand.isSImm6());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm6;
    break;
    }
  // 'SImm6NonZero' class
  case MCK_SImm6NonZero: {
    DiagnosticPredicate DP(Operand.isSImm6NonZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm6NonZero;
    break;
    }
  // 'UImm7Lsb00' class
  case MCK_UImm7Lsb00: {
    DiagnosticPredicate DP(Operand.isUImm7Lsb00());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm7Lsb00;
    break;
    }
  // 'UImm8Lsb00' class
  case MCK_UImm8Lsb00: {
    DiagnosticPredicate DP(Operand.isUImm8Lsb00());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm8Lsb00;
    break;
    }
  // 'UImm8Lsb000' class
  case MCK_UImm8Lsb000: {
    DiagnosticPredicate DP(Operand.isUImm8Lsb000());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm8Lsb000;
    break;
    }
  // 'SImm9Lsb0' class
  case MCK_SImm9Lsb0: {
    DiagnosticPredicate DP(Operand.isSImm9Lsb0());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm9Lsb0;
    break;
    }
  // 'UImm9Lsb000' class
  case MCK_UImm9Lsb000: {
    DiagnosticPredicate DP(Operand.isUImm9Lsb000());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm9Lsb000;
    break;
    }
  // 'UImm10Lsb00NonZero' class
  case MCK_UImm10Lsb00NonZero: {
    DiagnosticPredicate DP(Operand.isUImm10Lsb00NonZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm10Lsb00NonZero;
    break;
    }
  // 'SImm10Lsb0000NonZero' class
  case MCK_SImm10Lsb0000NonZero: {
    DiagnosticPredicate DP(Operand.isSImm10Lsb0000NonZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm10Lsb0000NonZero;
    break;
    }
  // 'SImm12Lsb0' class
  case MCK_SImm12Lsb0: {
    DiagnosticPredicate DP(Operand.isSImm12Lsb0());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm12Lsb0;
    break;
    }
  // 'UImm2Lsb0' class
  case MCK_UImm2Lsb0: {
    DiagnosticPredicate DP(Operand.isUImm2Lsb0());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm2Lsb0;
    break;
    }
  // 'UImm8GE32' class
  case MCK_UImm8GE32: {
    DiagnosticPredicate DP(Operand.isUImm8GE32());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm8GE32;
    break;
    }
  // 'SImm12Lsb00000' class
  case MCK_SImm12Lsb00000: {
    DiagnosticPredicate DP(Operand.isSImm12Lsb00000());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm12Lsb00000;
    break;
    }
  // 'UImm5Lsb0' class
  case MCK_UImm5Lsb0: {
    DiagnosticPredicate DP(Operand.isUImm5Lsb0());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm5Lsb0;
    break;
    }
  // 'UImm6Lsb0' class
  case MCK_UImm6Lsb0: {
    DiagnosticPredicate DP(Operand.isUImm6Lsb0());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm6Lsb0;
    break;
    }
  // 'UImm1' class
  case MCK_UImm1: {
    DiagnosticPredicate DP(Operand.isUImm1());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm1;
    break;
    }
  // 'UImm2' class
  case MCK_UImm2: {
    DiagnosticPredicate DP(Operand.isUImm2());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm2;
    break;
    }
  // 'UImm3' class
  case MCK_UImm3: {
    DiagnosticPredicate DP(Operand.isUImm3());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm3;
    break;
    }
  // 'UImm4' class
  case MCK_UImm4: {
    DiagnosticPredicate DP(Operand.isUImm4());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm4;
    break;
    }
  // 'UImm5' class
  case MCK_UImm5: {
    DiagnosticPredicate DP(Operand.isUImm5());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm5;
    break;
    }
  // 'UImm6' class
  case MCK_UImm6: {
    DiagnosticPredicate DP(Operand.isUImm6());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm6;
    break;
    }
  // 'UImm7' class
  case MCK_UImm7: {
    DiagnosticPredicate DP(Operand.isUImm7());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm7;
    break;
    }
  // 'UImm8' class
  case MCK_UImm8: {
    DiagnosticPredicate DP(Operand.isUImm8());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm8;
    break;
    }
  // 'UImm16' class
  case MCK_UImm16: {
    DiagnosticPredicate DP(Operand.isUImm16());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm16;
    break;
    }
  // 'UImm32' class
  case MCK_UImm32: {
    DiagnosticPredicate DP(Operand.isUImm32());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm32;
    break;
    }
  // 'SImm12' class
  case MCK_SImm12: {
    DiagnosticPredicate DP(Operand.isSImm12());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm12;
    break;
    }
  // 'SImm13Lsb0' class
  case MCK_SImm13Lsb0: {
    DiagnosticPredicate DP(Operand.isSImm13Lsb0());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm13Lsb0;
    break;
    }
  // 'UImm20LUI' class
  case MCK_UImm20LUI: {
    DiagnosticPredicate DP(Operand.isUImm20LUI());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm20LUI;
    break;
    }
  // 'UImm20AUIPC' class
  case MCK_UImm20AUIPC: {
    DiagnosticPredicate DP(Operand.isUImm20AUIPC());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm20AUIPC;
    break;
    }
  // 'UImm20' class
  case MCK_UImm20: {
    DiagnosticPredicate DP(Operand.isUImm20());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm20;
    break;
    }
  // 'ImmXLenLI' class
  case MCK_ImmXLenLI: {
    DiagnosticPredicate DP(Operand.isImmXLenLI());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidImmXLenLI;
    break;
    }
  // 'ImmXLenLI_Restricted' class
  case MCK_ImmXLenLI_Restricted: {
    DiagnosticPredicate DP(Operand.isImmXLenLI_Restricted());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidImmXLenLI_Restricted;
    break;
    }
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg().id()) {
    default: OpKind = InvalidMatchClass; break;
    case RISCV::X0: OpKind = MCK_GPRX0; break;
    case RISCV::X1: OpKind = MCK_GPRX1; break;
    case RISCV::X2: OpKind = MCK_SP; break;
    case RISCV::X3: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X4: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X5: OpKind = MCK_GPRX5; break;
    case RISCV::X6: OpKind = MCK_GPRTCNonX7; break;
    case RISCV::X7: OpKind = MCK_GPRX7; break;
    case RISCV::X8: OpKind = MCK_Reg14; break;
    case RISCV::X9: OpKind = MCK_Reg14; break;
    case RISCV::X10: OpKind = MCK_Reg17; break;
    case RISCV::X11: OpKind = MCK_Reg17; break;
    case RISCV::X12: OpKind = MCK_Reg17; break;
    case RISCV::X13: OpKind = MCK_Reg17; break;
    case RISCV::X14: OpKind = MCK_Reg17; break;
    case RISCV::X15: OpKind = MCK_Reg17; break;
    case RISCV::X16: OpKind = MCK_GPRTCNonX7; break;
    case RISCV::X17: OpKind = MCK_GPRTCNonX7; break;
    case RISCV::X18: OpKind = MCK_SR07; break;
    case RISCV::X19: OpKind = MCK_SR07; break;
    case RISCV::X20: OpKind = MCK_SR07; break;
    case RISCV::X21: OpKind = MCK_SR07; break;
    case RISCV::X22: OpKind = MCK_SR07; break;
    case RISCV::X23: OpKind = MCK_SR07; break;
    case RISCV::X24: OpKind = MCK_GPRJALRNonX7; break;
    case RISCV::X25: OpKind = MCK_GPRJALRNonX7; break;
    case RISCV::X26: OpKind = MCK_GPRJALRNonX7; break;
    case RISCV::X27: OpKind = MCK_GPRJALRNonX7; break;
    case RISCV::X28: OpKind = MCK_GPRTCNonX7; break;
    case RISCV::X29: OpKind = MCK_GPRTCNonX7; break;
    case RISCV::X30: OpKind = MCK_GPRTCNonX7; break;
    case RISCV::X31: OpKind = MCK_GPRTCNonX7; break;
    case RISCV::F0_H: OpKind = MCK_FPR16; break;
    case RISCV::F1_H: OpKind = MCK_FPR16; break;
    case RISCV::F2_H: OpKind = MCK_FPR16; break;
    case RISCV::F3_H: OpKind = MCK_FPR16; break;
    case RISCV::F4_H: OpKind = MCK_FPR16; break;
    case RISCV::F5_H: OpKind = MCK_FPR16; break;
    case RISCV::F6_H: OpKind = MCK_FPR16; break;
    case RISCV::F7_H: OpKind = MCK_FPR16; break;
    case RISCV::F8_H: OpKind = MCK_FPR16; break;
    case RISCV::F9_H: OpKind = MCK_FPR16; break;
    case RISCV::F10_H: OpKind = MCK_FPR16; break;
    case RISCV::F11_H: OpKind = MCK_FPR16; break;
    case RISCV::F12_H: OpKind = MCK_FPR16; break;
    case RISCV::F13_H: OpKind = MCK_FPR16; break;
    case RISCV::F14_H: OpKind = MCK_FPR16; break;
    case RISCV::F15_H: OpKind = MCK_FPR16; break;
    case RISCV::F16_H: OpKind = MCK_FPR16; break;
    case RISCV::F17_H: OpKind = MCK_FPR16; break;
    case RISCV::F18_H: OpKind = MCK_FPR16; break;
    case RISCV::F19_H: OpKind = MCK_FPR16; break;
    case RISCV::F20_H: OpKind = MCK_FPR16; break;
    case RISCV::F21_H: OpKind = MCK_FPR16; break;
    case RISCV::F22_H: OpKind = MCK_FPR16; break;
    case RISCV::F23_H: OpKind = MCK_FPR16; break;
    case RISCV::F24_H: OpKind = MCK_FPR16; break;
    case RISCV::F25_H: OpKind = MCK_FPR16; break;
    case RISCV::F26_H: OpKind = MCK_FPR16; break;
    case RISCV::F27_H: OpKind = MCK_FPR16; break;
    case RISCV::F28_H: OpKind = MCK_FPR16; break;
    case RISCV::F29_H: OpKind = MCK_FPR16; break;
    case RISCV::F30_H: OpKind = MCK_FPR16; break;
    case RISCV::F31_H: OpKind = MCK_FPR16; break;
    case RISCV::F0_F: OpKind = MCK_FPR32; break;
    case RISCV::F1_F: OpKind = MCK_FPR32; break;
    case RISCV::F2_F: OpKind = MCK_FPR32; break;
    case RISCV::F3_F: OpKind = MCK_FPR32; break;
    case RISCV::F4_F: OpKind = MCK_FPR32; break;
    case RISCV::F5_F: OpKind = MCK_FPR32; break;
    case RISCV::F6_F: OpKind = MCK_FPR32; break;
    case RISCV::F7_F: OpKind = MCK_FPR32; break;
    case RISCV::F8_F: OpKind = MCK_FPR32C; break;
    case RISCV::F9_F: OpKind = MCK_FPR32C; break;
    case RISCV::F10_F: OpKind = MCK_FPR32C; break;
    case RISCV::F11_F: OpKind = MCK_FPR32C; break;
    case RISCV::F12_F: OpKind = MCK_FPR32C; break;
    case RISCV::F13_F: OpKind = MCK_FPR32C; break;
    case RISCV::F14_F: OpKind = MCK_FPR32C; break;
    case RISCV::F15_F: OpKind = MCK_FPR32C; break;
    case RISCV::F16_F: OpKind = MCK_FPR32; break;
    case RISCV::F17_F: OpKind = MCK_FPR32; break;
    case RISCV::F18_F: OpKind = MCK_FPR32; break;
    case RISCV::F19_F: OpKind = MCK_FPR32; break;
    case RISCV::F20_F: OpKind = MCK_FPR32; break;
    case RISCV::F21_F: OpKind = MCK_FPR32; break;
    case RISCV::F22_F: OpKind = MCK_FPR32; break;
    case RISCV::F23_F: OpKind = MCK_FPR32; break;
    case RISCV::F24_F: OpKind = MCK_FPR32; break;
    case RISCV::F25_F: OpKind = MCK_FPR32; break;
    case RISCV::F26_F: OpKind = MCK_FPR32; break;
    case RISCV::F27_F: OpKind = MCK_FPR32; break;
    case RISCV::F28_F: OpKind = MCK_FPR32; break;
    case RISCV::F29_F: OpKind = MCK_FPR32; break;
    case RISCV::F30_F: OpKind = MCK_FPR32; break;
    case RISCV::F31_F: OpKind = MCK_FPR32; break;
    case RISCV::F0_D: OpKind = MCK_FPR64; break;
    case RISCV::F1_D: OpKind = MCK_FPR64; break;
    case RISCV::F2_D: OpKind = MCK_FPR64; break;
    case RISCV::F3_D: OpKind = MCK_FPR64; break;
    case RISCV::F4_D: OpKind = MCK_FPR64; break;
    case RISCV::F5_D: OpKind = MCK_FPR64; break;
    case RISCV::F6_D: OpKind = MCK_FPR64; break;
    case RISCV::F7_D: OpKind = MCK_FPR64; break;
    case RISCV::F8_D: OpKind = MCK_FPR64C; break;
    case RISCV::F9_D: OpKind = MCK_FPR64C; break;
    case RISCV::F10_D: OpKind = MCK_FPR64C; break;
    case RISCV::F11_D: OpKind = MCK_FPR64C; break;
    case RISCV::F12_D: OpKind = MCK_FPR64C; break;
    case RISCV::F13_D: OpKind = MCK_FPR64C; break;
    case RISCV::F14_D: OpKind = MCK_FPR64C; break;
    case RISCV::F15_D: OpKind = MCK_FPR64C; break;
    case RISCV::F16_D: OpKind = MCK_FPR64; break;
    case RISCV::F17_D: OpKind = MCK_FPR64; break;
    case RISCV::F18_D: OpKind = MCK_FPR64; break;
    case RISCV::F19_D: OpKind = MCK_FPR64; break;
    case RISCV::F20_D: OpKind = MCK_FPR64; break;
    case RISCV::F21_D: OpKind = MCK_FPR64; break;
    case RISCV::F22_D: OpKind = MCK_FPR64; break;
    case RISCV::F23_D: OpKind = MCK_FPR64; break;
    case RISCV::F24_D: OpKind = MCK_FPR64; break;
    case RISCV::F25_D: OpKind = MCK_FPR64; break;
    case RISCV::F26_D: OpKind = MCK_FPR64; break;
    case RISCV::F27_D: OpKind = MCK_FPR64; break;
    case RISCV::F28_D: OpKind = MCK_FPR64; break;
    case RISCV::F29_D: OpKind = MCK_FPR64; break;
    case RISCV::F30_D: OpKind = MCK_FPR64; break;
    case RISCV::F31_D: OpKind = MCK_FPR64; break;
    case RISCV::V0: OpKind = MCK_VMV0; break;
    case RISCV::V1: OpKind = MCK_VRNoV0; break;
    case RISCV::V2: OpKind = MCK_VRNoV0; break;
    case RISCV::V3: OpKind = MCK_VRNoV0; break;
    case RISCV::V4: OpKind = MCK_VRNoV0; break;
    case RISCV::V5: OpKind = MCK_VRNoV0; break;
    case RISCV::V6: OpKind = MCK_VRNoV0; break;
    case RISCV::V7: OpKind = MCK_VRNoV0; break;
    case RISCV::V8: OpKind = MCK_VRNoV0; break;
    case RISCV::V9: OpKind = MCK_VRNoV0; break;
    case RISCV::V10: OpKind = MCK_VRNoV0; break;
    case RISCV::V11: OpKind = MCK_VRNoV0; break;
    case RISCV::V12: OpKind = MCK_VRNoV0; break;
    case RISCV::V13: OpKind = MCK_VRNoV0; break;
    case RISCV::V14: OpKind = MCK_VRNoV0; break;
    case RISCV::V15: OpKind = MCK_VRNoV0; break;
    case RISCV::V16: OpKind = MCK_VRNoV0; break;
    case RISCV::V17: OpKind = MCK_VRNoV0; break;
    case RISCV::V18: OpKind = MCK_VRNoV0; break;
    case RISCV::V19: OpKind = MCK_VRNoV0; break;
    case RISCV::V20: OpKind = MCK_VRNoV0; break;
    case RISCV::V21: OpKind = MCK_VRNoV0; break;
    case RISCV::V22: OpKind = MCK_VRNoV0; break;
    case RISCV::V23: OpKind = MCK_VRNoV0; break;
    case RISCV::V24: OpKind = MCK_VRNoV0; break;
    case RISCV::V25: OpKind = MCK_VRNoV0; break;
    case RISCV::V26: OpKind = MCK_VRNoV0; break;
    case RISCV::V27: OpKind = MCK_VRNoV0; break;
    case RISCV::V28: OpKind = MCK_VRNoV0; break;
    case RISCV::V29: OpKind = MCK_VRNoV0; break;
    case RISCV::V30: OpKind = MCK_VRNoV0; break;
    case RISCV::V31: OpKind = MCK_VRNoV0; break;
    case RISCV::V0M2: OpKind = MCK_Reg26; break;
    case RISCV::V2M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V4M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V6M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V8M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V10M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V12M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V14M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V16M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V18M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V20M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V22M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V24M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V26M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V28M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V30M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V0M4: OpKind = MCK_Reg29; break;
    case RISCV::V4M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V8M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V12M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V16M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V20M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V24M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V28M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V0M8: OpKind = MCK_Reg32; break;
    case RISCV::V8M8: OpKind = MCK_VRM8NoV0; break;
    case RISCV::V16M8: OpKind = MCK_VRM8NoV0; break;
    case RISCV::V24M8: OpKind = MCK_VRM8NoV0; break;
    case RISCV::VTYPE: OpKind = MCK_VCSR; break;
    case RISCV::VL: OpKind = MCK_VCSR; break;
    case RISCV::VLENB: OpKind = MCK_VCSR; break;
    case RISCV::DUMMY_REG_PAIR_WITH_X0: OpKind = MCK_GPRAll; break;
    case RISCV::X0_Pair: OpKind = MCK_Reg36; break;
    case RISCV::X2_X3: OpKind = MCK_Reg38; break;
    case RISCV::X4_X5: OpKind = MCK_Reg40; break;
    case RISCV::X6_X7: OpKind = MCK_Reg42; break;
    case RISCV::X8_X9: OpKind = MCK_Reg45; break;
    case RISCV::X10_X11: OpKind = MCK_Reg49; break;
    case RISCV::X12_X13: OpKind = MCK_Reg49; break;
    case RISCV::X14_X15: OpKind = MCK_Reg49; break;
    case RISCV::X16_X17: OpKind = MCK_Reg50; break;
    case RISCV::X18_X19: OpKind = MCK_Reg48; break;
    case RISCV::X20_X21: OpKind = MCK_Reg48; break;
    case RISCV::X22_X23: OpKind = MCK_Reg48; break;
    case RISCV::X24_X25: OpKind = MCK_Reg47; break;
    case RISCV::X26_X27: OpKind = MCK_Reg47; break;
    case RISCV::X28_X29: OpKind = MCK_Reg50; break;
    case RISCV::X30_X31: OpKind = MCK_Reg50; break;
    case RISCV::V8_V9: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V9_V10: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V10_V11: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V11_V12: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V12_V13: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V13_V14: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V14_V15: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V15_V16: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V16_V17: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V17_V18: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V18_V19: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V19_V20: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V20_V21: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V21_V22: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V22_V23: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V23_V24: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V24_V25: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V25_V26: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V26_V27: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V27_V28: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V28_V29: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V29_V30: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V30_V31: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V1_V2: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V2_V3: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V3_V4: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V4_V5: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V5_V6: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V6_V7: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V7_V8: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V0_V1: OpKind = MCK_Reg53; break;
    case RISCV::V8M2_V10M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V10M2_V12M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V12M2_V14M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V14M2_V16M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V16M2_V18M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V18M2_V20M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V20M2_V22M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V22M2_V24M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V24M2_V26M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V26M2_V28M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V28M2_V30M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V2M2_V4M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V4M2_V6M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V6M2_V8M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V0M2_V2M2: OpKind = MCK_Reg56; break;
    case RISCV::V8M4_V12M4: OpKind = MCK_VRN2M4NoV0; break;
    case RISCV::V12M4_V16M4: OpKind = MCK_VRN2M4NoV0; break;
    case RISCV::V16M4_V20M4: OpKind = MCK_VRN2M4NoV0; break;
    case RISCV::V20M4_V24M4: OpKind = MCK_VRN2M4NoV0; break;
    case RISCV::V24M4_V28M4: OpKind = MCK_VRN2M4NoV0; break;
    case RISCV::V4M4_V8M4: OpKind = MCK_VRN2M4NoV0; break;
    case RISCV::V0M4_V4M4: OpKind = MCK_Reg59; break;
    case RISCV::V8_V9_V10: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V9_V10_V11: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V10_V11_V12: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V11_V12_V13: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V12_V13_V14: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V13_V14_V15: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V14_V15_V16: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V15_V16_V17: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V16_V17_V18: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V17_V18_V19: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V18_V19_V20: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V19_V20_V21: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V20_V21_V22: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V21_V22_V23: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V22_V23_V24: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V23_V24_V25: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V24_V25_V26: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V25_V26_V27: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V26_V27_V28: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V27_V28_V29: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V28_V29_V30: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V29_V30_V31: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V1_V2_V3: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V2_V3_V4: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V3_V4_V5: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V4_V5_V6: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V5_V6_V7: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V6_V7_V8: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V7_V8_V9: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V0_V1_V2: OpKind = MCK_Reg62; break;
    case RISCV::V8M2_V10M2_V12M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V10M2_V12M2_V14M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V12M2_V14M2_V16M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V14M2_V16M2_V18M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V16M2_V18M2_V20M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V18M2_V20M2_V22M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V20M2_V22M2_V24M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V22M2_V24M2_V26M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V24M2_V26M2_V28M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V26M2_V28M2_V30M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V2M2_V4M2_V6M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V4M2_V6M2_V8M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V6M2_V8M2_V10M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V0M2_V2M2_V4M2: OpKind = MCK_Reg65; break;
    case RISCV::V8_V9_V10_V11: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V9_V10_V11_V12: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V10_V11_V12_V13: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V11_V12_V13_V14: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V12_V13_V14_V15: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V13_V14_V15_V16: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V14_V15_V16_V17: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V15_V16_V17_V18: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V16_V17_V18_V19: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V17_V18_V19_V20: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V18_V19_V20_V21: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V19_V20_V21_V22: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V20_V21_V22_V23: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V21_V22_V23_V24: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V22_V23_V24_V25: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V23_V24_V25_V26: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V24_V25_V26_V27: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V25_V26_V27_V28: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V26_V27_V28_V29: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V27_V28_V29_V30: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V28_V29_V30_V31: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V1_V2_V3_V4: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V2_V3_V4_V5: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V3_V4_V5_V6: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V4_V5_V6_V7: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V5_V6_V7_V8: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V6_V7_V8_V9: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V7_V8_V9_V10: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V0_V1_V2_V3: OpKind = MCK_Reg68; break;
    case RISCV::V8M2_V10M2_V12M2_V14M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V10M2_V12M2_V14M2_V16M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V12M2_V14M2_V16M2_V18M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V14M2_V16M2_V18M2_V20M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V16M2_V18M2_V20M2_V22M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V18M2_V20M2_V22M2_V24M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V20M2_V22M2_V24M2_V26M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V22M2_V24M2_V26M2_V28M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V24M2_V26M2_V28M2_V30M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V2M2_V4M2_V6M2_V8M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V4M2_V6M2_V8M2_V10M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V6M2_V8M2_V10M2_V12M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V0M2_V2M2_V4M2_V6M2: OpKind = MCK_Reg71; break;
    case RISCV::V8_V9_V10_V11_V12: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V9_V10_V11_V12_V13: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V10_V11_V12_V13_V14: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V11_V12_V13_V14_V15: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V12_V13_V14_V15_V16: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V13_V14_V15_V16_V17: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V14_V15_V16_V17_V18: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V15_V16_V17_V18_V19: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V16_V17_V18_V19_V20: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V17_V18_V19_V20_V21: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V18_V19_V20_V21_V22: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V19_V20_V21_V22_V23: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V20_V21_V22_V23_V24: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V21_V22_V23_V24_V25: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V22_V23_V24_V25_V26: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V23_V24_V25_V26_V27: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V24_V25_V26_V27_V28: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V25_V26_V27_V28_V29: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V26_V27_V28_V29_V30: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V27_V28_V29_V30_V31: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V1_V2_V3_V4_V5: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V2_V3_V4_V5_V6: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V3_V4_V5_V6_V7: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V4_V5_V6_V7_V8: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V5_V6_V7_V8_V9: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V6_V7_V8_V9_V10: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V7_V8_V9_V10_V11: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V0_V1_V2_V3_V4: OpKind = MCK_Reg74; break;
    case RISCV::V8_V9_V10_V11_V12_V13: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V9_V10_V11_V12_V13_V14: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V10_V11_V12_V13_V14_V15: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V11_V12_V13_V14_V15_V16: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V12_V13_V14_V15_V16_V17: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V13_V14_V15_V16_V17_V18: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V14_V15_V16_V17_V18_V19: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V15_V16_V17_V18_V19_V20: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V16_V17_V18_V19_V20_V21: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V17_V18_V19_V20_V21_V22: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V18_V19_V20_V21_V22_V23: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V19_V20_V21_V22_V23_V24: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V20_V21_V22_V23_V24_V25: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V21_V22_V23_V24_V25_V26: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V22_V23_V24_V25_V26_V27: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V23_V24_V25_V26_V27_V28: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V24_V25_V26_V27_V28_V29: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V25_V26_V27_V28_V29_V30: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V26_V27_V28_V29_V30_V31: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V1_V2_V3_V4_V5_V6: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V2_V3_V4_V5_V6_V7: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V3_V4_V5_V6_V7_V8: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V4_V5_V6_V7_V8_V9: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V5_V6_V7_V8_V9_V10: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V6_V7_V8_V9_V10_V11: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V7_V8_V9_V10_V11_V12: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V0_V1_V2_V3_V4_V5: OpKind = MCK_Reg77; break;
    case RISCV::V8_V9_V10_V11_V12_V13_V14: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V9_V10_V11_V12_V13_V14_V15: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V10_V11_V12_V13_V14_V15_V16: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V11_V12_V13_V14_V15_V16_V17: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V12_V13_V14_V15_V16_V17_V18: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V13_V14_V15_V16_V17_V18_V19: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V14_V15_V16_V17_V18_V19_V20: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V15_V16_V17_V18_V19_V20_V21: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V16_V17_V18_V19_V20_V21_V22: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V17_V18_V19_V20_V21_V22_V23: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V18_V19_V20_V21_V22_V23_V24: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V19_V20_V21_V22_V23_V24_V25: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V20_V21_V22_V23_V24_V25_V26: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V21_V22_V23_V24_V25_V26_V27: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V22_V23_V24_V25_V26_V27_V28: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V23_V24_V25_V26_V27_V28_V29: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V24_V25_V26_V27_V28_V29_V30: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V25_V26_V27_V28_V29_V30_V31: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V1_V2_V3_V4_V5_V6_V7: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V2_V3_V4_V5_V6_V7_V8: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V3_V4_V5_V6_V7_V8_V9: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V4_V5_V6_V7_V8_V9_V10: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V5_V6_V7_V8_V9_V10_V11: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V6_V7_V8_V9_V10_V11_V12: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V7_V8_V9_V10_V11_V12_V13: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V0_V1_V2_V3_V4_V5_V6: OpKind = MCK_Reg80; break;
    case RISCV::V8_V9_V10_V11_V12_V13_V14_V15: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V9_V10_V11_V12_V13_V14_V15_V16: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V10_V11_V12_V13_V14_V15_V16_V17: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V11_V12_V13_V14_V15_V16_V17_V18: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V12_V13_V14_V15_V16_V17_V18_V19: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V13_V14_V15_V16_V17_V18_V19_V20: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V14_V15_V16_V17_V18_V19_V20_V21: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V15_V16_V17_V18_V19_V20_V21_V22: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V16_V17_V18_V19_V20_V21_V22_V23: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V17_V18_V19_V20_V21_V22_V23_V24: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V18_V19_V20_V21_V22_V23_V24_V25: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V19_V20_V21_V22_V23_V24_V25_V26: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V20_V21_V22_V23_V24_V25_V26_V27: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V21_V22_V23_V24_V25_V26_V27_V28: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V22_V23_V24_V25_V26_V27_V28_V29: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V23_V24_V25_V26_V27_V28_V29_V30: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V24_V25_V26_V27_V28_V29_V30_V31: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V1_V2_V3_V4_V5_V6_V7_V8: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V2_V3_V4_V5_V6_V7_V8_V9: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V3_V4_V5_V6_V7_V8_V9_V10: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V4_V5_V6_V7_V8_V9_V10_V11: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V5_V6_V7_V8_V9_V10_V11_V12: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V6_V7_V8_V9_V10_V11_V12_V13: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V7_V8_V9_V10_V11_V12_V13_V14: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V0_V1_V2_V3_V4_V5_V6_V7: OpKind = MCK_Reg83; break;
    }
    return isSubclass(OpKind, Kind) ? (unsigned)MCTargetAsmParser::Match_Success :
                                      getDiagKindFromRegisterClass(Kind);
  }

  if (Kind > MCK_LAST_TOKEN && Kind <= MCK_LAST_REGISTER)
    return getDiagKindFromRegisterClass(Kind);

  return MCTargetAsmParser::Match_InvalidOperand;
}

#ifndef NDEBUG
const char *getMatchClassName(MatchClassKind Kind) {
  switch (Kind) {
  case InvalidMatchClass: return "InvalidMatchClass";
  case OptionalMatchClass: return "OptionalMatchClass";
  case MCK__40_: return "MCK__40_";
  case MCK__41_: return "MCK__41_";
  case MCK_Reg83: return "MCK_Reg83";
  case MCK_Reg80: return "MCK_Reg80";
  case MCK_Reg77: return "MCK_Reg77";
  case MCK_Reg74: return "MCK_Reg74";
  case MCK_Reg71: return "MCK_Reg71";
  case MCK_Reg68: return "MCK_Reg68";
  case MCK_Reg65: return "MCK_Reg65";
  case MCK_Reg62: return "MCK_Reg62";
  case MCK_Reg59: return "MCK_Reg59";
  case MCK_Reg56: return "MCK_Reg56";
  case MCK_Reg53: return "MCK_Reg53";
  case MCK_Reg45: return "MCK_Reg45";
  case MCK_Reg42: return "MCK_Reg42";
  case MCK_Reg40: return "MCK_Reg40";
  case MCK_Reg38: return "MCK_Reg38";
  case MCK_Reg36: return "MCK_Reg36";
  case MCK_Reg32: return "MCK_Reg32";
  case MCK_Reg29: return "MCK_Reg29";
  case MCK_Reg26: return "MCK_Reg26";
  case MCK_GPRX0: return "MCK_GPRX0";
  case MCK_GPRX1: return "MCK_GPRX1";
  case MCK_GPRX5: return "MCK_GPRX5";
  case MCK_GPRX7: return "MCK_GPRX7";
  case MCK_SP: return "MCK_SP";
  case MCK_VMV0: return "MCK_VMV0";
  case MCK_Reg14: return "MCK_Reg14";
  case MCK_GPRX1X5: return "MCK_GPRX1X5";
  case MCK_Reg49: return "MCK_Reg49";
  case MCK_VCSR: return "MCK_VCSR";
  case MCK_VRM8NoV0: return "MCK_VRM8NoV0";
  case MCK_Reg48: return "MCK_Reg48";
  case MCK_Reg46: return "MCK_Reg46";
  case MCK_VRM8: return "MCK_VRM8";
  case MCK_Reg50: return "MCK_Reg50";
  case MCK_Reg17: return "MCK_Reg17";
  case MCK_VRN2M4NoV0: return "MCK_VRN2M4NoV0";
  case MCK_Reg44: return "MCK_Reg44";
  case MCK_VRM4NoV0: return "MCK_VRM4NoV0";
  case MCK_VRN2M4: return "MCK_VRN2M4";
  case MCK_FPR32C: return "MCK_FPR32C";
  case MCK_FPR64C: return "MCK_FPR64C";
  case MCK_GPRC: return "MCK_GPRC";
  case MCK_SR07: return "MCK_SR07";
  case MCK_VRM4: return "MCK_VRM4";
  case MCK_Reg47: return "MCK_Reg47";
  case MCK_VRN4M2NoV0: return "MCK_VRN4M2NoV0";
  case MCK_Reg43: return "MCK_Reg43";
  case MCK_GPRTCNonX7: return "MCK_GPRTCNonX7";
  case MCK_VRN3M2NoV0: return "MCK_VRN3M2NoV0";
  case MCK_VRN4M2: return "MCK_VRN4M2";
  case MCK_Reg41: return "MCK_Reg41";
  case MCK_GPRTC: return "MCK_GPRTC";
  case MCK_VRN2M2NoV0: return "MCK_VRN2M2NoV0";
  case MCK_VRN3M2: return "MCK_VRN3M2";
  case MCK_Reg39: return "MCK_Reg39";
  case MCK_VRM2NoV0: return "MCK_VRM2NoV0";
  case MCK_VRN2M2: return "MCK_VRN2M2";
  case MCK_GPRPair: return "MCK_GPRPair";
  case MCK_VRM2: return "MCK_VRM2";
  case MCK_VRN8M1NoV0: return "MCK_VRN8M1NoV0";
  case MCK_GPRJALRNonX7: return "MCK_GPRJALRNonX7";
  case MCK_VRN7M1NoV0: return "MCK_VRN7M1NoV0";
  case MCK_VRN8M1: return "MCK_VRN8M1";
  case MCK_GPRJALR: return "MCK_GPRJALR";
  case MCK_VRN6M1NoV0: return "MCK_VRN6M1NoV0";
  case MCK_VRN7M1: return "MCK_VRN7M1";
  case MCK_VRN5M1NoV0: return "MCK_VRN5M1NoV0";
  case MCK_VRN6M1: return "MCK_VRN6M1";
  case MCK_VRN4M1NoV0: return "MCK_VRN4M1NoV0";
  case MCK_VRN5M1: return "MCK_VRN5M1";
  case MCK_VRN3M1NoV0: return "MCK_VRN3M1NoV0";
  case MCK_VRN4M1: return "MCK_VRN4M1";
  case MCK_GPRNoX0X2: return "MCK_GPRNoX0X2";
  case MCK_VRN2M1NoV0: return "MCK_VRN2M1NoV0";
  case MCK_VRN3M1: return "MCK_VRN3M1";
  case MCK_GPRNoX0: return "MCK_GPRNoX0";
  case MCK_VRN2M1: return "MCK_VRN2M1";
  case MCK_VRNoV0: return "MCK_VRNoV0";
  case MCK_FPR16: return "MCK_FPR16";
  case MCK_FPR32: return "MCK_FPR32";
  case MCK_FPR64: return "MCK_FPR64";
  case MCK_GPR: return "MCK_GPR";
  case MCK_VM: return "MCK_VM";
  case MCK_GPRAll: return "MCK_GPRAll";
  case MCK_AnyRegCOperand: return "MCK_AnyRegCOperand";
  case MCK_AnyRegOperand: return "MCK_AnyRegOperand";
  case MCK_BareSymbol: return "MCK_BareSymbol";
  case MCK_CLUIImm: return "MCK_CLUIImm";
  case MCK_CSRSystemRegister: return "MCK_CSRSystemRegister";
  case MCK_RegReg: return "MCK_RegReg";
  case MCK_CallSymbol: return "MCK_CallSymbol";
  case MCK_FRMArg: return "MCK_FRMArg";
  case MCK_FRMArgLegacy: return "MCK_FRMArgLegacy";
  case MCK_FenceArg: return "MCK_FenceArg";
  case MCK_GPRAsFPR: return "MCK_GPRAsFPR";
  case MCK_GPRF64AsFPR: return "MCK_GPRF64AsFPR";
  case MCK_GPRPairAsFPR: return "MCK_GPRPairAsFPR";
  case MCK_GPRPairRV32: return "MCK_GPRPairRV32";
  case MCK_GPRPairRV64: return "MCK_GPRPairRV64";
  case MCK_Imm: return "MCK_Imm";
  case MCK_ImmZero: return "MCK_ImmZero";
  case MCK_InsnCDirectiveOpcode: return "MCK_InsnCDirectiveOpcode";
  case MCK_InsnDirectiveOpcode: return "MCK_InsnDirectiveOpcode";
  case MCK_LoadFPImm: return "MCK_LoadFPImm";
  case MCK_NegStackAdj: return "MCK_NegStackAdj";
  case MCK_PseudoJumpSymbol: return "MCK_PseudoJumpSymbol";
  case MCK_RTZArg: return "MCK_RTZArg";
  case MCK_Rlist: return "MCK_Rlist";
  case MCK_RnumArg: return "MCK_RnumArg";
  case MCK_SImm5Plus1: return "MCK_SImm5Plus1";
  case MCK_SImm21Lsb0JAL: return "MCK_SImm21Lsb0JAL";
  case MCK_StackAdj: return "MCK_StackAdj";
  case MCK_TLSDESCCallSymbol: return "MCK_TLSDESCCallSymbol";
  case MCK_TPRelAddSymbol: return "MCK_TPRelAddSymbol";
  case MCK_UImmLog2XLen: return "MCK_UImmLog2XLen";
  case MCK_UImmLog2XLenHalf: return "MCK_UImmLog2XLenHalf";
  case MCK_UImmLog2XLenNonZero: return "MCK_UImmLog2XLenNonZero";
  case MCK_RVVMaskRegOpOperand: return "MCK_RVVMaskRegOpOperand";
  case MCK_ZeroOffsetMemOpOperand: return "MCK_ZeroOffsetMemOpOperand";
  case MCK_VTypeI10: return "MCK_VTypeI10";
  case MCK_VTypeI11: return "MCK_VTypeI11";
  case MCK_SImm5: return "MCK_SImm5";
  case MCK_SImm6: return "MCK_SImm6";
  case MCK_SImm6NonZero: return "MCK_SImm6NonZero";
  case MCK_UImm7Lsb00: return "MCK_UImm7Lsb00";
  case MCK_UImm8Lsb00: return "MCK_UImm8Lsb00";
  case MCK_UImm8Lsb000: return "MCK_UImm8Lsb000";
  case MCK_SImm9Lsb0: return "MCK_SImm9Lsb0";
  case MCK_UImm9Lsb000: return "MCK_UImm9Lsb000";
  case MCK_UImm10Lsb00NonZero: return "MCK_UImm10Lsb00NonZero";
  case MCK_SImm10Lsb0000NonZero: return "MCK_SImm10Lsb0000NonZero";
  case MCK_SImm12Lsb0: return "MCK_SImm12Lsb0";
  case MCK_UImm2Lsb0: return "MCK_UImm2Lsb0";
  case MCK_UImm8GE32: return "MCK_UImm8GE32";
  case MCK_SImm12Lsb00000: return "MCK_SImm12Lsb00000";
  case MCK_UImm5Lsb0: return "MCK_UImm5Lsb0";
  case MCK_UImm6Lsb0: return "MCK_UImm6Lsb0";
  case MCK_UImm1: return "MCK_UImm1";
  case MCK_UImm2: return "MCK_UImm2";
  case MCK_UImm3: return "MCK_UImm3";
  case MCK_UImm4: return "MCK_UImm4";
  case MCK_UImm5: return "MCK_UImm5";
  case MCK_UImm6: return "MCK_UImm6";
  case MCK_UImm7: return "MCK_UImm7";
  case MCK_UImm8: return "MCK_UImm8";
  case MCK_UImm16: return "MCK_UImm16";
  case MCK_UImm32: return "MCK_UImm32";
  case MCK_SImm12: return "MCK_SImm12";
  case MCK_SImm13Lsb0: return "MCK_SImm13Lsb0";
  case MCK_UImm20LUI: return "MCK_UImm20LUI";
  case MCK_UImm20AUIPC: return "MCK_UImm20AUIPC";
  case MCK_UImm20: return "MCK_UImm20";
  case MCK_ImmXLenLI: return "MCK_ImmXLenLI";
  case MCK_ImmXLenLI_Restricted: return "MCK_ImmXLenLI_Restricted";
  case NumMatchClassKinds: return "NumMatchClassKinds";
  }
  llvm_unreachable("unhandled MatchClassKind!");
}

#endif // NDEBUG
FeatureBitset RISCVAsmParser::
ComputeAvailableFeatures(const FeatureBitset &FB) const {
  FeatureBitset Features;
  if (FB[RISCV::FeatureStdExtZicbom])
    Features.set(Feature_HasStdExtZicbomBit);
  if (FB[RISCV::FeatureStdExtZicbop])
    Features.set(Feature_HasStdExtZicbopBit);
  if (FB[RISCV::FeatureStdExtZicboz])
    Features.set(Feature_HasStdExtZicbozBit);
  if (FB[RISCV::FeatureStdExtZicsr])
    Features.set(Feature_HasStdExtZicsrBit);
  if (FB[RISCV::FeatureStdExtZicond])
    Features.set(Feature_HasStdExtZicondBit);
  if (FB[RISCV::FeatureStdExtZifencei])
    Features.set(Feature_HasStdExtZifenceiBit);
  if (FB[RISCV::FeatureStdExtZihintpause])
    Features.set(Feature_HasStdExtZihintpauseBit);
  if (FB[RISCV::FeatureStdExtZihintntl])
    Features.set(Feature_HasStdExtZihintntlBit);
  if (FB[RISCV::FeatureStdExtZimop])
    Features.set(Feature_HasStdExtZimopBit);
  if (FB[RISCV::FeatureStdExtZicfilp])
    Features.set(Feature_HasStdExtZicfilpBit);
  if (!FB[RISCV::FeatureStdExtZicfilp])
    Features.set(Feature_NoStdExtZicfilpBit);
  if (FB[RISCV::FeatureStdExtZicfiss])
    Features.set(Feature_HasStdExtZicfissBit);
  if (FB[RISCV::FeatureStdExtZmmul])
    Features.set(Feature_HasStdExtZmmulBit);
  if (FB[RISCV::FeatureStdExtM])
    Features.set(Feature_HasStdExtMBit);
  if (FB[RISCV::FeatureStdExtA])
    Features.set(Feature_HasStdExtABit);
  if (FB[RISCV::FeatureStdExtZtso])
    Features.set(Feature_HasStdExtZtsoBit);
  if (FB[RISCV::FeatureStdExtA] || FB[RISCV::FeatureStdExtZaamo])
    Features.set(Feature_HasStdExtAOrZaamoBit);
  if (FB[RISCV::FeatureStdExtZabha])
    Features.set(Feature_HasStdExtZabhaBit);
  if (FB[RISCV::FeatureStdExtZacas])
    Features.set(Feature_HasStdExtZacasBit);
  if (FB[RISCV::FeatureStdExtZalasr])
    Features.set(Feature_HasStdExtZalasrBit);
  if (FB[RISCV::FeatureStdExtA] || FB[RISCV::FeatureStdExtZalrsc])
    Features.set(Feature_HasStdExtAOrZalrscBit);
  if (FB[RISCV::FeatureStdExtZawrs])
    Features.set(Feature_HasStdExtZawrsBit);
  if (FB[RISCV::FeatureStdExtF])
    Features.set(Feature_HasStdExtFBit);
  if (FB[RISCV::FeatureStdExtD])
    Features.set(Feature_HasStdExtDBit);
  if (FB[RISCV::FeatureStdExtZfhmin])
    Features.set(Feature_HasStdExtZfhminBit);
  if (FB[RISCV::FeatureStdExtZfh])
    Features.set(Feature_HasStdExtZfhBit);
  if (FB[RISCV::FeatureStdExtZfbfmin])
    Features.set(Feature_HasStdExtZfbfminBit);
  if (FB[RISCV::FeatureStdExtZfh] || FB[RISCV::FeatureStdExtZfhmin] || FB[RISCV::FeatureStdExtZfbfmin])
    Features.set(Feature_HasHalfFPLoadStoreMoveBit);
  if (FB[RISCV::FeatureStdExtZfa])
    Features.set(Feature_HasStdExtZfaBit);
  if (FB[RISCV::FeatureStdExtZfinx])
    Features.set(Feature_HasStdExtZfinxBit);
  if (FB[RISCV::FeatureStdExtZdinx])
    Features.set(Feature_HasStdExtZdinxBit);
  if (FB[RISCV::FeatureStdExtZhinxmin])
    Features.set(Feature_HasStdExtZhinxminBit);
  if (FB[RISCV::FeatureStdExtZhinx])
    Features.set(Feature_HasStdExtZhinxBit);
  if (FB[RISCV::FeatureStdExtC])
    Features.set(Feature_HasStdExtCBit);
  if (!FB[RISCV::FeatureNoRVCHints])
    Features.set(Feature_HasRVCHintsBit);
  if (FB[RISCV::FeatureStdExtC] || FB[RISCV::FeatureStdExtZca])
    Features.set(Feature_HasStdExtCOrZcaBit);
  if (FB[RISCV::FeatureStdExtZcb])
    Features.set(Feature_HasStdExtZcbBit);
  if (FB[RISCV::FeatureStdExtC] || FB[RISCV::FeatureStdExtZcd])
    Features.set(Feature_HasStdExtCOrZcdBit);
  if (FB[RISCV::FeatureStdExtZcmp])
    Features.set(Feature_HasStdExtZcmpBit);
  if (FB[RISCV::FeatureStdExtZcmt])
    Features.set(Feature_HasStdExtZcmtBit);
  if (FB[RISCV::FeatureStdExtC] || FB[RISCV::FeatureStdExtZcf] || FB[RISCV::FeatureStdExtZce])
    Features.set(Feature_HasStdExtCOrZcfOrZceBit);
  if (FB[RISCV::FeatureStdExtZcmop])
    Features.set(Feature_HasStdExtZcmopBit);
  if (FB[RISCV::FeatureStdExtZba])
    Features.set(Feature_HasStdExtZbaBit);
  if (FB[RISCV::FeatureStdExtZbb])
    Features.set(Feature_HasStdExtZbbBit);
  if (!FB[RISCV::FeatureStdExtZbb])
    Features.set(Feature_NoStdExtZbbBit);
  if (FB[RISCV::FeatureStdExtZbc])
    Features.set(Feature_HasStdExtZbcBit);
  if (FB[RISCV::FeatureStdExtZbs])
    Features.set(Feature_HasStdExtZbsBit);
  if (FB[RISCV::FeatureStdExtB])
    Features.set(Feature_HasStdExtBBit);
  if (FB[RISCV::FeatureStdExtZbkb])
    Features.set(Feature_HasStdExtZbkbBit);
  if (FB[RISCV::FeatureStdExtZbkx])
    Features.set(Feature_HasStdExtZbkxBit);
  if (FB[RISCV::FeatureStdExtZbb] || FB[RISCV::FeatureStdExtZbkb])
    Features.set(Feature_HasStdExtZbbOrZbkbBit);
  if (FB[RISCV::FeatureStdExtZbkc])
    Features.set(Feature_HasStdExtZbkcBit);
  if (FB[RISCV::FeatureStdExtZbc] || FB[RISCV::FeatureStdExtZbkc])
    Features.set(Feature_HasStdExtZbcOrZbkcBit);
  if (FB[RISCV::FeatureStdExtZknd])
    Features.set(Feature_HasStdExtZkndBit);
  if (FB[RISCV::FeatureStdExtZkne])
    Features.set(Feature_HasStdExtZkneBit);
  if (FB[RISCV::FeatureStdExtZknd] || FB[RISCV::FeatureStdExtZkne])
    Features.set(Feature_HasStdExtZkndOrZkneBit);
  if (FB[RISCV::FeatureStdExtZknh])
    Features.set(Feature_HasStdExtZknhBit);
  if (FB[RISCV::FeatureStdExtZksed])
    Features.set(Feature_HasStdExtZksedBit);
  if (FB[RISCV::FeatureStdExtZksh])
    Features.set(Feature_HasStdExtZkshBit);
  if (FB[RISCV::FeatureStdExtZkr])
    Features.set(Feature_HasStdExtZkrBit);
  if (FB[RISCV::FeatureStdExtZvfbfmin])
    Features.set(Feature_HasStdExtZvfbfminBit);
  if (FB[RISCV::FeatureStdExtZvfbfwma])
    Features.set(Feature_HasStdExtZvfbfwmaBit);
  if (FB[RISCV::FeatureStdExtZfh] || FB[RISCV::FeatureStdExtZvfh])
    Features.set(Feature_HasStdExtZfhOrZvfhBit);
  if (FB[RISCV::FeatureStdExtZvkb])
    Features.set(Feature_HasStdExtZvkbBit);
  if (FB[RISCV::FeatureStdExtZvbb])
    Features.set(Feature_HasStdExtZvbbBit);
  if (FB[RISCV::FeatureStdExtZvbc])
    Features.set(Feature_HasStdExtZvbcBit);
  if (FB[RISCV::FeatureStdExtZvkg])
    Features.set(Feature_HasStdExtZvkgBit);
  if (FB[RISCV::FeatureStdExtZvkned])
    Features.set(Feature_HasStdExtZvknedBit);
  if (FB[RISCV::FeatureStdExtZvknha])
    Features.set(Feature_HasStdExtZvknhaBit);
  if (FB[RISCV::FeatureStdExtZvknhb])
    Features.set(Feature_HasStdExtZvknhbBit);
  if (FB[RISCV::FeatureStdExtZvknha] || FB[RISCV::FeatureStdExtZvknhb])
    Features.set(Feature_HasStdExtZvknhaOrZvknhbBit);
  if (FB[RISCV::FeatureStdExtZvksed])
    Features.set(Feature_HasStdExtZvksedBit);
  if (FB[RISCV::FeatureStdExtZvksh])
    Features.set(Feature_HasStdExtZvkshBit);
  if (FB[RISCV::FeatureStdExtZve32x])
    Features.set(Feature_HasVInstructionsBit);
  if (FB[RISCV::FeatureStdExtZve64x])
    Features.set(Feature_HasVInstructionsI64Bit);
  if (FB[RISCV::FeatureStdExtZve32f])
    Features.set(Feature_HasVInstructionsAnyFBit);
  if (FB[RISCV::FeatureStdExtZvfhmin] || FB[RISCV::FeatureStdExtZvfh])
    Features.set(Feature_HasVInstructionsF16MinimalBit);
  if (FB[RISCV::FeatureStdExtH])
    Features.set(Feature_HasStdExtHBit);
  if (FB[RISCV::FeatureStdExtSvinval])
    Features.set(Feature_HasStdExtSvinvalBit);
  if (FB[RISCV::FeatureVendorXVentanaCondOps])
    Features.set(Feature_HasVendorXVentanaCondOpsBit);
  if (FB[RISCV::FeatureVendorXTHeadBa])
    Features.set(Feature_HasVendorXTHeadBaBit);
  if (FB[RISCV::FeatureVendorXTHeadBb])
    Features.set(Feature_HasVendorXTHeadBbBit);
  if (FB[RISCV::FeatureVendorXTHeadBs])
    Features.set(Feature_HasVendorXTHeadBsBit);
  if (FB[RISCV::FeatureVendorXTHeadCondMov])
    Features.set(Feature_HasVendorXTHeadCondMovBit);
  if (FB[RISCV::FeatureVendorXTHeadCmo])
    Features.set(Feature_HasVendorXTHeadCmoBit);
  if (FB[RISCV::FeatureVendorXTHeadFMemIdx])
    Features.set(Feature_HasVendorXTHeadFMemIdxBit);
  if (FB[RISCV::FeatureVendorXTHeadMac])
    Features.set(Feature_HasVendorXTHeadMacBit);
  if (FB[RISCV::FeatureVendorXTHeadMemIdx])
    Features.set(Feature_HasVendorXTHeadMemIdxBit);
  if (FB[RISCV::FeatureVendorXTHeadMemPair])
    Features.set(Feature_HasVendorXTHeadMemPairBit);
  if (FB[RISCV::FeatureVendorXTHeadSync])
    Features.set(Feature_HasVendorXTHeadSyncBit);
  if (FB[RISCV::FeatureVendorXTHeadVdot])
    Features.set(Feature_HasVendorXTHeadVdotBit);
  if (FB[RISCV::FeatureVendorXSfvcp])
    Features.set(Feature_HasVendorXSfvcpBit);
  if (FB[RISCV::FeatureVendorXSfvqmaccdod])
    Features.set(Feature_HasVendorXSfvqmaccdodBit);
  if (FB[RISCV::FeatureVendorXSfvqmaccqoq])
    Features.set(Feature_HasVendorXSfvqmaccqoqBit);
  if (FB[RISCV::FeatureVendorXSfvfwmaccqqq])
    Features.set(Feature_HasVendorXSfvfwmaccqqqBit);
  if (FB[RISCV::FeatureVendorXSfvfnrclipxfqf])
    Features.set(Feature_HasVendorXSfvfnrclipxfqfBit);
  if (FB[RISCV::FeatureVendorXSiFivecdiscarddlone])
    Features.set(Feature_HasVendorXSiFivecdiscarddloneBit);
  if (FB[RISCV::FeatureVendorXSiFivecflushdlone])
    Features.set(Feature_HasVendorXSiFivecflushdloneBit);
  if (FB[RISCV::FeatureVendorXSfcease])
    Features.set(Feature_HasVendorXSfceaseBit);
  if (FB[RISCV::FeatureVendorXCVelw])
    Features.set(Feature_HasVendorXCVelwBit);
  if (FB[RISCV::FeatureVendorXCVbitmanip])
    Features.set(Feature_HasVendorXCVbitmanipBit);
  if (FB[RISCV::FeatureVendorXCVmac])
    Features.set(Feature_HasVendorXCVmacBit);
  if (FB[RISCV::FeatureVendorXCVmem])
    Features.set(Feature_HasVendorXCVmemBit);
  if (FB[RISCV::FeatureVendorXCValu])
    Features.set(Feature_HasVendorXCValuBit);
  if (FB[RISCV::FeatureVendorXCVsimd])
    Features.set(Feature_HasVendorXCVsimdBit);
  if (FB[RISCV::FeatureVendorXCVbi])
    Features.set(Feature_HasVendorXCVbiBit);
  if (FB[RISCV::FeatureVendorXwchc])
    Features.set(Feature_HasVendorXwchcBit);
  if (FB[RISCV::Feature64Bit])
    Features.set(Feature_IsRV64Bit);
  if (!FB[RISCV::Feature64Bit])
    Features.set(Feature_IsRV32Bit);
  return Features;
}

static bool checkAsmTiedOperandConstraints(const RISCVAsmParser&AsmParser,
                               unsigned Kind, const OperandVector &Operands,
                               ArrayRef<unsigned> DefaultsOffset,
                               uint64_t &ErrorInfo) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p += 2) {
    switch (*p) {
    case CVT_Tied: {
      unsigned OpIdx = *(p + 1);
      assert(OpIdx < (size_t)(std::end(TiedAsmOperandTable) -
                              std::begin(TiedAsmOperandTable)) &&
             "Tied operand not found");
      unsigned OpndNum1 = TiedAsmOperandTable[OpIdx][1];
      unsigned OpndNum2 = TiedAsmOperandTable[OpIdx][2];
      OpndNum1 = OpndNum1 - DefaultsOffset[OpndNum1];
      OpndNum2 = OpndNum2 - DefaultsOffset[OpndNum2];
      if (OpndNum1 != OpndNum2) {
        auto &SrcOp1 = Operands[OpndNum1];
        auto &SrcOp2 = Operands[OpndNum2];
        if (!AsmParser.areEqualRegs(*SrcOp1, *SrcOp2)) {
          ErrorInfo = OpndNum2;
          return false;
        }
      }
      break;
    }
    default:
      break;
    }
  }
  return true;
}

static const char MnemonicTable[] =
    "\007.insn_b\010.insn_ca\010.insn_cb\010.insn_ci\t.insn_ciw\010.insn_cj\010"
    ".insn_cl\010.insn_cr\010.insn_cs\t.insn_css\007.insn_i\007.insn_j\007.i"
    "nsn_r\010.insn_r4\007.insn_s\010.insn_sb\007.insn_u\010.insn_uj\003add\006"
    "add.uw\004addi\005addiw\004addw\010aes32dsi\taes32dsmi\010aes32esi\taes"
    "32esmi\007aes64ds\010aes64dsm\007aes64es\010aes64esm\007aes64im\taes64k"
    "s1i\010aes64ks2\010amoadd.b\013amoadd.b.aq\015amoadd.b.aqrl\013amoadd.b"
    ".rl\010amoadd.d\013amoadd.d.aq\015amoadd.d.aqrl\013amoadd.d.rl\010amoad"
    "d.h\013amoadd.h.aq\015amoadd.h.aqrl\013amoadd.h.rl\010amoadd.w\013amoad"
    "d.w.aq\015amoadd.w.aqrl\013amoadd.w.rl\010amoand.b\013amoand.b.aq\015am"
    "oand.b.aqrl\013amoand.b.rl\010amoand.d\013amoand.d.aq\015amoand.d.aqrl\013"
    "amoand.d.rl\010amoand.h\013amoand.h.aq\015amoand.h.aqrl\013amoand.h.rl\010"
    "amoand.w\013amoand.w.aq\015amoand.w.aqrl\013amoand.w.rl\010amocas.b\013"
    "amocas.b.aq\015amocas.b.aqrl\013amocas.b.rl\010amocas.d\013amocas.d.aq\015"
    "amocas.d.aqrl\013amocas.d.rl\010amocas.h\013amocas.h.aq\015amocas.h.aqr"
    "l\013amocas.h.rl\010amocas.q\013amocas.q.aq\015amocas.q.aqrl\013amocas."
    "q.rl\010amocas.w\013amocas.w.aq\015amocas.w.aqrl\013amocas.w.rl\010amom"
    "ax.b\013amomax.b.aq\015amomax.b.aqrl\013amomax.b.rl\010amomax.d\013amom"
    "ax.d.aq\015amomax.d.aqrl\013amomax.d.rl\010amomax.h\013amomax.h.aq\015a"
    "momax.h.aqrl\013amomax.h.rl\010amomax.w\013amomax.w.aq\015amomax.w.aqrl"
    "\013amomax.w.rl\tamomaxu.b\014amomaxu.b.aq\016amomaxu.b.aqrl\014amomaxu"
    ".b.rl\tamomaxu.d\014amomaxu.d.aq\016amomaxu.d.aqrl\014amomaxu.d.rl\tamo"
    "maxu.h\014amomaxu.h.aq\016amomaxu.h.aqrl\014amomaxu.h.rl\tamomaxu.w\014"
    "amomaxu.w.aq\016amomaxu.w.aqrl\014amomaxu.w.rl\010amomin.b\013amomin.b."
    "aq\015amomin.b.aqrl\013amomin.b.rl\010amomin.d\013amomin.d.aq\015amomin"
    ".d.aqrl\013amomin.d.rl\010amomin.h\013amomin.h.aq\015amomin.h.aqrl\013a"
    "momin.h.rl\010amomin.w\013amomin.w.aq\015amomin.w.aqrl\013amomin.w.rl\t"
    "amominu.b\014amominu.b.aq\016amominu.b.aqrl\014amominu.b.rl\tamominu.d\014"
    "amominu.d.aq\016amominu.d.aqrl\014amominu.d.rl\tamominu.h\014amominu.h."
    "aq\016amominu.h.aqrl\014amominu.h.rl\tamominu.w\014amominu.w.aq\016amom"
    "inu.w.aqrl\014amominu.w.rl\007amoor.b\namoor.b.aq\014amoor.b.aqrl\namoo"
    "r.b.rl\007amoor.d\namoor.d.aq\014amoor.d.aqrl\namoor.d.rl\007amoor.h\na"
    "moor.h.aq\014amoor.h.aqrl\namoor.h.rl\007amoor.w\namoor.w.aq\014amoor.w"
    ".aqrl\namoor.w.rl\tamoswap.b\014amoswap.b.aq\016amoswap.b.aqrl\014amosw"
    "ap.b.rl\tamoswap.d\014amoswap.d.aq\016amoswap.d.aqrl\014amoswap.d.rl\ta"
    "moswap.h\014amoswap.h.aq\016amoswap.h.aqrl\014amoswap.h.rl\tamoswap.w\014"
    "amoswap.w.aq\016amoswap.w.aqrl\014amoswap.w.rl\010amoxor.b\013amoxor.b."
    "aq\015amoxor.b.aqrl\013amoxor.b.rl\010amoxor.d\013amoxor.d.aq\015amoxor"
    ".d.aqrl\013amoxor.d.rl\010amoxor.h\013amoxor.h.aq\015amoxor.h.aqrl\013a"
    "moxor.h.rl\010amoxor.w\013amoxor.w.aq\015amoxor.w.aqrl\013amoxor.w.rl\003"
    "and\004andi\004andn\005auipc\004bclr\005bclri\003beq\004beqz\004bext\005"
    "bexti\003bge\004bgeu\004bgez\003bgt\004bgtu\004bgtz\004binv\005binvi\003"
    "ble\004bleu\004blez\003blt\004bltu\004bltz\003bne\004bnez\005brev8\004b"
    "set\005bseti\005c.add\006c.addi\nc.addi16sp\nc.addi4spn\007c.addiw\006c"
    ".addw\005c.and\006c.andi\006c.beqz\006c.bnez\010c.ebreak\005c.fld\007c."
    "fldsp\005c.flw\007c.flwsp\005c.fsd\007c.fsdsp\005c.fsw\007c.fswsp\003c."
    "j\005c.jal\006c.jalr\004c.jr\005c.lbu\004c.ld\006c.ldsp\004c.lh\005c.lh"
    "u\004c.li\005c.lui\004c.lw\006c.lwsp\007c.mop.1\010c.mop.11\010c.mop.13"
    "\010c.mop.15\007c.mop.3\007c.mop.5\007c.mop.7\007c.mop.9\005c.mul\004c."
    "mv\005c.nop\005c.not\tc.ntl.all\010c.ntl.p1\nc.ntl.pall\010c.ntl.s1\004"
    "c.or\004c.sb\004c.sd\006c.sdsp\010c.sext.b\010c.sext.h\004c.sh\006c.sll"
    "i\010c.slli64\006c.srai\010c.srai64\006c.srli\010c.srli64\nc.sspopchk\010"
    "c.sspush\005c.sub\006c.subw\004c.sw\006c.swsp\007c.unimp\005c.xor\010c."
    "zext.b\010c.zext.h\010c.zext.w\004call\tcbo.clean\tcbo.flush\tcbo.inval"
    "\010cbo.zero\005clmul\006clmulh\006clmulr\003clz\004clzw\007cm.jalt\005"
    "cm.jt\tcm.mva01s\tcm.mvsa01\006cm.pop\tcm.popret\ncm.popretz\007cm.push"
    "\004cpop\005cpopw\004csrc\005csrci\004csrr\005csrrc\006csrrci\005csrrs\006"
    "csrrsi\005csrrw\006csrrwi\004csrs\005csrsi\004csrw\005csrwi\003ctz\004c"
    "tzw\006cv.abs\010cv.abs.b\010cv.abs.h\010cv.add.b\013cv.add.div2\013cv."
    "add.div4\013cv.add.div8\010cv.add.h\013cv.add.sc.b\013cv.add.sc.h\014cv"
    ".add.sci.b\014cv.add.sci.h\007cv.addn\010cv.addnr\010cv.addrn\tcv.addrn"
    "r\010cv.addun\tcv.addunr\tcv.addurn\ncv.addurnr\010cv.and.b\010cv.and.h"
    "\013cv.and.sc.b\013cv.and.sc.h\014cv.and.sci.b\014cv.and.sci.h\010cv.av"
    "g.b\010cv.avg.h\013cv.avg.sc.b\013cv.avg.sc.h\014cv.avg.sci.b\014cv.avg"
    ".sci.h\tcv.avgu.b\tcv.avgu.h\014cv.avgu.sc.b\014cv.avgu.sc.h\015cv.avgu"
    ".sci.b\015cv.avgu.sci.h\007cv.bclr\010cv.bclrr\tcv.beqimm\tcv.bitrev\tc"
    "v.bneimm\007cv.bset\010cv.bsetr\006cv.clb\007cv.clip\010cv.clipr\010cv."
    "clipu\tcv.clipur\ncv.cmpeq.b\ncv.cmpeq.h\015cv.cmpeq.sc.b\015cv.cmpeq.s"
    "c.h\016cv.cmpeq.sci.b\016cv.cmpeq.sci.h\ncv.cmpge.b\ncv.cmpge.h\015cv.c"
    "mpge.sc.b\015cv.cmpge.sc.h\016cv.cmpge.sci.b\016cv.cmpge.sci.h\013cv.cm"
    "pgeu.b\013cv.cmpgeu.h\016cv.cmpgeu.sc.b\016cv.cmpgeu.sc.h\017cv.cmpgeu."
    "sci.b\017cv.cmpgeu.sci.h\ncv.cmpgt.b\ncv.cmpgt.h\015cv.cmpgt.sc.b\015cv"
    ".cmpgt.sc.h\016cv.cmpgt.sci.b\016cv.cmpgt.sci.h\013cv.cmpgtu.b\013cv.cm"
    "pgtu.h\016cv.cmpgtu.sc.b\016cv.cmpgtu.sc.h\017cv.cmpgtu.sci.b\017cv.cmp"
    "gtu.sci.h\ncv.cmple.b\ncv.cmple.h\015cv.cmple.sc.b\015cv.cmple.sc.h\016"
    "cv.cmple.sci.b\016cv.cmple.sci.h\013cv.cmpleu.b\013cv.cmpleu.h\016cv.cm"
    "pleu.sc.b\016cv.cmpleu.sc.h\017cv.cmpleu.sci.b\017cv.cmpleu.sci.h\ncv.c"
    "mplt.b\ncv.cmplt.h\015cv.cmplt.sc.b\015cv.cmplt.sc.h\016cv.cmplt.sci.b\016"
    "cv.cmplt.sci.h\013cv.cmpltu.b\013cv.cmpltu.h\016cv.cmpltu.sc.b\016cv.cm"
    "pltu.sc.h\017cv.cmpltu.sci.b\017cv.cmpltu.sci.h\ncv.cmpne.b\ncv.cmpne.h"
    "\015cv.cmpne.sc.b\015cv.cmpne.sc.h\016cv.cmpne.sci.b\016cv.cmpne.sci.h\006"
    "cv.cnt\013cv.cplxconj\014cv.cplxmul.i\021cv.cplxmul.i.div2\021cv.cplxmu"
    "l.i.div4\021cv.cplxmul.i.div8\014cv.cplxmul.r\021cv.cplxmul.r.div2\021c"
    "v.cplxmul.r.div4\021cv.cplxmul.r.div8\ncv.dotsp.b\ncv.dotsp.h\015cv.dot"
    "sp.sc.b\015cv.dotsp.sc.h\016cv.dotsp.sci.b\016cv.dotsp.sci.h\ncv.dotup."
    "b\ncv.dotup.h\015cv.dotup.sc.b\015cv.dotup.sc.h\016cv.dotup.sci.b\016cv"
    ".dotup.sci.h\013cv.dotusp.b\013cv.dotusp.h\016cv.dotusp.sc.b\016cv.dotu"
    "sp.sc.h\017cv.dotusp.sci.b\017cv.dotusp.sci.h\006cv.elw\010cv.extbs\010"
    "cv.extbz\010cv.exths\010cv.exthz\ncv.extract\014cv.extract.b\014cv.extr"
    "act.h\013cv.extractr\013cv.extractu\015cv.extractu.b\015cv.extractu.h\014"
    "cv.extractur\006cv.ff1\006cv.fl1\tcv.insert\013cv.insert.b\013cv.insert"
    ".h\ncv.insertr\005cv.lb\006cv.lbu\005cv.lh\006cv.lhu\005cv.lw\006cv.mac"
    "\ncv.machhsn\013cv.machhsrn\ncv.machhun\013cv.machhurn\010cv.macsn\tcv."
    "macsrn\010cv.macun\tcv.macurn\006cv.max\010cv.max.b\010cv.max.h\013cv.m"
    "ax.sc.b\013cv.max.sc.h\014cv.max.sci.b\014cv.max.sci.h\007cv.maxu\tcv.m"
    "axu.b\tcv.maxu.h\014cv.maxu.sc.b\014cv.maxu.sc.h\015cv.maxu.sci.b\015cv"
    ".maxu.sci.h\006cv.min\010cv.min.b\010cv.min.h\013cv.min.sc.b\013cv.min."
    "sc.h\014cv.min.sci.b\014cv.min.sci.h\007cv.minu\tcv.minu.b\tcv.minu.h\014"
    "cv.minu.sc.b\014cv.minu.sc.h\015cv.minu.sci.b\015cv.minu.sci.h\006cv.ms"
    "u\tcv.mulhhs\ncv.mulhhsn\013cv.mulhhsrn\tcv.mulhhu\ncv.mulhhun\013cv.mu"
    "lhhurn\007cv.muls\010cv.mulsn\tcv.mulsrn\007cv.mulu\010cv.mulun\tcv.mul"
    "urn\007cv.or.b\007cv.or.h\ncv.or.sc.b\ncv.or.sc.h\013cv.or.sci.b\013cv."
    "or.sci.h\007cv.pack\tcv.pack.h\013cv.packhi.b\013cv.packlo.b\006cv.ror\005"
    "cv.sb\013cv.sdotsp.b\013cv.sdotsp.h\016cv.sdotsp.sc.b\016cv.sdotsp.sc.h"
    "\017cv.sdotsp.sci.b\017cv.sdotsp.sci.h\013cv.sdotup.b\013cv.sdotup.h\016"
    "cv.sdotup.sc.b\016cv.sdotup.sc.h\017cv.sdotup.sci.b\017cv.sdotup.sci.h\014"
    "cv.sdotusp.b\014cv.sdotusp.h\017cv.sdotusp.sc.b\017cv.sdotusp.sc.h\020c"
    "v.sdotusp.sci.b\020cv.sdotusp.sci.h\005cv.sh\014cv.shuffle.b\014cv.shuf"
    "fle.h\020cv.shuffle.sci.h\015cv.shuffle2.b\015cv.shuffle2.h\022cv.shuff"
    "lei0.sci.b\022cv.shufflei1.sci.b\022cv.shufflei2.sci.b\022cv.shufflei3."
    "sci.b\007cv.slet\010cv.sletu\010cv.sll.b\010cv.sll.h\013cv.sll.sc.b\013"
    "cv.sll.sc.h\014cv.sll.sci.b\014cv.sll.sci.h\010cv.sra.b\010cv.sra.h\013"
    "cv.sra.sc.b\013cv.sra.sc.h\014cv.sra.sci.b\014cv.sra.sci.h\010cv.srl.b\010"
    "cv.srl.h\013cv.srl.sc.b\013cv.srl.sc.h\014cv.srl.sci.b\014cv.srl.sci.h\010"
    "cv.sub.b\013cv.sub.div2\013cv.sub.div4\013cv.sub.div8\010cv.sub.h\013cv"
    ".sub.sc.b\013cv.sub.sc.h\014cv.sub.sci.b\014cv.sub.sci.h\007cv.subn\010"
    "cv.subnr\010cv.subrn\tcv.subrnr\013cv.subrotmj\020cv.subrotmj.div2\020c"
    "v.subrotmj.div4\020cv.subrotmj.div8\010cv.subun\tcv.subunr\tcv.suburn\n"
    "cv.suburnr\005cv.sw\010cv.xor.b\010cv.xor.h\013cv.xor.sc.b\013cv.xor.sc"
    ".h\014cv.xor.sci.b\014cv.xor.sci.h\tczero.eqz\tczero.nez\003div\004divu"
    "\005divuw\004divw\004dret\006ebreak\005ecall\006fabs.d\006fabs.h\006fab"
    "s.s\006fadd.d\006fadd.h\006fadd.s\010fclass.d\010fclass.h\010fclass.s\013"
    "fcvt.bf16.s\010fcvt.d.h\010fcvt.d.l\tfcvt.d.lu\010fcvt.d.s\010fcvt.d.w\t"
    "fcvt.d.wu\010fcvt.h.d\010fcvt.h.l\tfcvt.h.lu\010fcvt.h.s\010fcvt.h.w\tf"
    "cvt.h.wu\010fcvt.l.d\010fcvt.l.h\010fcvt.l.s\tfcvt.lu.d\tfcvt.lu.h\tfcv"
    "t.lu.s\013fcvt.s.bf16\010fcvt.s.d\010fcvt.s.h\010fcvt.s.l\tfcvt.s.lu\010"
    "fcvt.s.w\tfcvt.s.wu\010fcvt.w.d\010fcvt.w.h\010fcvt.w.s\tfcvt.wu.d\tfcv"
    "t.wu.h\tfcvt.wu.s\013fcvtmod.w.d\006fdiv.d\006fdiv.h\006fdiv.s\005fence"
    "\007fence.i\tfence.tso\005feq.d\005feq.h\005feq.s\005fge.d\005fge.h\005"
    "fge.s\006fgeq.d\006fgeq.h\006fgeq.s\005fgt.d\005fgt.h\005fgt.s\006fgtq."
    "d\006fgtq.h\006fgtq.s\003fld\005fle.d\005fle.h\005fle.s\006fleq.d\006fl"
    "eq.h\006fleq.s\003flh\005fli.d\005fli.h\005fli.s\005flt.d\005flt.h\005f"
    "lt.s\006fltq.d\006fltq.h\006fltq.s\003flw\007fmadd.d\007fmadd.h\007fmad"
    "d.s\006fmax.d\006fmax.h\006fmax.s\007fmaxm.d\007fmaxm.h\007fmaxm.s\006f"
    "min.d\006fmin.h\006fmin.s\007fminm.d\007fminm.h\007fminm.s\007fmsub.d\007"
    "fmsub.h\007fmsub.s\006fmul.d\006fmul.h\006fmul.s\005fmv.d\007fmv.d.x\005"
    "fmv.h\007fmv.h.x\005fmv.s\007fmv.w.x\007fmv.x.d\007fmv.x.h\007fmv.x.w\010"
    "fmvh.x.d\010fmvp.d.x\006fneg.d\006fneg.h\006fneg.s\010fnmadd.d\010fnmad"
    "d.h\010fnmadd.s\010fnmsub.d\010fnmsub.h\010fnmsub.s\005frcsr\007frflags"
    "\010fround.d\010fround.h\010fround.s\nfroundnx.d\nfroundnx.h\nfroundnx."
    "s\004frrm\004frsr\005fscsr\003fsd\007fsflags\010fsflagsi\007fsgnj.d\007"
    "fsgnj.h\007fsgnj.s\010fsgnjn.d\010fsgnjn.h\010fsgnjn.s\010fsgnjx.d\010f"
    "sgnjx.h\010fsgnjx.s\003fsh\007fsqrt.d\007fsqrt.h\007fsqrt.s\004fsrm\005"
    "fsrmi\004fssr\006fsub.d\006fsub.h\006fsub.s\003fsw\013hfence.gvma\013hf"
    "ence.vvma\013hinval.gvma\013hinval.vvma\005hlv.b\006hlv.bu\005hlv.d\005"
    "hlv.h\006hlv.hu\005hlv.w\006hlv.wu\007hlvx.hu\007hlvx.wu\005hsv.b\005hs"
    "v.d\005hsv.h\005hsv.w\001j\003jal\004jalr\002jr\004jump\002la\tla.tls.g"
    "d\tla.tls.ie\nla.tlsdesc\002lb\005lb.aq\007lb.aqrl\003lbu\002ld\005ld.a"
    "q\007ld.aqrl\003lga\002lh\005lh.aq\007lh.aqrl\003lhu\002li\003lla\004lp"
    "ad\004lr.d\007lr.d.aq\tlr.d.aqrl\007lr.d.rl\004lr.w\007lr.w.aq\tlr.w.aq"
    "rl\007lr.w.rl\003lui\002lw\005lw.aq\007lw.aqrl\003lwu\003max\004maxu\003"
    "min\004minu\007mop.r.0\007mop.r.1\010mop.r.10\010mop.r.11\010mop.r.12\010"
    "mop.r.13\010mop.r.14\010mop.r.15\010mop.r.16\010mop.r.17\010mop.r.18\010"
    "mop.r.19\007mop.r.2\010mop.r.20\010mop.r.21\010mop.r.22\010mop.r.23\010"
    "mop.r.24\010mop.r.25\010mop.r.26\010mop.r.27\010mop.r.28\010mop.r.29\007"
    "mop.r.3\010mop.r.30\010mop.r.31\007mop.r.4\007mop.r.5\007mop.r.6\007mop"
    ".r.7\007mop.r.8\007mop.r.9\010mop.rr.0\010mop.rr.1\010mop.rr.2\010mop.r"
    "r.3\010mop.rr.4\010mop.rr.5\010mop.rr.6\010mop.rr.7\004mret\003mul\004m"
    "ulh\006mulhsu\005mulhu\004mulw\002mv\003neg\004negw\003nop\003not\007nt"
    "l.all\006ntl.p1\010ntl.pall\006ntl.s1\002or\005orc.b\003ori\003orn\004p"
    "ack\005packh\005packw\005pause\nprefetch.i\nprefetch.r\nprefetch.w\010q"
    "k.c.lbu\nqk.c.lbusp\010qk.c.lhu\nqk.c.lhusp\007qk.c.sb\tqk.c.sbsp\007qk"
    ".c.sh\tqk.c.shsp\007rdcycle\010rdcycleh\trdinstret\nrdinstreth\006rdtim"
    "e\007rdtimeh\003rem\004remu\005remuw\004remw\003ret\004rev8\003rol\004r"
    "olw\003ror\004rori\005roriw\004rorw\002sb\007sb.aqrl\005sb.rl\004sc.d\007"
    "sc.d.aq\tsc.d.aqrl\007sc.d.rl\004sc.w\007sc.w.aq\tsc.w.aqrl\007sc.w.rl\002"
    "sd\007sd.aqrl\005sd.rl\004seqz\006sext.b\006sext.h\006sext.w\020sf.cdis"
    "card.d.l1\010sf.cease\016sf.cflush.d.l1\010sf.vc.fv\tsf.vc.fvv\tsf.vc.f"
    "vw\007sf.vc.i\010sf.vc.iv\tsf.vc.ivv\tsf.vc.ivw\nsf.vc.v.fv\013sf.vc.v."
    "fvv\013sf.vc.v.fvw\tsf.vc.v.i\nsf.vc.v.iv\013sf.vc.v.ivv\013sf.vc.v.ivw"
    "\nsf.vc.v.vv\013sf.vc.v.vvv\013sf.vc.v.vvw\tsf.vc.v.x\nsf.vc.v.xv\013sf"
    ".vc.v.xvv\013sf.vc.v.xvw\010sf.vc.vv\tsf.vc.vvv\tsf.vc.vvw\007sf.vc.x\010"
    "sf.vc.xv\tsf.vc.xvv\tsf.vc.xvw\022sf.vfnrclip.x.f.qf\023sf.vfnrclip.xu."
    "f.qf\020sf.vfwmacc.4x4x4\017sf.vqmacc.2x8x2\017sf.vqmacc.4x8x4\021sf.vq"
    "maccsu.2x8x2\021sf.vqmaccsu.4x8x4\020sf.vqmaccu.2x8x2\020sf.vqmaccu.4x8"
    "x4\021sf.vqmaccus.2x8x2\021sf.vqmaccus.4x8x4\017sfence.inval.ir\nsfence"
    ".vma\016sfence.w.inval\003sgt\004sgtu\004sgtz\002sh\007sh.aqrl\005sh.rl"
    "\006sh1add\tsh1add.uw\006sh2add\tsh2add.uw\006sh3add\tsh3add.uw\nsha256"
    "sig0\nsha256sig1\nsha256sum0\nsha256sum1\nsha512sig0\013sha512sig0h\013"
    "sha512sig0l\nsha512sig1\013sha512sig1h\013sha512sig1l\nsha512sum0\013sh"
    "a512sum0r\nsha512sum1\013sha512sum1r\nsinval.vma\003sll\004slli\007slli"
    ".uw\005slliw\004sllw\003slt\004slti\005sltiu\004sltu\004sltz\005sm3p0\005"
    "sm3p1\005sm4ed\005sm4ks\004snez\003sra\004srai\005sraiw\004sraw\004sret"
    "\003srl\004srli\005srliw\004srlw\013ssamoswap.d\016ssamoswap.d.aq\020ss"
    "amoswap.d.aqrl\016ssamoswap.d.rl\013ssamoswap.w\016ssamoswap.w.aq\020ss"
    "amoswap.w.aqrl\016ssamoswap.w.rl\010sspopchk\006sspush\005ssrdp\003sub\004"
    "subw\002sw\007sw.aqrl\005sw.rl\004tail\010th.addsl\016th.dcache.call\017"
    "th.dcache.ciall\016th.dcache.cipa\016th.dcache.cisw\016th.dcache.civa\015"
    "th.dcache.cpa\017th.dcache.cpal1\015th.dcache.csw\015th.dcache.cva\017t"
    "h.dcache.cval1\016th.dcache.iall\015th.dcache.ipa\015th.dcache.isw\015t"
    "h.dcache.iva\006th.ext\007th.extu\006th.ff0\006th.ff1\007th.flrd\007th."
    "flrw\010th.flurd\010th.flurw\007th.fsrd\007th.fsrw\010th.fsurd\010th.fs"
    "urw\016th.icache.iall\017th.icache.ialls\015th.icache.ipa\015th.icache."
    "iva\017th.l2cache.call\020th.l2cache.ciall\017th.l2cache.iall\007th.lbi"
    "a\007th.lbib\010th.lbuia\010th.lbuib\006th.ldd\007th.ldia\007th.ldib\007"
    "th.lhia\007th.lhib\010th.lhuia\010th.lhuib\006th.lrb\007th.lrbu\006th.l"
    "rd\006th.lrh\007th.lrhu\006th.lrw\007th.lrwu\007th.lurb\010th.lurbu\007"
    "th.lurd\007th.lurh\010th.lurhu\007th.lurw\010th.lurwu\006th.lwd\007th.l"
    "wia\007th.lwib\007th.lwud\010th.lwuia\010th.lwuib\007th.mula\010th.mula"
    "h\010th.mulaw\007th.muls\010th.mulsh\010th.mulsw\010th.mveqz\010th.mvne"
    "z\006th.rev\007th.revw\007th.sbia\007th.sbib\006th.sdd\007th.sdia\007th"
    ".sdib\016th.sfence.vmas\007th.shia\007th.shib\006th.srb\006th.srd\006th"
    ".srh\007th.srri\010th.srriw\006th.srw\007th.surb\007th.surd\007th.surh\007"
    "th.surw\006th.swd\007th.swia\007th.swib\007th.sync\tth.sync.i\nth.sync."
    "is\tth.sync.s\006th.tst\tth.tstnbz\013th.vmaqa.vv\013th.vmaqa.vx\015th."
    "vmaqasu.vv\015th.vmaqasu.vx\014th.vmaqau.vv\014th.vmaqau.vx\015th.vmaqa"
    "us.vx\005unimp\005unzip\010vaadd.vv\010vaadd.vx\tvaaddu.vv\tvaaddu.vx\010"
    "vadc.vim\010vadc.vvm\010vadc.vxm\007vadd.vi\007vadd.vv\007vadd.vx\tvaes"
    "df.vs\tvaesdf.vv\tvaesdm.vs\tvaesdm.vv\tvaesef.vs\tvaesef.vv\tvaesem.vs"
    "\tvaesem.vv\nvaeskf1.vi\nvaeskf2.vi\010vaesz.vs\007vand.vi\007vand.vv\007"
    "vand.vx\010vandn.vv\010vandn.vx\010vasub.vv\010vasub.vx\tvasubu.vv\tvas"
    "ubu.vx\007vbrev.v\010vbrev8.v\tvclmul.vv\tvclmul.vx\nvclmulh.vv\nvclmul"
    "h.vx\006vclz.v\014vcompress.vm\007vcpop.m\007vcpop.v\006vctz.v\007vdiv."
    "vv\007vdiv.vx\010vdivu.vv\010vdivu.vx\007vfabs.v\010vfadd.vf\010vfadd.v"
    "v\tvfclass.v\013vfcvt.f.x.v\014vfcvt.f.xu.v\017vfcvt.rtz.x.f.v\020vfcvt"
    ".rtz.xu.f.v\013vfcvt.x.f.v\014vfcvt.xu.f.v\010vfdiv.vf\010vfdiv.vv\010v"
    "first.m\tvfmacc.vf\tvfmacc.vv\tvfmadd.vf\tvfmadd.vv\010vfmax.vf\010vfma"
    "x.vv\013vfmerge.vfm\010vfmin.vf\010vfmin.vv\tvfmsac.vf\tvfmsac.vv\tvfms"
    "ub.vf\tvfmsub.vv\010vfmul.vf\010vfmul.vv\010vfmv.f.s\010vfmv.s.f\010vfm"
    "v.v.f\014vfncvt.f.f.w\014vfncvt.f.x.w\015vfncvt.f.xu.w\020vfncvt.rod.f."
    "f.w\020vfncvt.rtz.x.f.w\021vfncvt.rtz.xu.f.w\014vfncvt.x.f.w\015vfncvt."
    "xu.f.w\020vfncvtbf16.f.f.w\007vfneg.v\nvfnmacc.vf\nvfnmacc.vv\nvfnmadd."
    "vf\nvfnmadd.vv\nvfnmsac.vf\nvfnmsac.vv\nvfnmsub.vf\nvfnmsub.vv\tvfrdiv."
    "vf\010vfrec7.v\013vfredmax.vs\013vfredmin.vs\014vfredosum.vs\013vfredsu"
    "m.vs\014vfredusum.vs\nvfrsqrt7.v\tvfrsub.vf\tvfsgnj.vf\tvfsgnj.vv\nvfsg"
    "njn.vf\nvfsgnjn.vv\nvfsgnjx.vf\nvfsgnjx.vv\017vfslide1down.vf\015vfslid"
    "e1up.vf\010vfsqrt.v\010vfsub.vf\010vfsub.vv\tvfwadd.vf\tvfwadd.vv\tvfwa"
    "dd.wf\tvfwadd.wv\014vfwcvt.f.f.v\014vfwcvt.f.x.v\015vfwcvt.f.xu.v\020vf"
    "wcvt.rtz.x.f.v\021vfwcvt.rtz.xu.f.v\014vfwcvt.x.f.v\015vfwcvt.xu.f.v\020"
    "vfwcvtbf16.f.f.v\nvfwmacc.vf\nvfwmacc.vv\016vfwmaccbf16.vf\016vfwmaccbf"
    "16.vv\nvfwmsac.vf\nvfwmsac.vv\tvfwmul.vf\tvfwmul.vv\013vfwnmacc.vf\013v"
    "fwnmacc.vv\013vfwnmsac.vf\013vfwnmsac.vv\015vfwredosum.vs\014vfwredsum."
    "vs\015vfwredusum.vs\tvfwsub.vf\tvfwsub.vv\tvfwsub.wf\tvfwsub.wv\010vghs"
    "h.vv\010vgmul.vv\005vid.v\007viota.m\006vl1r.v\tvl1re16.v\tvl1re32.v\tv"
    "l1re64.v\010vl1re8.v\006vl2r.v\tvl2re16.v\tvl2re32.v\tvl2re64.v\010vl2r"
    "e8.v\006vl4r.v\tvl4re16.v\tvl4re32.v\tvl4re64.v\010vl4re8.v\006vl8r.v\t"
    "vl8re16.v\tvl8re32.v\tvl8re64.v\010vl8re8.v\006vle1.v\007vle16.v\tvle16"
    "ff.v\007vle32.v\tvle32ff.v\007vle64.v\tvle64ff.v\006vle8.v\010vle8ff.v\005"
    "vlm.v\nvloxei16.v\nvloxei32.v\nvloxei64.v\tvloxei8.v\016vloxseg2ei16.v\016"
    "vloxseg2ei32.v\016vloxseg2ei64.v\015vloxseg2ei8.v\016vloxseg3ei16.v\016"
    "vloxseg3ei32.v\016vloxseg3ei64.v\015vloxseg3ei8.v\016vloxseg4ei16.v\016"
    "vloxseg4ei32.v\016vloxseg4ei64.v\015vloxseg4ei8.v\016vloxseg5ei16.v\016"
    "vloxseg5ei32.v\016vloxseg5ei64.v\015vloxseg5ei8.v\016vloxseg6ei16.v\016"
    "vloxseg6ei32.v\016vloxseg6ei64.v\015vloxseg6ei8.v\016vloxseg7ei16.v\016"
    "vloxseg7ei32.v\016vloxseg7ei64.v\015vloxseg7ei8.v\016vloxseg8ei16.v\016"
    "vloxseg8ei32.v\016vloxseg8ei64.v\015vloxseg8ei8.v\010vlse16.v\010vlse32"
    ".v\010vlse64.v\007vlse8.v\013vlseg2e16.v\015vlseg2e16ff.v\013vlseg2e32."
    "v\015vlseg2e32ff.v\013vlseg2e64.v\015vlseg2e64ff.v\nvlseg2e8.v\014vlseg"
    "2e8ff.v\013vlseg3e16.v\015vlseg3e16ff.v\013vlseg3e32.v\015vlseg3e32ff.v"
    "\013vlseg3e64.v\015vlseg3e64ff.v\nvlseg3e8.v\014vlseg3e8ff.v\013vlseg4e"
    "16.v\015vlseg4e16ff.v\013vlseg4e32.v\015vlseg4e32ff.v\013vlseg4e64.v\015"
    "vlseg4e64ff.v\nvlseg4e8.v\014vlseg4e8ff.v\013vlseg5e16.v\015vlseg5e16ff"
    ".v\013vlseg5e32.v\015vlseg5e32ff.v\013vlseg5e64.v\015vlseg5e64ff.v\nvls"
    "eg5e8.v\014vlseg5e8ff.v\013vlseg6e16.v\015vlseg6e16ff.v\013vlseg6e32.v\015"
    "vlseg6e32ff.v\013vlseg6e64.v\015vlseg6e64ff.v\nvlseg6e8.v\014vlseg6e8ff"
    ".v\013vlseg7e16.v\015vlseg7e16ff.v\013vlseg7e32.v\015vlseg7e32ff.v\013v"
    "lseg7e64.v\015vlseg7e64ff.v\nvlseg7e8.v\014vlseg7e8ff.v\013vlseg8e16.v\015"
    "vlseg8e16ff.v\013vlseg8e32.v\015vlseg8e32ff.v\013vlseg8e64.v\015vlseg8e"
    "64ff.v\nvlseg8e8.v\014vlseg8e8ff.v\014vlsseg2e16.v\014vlsseg2e32.v\014v"
    "lsseg2e64.v\013vlsseg2e8.v\014vlsseg3e16.v\014vlsseg3e32.v\014vlsseg3e6"
    "4.v\013vlsseg3e8.v\014vlsseg4e16.v\014vlsseg4e32.v\014vlsseg4e64.v\013v"
    "lsseg4e8.v\014vlsseg5e16.v\014vlsseg5e32.v\014vlsseg5e64.v\013vlsseg5e8"
    ".v\014vlsseg6e16.v\014vlsseg6e32.v\014vlsseg6e64.v\013vlsseg6e8.v\014vl"
    "sseg7e16.v\014vlsseg7e32.v\014vlsseg7e64.v\013vlsseg7e8.v\014vlsseg8e16"
    ".v\014vlsseg8e32.v\014vlsseg8e64.v\013vlsseg8e8.v\nvluxei16.v\nvluxei32"
    ".v\nvluxei64.v\tvluxei8.v\016vluxseg2ei16.v\016vluxseg2ei32.v\016vluxse"
    "g2ei64.v\015vluxseg2ei8.v\016vluxseg3ei16.v\016vluxseg3ei32.v\016vluxse"
    "g3ei64.v\015vluxseg3ei8.v\016vluxseg4ei16.v\016vluxseg4ei32.v\016vluxse"
    "g4ei64.v\015vluxseg4ei8.v\016vluxseg5ei16.v\016vluxseg5ei32.v\016vluxse"
    "g5ei64.v\015vluxseg5ei8.v\016vluxseg6ei16.v\016vluxseg6ei32.v\016vluxse"
    "g6ei64.v\015vluxseg6ei8.v\016vluxseg7ei16.v\016vluxseg7ei32.v\016vluxse"
    "g7ei64.v\015vluxseg7ei8.v\016vluxseg8ei16.v\016vluxseg8ei32.v\016vluxse"
    "g8ei64.v\015vluxseg8ei8.v\010vmacc.vv\010vmacc.vx\010vmadc.vi\tvmadc.vi"
    "m\010vmadc.vv\tvmadc.vvm\010vmadc.vx\tvmadc.vxm\010vmadd.vv\010vmadd.vx"
    "\010vmand.mm\tvmandn.mm\013vmandnot.mm\007vmax.vv\007vmax.vx\010vmaxu.v"
    "v\010vmaxu.vx\007vmclr.m\nvmerge.vim\nvmerge.vvm\nvmerge.vxm\010vmfeq.v"
    "f\010vmfeq.vv\010vmfge.vf\010vmfge.vv\010vmfgt.vf\010vmfgt.vv\010vmfle."
    "vf\010vmfle.vv\010vmflt.vf\010vmflt.vv\010vmfne.vf\010vmfne.vv\007vmin."
    "vv\007vmin.vx\010vminu.vv\010vminu.vx\006vmmv.m\tvmnand.mm\010vmnor.mm\007"
    "vmnot.m\007vmor.mm\010vmorn.mm\nvmornot.mm\010vmsbc.vv\tvmsbc.vvm\010vm"
    "sbc.vx\tvmsbc.vxm\007vmsbf.m\010vmseq.vi\010vmseq.vv\010vmseq.vx\007vms"
    "et.m\010vmsge.vi\010vmsge.vv\010vmsge.vx\tvmsgeu.vi\tvmsgeu.vv\tvmsgeu."
    "vx\010vmsgt.vi\010vmsgt.vv\010vmsgt.vx\tvmsgtu.vi\tvmsgtu.vv\tvmsgtu.vx"
    "\007vmsif.m\010vmsle.vi\010vmsle.vv\010vmsle.vx\tvmsleu.vi\tvmsleu.vv\t"
    "vmsleu.vx\010vmslt.vi\010vmslt.vv\010vmslt.vx\tvmsltu.vi\tvmsltu.vv\tvm"
    "sltu.vx\010vmsne.vi\010vmsne.vv\010vmsne.vx\007vmsof.m\007vmul.vv\007vm"
    "ul.vx\010vmulh.vv\010vmulh.vx\nvmulhsu.vv\nvmulhsu.vx\tvmulhu.vv\tvmulh"
    "u.vx\007vmv.s.x\007vmv.v.i\007vmv.v.v\007vmv.v.x\007vmv.x.s\007vmv1r.v\007"
    "vmv2r.v\007vmv4r.v\007vmv8r.v\tvmxnor.mm\010vmxor.mm\tvnclip.wi\tvnclip"
    ".wv\tvnclip.wx\nvnclipu.wi\nvnclipu.wv\nvnclipu.wx\013vncvt.x.x.w\006vn"
    "eg.v\tvnmsac.vv\tvnmsac.vx\tvnmsub.vv\tvnmsub.vx\006vnot.v\010vnsra.wi\010"
    "vnsra.wv\010vnsra.wx\010vnsrl.wi\010vnsrl.wv\010vnsrl.wx\006vor.vi\006v"
    "or.vv\006vor.vx\007vpopc.m\nvredand.vs\nvredmax.vs\013vredmaxu.vs\nvred"
    "min.vs\013vredminu.vs\tvredor.vs\nvredsum.vs\nvredxor.vs\007vrem.vv\007"
    "vrem.vx\010vremu.vv\010vremu.vx\007vrev8.v\013vrgather.vi\013vrgather.v"
    "v\013vrgather.vx\017vrgatherei16.vv\007vrol.vv\007vrol.vx\007vror.vi\007"
    "vror.vv\007vror.vx\010vrsub.vi\010vrsub.vx\006vs1r.v\006vs2r.v\006vs4r."
    "v\006vs8r.v\010vsadd.vi\010vsadd.vv\010vsadd.vx\tvsaddu.vi\tvsaddu.vv\t"
    "vsaddu.vx\010vsbc.vvm\010vsbc.vxm\006vse1.v\007vse16.v\007vse32.v\007vs"
    "e64.v\006vse8.v\010vsetivli\006vsetvl\007vsetvli\tvsext.vf2\tvsext.vf4\t"
    "vsext.vf8\nvsha2ch.vv\nvsha2cl.vv\nvsha2ms.vv\016vslide1down.vx\014vsli"
    "de1up.vx\015vslidedown.vi\015vslidedown.vx\013vslideup.vi\013vslideup.v"
    "x\007vsll.vi\007vsll.vv\007vsll.vx\005vsm.v\010vsm3c.vi\tvsm3me.vv\010v"
    "sm4k.vi\010vsm4r.vs\010vsm4r.vv\010vsmul.vv\010vsmul.vx\nvsoxei16.v\nvs"
    "oxei32.v\nvsoxei64.v\tvsoxei8.v\016vsoxseg2ei16.v\016vsoxseg2ei32.v\016"
    "vsoxseg2ei64.v\015vsoxseg2ei8.v\016vsoxseg3ei16.v\016vsoxseg3ei32.v\016"
    "vsoxseg3ei64.v\015vsoxseg3ei8.v\016vsoxseg4ei16.v\016vsoxseg4ei32.v\016"
    "vsoxseg4ei64.v\015vsoxseg4ei8.v\016vsoxseg5ei16.v\016vsoxseg5ei32.v\016"
    "vsoxseg5ei64.v\015vsoxseg5ei8.v\016vsoxseg6ei16.v\016vsoxseg6ei32.v\016"
    "vsoxseg6ei64.v\015vsoxseg6ei8.v\016vsoxseg7ei16.v\016vsoxseg7ei32.v\016"
    "vsoxseg7ei64.v\015vsoxseg7ei8.v\016vsoxseg8ei16.v\016vsoxseg8ei32.v\016"
    "vsoxseg8ei64.v\015vsoxseg8ei8.v\007vsra.vi\007vsra.vv\007vsra.vx\007vsr"
    "l.vi\007vsrl.vv\007vsrl.vx\010vsse16.v\010vsse32.v\010vsse64.v\007vsse8"
    ".v\013vsseg2e16.v\013vsseg2e32.v\013vsseg2e64.v\nvsseg2e8.v\013vsseg3e1"
    "6.v\013vsseg3e32.v\013vsseg3e64.v\nvsseg3e8.v\013vsseg4e16.v\013vsseg4e"
    "32.v\013vsseg4e64.v\nvsseg4e8.v\013vsseg5e16.v\013vsseg5e32.v\013vsseg5"
    "e64.v\nvsseg5e8.v\013vsseg6e16.v\013vsseg6e32.v\013vsseg6e64.v\nvsseg6e"
    "8.v\013vsseg7e16.v\013vsseg7e32.v\013vsseg7e64.v\nvsseg7e8.v\013vsseg8e"
    "16.v\013vsseg8e32.v\013vsseg8e64.v\nvsseg8e8.v\010vssra.vi\010vssra.vv\010"
    "vssra.vx\010vssrl.vi\010vssrl.vv\010vssrl.vx\014vssseg2e16.v\014vssseg2"
    "e32.v\014vssseg2e64.v\013vssseg2e8.v\014vssseg3e16.v\014vssseg3e32.v\014"
    "vssseg3e64.v\013vssseg3e8.v\014vssseg4e16.v\014vssseg4e32.v\014vssseg4e"
    "64.v\013vssseg4e8.v\014vssseg5e16.v\014vssseg5e32.v\014vssseg5e64.v\013"
    "vssseg5e8.v\014vssseg6e16.v\014vssseg6e32.v\014vssseg6e64.v\013vssseg6e"
    "8.v\014vssseg7e16.v\014vssseg7e32.v\014vssseg7e64.v\013vssseg7e8.v\014v"
    "ssseg8e16.v\014vssseg8e32.v\014vssseg8e64.v\013vssseg8e8.v\010vssub.vv\010"
    "vssub.vx\tvssubu.vv\tvssubu.vx\007vsub.vv\007vsub.vx\nvsuxei16.v\nvsuxe"
    "i32.v\nvsuxei64.v\tvsuxei8.v\016vsuxseg2ei16.v\016vsuxseg2ei32.v\016vsu"
    "xseg2ei64.v\015vsuxseg2ei8.v\016vsuxseg3ei16.v\016vsuxseg3ei32.v\016vsu"
    "xseg3ei64.v\015vsuxseg3ei8.v\016vsuxseg4ei16.v\016vsuxseg4ei32.v\016vsu"
    "xseg4ei64.v\015vsuxseg4ei8.v\016vsuxseg5ei16.v\016vsuxseg5ei32.v\016vsu"
    "xseg5ei64.v\015vsuxseg5ei8.v\016vsuxseg6ei16.v\016vsuxseg6ei32.v\016vsu"
    "xseg6ei64.v\015vsuxseg6ei8.v\016vsuxseg7ei16.v\016vsuxseg7ei32.v\016vsu"
    "xseg7ei64.v\015vsuxseg7ei8.v\016vsuxseg8ei16.v\016vsuxseg8ei32.v\016vsu"
    "xseg8ei64.v\015vsuxseg8ei8.v\010vt.maskc\tvt.maskcn\010vwadd.vv\010vwad"
    "d.vx\010vwadd.wv\010vwadd.wx\tvwaddu.vv\tvwaddu.vx\tvwaddu.wv\tvwaddu.w"
    "x\013vwcvt.x.x.v\014vwcvtu.x.x.v\tvwmacc.vv\tvwmacc.vx\013vwmaccsu.vv\013"
    "vwmaccsu.vx\nvwmaccu.vv\nvwmaccu.vx\013vwmaccus.vx\010vwmul.vv\010vwmul"
    ".vx\nvwmulsu.vv\nvwmulsu.vx\tvwmulu.vv\tvwmulu.vx\013vwredsum.vs\014vwr"
    "edsumu.vs\010vwsll.vi\010vwsll.vv\010vwsll.vx\010vwsub.vv\010vwsub.vx\010"
    "vwsub.wv\010vwsub.wx\tvwsubu.vv\tvwsubu.vx\tvwsubu.wv\tvwsubu.wx\007vxo"
    "r.vi\007vxor.vv\007vxor.vx\tvzext.vf2\tvzext.vf4\tvzext.vf8\003wfi\007w"
    "rs.nto\007wrs.sto\004xnor\003xor\004xori\006xperm4\006xperm8\006zext.b\006"
    "zext.h\006zext.w\003zip";

// Feature bitsets.
enum : uint8_t {
  AMFBS_None,
  AMFBS_HasHalfFPLoadStoreMove,
  AMFBS_HasStdExtAOrZaamo,
  AMFBS_HasStdExtAOrZalrsc,
  AMFBS_HasStdExtCOrZca,
  AMFBS_HasStdExtD,
  AMFBS_HasStdExtF,
  AMFBS_HasStdExtH,
  AMFBS_HasStdExtM,
  AMFBS_HasStdExtSvinval,
  AMFBS_HasStdExtZabha,
  AMFBS_HasStdExtZacas,
  AMFBS_HasStdExtZalasr,
  AMFBS_HasStdExtZawrs,
  AMFBS_HasStdExtZba,
  AMFBS_HasStdExtZbb,
  AMFBS_HasStdExtZbbOrZbkb,
  AMFBS_HasStdExtZbc,
  AMFBS_HasStdExtZbcOrZbkc,
  AMFBS_HasStdExtZbkb,
  AMFBS_HasStdExtZbkx,
  AMFBS_HasStdExtZbs,
  AMFBS_HasStdExtZcb,
  AMFBS_HasStdExtZcmop,
  AMFBS_HasStdExtZcmp,
  AMFBS_HasStdExtZcmt,
  AMFBS_HasStdExtZfa,
  AMFBS_HasStdExtZfbfmin,
  AMFBS_HasStdExtZfh,
  AMFBS_HasStdExtZfhmin,
  AMFBS_HasStdExtZfinx,
  AMFBS_HasStdExtZhinx,
  AMFBS_HasStdExtZhinxmin,
  AMFBS_HasStdExtZicbom,
  AMFBS_HasStdExtZicbop,
  AMFBS_HasStdExtZicboz,
  AMFBS_HasStdExtZicfilp,
  AMFBS_HasStdExtZicfiss,
  AMFBS_HasStdExtZicond,
  AMFBS_HasStdExtZihintntl,
  AMFBS_HasStdExtZihintpause,
  AMFBS_HasStdExtZimop,
  AMFBS_HasStdExtZknh,
  AMFBS_HasStdExtZksed,
  AMFBS_HasStdExtZksh,
  AMFBS_HasStdExtZmmul,
  AMFBS_HasStdExtZvbb,
  AMFBS_HasStdExtZvbc,
  AMFBS_HasStdExtZvfbfmin,
  AMFBS_HasStdExtZvfbfwma,
  AMFBS_HasStdExtZvkb,
  AMFBS_HasStdExtZvkg,
  AMFBS_HasStdExtZvkned,
  AMFBS_HasStdExtZvknhaOrZvknhb,
  AMFBS_HasStdExtZvksed,
  AMFBS_HasStdExtZvksh,
  AMFBS_HasVInstructions,
  AMFBS_HasVInstructionsAnyF,
  AMFBS_HasVInstructionsI64,
  AMFBS_HasVendorXSfcease,
  AMFBS_HasVendorXSfvcp,
  AMFBS_HasVendorXSfvfnrclipxfqf,
  AMFBS_HasVendorXSfvfwmaccqqq,
  AMFBS_HasVendorXSfvqmaccdod,
  AMFBS_HasVendorXSfvqmaccqoq,
  AMFBS_HasVendorXSiFivecdiscarddlone,
  AMFBS_HasVendorXSiFivecflushdlone,
  AMFBS_HasVendorXTHeadBa,
  AMFBS_HasVendorXTHeadBb,
  AMFBS_HasVendorXTHeadBs,
  AMFBS_HasVendorXTHeadCmo,
  AMFBS_HasVendorXTHeadCondMov,
  AMFBS_HasVendorXTHeadMac,
  AMFBS_HasVendorXTHeadMemIdx,
  AMFBS_HasVendorXTHeadMemPair,
  AMFBS_HasVendorXTHeadSync,
  AMFBS_HasVendorXTHeadVdot,
  AMFBS_HasVendorXwchc,
  AMFBS_IsRV32,
  AMFBS_IsRV64,
  AMFBS_HasStdExtAOrZaamo_IsRV64,
  AMFBS_HasStdExtAOrZalrsc_IsRV64,
  AMFBS_HasStdExtCOrZca_HasRVCHints,
  AMFBS_HasStdExtCOrZca_IsRV32,
  AMFBS_HasStdExtCOrZca_IsRV64,
  AMFBS_HasStdExtCOrZcd_HasStdExtD,
  AMFBS_HasStdExtD_IsRV64,
  AMFBS_HasStdExtF_IsRV64,
  AMFBS_HasStdExtM_IsRV64,
  AMFBS_HasStdExtZabha_HasStdExtZacas,
  AMFBS_HasStdExtZacas_IsRV32,
  AMFBS_HasStdExtZacas_IsRV64,
  AMFBS_HasStdExtZalasr_IsRV64,
  AMFBS_HasStdExtZba_IsRV64,
  AMFBS_HasStdExtZbb_IsRV32,
  AMFBS_HasStdExtZbb_IsRV64,
  AMFBS_HasStdExtZbbOrZbkb_IsRV32,
  AMFBS_HasStdExtZbbOrZbkb_IsRV64,
  AMFBS_HasStdExtZbkb_IsRV32,
  AMFBS_HasStdExtZbkb_IsRV64,
  AMFBS_HasStdExtZcb_HasStdExtZbb,
  AMFBS_HasStdExtZcb_HasStdExtZmmul,
  AMFBS_HasStdExtZdinx_IsRV32,
  AMFBS_HasStdExtZdinx_IsRV64,
  AMFBS_HasStdExtZfa_HasStdExtD,
  AMFBS_HasStdExtZfa_HasStdExtZfh,
  AMFBS_HasStdExtZfa_HasStdExtZfhOrZvfh,
  AMFBS_HasStdExtZfh_IsRV64,
  AMFBS_HasStdExtZfhmin_HasStdExtD,
  AMFBS_HasStdExtZfinx_IsRV64,
  AMFBS_HasStdExtZhinx_IsRV64,
  AMFBS_HasStdExtZicfiss_HasStdExtZcmop,
  AMFBS_HasStdExtZicfiss_IsRV64,
  AMFBS_HasStdExtZknd_IsRV32,
  AMFBS_HasStdExtZknd_IsRV64,
  AMFBS_HasStdExtZkndOrZkne_IsRV64,
  AMFBS_HasStdExtZkne_IsRV32,
  AMFBS_HasStdExtZkne_IsRV64,
  AMFBS_HasStdExtZknh_IsRV32,
  AMFBS_HasStdExtZknh_IsRV64,
  AMFBS_HasStdExtZmmul_IsRV64,
  AMFBS_HasVInstructionsI64_IsRV64,
  AMFBS_HasVendorXCValu_IsRV32,
  AMFBS_HasVendorXCVbi_IsRV32,
  AMFBS_HasVendorXCVbitmanip_IsRV32,
  AMFBS_HasVendorXCVelw_IsRV32,
  AMFBS_HasVendorXCVmac_IsRV32,
  AMFBS_HasVendorXCVmem_IsRV32,
  AMFBS_HasVendorXCVsimd_IsRV32,
  AMFBS_HasVendorXTHeadBb_IsRV64,
  AMFBS_HasVendorXTHeadFMemIdx_HasStdExtD,
  AMFBS_HasVendorXTHeadFMemIdx_HasStdExtF,
  AMFBS_HasVendorXTHeadMac_IsRV64,
  AMFBS_HasVendorXTHeadMemIdx_IsRV64,
  AMFBS_HasVendorXTHeadMemPair_IsRV64,
  AMFBS_IsRV64_HasStdExtH,
  AMFBS_IsRV64_HasVInstructionsI64,
  AMFBS_IsRV64_HasVendorXVentanaCondOps,
  AMFBS_HasStdExtC_HasRVCHints_HasStdExtZihintntl,
  AMFBS_HasStdExtCOrZcfOrZce_HasStdExtF_IsRV32,
  AMFBS_HasStdExtZbkb_NoStdExtZbb_IsRV32,
  AMFBS_HasStdExtZbkb_NoStdExtZbb_IsRV64,
  AMFBS_HasStdExtZcb_HasStdExtZba_IsRV64,
  AMFBS_HasStdExtZdinx_IsRV64_IsRV64,
  AMFBS_HasStdExtZfa_HasStdExtD_IsRV32,
  AMFBS_HasStdExtZhinxmin_HasStdExtZdinx_IsRV32,
  AMFBS_HasStdExtZhinxmin_HasStdExtZdinx_IsRV64,
  AMFBS_HasVendorXTHeadFMemIdx_HasStdExtD_IsRV64,
  AMFBS_HasVendorXTHeadFMemIdx_HasStdExtF_IsRV64,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // AMFBS_None
  {Feature_HasHalfFPLoadStoreMoveBit, },
  {Feature_HasStdExtAOrZaamoBit, },
  {Feature_HasStdExtAOrZalrscBit, },
  {Feature_HasStdExtCOrZcaBit, },
  {Feature_HasStdExtDBit, },
  {Feature_HasStdExtFBit, },
  {Feature_HasStdExtHBit, },
  {Feature_HasStdExtMBit, },
  {Feature_HasStdExtSvinvalBit, },
  {Feature_HasStdExtZabhaBit, },
  {Feature_HasStdExtZacasBit, },
  {Feature_HasStdExtZalasrBit, },
  {Feature_HasStdExtZawrsBit, },
  {Feature_HasStdExtZbaBit, },
  {Feature_HasStdExtZbbBit, },
  {Feature_HasStdExtZbbOrZbkbBit, },
  {Feature_HasStdExtZbcBit, },
  {Feature_HasStdExtZbcOrZbkcBit, },
  {Feature_HasStdExtZbkbBit, },
  {Feature_HasStdExtZbkxBit, },
  {Feature_HasStdExtZbsBit, },
  {Feature_HasStdExtZcbBit, },
  {Feature_HasStdExtZcmopBit, },
  {Feature_HasStdExtZcmpBit, },
  {Feature_HasStdExtZcmtBit, },
  {Feature_HasStdExtZfaBit, },
  {Feature_HasStdExtZfbfminBit, },
  {Feature_HasStdExtZfhBit, },
  {Feature_HasStdExtZfhminBit, },
  {Feature_HasStdExtZfinxBit, },
  {Feature_HasStdExtZhinxBit, },
  {Feature_HasStdExtZhinxminBit, },
  {Feature_HasStdExtZicbomBit, },
  {Feature_HasStdExtZicbopBit, },
  {Feature_HasStdExtZicbozBit, },
  {Feature_HasStdExtZicfilpBit, },
  {Feature_HasStdExtZicfissBit, },
  {Feature_HasStdExtZicondBit, },
  {Feature_HasStdExtZihintntlBit, },
  {Feature_HasStdExtZihintpauseBit, },
  {Feature_HasStdExtZimopBit, },
  {Feature_HasStdExtZknhBit, },
  {Feature_HasStdExtZksedBit, },
  {Feature_HasStdExtZkshBit, },
  {Feature_HasStdExtZmmulBit, },
  {Feature_HasStdExtZvbbBit, },
  {Feature_HasStdExtZvbcBit, },
  {Feature_HasStdExtZvfbfminBit, },
  {Feature_HasStdExtZvfbfwmaBit, },
  {Feature_HasStdExtZvkbBit, },
  {Feature_HasStdExtZvkgBit, },
  {Feature_HasStdExtZvknedBit, },
  {Feature_HasStdExtZvknhaOrZvknhbBit, },
  {Feature_HasStdExtZvksedBit, },
  {Feature_HasStdExtZvkshBit, },
  {Feature_HasVInstructionsBit, },
  {Feature_HasVInstructionsAnyFBit, },
  {Feature_HasVInstructionsI64Bit, },
  {Feature_HasVendorXSfceaseBit, },
  {Feature_HasVendorXSfvcpBit, },
  {Feature_HasVendorXSfvfnrclipxfqfBit, },
  {Feature_HasVendorXSfvfwmaccqqqBit, },
  {Feature_HasVendorXSfvqmaccdodBit, },
  {Feature_HasVendorXSfvqmaccqoqBit, },
  {Feature_HasVendorXSiFivecdiscarddloneBit, },
  {Feature_HasVendorXSiFivecflushdloneBit, },
  {Feature_HasVendorXTHeadBaBit, },
  {Feature_HasVendorXTHeadBbBit, },
  {Feature_HasVendorXTHeadBsBit, },
  {Feature_HasVendorXTHeadCmoBit, },
  {Feature_HasVendorXTHeadCondMovBit, },
  {Feature_HasVendorXTHeadMacBit, },
  {Feature_HasVendorXTHeadMemIdxBit, },
  {Feature_HasVendorXTHeadMemPairBit, },
  {Feature_HasVendorXTHeadSyncBit, },
  {Feature_HasVendorXTHeadVdotBit, },
  {Feature_HasVendorXwchcBit, },
  {Feature_IsRV32Bit, },
  {Feature_IsRV64Bit, },
  {Feature_HasStdExtAOrZaamoBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtAOrZalrscBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtCOrZcaBit, Feature_HasRVCHintsBit, },
  {Feature_HasStdExtCOrZcaBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtCOrZcaBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtCOrZcdBit, Feature_HasStdExtDBit, },
  {Feature_HasStdExtDBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtFBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtMBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZabhaBit, Feature_HasStdExtZacasBit, },
  {Feature_HasStdExtZacasBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZacasBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZalasrBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbaBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbbBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZbbBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbbOrZbkbBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZbbOrZbkbBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbkbBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZbkbBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZcbBit, Feature_HasStdExtZbbBit, },
  {Feature_HasStdExtZcbBit, Feature_HasStdExtZmmulBit, },
  {Feature_HasStdExtZdinxBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZdinxBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZfaBit, Feature_HasStdExtDBit, },
  {Feature_HasStdExtZfaBit, Feature_HasStdExtZfhBit, },
  {Feature_HasStdExtZfaBit, Feature_HasStdExtZfhOrZvfhBit, },
  {Feature_HasStdExtZfhBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZfhminBit, Feature_HasStdExtDBit, },
  {Feature_HasStdExtZfinxBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZhinxBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZicfissBit, Feature_HasStdExtZcmopBit, },
  {Feature_HasStdExtZicfissBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZkndBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZkndBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZkndOrZkneBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZkneBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZkneBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZknhBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZknhBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZmmulBit, Feature_IsRV64Bit, },
  {Feature_HasVInstructionsI64Bit, Feature_IsRV64Bit, },
  {Feature_HasVendorXCValuBit, Feature_IsRV32Bit, },
  {Feature_HasVendorXCVbiBit, Feature_IsRV32Bit, },
  {Feature_HasVendorXCVbitmanipBit, Feature_IsRV32Bit, },
  {Feature_HasVendorXCVelwBit, Feature_IsRV32Bit, },
  {Feature_HasVendorXCVmacBit, Feature_IsRV32Bit, },
  {Feature_HasVendorXCVmemBit, Feature_IsRV32Bit, },
  {Feature_HasVendorXCVsimdBit, Feature_IsRV32Bit, },
  {Feature_HasVendorXTHeadBbBit, Feature_IsRV64Bit, },
  {Feature_HasVendorXTHeadFMemIdxBit, Feature_HasStdExtDBit, },
  {Feature_HasVendorXTHeadFMemIdxBit, Feature_HasStdExtFBit, },
  {Feature_HasVendorXTHeadMacBit, Feature_IsRV64Bit, },
  {Feature_HasVendorXTHeadMemIdxBit, Feature_IsRV64Bit, },
  {Feature_HasVendorXTHeadMemPairBit, Feature_IsRV64Bit, },
  {Feature_IsRV64Bit, Feature_HasStdExtHBit, },
  {Feature_IsRV64Bit, Feature_HasVInstructionsI64Bit, },
  {Feature_IsRV64Bit, Feature_HasVendorXVentanaCondOpsBit, },
  {Feature_HasStdExtCBit, Feature_HasRVCHintsBit, Feature_HasStdExtZihintntlBit, },
  {Feature_HasStdExtCOrZcfOrZceBit, Feature_HasStdExtFBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZbkbBit, Feature_NoStdExtZbbBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZbkbBit, Feature_NoStdExtZbbBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZcbBit, Feature_HasStdExtZbaBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZdinxBit, Feature_IsRV64Bit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZfaBit, Feature_HasStdExtDBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZhinxminBit, Feature_HasStdExtZdinxBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZhinxminBit, Feature_HasStdExtZdinxBit, Feature_IsRV64Bit, },
  {Feature_HasVendorXTHeadFMemIdxBit, Feature_HasStdExtDBit, Feature_IsRV64Bit, },
  {Feature_HasVendorXTHeadFMemIdxBit, Feature_HasStdExtFBit, Feature_IsRV64Bit, },
};

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint8_t ConvertFn;
    uint8_t RequiredFeaturesIdx;
    uint8_t Classes[7];
    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace

static const MatchEntry MatchTable0[] = {
  { 0 /* .insn_b */, RISCV::InsnB, Convert__InsnDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_2__AnyRegOperand1_3__SImm13Lsb01_4, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_UImm3, MCK_AnyRegOperand, MCK_AnyRegOperand, MCK_SImm13Lsb0 }, },
  { 8 /* .insn_ca */, RISCV::InsnCA, Convert__AnyRegCOperand1_3__InsnCDirectiveOpcode1_0__UImm61_1__UImm21_2__AnyRegCOperand1_4, AMFBS_HasStdExtCOrZca, { MCK_InsnCDirectiveOpcode, MCK_UImm6, MCK_UImm2, MCK_AnyRegCOperand, MCK_AnyRegCOperand }, },
  { 17 /* .insn_cb */, RISCV::InsnCB, Convert__InsnCDirectiveOpcode1_0__UImm31_1__AnyRegCOperand1_2__SImm9Lsb01_3, AMFBS_HasStdExtCOrZca, { MCK_InsnCDirectiveOpcode, MCK_UImm3, MCK_AnyRegCOperand, MCK_SImm9Lsb0 }, },
  { 26 /* .insn_ci */, RISCV::InsnCI, Convert__AnyRegOperand1_2__InsnCDirectiveOpcode1_0__UImm31_1__SImm61_3, AMFBS_HasStdExtCOrZca, { MCK_InsnCDirectiveOpcode, MCK_UImm3, MCK_AnyRegOperand, MCK_SImm6 }, },
  { 35 /* .insn_ciw */, RISCV::InsnCIW, Convert__AnyRegCOperand1_2__InsnCDirectiveOpcode1_0__UImm31_1__UImm81_3, AMFBS_HasStdExtCOrZca, { MCK_InsnCDirectiveOpcode, MCK_UImm3, MCK_AnyRegCOperand, MCK_UImm8 }, },
  { 45 /* .insn_cj */, RISCV::InsnCJ, Convert__InsnCDirectiveOpcode1_0__UImm31_1__SImm12Lsb01_2, AMFBS_HasStdExtCOrZca, { MCK_InsnCDirectiveOpcode, MCK_UImm3, MCK_SImm12Lsb0 }, },
  { 54 /* .insn_cl */, RISCV::InsnCL, Convert__AnyRegCOperand1_2__InsnCDirectiveOpcode1_0__UImm31_1__AnyRegCOperand1_4__imm_95_0, AMFBS_HasStdExtCOrZca, { MCK_InsnCDirectiveOpcode, MCK_UImm3, MCK_AnyRegCOperand, MCK__40_, MCK_AnyRegCOperand, MCK__41_ }, },
  { 54 /* .insn_cl */, RISCV::InsnCL, Convert__AnyRegCOperand1_2__InsnCDirectiveOpcode1_0__UImm31_1__AnyRegCOperand1_5__UImm51_3, AMFBS_HasStdExtCOrZca, { MCK_InsnCDirectiveOpcode, MCK_UImm3, MCK_AnyRegCOperand, MCK_UImm5, MCK__40_, MCK_AnyRegCOperand, MCK__41_ }, },
  { 63 /* .insn_cr */, RISCV::InsnCR, Convert__AnyRegOperand1_2__InsnCDirectiveOpcode1_0__UImm41_1__AnyRegOperand1_3, AMFBS_HasStdExtCOrZca, { MCK_InsnCDirectiveOpcode, MCK_UImm4, MCK_AnyRegOperand, MCK_AnyRegOperand }, },
  { 72 /* .insn_cs */, RISCV::InsnCS, Convert__InsnCDirectiveOpcode1_0__UImm31_1__AnyRegCOperand1_2__AnyRegCOperand1_4__imm_95_0, AMFBS_HasStdExtCOrZca, { MCK_InsnCDirectiveOpcode, MCK_UImm3, MCK_AnyRegCOperand, MCK__40_, MCK_AnyRegCOperand, MCK__41_ }, },
  { 72 /* .insn_cs */, RISCV::InsnCS, Convert__InsnCDirectiveOpcode1_0__UImm31_1__AnyRegCOperand1_2__AnyRegCOperand1_5__UImm51_3, AMFBS_HasStdExtCOrZca, { MCK_InsnCDirectiveOpcode, MCK_UImm3, MCK_AnyRegCOperand, MCK_UImm5, MCK__40_, MCK_AnyRegCOperand, MCK__41_ }, },
  { 81 /* .insn_css */, RISCV::InsnCSS, Convert__InsnCDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_2__UImm61_3, AMFBS_HasStdExtCOrZca, { MCK_InsnCDirectiveOpcode, MCK_UImm3, MCK_AnyRegOperand, MCK_UImm6 }, },
  { 91 /* .insn_i */, RISCV::InsnI, Convert__AnyRegOperand1_2__InsnDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_3__SImm121_4, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_UImm3, MCK_AnyRegOperand, MCK_AnyRegOperand, MCK_SImm12 }, },
  { 91 /* .insn_i */, RISCV::InsnI_Mem, Convert__AnyRegOperand1_2__InsnDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_4__imm_95_0, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_UImm3, MCK_AnyRegOperand, MCK__40_, MCK_AnyRegOperand, MCK__41_ }, },
  { 91 /* .insn_i */, RISCV::InsnI_Mem, Convert__AnyRegOperand1_2__InsnDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_5__SImm121_3, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_UImm3, MCK_AnyRegOperand, MCK_SImm12, MCK__40_, MCK_AnyRegOperand, MCK__41_ }, },
  { 99 /* .insn_j */, RISCV::InsnJ, Convert__AnyRegOperand1_1__InsnDirectiveOpcode1_0__SImm21Lsb0JAL1_2, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_AnyRegOperand, MCK_SImm21Lsb0JAL }, },
  { 107 /* .insn_r */, RISCV::InsnR, Convert__AnyRegOperand1_3__InsnDirectiveOpcode1_0__UImm31_1__UImm71_2__AnyRegOperand1_4__AnyRegOperand1_5, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_UImm3, MCK_UImm7, MCK_AnyRegOperand, MCK_AnyRegOperand, MCK_AnyRegOperand }, },
  { 107 /* .insn_r */, RISCV::InsnR4, Convert__AnyRegOperand1_3__InsnDirectiveOpcode1_0__UImm31_1__UImm21_2__AnyRegOperand1_4__AnyRegOperand1_5__AnyRegOperand1_6, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_UImm3, MCK_UImm2, MCK_AnyRegOperand, MCK_AnyRegOperand, MCK_AnyRegOperand, MCK_AnyRegOperand }, },
  { 115 /* .insn_r4 */, RISCV::InsnR4, Convert__AnyRegOperand1_3__InsnDirectiveOpcode1_0__UImm31_1__UImm21_2__AnyRegOperand1_4__AnyRegOperand1_5__AnyRegOperand1_6, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_UImm3, MCK_UImm2, MCK_AnyRegOperand, MCK_AnyRegOperand, MCK_AnyRegOperand, MCK_AnyRegOperand }, },
  { 124 /* .insn_s */, RISCV::InsnS, Convert__InsnDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_2__AnyRegOperand1_4__imm_95_0, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_UImm3, MCK_AnyRegOperand, MCK__40_, MCK_AnyRegOperand, MCK__41_ }, },
  { 124 /* .insn_s */, RISCV::InsnS, Convert__InsnDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_2__AnyRegOperand1_5__SImm121_3, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_UImm3, MCK_AnyRegOperand, MCK_SImm12, MCK__40_, MCK_AnyRegOperand, MCK__41_ }, },
  { 132 /* .insn_sb */, RISCV::InsnB, Convert__InsnDirectiveOpcode1_0__UImm31_1__AnyRegOperand1_2__AnyRegOperand1_3__SImm13Lsb01_4, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_UImm3, MCK_AnyRegOperand, MCK_AnyRegOperand, MCK_SImm13Lsb0 }, },
  { 141 /* .insn_u */, RISCV::InsnU, Convert__AnyRegOperand1_1__InsnDirectiveOpcode1_0__UImm20LUI1_2, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_AnyRegOperand, MCK_UImm20LUI }, },
  { 149 /* .insn_uj */, RISCV::InsnJ, Convert__AnyRegOperand1_1__InsnDirectiveOpcode1_0__SImm21Lsb0JAL1_2, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_AnyRegOperand, MCK_SImm21Lsb0JAL }, },
  { 158 /* add */, RISCV::ADD, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 158 /* add */, RISCV::ADDI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 158 /* add */, RISCV::PseudoAddTPRel, Convert__Reg1_0__Reg1_1__Reg1_2__TPRelAddSymbol1_3, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_TPRelAddSymbol }, },
  { 162 /* add.uw */, RISCV::ADD_UW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 169 /* addi */, RISCV::ADDI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 174 /* addiw */, RISCV::ADDIW, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 180 /* addw */, RISCV::ADDW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 180 /* addw */, RISCV::ADDIW, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 185 /* aes32dsi */, RISCV::AES32DSI, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasStdExtZknd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 194 /* aes32dsmi */, RISCV::AES32DSMI, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasStdExtZknd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 204 /* aes32esi */, RISCV::AES32ESI, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasStdExtZkne_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 213 /* aes32esmi */, RISCV::AES32ESMI, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasStdExtZkne_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 223 /* aes64ds */, RISCV::AES64DS, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZknd_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 231 /* aes64dsm */, RISCV::AES64DSM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZknd_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 240 /* aes64es */, RISCV::AES64ES, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZkne_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 248 /* aes64esm */, RISCV::AES64ESM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZkne_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 257 /* aes64im */, RISCV::AES64IM, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZknd_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 265 /* aes64ks1i */, RISCV::AES64KS1I, Convert__Reg1_0__Reg1_1__RnumArg1_2, AMFBS_HasStdExtZkndOrZkne_IsRV64, { MCK_GPR, MCK_GPR, MCK_RnumArg }, },
  { 275 /* aes64ks2 */, RISCV::AES64KS2, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZkndOrZkne_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 284 /* amoadd.b */, RISCV::AMOADD_B, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 293 /* amoadd.b.aq */, RISCV::AMOADD_B_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 305 /* amoadd.b.aqrl */, RISCV::AMOADD_B_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 319 /* amoadd.b.rl */, RISCV::AMOADD_B_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 331 /* amoadd.d */, RISCV::AMOADD_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 340 /* amoadd.d.aq */, RISCV::AMOADD_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 352 /* amoadd.d.aqrl */, RISCV::AMOADD_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 366 /* amoadd.d.rl */, RISCV::AMOADD_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 378 /* amoadd.h */, RISCV::AMOADD_H, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 387 /* amoadd.h.aq */, RISCV::AMOADD_H_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 399 /* amoadd.h.aqrl */, RISCV::AMOADD_H_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 413 /* amoadd.h.rl */, RISCV::AMOADD_H_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 425 /* amoadd.w */, RISCV::AMOADD_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 434 /* amoadd.w.aq */, RISCV::AMOADD_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 446 /* amoadd.w.aqrl */, RISCV::AMOADD_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 460 /* amoadd.w.rl */, RISCV::AMOADD_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 472 /* amoand.b */, RISCV::AMOAND_B, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 481 /* amoand.b.aq */, RISCV::AMOAND_B_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 493 /* amoand.b.aqrl */, RISCV::AMOAND_B_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 507 /* amoand.b.rl */, RISCV::AMOAND_B_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 519 /* amoand.d */, RISCV::AMOAND_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 528 /* amoand.d.aq */, RISCV::AMOAND_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 540 /* amoand.d.aqrl */, RISCV::AMOAND_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 554 /* amoand.d.rl */, RISCV::AMOAND_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 566 /* amoand.h */, RISCV::AMOAND_H, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 575 /* amoand.h.aq */, RISCV::AMOAND_H_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 587 /* amoand.h.aqrl */, RISCV::AMOAND_H_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 601 /* amoand.h.rl */, RISCV::AMOAND_H_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 613 /* amoand.w */, RISCV::AMOAND_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 622 /* amoand.w.aq */, RISCV::AMOAND_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 634 /* amoand.w.aqrl */, RISCV::AMOAND_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 648 /* amoand.w.rl */, RISCV::AMOAND_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 660 /* amocas.b */, RISCV::AMOCAS_B, Convert__Reg1_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha_HasStdExtZacas, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 669 /* amocas.b.aq */, RISCV::AMOCAS_B_AQ, Convert__Reg1_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha_HasStdExtZacas, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 681 /* amocas.b.aqrl */, RISCV::AMOCAS_B_AQ_RL, Convert__Reg1_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha_HasStdExtZacas, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 695 /* amocas.b.rl */, RISCV::AMOCAS_B_RL, Convert__Reg1_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha_HasStdExtZacas, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 707 /* amocas.d */, RISCV::AMOCAS_D_RV64, Convert__Reg1_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZacas_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 707 /* amocas.d */, RISCV::AMOCAS_D_RV32, Convert__GPRPairRV321_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__GPRPairRV321_1, AMFBS_HasStdExtZacas_IsRV32, { MCK_GPRPairRV32, MCK_GPRPairRV32, MCK_ZeroOffsetMemOpOperand }, },
  { 716 /* amocas.d.aq */, RISCV::AMOCAS_D_RV64_AQ, Convert__Reg1_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZacas_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 716 /* amocas.d.aq */, RISCV::AMOCAS_D_RV32_AQ, Convert__GPRPairRV321_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__GPRPairRV321_1, AMFBS_HasStdExtZacas_IsRV32, { MCK_GPRPairRV32, MCK_GPRPairRV32, MCK_ZeroOffsetMemOpOperand }, },
  { 728 /* amocas.d.aqrl */, RISCV::AMOCAS_D_RV64_AQ_RL, Convert__Reg1_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZacas_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 728 /* amocas.d.aqrl */, RISCV::AMOCAS_D_RV32_AQ_RL, Convert__GPRPairRV321_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__GPRPairRV321_1, AMFBS_HasStdExtZacas_IsRV32, { MCK_GPRPairRV32, MCK_GPRPairRV32, MCK_ZeroOffsetMemOpOperand }, },
  { 742 /* amocas.d.rl */, RISCV::AMOCAS_D_RV64_RL, Convert__Reg1_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZacas_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 742 /* amocas.d.rl */, RISCV::AMOCAS_D_RV32_RL, Convert__GPRPairRV321_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__GPRPairRV321_1, AMFBS_HasStdExtZacas_IsRV32, { MCK_GPRPairRV32, MCK_GPRPairRV32, MCK_ZeroOffsetMemOpOperand }, },
  { 754 /* amocas.h */, RISCV::AMOCAS_H, Convert__Reg1_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha_HasStdExtZacas, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 763 /* amocas.h.aq */, RISCV::AMOCAS_H_AQ, Convert__Reg1_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha_HasStdExtZacas, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 775 /* amocas.h.aqrl */, RISCV::AMOCAS_H_AQ_RL, Convert__Reg1_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha_HasStdExtZacas, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 789 /* amocas.h.rl */, RISCV::AMOCAS_H_RL, Convert__Reg1_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha_HasStdExtZacas, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 801 /* amocas.q */, RISCV::AMOCAS_Q, Convert__GPRPairRV641_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__GPRPairRV641_1, AMFBS_HasStdExtZacas_IsRV64, { MCK_GPRPairRV64, MCK_GPRPairRV64, MCK_ZeroOffsetMemOpOperand }, },
  { 810 /* amocas.q.aq */, RISCV::AMOCAS_Q_AQ, Convert__GPRPairRV641_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__GPRPairRV641_1, AMFBS_HasStdExtZacas_IsRV64, { MCK_GPRPairRV64, MCK_GPRPairRV64, MCK_ZeroOffsetMemOpOperand }, },
  { 822 /* amocas.q.aqrl */, RISCV::AMOCAS_Q_AQ_RL, Convert__GPRPairRV641_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__GPRPairRV641_1, AMFBS_HasStdExtZacas_IsRV64, { MCK_GPRPairRV64, MCK_GPRPairRV64, MCK_ZeroOffsetMemOpOperand }, },
  { 836 /* amocas.q.rl */, RISCV::AMOCAS_Q_RL, Convert__GPRPairRV641_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__GPRPairRV641_1, AMFBS_HasStdExtZacas_IsRV64, { MCK_GPRPairRV64, MCK_GPRPairRV64, MCK_ZeroOffsetMemOpOperand }, },
  { 848 /* amocas.w */, RISCV::AMOCAS_W, Convert__Reg1_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZacas, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 857 /* amocas.w.aq */, RISCV::AMOCAS_W_AQ, Convert__Reg1_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZacas, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 869 /* amocas.w.aqrl */, RISCV::AMOCAS_W_AQ_RL, Convert__Reg1_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZacas, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 883 /* amocas.w.rl */, RISCV::AMOCAS_W_RL, Convert__Reg1_0__Tie0_1_1__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZacas, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 895 /* amomax.b */, RISCV::AMOMAX_B, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 904 /* amomax.b.aq */, RISCV::AMOMAX_B_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 916 /* amomax.b.aqrl */, RISCV::AMOMAX_B_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 930 /* amomax.b.rl */, RISCV::AMOMAX_B_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 942 /* amomax.d */, RISCV::AMOMAX_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 951 /* amomax.d.aq */, RISCV::AMOMAX_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 963 /* amomax.d.aqrl */, RISCV::AMOMAX_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 977 /* amomax.d.rl */, RISCV::AMOMAX_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 989 /* amomax.h */, RISCV::AMOMAX_H, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 998 /* amomax.h.aq */, RISCV::AMOMAX_H_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1010 /* amomax.h.aqrl */, RISCV::AMOMAX_H_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1024 /* amomax.h.rl */, RISCV::AMOMAX_H_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1036 /* amomax.w */, RISCV::AMOMAX_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1045 /* amomax.w.aq */, RISCV::AMOMAX_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1057 /* amomax.w.aqrl */, RISCV::AMOMAX_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1071 /* amomax.w.rl */, RISCV::AMOMAX_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1083 /* amomaxu.b */, RISCV::AMOMAXU_B, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1093 /* amomaxu.b.aq */, RISCV::AMOMAXU_B_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1106 /* amomaxu.b.aqrl */, RISCV::AMOMAXU_B_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1121 /* amomaxu.b.rl */, RISCV::AMOMAXU_B_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1134 /* amomaxu.d */, RISCV::AMOMAXU_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1144 /* amomaxu.d.aq */, RISCV::AMOMAXU_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1157 /* amomaxu.d.aqrl */, RISCV::AMOMAXU_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1172 /* amomaxu.d.rl */, RISCV::AMOMAXU_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1185 /* amomaxu.h */, RISCV::AMOMAXU_H, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1195 /* amomaxu.h.aq */, RISCV::AMOMAXU_H_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1208 /* amomaxu.h.aqrl */, RISCV::AMOMAXU_H_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1223 /* amomaxu.h.rl */, RISCV::AMOMAXU_H_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1236 /* amomaxu.w */, RISCV::AMOMAXU_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1246 /* amomaxu.w.aq */, RISCV::AMOMAXU_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1259 /* amomaxu.w.aqrl */, RISCV::AMOMAXU_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1274 /* amomaxu.w.rl */, RISCV::AMOMAXU_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1287 /* amomin.b */, RISCV::AMOMIN_B, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1296 /* amomin.b.aq */, RISCV::AMOMIN_B_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1308 /* amomin.b.aqrl */, RISCV::AMOMIN_B_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1322 /* amomin.b.rl */, RISCV::AMOMIN_B_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1334 /* amomin.d */, RISCV::AMOMIN_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1343 /* amomin.d.aq */, RISCV::AMOMIN_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1355 /* amomin.d.aqrl */, RISCV::AMOMIN_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1369 /* amomin.d.rl */, RISCV::AMOMIN_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1381 /* amomin.h */, RISCV::AMOMIN_H, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1390 /* amomin.h.aq */, RISCV::AMOMIN_H_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1402 /* amomin.h.aqrl */, RISCV::AMOMIN_H_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1416 /* amomin.h.rl */, RISCV::AMOMIN_H_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1428 /* amomin.w */, RISCV::AMOMIN_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1437 /* amomin.w.aq */, RISCV::AMOMIN_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1449 /* amomin.w.aqrl */, RISCV::AMOMIN_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1463 /* amomin.w.rl */, RISCV::AMOMIN_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1475 /* amominu.b */, RISCV::AMOMINU_B, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1485 /* amominu.b.aq */, RISCV::AMOMINU_B_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1498 /* amominu.b.aqrl */, RISCV::AMOMINU_B_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1513 /* amominu.b.rl */, RISCV::AMOMINU_B_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1526 /* amominu.d */, RISCV::AMOMINU_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1536 /* amominu.d.aq */, RISCV::AMOMINU_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1549 /* amominu.d.aqrl */, RISCV::AMOMINU_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1564 /* amominu.d.rl */, RISCV::AMOMINU_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1577 /* amominu.h */, RISCV::AMOMINU_H, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1587 /* amominu.h.aq */, RISCV::AMOMINU_H_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1600 /* amominu.h.aqrl */, RISCV::AMOMINU_H_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1615 /* amominu.h.rl */, RISCV::AMOMINU_H_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1628 /* amominu.w */, RISCV::AMOMINU_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1638 /* amominu.w.aq */, RISCV::AMOMINU_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1651 /* amominu.w.aqrl */, RISCV::AMOMINU_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1666 /* amominu.w.rl */, RISCV::AMOMINU_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1679 /* amoor.b */, RISCV::AMOOR_B, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1687 /* amoor.b.aq */, RISCV::AMOOR_B_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1698 /* amoor.b.aqrl */, RISCV::AMOOR_B_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1711 /* amoor.b.rl */, RISCV::AMOOR_B_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1722 /* amoor.d */, RISCV::AMOOR_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1730 /* amoor.d.aq */, RISCV::AMOOR_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1741 /* amoor.d.aqrl */, RISCV::AMOOR_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1754 /* amoor.d.rl */, RISCV::AMOOR_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1765 /* amoor.h */, RISCV::AMOOR_H, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1773 /* amoor.h.aq */, RISCV::AMOOR_H_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1784 /* amoor.h.aqrl */, RISCV::AMOOR_H_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1797 /* amoor.h.rl */, RISCV::AMOOR_H_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1808 /* amoor.w */, RISCV::AMOOR_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1816 /* amoor.w.aq */, RISCV::AMOOR_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1827 /* amoor.w.aqrl */, RISCV::AMOOR_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1840 /* amoor.w.rl */, RISCV::AMOOR_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1851 /* amoswap.b */, RISCV::AMOSWAP_B, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1861 /* amoswap.b.aq */, RISCV::AMOSWAP_B_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1874 /* amoswap.b.aqrl */, RISCV::AMOSWAP_B_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1889 /* amoswap.b.rl */, RISCV::AMOSWAP_B_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1902 /* amoswap.d */, RISCV::AMOSWAP_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1912 /* amoswap.d.aq */, RISCV::AMOSWAP_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1925 /* amoswap.d.aqrl */, RISCV::AMOSWAP_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1940 /* amoswap.d.rl */, RISCV::AMOSWAP_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1953 /* amoswap.h */, RISCV::AMOSWAP_H, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1963 /* amoswap.h.aq */, RISCV::AMOSWAP_H_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1976 /* amoswap.h.aqrl */, RISCV::AMOSWAP_H_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1991 /* amoswap.h.rl */, RISCV::AMOSWAP_H_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2004 /* amoswap.w */, RISCV::AMOSWAP_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2014 /* amoswap.w.aq */, RISCV::AMOSWAP_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2027 /* amoswap.w.aqrl */, RISCV::AMOSWAP_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2042 /* amoswap.w.rl */, RISCV::AMOSWAP_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2055 /* amoxor.b */, RISCV::AMOXOR_B, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2064 /* amoxor.b.aq */, RISCV::AMOXOR_B_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2076 /* amoxor.b.aqrl */, RISCV::AMOXOR_B_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2090 /* amoxor.b.rl */, RISCV::AMOXOR_B_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2102 /* amoxor.d */, RISCV::AMOXOR_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2111 /* amoxor.d.aq */, RISCV::AMOXOR_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2123 /* amoxor.d.aqrl */, RISCV::AMOXOR_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2137 /* amoxor.d.rl */, RISCV::AMOXOR_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2149 /* amoxor.h */, RISCV::AMOXOR_H, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2158 /* amoxor.h.aq */, RISCV::AMOXOR_H_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2170 /* amoxor.h.aqrl */, RISCV::AMOXOR_H_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2184 /* amoxor.h.rl */, RISCV::AMOXOR_H_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZabha, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2196 /* amoxor.w */, RISCV::AMOXOR_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2205 /* amoxor.w.aq */, RISCV::AMOXOR_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2217 /* amoxor.w.aqrl */, RISCV::AMOXOR_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2231 /* amoxor.w.rl */, RISCV::AMOXOR_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZaamo, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2243 /* and */, RISCV::AND, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2243 /* and */, RISCV::ANDI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 2247 /* andi */, RISCV::ANDI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 2252 /* andn */, RISCV::ANDN, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbkb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2257 /* auipc */, RISCV::AUIPC, Convert__Reg1_0__UImm20AUIPC1_1, AMFBS_None, { MCK_GPR, MCK_UImm20AUIPC }, },
  { 2263 /* bclr */, RISCV::BCLR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2263 /* bclr */, RISCV::BCLRI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2268 /* bclri */, RISCV::BCLRI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2274 /* beq */, RISCV::BEQ, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 2278 /* beqz */, RISCV::BEQ, Convert__Reg1_0__regX0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 2283 /* bext */, RISCV::BEXT, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2283 /* bext */, RISCV::BEXTI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2288 /* bexti */, RISCV::BEXTI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2294 /* bge */, RISCV::BGE, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 2298 /* bgeu */, RISCV::BGEU, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 2303 /* bgez */, RISCV::BGE, Convert__Reg1_0__regX0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 2308 /* bgt */, RISCV::BLT, Convert__Reg1_1__Reg1_0__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 2312 /* bgtu */, RISCV::BLTU, Convert__Reg1_1__Reg1_0__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 2317 /* bgtz */, RISCV::BLT, Convert__regX0__Reg1_0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 2322 /* binv */, RISCV::BINV, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2322 /* binv */, RISCV::BINVI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2327 /* binvi */, RISCV::BINVI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2333 /* ble */, RISCV::BGE, Convert__Reg1_1__Reg1_0__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 2337 /* bleu */, RISCV::BGEU, Convert__Reg1_1__Reg1_0__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 2342 /* blez */, RISCV::BGE, Convert__regX0__Reg1_0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 2347 /* blt */, RISCV::BLT, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 2351 /* bltu */, RISCV::BLTU, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 2356 /* bltz */, RISCV::BLT, Convert__Reg1_0__regX0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 2361 /* bne */, RISCV::BNE, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 2365 /* bnez */, RISCV::BNE, Convert__Reg1_0__regX0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 2370 /* brev8 */, RISCV::BREV8, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbkb, { MCK_GPR, MCK_GPR }, },
  { 2376 /* bset */, RISCV::BSET, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2376 /* bset */, RISCV::BSETI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2381 /* bseti */, RISCV::BSETI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2387 /* c.add */, RISCV::C_ADD_HINT, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtCOrZca_HasRVCHints, { MCK_GPRX0, MCK_GPRNoX0 }, },
  { 2387 /* c.add */, RISCV::C_ADD, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtCOrZca, { MCK_GPRNoX0, MCK_GPRNoX0 }, },
  { 2393 /* c.addi */, RISCV::C_ADDI_NOP, Convert__Reg1_0__Tie0_1_1__ImmZero1_1, AMFBS_HasStdExtCOrZca, { MCK_GPRX0, MCK_ImmZero }, },
  { 2393 /* c.addi */, RISCV::C_NOP_HINT, Convert__SImm6NonZero1_1, AMFBS_HasStdExtCOrZca_HasRVCHints, { MCK_GPRX0, MCK_SImm6NonZero }, },
  { 2393 /* c.addi */, RISCV::C_ADDI_HINT_IMM_ZERO, Convert__Reg1_0__Tie0_1_1__ImmZero1_1, AMFBS_HasStdExtCOrZca_HasRVCHints, { MCK_GPRNoX0, MCK_ImmZero }, },
  { 2393 /* c.addi */, RISCV::C_ADDI, Convert__Reg1_0__Tie0_1_1__SImm6NonZero1_1, AMFBS_HasStdExtCOrZca, { MCK_GPRNoX0, MCK_SImm6NonZero }, },
  { 2400 /* c.addi16sp */, RISCV::C_ADDI16SP, Convert__Reg1_0__Tie0_1_1__SImm10Lsb0000NonZero1_1, AMFBS_HasStdExtCOrZca, { MCK_SP, MCK_SImm10Lsb0000NonZero }, },
  { 2411 /* c.addi4spn */, RISCV::C_ADDI4SPN, Convert__Reg1_0__Reg1_1__UImm10Lsb00NonZero1_2, AMFBS_HasStdExtCOrZca, { MCK_GPRC, MCK_SP, MCK_UImm10Lsb00NonZero }, },
  { 2422 /* c.addiw */, RISCV::C_ADDIW, Convert__Reg1_0__Tie0_1_1__SImm61_1, AMFBS_HasStdExtCOrZca_IsRV64, { MCK_GPRNoX0, MCK_SImm6 }, },
  { 2430 /* c.addw */, RISCV::C_ADDW, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtCOrZca_IsRV64, { MCK_GPRC, MCK_GPRC }, },
  { 2437 /* c.and */, RISCV::C_AND, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtCOrZca, { MCK_GPRC, MCK_GPRC }, },
  { 2443 /* c.andi */, RISCV::C_ANDI, Convert__Reg1_0__Tie0_1_1__SImm61_1, AMFBS_HasStdExtCOrZca, { MCK_GPRC, MCK_SImm6 }, },
  { 2450 /* c.beqz */, RISCV::C_BEQZ, Convert__Reg1_0__SImm9Lsb01_1, AMFBS_HasStdExtCOrZca, { MCK_GPRC, MCK_SImm9Lsb0 }, },
  { 2457 /* c.bnez */, RISCV::C_BNEZ, Convert__Reg1_0__SImm9Lsb01_1, AMFBS_HasStdExtCOrZca, { MCK_GPRC, MCK_SImm9Lsb0 }, },
  { 2464 /* c.ebreak */, RISCV::C_EBREAK, Convert_NoOperands, AMFBS_HasStdExtCOrZca, {  }, },
  { 2473 /* c.fld */, RISCV::C_FLD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtCOrZcd_HasStdExtD, { MCK_FPR64C, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2473 /* c.fld */, RISCV::C_FLD, Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1, AMFBS_HasStdExtCOrZcd_HasStdExtD, { MCK_FPR64C, MCK_UImm8Lsb000, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2479 /* c.fldsp */, RISCV::C_FLDSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtCOrZcd_HasStdExtD, { MCK_FPR64, MCK__40_, MCK_SP, MCK__41_ }, },
  { 2479 /* c.fldsp */, RISCV::C_FLDSP, Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1, AMFBS_HasStdExtCOrZcd_HasStdExtD, { MCK_FPR64, MCK_UImm9Lsb000, MCK__40_, MCK_SP, MCK__41_ }, },
  { 2487 /* c.flw */, RISCV::C_FLW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtCOrZcfOrZce_HasStdExtF_IsRV32, { MCK_FPR32C, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2487 /* c.flw */, RISCV::C_FLW, Convert__Reg1_0__Reg1_3__UImm7Lsb001_1, AMFBS_HasStdExtCOrZcfOrZce_HasStdExtF_IsRV32, { MCK_FPR32C, MCK_UImm7Lsb00, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2493 /* c.flwsp */, RISCV::C_FLWSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtCOrZcfOrZce_HasStdExtF_IsRV32, { MCK_FPR32, MCK__40_, MCK_SP, MCK__41_ }, },
  { 2493 /* c.flwsp */, RISCV::C_FLWSP, Convert__Reg1_0__Reg1_3__UImm8Lsb001_1, AMFBS_HasStdExtCOrZcfOrZce_HasStdExtF_IsRV32, { MCK_FPR32, MCK_UImm8Lsb00, MCK__40_, MCK_SP, MCK__41_ }, },
  { 2501 /* c.fsd */, RISCV::C_FSD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtCOrZcd_HasStdExtD, { MCK_FPR64C, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2501 /* c.fsd */, RISCV::C_FSD, Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1, AMFBS_HasStdExtCOrZcd_HasStdExtD, { MCK_FPR64C, MCK_UImm8Lsb000, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2507 /* c.fsdsp */, RISCV::C_FSDSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtCOrZcd_HasStdExtD, { MCK_FPR64, MCK__40_, MCK_SP, MCK__41_ }, },
  { 2507 /* c.fsdsp */, RISCV::C_FSDSP, Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1, AMFBS_HasStdExtCOrZcd_HasStdExtD, { MCK_FPR64, MCK_UImm9Lsb000, MCK__40_, MCK_SP, MCK__41_ }, },
  { 2515 /* c.fsw */, RISCV::C_FSW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtCOrZcfOrZce_HasStdExtF_IsRV32, { MCK_FPR32C, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2515 /* c.fsw */, RISCV::C_FSW, Convert__Reg1_0__Reg1_3__UImm7Lsb001_1, AMFBS_HasStdExtCOrZcfOrZce_HasStdExtF_IsRV32, { MCK_FPR32C, MCK_UImm7Lsb00, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2521 /* c.fswsp */, RISCV::C_FSWSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtCOrZcfOrZce_HasStdExtF_IsRV32, { MCK_FPR32, MCK__40_, MCK_SP, MCK__41_ }, },
  { 2521 /* c.fswsp */, RISCV::C_FSWSP, Convert__Reg1_0__Reg1_3__UImm8Lsb001_1, AMFBS_HasStdExtCOrZcfOrZce_HasStdExtF_IsRV32, { MCK_FPR32, MCK_UImm8Lsb00, MCK__40_, MCK_SP, MCK__41_ }, },
  { 2529 /* c.j */, RISCV::C_J, Convert__SImm12Lsb01_0, AMFBS_HasStdExtCOrZca, { MCK_SImm12Lsb0 }, },
  { 2533 /* c.jal */, RISCV::C_JAL, Convert__SImm12Lsb01_0, AMFBS_HasStdExtCOrZca_IsRV32, { MCK_SImm12Lsb0 }, },
  { 2539 /* c.jalr */, RISCV::C_JALR, Convert__Reg1_0, AMFBS_HasStdExtCOrZca, { MCK_GPRNoX0 }, },
  { 2546 /* c.jr */, RISCV::C_JR, Convert__Reg1_0, AMFBS_HasStdExtCOrZca, { MCK_GPRNoX0 }, },
  { 2551 /* c.lbu */, RISCV::C_LBU, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtZcb, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2551 /* c.lbu */, RISCV::C_LBU, Convert__Reg1_0__Reg1_3__UImm21_1, AMFBS_HasStdExtZcb, { MCK_GPRC, MCK_UImm2, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2557 /* c.ld */, RISCV::C_LD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtCOrZca_IsRV64, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2557 /* c.ld */, RISCV::C_LD, Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1, AMFBS_HasStdExtCOrZca_IsRV64, { MCK_GPRC, MCK_UImm8Lsb000, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2562 /* c.ldsp */, RISCV::C_LDSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtCOrZca_IsRV64, { MCK_GPRNoX0, MCK__40_, MCK_SP, MCK__41_ }, },
  { 2562 /* c.ldsp */, RISCV::C_LDSP, Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1, AMFBS_HasStdExtCOrZca_IsRV64, { MCK_GPRNoX0, MCK_UImm9Lsb000, MCK__40_, MCK_SP, MCK__41_ }, },
  { 2569 /* c.lh */, RISCV::C_LH, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtZcb, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2569 /* c.lh */, RISCV::C_LH, Convert__Reg1_0__Reg1_3__UImm2Lsb01_1, AMFBS_HasStdExtZcb, { MCK_GPRC, MCK_UImm2Lsb0, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2574 /* c.lhu */, RISCV::C_LHU, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtZcb, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2574 /* c.lhu */, RISCV::C_LHU, Convert__Reg1_0__Reg1_3__UImm2Lsb01_1, AMFBS_HasStdExtZcb, { MCK_GPRC, MCK_UImm2Lsb0, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2580 /* c.li */, RISCV::C_LI_HINT, Convert__Reg1_0__SImm61_1, AMFBS_HasStdExtCOrZca_HasRVCHints, { MCK_GPRX0, MCK_SImm6 }, },
  { 2580 /* c.li */, RISCV::C_LI, Convert__Reg1_0__SImm61_1, AMFBS_HasStdExtCOrZca, { MCK_GPRNoX0, MCK_SImm6 }, },
  { 2585 /* c.lui */, RISCV::C_LUI_HINT, Convert__Reg1_0__CLUIImm1_1, AMFBS_HasStdExtCOrZca_HasRVCHints, { MCK_GPRX0, MCK_CLUIImm }, },
  { 2585 /* c.lui */, RISCV::C_LUI, Convert__Reg1_0__CLUIImm1_1, AMFBS_HasStdExtCOrZca, { MCK_GPRNoX0X2, MCK_CLUIImm }, },
  { 2591 /* c.lw */, RISCV::C_LW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtCOrZca, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2591 /* c.lw */, RISCV::C_LW, Convert__Reg1_0__Reg1_3__UImm7Lsb001_1, AMFBS_HasStdExtCOrZca, { MCK_GPRC, MCK_UImm7Lsb00, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2596 /* c.lwsp */, RISCV::C_LWSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtCOrZca, { MCK_GPRNoX0, MCK__40_, MCK_SP, MCK__41_ }, },
  { 2596 /* c.lwsp */, RISCV::C_LWSP, Convert__Reg1_0__Reg1_3__UImm8Lsb001_1, AMFBS_HasStdExtCOrZca, { MCK_GPRNoX0, MCK_UImm8Lsb00, MCK__40_, MCK_SP, MCK__41_ }, },
  { 2603 /* c.mop.1 */, RISCV::C_MOP1, Convert_NoOperands, AMFBS_HasStdExtZcmop, {  }, },
  { 2611 /* c.mop.11 */, RISCV::C_MOP11, Convert_NoOperands, AMFBS_HasStdExtZcmop, {  }, },
  { 2620 /* c.mop.13 */, RISCV::C_MOP13, Convert_NoOperands, AMFBS_HasStdExtZcmop, {  }, },
  { 2629 /* c.mop.15 */, RISCV::C_MOP15, Convert_NoOperands, AMFBS_HasStdExtZcmop, {  }, },
  { 2638 /* c.mop.3 */, RISCV::C_MOP3, Convert_NoOperands, AMFBS_HasStdExtZcmop, {  }, },
  { 2646 /* c.mop.5 */, RISCV::C_MOP5, Convert_NoOperands, AMFBS_HasStdExtZcmop, {  }, },
  { 2654 /* c.mop.7 */, RISCV::C_MOP7, Convert_NoOperands, AMFBS_HasStdExtZcmop, {  }, },
  { 2662 /* c.mop.9 */, RISCV::C_MOP9, Convert_NoOperands, AMFBS_HasStdExtZcmop, {  }, },
  { 2670 /* c.mul */, RISCV::C_MUL, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtZcb_HasStdExtZmmul, { MCK_GPRC, MCK_GPRC }, },
  { 2676 /* c.mv */, RISCV::C_MV_HINT, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtCOrZca_HasRVCHints, { MCK_GPRX0, MCK_GPRNoX0 }, },
  { 2676 /* c.mv */, RISCV::C_MV, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtCOrZca, { MCK_GPRNoX0, MCK_GPRNoX0 }, },
  { 2681 /* c.nop */, RISCV::C_NOP, Convert_NoOperands, AMFBS_HasStdExtCOrZca, {  }, },
  { 2681 /* c.nop */, RISCV::C_NOP_HINT, Convert__SImm6NonZero1_0, AMFBS_HasStdExtCOrZca_HasRVCHints, { MCK_SImm6NonZero }, },
  { 2687 /* c.not */, RISCV::C_NOT, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtZcb, { MCK_GPRC }, },
  { 2693 /* c.ntl.all */, RISCV::C_ADD_HINT, Convert__regX0__Tie0_1_1__regX5, AMFBS_HasStdExtC_HasRVCHints_HasStdExtZihintntl, {  }, },
  { 2703 /* c.ntl.p1 */, RISCV::C_ADD_HINT, Convert__regX0__Tie0_1_1__regX2, AMFBS_HasStdExtC_HasRVCHints_HasStdExtZihintntl, {  }, },
  { 2712 /* c.ntl.pall */, RISCV::C_ADD_HINT, Convert__regX0__Tie0_1_1__regX3, AMFBS_HasStdExtC_HasRVCHints_HasStdExtZihintntl, {  }, },
  { 2723 /* c.ntl.s1 */, RISCV::C_ADD_HINT, Convert__regX0__Tie0_1_1__regX4, AMFBS_HasStdExtC_HasRVCHints_HasStdExtZihintntl, {  }, },
  { 2732 /* c.or */, RISCV::C_OR, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtCOrZca, { MCK_GPRC, MCK_GPRC }, },
  { 2737 /* c.sb */, RISCV::C_SB, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtZcb, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2737 /* c.sb */, RISCV::C_SB, Convert__Reg1_0__Reg1_3__UImm21_1, AMFBS_HasStdExtZcb, { MCK_GPRC, MCK_UImm2, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2742 /* c.sd */, RISCV::C_SD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtCOrZca_IsRV64, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2742 /* c.sd */, RISCV::C_SD, Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1, AMFBS_HasStdExtCOrZca_IsRV64, { MCK_GPRC, MCK_UImm8Lsb000, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2747 /* c.sdsp */, RISCV::C_SDSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtCOrZca_IsRV64, { MCK_GPRNoX0, MCK__40_, MCK_SP, MCK__41_ }, },
  { 2747 /* c.sdsp */, RISCV::C_SDSP, Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1, AMFBS_HasStdExtCOrZca_IsRV64, { MCK_GPR, MCK_UImm9Lsb000, MCK__40_, MCK_SP, MCK__41_ }, },
  { 2754 /* c.sext.b */, RISCV::C_SEXT_B, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtZcb_HasStdExtZbb, { MCK_GPRC }, },
  { 2763 /* c.sext.h */, RISCV::C_SEXT_H, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtZcb_HasStdExtZbb, { MCK_GPRC }, },
  { 2772 /* c.sh */, RISCV::C_SH, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtZcb, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2772 /* c.sh */, RISCV::C_SH, Convert__Reg1_0__Reg1_3__UImm2Lsb01_1, AMFBS_HasStdExtZcb, { MCK_GPRC, MCK_UImm2Lsb0, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2777 /* c.slli */, RISCV::C_SLLI_HINT, Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1, AMFBS_HasStdExtCOrZca_HasRVCHints, { MCK_GPRX0, MCK_UImmLog2XLenNonZero }, },
  { 2777 /* c.slli */, RISCV::C_SLLI, Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1, AMFBS_HasStdExtCOrZca, { MCK_GPRNoX0, MCK_UImmLog2XLenNonZero }, },
  { 2784 /* c.slli64 */, RISCV::C_SLLI64_HINT, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtCOrZca_HasRVCHints, { MCK_GPR }, },
  { 2793 /* c.srai */, RISCV::C_SRAI, Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1, AMFBS_HasStdExtCOrZca, { MCK_GPRC, MCK_UImmLog2XLenNonZero }, },
  { 2800 /* c.srai64 */, RISCV::C_SRAI64_HINT, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtCOrZca_HasRVCHints, { MCK_GPRC }, },
  { 2809 /* c.srli */, RISCV::C_SRLI, Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1, AMFBS_HasStdExtCOrZca, { MCK_GPRC, MCK_UImmLog2XLenNonZero }, },
  { 2816 /* c.srli64 */, RISCV::C_SRLI64_HINT, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtCOrZca_HasRVCHints, { MCK_GPRC }, },
  { 2825 /* c.sspopchk */, RISCV::C_SSPOPCHK, Convert__Reg1_0, AMFBS_HasStdExtZicfiss_HasStdExtZcmop, { MCK_GPRX5 }, },
  { 2836 /* c.sspush */, RISCV::C_SSPUSH, Convert__Reg1_0, AMFBS_HasStdExtZicfiss_HasStdExtZcmop, { MCK_GPRX1 }, },
  { 2845 /* c.sub */, RISCV::C_SUB, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtCOrZca, { MCK_GPRC, MCK_GPRC }, },
  { 2851 /* c.subw */, RISCV::C_SUBW, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtCOrZca_IsRV64, { MCK_GPRC, MCK_GPRC }, },
  { 2858 /* c.sw */, RISCV::C_SW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtCOrZca, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2858 /* c.sw */, RISCV::C_SW, Convert__Reg1_0__Reg1_3__UImm7Lsb001_1, AMFBS_HasStdExtCOrZca, { MCK_GPRC, MCK_UImm7Lsb00, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 2863 /* c.swsp */, RISCV::C_SWSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtCOrZca, { MCK_GPRNoX0, MCK__40_, MCK_SP, MCK__41_ }, },
  { 2863 /* c.swsp */, RISCV::C_SWSP, Convert__Reg1_0__Reg1_3__UImm8Lsb001_1, AMFBS_HasStdExtCOrZca, { MCK_GPR, MCK_UImm8Lsb00, MCK__40_, MCK_SP, MCK__41_ }, },
  { 2870 /* c.unimp */, RISCV::C_UNIMP, Convert_NoOperands, AMFBS_HasStdExtCOrZca, {  }, },
  { 2878 /* c.xor */, RISCV::C_XOR, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtCOrZca, { MCK_GPRC, MCK_GPRC }, },
  { 2884 /* c.zext.b */, RISCV::C_ZEXT_B, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtZcb, { MCK_GPRC }, },
  { 2893 /* c.zext.h */, RISCV::C_ZEXT_H, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtZcb_HasStdExtZbb, { MCK_GPRC }, },
  { 2902 /* c.zext.w */, RISCV::C_ZEXT_W, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtZcb_HasStdExtZba_IsRV64, { MCK_GPRC }, },
  { 2911 /* call */, RISCV::PseudoCALL, Convert__CallSymbol1_0, AMFBS_None, { MCK_CallSymbol }, },
  { 2911 /* call */, RISCV::PseudoCALLReg, Convert__Reg1_0__CallSymbol1_1, AMFBS_None, { MCK_GPR, MCK_CallSymbol }, },
  { 2916 /* cbo.clean */, RISCV::CBO_CLEAN, Convert__ZeroOffsetMemOpOperand1_0, AMFBS_HasStdExtZicbom, { MCK_ZeroOffsetMemOpOperand }, },
  { 2926 /* cbo.flush */, RISCV::CBO_FLUSH, Convert__ZeroOffsetMemOpOperand1_0, AMFBS_HasStdExtZicbom, { MCK_ZeroOffsetMemOpOperand }, },
  { 2936 /* cbo.inval */, RISCV::CBO_INVAL, Convert__ZeroOffsetMemOpOperand1_0, AMFBS_HasStdExtZicbom, { MCK_ZeroOffsetMemOpOperand }, },
  { 2946 /* cbo.zero */, RISCV::CBO_ZERO, Convert__ZeroOffsetMemOpOperand1_0, AMFBS_HasStdExtZicboz, { MCK_ZeroOffsetMemOpOperand }, },
  { 2955 /* clmul */, RISCV::CLMUL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbcOrZbkc, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2961 /* clmulh */, RISCV::CLMULH, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbcOrZbkc, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2968 /* clmulr */, RISCV::CLMULR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbc, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2975 /* clz */, RISCV::CLZ, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 2979 /* clzw */, RISCV::CLZW, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2984 /* cm.jalt */, RISCV::CM_JALT, Convert__UImm8GE321_0, AMFBS_HasStdExtZcmt, { MCK_UImm8GE32 }, },
  { 2992 /* cm.jt */, RISCV::CM_JT, Convert__UImm51_0, AMFBS_HasStdExtZcmt, { MCK_UImm5 }, },
  { 2998 /* cm.mva01s */, RISCV::CM_MVA01S, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZcmp, { MCK_SR07, MCK_SR07 }, },
  { 3008 /* cm.mvsa01 */, RISCV::CM_MVSA01, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZcmp, { MCK_SR07, MCK_SR07 }, },
  { 3018 /* cm.pop */, RISCV::CM_POP, Convert__Rlist1_0__StackAdj1_1, AMFBS_HasStdExtZcmp, { MCK_Rlist, MCK_StackAdj }, },
  { 3025 /* cm.popret */, RISCV::CM_POPRET, Convert__Rlist1_0__StackAdj1_1, AMFBS_HasStdExtZcmp, { MCK_Rlist, MCK_StackAdj }, },
  { 3035 /* cm.popretz */, RISCV::CM_POPRETZ, Convert__Rlist1_0__StackAdj1_1, AMFBS_HasStdExtZcmp, { MCK_Rlist, MCK_StackAdj }, },
  { 3046 /* cm.push */, RISCV::CM_PUSH, Convert__Rlist1_0__NegStackAdj1_1, AMFBS_HasStdExtZcmp, { MCK_Rlist, MCK_NegStackAdj }, },
  { 3054 /* cpop */, RISCV::CPOP, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 3059 /* cpopw */, RISCV::CPOPW, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3065 /* csrc */, RISCV::CSRRC, Convert__regX0__CSRSystemRegister1_0__Reg1_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_GPR }, },
  { 3065 /* csrc */, RISCV::CSRRCI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 3070 /* csrci */, RISCV::CSRRCI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 3076 /* csrr */, RISCV::CSRRS, Convert__Reg1_0__CSRSystemRegister1_1__regX0, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister }, },
  { 3081 /* csrrc */, RISCV::CSRRC, Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_GPR }, },
  { 3081 /* csrrc */, RISCV::CSRRCI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 3087 /* csrrci */, RISCV::CSRRCI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 3094 /* csrrs */, RISCV::CSRRS, Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_GPR }, },
  { 3094 /* csrrs */, RISCV::CSRRSI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 3100 /* csrrsi */, RISCV::CSRRSI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 3107 /* csrrw */, RISCV::CSRRW, Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_GPR }, },
  { 3107 /* csrrw */, RISCV::CSRRWI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 3113 /* csrrwi */, RISCV::CSRRWI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 3120 /* csrs */, RISCV::CSRRS, Convert__regX0__CSRSystemRegister1_0__Reg1_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_GPR }, },
  { 3120 /* csrs */, RISCV::CSRRSI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 3125 /* csrsi */, RISCV::CSRRSI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 3131 /* csrw */, RISCV::CSRRW, Convert__regX0__CSRSystemRegister1_0__Reg1_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_GPR }, },
  { 3131 /* csrw */, RISCV::CSRRWI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 3136 /* csrwi */, RISCV::CSRRWI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 3142 /* ctz */, RISCV::CTZ, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 3146 /* ctzw */, RISCV::CTZW, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3151 /* cv.abs */, RISCV::CV_ABS, Convert__Reg1_0__Reg1_1, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3158 /* cv.abs.b */, RISCV::CV_ABS_B, Convert__Reg1_0__Reg1_1, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3167 /* cv.abs.h */, RISCV::CV_ABS_H, Convert__Reg1_0__Reg1_1, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3176 /* cv.add.b */, RISCV::CV_ADD_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3185 /* cv.add.div2 */, RISCV::CV_ADD_DIV2, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3197 /* cv.add.div4 */, RISCV::CV_ADD_DIV4, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3209 /* cv.add.div8 */, RISCV::CV_ADD_DIV8, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3221 /* cv.add.h */, RISCV::CV_ADD_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3230 /* cv.add.sc.b */, RISCV::CV_ADD_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3242 /* cv.add.sc.h */, RISCV::CV_ADD_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3254 /* cv.add.sci.b */, RISCV::CV_ADD_SCI_B, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 3267 /* cv.add.sci.h */, RISCV::CV_ADD_SCI_H, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 3280 /* cv.addn */, RISCV::CV_ADDN, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3288 /* cv.addnr */, RISCV::CV_ADDNR, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3297 /* cv.addrn */, RISCV::CV_ADDRN, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3306 /* cv.addrnr */, RISCV::CV_ADDRNR, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3316 /* cv.addun */, RISCV::CV_ADDUN, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3325 /* cv.addunr */, RISCV::CV_ADDUNR, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3335 /* cv.addurn */, RISCV::CV_ADDURN, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3345 /* cv.addurnr */, RISCV::CV_ADDURNR, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3356 /* cv.and.b */, RISCV::CV_AND_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3365 /* cv.and.h */, RISCV::CV_AND_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3374 /* cv.and.sc.b */, RISCV::CV_AND_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3386 /* cv.and.sc.h */, RISCV::CV_AND_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3398 /* cv.and.sci.b */, RISCV::CV_AND_SCI_B, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 3411 /* cv.and.sci.h */, RISCV::CV_AND_SCI_H, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 3424 /* cv.avg.b */, RISCV::CV_AVG_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3433 /* cv.avg.h */, RISCV::CV_AVG_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3442 /* cv.avg.sc.b */, RISCV::CV_AVG_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3454 /* cv.avg.sc.h */, RISCV::CV_AVG_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3466 /* cv.avg.sci.b */, RISCV::CV_AVG_SCI_B, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 3479 /* cv.avg.sci.h */, RISCV::CV_AVG_SCI_H, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 3492 /* cv.avgu.b */, RISCV::CV_AVGU_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3502 /* cv.avgu.h */, RISCV::CV_AVGU_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3512 /* cv.avgu.sc.b */, RISCV::CV_AVGU_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3525 /* cv.avgu.sc.h */, RISCV::CV_AVGU_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3538 /* cv.avgu.sci.b */, RISCV::CV_AVGU_SCI_B, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 3552 /* cv.avgu.sci.h */, RISCV::CV_AVGU_SCI_H, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 3566 /* cv.bclr */, RISCV::CV_BCLR, Convert__Reg1_0__Reg1_1__UImm51_2__UImm51_3, AMFBS_HasVendorXCVbitmanip_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm5, MCK_UImm5 }, },
  { 3574 /* cv.bclrr */, RISCV::CV_BCLRR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVbitmanip_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3583 /* cv.beqimm */, RISCV::CV_BEQIMM, Convert__Reg1_0__SImm51_1__SImm13Lsb01_2, AMFBS_HasVendorXCVbi_IsRV32, { MCK_GPR, MCK_SImm5, MCK_SImm13Lsb0 }, },
  { 3593 /* cv.bitrev */, RISCV::CV_BITREV, Convert__Reg1_0__Reg1_1__UImm21_2__UImm51_3, AMFBS_HasVendorXCVbitmanip_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm2, MCK_UImm5 }, },
  { 3603 /* cv.bneimm */, RISCV::CV_BNEIMM, Convert__Reg1_0__SImm51_1__SImm13Lsb01_2, AMFBS_HasVendorXCVbi_IsRV32, { MCK_GPR, MCK_SImm5, MCK_SImm13Lsb0 }, },
  { 3613 /* cv.bset */, RISCV::CV_BSET, Convert__Reg1_0__Reg1_1__UImm51_2__UImm51_3, AMFBS_HasVendorXCVbitmanip_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm5, MCK_UImm5 }, },
  { 3621 /* cv.bsetr */, RISCV::CV_BSETR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVbitmanip_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3630 /* cv.clb */, RISCV::CV_CLB, Convert__Reg1_0__Reg1_1, AMFBS_HasVendorXCVbitmanip_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3637 /* cv.clip */, RISCV::CV_CLIP, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3645 /* cv.clipr */, RISCV::CV_CLIPR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3654 /* cv.clipu */, RISCV::CV_CLIPU, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3663 /* cv.clipur */, RISCV::CV_CLIPUR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3673 /* cv.cmpeq.b */, RISCV::CV_CMPEQ_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3684 /* cv.cmpeq.h */, RISCV::CV_CMPEQ_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3695 /* cv.cmpeq.sc.b */, RISCV::CV_CMPEQ_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3709 /* cv.cmpeq.sc.h */, RISCV::CV_CMPEQ_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3723 /* cv.cmpeq.sci.b */, RISCV::CV_CMPEQ_SCI_B, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 3738 /* cv.cmpeq.sci.h */, RISCV::CV_CMPEQ_SCI_H, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 3753 /* cv.cmpge.b */, RISCV::CV_CMPGE_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3764 /* cv.cmpge.h */, RISCV::CV_CMPGE_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3775 /* cv.cmpge.sc.b */, RISCV::CV_CMPGE_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3789 /* cv.cmpge.sc.h */, RISCV::CV_CMPGE_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3803 /* cv.cmpge.sci.b */, RISCV::CV_CMPGE_SCI_B, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 3818 /* cv.cmpge.sci.h */, RISCV::CV_CMPGE_SCI_H, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 3833 /* cv.cmpgeu.b */, RISCV::CV_CMPGEU_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3845 /* cv.cmpgeu.h */, RISCV::CV_CMPGEU_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3857 /* cv.cmpgeu.sc.b */, RISCV::CV_CMPGEU_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3872 /* cv.cmpgeu.sc.h */, RISCV::CV_CMPGEU_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3887 /* cv.cmpgeu.sci.b */, RISCV::CV_CMPGEU_SCI_B, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 3903 /* cv.cmpgeu.sci.h */, RISCV::CV_CMPGEU_SCI_H, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 3919 /* cv.cmpgt.b */, RISCV::CV_CMPGT_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3930 /* cv.cmpgt.h */, RISCV::CV_CMPGT_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3941 /* cv.cmpgt.sc.b */, RISCV::CV_CMPGT_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3955 /* cv.cmpgt.sc.h */, RISCV::CV_CMPGT_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3969 /* cv.cmpgt.sci.b */, RISCV::CV_CMPGT_SCI_B, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 3984 /* cv.cmpgt.sci.h */, RISCV::CV_CMPGT_SCI_H, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 3999 /* cv.cmpgtu.b */, RISCV::CV_CMPGTU_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4011 /* cv.cmpgtu.h */, RISCV::CV_CMPGTU_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4023 /* cv.cmpgtu.sc.b */, RISCV::CV_CMPGTU_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4038 /* cv.cmpgtu.sc.h */, RISCV::CV_CMPGTU_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4053 /* cv.cmpgtu.sci.b */, RISCV::CV_CMPGTU_SCI_B, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 4069 /* cv.cmpgtu.sci.h */, RISCV::CV_CMPGTU_SCI_H, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 4085 /* cv.cmple.b */, RISCV::CV_CMPLE_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4096 /* cv.cmple.h */, RISCV::CV_CMPLE_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4107 /* cv.cmple.sc.b */, RISCV::CV_CMPLE_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4121 /* cv.cmple.sc.h */, RISCV::CV_CMPLE_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4135 /* cv.cmple.sci.b */, RISCV::CV_CMPLE_SCI_B, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 4150 /* cv.cmple.sci.h */, RISCV::CV_CMPLE_SCI_H, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 4165 /* cv.cmpleu.b */, RISCV::CV_CMPLEU_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4177 /* cv.cmpleu.h */, RISCV::CV_CMPLEU_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4189 /* cv.cmpleu.sc.b */, RISCV::CV_CMPLEU_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4204 /* cv.cmpleu.sc.h */, RISCV::CV_CMPLEU_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4219 /* cv.cmpleu.sci.b */, RISCV::CV_CMPLEU_SCI_B, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 4235 /* cv.cmpleu.sci.h */, RISCV::CV_CMPLEU_SCI_H, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 4251 /* cv.cmplt.b */, RISCV::CV_CMPLT_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4262 /* cv.cmplt.h */, RISCV::CV_CMPLT_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4273 /* cv.cmplt.sc.b */, RISCV::CV_CMPLT_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4287 /* cv.cmplt.sc.h */, RISCV::CV_CMPLT_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4301 /* cv.cmplt.sci.b */, RISCV::CV_CMPLT_SCI_B, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 4316 /* cv.cmplt.sci.h */, RISCV::CV_CMPLT_SCI_H, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 4331 /* cv.cmpltu.b */, RISCV::CV_CMPLTU_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4343 /* cv.cmpltu.h */, RISCV::CV_CMPLTU_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4355 /* cv.cmpltu.sc.b */, RISCV::CV_CMPLTU_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4370 /* cv.cmpltu.sc.h */, RISCV::CV_CMPLTU_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4385 /* cv.cmpltu.sci.b */, RISCV::CV_CMPLTU_SCI_B, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 4401 /* cv.cmpltu.sci.h */, RISCV::CV_CMPLTU_SCI_H, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 4417 /* cv.cmpne.b */, RISCV::CV_CMPNE_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4428 /* cv.cmpne.h */, RISCV::CV_CMPNE_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4439 /* cv.cmpne.sc.b */, RISCV::CV_CMPNE_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4453 /* cv.cmpne.sc.h */, RISCV::CV_CMPNE_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4467 /* cv.cmpne.sci.b */, RISCV::CV_CMPNE_SCI_B, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 4482 /* cv.cmpne.sci.h */, RISCV::CV_CMPNE_SCI_H, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 4497 /* cv.cnt */, RISCV::CV_CNT, Convert__Reg1_0__Reg1_1, AMFBS_HasVendorXCVbitmanip_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 4504 /* cv.cplxconj */, RISCV::CV_CPLXCONJ, Convert__Reg1_0__Reg1_1, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 4516 /* cv.cplxmul.i */, RISCV::CV_CPLXMUL_I, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4529 /* cv.cplxmul.i.div2 */, RISCV::CV_CPLXMUL_I_DIV2, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4547 /* cv.cplxmul.i.div4 */, RISCV::CV_CPLXMUL_I_DIV4, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4565 /* cv.cplxmul.i.div8 */, RISCV::CV_CPLXMUL_I_DIV8, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4583 /* cv.cplxmul.r */, RISCV::CV_CPLXMUL_R, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4596 /* cv.cplxmul.r.div2 */, RISCV::CV_CPLXMUL_R_DIV2, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4614 /* cv.cplxmul.r.div4 */, RISCV::CV_CPLXMUL_R_DIV4, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4632 /* cv.cplxmul.r.div8 */, RISCV::CV_CPLXMUL_R_DIV8, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4650 /* cv.dotsp.b */, RISCV::CV_DOTSP_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4661 /* cv.dotsp.h */, RISCV::CV_DOTSP_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4672 /* cv.dotsp.sc.b */, RISCV::CV_DOTSP_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4686 /* cv.dotsp.sc.h */, RISCV::CV_DOTSP_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4700 /* cv.dotsp.sci.b */, RISCV::CV_DOTSP_SCI_B, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 4715 /* cv.dotsp.sci.h */, RISCV::CV_DOTSP_SCI_H, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 4730 /* cv.dotup.b */, RISCV::CV_DOTUP_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4741 /* cv.dotup.h */, RISCV::CV_DOTUP_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4752 /* cv.dotup.sc.b */, RISCV::CV_DOTUP_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4766 /* cv.dotup.sc.h */, RISCV::CV_DOTUP_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4780 /* cv.dotup.sci.b */, RISCV::CV_DOTUP_SCI_B, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 4795 /* cv.dotup.sci.h */, RISCV::CV_DOTUP_SCI_H, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 4810 /* cv.dotusp.b */, RISCV::CV_DOTUSP_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4822 /* cv.dotusp.h */, RISCV::CV_DOTUSP_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4834 /* cv.dotusp.sc.b */, RISCV::CV_DOTUSP_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4849 /* cv.dotusp.sc.h */, RISCV::CV_DOTUSP_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4864 /* cv.dotusp.sci.b */, RISCV::CV_DOTUSP_SCI_B, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 4880 /* cv.dotusp.sci.h */, RISCV::CV_DOTUSP_SCI_H, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 4896 /* cv.elw */, RISCV::CV_ELW, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasVendorXCVelw_IsRV32, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 4903 /* cv.extbs */, RISCV::CV_EXTBS, Convert__Reg1_0__Reg1_1, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 4912 /* cv.extbz */, RISCV::CV_EXTBZ, Convert__Reg1_0__Reg1_1, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 4921 /* cv.exths */, RISCV::CV_EXTHS, Convert__Reg1_0__Reg1_1, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 4930 /* cv.exthz */, RISCV::CV_EXTHZ, Convert__Reg1_0__Reg1_1, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 4939 /* cv.extract */, RISCV::CV_EXTRACT, Convert__Reg1_0__Reg1_1__UImm51_2__UImm51_3, AMFBS_HasVendorXCVbitmanip_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm5, MCK_UImm5 }, },
  { 4950 /* cv.extract.b */, RISCV::CV_EXTRACT_B, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 4963 /* cv.extract.h */, RISCV::CV_EXTRACT_H, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 4976 /* cv.extractr */, RISCV::CV_EXTRACTR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVbitmanip_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4988 /* cv.extractu */, RISCV::CV_EXTRACTU, Convert__Reg1_0__Reg1_1__UImm51_2__UImm51_3, AMFBS_HasVendorXCVbitmanip_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm5, MCK_UImm5 }, },
  { 5000 /* cv.extractu.b */, RISCV::CV_EXTRACTU_B, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 5014 /* cv.extractu.h */, RISCV::CV_EXTRACTU_H, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 5028 /* cv.extractur */, RISCV::CV_EXTRACTUR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVbitmanip_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5041 /* cv.ff1 */, RISCV::CV_FF1, Convert__Reg1_0__Reg1_1, AMFBS_HasVendorXCVbitmanip_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 5048 /* cv.fl1 */, RISCV::CV_FL1, Convert__Reg1_0__Reg1_1, AMFBS_HasVendorXCVbitmanip_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 5055 /* cv.insert */, RISCV::CV_INSERT, Convert__Reg1_0__Tie0_1_1__Reg1_1__UImm51_2__UImm51_3, AMFBS_HasVendorXCVbitmanip_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm5, MCK_UImm5 }, },
  { 5065 /* cv.insert.b */, RISCV::CV_INSERT_B, Convert__Reg1_0__Tie0_1_1__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 5077 /* cv.insert.h */, RISCV::CV_INSERT_H, Convert__Reg1_0__Tie0_1_1__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 5089 /* cv.insertr */, RISCV::CV_INSERTR, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVbitmanip_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5100 /* cv.lb */, RISCV::CV_LB_rr, Convert__Reg1_0__RegReg2_1, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK_RegReg }, },
  { 5100 /* cv.lb */, RISCV::CV_LB_rr_inc, Convert__Reg1_0__Reg1_2__Tie1_3_3__Reg1_4, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR }, },
  { 5100 /* cv.lb */, RISCV::CV_LB_ri_inc, Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm121_4, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm12 }, },
  { 5106 /* cv.lbu */, RISCV::CV_LBU_rr, Convert__Reg1_0__RegReg2_1, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK_RegReg }, },
  { 5106 /* cv.lbu */, RISCV::CV_LBU_rr_inc, Convert__Reg1_0__Reg1_2__Tie1_3_3__Reg1_4, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR }, },
  { 5106 /* cv.lbu */, RISCV::CV_LBU_ri_inc, Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm121_4, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm12 }, },
  { 5113 /* cv.lh */, RISCV::CV_LH_rr, Convert__Reg1_0__RegReg2_1, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK_RegReg }, },
  { 5113 /* cv.lh */, RISCV::CV_LH_rr_inc, Convert__Reg1_0__Reg1_2__Tie1_3_3__Reg1_4, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR }, },
  { 5113 /* cv.lh */, RISCV::CV_LH_ri_inc, Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm121_4, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm12 }, },
  { 5119 /* cv.lhu */, RISCV::CV_LHU_rr, Convert__Reg1_0__RegReg2_1, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK_RegReg }, },
  { 5119 /* cv.lhu */, RISCV::CV_LHU_rr_inc, Convert__Reg1_0__Reg1_2__Tie1_3_3__Reg1_4, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR }, },
  { 5119 /* cv.lhu */, RISCV::CV_LHU_ri_inc, Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm121_4, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm12 }, },
  { 5126 /* cv.lw */, RISCV::CV_LW_rr, Convert__Reg1_0__RegReg2_1, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK_RegReg }, },
  { 5126 /* cv.lw */, RISCV::CV_LW_rr_inc, Convert__Reg1_0__Reg1_2__Tie1_3_3__Reg1_4, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR }, },
  { 5126 /* cv.lw */, RISCV::CV_LW_ri_inc, Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm121_4, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm12 }, },
  { 5132 /* cv.mac */, RISCV::CV_MAC, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5139 /* cv.machhsn */, RISCV::CV_MACHHSN, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 5150 /* cv.machhsrn */, RISCV::CV_MACHHSRN, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 5162 /* cv.machhun */, RISCV::CV_MACHHUN, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 5173 /* cv.machhurn */, RISCV::CV_MACHHURN, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 5185 /* cv.macsn */, RISCV::CV_MACSN, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 5194 /* cv.macsrn */, RISCV::CV_MACSRN, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 5204 /* cv.macun */, RISCV::CV_MACUN, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 5213 /* cv.macurn */, RISCV::CV_MACURN, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 5223 /* cv.max */, RISCV::CV_MAX, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5230 /* cv.max.b */, RISCV::CV_MAX_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5239 /* cv.max.h */, RISCV::CV_MAX_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5248 /* cv.max.sc.b */, RISCV::CV_MAX_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5260 /* cv.max.sc.h */, RISCV::CV_MAX_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5272 /* cv.max.sci.b */, RISCV::CV_MAX_SCI_B, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 5285 /* cv.max.sci.h */, RISCV::CV_MAX_SCI_H, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 5298 /* cv.maxu */, RISCV::CV_MAXU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5306 /* cv.maxu.b */, RISCV::CV_MAXU_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5316 /* cv.maxu.h */, RISCV::CV_MAXU_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5326 /* cv.maxu.sc.b */, RISCV::CV_MAXU_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5339 /* cv.maxu.sc.h */, RISCV::CV_MAXU_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5352 /* cv.maxu.sci.b */, RISCV::CV_MAXU_SCI_B, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 5366 /* cv.maxu.sci.h */, RISCV::CV_MAXU_SCI_H, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 5380 /* cv.min */, RISCV::CV_MIN, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5387 /* cv.min.b */, RISCV::CV_MIN_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5396 /* cv.min.h */, RISCV::CV_MIN_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5405 /* cv.min.sc.b */, RISCV::CV_MIN_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5417 /* cv.min.sc.h */, RISCV::CV_MIN_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5429 /* cv.min.sci.b */, RISCV::CV_MIN_SCI_B, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 5442 /* cv.min.sci.h */, RISCV::CV_MIN_SCI_H, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 5455 /* cv.minu */, RISCV::CV_MINU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5463 /* cv.minu.b */, RISCV::CV_MINU_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5473 /* cv.minu.h */, RISCV::CV_MINU_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5483 /* cv.minu.sc.b */, RISCV::CV_MINU_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5496 /* cv.minu.sc.h */, RISCV::CV_MINU_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5509 /* cv.minu.sci.b */, RISCV::CV_MINU_SCI_B, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 5523 /* cv.minu.sci.h */, RISCV::CV_MINU_SCI_H, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 5537 /* cv.msu */, RISCV::CV_MSU, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5544 /* cv.mulhhs */, RISCV::CV_MULHHSN, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5554 /* cv.mulhhsn */, RISCV::CV_MULHHSN, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 5565 /* cv.mulhhsrn */, RISCV::CV_MULHHSRN, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 5577 /* cv.mulhhu */, RISCV::CV_MULHHUN, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5587 /* cv.mulhhun */, RISCV::CV_MULHHUN, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 5598 /* cv.mulhhurn */, RISCV::CV_MULHHURN, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 5610 /* cv.muls */, RISCV::CV_MULSN, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5618 /* cv.mulsn */, RISCV::CV_MULSN, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 5627 /* cv.mulsrn */, RISCV::CV_MULSRN, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 5637 /* cv.mulu */, RISCV::CV_MULUN, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5645 /* cv.mulun */, RISCV::CV_MULUN, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 5654 /* cv.mulurn */, RISCV::CV_MULURN, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCVmac_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 5664 /* cv.or.b */, RISCV::CV_OR_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5672 /* cv.or.h */, RISCV::CV_OR_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5680 /* cv.or.sc.b */, RISCV::CV_OR_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5691 /* cv.or.sc.h */, RISCV::CV_OR_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5702 /* cv.or.sci.b */, RISCV::CV_OR_SCI_B, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 5714 /* cv.or.sci.h */, RISCV::CV_OR_SCI_H, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 5726 /* cv.pack */, RISCV::CV_PACK, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5734 /* cv.pack.h */, RISCV::CV_PACK_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5744 /* cv.packhi.b */, RISCV::CV_PACKHI_B, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5756 /* cv.packlo.b */, RISCV::CV_PACKLO_B, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5768 /* cv.ror */, RISCV::CV_ROR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVbitmanip_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5775 /* cv.sb */, RISCV::CV_SB_rr, Convert__Reg1_0__RegReg2_1, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK_RegReg }, },
  { 5775 /* cv.sb */, RISCV::CV_SB_rr_inc, Convert__Reg1_2__Reg1_0__Tie0_3_3__Reg1_4, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR }, },
  { 5775 /* cv.sb */, RISCV::CV_SB_ri_inc, Convert__Reg1_2__Reg1_0__Tie0_3_3__SImm121_4, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm12 }, },
  { 5781 /* cv.sdotsp.b */, RISCV::CV_SDOTSP_B, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5793 /* cv.sdotsp.h */, RISCV::CV_SDOTSP_H, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5805 /* cv.sdotsp.sc.b */, RISCV::CV_SDOTSP_SC_B, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5820 /* cv.sdotsp.sc.h */, RISCV::CV_SDOTSP_SC_H, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5835 /* cv.sdotsp.sci.b */, RISCV::CV_SDOTSP_SCI_B, Convert__Reg1_0__Tie0_1_1__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 5851 /* cv.sdotsp.sci.h */, RISCV::CV_SDOTSP_SCI_H, Convert__Reg1_0__Tie0_1_1__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 5867 /* cv.sdotup.b */, RISCV::CV_SDOTUP_B, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5879 /* cv.sdotup.h */, RISCV::CV_SDOTUP_H, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5891 /* cv.sdotup.sc.b */, RISCV::CV_SDOTUP_SC_B, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5906 /* cv.sdotup.sc.h */, RISCV::CV_SDOTUP_SC_H, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5921 /* cv.sdotup.sci.b */, RISCV::CV_SDOTUP_SCI_B, Convert__Reg1_0__Tie0_1_1__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 5937 /* cv.sdotup.sci.h */, RISCV::CV_SDOTUP_SCI_H, Convert__Reg1_0__Tie0_1_1__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 5953 /* cv.sdotusp.b */, RISCV::CV_SDOTUSP_B, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5966 /* cv.sdotusp.h */, RISCV::CV_SDOTUSP_H, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5979 /* cv.sdotusp.sc.b */, RISCV::CV_SDOTUSP_SC_B, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 5995 /* cv.sdotusp.sc.h */, RISCV::CV_SDOTUSP_SC_H, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6011 /* cv.sdotusp.sci.b */, RISCV::CV_SDOTUSP_SCI_B, Convert__Reg1_0__Tie0_1_1__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 6028 /* cv.sdotusp.sci.h */, RISCV::CV_SDOTUSP_SCI_H, Convert__Reg1_0__Tie0_1_1__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 6045 /* cv.sh */, RISCV::CV_SH_rr, Convert__Reg1_0__RegReg2_1, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK_RegReg }, },
  { 6045 /* cv.sh */, RISCV::CV_SH_rr_inc, Convert__Reg1_2__Reg1_0__Tie0_3_3__Reg1_4, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR }, },
  { 6045 /* cv.sh */, RISCV::CV_SH_ri_inc, Convert__Reg1_2__Reg1_0__Tie0_3_3__SImm121_4, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm12 }, },
  { 6051 /* cv.shuffle.b */, RISCV::CV_SHUFFLE_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6064 /* cv.shuffle.h */, RISCV::CV_SHUFFLE_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6077 /* cv.shuffle.sci.h */, RISCV::CV_SHUFFLE_SCI_H, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 6094 /* cv.shuffle2.b */, RISCV::CV_SHUFFLE2_B, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6108 /* cv.shuffle2.h */, RISCV::CV_SHUFFLE2_H, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6122 /* cv.shufflei0.sci.b */, RISCV::CV_SHUFFLEI0_SCI_B, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 6141 /* cv.shufflei1.sci.b */, RISCV::CV_SHUFFLEI1_SCI_B, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 6160 /* cv.shufflei2.sci.b */, RISCV::CV_SHUFFLEI2_SCI_B, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 6179 /* cv.shufflei3.sci.b */, RISCV::CV_SHUFFLEI3_SCI_B, Convert__Reg1_0__Reg1_1__UImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm6 }, },
  { 6198 /* cv.slet */, RISCV::CV_SLET, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6206 /* cv.sletu */, RISCV::CV_SLETU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6215 /* cv.sll.b */, RISCV::CV_SLL_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6224 /* cv.sll.h */, RISCV::CV_SLL_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6233 /* cv.sll.sc.b */, RISCV::CV_SLL_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6245 /* cv.sll.sc.h */, RISCV::CV_SLL_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6257 /* cv.sll.sci.b */, RISCV::CV_SLL_SCI_B, Convert__Reg1_0__Reg1_1__UImm31_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm3 }, },
  { 6270 /* cv.sll.sci.h */, RISCV::CV_SLL_SCI_H, Convert__Reg1_0__Reg1_1__UImm41_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm4 }, },
  { 6283 /* cv.sra.b */, RISCV::CV_SRA_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6292 /* cv.sra.h */, RISCV::CV_SRA_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6301 /* cv.sra.sc.b */, RISCV::CV_SRA_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6313 /* cv.sra.sc.h */, RISCV::CV_SRA_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6325 /* cv.sra.sci.b */, RISCV::CV_SRA_SCI_B, Convert__Reg1_0__Reg1_1__UImm31_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm3 }, },
  { 6338 /* cv.sra.sci.h */, RISCV::CV_SRA_SCI_H, Convert__Reg1_0__Reg1_1__UImm41_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm4 }, },
  { 6351 /* cv.srl.b */, RISCV::CV_SRL_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6360 /* cv.srl.h */, RISCV::CV_SRL_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6369 /* cv.srl.sc.b */, RISCV::CV_SRL_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6381 /* cv.srl.sc.h */, RISCV::CV_SRL_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6393 /* cv.srl.sci.b */, RISCV::CV_SRL_SCI_B, Convert__Reg1_0__Reg1_1__UImm31_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm3 }, },
  { 6406 /* cv.srl.sci.h */, RISCV::CV_SRL_SCI_H, Convert__Reg1_0__Reg1_1__UImm41_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_UImm4 }, },
  { 6419 /* cv.sub.b */, RISCV::CV_SUB_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6428 /* cv.sub.div2 */, RISCV::CV_SUB_DIV2, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6440 /* cv.sub.div4 */, RISCV::CV_SUB_DIV4, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6452 /* cv.sub.div8 */, RISCV::CV_SUB_DIV8, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6464 /* cv.sub.h */, RISCV::CV_SUB_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6473 /* cv.sub.sc.b */, RISCV::CV_SUB_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6485 /* cv.sub.sc.h */, RISCV::CV_SUB_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6497 /* cv.sub.sci.b */, RISCV::CV_SUB_SCI_B, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 6510 /* cv.sub.sci.h */, RISCV::CV_SUB_SCI_H, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 6523 /* cv.subn */, RISCV::CV_SUBN, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 6531 /* cv.subnr */, RISCV::CV_SUBNR, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6540 /* cv.subrn */, RISCV::CV_SUBRN, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 6549 /* cv.subrnr */, RISCV::CV_SUBRNR, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6559 /* cv.subrotmj */, RISCV::CV_SUBROTMJ, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6571 /* cv.subrotmj.div2 */, RISCV::CV_SUBROTMJ_DIV2, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6588 /* cv.subrotmj.div4 */, RISCV::CV_SUBROTMJ_DIV4, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6605 /* cv.subrotmj.div8 */, RISCV::CV_SUBROTMJ_DIV8, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6622 /* cv.subun */, RISCV::CV_SUBUN, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 6631 /* cv.subunr */, RISCV::CV_SUBUNR, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6641 /* cv.suburn */, RISCV::CV_SUBURN, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 6651 /* cv.suburnr */, RISCV::CV_SUBURNR, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXCValu_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6662 /* cv.sw */, RISCV::CV_SW_rr, Convert__Reg1_0__RegReg2_1, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK_RegReg }, },
  { 6662 /* cv.sw */, RISCV::CV_SW_rr_inc, Convert__Reg1_2__Reg1_0__Tie0_3_3__Reg1_4, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR }, },
  { 6662 /* cv.sw */, RISCV::CV_SW_ri_inc, Convert__Reg1_2__Reg1_0__Tie0_3_3__SImm121_4, AMFBS_HasVendorXCVmem_IsRV32, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm12 }, },
  { 6668 /* cv.xor.b */, RISCV::CV_XOR_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6677 /* cv.xor.h */, RISCV::CV_XOR_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6686 /* cv.xor.sc.b */, RISCV::CV_XOR_SC_B, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6698 /* cv.xor.sc.h */, RISCV::CV_XOR_SC_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6710 /* cv.xor.sci.b */, RISCV::CV_XOR_SCI_B, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 6723 /* cv.xor.sci.h */, RISCV::CV_XOR_SCI_H, Convert__Reg1_0__Reg1_1__SImm61_2, AMFBS_HasVendorXCVsimd_IsRV32, { MCK_GPR, MCK_GPR, MCK_SImm6 }, },
  { 6736 /* czero.eqz */, RISCV::CZERO_EQZ, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZicond, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6746 /* czero.nez */, RISCV::CZERO_NEZ, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZicond, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6756 /* div */, RISCV::DIV, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6760 /* divu */, RISCV::DIVU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6765 /* divuw */, RISCV::DIVUW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6771 /* divw */, RISCV::DIVW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6776 /* dret */, RISCV::DRET, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 6781 /* ebreak */, RISCV::EBREAK, Convert_NoOperands, AMFBS_None, {  }, },
  { 6788 /* ecall */, RISCV::ECALL, Convert_NoOperands, AMFBS_None, {  }, },
  { 6794 /* fabs.d */, RISCV::FSGNJX_D, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64 }, },
  { 6794 /* fabs.d */, RISCV::FSGNJX_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_1, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 6794 /* fabs.d */, RISCV::FSGNJX_D_IN32X, Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_1, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPRPairAsFPR }, },
  { 6801 /* fabs.h */, RISCV::FSGNJX_H, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16 }, },
  { 6801 /* fabs.h */, RISCV::FSGNJX_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_1, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 6808 /* fabs.s */, RISCV::FSGNJX_S, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32 }, },
  { 6808 /* fabs.s */, RISCV::FSGNJX_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_1, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 6815 /* fadd.d */, RISCV::FADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 6815 /* fadd.d */, RISCV::FADD_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 6815 /* fadd.d */, RISCV::FADD_D_IN32X, Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_FRMArg }, },
  { 6822 /* fadd.h */, RISCV::FADD_H, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 6822 /* fadd.h */, RISCV::FADD_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 6829 /* fadd.s */, RISCV::FADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 6829 /* fadd.s */, RISCV::FADD_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 6836 /* fclass.d */, RISCV::FCLASS_D, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64 }, },
  { 6836 /* fclass.d */, RISCV::FCLASS_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR }, },
  { 6836 /* fclass.d */, RISCV::FCLASS_D_IN32X, Convert__Reg1_0__GPRPairAsFPR1_1, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPR, MCK_GPRPairAsFPR }, },
  { 6845 /* fclass.h */, RISCV::FCLASS_H, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16 }, },
  { 6845 /* fclass.h */, RISCV::FCLASS_H_INX, Convert__Reg1_0__GPRAsFPR1_1, AMFBS_HasStdExtZhinx, { MCK_GPR, MCK_GPRAsFPR }, },
  { 6854 /* fclass.s */, RISCV::FCLASS_S, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32 }, },
  { 6854 /* fclass.s */, RISCV::FCLASS_S_INX, Convert__Reg1_0__GPRAsFPR1_1, AMFBS_HasStdExtZfinx, { MCK_GPR, MCK_GPRAsFPR }, },
  { 6863 /* fcvt.bf16.s */, RISCV::FCVT_BF16_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfbfmin, { MCK_FPR16, MCK_FPR32, MCK_FRMArg }, },
  { 6875 /* fcvt.d.h */, RISCV::FCVT_D_H, Convert__Reg1_0__Reg1_1__FRMArgLegacy1_2, AMFBS_HasStdExtZfhmin_HasStdExtD, { MCK_FPR64, MCK_FPR16, MCK_FRMArgLegacy }, },
  { 6875 /* fcvt.d.h */, RISCV::FCVT_D_H_INX, Convert__GPRF64AsFPR1_0__GPRAsFPR1_1__FRMArgLegacy1_2, AMFBS_HasStdExtZhinxmin_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRAsFPR, MCK_FRMArgLegacy }, },
  { 6875 /* fcvt.d.h */, RISCV::FCVT_D_H_IN32X, Convert__GPRPairAsFPR1_0__GPRAsFPR1_1__FRMArgLegacy1_2, AMFBS_HasStdExtZhinxmin_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPRAsFPR, MCK_FRMArgLegacy }, },
  { 6884 /* fcvt.d.l */, RISCV::FCVT_D_L, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR, MCK_FRMArg }, },
  { 6884 /* fcvt.d.l */, RISCV::FCVT_D_L_INX, Convert__GPRF64AsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV64_IsRV64, { MCK_GPRF64AsFPR, MCK_GPR, MCK_FRMArg }, },
  { 6893 /* fcvt.d.lu */, RISCV::FCVT_D_LU, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR, MCK_FRMArg }, },
  { 6893 /* fcvt.d.lu */, RISCV::FCVT_D_LU_INX, Convert__GPRF64AsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV64_IsRV64, { MCK_GPRF64AsFPR, MCK_GPR, MCK_FRMArg }, },
  { 6903 /* fcvt.d.s */, RISCV::FCVT_D_S, Convert__Reg1_0__Reg1_1__FRMArgLegacy1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR32, MCK_FRMArgLegacy }, },
  { 6903 /* fcvt.d.s */, RISCV::FCVT_D_S_INX, Convert__GPRF64AsFPR1_0__GPRAsFPR1_1__FRMArgLegacy1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRAsFPR, MCK_FRMArgLegacy }, },
  { 6903 /* fcvt.d.s */, RISCV::FCVT_D_S_IN32X, Convert__GPRPairAsFPR1_0__GPRAsFPR1_1__FRMArgLegacy1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPRAsFPR, MCK_FRMArgLegacy }, },
  { 6912 /* fcvt.d.w */, RISCV::FCVT_D_W, Convert__Reg1_0__Reg1_1__FRMArgLegacy1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_GPR, MCK_FRMArgLegacy }, },
  { 6912 /* fcvt.d.w */, RISCV::FCVT_D_W_INX, Convert__GPRF64AsFPR1_0__Reg1_1__FRMArgLegacy1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPR, MCK_FRMArgLegacy }, },
  { 6912 /* fcvt.d.w */, RISCV::FCVT_D_W_IN32X, Convert__GPRPairAsFPR1_0__Reg1_1__FRMArgLegacy1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPR, MCK_FRMArgLegacy }, },
  { 6921 /* fcvt.d.wu */, RISCV::FCVT_D_WU, Convert__Reg1_0__Reg1_1__FRMArgLegacy1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_GPR, MCK_FRMArgLegacy }, },
  { 6921 /* fcvt.d.wu */, RISCV::FCVT_D_WU_INX, Convert__GPRF64AsFPR1_0__Reg1_1__FRMArgLegacy1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPR, MCK_FRMArgLegacy }, },
  { 6921 /* fcvt.d.wu */, RISCV::FCVT_D_WU_IN32X, Convert__GPRPairAsFPR1_0__Reg1_1__FRMArgLegacy1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPR, MCK_FRMArgLegacy }, },
  { 6931 /* fcvt.h.d */, RISCV::FCVT_H_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfhmin_HasStdExtD, { MCK_FPR16, MCK_FPR64, MCK_FRMArg }, },
  { 6931 /* fcvt.h.d */, RISCV::FCVT_H_D_INX, Convert__GPRAsFPR1_0__GPRF64AsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZhinxmin_HasStdExtZdinx_IsRV64, { MCK_GPRAsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 6931 /* fcvt.h.d */, RISCV::FCVT_H_D_IN32X, Convert__GPRAsFPR1_0__GPRPairAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZhinxmin_HasStdExtZdinx_IsRV32, { MCK_GPRAsFPR, MCK_GPRPairAsFPR, MCK_FRMArg }, },
  { 6940 /* fcvt.h.l */, RISCV::FCVT_H_L, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh_IsRV64, { MCK_FPR16, MCK_GPR, MCK_FRMArg }, },
  { 6940 /* fcvt.h.l */, RISCV::FCVT_H_L_INX, Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZhinx_IsRV64, { MCK_GPRAsFPR, MCK_GPR, MCK_FRMArg }, },
  { 6949 /* fcvt.h.lu */, RISCV::FCVT_H_LU, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh_IsRV64, { MCK_FPR16, MCK_GPR, MCK_FRMArg }, },
  { 6949 /* fcvt.h.lu */, RISCV::FCVT_H_LU_INX, Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZhinx_IsRV64, { MCK_GPRAsFPR, MCK_GPR, MCK_FRMArg }, },
  { 6959 /* fcvt.h.s */, RISCV::FCVT_H_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfhmin, { MCK_FPR16, MCK_FPR32, MCK_FRMArg }, },
  { 6959 /* fcvt.h.s */, RISCV::FCVT_H_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZhinxmin, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 6968 /* fcvt.h.w */, RISCV::FCVT_H_W, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_GPR, MCK_FRMArg }, },
  { 6968 /* fcvt.h.w */, RISCV::FCVT_H_W_INX, Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPR, MCK_FRMArg }, },
  { 6977 /* fcvt.h.wu */, RISCV::FCVT_H_WU, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_GPR, MCK_FRMArg }, },
  { 6977 /* fcvt.h.wu */, RISCV::FCVT_H_WU_INX, Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPR, MCK_FRMArg }, },
  { 6987 /* fcvt.l.d */, RISCV::FCVT_L_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD_IsRV64, { MCK_GPR, MCK_FPR64, MCK_FRMArg }, },
  { 6987 /* fcvt.l.d */, RISCV::FCVT_L_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV64_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 6996 /* fcvt.l.h */, RISCV::FCVT_L_H, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh_IsRV64, { MCK_GPR, MCK_FPR16, MCK_FRMArg }, },
  { 6996 /* fcvt.l.h */, RISCV::FCVT_L_H_INX, Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZhinx_IsRV64, { MCK_GPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7005 /* fcvt.l.s */, RISCV::FCVT_L_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF_IsRV64, { MCK_GPR, MCK_FPR32, MCK_FRMArg }, },
  { 7005 /* fcvt.l.s */, RISCV::FCVT_L_S_INX, Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZfinx_IsRV64, { MCK_GPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7014 /* fcvt.lu.d */, RISCV::FCVT_LU_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD_IsRV64, { MCK_GPR, MCK_FPR64, MCK_FRMArg }, },
  { 7014 /* fcvt.lu.d */, RISCV::FCVT_LU_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV64_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 7024 /* fcvt.lu.h */, RISCV::FCVT_LU_H, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh_IsRV64, { MCK_GPR, MCK_FPR16, MCK_FRMArg }, },
  { 7024 /* fcvt.lu.h */, RISCV::FCVT_LU_H_INX, Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZhinx_IsRV64, { MCK_GPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7034 /* fcvt.lu.s */, RISCV::FCVT_LU_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF_IsRV64, { MCK_GPR, MCK_FPR32, MCK_FRMArg }, },
  { 7034 /* fcvt.lu.s */, RISCV::FCVT_LU_S_INX, Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZfinx_IsRV64, { MCK_GPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7044 /* fcvt.s.bf16 */, RISCV::FCVT_S_BF16, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfbfmin, { MCK_FPR32, MCK_FPR16, MCK_FRMArg }, },
  { 7056 /* fcvt.s.d */, RISCV::FCVT_S_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD, { MCK_FPR32, MCK_FPR64, MCK_FRMArg }, },
  { 7056 /* fcvt.s.d */, RISCV::FCVT_S_D_INX, Convert__GPRAsFPR1_0__GPRF64AsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRAsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 7056 /* fcvt.s.d */, RISCV::FCVT_S_D_IN32X, Convert__GPRAsFPR1_0__GPRPairAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRAsFPR, MCK_GPRPairAsFPR, MCK_FRMArg }, },
  { 7065 /* fcvt.s.h */, RISCV::FCVT_S_H, Convert__Reg1_0__Reg1_1__FRMArgLegacy1_2, AMFBS_HasStdExtZfhmin, { MCK_FPR32, MCK_FPR16, MCK_FRMArgLegacy }, },
  { 7065 /* fcvt.s.h */, RISCV::FCVT_S_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__FRMArgLegacy1_2, AMFBS_HasStdExtZhinxmin, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArgLegacy }, },
  { 7074 /* fcvt.s.l */, RISCV::FCVT_S_L, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF_IsRV64, { MCK_FPR32, MCK_GPR, MCK_FRMArg }, },
  { 7074 /* fcvt.s.l */, RISCV::FCVT_S_L_INX, Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfinx_IsRV64, { MCK_GPRAsFPR, MCK_GPR, MCK_FRMArg }, },
  { 7083 /* fcvt.s.lu */, RISCV::FCVT_S_LU, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF_IsRV64, { MCK_FPR32, MCK_GPR, MCK_FRMArg }, },
  { 7083 /* fcvt.s.lu */, RISCV::FCVT_S_LU_INX, Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfinx_IsRV64, { MCK_GPRAsFPR, MCK_GPR, MCK_FRMArg }, },
  { 7093 /* fcvt.s.w */, RISCV::FCVT_S_W, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_GPR, MCK_FRMArg }, },
  { 7093 /* fcvt.s.w */, RISCV::FCVT_S_W_INX, Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPR, MCK_FRMArg }, },
  { 7102 /* fcvt.s.wu */, RISCV::FCVT_S_WU, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_GPR, MCK_FRMArg }, },
  { 7102 /* fcvt.s.wu */, RISCV::FCVT_S_WU_INX, Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPR, MCK_FRMArg }, },
  { 7112 /* fcvt.w.d */, RISCV::FCVT_W_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FRMArg }, },
  { 7112 /* fcvt.w.d */, RISCV::FCVT_W_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 7112 /* fcvt.w.d */, RISCV::FCVT_W_D_IN32X, Convert__Reg1_0__GPRPairAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPR, MCK_GPRPairAsFPR, MCK_FRMArg }, },
  { 7121 /* fcvt.w.h */, RISCV::FCVT_W_H, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FRMArg }, },
  { 7121 /* fcvt.w.h */, RISCV::FCVT_W_H_INX, Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZhinx, { MCK_GPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7130 /* fcvt.w.s */, RISCV::FCVT_W_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FRMArg }, },
  { 7130 /* fcvt.w.s */, RISCV::FCVT_W_S_INX, Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZfinx, { MCK_GPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7139 /* fcvt.wu.d */, RISCV::FCVT_WU_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FRMArg }, },
  { 7139 /* fcvt.wu.d */, RISCV::FCVT_WU_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 7139 /* fcvt.wu.d */, RISCV::FCVT_WU_D_IN32X, Convert__Reg1_0__GPRPairAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPR, MCK_GPRPairAsFPR, MCK_FRMArg }, },
  { 7149 /* fcvt.wu.h */, RISCV::FCVT_WU_H, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FRMArg }, },
  { 7149 /* fcvt.wu.h */, RISCV::FCVT_WU_H_INX, Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZhinx, { MCK_GPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7159 /* fcvt.wu.s */, RISCV::FCVT_WU_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FRMArg }, },
  { 7159 /* fcvt.wu.s */, RISCV::FCVT_WU_S_INX, Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZfinx, { MCK_GPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7169 /* fcvtmod.w.d */, RISCV::FCVTMOD_W_D, Convert__Reg1_0__Reg1_1__RTZArg1_2, AMFBS_HasStdExtZfa_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_RTZArg }, },
  { 7181 /* fdiv.d */, RISCV::FDIV_D, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 7181 /* fdiv.d */, RISCV::FDIV_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 7181 /* fdiv.d */, RISCV::FDIV_D_IN32X, Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_FRMArg }, },
  { 7188 /* fdiv.h */, RISCV::FDIV_H, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 7188 /* fdiv.h */, RISCV::FDIV_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7195 /* fdiv.s */, RISCV::FDIV_S, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 7195 /* fdiv.s */, RISCV::FDIV_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7202 /* fence */, RISCV::FENCE, Convert__imm_95_15__imm_95_15, AMFBS_None, {  }, },
  { 7202 /* fence */, RISCV::FENCE, Convert__FenceArg1_0__FenceArg1_1, AMFBS_None, { MCK_FenceArg, MCK_FenceArg }, },
  { 7208 /* fence.i */, RISCV::FENCE_I, Convert_NoOperands, AMFBS_None, {  }, },
  { 7216 /* fence.tso */, RISCV::FENCE_TSO, Convert_NoOperands, AMFBS_None, {  }, },
  { 7226 /* feq.d */, RISCV::FEQ_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 7226 /* feq.d */, RISCV::FEQ_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 7226 /* feq.d */, RISCV::FEQ_D_IN32X, Convert__Reg1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR }, },
  { 7232 /* feq.h */, RISCV::FEQ_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FPR16 }, },
  { 7232 /* feq.h */, RISCV::FEQ_H_INX, Convert__Reg1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZhinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7238 /* feq.s */, RISCV::FEQ_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 7238 /* feq.s */, RISCV::FEQ_S_INX, Convert__Reg1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZfinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7244 /* fge.d */, RISCV::FLE_D, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 7244 /* fge.d */, RISCV::FLE_D_INX, Convert__Reg1_0__GPRF64AsFPR1_2__GPRF64AsFPR1_1, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 7244 /* fge.d */, RISCV::FLE_D_IN32X, Convert__Reg1_0__GPRPairAsFPR1_2__GPRPairAsFPR1_1, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR }, },
  { 7250 /* fge.h */, RISCV::FLE_H, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FPR16 }, },
  { 7250 /* fge.h */, RISCV::FLE_H_INX, Convert__Reg1_0__GPRAsFPR1_2__GPRAsFPR1_1, AMFBS_HasStdExtZhinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7256 /* fge.s */, RISCV::FLE_S, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 7256 /* fge.s */, RISCV::FLE_S_INX, Convert__Reg1_0__GPRAsFPR1_2__GPRAsFPR1_1, AMFBS_HasStdExtZfinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7262 /* fgeq.d */, RISCV::FLEQ_D, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtZfa_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 7269 /* fgeq.h */, RISCV::FLEQ_H, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtZfa_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FPR16 }, },
  { 7276 /* fgeq.s */, RISCV::FLEQ_S, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtZfa, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 7283 /* fgt.d */, RISCV::FLT_D, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 7283 /* fgt.d */, RISCV::FLT_D_INX, Convert__Reg1_0__GPRF64AsFPR1_2__GPRF64AsFPR1_1, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 7283 /* fgt.d */, RISCV::FLT_D_IN32X, Convert__Reg1_0__GPRPairAsFPR1_2__GPRPairAsFPR1_1, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR }, },
  { 7289 /* fgt.h */, RISCV::FLT_H, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FPR16 }, },
  { 7289 /* fgt.h */, RISCV::FLT_H_INX, Convert__Reg1_0__GPRAsFPR1_2__GPRAsFPR1_1, AMFBS_HasStdExtZhinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7295 /* fgt.s */, RISCV::FLT_S, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 7295 /* fgt.s */, RISCV::FLT_S_INX, Convert__Reg1_0__GPRAsFPR1_2__GPRAsFPR1_1, AMFBS_HasStdExtZfinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7301 /* fgtq.d */, RISCV::FLTQ_D, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtZfa_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 7308 /* fgtq.h */, RISCV::FLTQ_H, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtZfa_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FPR16 }, },
  { 7315 /* fgtq.s */, RISCV::FLTQ_S, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtZfa, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 7322 /* fld */, RISCV::PseudoFLD, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_BareSymbol, MCK_GPR }, },
  { 7322 /* fld */, RISCV::FLD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtD, { MCK_FPR64, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 7322 /* fld */, RISCV::FLD, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 7326 /* fle.d */, RISCV::FLE_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 7326 /* fle.d */, RISCV::FLE_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 7326 /* fle.d */, RISCV::FLE_D_IN32X, Convert__Reg1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR }, },
  { 7332 /* fle.h */, RISCV::FLE_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FPR16 }, },
  { 7332 /* fle.h */, RISCV::FLE_H_INX, Convert__Reg1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZhinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7338 /* fle.s */, RISCV::FLE_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 7338 /* fle.s */, RISCV::FLE_S_INX, Convert__Reg1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZfinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7344 /* fleq.d */, RISCV::FLEQ_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfa_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 7351 /* fleq.h */, RISCV::FLEQ_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfa_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FPR16 }, },
  { 7358 /* fleq.s */, RISCV::FLEQ_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfa, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 7365 /* flh */, RISCV::PseudoFLH, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_HasStdExtZfhmin, { MCK_FPR16, MCK_BareSymbol, MCK_GPR }, },
  { 7365 /* flh */, RISCV::FLH, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtZfhmin, { MCK_FPR16, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 7365 /* flh */, RISCV::FLH, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasHalfFPLoadStoreMove, { MCK_FPR16, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 7369 /* fli.d */, RISCV::FLI_D, Convert__Reg1_0__LoadFPImm1_1, AMFBS_HasStdExtZfa_HasStdExtD, { MCK_FPR64, MCK_LoadFPImm }, },
  { 7375 /* fli.h */, RISCV::FLI_H, Convert__Reg1_0__LoadFPImm1_1, AMFBS_HasStdExtZfa_HasStdExtZfhOrZvfh, { MCK_FPR16, MCK_LoadFPImm }, },
  { 7381 /* fli.s */, RISCV::FLI_S, Convert__Reg1_0__LoadFPImm1_1, AMFBS_HasStdExtZfa, { MCK_FPR32, MCK_LoadFPImm }, },
  { 7387 /* flt.d */, RISCV::FLT_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 7387 /* flt.d */, RISCV::FLT_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 7387 /* flt.d */, RISCV::FLT_D_IN32X, Convert__Reg1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR }, },
  { 7393 /* flt.h */, RISCV::FLT_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FPR16 }, },
  { 7393 /* flt.h */, RISCV::FLT_H_INX, Convert__Reg1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZhinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7399 /* flt.s */, RISCV::FLT_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 7399 /* flt.s */, RISCV::FLT_S_INX, Convert__Reg1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZfinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7405 /* fltq.d */, RISCV::FLTQ_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfa_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 7412 /* fltq.h */, RISCV::FLTQ_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfa_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FPR16 }, },
  { 7419 /* fltq.s */, RISCV::FLTQ_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfa, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 7426 /* flw */, RISCV::PseudoFLW, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_BareSymbol, MCK_GPR }, },
  { 7426 /* flw */, RISCV::FLW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtF, { MCK_FPR32, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 7426 /* flw */, RISCV::FLW, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 7430 /* fmadd.d */, RISCV::FMADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 7430 /* fmadd.d */, RISCV::FMADD_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__GPRF64AsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 7430 /* fmadd.d */, RISCV::FMADD_D_IN32X, Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2__GPRPairAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_FRMArg }, },
  { 7438 /* fmadd.h */, RISCV::FMADD_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 7438 /* fmadd.h */, RISCV::FMADD_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7446 /* fmadd.s */, RISCV::FMADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 7446 /* fmadd.s */, RISCV::FMADD_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7454 /* fmax.d */, RISCV::FMAX_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 7454 /* fmax.d */, RISCV::FMAX_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 7454 /* fmax.d */, RISCV::FMAX_D_IN32X, Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR }, },
  { 7461 /* fmax.h */, RISCV::FMAX_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 7461 /* fmax.h */, RISCV::FMAX_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7468 /* fmax.s */, RISCV::FMAX_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 7468 /* fmax.s */, RISCV::FMAX_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7475 /* fmaxm.d */, RISCV::FMAXM_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfa_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 7483 /* fmaxm.h */, RISCV::FMAXM_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfa_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 7491 /* fmaxm.s */, RISCV::FMAXM_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfa, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 7499 /* fmin.d */, RISCV::FMIN_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 7499 /* fmin.d */, RISCV::FMIN_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 7499 /* fmin.d */, RISCV::FMIN_D_IN32X, Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR }, },
  { 7506 /* fmin.h */, RISCV::FMIN_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 7506 /* fmin.h */, RISCV::FMIN_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7513 /* fmin.s */, RISCV::FMIN_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 7513 /* fmin.s */, RISCV::FMIN_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7520 /* fminm.d */, RISCV::FMINM_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfa_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 7528 /* fminm.h */, RISCV::FMINM_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfa_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 7536 /* fminm.s */, RISCV::FMINM_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfa, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 7544 /* fmsub.d */, RISCV::FMSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 7544 /* fmsub.d */, RISCV::FMSUB_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__GPRF64AsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 7544 /* fmsub.d */, RISCV::FMSUB_D_IN32X, Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2__GPRPairAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_FRMArg }, },
  { 7552 /* fmsub.h */, RISCV::FMSUB_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 7552 /* fmsub.h */, RISCV::FMSUB_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7560 /* fmsub.s */, RISCV::FMSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 7560 /* fmsub.s */, RISCV::FMSUB_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7568 /* fmul.d */, RISCV::FMUL_D, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 7568 /* fmul.d */, RISCV::FMUL_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 7568 /* fmul.d */, RISCV::FMUL_D_IN32X, Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_FRMArg }, },
  { 7575 /* fmul.h */, RISCV::FMUL_H, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 7575 /* fmul.h */, RISCV::FMUL_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7582 /* fmul.s */, RISCV::FMUL_S, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 7582 /* fmul.s */, RISCV::FMUL_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7589 /* fmv.d */, RISCV::FSGNJ_D, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64 }, },
  { 7595 /* fmv.d.x */, RISCV::FMV_D_X, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR }, },
  { 7603 /* fmv.h */, RISCV::FSGNJ_H, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16 }, },
  { 7603 /* fmv.h */, RISCV::FSGNJ_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_1, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7609 /* fmv.h.x */, RISCV::FMV_H_X, Convert__Reg1_0__Reg1_1, AMFBS_HasHalfFPLoadStoreMove, { MCK_FPR16, MCK_GPR }, },
  { 7617 /* fmv.s */, RISCV::FSGNJ_S, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32 }, },
  { 7623 /* fmv.w.x */, RISCV::FMV_W_X, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_GPR }, },
  { 7631 /* fmv.x.d */, RISCV::FMV_X_D, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD_IsRV64, { MCK_GPR, MCK_FPR64 }, },
  { 7639 /* fmv.x.h */, RISCV::FMV_X_H, Convert__Reg1_0__Reg1_1, AMFBS_HasHalfFPLoadStoreMove, { MCK_GPR, MCK_FPR16 }, },
  { 7647 /* fmv.x.w */, RISCV::FMV_X_W, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32 }, },
  { 7655 /* fmvh.x.d */, RISCV::FMVH_X_D, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZfa_HasStdExtD_IsRV32, { MCK_GPR, MCK_FPR64 }, },
  { 7664 /* fmvp.d.x */, RISCV::FMVP_D_X, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfa_HasStdExtD_IsRV32, { MCK_FPR64, MCK_GPR, MCK_GPR }, },
  { 7673 /* fneg.d */, RISCV::FSGNJN_D, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64 }, },
  { 7673 /* fneg.d */, RISCV::FSGNJN_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_1, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 7673 /* fneg.d */, RISCV::FSGNJN_D_IN32X, Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_1, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPRPairAsFPR }, },
  { 7680 /* fneg.h */, RISCV::FSGNJN_H, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16 }, },
  { 7680 /* fneg.h */, RISCV::FSGNJN_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_1, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7687 /* fneg.s */, RISCV::FSGNJN_S, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32 }, },
  { 7687 /* fneg.s */, RISCV::FSGNJN_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_1, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7694 /* fnmadd.d */, RISCV::FNMADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 7694 /* fnmadd.d */, RISCV::FNMADD_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__GPRF64AsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 7694 /* fnmadd.d */, RISCV::FNMADD_D_IN32X, Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2__GPRPairAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_FRMArg }, },
  { 7703 /* fnmadd.h */, RISCV::FNMADD_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 7703 /* fnmadd.h */, RISCV::FNMADD_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7712 /* fnmadd.s */, RISCV::FNMADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 7712 /* fnmadd.s */, RISCV::FNMADD_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7721 /* fnmsub.d */, RISCV::FNMSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 7721 /* fnmsub.d */, RISCV::FNMSUB_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__GPRF64AsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 7721 /* fnmsub.d */, RISCV::FNMSUB_D_IN32X, Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2__GPRPairAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_FRMArg }, },
  { 7730 /* fnmsub.h */, RISCV::FNMSUB_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 7730 /* fnmsub.h */, RISCV::FNMSUB_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7739 /* fnmsub.s */, RISCV::FNMSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 7739 /* fnmsub.s */, RISCV::FNMSUB_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7748 /* frcsr */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3__regX0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 7754 /* frflags */, RISCV::CSRRS, Convert__Reg1_0__imm_95_1__regX0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 7762 /* fround.d */, RISCV::FROUND_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfa_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 7771 /* fround.h */, RISCV::FROUND_H, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfa_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 7780 /* fround.s */, RISCV::FROUND_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfa, { MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 7789 /* froundnx.d */, RISCV::FROUNDNX_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfa_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 7800 /* froundnx.h */, RISCV::FROUNDNX_H, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfa_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 7811 /* froundnx.s */, RISCV::FROUNDNX_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfa, { MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 7822 /* frrm */, RISCV::CSRRS, Convert__Reg1_0__imm_95_2__regX0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 7827 /* frsr */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3__regX0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 7832 /* fscsr */, RISCV::CSRRW, Convert__regX0__imm_95_3__Reg1_0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 7832 /* fscsr */, RISCV::CSRRW, Convert__Reg1_0__imm_95_3__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_GPR }, },
  { 7838 /* fsd */, RISCV::PseudoFSD, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_BareSymbol, MCK_GPR }, },
  { 7838 /* fsd */, RISCV::FSD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtD, { MCK_FPR64, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 7838 /* fsd */, RISCV::FSD, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 7842 /* fsflags */, RISCV::CSRRW, Convert__regX0__imm_95_1__Reg1_0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 7842 /* fsflags */, RISCV::CSRRW, Convert__Reg1_0__imm_95_1__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_GPR }, },
  { 7850 /* fsflagsi */, RISCV::CSRRWI, Convert__regX0__imm_95_1__UImm51_0, AMFBS_HasStdExtF, { MCK_UImm5 }, },
  { 7850 /* fsflagsi */, RISCV::CSRRWI, Convert__Reg1_0__imm_95_1__UImm51_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_UImm5 }, },
  { 7859 /* fsgnj.d */, RISCV::FSGNJ_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 7859 /* fsgnj.d */, RISCV::FSGNJ_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 7859 /* fsgnj.d */, RISCV::FSGNJ_D_IN32X, Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR }, },
  { 7867 /* fsgnj.h */, RISCV::FSGNJ_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 7867 /* fsgnj.h */, RISCV::FSGNJ_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7875 /* fsgnj.s */, RISCV::FSGNJ_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 7875 /* fsgnj.s */, RISCV::FSGNJ_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7883 /* fsgnjn.d */, RISCV::FSGNJN_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 7883 /* fsgnjn.d */, RISCV::FSGNJN_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 7883 /* fsgnjn.d */, RISCV::FSGNJN_D_IN32X, Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR }, },
  { 7892 /* fsgnjn.h */, RISCV::FSGNJN_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 7892 /* fsgnjn.h */, RISCV::FSGNJN_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7901 /* fsgnjn.s */, RISCV::FSGNJN_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 7901 /* fsgnjn.s */, RISCV::FSGNJN_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7910 /* fsgnjx.d */, RISCV::FSGNJX_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 7910 /* fsgnjx.d */, RISCV::FSGNJX_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 7910 /* fsgnjx.d */, RISCV::FSGNJX_D_IN32X, Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR }, },
  { 7919 /* fsgnjx.h */, RISCV::FSGNJX_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 7919 /* fsgnjx.h */, RISCV::FSGNJX_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7928 /* fsgnjx.s */, RISCV::FSGNJX_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 7928 /* fsgnjx.s */, RISCV::FSGNJX_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 7937 /* fsh */, RISCV::PseudoFSH, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_HasStdExtZfhmin, { MCK_FPR16, MCK_BareSymbol, MCK_GPR }, },
  { 7937 /* fsh */, RISCV::FSH, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtZfhmin, { MCK_FPR16, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 7937 /* fsh */, RISCV::FSH, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasHalfFPLoadStoreMove, { MCK_FPR16, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 7941 /* fsqrt.d */, RISCV::FSQRT_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 7941 /* fsqrt.d */, RISCV::FSQRT_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 7941 /* fsqrt.d */, RISCV::FSQRT_D_IN32X, Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_FRMArg }, },
  { 7949 /* fsqrt.h */, RISCV::FSQRT_H, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 7949 /* fsqrt.h */, RISCV::FSQRT_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7957 /* fsqrt.s */, RISCV::FSQRT_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 7957 /* fsqrt.s */, RISCV::FSQRT_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7965 /* fsrm */, RISCV::CSRRW, Convert__regX0__imm_95_2__Reg1_0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 7965 /* fsrm */, RISCV::CSRRW, Convert__Reg1_0__imm_95_2__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_GPR }, },
  { 7970 /* fsrmi */, RISCV::CSRRWI, Convert__regX0__imm_95_2__UImm51_0, AMFBS_HasStdExtF, { MCK_UImm5 }, },
  { 7970 /* fsrmi */, RISCV::CSRRWI, Convert__Reg1_0__imm_95_2__UImm51_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_UImm5 }, },
  { 7976 /* fssr */, RISCV::CSRRW, Convert__regX0__imm_95_3__Reg1_0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 7976 /* fssr */, RISCV::CSRRW, Convert__Reg1_0__imm_95_3__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_GPR }, },
  { 7981 /* fsub.d */, RISCV::FSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 7981 /* fsub.d */, RISCV::FSUB_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 7981 /* fsub.d */, RISCV::FSUB_D_IN32X, Convert__GPRPairAsFPR1_0__GPRPairAsFPR1_1__GPRPairAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_GPRPairAsFPR, MCK_FRMArg }, },
  { 7988 /* fsub.h */, RISCV::FSUB_H, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 7988 /* fsub.h */, RISCV::FSUB_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 7995 /* fsub.s */, RISCV::FSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 7995 /* fsub.s */, RISCV::FSUB_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 8002 /* fsw */, RISCV::PseudoFSW, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_BareSymbol, MCK_GPR }, },
  { 8002 /* fsw */, RISCV::FSW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtF, { MCK_FPR32, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8002 /* fsw */, RISCV::FSW, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8006 /* hfence.gvma */, RISCV::HFENCE_GVMA, Convert__regX0__regX0, AMFBS_None, {  }, },
  { 8006 /* hfence.gvma */, RISCV::HFENCE_GVMA, Convert__Reg1_0__regX0, AMFBS_None, { MCK_GPR }, },
  { 8006 /* hfence.gvma */, RISCV::HFENCE_GVMA, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtH, { MCK_GPR, MCK_GPR }, },
  { 8018 /* hfence.vvma */, RISCV::HFENCE_VVMA, Convert__regX0__regX0, AMFBS_None, {  }, },
  { 8018 /* hfence.vvma */, RISCV::HFENCE_VVMA, Convert__Reg1_0__regX0, AMFBS_None, { MCK_GPR }, },
  { 8018 /* hfence.vvma */, RISCV::HFENCE_VVMA, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtH, { MCK_GPR, MCK_GPR }, },
  { 8030 /* hinval.gvma */, RISCV::HINVAL_GVMA, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtSvinval, { MCK_GPR, MCK_GPR }, },
  { 8042 /* hinval.vvma */, RISCV::HINVAL_VVMA, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtSvinval, { MCK_GPR, MCK_GPR }, },
  { 8054 /* hlv.b */, RISCV::HLV_B, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtH, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8060 /* hlv.bu */, RISCV::HLV_BU, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtH, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8067 /* hlv.d */, RISCV::HLV_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_IsRV64_HasStdExtH, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8073 /* hlv.h */, RISCV::HLV_H, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtH, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8079 /* hlv.hu */, RISCV::HLV_HU, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtH, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8086 /* hlv.w */, RISCV::HLV_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtH, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8092 /* hlv.wu */, RISCV::HLV_WU, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_IsRV64_HasStdExtH, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8099 /* hlvx.hu */, RISCV::HLVX_HU, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtH, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8107 /* hlvx.wu */, RISCV::HLVX_WU, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtH, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8115 /* hsv.b */, RISCV::HSV_B, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtH, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8121 /* hsv.d */, RISCV::HSV_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_IsRV64_HasStdExtH, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8127 /* hsv.h */, RISCV::HSV_H, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtH, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8133 /* hsv.w */, RISCV::HSV_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtH, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8139 /* j */, RISCV::JAL, Convert__regX0__SImm21Lsb0JAL1_0, AMFBS_None, { MCK_SImm21Lsb0JAL }, },
  { 8141 /* jal */, RISCV::JAL, Convert__regX1__SImm21Lsb0JAL1_0, AMFBS_None, { MCK_SImm21Lsb0JAL }, },
  { 8141 /* jal */, RISCV::JAL, Convert__Reg1_0__SImm21Lsb0JAL1_1, AMFBS_None, { MCK_GPR, MCK_SImm21Lsb0JAL }, },
  { 8145 /* jalr */, RISCV::JALR, Convert__regX1__Reg1_0__imm_95_0, AMFBS_None, { MCK_GPR }, },
  { 8145 /* jalr */, RISCV::JALR, Convert__Reg1_0__Reg1_1__imm_95_0, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 8145 /* jalr */, RISCV::JALR, Convert__regX1__Reg1_0__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12 }, },
  { 8145 /* jalr */, RISCV::JALR, Convert__regX1__Reg1_1__imm_95_0, AMFBS_None, { MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8145 /* jalr */, RISCV::JALR, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 8145 /* jalr */, RISCV::JALR, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8145 /* jalr */, RISCV::JALR, Convert__regX1__Reg1_2__SImm121_0, AMFBS_None, { MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8145 /* jalr */, RISCV::JALR, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8145 /* jalr */, RISCV::PseudoTLSDESCCall, Convert__Reg1_0__Reg1_3__SImm121_1__TLSDESCCallSymbol1_5, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_, MCK_TLSDESCCallSymbol }, },
  { 8150 /* jr */, RISCV::JALR, Convert__regX0__Reg1_0__imm_95_0, AMFBS_None, { MCK_GPR }, },
  { 8150 /* jr */, RISCV::JALR, Convert__regX0__Reg1_0__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12 }, },
  { 8150 /* jr */, RISCV::JALR, Convert__regX0__Reg1_1__imm_95_0, AMFBS_None, { MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8150 /* jr */, RISCV::JALR, Convert__regX0__Reg1_2__SImm121_0, AMFBS_None, { MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8153 /* jump */, RISCV::PseudoJump, Convert__Reg1_1__PseudoJumpSymbol1_0, AMFBS_None, { MCK_PseudoJumpSymbol, MCK_GPR }, },
  { 8158 /* la */, RISCV::PseudoLA, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 8158 /* la */, RISCV::PseudoLAImm, Convert__Reg1_0__ImmXLenLI_Restricted1_1, AMFBS_None, { MCK_GPR, MCK_ImmXLenLI_Restricted }, },
  { 8161 /* la.tls.gd */, RISCV::PseudoLA_TLS_GD, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 8171 /* la.tls.ie */, RISCV::PseudoLA_TLS_IE, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 8181 /* la.tlsdesc */, RISCV::PseudoLA_TLSDESC, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 8192 /* lb */, RISCV::PseudoLB, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 8192 /* lb */, RISCV::LB, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8192 /* lb */, RISCV::LB, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8195 /* lb.aq */, RISCV::LB_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtZalasr, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8201 /* lb.aqrl */, RISCV::LB_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtZalasr, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8209 /* lbu */, RISCV::PseudoLBU, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 8209 /* lbu */, RISCV::LBU, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8209 /* lbu */, RISCV::LBU, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8213 /* ld */, RISCV::PseudoLD, Convert__Reg1_0__BareSymbol1_1, AMFBS_IsRV64, { MCK_GPR, MCK_BareSymbol }, },
  { 8213 /* ld */, RISCV::LD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_IsRV64, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8213 /* ld */, RISCV::LD, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_IsRV64, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8216 /* ld.aq */, RISCV::LD_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtZalasr_IsRV64, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8222 /* ld.aqrl */, RISCV::LD_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtZalasr_IsRV64, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8230 /* lga */, RISCV::PseudoLGA, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 8234 /* lh */, RISCV::PseudoLH, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 8234 /* lh */, RISCV::LH, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8234 /* lh */, RISCV::LH, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8237 /* lh.aq */, RISCV::LH_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtZalasr, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8243 /* lh.aqrl */, RISCV::LH_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtZalasr, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8251 /* lhu */, RISCV::PseudoLHU, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 8251 /* lhu */, RISCV::LHU, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8251 /* lhu */, RISCV::LHU, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8255 /* li */, RISCV::ADDI, Convert__Reg1_0__regX0__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12 }, },
  { 8255 /* li */, RISCV::PseudoLI, Convert__Reg1_0__ImmXLenLI1_1, AMFBS_None, { MCK_GPR, MCK_ImmXLenLI }, },
  { 8258 /* lla */, RISCV::PseudoLLA, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 8258 /* lla */, RISCV::PseudoLLAImm, Convert__Reg1_0__ImmXLenLI_Restricted1_1, AMFBS_None, { MCK_GPR, MCK_ImmXLenLI_Restricted }, },
  { 8262 /* lpad */, RISCV::AUIPC, Convert__regX0__UImm201_0, AMFBS_HasStdExtZicfilp, { MCK_UImm20 }, },
  { 8267 /* lr.d */, RISCV::LR_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtAOrZalrsc_IsRV64, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8272 /* lr.d.aq */, RISCV::LR_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtAOrZalrsc_IsRV64, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8280 /* lr.d.aqrl */, RISCV::LR_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtAOrZalrsc_IsRV64, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8290 /* lr.d.rl */, RISCV::LR_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtAOrZalrsc_IsRV64, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8298 /* lr.w */, RISCV::LR_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtAOrZalrsc, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8303 /* lr.w.aq */, RISCV::LR_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtAOrZalrsc, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8311 /* lr.w.aqrl */, RISCV::LR_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtAOrZalrsc, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8321 /* lr.w.rl */, RISCV::LR_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtAOrZalrsc, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8329 /* lui */, RISCV::LUI, Convert__Reg1_0__UImm20LUI1_1, AMFBS_None, { MCK_GPR, MCK_UImm20LUI }, },
  { 8333 /* lw */, RISCV::PseudoLW, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 8333 /* lw */, RISCV::LW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8333 /* lw */, RISCV::LW, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8336 /* lw.aq */, RISCV::LW_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtZalasr, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8342 /* lw.aqrl */, RISCV::LW_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtZalasr, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 8350 /* lwu */, RISCV::PseudoLWU, Convert__Reg1_0__BareSymbol1_1, AMFBS_IsRV64, { MCK_GPR, MCK_BareSymbol }, },
  { 8350 /* lwu */, RISCV::LWU, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_IsRV64, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8350 /* lwu */, RISCV::LWU, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_IsRV64, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8354 /* max */, RISCV::MAX, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8358 /* maxu */, RISCV::MAXU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8363 /* min */, RISCV::MIN, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8367 /* minu */, RISCV::MINU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8372 /* mop.r.0 */, RISCV::MOPR0, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8380 /* mop.r.1 */, RISCV::MOPR1, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8388 /* mop.r.10 */, RISCV::MOPR10, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8397 /* mop.r.11 */, RISCV::MOPR11, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8406 /* mop.r.12 */, RISCV::MOPR12, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8415 /* mop.r.13 */, RISCV::MOPR13, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8424 /* mop.r.14 */, RISCV::MOPR14, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8433 /* mop.r.15 */, RISCV::MOPR15, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8442 /* mop.r.16 */, RISCV::MOPR16, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8451 /* mop.r.17 */, RISCV::MOPR17, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8460 /* mop.r.18 */, RISCV::MOPR18, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8469 /* mop.r.19 */, RISCV::MOPR19, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8478 /* mop.r.2 */, RISCV::MOPR2, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8486 /* mop.r.20 */, RISCV::MOPR20, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8495 /* mop.r.21 */, RISCV::MOPR21, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8504 /* mop.r.22 */, RISCV::MOPR22, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8513 /* mop.r.23 */, RISCV::MOPR23, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8522 /* mop.r.24 */, RISCV::MOPR24, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8531 /* mop.r.25 */, RISCV::MOPR25, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8540 /* mop.r.26 */, RISCV::MOPR26, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8549 /* mop.r.27 */, RISCV::MOPR27, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8558 /* mop.r.28 */, RISCV::MOPR28, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8567 /* mop.r.29 */, RISCV::MOPR29, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8576 /* mop.r.3 */, RISCV::MOPR3, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8584 /* mop.r.30 */, RISCV::MOPR30, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8593 /* mop.r.31 */, RISCV::MOPR31, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8602 /* mop.r.4 */, RISCV::MOPR4, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8610 /* mop.r.5 */, RISCV::MOPR5, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8618 /* mop.r.6 */, RISCV::MOPR6, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8626 /* mop.r.7 */, RISCV::MOPR7, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8634 /* mop.r.8 */, RISCV::MOPR8, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8642 /* mop.r.9 */, RISCV::MOPR9, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR }, },
  { 8650 /* mop.rr.0 */, RISCV::MOPRR0, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8659 /* mop.rr.1 */, RISCV::MOPRR1, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8668 /* mop.rr.2 */, RISCV::MOPRR2, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8677 /* mop.rr.3 */, RISCV::MOPRR3, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8686 /* mop.rr.4 */, RISCV::MOPRR4, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8695 /* mop.rr.5 */, RISCV::MOPRR5, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8704 /* mop.rr.6 */, RISCV::MOPRR6, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8713 /* mop.rr.7 */, RISCV::MOPRR7, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZimop, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8722 /* mret */, RISCV::MRET, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 8727 /* mul */, RISCV::MUL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZmmul, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8731 /* mulh */, RISCV::MULH, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZmmul, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8736 /* mulhsu */, RISCV::MULHSU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZmmul, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8743 /* mulhu */, RISCV::MULHU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZmmul, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8749 /* mulw */, RISCV::MULW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZmmul_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8754 /* mv */, RISCV::ADDI, Convert__Reg1_0__Reg1_1__imm_95_0, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 8757 /* neg */, RISCV::SUB, Convert__Reg1_0__regX0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 8761 /* negw */, RISCV::SUBW, Convert__Reg1_0__regX0__Reg1_1, AMFBS_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 8766 /* nop */, RISCV::ADDI, Convert__regX0__regX0__imm_95_0, AMFBS_None, {  }, },
  { 8770 /* not */, RISCV::XORI, Convert__Reg1_0__Reg1_1__imm_95__MINUS_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 8774 /* ntl.all */, RISCV::ADD, Convert__regX0__regX0__regX5, AMFBS_HasStdExtZihintntl, {  }, },
  { 8782 /* ntl.p1 */, RISCV::ADD, Convert__regX0__regX0__regX2, AMFBS_HasStdExtZihintntl, {  }, },
  { 8789 /* ntl.pall */, RISCV::ADD, Convert__regX0__regX0__regX3, AMFBS_HasStdExtZihintntl, {  }, },
  { 8798 /* ntl.s1 */, RISCV::ADD, Convert__regX0__regX0__regX4, AMFBS_HasStdExtZihintntl, {  }, },
  { 8805 /* or */, RISCV::OR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8805 /* or */, RISCV::ORI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 8808 /* orc.b */, RISCV::ORC_B, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 8814 /* ori */, RISCV::ORI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 8818 /* orn */, RISCV::ORN, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbkb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8822 /* pack */, RISCV::PACK, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbkb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8827 /* packh */, RISCV::PACKH, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbkb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8833 /* packw */, RISCV::PACKW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbkb_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 8839 /* pause */, RISCV::FENCE, Convert__imm_95_1__imm_95_0, AMFBS_HasStdExtZihintpause, {  }, },
  { 8845 /* prefetch.i */, RISCV::PREFETCH_I, Convert__Reg1_2__SImm12Lsb000001_0, AMFBS_HasStdExtZicbop, { MCK_SImm12Lsb00000, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8856 /* prefetch.r */, RISCV::PREFETCH_R, Convert__Reg1_2__SImm12Lsb000001_0, AMFBS_HasStdExtZicbop, { MCK_SImm12Lsb00000, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8867 /* prefetch.w */, RISCV::PREFETCH_W, Convert__Reg1_2__SImm12Lsb000001_0, AMFBS_HasStdExtZicbop, { MCK_SImm12Lsb00000, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 8878 /* qk.c.lbu */, RISCV::QK_C_LBU, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasVendorXwchc, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 8878 /* qk.c.lbu */, RISCV::QK_C_LBU, Convert__Reg1_0__Reg1_3__UImm51_1, AMFBS_HasVendorXwchc, { MCK_GPRC, MCK_UImm5, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 8887 /* qk.c.lbusp */, RISCV::QK_C_LBUSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasVendorXwchc, { MCK_GPRC, MCK__40_, MCK_SP, MCK__41_ }, },
  { 8887 /* qk.c.lbusp */, RISCV::QK_C_LBUSP, Convert__Reg1_0__Reg1_3__UImm41_1, AMFBS_HasVendorXwchc, { MCK_GPRC, MCK_UImm4, MCK__40_, MCK_SP, MCK__41_ }, },
  { 8898 /* qk.c.lhu */, RISCV::QK_C_LHU, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasVendorXwchc, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 8898 /* qk.c.lhu */, RISCV::QK_C_LHU, Convert__Reg1_0__Reg1_3__UImm6Lsb01_1, AMFBS_HasVendorXwchc, { MCK_GPRC, MCK_UImm6Lsb0, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 8907 /* qk.c.lhusp */, RISCV::QK_C_LHUSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasVendorXwchc, { MCK_GPRC, MCK__40_, MCK_SP, MCK__41_ }, },
  { 8907 /* qk.c.lhusp */, RISCV::QK_C_LHUSP, Convert__Reg1_0__Reg1_3__UImm5Lsb01_1, AMFBS_HasVendorXwchc, { MCK_GPRC, MCK_UImm5Lsb0, MCK__40_, MCK_SP, MCK__41_ }, },
  { 8918 /* qk.c.sb */, RISCV::QK_C_SB, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasVendorXwchc, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 8918 /* qk.c.sb */, RISCV::QK_C_SB, Convert__Reg1_0__Reg1_3__UImm51_1, AMFBS_HasVendorXwchc, { MCK_GPRC, MCK_UImm5, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 8926 /* qk.c.sbsp */, RISCV::QK_C_SBSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasVendorXwchc, { MCK_GPRC, MCK__40_, MCK_SP, MCK__41_ }, },
  { 8926 /* qk.c.sbsp */, RISCV::QK_C_SBSP, Convert__Reg1_0__Reg1_3__UImm41_1, AMFBS_HasVendorXwchc, { MCK_GPRC, MCK_UImm4, MCK__40_, MCK_SP, MCK__41_ }, },
  { 8936 /* qk.c.sh */, RISCV::QK_C_SH, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasVendorXwchc, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 8936 /* qk.c.sh */, RISCV::QK_C_SH, Convert__Reg1_0__Reg1_3__UImm6Lsb01_1, AMFBS_HasVendorXwchc, { MCK_GPRC, MCK_UImm6Lsb0, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 8944 /* qk.c.shsp */, RISCV::QK_C_SHSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasVendorXwchc, { MCK_GPRC, MCK__40_, MCK_SP, MCK__41_ }, },
  { 8944 /* qk.c.shsp */, RISCV::QK_C_SHSP, Convert__Reg1_0__Reg1_3__UImm5Lsb01_1, AMFBS_HasVendorXwchc, { MCK_GPRC, MCK_UImm5Lsb0, MCK__40_, MCK_SP, MCK__41_ }, },
  { 8954 /* rdcycle */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3072__regX0, AMFBS_None, { MCK_GPR }, },
  { 8962 /* rdcycleh */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3200__regX0, AMFBS_IsRV32, { MCK_GPR }, },
  { 8971 /* rdinstret */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3074__regX0, AMFBS_None, { MCK_GPR }, },
  { 8981 /* rdinstreth */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3202__regX0, AMFBS_IsRV32, { MCK_GPR }, },
  { 8992 /* rdtime */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3073__regX0, AMFBS_None, { MCK_GPR }, },
  { 8999 /* rdtimeh */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3201__regX0, AMFBS_IsRV32, { MCK_GPR }, },
  { 9007 /* rem */, RISCV::REM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9011 /* remu */, RISCV::REMU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9016 /* remuw */, RISCV::REMUW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9022 /* remw */, RISCV::REMW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9027 /* ret */, RISCV::JALR, Convert__regX0__regX1__imm_95_0, AMFBS_None, {  }, },
  { 9031 /* rev8 */, RISCV::REV8_RV32, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbbOrZbkb_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 9031 /* rev8 */, RISCV::REV8_RV64, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbbOrZbkb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 9036 /* rol */, RISCV::ROL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbkb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9040 /* rolw */, RISCV::ROLW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbkb_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9045 /* ror */, RISCV::ROR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbkb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9045 /* ror */, RISCV::RORI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 9049 /* rori */, RISCV::RORI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbbOrZbkb, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 9054 /* roriw */, RISCV::RORIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbbOrZbkb_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 9060 /* rorw */, RISCV::RORW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbkb_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9060 /* rorw */, RISCV::RORIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 9065 /* sb */, RISCV::PseudoSB, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol, MCK_GPR }, },
  { 9065 /* sb */, RISCV::SB, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 9065 /* sb */, RISCV::SB, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 9068 /* sb.aqrl */, RISCV::SB_AQ_RL, Convert__ZeroOffsetMemOpOperand1_1__Reg1_0, AMFBS_HasStdExtZalasr, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 9076 /* sb.rl */, RISCV::SB_RL, Convert__ZeroOffsetMemOpOperand1_1__Reg1_0, AMFBS_HasStdExtZalasr, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 9082 /* sc.d */, RISCV::SC_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZalrsc_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 9087 /* sc.d.aq */, RISCV::SC_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZalrsc_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 9095 /* sc.d.aqrl */, RISCV::SC_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZalrsc_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 9105 /* sc.d.rl */, RISCV::SC_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZalrsc_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 9113 /* sc.w */, RISCV::SC_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZalrsc, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 9118 /* sc.w.aq */, RISCV::SC_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZalrsc, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 9126 /* sc.w.aqrl */, RISCV::SC_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZalrsc, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 9136 /* sc.w.rl */, RISCV::SC_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtAOrZalrsc, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 9144 /* sd */, RISCV::PseudoSD, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_IsRV64, { MCK_GPR, MCK_BareSymbol, MCK_GPR }, },
  { 9144 /* sd */, RISCV::SD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_IsRV64, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 9144 /* sd */, RISCV::SD, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_IsRV64, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 9147 /* sd.aqrl */, RISCV::SD_AQ_RL, Convert__ZeroOffsetMemOpOperand1_1__Reg1_0, AMFBS_HasStdExtZalasr_IsRV64, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 9155 /* sd.rl */, RISCV::SD_RL, Convert__ZeroOffsetMemOpOperand1_1__Reg1_0, AMFBS_HasStdExtZalasr_IsRV64, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 9161 /* seqz */, RISCV::SLTIU, Convert__Reg1_0__Reg1_1__imm_95_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 9166 /* sext.b */, RISCV::SEXT_B, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 9166 /* sext.b */, RISCV::PseudoSEXT_B, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 9173 /* sext.h */, RISCV::SEXT_H, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 9173 /* sext.h */, RISCV::PseudoSEXT_H, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 9180 /* sext.w */, RISCV::ADDIW, Convert__Reg1_0__Reg1_1__imm_95_0, AMFBS_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 9187 /* sf.cdiscard.d.l1 */, RISCV::SF_CDISCARD_D_L1, Convert__regX0, AMFBS_HasVendorXSiFivecdiscarddlone, {  }, },
  { 9187 /* sf.cdiscard.d.l1 */, RISCV::SF_CDISCARD_D_L1, Convert__Reg1_0, AMFBS_HasVendorXSiFivecdiscarddlone, { MCK_GPR }, },
  { 9204 /* sf.cease */, RISCV::SF_CEASE, Convert_NoOperands, AMFBS_HasVendorXSfcease, {  }, },
  { 9213 /* sf.cflush.d.l1 */, RISCV::SF_CFLUSH_D_L1, Convert__regX0, AMFBS_HasVendorXSiFivecflushdlone, {  }, },
  { 9213 /* sf.cflush.d.l1 */, RISCV::SF_CFLUSH_D_L1, Convert__Reg1_0, AMFBS_HasVendorXSiFivecflushdlone, { MCK_GPR }, },
  { 9228 /* sf.vc.fv */, RISCV::VC_FV, Convert__UImm11_0__UImm51_1__Reg1_2__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm1, MCK_UImm5, MCK_VM, MCK_FPR32 }, },
  { 9237 /* sf.vc.fvv */, RISCV::VC_FVV, Convert__UImm11_0__Reg1_1__Reg1_2__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm1, MCK_VM, MCK_VM, MCK_FPR32 }, },
  { 9247 /* sf.vc.fvw */, RISCV::VC_FVW, Convert__UImm11_0__Reg1_1__Reg1_2__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm1, MCK_VM, MCK_VM, MCK_FPR32 }, },
  { 9257 /* sf.vc.i */, RISCV::VC_I, Convert__UImm21_0__UImm51_1__UImm51_2__SImm51_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_UImm5, MCK_UImm5, MCK_SImm5 }, },
  { 9265 /* sf.vc.iv */, RISCV::VC_IV, Convert__UImm21_0__UImm51_1__Reg1_2__SImm51_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_UImm5, MCK_VM, MCK_SImm5 }, },
  { 9274 /* sf.vc.ivv */, RISCV::VC_IVV, Convert__UImm21_0__Reg1_1__Reg1_2__SImm51_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_VM, MCK_VM, MCK_SImm5 }, },
  { 9284 /* sf.vc.ivw */, RISCV::VC_IVW, Convert__UImm21_0__Reg1_1__Reg1_2__SImm51_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_VM, MCK_VM, MCK_SImm5 }, },
  { 9294 /* sf.vc.v.fv */, RISCV::VC_V_FV, Convert__Reg1_1__UImm11_0__Reg1_2__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm1, MCK_VM, MCK_VM, MCK_FPR32 }, },
  { 9305 /* sf.vc.v.fvv */, RISCV::VC_V_FVV, Convert__Reg1_1__UImm11_0__Tie0_2_2__Reg1_2__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm1, MCK_VM, MCK_VM, MCK_FPR32 }, },
  { 9317 /* sf.vc.v.fvw */, RISCV::VC_V_FVW, Convert__Reg1_1__UImm11_0__Tie0_2_2__Reg1_2__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm1, MCK_VM, MCK_VM, MCK_FPR32 }, },
  { 9329 /* sf.vc.v.i */, RISCV::VC_V_I, Convert__Reg1_2__UImm21_0__UImm51_1__SImm51_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_UImm5, MCK_VM, MCK_SImm5 }, },
  { 9339 /* sf.vc.v.iv */, RISCV::VC_V_IV, Convert__Reg1_1__UImm21_0__Reg1_2__SImm51_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_VM, MCK_VM, MCK_SImm5 }, },
  { 9350 /* sf.vc.v.ivv */, RISCV::VC_V_IVV, Convert__Reg1_1__UImm21_0__Tie0_2_2__Reg1_2__SImm51_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_VM, MCK_VM, MCK_SImm5 }, },
  { 9362 /* sf.vc.v.ivw */, RISCV::VC_V_IVW, Convert__Reg1_1__UImm21_0__Tie0_2_2__Reg1_2__SImm51_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_VM, MCK_VM, MCK_SImm5 }, },
  { 9374 /* sf.vc.v.vv */, RISCV::VC_V_VV, Convert__Reg1_1__UImm21_0__Reg1_2__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_VM, MCK_VM, MCK_VM }, },
  { 9385 /* sf.vc.v.vvv */, RISCV::VC_V_VVV, Convert__Reg1_1__UImm21_0__Tie0_2_2__Reg1_2__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_VM, MCK_VM, MCK_VM }, },
  { 9397 /* sf.vc.v.vvw */, RISCV::VC_V_VVW, Convert__Reg1_1__UImm21_0__Tie0_2_2__Reg1_2__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_VM, MCK_VM, MCK_VM }, },
  { 9409 /* sf.vc.v.x */, RISCV::VC_V_X, Convert__Reg1_2__UImm21_0__UImm51_1__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_UImm5, MCK_VM, MCK_GPR }, },
  { 9419 /* sf.vc.v.xv */, RISCV::VC_V_XV, Convert__Reg1_1__UImm21_0__Reg1_2__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_VM, MCK_VM, MCK_GPR }, },
  { 9430 /* sf.vc.v.xvv */, RISCV::VC_V_XVV, Convert__Reg1_1__UImm21_0__Tie0_2_2__Reg1_2__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_VM, MCK_VM, MCK_GPR }, },
  { 9442 /* sf.vc.v.xvw */, RISCV::VC_V_XVW, Convert__Reg1_1__UImm21_0__Tie0_2_2__Reg1_2__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_VM, MCK_VM, MCK_GPR }, },
  { 9454 /* sf.vc.vv */, RISCV::VC_VV, Convert__UImm21_0__UImm51_1__Reg1_2__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_UImm5, MCK_VM, MCK_VM }, },
  { 9463 /* sf.vc.vvv */, RISCV::VC_VVV, Convert__UImm21_0__Reg1_1__Reg1_2__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_VM, MCK_VM, MCK_VM }, },
  { 9473 /* sf.vc.vvw */, RISCV::VC_VVW, Convert__UImm21_0__Reg1_1__Reg1_2__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_VM, MCK_VM, MCK_VM }, },
  { 9483 /* sf.vc.x */, RISCV::VC_X, Convert__UImm21_0__UImm51_1__UImm51_2__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_UImm5, MCK_UImm5, MCK_GPR }, },
  { 9491 /* sf.vc.xv */, RISCV::VC_XV, Convert__UImm21_0__UImm51_1__Reg1_2__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_UImm5, MCK_VM, MCK_GPR }, },
  { 9500 /* sf.vc.xvv */, RISCV::VC_XVV, Convert__UImm21_0__Reg1_1__Reg1_2__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_VM, MCK_VM, MCK_GPR }, },
  { 9510 /* sf.vc.xvw */, RISCV::VC_XVW, Convert__UImm21_0__Reg1_1__Reg1_2__Reg1_3, AMFBS_HasVendorXSfvcp, { MCK_UImm2, MCK_VM, MCK_VM, MCK_GPR }, },
  { 9520 /* sf.vfnrclip.x.f.qf */, RISCV::VFNRCLIP_X_F_QF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVendorXSfvfnrclipxfqf, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 9539 /* sf.vfnrclip.xu.f.qf */, RISCV::VFNRCLIP_XU_F_QF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVendorXSfvfnrclipxfqf, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 9559 /* sf.vfwmacc.4x4x4 */, RISCV::VFWMACC_4x4x4, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXSfvfwmaccqqq, { MCK_VM, MCK_VM, MCK_VM }, },
  { 9576 /* sf.vqmacc.2x8x2 */, RISCV::VQMACC_2x8x2, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXSfvqmaccdod, { MCK_VM, MCK_VM, MCK_VM }, },
  { 9592 /* sf.vqmacc.4x8x4 */, RISCV::VQMACC_4x8x4, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXSfvqmaccqoq, { MCK_VM, MCK_VM, MCK_VM }, },
  { 9608 /* sf.vqmaccsu.2x8x2 */, RISCV::VQMACCSU_2x8x2, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXSfvqmaccdod, { MCK_VM, MCK_VM, MCK_VM }, },
  { 9626 /* sf.vqmaccsu.4x8x4 */, RISCV::VQMACCSU_4x8x4, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXSfvqmaccqoq, { MCK_VM, MCK_VM, MCK_VM }, },
  { 9644 /* sf.vqmaccu.2x8x2 */, RISCV::VQMACCU_2x8x2, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXSfvqmaccdod, { MCK_VM, MCK_VM, MCK_VM }, },
  { 9661 /* sf.vqmaccu.4x8x4 */, RISCV::VQMACCU_4x8x4, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXSfvqmaccqoq, { MCK_VM, MCK_VM, MCK_VM }, },
  { 9678 /* sf.vqmaccus.2x8x2 */, RISCV::VQMACCUS_2x8x2, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXSfvqmaccdod, { MCK_VM, MCK_VM, MCK_VM }, },
  { 9696 /* sf.vqmaccus.4x8x4 */, RISCV::VQMACCUS_4x8x4, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVendorXSfvqmaccqoq, { MCK_VM, MCK_VM, MCK_VM }, },
  { 9714 /* sfence.inval.ir */, RISCV::SFENCE_INVAL_IR, Convert__imm_95_0__imm_95_0, AMFBS_HasStdExtSvinval, {  }, },
  { 9730 /* sfence.vma */, RISCV::SFENCE_VMA, Convert__regX0__regX0, AMFBS_None, {  }, },
  { 9730 /* sfence.vma */, RISCV::SFENCE_VMA, Convert__Reg1_0__regX0, AMFBS_None, { MCK_GPR }, },
  { 9730 /* sfence.vma */, RISCV::SFENCE_VMA, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 9741 /* sfence.w.inval */, RISCV::SFENCE_W_INVAL, Convert__imm_95_0__imm_95_0, AMFBS_HasStdExtSvinval, {  }, },
  { 9756 /* sgt */, RISCV::SLT, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9760 /* sgtu */, RISCV::SLTU, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9765 /* sgtz */, RISCV::SLT, Convert__Reg1_0__regX0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 9770 /* sh */, RISCV::PseudoSH, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol, MCK_GPR }, },
  { 9770 /* sh */, RISCV::SH, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 9770 /* sh */, RISCV::SH, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 9773 /* sh.aqrl */, RISCV::SH_AQ_RL, Convert__ZeroOffsetMemOpOperand1_1__Reg1_0, AMFBS_HasStdExtZalasr, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 9781 /* sh.rl */, RISCV::SH_RL, Convert__ZeroOffsetMemOpOperand1_1__Reg1_0, AMFBS_HasStdExtZalasr, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 9787 /* sh1add */, RISCV::SH1ADD, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9794 /* sh1add.uw */, RISCV::SH1ADD_UW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9804 /* sh2add */, RISCV::SH2ADD, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9811 /* sh2add.uw */, RISCV::SH2ADD_UW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9821 /* sh3add */, RISCV::SH3ADD, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9828 /* sh3add.uw */, RISCV::SH3ADD_UW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9838 /* sha256sig0 */, RISCV::SHA256SIG0, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZknh, { MCK_GPR, MCK_GPR }, },
  { 9849 /* sha256sig1 */, RISCV::SHA256SIG1, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZknh, { MCK_GPR, MCK_GPR }, },
  { 9860 /* sha256sum0 */, RISCV::SHA256SUM0, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZknh, { MCK_GPR, MCK_GPR }, },
  { 9871 /* sha256sum1 */, RISCV::SHA256SUM1, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZknh, { MCK_GPR, MCK_GPR }, },
  { 9882 /* sha512sig0 */, RISCV::SHA512SIG0, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZknh_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 9893 /* sha512sig0h */, RISCV::SHA512SIG0H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZknh_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9905 /* sha512sig0l */, RISCV::SHA512SIG0L, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZknh_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9917 /* sha512sig1 */, RISCV::SHA512SIG1, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZknh_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 9928 /* sha512sig1h */, RISCV::SHA512SIG1H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZknh_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9940 /* sha512sig1l */, RISCV::SHA512SIG1L, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZknh_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9952 /* sha512sum0 */, RISCV::SHA512SUM0, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZknh_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 9963 /* sha512sum0r */, RISCV::SHA512SUM0R, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZknh_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9975 /* sha512sum1 */, RISCV::SHA512SUM1, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZknh_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 9986 /* sha512sum1r */, RISCV::SHA512SUM1R, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZknh_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9998 /* sinval.vma */, RISCV::SINVAL_VMA, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtSvinval, { MCK_GPR, MCK_GPR }, },
  { 10009 /* sll */, RISCV::SLL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 10009 /* sll */, RISCV::SLLI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 10013 /* slli */, RISCV::SLLI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 10018 /* slli.uw */, RISCV::SLLI_UW, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZba_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 10026 /* slliw */, RISCV::SLLIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 10032 /* sllw */, RISCV::SLLW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 10032 /* sllw */, RISCV::SLLIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 10037 /* slt */, RISCV::SLT, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 10037 /* slt */, RISCV::SLTI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 10041 /* slti */, RISCV::SLTI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 10046 /* sltiu */, RISCV::SLTIU, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 10052 /* sltu */, RISCV::SLTU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 10052 /* sltu */, RISCV::SLTIU, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 10057 /* sltz */, RISCV::SLT, Convert__Reg1_0__Reg1_1__regX0, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 10062 /* sm3p0 */, RISCV::SM3P0, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZksh, { MCK_GPR, MCK_GPR }, },
  { 10068 /* sm3p1 */, RISCV::SM3P1, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZksh, { MCK_GPR, MCK_GPR }, },
  { 10074 /* sm4ed */, RISCV::SM4ED, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasStdExtZksed, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10080 /* sm4ks */, RISCV::SM4KS, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasStdExtZksed, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10086 /* snez */, RISCV::SLTU, Convert__Reg1_0__regX0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 10091 /* sra */, RISCV::SRA, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 10091 /* sra */, RISCV::SRAI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 10095 /* srai */, RISCV::SRAI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 10100 /* sraiw */, RISCV::SRAIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 10106 /* sraw */, RISCV::SRAW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 10106 /* sraw */, RISCV::SRAIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 10111 /* sret */, RISCV::SRET, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 10116 /* srl */, RISCV::SRL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 10116 /* srl */, RISCV::SRLI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 10120 /* srli */, RISCV::SRLI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 10125 /* srliw */, RISCV::SRLIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 10131 /* srlw */, RISCV::SRLW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 10131 /* srlw */, RISCV::SRLIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 10136 /* ssamoswap.d */, RISCV::SSAMOSWAP_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZicfiss_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 10148 /* ssamoswap.d.aq */, RISCV::SSAMOSWAP_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZicfiss_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 10163 /* ssamoswap.d.aqrl */, RISCV::SSAMOSWAP_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZicfiss_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 10180 /* ssamoswap.d.rl */, RISCV::SSAMOSWAP_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZicfiss_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 10195 /* ssamoswap.w */, RISCV::SSAMOSWAP_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZicfiss, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 10207 /* ssamoswap.w.aq */, RISCV::SSAMOSWAP_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZicfiss, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 10222 /* ssamoswap.w.aqrl */, RISCV::SSAMOSWAP_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZicfiss, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 10239 /* ssamoswap.w.rl */, RISCV::SSAMOSWAP_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtZicfiss, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 10254 /* sspopchk */, RISCV::SSPOPCHK, Convert__Reg1_0, AMFBS_HasStdExtZicfiss, { MCK_GPRX1X5 }, },
  { 10263 /* sspush */, RISCV::SSPUSH, Convert__Reg1_0, AMFBS_HasStdExtZicfiss, { MCK_GPRX1X5 }, },
  { 10270 /* ssrdp */, RISCV::SSRDP, Convert__Reg1_0, AMFBS_HasStdExtZicfiss, { MCK_GPRNoX0 }, },
  { 10276 /* sub */, RISCV::SUB, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 10280 /* subw */, RISCV::SUBW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 10285 /* sw */, RISCV::PseudoSW, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol, MCK_GPR }, },
  { 10285 /* sw */, RISCV::SW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 10285 /* sw */, RISCV::SW, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 10288 /* sw.aqrl */, RISCV::SW_AQ_RL, Convert__ZeroOffsetMemOpOperand1_1__Reg1_0, AMFBS_HasStdExtZalasr, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 10296 /* sw.rl */, RISCV::SW_RL, Convert__ZeroOffsetMemOpOperand1_1__Reg1_0, AMFBS_HasStdExtZalasr, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 10302 /* tail */, RISCV::PseudoTAIL, Convert__CallSymbol1_0, AMFBS_None, { MCK_CallSymbol }, },
  { 10307 /* th.addsl */, RISCV::TH_ADDSL, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadBa, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10316 /* th.dcache.call */, RISCV::TH_DCACHE_CALL, Convert_NoOperands, AMFBS_HasVendorXTHeadCmo, {  }, },
  { 10331 /* th.dcache.ciall */, RISCV::TH_DCACHE_CIALL, Convert_NoOperands, AMFBS_HasVendorXTHeadCmo, {  }, },
  { 10347 /* th.dcache.cipa */, RISCV::TH_DCACHE_CIPA, Convert__Reg1_0, AMFBS_HasVendorXTHeadCmo, { MCK_GPR }, },
  { 10362 /* th.dcache.cisw */, RISCV::TH_DCACHE_CISW, Convert__Reg1_0, AMFBS_HasVendorXTHeadCmo, { MCK_GPR }, },
  { 10377 /* th.dcache.civa */, RISCV::TH_DCACHE_CIVA, Convert__Reg1_0, AMFBS_HasVendorXTHeadCmo, { MCK_GPR }, },
  { 10392 /* th.dcache.cpa */, RISCV::TH_DCACHE_CPA, Convert__Reg1_0, AMFBS_HasVendorXTHeadCmo, { MCK_GPR }, },
  { 10406 /* th.dcache.cpal1 */, RISCV::TH_DCACHE_CPAL1, Convert__Reg1_0, AMFBS_HasVendorXTHeadCmo, { MCK_GPR }, },
  { 10422 /* th.dcache.csw */, RISCV::TH_DCACHE_CSW, Convert__Reg1_0, AMFBS_HasVendorXTHeadCmo, { MCK_GPR }, },
  { 10436 /* th.dcache.cva */, RISCV::TH_DCACHE_CVA, Convert__Reg1_0, AMFBS_HasVendorXTHeadCmo, { MCK_GPR }, },
  { 10450 /* th.dcache.cval1 */, RISCV::TH_DCACHE_CVAL1, Convert__Reg1_0, AMFBS_HasVendorXTHeadCmo, { MCK_GPR }, },
  { 10466 /* th.dcache.iall */, RISCV::TH_DCACHE_IALL, Convert_NoOperands, AMFBS_HasVendorXTHeadCmo, {  }, },
  { 10481 /* th.dcache.ipa */, RISCV::TH_DCACHE_IPA, Convert__Reg1_0, AMFBS_HasVendorXTHeadCmo, { MCK_GPR }, },
  { 10495 /* th.dcache.isw */, RISCV::TH_DCACHE_ISW, Convert__Reg1_0, AMFBS_HasVendorXTHeadCmo, { MCK_GPR }, },
  { 10509 /* th.dcache.iva */, RISCV::TH_DCACHE_IVA, Convert__Reg1_0, AMFBS_HasVendorXTHeadCmo, { MCK_GPR }, },
  { 10523 /* th.ext */, RISCV::TH_EXT, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2__UImmLog2XLen1_3, AMFBS_HasVendorXTHeadBb, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen, MCK_UImmLog2XLen }, },
  { 10530 /* th.extu */, RISCV::TH_EXTU, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2__UImmLog2XLen1_3, AMFBS_HasVendorXTHeadBb, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen, MCK_UImmLog2XLen }, },
  { 10538 /* th.ff0 */, RISCV::TH_FF0, Convert__Reg1_0__Reg1_1, AMFBS_HasVendorXTHeadBb, { MCK_GPR, MCK_GPR }, },
  { 10545 /* th.ff1 */, RISCV::TH_FF1, Convert__Reg1_0__Reg1_1, AMFBS_HasVendorXTHeadBb, { MCK_GPR, MCK_GPR }, },
  { 10552 /* th.flrd */, RISCV::TH_FLRD, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadFMemIdx_HasStdExtD, { MCK_FPR64, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10560 /* th.flrw */, RISCV::TH_FLRW, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadFMemIdx_HasStdExtF, { MCK_FPR32, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10568 /* th.flurd */, RISCV::TH_FLURD, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadFMemIdx_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10577 /* th.flurw */, RISCV::TH_FLURW, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadFMemIdx_HasStdExtF_IsRV64, { MCK_FPR32, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10586 /* th.fsrd */, RISCV::TH_FSRD, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadFMemIdx_HasStdExtD, { MCK_FPR64, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10594 /* th.fsrw */, RISCV::TH_FSRW, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadFMemIdx_HasStdExtF, { MCK_FPR32, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10602 /* th.fsurd */, RISCV::TH_FSURD, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadFMemIdx_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10611 /* th.fsurw */, RISCV::TH_FSURW, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadFMemIdx_HasStdExtF_IsRV64, { MCK_FPR32, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10620 /* th.icache.iall */, RISCV::TH_ICACHE_IALL, Convert_NoOperands, AMFBS_HasVendorXTHeadCmo, {  }, },
  { 10635 /* th.icache.ialls */, RISCV::TH_ICACHE_IALLS, Convert_NoOperands, AMFBS_HasVendorXTHeadCmo, {  }, },
  { 10651 /* th.icache.ipa */, RISCV::TH_ICACHE_IPA, Convert__Reg1_0, AMFBS_HasVendorXTHeadCmo, { MCK_GPR }, },
  { 10665 /* th.icache.iva */, RISCV::TH_ICACHE_IVA, Convert__Reg1_0, AMFBS_HasVendorXTHeadCmo, { MCK_GPR }, },
  { 10679 /* th.l2cache.call */, RISCV::TH_L2CACHE_CALL, Convert_NoOperands, AMFBS_HasVendorXTHeadCmo, {  }, },
  { 10695 /* th.l2cache.ciall */, RISCV::TH_L2CACHE_CIALL, Convert_NoOperands, AMFBS_HasVendorXTHeadCmo, {  }, },
  { 10712 /* th.l2cache.iall */, RISCV::TH_L2CACHE_IALL, Convert_NoOperands, AMFBS_HasVendorXTHeadCmo, {  }, },
  { 10728 /* th.lbia */, RISCV::TH_LBIA, Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 10736 /* th.lbib */, RISCV::TH_LBIB, Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 10744 /* th.lbuia */, RISCV::TH_LBUIA, Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 10753 /* th.lbuib */, RISCV::TH_LBUIB, Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 10762 /* th.ldd */, RISCV::TH_LDD, Convert__Reg1_0__Reg1_1__Reg1_3__UImm21_5__UImm71_6, AMFBS_HasVendorXTHeadMemPair_IsRV64, { MCK_GPR, MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_UImm2, MCK_UImm7 }, },
  { 10769 /* th.ldia */, RISCV::TH_LDIA, Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx_IsRV64, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 10777 /* th.ldib */, RISCV::TH_LDIB, Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx_IsRV64, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 10785 /* th.lhia */, RISCV::TH_LHIA, Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 10793 /* th.lhib */, RISCV::TH_LHIB, Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 10801 /* th.lhuia */, RISCV::TH_LHUIA, Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 10810 /* th.lhuib */, RISCV::TH_LHUIB, Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 10819 /* th.lrb */, RISCV::TH_LRB, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10826 /* th.lrbu */, RISCV::TH_LRBU, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10834 /* th.lrd */, RISCV::TH_LRD, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10841 /* th.lrh */, RISCV::TH_LRH, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10848 /* th.lrhu */, RISCV::TH_LRHU, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10856 /* th.lrw */, RISCV::TH_LRW, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10863 /* th.lrwu */, RISCV::TH_LRWU, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10871 /* th.lurb */, RISCV::TH_LURB, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10879 /* th.lurbu */, RISCV::TH_LURBU, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10888 /* th.lurd */, RISCV::TH_LURD, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10896 /* th.lurh */, RISCV::TH_LURH, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10904 /* th.lurhu */, RISCV::TH_LURHU, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10913 /* th.lurw */, RISCV::TH_LURW, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10921 /* th.lurwu */, RISCV::TH_LURWU, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 10930 /* th.lwd */, RISCV::TH_LWD, Convert__Reg1_0__Reg1_1__Reg1_3__UImm21_5__UImm71_6, AMFBS_HasVendorXTHeadMemPair, { MCK_GPR, MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_UImm2, MCK_UImm7 }, },
  { 10937 /* th.lwia */, RISCV::TH_LWIA, Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 10945 /* th.lwib */, RISCV::TH_LWIB, Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 10953 /* th.lwud */, RISCV::TH_LWUD, Convert__Reg1_0__Reg1_1__Reg1_3__UImm21_5__UImm71_6, AMFBS_HasVendorXTHeadMemPair, { MCK_GPR, MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_UImm2, MCK_UImm7 }, },
  { 10961 /* th.lwuia */, RISCV::TH_LWUIA, Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx_IsRV64, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 10970 /* th.lwuib */, RISCV::TH_LWUIB, Convert__Reg1_0__Reg1_2__Tie1_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx_IsRV64, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 10979 /* th.mula */, RISCV::TH_MULA, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXTHeadMac, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 10987 /* th.mulah */, RISCV::TH_MULAH, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXTHeadMac, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 10996 /* th.mulaw */, RISCV::TH_MULAW, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXTHeadMac_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11005 /* th.muls */, RISCV::TH_MULS, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXTHeadMac, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11013 /* th.mulsh */, RISCV::TH_MULSH, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXTHeadMac, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11022 /* th.mulsw */, RISCV::TH_MULSW, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXTHeadMac_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11031 /* th.mveqz */, RISCV::TH_MVEQZ, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXTHeadCondMov, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11040 /* th.mvnez */, RISCV::TH_MVNEZ, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasVendorXTHeadCondMov, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11049 /* th.rev */, RISCV::TH_REV, Convert__Reg1_0__Reg1_1, AMFBS_HasVendorXTHeadBb, { MCK_GPR, MCK_GPR }, },
  { 11056 /* th.revw */, RISCV::TH_REVW, Convert__Reg1_0__Reg1_1, AMFBS_HasVendorXTHeadBb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11064 /* th.sbia */, RISCV::TH_SBIA, Convert__Reg1_2__Reg1_0__Tie0_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 11072 /* th.sbib */, RISCV::TH_SBIB, Convert__Reg1_2__Reg1_0__Tie0_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 11080 /* th.sdd */, RISCV::TH_SDD, Convert__Reg1_0__Reg1_1__Reg1_3__UImm21_5__UImm71_6, AMFBS_HasVendorXTHeadMemPair_IsRV64, { MCK_GPR, MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_UImm2, MCK_UImm7 }, },
  { 11087 /* th.sdia */, RISCV::TH_SDIA, Convert__Reg1_2__Reg1_0__Tie0_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx_IsRV64, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 11095 /* th.sdib */, RISCV::TH_SDIB, Convert__Reg1_2__Reg1_0__Tie0_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx_IsRV64, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 11103 /* th.sfence.vmas */, RISCV::TH_SFENCE_VMAS, Convert__Reg1_0__Reg1_1, AMFBS_HasVendorXTHeadSync, { MCK_GPR, MCK_GPR }, },
  { 11118 /* th.shia */, RISCV::TH_SHIA, Convert__Reg1_2__Reg1_0__Tie0_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 11126 /* th.shib */, RISCV::TH_SHIB, Convert__Reg1_2__Reg1_0__Tie0_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 11134 /* th.srb */, RISCV::TH_SRB, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 11141 /* th.srd */, RISCV::TH_SRD, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 11148 /* th.srh */, RISCV::TH_SRH, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 11155 /* th.srri */, RISCV::TH_SRRI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasVendorXTHeadBb, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 11163 /* th.srriw */, RISCV::TH_SRRIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasVendorXTHeadBb_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 11172 /* th.srw */, RISCV::TH_SRW, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 11179 /* th.surb */, RISCV::TH_SURB, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 11187 /* th.surd */, RISCV::TH_SURD, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 11195 /* th.surh */, RISCV::TH_SURH, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 11203 /* th.surw */, RISCV::TH_SURW, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 11211 /* th.swd */, RISCV::TH_SWD, Convert__Reg1_0__Reg1_1__Reg1_3__UImm21_5__UImm71_6, AMFBS_HasVendorXTHeadMemPair, { MCK_GPR, MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_UImm2, MCK_UImm7 }, },
  { 11218 /* th.swia */, RISCV::TH_SWIA, Convert__Reg1_2__Reg1_0__Tie0_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 11226 /* th.swib */, RISCV::TH_SWIB, Convert__Reg1_2__Reg1_0__Tie0_3_3__SImm51_4__UImm21_5, AMFBS_HasVendorXTHeadMemIdx, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_, MCK_SImm5, MCK_UImm2 }, },
  { 11234 /* th.sync */, RISCV::TH_SYNC, Convert_NoOperands, AMFBS_HasVendorXTHeadSync, {  }, },
  { 11242 /* th.sync.i */, RISCV::TH_SYNC_I, Convert_NoOperands, AMFBS_HasVendorXTHeadSync, {  }, },
  { 11252 /* th.sync.is */, RISCV::TH_SYNC_IS, Convert_NoOperands, AMFBS_HasVendorXTHeadSync, {  }, },
  { 11263 /* th.sync.s */, RISCV::TH_SYNC_S, Convert_NoOperands, AMFBS_HasVendorXTHeadSync, {  }, },
  { 11273 /* th.tst */, RISCV::TH_TST, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasVendorXTHeadBs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 11280 /* th.tstnbz */, RISCV::TH_TSTNBZ, Convert__Reg1_0__Reg1_1, AMFBS_HasVendorXTHeadBb, { MCK_GPR, MCK_GPR }, },
  { 11290 /* th.vmaqa.vv */, RISCV::THVdotVMAQA_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVendorXTHeadVdot, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11302 /* th.vmaqa.vx */, RISCV::THVdotVMAQA_VX, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVendorXTHeadVdot, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11314 /* th.vmaqasu.vv */, RISCV::THVdotVMAQASU_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVendorXTHeadVdot, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11328 /* th.vmaqasu.vx */, RISCV::THVdotVMAQASU_VX, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVendorXTHeadVdot, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11342 /* th.vmaqau.vv */, RISCV::THVdotVMAQAU_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVendorXTHeadVdot, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11355 /* th.vmaqau.vx */, RISCV::THVdotVMAQAU_VX, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVendorXTHeadVdot, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11368 /* th.vmaqaus.vx */, RISCV::THVdotVMAQAUS_VX, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVendorXTHeadVdot, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11382 /* unimp */, RISCV::UNIMP, Convert_NoOperands, AMFBS_None, {  }, },
  { 11388 /* unzip */, RISCV::UNZIP_RV32, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbkb_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 11394 /* vaadd.vv */, RISCV::VAADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11403 /* vaadd.vx */, RISCV::VAADD_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11412 /* vaaddu.vv */, RISCV::VAADDU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11422 /* vaaddu.vx */, RISCV::VAADDU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11432 /* vadc.vim */, RISCV::VADC_VIM, Convert__Reg1_0__Reg1_1__SImm51_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_VMV0 }, },
  { 11441 /* vadc.vvm */, RISCV::VADC_VVM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_VMV0 }, },
  { 11450 /* vadc.vxm */, RISCV::VADC_VXM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_VMV0 }, },
  { 11459 /* vadd.vi */, RISCV::VADD_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 11467 /* vadd.vv */, RISCV::VADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11475 /* vadd.vx */, RISCV::VADD_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11483 /* vaesdf.vs */, RISCV::VAESDF_VS, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtZvkned, { MCK_VM, MCK_VM }, },
  { 11493 /* vaesdf.vv */, RISCV::VAESDF_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtZvkned, { MCK_VM, MCK_VM }, },
  { 11503 /* vaesdm.vs */, RISCV::VAESDM_VS, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtZvkned, { MCK_VM, MCK_VM }, },
  { 11513 /* vaesdm.vv */, RISCV::VAESDM_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtZvkned, { MCK_VM, MCK_VM }, },
  { 11523 /* vaesef.vs */, RISCV::VAESEF_VS, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtZvkned, { MCK_VM, MCK_VM }, },
  { 11533 /* vaesef.vv */, RISCV::VAESEF_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtZvkned, { MCK_VM, MCK_VM }, },
  { 11543 /* vaesem.vs */, RISCV::VAESEM_VS, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtZvkned, { MCK_VM, MCK_VM }, },
  { 11553 /* vaesem.vv */, RISCV::VAESEM_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtZvkned, { MCK_VM, MCK_VM }, },
  { 11563 /* vaeskf1.vi */, RISCV::VAESKF1_VI, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZvkned, { MCK_VM, MCK_VM, MCK_UImm5 }, },
  { 11574 /* vaeskf2.vi */, RISCV::VAESKF2_VI, Convert__Reg1_0__Tie0_1_1__Reg1_1__UImm51_2, AMFBS_HasStdExtZvkned, { MCK_VM, MCK_VM, MCK_UImm5 }, },
  { 11585 /* vaesz.vs */, RISCV::VAESZ_VS, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtZvkned, { MCK_VM, MCK_VM }, },
  { 11594 /* vand.vi */, RISCV::VAND_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 11602 /* vand.vv */, RISCV::VAND_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11610 /* vand.vx */, RISCV::VAND_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11618 /* vandn.vv */, RISCV::VANDN_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtZvkb, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11627 /* vandn.vx */, RISCV::VANDN_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtZvkb, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11636 /* vasub.vv */, RISCV::VASUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11645 /* vasub.vx */, RISCV::VASUB_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11654 /* vasubu.vv */, RISCV::VASUBU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11664 /* vasubu.vx */, RISCV::VASUBU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11674 /* vbrev.v */, RISCV::VBREV_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtZvbb, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11682 /* vbrev8.v */, RISCV::VBREV8_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtZvkb, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11691 /* vclmul.vv */, RISCV::VCLMUL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtZvbc, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11701 /* vclmul.vx */, RISCV::VCLMUL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtZvbc, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11711 /* vclmulh.vv */, RISCV::VCLMULH_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtZvbc, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11722 /* vclmulh.vx */, RISCV::VCLMULH_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtZvbc, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11733 /* vclz.v */, RISCV::VCLZ_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtZvbb, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11740 /* vcompress.vm */, RISCV::VCOMPRESS_VM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 11753 /* vcpop.m */, RISCV::VCPOP_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11761 /* vcpop.v */, RISCV::VCPOP_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtZvbb, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11769 /* vctz.v */, RISCV::VCTZ_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtZvbb, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11776 /* vdiv.vv */, RISCV::VDIV_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11784 /* vdiv.vx */, RISCV::VDIV_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11792 /* vdivu.vv */, RISCV::VDIVU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11801 /* vdivu.vx */, RISCV::VDIVU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11810 /* vfabs.v */, RISCV::VFSGNJX_VV, Convert__Reg1_0__Reg1_1__Reg1_1__reg0, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM }, },
  { 11810 /* vfabs.v */, RISCV::VFSGNJX_VV, Convert__Reg1_0__Reg1_1__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11818 /* vfadd.vf */, RISCV::VFADD_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 11827 /* vfadd.vv */, RISCV::VFADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11836 /* vfclass.v */, RISCV::VFCLASS_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11846 /* vfcvt.f.x.v */, RISCV::VFCVT_F_X_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11858 /* vfcvt.f.xu.v */, RISCV::VFCVT_F_XU_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11871 /* vfcvt.rtz.x.f.v */, RISCV::VFCVT_RTZ_X_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11887 /* vfcvt.rtz.xu.f.v */, RISCV::VFCVT_RTZ_XU_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11904 /* vfcvt.x.f.v */, RISCV::VFCVT_X_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11916 /* vfcvt.xu.f.v */, RISCV::VFCVT_XU_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11929 /* vfdiv.vf */, RISCV::VFDIV_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 11938 /* vfdiv.vv */, RISCV::VFDIV_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11947 /* vfirst.m */, RISCV::VFIRST_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11956 /* vfmacc.vf */, RISCV::VFMACC_VF, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11966 /* vfmacc.vv */, RISCV::VFMACC_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11976 /* vfmadd.vf */, RISCV::VFMADD_VF, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11986 /* vfmadd.vv */, RISCV::VFMADD_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11996 /* vfmax.vf */, RISCV::VFMAX_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 12005 /* vfmax.vv */, RISCV::VFMAX_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12014 /* vfmerge.vfm */, RISCV::VFMERGE_VFM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_VMV0 }, },
  { 12026 /* vfmin.vf */, RISCV::VFMIN_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 12035 /* vfmin.vv */, RISCV::VFMIN_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12044 /* vfmsac.vf */, RISCV::VFMSAC_VF, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12054 /* vfmsac.vv */, RISCV::VFMSAC_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12064 /* vfmsub.vf */, RISCV::VFMSUB_VF, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12074 /* vfmsub.vv */, RISCV::VFMSUB_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12084 /* vfmul.vf */, RISCV::VFMUL_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 12093 /* vfmul.vv */, RISCV::VFMUL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12102 /* vfmv.f.s */, RISCV::VFMV_F_S, Convert__Reg1_0__Reg1_1, AMFBS_HasVInstructionsAnyF, { MCK_FPR32, MCK_VM }, },
  { 12111 /* vfmv.s.f */, RISCV::VFMV_S_F, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32 }, },
  { 12120 /* vfmv.v.f */, RISCV::VFMV_V_F, Convert__Reg1_0__Reg1_1, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32 }, },
  { 12129 /* vfncvt.f.f.w */, RISCV::VFNCVT_F_F_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12142 /* vfncvt.f.x.w */, RISCV::VFNCVT_F_X_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12155 /* vfncvt.f.xu.w */, RISCV::VFNCVT_F_XU_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12169 /* vfncvt.rod.f.f.w */, RISCV::VFNCVT_ROD_F_F_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12186 /* vfncvt.rtz.x.f.w */, RISCV::VFNCVT_RTZ_X_F_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12203 /* vfncvt.rtz.xu.f.w */, RISCV::VFNCVT_RTZ_XU_F_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12221 /* vfncvt.x.f.w */, RISCV::VFNCVT_X_F_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12234 /* vfncvt.xu.f.w */, RISCV::VFNCVT_XU_F_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12248 /* vfncvtbf16.f.f.w */, RISCV::VFNCVTBF16_F_F_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtZvfbfmin, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12265 /* vfneg.v */, RISCV::VFSGNJN_VV, Convert__Reg1_0__Reg1_1__Reg1_1__reg0, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM }, },
  { 12265 /* vfneg.v */, RISCV::VFSGNJN_VV, Convert__Reg1_0__Reg1_1__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12273 /* vfnmacc.vf */, RISCV::VFNMACC_VF, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12284 /* vfnmacc.vv */, RISCV::VFNMACC_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12295 /* vfnmadd.vf */, RISCV::VFNMADD_VF, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12306 /* vfnmadd.vv */, RISCV::VFNMADD_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12317 /* vfnmsac.vf */, RISCV::VFNMSAC_VF, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12328 /* vfnmsac.vv */, RISCV::VFNMSAC_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12339 /* vfnmsub.vf */, RISCV::VFNMSUB_VF, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12350 /* vfnmsub.vv */, RISCV::VFNMSUB_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12361 /* vfrdiv.vf */, RISCV::VFRDIV_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 12371 /* vfrec7.v */, RISCV::VFREC7_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12380 /* vfredmax.vs */, RISCV::VFREDMAX_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12392 /* vfredmin.vs */, RISCV::VFREDMIN_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12404 /* vfredosum.vs */, RISCV::VFREDOSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12417 /* vfredsum.vs */, RISCV::VFREDUSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12429 /* vfredusum.vs */, RISCV::VFREDUSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12442 /* vfrsqrt7.v */, RISCV::VFRSQRT7_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12453 /* vfrsub.vf */, RISCV::VFRSUB_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 12463 /* vfsgnj.vf */, RISCV::VFSGNJ_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 12473 /* vfsgnj.vv */, RISCV::VFSGNJ_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12483 /* vfsgnjn.vf */, RISCV::VFSGNJN_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 12494 /* vfsgnjn.vv */, RISCV::VFSGNJN_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12505 /* vfsgnjx.vf */, RISCV::VFSGNJX_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 12516 /* vfsgnjx.vv */, RISCV::VFSGNJX_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12527 /* vfslide1down.vf */, RISCV::VFSLIDE1DOWN_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 12543 /* vfslide1up.vf */, RISCV::VFSLIDE1UP_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 12557 /* vfsqrt.v */, RISCV::VFSQRT_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12566 /* vfsub.vf */, RISCV::VFSUB_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 12575 /* vfsub.vv */, RISCV::VFSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12584 /* vfwadd.vf */, RISCV::VFWADD_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 12594 /* vfwadd.vv */, RISCV::VFWADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12604 /* vfwadd.wf */, RISCV::VFWADD_WF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 12614 /* vfwadd.wv */, RISCV::VFWADD_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12624 /* vfwcvt.f.f.v */, RISCV::VFWCVT_F_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12637 /* vfwcvt.f.x.v */, RISCV::VFWCVT_F_X_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12650 /* vfwcvt.f.xu.v */, RISCV::VFWCVT_F_XU_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12664 /* vfwcvt.rtz.x.f.v */, RISCV::VFWCVT_RTZ_X_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12681 /* vfwcvt.rtz.xu.f.v */, RISCV::VFWCVT_RTZ_XU_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12699 /* vfwcvt.x.f.v */, RISCV::VFWCVT_X_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12712 /* vfwcvt.xu.f.v */, RISCV::VFWCVT_XU_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12726 /* vfwcvtbf16.f.f.v */, RISCV::VFWCVTBF16_F_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtZvfbfmin, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12743 /* vfwmacc.vf */, RISCV::VFWMACC_VF, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12754 /* vfwmacc.vv */, RISCV::VFWMACC_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12765 /* vfwmaccbf16.vf */, RISCV::VFWMACCBF16_VF, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtZvfbfwma, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12780 /* vfwmaccbf16.vv */, RISCV::VFWMACCBF16_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtZvfbfwma, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12795 /* vfwmsac.vf */, RISCV::VFWMSAC_VF, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12806 /* vfwmsac.vv */, RISCV::VFWMSAC_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12817 /* vfwmul.vf */, RISCV::VFWMUL_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 12827 /* vfwmul.vv */, RISCV::VFWMUL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12837 /* vfwnmacc.vf */, RISCV::VFWNMACC_VF, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12849 /* vfwnmacc.vv */, RISCV::VFWNMACC_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12861 /* vfwnmsac.vf */, RISCV::VFWNMSAC_VF, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12873 /* vfwnmsac.vv */, RISCV::VFWNMSAC_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12885 /* vfwredosum.vs */, RISCV::VFWREDOSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12899 /* vfwredsum.vs */, RISCV::VFWREDUSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12912 /* vfwredusum.vs */, RISCV::VFWREDUSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12926 /* vfwsub.vf */, RISCV::VFWSUB_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 12936 /* vfwsub.vv */, RISCV::VFWSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12946 /* vfwsub.wf */, RISCV::VFWSUB_WF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 12956 /* vfwsub.wv */, RISCV::VFWSUB_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12966 /* vghsh.vv */, RISCV::VGHSH_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasStdExtZvkg, { MCK_VM, MCK_VM, MCK_VM }, },
  { 12975 /* vgmul.vv */, RISCV::VGMUL_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtZvkg, { MCK_VM, MCK_VM }, },
  { 12984 /* vid.v */, RISCV::VID_V, Convert__Reg1_0__RVVMaskRegOpOperand1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12990 /* viota.m */, RISCV::VIOTA_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 12998 /* vl1r.v */, RISCV::VL1RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 13005 /* vl1re16.v */, RISCV::VL1RE16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand }, },
  { 13015 /* vl1re32.v */, RISCV::VL1RE32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand }, },
  { 13025 /* vl1re64.v */, RISCV::VL1RE64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand }, },
  { 13035 /* vl1re8.v */, RISCV::VL1RE8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand }, },
  { 13044 /* vl2r.v */, RISCV::VL2RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VRM2, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 13051 /* vl2re16.v */, RISCV::VL2RE16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructions, { MCK_VRM2, MCK_ZeroOffsetMemOpOperand }, },
  { 13061 /* vl2re32.v */, RISCV::VL2RE32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructions, { MCK_VRM2, MCK_ZeroOffsetMemOpOperand }, },
  { 13071 /* vl2re64.v */, RISCV::VL2RE64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructionsI64, { MCK_VRM2, MCK_ZeroOffsetMemOpOperand }, },
  { 13081 /* vl2re8.v */, RISCV::VL2RE8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructions, { MCK_VRM2, MCK_ZeroOffsetMemOpOperand }, },
  { 13090 /* vl4r.v */, RISCV::VL4RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VRM4, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 13097 /* vl4re16.v */, RISCV::VL4RE16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructions, { MCK_VRM4, MCK_ZeroOffsetMemOpOperand }, },
  { 13107 /* vl4re32.v */, RISCV::VL4RE32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructions, { MCK_VRM4, MCK_ZeroOffsetMemOpOperand }, },
  { 13117 /* vl4re64.v */, RISCV::VL4RE64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructionsI64, { MCK_VRM4, MCK_ZeroOffsetMemOpOperand }, },
  { 13127 /* vl4re8.v */, RISCV::VL4RE8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructions, { MCK_VRM4, MCK_ZeroOffsetMemOpOperand }, },
  { 13136 /* vl8r.v */, RISCV::VL8RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VRM8, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 13143 /* vl8re16.v */, RISCV::VL8RE16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructions, { MCK_VRM8, MCK_ZeroOffsetMemOpOperand }, },
  { 13153 /* vl8re32.v */, RISCV::VL8RE32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructions, { MCK_VRM8, MCK_ZeroOffsetMemOpOperand }, },
  { 13163 /* vl8re64.v */, RISCV::VL8RE64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructionsI64, { MCK_VRM8, MCK_ZeroOffsetMemOpOperand }, },
  { 13173 /* vl8re8.v */, RISCV::VL8RE8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructions, { MCK_VRM8, MCK_ZeroOffsetMemOpOperand }, },
  { 13182 /* vle1.v */, RISCV::VLM_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 13189 /* vle16.v */, RISCV::VLE16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13197 /* vle16ff.v */, RISCV::VLE16FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13207 /* vle32.v */, RISCV::VLE32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13215 /* vle32ff.v */, RISCV::VLE32FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13225 /* vle64.v */, RISCV::VLE64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13233 /* vle64ff.v */, RISCV::VLE64FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13243 /* vle8.v */, RISCV::VLE8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13250 /* vle8ff.v */, RISCV::VLE8FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13259 /* vlm.v */, RISCV::VLM_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand }, },
  { 13265 /* vloxei16.v */, RISCV::VLOXEI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13276 /* vloxei32.v */, RISCV::VLOXEI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13287 /* vloxei64.v */, RISCV::VLOXEI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_IsRV64_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13298 /* vloxei8.v */, RISCV::VLOXEI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13308 /* vloxseg2ei16.v */, RISCV::VLOXSEG2EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13323 /* vloxseg2ei32.v */, RISCV::VLOXSEG2EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13338 /* vloxseg2ei64.v */, RISCV::VLOXSEG2EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13353 /* vloxseg2ei8.v */, RISCV::VLOXSEG2EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13367 /* vloxseg3ei16.v */, RISCV::VLOXSEG3EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13382 /* vloxseg3ei32.v */, RISCV::VLOXSEG3EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13397 /* vloxseg3ei64.v */, RISCV::VLOXSEG3EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13412 /* vloxseg3ei8.v */, RISCV::VLOXSEG3EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13426 /* vloxseg4ei16.v */, RISCV::VLOXSEG4EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13441 /* vloxseg4ei32.v */, RISCV::VLOXSEG4EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13456 /* vloxseg4ei64.v */, RISCV::VLOXSEG4EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13471 /* vloxseg4ei8.v */, RISCV::VLOXSEG4EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13485 /* vloxseg5ei16.v */, RISCV::VLOXSEG5EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13500 /* vloxseg5ei32.v */, RISCV::VLOXSEG5EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13515 /* vloxseg5ei64.v */, RISCV::VLOXSEG5EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13530 /* vloxseg5ei8.v */, RISCV::VLOXSEG5EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13544 /* vloxseg6ei16.v */, RISCV::VLOXSEG6EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13559 /* vloxseg6ei32.v */, RISCV::VLOXSEG6EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13574 /* vloxseg6ei64.v */, RISCV::VLOXSEG6EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13589 /* vloxseg6ei8.v */, RISCV::VLOXSEG6EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13603 /* vloxseg7ei16.v */, RISCV::VLOXSEG7EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13618 /* vloxseg7ei32.v */, RISCV::VLOXSEG7EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13633 /* vloxseg7ei64.v */, RISCV::VLOXSEG7EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13648 /* vloxseg7ei8.v */, RISCV::VLOXSEG7EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13662 /* vloxseg8ei16.v */, RISCV::VLOXSEG8EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13677 /* vloxseg8ei32.v */, RISCV::VLOXSEG8EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13692 /* vloxseg8ei64.v */, RISCV::VLOXSEG8EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13707 /* vloxseg8ei8.v */, RISCV::VLOXSEG8EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 13721 /* vlse16.v */, RISCV::VLSE16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 13730 /* vlse32.v */, RISCV::VLSE32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 13739 /* vlse64.v */, RISCV::VLSE64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 13748 /* vlse8.v */, RISCV::VLSE8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 13756 /* vlseg2e16.v */, RISCV::VLSEG2E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13768 /* vlseg2e16ff.v */, RISCV::VLSEG2E16FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13782 /* vlseg2e32.v */, RISCV::VLSEG2E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13794 /* vlseg2e32ff.v */, RISCV::VLSEG2E32FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13808 /* vlseg2e64.v */, RISCV::VLSEG2E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13820 /* vlseg2e64ff.v */, RISCV::VLSEG2E64FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13834 /* vlseg2e8.v */, RISCV::VLSEG2E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13845 /* vlseg2e8ff.v */, RISCV::VLSEG2E8FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13858 /* vlseg3e16.v */, RISCV::VLSEG3E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13870 /* vlseg3e16ff.v */, RISCV::VLSEG3E16FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13884 /* vlseg3e32.v */, RISCV::VLSEG3E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13896 /* vlseg3e32ff.v */, RISCV::VLSEG3E32FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13910 /* vlseg3e64.v */, RISCV::VLSEG3E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13922 /* vlseg3e64ff.v */, RISCV::VLSEG3E64FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13936 /* vlseg3e8.v */, RISCV::VLSEG3E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13947 /* vlseg3e8ff.v */, RISCV::VLSEG3E8FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13960 /* vlseg4e16.v */, RISCV::VLSEG4E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13972 /* vlseg4e16ff.v */, RISCV::VLSEG4E16FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13986 /* vlseg4e32.v */, RISCV::VLSEG4E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 13998 /* vlseg4e32ff.v */, RISCV::VLSEG4E32FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14012 /* vlseg4e64.v */, RISCV::VLSEG4E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14024 /* vlseg4e64ff.v */, RISCV::VLSEG4E64FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14038 /* vlseg4e8.v */, RISCV::VLSEG4E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14049 /* vlseg4e8ff.v */, RISCV::VLSEG4E8FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14062 /* vlseg5e16.v */, RISCV::VLSEG5E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14074 /* vlseg5e16ff.v */, RISCV::VLSEG5E16FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14088 /* vlseg5e32.v */, RISCV::VLSEG5E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14100 /* vlseg5e32ff.v */, RISCV::VLSEG5E32FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14114 /* vlseg5e64.v */, RISCV::VLSEG5E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14126 /* vlseg5e64ff.v */, RISCV::VLSEG5E64FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14140 /* vlseg5e8.v */, RISCV::VLSEG5E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14151 /* vlseg5e8ff.v */, RISCV::VLSEG5E8FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14164 /* vlseg6e16.v */, RISCV::VLSEG6E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14176 /* vlseg6e16ff.v */, RISCV::VLSEG6E16FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14190 /* vlseg6e32.v */, RISCV::VLSEG6E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14202 /* vlseg6e32ff.v */, RISCV::VLSEG6E32FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14216 /* vlseg6e64.v */, RISCV::VLSEG6E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14228 /* vlseg6e64ff.v */, RISCV::VLSEG6E64FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14242 /* vlseg6e8.v */, RISCV::VLSEG6E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14253 /* vlseg6e8ff.v */, RISCV::VLSEG6E8FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14266 /* vlseg7e16.v */, RISCV::VLSEG7E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14278 /* vlseg7e16ff.v */, RISCV::VLSEG7E16FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14292 /* vlseg7e32.v */, RISCV::VLSEG7E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14304 /* vlseg7e32ff.v */, RISCV::VLSEG7E32FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14318 /* vlseg7e64.v */, RISCV::VLSEG7E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14330 /* vlseg7e64ff.v */, RISCV::VLSEG7E64FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14344 /* vlseg7e8.v */, RISCV::VLSEG7E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14355 /* vlseg7e8ff.v */, RISCV::VLSEG7E8FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14368 /* vlseg8e16.v */, RISCV::VLSEG8E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14380 /* vlseg8e16ff.v */, RISCV::VLSEG8E16FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14394 /* vlseg8e32.v */, RISCV::VLSEG8E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14406 /* vlseg8e32ff.v */, RISCV::VLSEG8E32FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14420 /* vlseg8e64.v */, RISCV::VLSEG8E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14432 /* vlseg8e64ff.v */, RISCV::VLSEG8E64FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14446 /* vlseg8e8.v */, RISCV::VLSEG8E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14457 /* vlseg8e8ff.v */, RISCV::VLSEG8E8FF_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 14470 /* vlsseg2e16.v */, RISCV::VLSSEG2E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14483 /* vlsseg2e32.v */, RISCV::VLSSEG2E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14496 /* vlsseg2e64.v */, RISCV::VLSSEG2E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14509 /* vlsseg2e8.v */, RISCV::VLSSEG2E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14521 /* vlsseg3e16.v */, RISCV::VLSSEG3E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14534 /* vlsseg3e32.v */, RISCV::VLSSEG3E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14547 /* vlsseg3e64.v */, RISCV::VLSSEG3E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14560 /* vlsseg3e8.v */, RISCV::VLSSEG3E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14572 /* vlsseg4e16.v */, RISCV::VLSSEG4E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14585 /* vlsseg4e32.v */, RISCV::VLSSEG4E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14598 /* vlsseg4e64.v */, RISCV::VLSSEG4E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14611 /* vlsseg4e8.v */, RISCV::VLSSEG4E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14623 /* vlsseg5e16.v */, RISCV::VLSSEG5E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14636 /* vlsseg5e32.v */, RISCV::VLSSEG5E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14649 /* vlsseg5e64.v */, RISCV::VLSSEG5E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14662 /* vlsseg5e8.v */, RISCV::VLSSEG5E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14674 /* vlsseg6e16.v */, RISCV::VLSSEG6E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14687 /* vlsseg6e32.v */, RISCV::VLSSEG6E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14700 /* vlsseg6e64.v */, RISCV::VLSSEG6E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14713 /* vlsseg6e8.v */, RISCV::VLSSEG6E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14725 /* vlsseg7e16.v */, RISCV::VLSSEG7E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14738 /* vlsseg7e32.v */, RISCV::VLSSEG7E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14751 /* vlsseg7e64.v */, RISCV::VLSSEG7E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14764 /* vlsseg7e8.v */, RISCV::VLSSEG7E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14776 /* vlsseg8e16.v */, RISCV::VLSSEG8E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14789 /* vlsseg8e32.v */, RISCV::VLSSEG8E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14802 /* vlsseg8e64.v */, RISCV::VLSSEG8E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14815 /* vlsseg8e8.v */, RISCV::VLSSEG8E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 14827 /* vluxei16.v */, RISCV::VLUXEI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 14838 /* vluxei32.v */, RISCV::VLUXEI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 14849 /* vluxei64.v */, RISCV::VLUXEI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_IsRV64_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 14860 /* vluxei8.v */, RISCV::VLUXEI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 14870 /* vluxseg2ei16.v */, RISCV::VLUXSEG2EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 14885 /* vluxseg2ei32.v */, RISCV::VLUXSEG2EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 14900 /* vluxseg2ei64.v */, RISCV::VLUXSEG2EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 14915 /* vluxseg2ei8.v */, RISCV::VLUXSEG2EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 14929 /* vluxseg3ei16.v */, RISCV::VLUXSEG3EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 14944 /* vluxseg3ei32.v */, RISCV::VLUXSEG3EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 14959 /* vluxseg3ei64.v */, RISCV::VLUXSEG3EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 14974 /* vluxseg3ei8.v */, RISCV::VLUXSEG3EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 14988 /* vluxseg4ei16.v */, RISCV::VLUXSEG4EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15003 /* vluxseg4ei32.v */, RISCV::VLUXSEG4EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15018 /* vluxseg4ei64.v */, RISCV::VLUXSEG4EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15033 /* vluxseg4ei8.v */, RISCV::VLUXSEG4EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15047 /* vluxseg5ei16.v */, RISCV::VLUXSEG5EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15062 /* vluxseg5ei32.v */, RISCV::VLUXSEG5EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15077 /* vluxseg5ei64.v */, RISCV::VLUXSEG5EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15092 /* vluxseg5ei8.v */, RISCV::VLUXSEG5EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15106 /* vluxseg6ei16.v */, RISCV::VLUXSEG6EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15121 /* vluxseg6ei32.v */, RISCV::VLUXSEG6EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15136 /* vluxseg6ei64.v */, RISCV::VLUXSEG6EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15151 /* vluxseg6ei8.v */, RISCV::VLUXSEG6EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15165 /* vluxseg7ei16.v */, RISCV::VLUXSEG7EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15180 /* vluxseg7ei32.v */, RISCV::VLUXSEG7EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15195 /* vluxseg7ei64.v */, RISCV::VLUXSEG7EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15210 /* vluxseg7ei8.v */, RISCV::VLUXSEG7EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15224 /* vluxseg8ei16.v */, RISCV::VLUXSEG8EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15239 /* vluxseg8ei32.v */, RISCV::VLUXSEG8EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15254 /* vluxseg8ei64.v */, RISCV::VLUXSEG8EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15269 /* vluxseg8ei8.v */, RISCV::VLUXSEG8EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15283 /* vmacc.vv */, RISCV::VMACC_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15292 /* vmacc.vx */, RISCV::VMACC_VX, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15301 /* vmadc.vi */, RISCV::VMADC_VI, Convert__Reg1_0__Reg1_1__SImm51_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5 }, },
  { 15310 /* vmadc.vim */, RISCV::VMADC_VIM, Convert__Reg1_0__Reg1_1__SImm51_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_VMV0 }, },
  { 15320 /* vmadc.vv */, RISCV::VMADC_VV, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 15329 /* vmadc.vvm */, RISCV::VMADC_VVM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_VMV0 }, },
  { 15339 /* vmadc.vx */, RISCV::VMADC_VX, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR }, },
  { 15348 /* vmadc.vxm */, RISCV::VMADC_VXM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_VMV0 }, },
  { 15358 /* vmadd.vv */, RISCV::VMADD_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15367 /* vmadd.vx */, RISCV::VMADD_VX, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15376 /* vmand.mm */, RISCV::VMAND_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 15385 /* vmandn.mm */, RISCV::VMANDN_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 15395 /* vmandnot.mm */, RISCV::VMANDN_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 15407 /* vmax.vv */, RISCV::VMAX_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15415 /* vmax.vx */, RISCV::VMAX_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 15423 /* vmaxu.vv */, RISCV::VMAXU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15432 /* vmaxu.vx */, RISCV::VMAXU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 15441 /* vmclr.m */, RISCV::VMXOR_MM, Convert__Reg1_0__Reg1_0__Reg1_0, AMFBS_HasVInstructions, { MCK_VM }, },
  { 15449 /* vmerge.vim */, RISCV::VMERGE_VIM, Convert__Reg1_0__Reg1_1__SImm51_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_VMV0 }, },
  { 15460 /* vmerge.vvm */, RISCV::VMERGE_VVM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_VMV0 }, },
  { 15471 /* vmerge.vxm */, RISCV::VMERGE_VXM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_VMV0 }, },
  { 15482 /* vmfeq.vf */, RISCV::VMFEQ_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 15491 /* vmfeq.vv */, RISCV::VMFEQ_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15500 /* vmfge.vf */, RISCV::VMFGE_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 15509 /* vmfge.vv */, RISCV::VMFLE_VV, Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15518 /* vmfgt.vf */, RISCV::VMFGT_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 15527 /* vmfgt.vv */, RISCV::VMFLT_VV, Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15536 /* vmfle.vf */, RISCV::VMFLE_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 15545 /* vmfle.vv */, RISCV::VMFLE_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15554 /* vmflt.vf */, RISCV::VMFLT_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 15563 /* vmflt.vv */, RISCV::VMFLT_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15572 /* vmfne.vf */, RISCV::VMFNE_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 15581 /* vmfne.vv */, RISCV::VMFNE_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15590 /* vmin.vv */, RISCV::VMIN_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15598 /* vmin.vx */, RISCV::VMIN_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 15606 /* vminu.vv */, RISCV::VMINU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15615 /* vminu.vx */, RISCV::VMINU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 15624 /* vmmv.m */, RISCV::VMAND_MM, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_VM }, },
  { 15631 /* vmnand.mm */, RISCV::VMNAND_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 15641 /* vmnor.mm */, RISCV::VMNOR_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 15650 /* vmnot.m */, RISCV::VMNAND_MM, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_VM }, },
  { 15658 /* vmor.mm */, RISCV::VMOR_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 15666 /* vmorn.mm */, RISCV::VMORN_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 15675 /* vmornot.mm */, RISCV::VMORN_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 15686 /* vmsbc.vv */, RISCV::VMSBC_VV, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 15695 /* vmsbc.vvm */, RISCV::VMSBC_VVM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_VMV0 }, },
  { 15705 /* vmsbc.vx */, RISCV::VMSBC_VX, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR }, },
  { 15714 /* vmsbc.vxm */, RISCV::VMSBC_VXM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_VMV0 }, },
  { 15724 /* vmsbf.m */, RISCV::VMSBF_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15732 /* vmseq.vi */, RISCV::VMSEQ_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 15741 /* vmseq.vv */, RISCV::VMSEQ_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15750 /* vmseq.vx */, RISCV::VMSEQ_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 15759 /* vmset.m */, RISCV::VMXNOR_MM, Convert__Reg1_0__Reg1_0__Reg1_0, AMFBS_HasVInstructions, { MCK_VM }, },
  { 15767 /* vmsge.vi */, RISCV::PseudoVMSGE_VI, Convert__Reg1_0__Reg1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5Plus1, MCK_RVVMaskRegOpOperand }, },
  { 15776 /* vmsge.vv */, RISCV::VMSLE_VV, Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15785 /* vmsge.vx */, RISCV::PseudoVMSGE_VX, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR }, },
  { 15785 /* vmsge.vx */, RISCV::PseudoVMSGE_VX_M, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VRNoV0, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 15785 /* vmsge.vx */, RISCV::PseudoVMSGE_VX_M_T, Convert__Reg1_0__Reg1_4__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand, MCK_VRNoV0 }, },
  { 15794 /* vmsgeu.vi */, RISCV::PseudoVMSGEU_VI, Convert__Reg1_0__Reg1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5Plus1, MCK_RVVMaskRegOpOperand }, },
  { 15804 /* vmsgeu.vv */, RISCV::VMSLEU_VV, Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15814 /* vmsgeu.vx */, RISCV::PseudoVMSGEU_VX, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR }, },
  { 15814 /* vmsgeu.vx */, RISCV::PseudoVMSGEU_VX_M, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VRNoV0, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 15814 /* vmsgeu.vx */, RISCV::PseudoVMSGEU_VX_M_T, Convert__Reg1_0__Reg1_4__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand, MCK_VRNoV0 }, },
  { 15824 /* vmsgt.vi */, RISCV::VMSGT_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 15833 /* vmsgt.vv */, RISCV::VMSLT_VV, Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15842 /* vmsgt.vx */, RISCV::VMSGT_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 15851 /* vmsgtu.vi */, RISCV::VMSGTU_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 15861 /* vmsgtu.vv */, RISCV::VMSLTU_VV, Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15871 /* vmsgtu.vx */, RISCV::VMSGTU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 15881 /* vmsif.m */, RISCV::VMSIF_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15889 /* vmsle.vi */, RISCV::VMSLE_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 15898 /* vmsle.vv */, RISCV::VMSLE_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15907 /* vmsle.vx */, RISCV::VMSLE_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 15916 /* vmsleu.vi */, RISCV::VMSLEU_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 15926 /* vmsleu.vv */, RISCV::VMSLEU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15936 /* vmsleu.vx */, RISCV::VMSLEU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 15946 /* vmslt.vi */, RISCV::PseudoVMSLT_VI, Convert__Reg1_0__Reg1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5Plus1, MCK_RVVMaskRegOpOperand }, },
  { 15955 /* vmslt.vv */, RISCV::VMSLT_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15964 /* vmslt.vx */, RISCV::VMSLT_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 15973 /* vmsltu.vi */, RISCV::PseudoVMSLTU_VI, Convert__Reg1_0__Reg1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5Plus1, MCK_RVVMaskRegOpOperand }, },
  { 15983 /* vmsltu.vv */, RISCV::VMSLTU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 15993 /* vmsltu.vx */, RISCV::VMSLTU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16003 /* vmsne.vi */, RISCV::VMSNE_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 16012 /* vmsne.vv */, RISCV::VMSNE_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16021 /* vmsne.vx */, RISCV::VMSNE_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16030 /* vmsof.m */, RISCV::VMSOF_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16038 /* vmul.vv */, RISCV::VMUL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16046 /* vmul.vx */, RISCV::VMUL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16054 /* vmulh.vv */, RISCV::VMULH_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16063 /* vmulh.vx */, RISCV::VMULH_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16072 /* vmulhsu.vv */, RISCV::VMULHSU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16083 /* vmulhsu.vx */, RISCV::VMULHSU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16094 /* vmulhu.vv */, RISCV::VMULHU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16104 /* vmulhu.vx */, RISCV::VMULHU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16114 /* vmv.s.x */, RISCV::VMV_S_X, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR }, },
  { 16122 /* vmv.v.i */, RISCV::VMV_V_I, Convert__Reg1_0__SImm51_1, AMFBS_HasVInstructions, { MCK_VM, MCK_SImm5 }, },
  { 16130 /* vmv.v.v */, RISCV::VMV_V_V, Convert__Reg1_0__Reg1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_VM }, },
  { 16138 /* vmv.v.x */, RISCV::VMV_V_X, Convert__Reg1_0__Reg1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR }, },
  { 16146 /* vmv.x.s */, RISCV::VMV_X_S, Convert__Reg1_0__Reg1_1, AMFBS_HasVInstructions, { MCK_GPR, MCK_VM }, },
  { 16154 /* vmv1r.v */, RISCV::VMV1R_V, Convert__Reg1_0__Reg1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_VM }, },
  { 16162 /* vmv2r.v */, RISCV::VMV2R_V, Convert__Reg1_0__Reg1_1, AMFBS_HasVInstructions, { MCK_VRM2, MCK_VRM2 }, },
  { 16170 /* vmv4r.v */, RISCV::VMV4R_V, Convert__Reg1_0__Reg1_1, AMFBS_HasVInstructions, { MCK_VRM4, MCK_VRM4 }, },
  { 16178 /* vmv8r.v */, RISCV::VMV8R_V, Convert__Reg1_0__Reg1_1, AMFBS_HasVInstructions, { MCK_VRM8, MCK_VRM8 }, },
  { 16186 /* vmxnor.mm */, RISCV::VMXNOR_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 16196 /* vmxor.mm */, RISCV::VMXOR_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 16205 /* vnclip.wi */, RISCV::VNCLIP_WI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 16215 /* vnclip.wv */, RISCV::VNCLIP_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16225 /* vnclip.wx */, RISCV::VNCLIP_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16235 /* vnclipu.wi */, RISCV::VNCLIPU_WI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 16246 /* vnclipu.wv */, RISCV::VNCLIPU_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16257 /* vnclipu.wx */, RISCV::VNCLIPU_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16268 /* vncvt.x.x.w */, RISCV::VNSRL_WX, Convert__Reg1_0__Reg1_1__regX0__reg0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM }, },
  { 16268 /* vncvt.x.x.w */, RISCV::VNSRL_WX, Convert__Reg1_0__Reg1_1__regX0__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16280 /* vneg.v */, RISCV::VRSUB_VX, Convert__Reg1_0__Reg1_1__regX0__reg0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM }, },
  { 16280 /* vneg.v */, RISCV::VRSUB_VX, Convert__Reg1_0__Reg1_1__regX0__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16287 /* vnmsac.vv */, RISCV::VNMSAC_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16297 /* vnmsac.vx */, RISCV::VNMSAC_VX, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16307 /* vnmsub.vv */, RISCV::VNMSUB_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16317 /* vnmsub.vx */, RISCV::VNMSUB_VX, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16327 /* vnot.v */, RISCV::VXOR_VI, Convert__Reg1_0__Reg1_1__imm_95__MINUS_1__reg0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM }, },
  { 16327 /* vnot.v */, RISCV::VXOR_VI, Convert__Reg1_0__Reg1_1__imm_95__MINUS_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16334 /* vnsra.wi */, RISCV::VNSRA_WI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 16343 /* vnsra.wv */, RISCV::VNSRA_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16352 /* vnsra.wx */, RISCV::VNSRA_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16361 /* vnsrl.wi */, RISCV::VNSRL_WI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 16370 /* vnsrl.wv */, RISCV::VNSRL_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16379 /* vnsrl.wx */, RISCV::VNSRL_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16388 /* vor.vi */, RISCV::VOR_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 16395 /* vor.vv */, RISCV::VOR_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16402 /* vor.vx */, RISCV::VOR_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16409 /* vpopc.m */, RISCV::VCPOP_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16417 /* vredand.vs */, RISCV::VREDAND_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16428 /* vredmax.vs */, RISCV::VREDMAX_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16439 /* vredmaxu.vs */, RISCV::VREDMAXU_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16451 /* vredmin.vs */, RISCV::VREDMIN_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16462 /* vredminu.vs */, RISCV::VREDMINU_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16474 /* vredor.vs */, RISCV::VREDOR_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16484 /* vredsum.vs */, RISCV::VREDSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16495 /* vredxor.vs */, RISCV::VREDXOR_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16506 /* vrem.vv */, RISCV::VREM_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16514 /* vrem.vx */, RISCV::VREM_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16522 /* vremu.vv */, RISCV::VREMU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16531 /* vremu.vx */, RISCV::VREMU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16540 /* vrev8.v */, RISCV::VREV8_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtZvkb, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16548 /* vrgather.vi */, RISCV::VRGATHER_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 16560 /* vrgather.vv */, RISCV::VRGATHER_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16572 /* vrgather.vx */, RISCV::VRGATHER_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16584 /* vrgatherei16.vv */, RISCV::VRGATHEREI16_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16600 /* vrol.vv */, RISCV::VROL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtZvkb, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16608 /* vrol.vx */, RISCV::VROL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtZvkb, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16616 /* vror.vi */, RISCV::VROR_VI, Convert__Reg1_0__Reg1_1__UImm61_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtZvkb, { MCK_VM, MCK_VM, MCK_UImm6, MCK_RVVMaskRegOpOperand }, },
  { 16624 /* vror.vv */, RISCV::VROR_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtZvkb, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16632 /* vror.vx */, RISCV::VROR_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtZvkb, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16640 /* vrsub.vi */, RISCV::VRSUB_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 16649 /* vrsub.vx */, RISCV::VRSUB_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16658 /* vs1r.v */, RISCV::VS1R_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand }, },
  { 16665 /* vs2r.v */, RISCV::VS2R_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructions, { MCK_VRM2, MCK_ZeroOffsetMemOpOperand }, },
  { 16672 /* vs4r.v */, RISCV::VS4R_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructions, { MCK_VRM4, MCK_ZeroOffsetMemOpOperand }, },
  { 16679 /* vs8r.v */, RISCV::VS8R_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructions, { MCK_VRM8, MCK_ZeroOffsetMemOpOperand }, },
  { 16686 /* vsadd.vi */, RISCV::VSADD_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 16695 /* vsadd.vv */, RISCV::VSADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16704 /* vsadd.vx */, RISCV::VSADD_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16713 /* vsaddu.vi */, RISCV::VSADDU_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 16723 /* vsaddu.vv */, RISCV::VSADDU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16733 /* vsaddu.vx */, RISCV::VSADDU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16743 /* vsbc.vvm */, RISCV::VSBC_VVM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_VMV0 }, },
  { 16752 /* vsbc.vxm */, RISCV::VSBC_VXM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_VMV0 }, },
  { 16761 /* vse1.v */, RISCV::VSM_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 16768 /* vse16.v */, RISCV::VSE16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 16776 /* vse32.v */, RISCV::VSE32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 16784 /* vse64.v */, RISCV::VSE64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 16792 /* vse8.v */, RISCV::VSE8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 16799 /* vsetivli */, RISCV::VSETIVLI, Convert__Reg1_0__UImm51_1__VTypeI101_2, AMFBS_HasVInstructions, { MCK_GPR, MCK_UImm5, MCK_VTypeI10 }, },
  { 16808 /* vsetvl */, RISCV::VSETVL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 16815 /* vsetvli */, RISCV::VSETVLI, Convert__Reg1_0__Reg1_1__VTypeI111_2, AMFBS_HasVInstructions, { MCK_GPR, MCK_GPR, MCK_VTypeI11 }, },
  { 16823 /* vsext.vf2 */, RISCV::VSEXT_VF2, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16833 /* vsext.vf4 */, RISCV::VSEXT_VF4, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16843 /* vsext.vf8 */, RISCV::VSEXT_VF8, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16853 /* vsha2ch.vv */, RISCV::VSHA2CH_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasStdExtZvknhaOrZvknhb, { MCK_VM, MCK_VM, MCK_VM }, },
  { 16864 /* vsha2cl.vv */, RISCV::VSHA2CL_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasStdExtZvknhaOrZvknhb, { MCK_VM, MCK_VM, MCK_VM }, },
  { 16875 /* vsha2ms.vv */, RISCV::VSHA2MS_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2, AMFBS_HasStdExtZvknhaOrZvknhb, { MCK_VM, MCK_VM, MCK_VM }, },
  { 16886 /* vslide1down.vx */, RISCV::VSLIDE1DOWN_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16901 /* vslide1up.vx */, RISCV::VSLIDE1UP_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16914 /* vslidedown.vi */, RISCV::VSLIDEDOWN_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 16928 /* vslidedown.vx */, RISCV::VSLIDEDOWN_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16942 /* vslideup.vi */, RISCV::VSLIDEUP_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 16954 /* vslideup.vx */, RISCV::VSLIDEUP_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16966 /* vsll.vi */, RISCV::VSLL_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 16974 /* vsll.vv */, RISCV::VSLL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 16982 /* vsll.vx */, RISCV::VSLL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 16990 /* vsm.v */, RISCV::VSM_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand }, },
  { 16996 /* vsm3c.vi */, RISCV::VSM3C_VI, Convert__Reg1_0__Tie0_1_1__Reg1_1__UImm51_2, AMFBS_HasStdExtZvksh, { MCK_VM, MCK_VM, MCK_UImm5 }, },
  { 17005 /* vsm3me.vv */, RISCV::VSM3ME_VV, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZvksh, { MCK_VM, MCK_VM, MCK_VM }, },
  { 17015 /* vsm4k.vi */, RISCV::VSM4K_VI, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZvksed, { MCK_VM, MCK_VM, MCK_UImm5 }, },
  { 17024 /* vsm4r.vs */, RISCV::VSM4R_VS, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtZvksed, { MCK_VM, MCK_VM }, },
  { 17033 /* vsm4r.vv */, RISCV::VSM4R_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtZvksed, { MCK_VM, MCK_VM }, },
  { 17042 /* vsmul.vv */, RISCV::VSMUL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17051 /* vsmul.vx */, RISCV::VSMUL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 17060 /* vsoxei16.v */, RISCV::VSOXEI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17071 /* vsoxei32.v */, RISCV::VSOXEI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17082 /* vsoxei64.v */, RISCV::VSOXEI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_IsRV64_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17093 /* vsoxei8.v */, RISCV::VSOXEI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17103 /* vsoxseg2ei16.v */, RISCV::VSOXSEG2EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17118 /* vsoxseg2ei32.v */, RISCV::VSOXSEG2EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17133 /* vsoxseg2ei64.v */, RISCV::VSOXSEG2EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17148 /* vsoxseg2ei8.v */, RISCV::VSOXSEG2EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17162 /* vsoxseg3ei16.v */, RISCV::VSOXSEG3EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17177 /* vsoxseg3ei32.v */, RISCV::VSOXSEG3EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17192 /* vsoxseg3ei64.v */, RISCV::VSOXSEG3EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17207 /* vsoxseg3ei8.v */, RISCV::VSOXSEG3EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17221 /* vsoxseg4ei16.v */, RISCV::VSOXSEG4EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17236 /* vsoxseg4ei32.v */, RISCV::VSOXSEG4EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17251 /* vsoxseg4ei64.v */, RISCV::VSOXSEG4EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17266 /* vsoxseg4ei8.v */, RISCV::VSOXSEG4EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17280 /* vsoxseg5ei16.v */, RISCV::VSOXSEG5EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17295 /* vsoxseg5ei32.v */, RISCV::VSOXSEG5EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17310 /* vsoxseg5ei64.v */, RISCV::VSOXSEG5EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17325 /* vsoxseg5ei8.v */, RISCV::VSOXSEG5EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17339 /* vsoxseg6ei16.v */, RISCV::VSOXSEG6EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17354 /* vsoxseg6ei32.v */, RISCV::VSOXSEG6EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17369 /* vsoxseg6ei64.v */, RISCV::VSOXSEG6EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17384 /* vsoxseg6ei8.v */, RISCV::VSOXSEG6EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17398 /* vsoxseg7ei16.v */, RISCV::VSOXSEG7EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17413 /* vsoxseg7ei32.v */, RISCV::VSOXSEG7EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17428 /* vsoxseg7ei64.v */, RISCV::VSOXSEG7EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17443 /* vsoxseg7ei8.v */, RISCV::VSOXSEG7EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17457 /* vsoxseg8ei16.v */, RISCV::VSOXSEG8EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17472 /* vsoxseg8ei32.v */, RISCV::VSOXSEG8EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17487 /* vsoxseg8ei64.v */, RISCV::VSOXSEG8EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17502 /* vsoxseg8ei8.v */, RISCV::VSOXSEG8EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17516 /* vsra.vi */, RISCV::VSRA_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 17524 /* vsra.vv */, RISCV::VSRA_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17532 /* vsra.vx */, RISCV::VSRA_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 17540 /* vsrl.vi */, RISCV::VSRL_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 17548 /* vsrl.vv */, RISCV::VSRL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17556 /* vsrl.vx */, RISCV::VSRL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 17564 /* vsse16.v */, RISCV::VSSE16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 17573 /* vsse32.v */, RISCV::VSSE32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 17582 /* vsse64.v */, RISCV::VSSE64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 17591 /* vsse8.v */, RISCV::VSSE8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 17599 /* vsseg2e16.v */, RISCV::VSSEG2E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17611 /* vsseg2e32.v */, RISCV::VSSEG2E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17623 /* vsseg2e64.v */, RISCV::VSSEG2E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17635 /* vsseg2e8.v */, RISCV::VSSEG2E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17646 /* vsseg3e16.v */, RISCV::VSSEG3E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17658 /* vsseg3e32.v */, RISCV::VSSEG3E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17670 /* vsseg3e64.v */, RISCV::VSSEG3E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17682 /* vsseg3e8.v */, RISCV::VSSEG3E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17693 /* vsseg4e16.v */, RISCV::VSSEG4E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17705 /* vsseg4e32.v */, RISCV::VSSEG4E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17717 /* vsseg4e64.v */, RISCV::VSSEG4E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17729 /* vsseg4e8.v */, RISCV::VSSEG4E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17740 /* vsseg5e16.v */, RISCV::VSSEG5E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17752 /* vsseg5e32.v */, RISCV::VSSEG5E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17764 /* vsseg5e64.v */, RISCV::VSSEG5E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17776 /* vsseg5e8.v */, RISCV::VSSEG5E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17787 /* vsseg6e16.v */, RISCV::VSSEG6E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17799 /* vsseg6e32.v */, RISCV::VSSEG6E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17811 /* vsseg6e64.v */, RISCV::VSSEG6E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17823 /* vsseg6e8.v */, RISCV::VSSEG6E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17834 /* vsseg7e16.v */, RISCV::VSSEG7E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17846 /* vsseg7e32.v */, RISCV::VSSEG7E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17858 /* vsseg7e64.v */, RISCV::VSSEG7E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17870 /* vsseg7e8.v */, RISCV::VSSEG7E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17881 /* vsseg8e16.v */, RISCV::VSSEG8E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17893 /* vsseg8e32.v */, RISCV::VSSEG8E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17905 /* vsseg8e64.v */, RISCV::VSSEG8E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17917 /* vsseg8e8.v */, RISCV::VSSEG8E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 17928 /* vssra.vi */, RISCV::VSSRA_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 17937 /* vssra.vv */, RISCV::VSSRA_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17946 /* vssra.vx */, RISCV::VSSRA_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 17955 /* vssrl.vi */, RISCV::VSSRL_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 17964 /* vssrl.vv */, RISCV::VSSRL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 17973 /* vssrl.vx */, RISCV::VSSRL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 17982 /* vssseg2e16.v */, RISCV::VSSSEG2E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 17995 /* vssseg2e32.v */, RISCV::VSSSEG2E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18008 /* vssseg2e64.v */, RISCV::VSSSEG2E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18021 /* vssseg2e8.v */, RISCV::VSSSEG2E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18033 /* vssseg3e16.v */, RISCV::VSSSEG3E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18046 /* vssseg3e32.v */, RISCV::VSSSEG3E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18059 /* vssseg3e64.v */, RISCV::VSSSEG3E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18072 /* vssseg3e8.v */, RISCV::VSSSEG3E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18084 /* vssseg4e16.v */, RISCV::VSSSEG4E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18097 /* vssseg4e32.v */, RISCV::VSSSEG4E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18110 /* vssseg4e64.v */, RISCV::VSSSEG4E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18123 /* vssseg4e8.v */, RISCV::VSSSEG4E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18135 /* vssseg5e16.v */, RISCV::VSSSEG5E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18148 /* vssseg5e32.v */, RISCV::VSSSEG5E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18161 /* vssseg5e64.v */, RISCV::VSSSEG5E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18174 /* vssseg5e8.v */, RISCV::VSSSEG5E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18186 /* vssseg6e16.v */, RISCV::VSSSEG6E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18199 /* vssseg6e32.v */, RISCV::VSSSEG6E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18212 /* vssseg6e64.v */, RISCV::VSSSEG6E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18225 /* vssseg6e8.v */, RISCV::VSSSEG6E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18237 /* vssseg7e16.v */, RISCV::VSSSEG7E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18250 /* vssseg7e32.v */, RISCV::VSSSEG7E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18263 /* vssseg7e64.v */, RISCV::VSSSEG7E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18276 /* vssseg7e8.v */, RISCV::VSSSEG7E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18288 /* vssseg8e16.v */, RISCV::VSSSEG8E16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18301 /* vssseg8e32.v */, RISCV::VSSSEG8E32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18314 /* vssseg8e64.v */, RISCV::VSSSEG8E64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18327 /* vssseg8e8.v */, RISCV::VSSSEG8E8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18339 /* vssub.vv */, RISCV::VSSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18348 /* vssub.vx */, RISCV::VSSUB_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18357 /* vssubu.vv */, RISCV::VSSUBU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18367 /* vssubu.vx */, RISCV::VSSUBU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18377 /* vsub.vv */, RISCV::VSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18385 /* vsub.vx */, RISCV::VSUB_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18393 /* vsuxei16.v */, RISCV::VSUXEI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18404 /* vsuxei32.v */, RISCV::VSUXEI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18415 /* vsuxei64.v */, RISCV::VSUXEI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_IsRV64_HasVInstructionsI64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18426 /* vsuxei8.v */, RISCV::VSUXEI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18436 /* vsuxseg2ei16.v */, RISCV::VSUXSEG2EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18451 /* vsuxseg2ei32.v */, RISCV::VSUXSEG2EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18466 /* vsuxseg2ei64.v */, RISCV::VSUXSEG2EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18481 /* vsuxseg2ei8.v */, RISCV::VSUXSEG2EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18495 /* vsuxseg3ei16.v */, RISCV::VSUXSEG3EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18510 /* vsuxseg3ei32.v */, RISCV::VSUXSEG3EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18525 /* vsuxseg3ei64.v */, RISCV::VSUXSEG3EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18540 /* vsuxseg3ei8.v */, RISCV::VSUXSEG3EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18554 /* vsuxseg4ei16.v */, RISCV::VSUXSEG4EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18569 /* vsuxseg4ei32.v */, RISCV::VSUXSEG4EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18584 /* vsuxseg4ei64.v */, RISCV::VSUXSEG4EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18599 /* vsuxseg4ei8.v */, RISCV::VSUXSEG4EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18613 /* vsuxseg5ei16.v */, RISCV::VSUXSEG5EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18628 /* vsuxseg5ei32.v */, RISCV::VSUXSEG5EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18643 /* vsuxseg5ei64.v */, RISCV::VSUXSEG5EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18658 /* vsuxseg5ei8.v */, RISCV::VSUXSEG5EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18672 /* vsuxseg6ei16.v */, RISCV::VSUXSEG6EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18687 /* vsuxseg6ei32.v */, RISCV::VSUXSEG6EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18702 /* vsuxseg6ei64.v */, RISCV::VSUXSEG6EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18717 /* vsuxseg6ei8.v */, RISCV::VSUXSEG6EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18731 /* vsuxseg7ei16.v */, RISCV::VSUXSEG7EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18746 /* vsuxseg7ei32.v */, RISCV::VSUXSEG7EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18761 /* vsuxseg7ei64.v */, RISCV::VSUXSEG7EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18776 /* vsuxseg7ei8.v */, RISCV::VSUXSEG7EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18790 /* vsuxseg8ei16.v */, RISCV::VSUXSEG8EI16_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18805 /* vsuxseg8ei32.v */, RISCV::VSUXSEG8EI32_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18820 /* vsuxseg8ei64.v */, RISCV::VSUXSEG8EI64_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18835 /* vsuxseg8ei8.v */, RISCV::VSUXSEG8EI8_V, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_ZeroOffsetMemOpOperand, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18849 /* vt.maskc */, RISCV::VT_MASKC, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64_HasVendorXVentanaCondOps, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 18858 /* vt.maskcn */, RISCV::VT_MASKCN, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64_HasVendorXVentanaCondOps, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 18868 /* vwadd.vv */, RISCV::VWADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18877 /* vwadd.vx */, RISCV::VWADD_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18886 /* vwadd.wv */, RISCV::VWADD_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18895 /* vwadd.wx */, RISCV::VWADD_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18904 /* vwaddu.vv */, RISCV::VWADDU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18914 /* vwaddu.vx */, RISCV::VWADDU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18924 /* vwaddu.wv */, RISCV::VWADDU_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18934 /* vwaddu.wx */, RISCV::VWADDU_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 18944 /* vwcvt.x.x.v */, RISCV::VWADD_VX, Convert__Reg1_0__Reg1_1__regX0__reg0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM }, },
  { 18944 /* vwcvt.x.x.v */, RISCV::VWADD_VX, Convert__Reg1_0__Reg1_1__regX0__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18956 /* vwcvtu.x.x.v */, RISCV::VWADDU_VX, Convert__Reg1_0__Reg1_1__regX0__reg0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM }, },
  { 18956 /* vwcvtu.x.x.v */, RISCV::VWADDU_VX, Convert__Reg1_0__Reg1_1__regX0__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18969 /* vwmacc.vv */, RISCV::VWMACC_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18979 /* vwmacc.vx */, RISCV::VWMACC_VX, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 18989 /* vwmaccsu.vv */, RISCV::VWMACCSU_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 19001 /* vwmaccsu.vx */, RISCV::VWMACCSU_VX, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 19013 /* vwmaccu.vv */, RISCV::VWMACCU_VV, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 19024 /* vwmaccu.vx */, RISCV::VWMACCU_VX, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 19035 /* vwmaccus.vx */, RISCV::VWMACCUS_VX, Convert__Reg1_0__Tie0_1_1__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 19047 /* vwmul.vv */, RISCV::VWMUL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 19056 /* vwmul.vx */, RISCV::VWMUL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 19065 /* vwmulsu.vv */, RISCV::VWMULSU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 19076 /* vwmulsu.vx */, RISCV::VWMULSU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 19087 /* vwmulu.vv */, RISCV::VWMULU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 19097 /* vwmulu.vx */, RISCV::VWMULU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 19107 /* vwredsum.vs */, RISCV::VWREDSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 19119 /* vwredsumu.vs */, RISCV::VWREDSUMU_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 19132 /* vwsll.vi */, RISCV::VWSLL_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtZvbb, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 19141 /* vwsll.vv */, RISCV::VWSLL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtZvbb, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 19150 /* vwsll.vx */, RISCV::VWSLL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtZvbb, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 19159 /* vwsub.vv */, RISCV::VWSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 19168 /* vwsub.vx */, RISCV::VWSUB_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 19177 /* vwsub.wv */, RISCV::VWSUB_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 19186 /* vwsub.wx */, RISCV::VWSUB_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 19195 /* vwsubu.vv */, RISCV::VWSUBU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 19205 /* vwsubu.vx */, RISCV::VWSUBU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 19215 /* vwsubu.wv */, RISCV::VWSUBU_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 19225 /* vwsubu.wx */, RISCV::VWSUBU_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 19235 /* vxor.vi */, RISCV::VXOR_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 19243 /* vxor.vv */, RISCV::VXOR_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 19251 /* vxor.vx */, RISCV::VXOR_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 19259 /* vzext.vf2 */, RISCV::VZEXT_VF2, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 19269 /* vzext.vf4 */, RISCV::VZEXT_VF4, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 19279 /* vzext.vf8 */, RISCV::VZEXT_VF8, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 19289 /* wfi */, RISCV::WFI, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 19293 /* wrs.nto */, RISCV::WRS_NTO, Convert_NoOperands, AMFBS_HasStdExtZawrs, {  }, },
  { 19301 /* wrs.sto */, RISCV::WRS_STO, Convert_NoOperands, AMFBS_HasStdExtZawrs, {  }, },
  { 19309 /* xnor */, RISCV::XNOR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbkb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 19314 /* xor */, RISCV::XOR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 19314 /* xor */, RISCV::XORI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 19318 /* xori */, RISCV::XORI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 19323 /* xperm4 */, RISCV::XPERM4, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbkx, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 19330 /* xperm8 */, RISCV::XPERM8, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbkx, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 19337 /* zext.b */, RISCV::ANDI, Convert__Reg1_0__Reg1_1__imm_95_255, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 19344 /* zext.h */, RISCV::PACK, Convert__Reg1_0__Reg1_1__regX0, AMFBS_HasStdExtZbkb_NoStdExtZbb_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 19344 /* zext.h */, RISCV::PACKW, Convert__Reg1_0__Reg1_1__regX0, AMFBS_HasStdExtZbkb_NoStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 19344 /* zext.h */, RISCV::ZEXT_H_RV32, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 19344 /* zext.h */, RISCV::ZEXT_H_RV64, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 19344 /* zext.h */, RISCV::PseudoZEXT_H, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 19351 /* zext.w */, RISCV::ADD_UW, Convert__Reg1_0__Reg1_1__regX0, AMFBS_HasStdExtZba_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 19351 /* zext.w */, RISCV::PseudoZEXT_W, Convert__Reg1_0__Reg1_1, AMFBS_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 19358 /* zip */, RISCV::ZIP_RV32, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbkb_IsRV32, { MCK_GPR, MCK_GPR }, },
};

#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"

unsigned RISCVAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst,
                     uint64_t &ErrorInfo,
                     FeatureBitset &MissingFeatures,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 8) {
    ErrorInfo = 8;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  const FeatureBitset &AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((RISCVOperand &)*Operands[0]).getToken();

  // Process all MnemonicAliases to remap the mnemonic.
  applyMnemonicAliases(Mnemonic, AvailableFeatures, VariantID);

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  MissingFeatures.set();
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0ULL;
  SmallBitVector OptionalOperandsMask(7);
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  auto MnemonicRange = std::equal_range(Start, End, Mnemonic, LessOpcode());

  DEBUG_WITH_TYPE("asm-matcher", dbgs() << "AsmMatcher: found " <<
  std::distance(MnemonicRange.first, MnemonicRange.second) <<
  " encodings with mnemonic '" << Mnemonic << "'\n");

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    const FeatureBitset &RequiredFeatures = FeatureBitsets[it->RequiredFeaturesIdx];
    bool HasRequiredFeatures =
      (AvailableFeatures & RequiredFeatures) == RequiredFeatures;
    DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Trying to match opcode "
                                          << MII.getName(it->Opcode) << "\n");
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    bool OperandsValid = true;
    OptionalOperandsMask.reset(0, 7);
    for (unsigned FormalIdx = 0, ActualIdx = 1; FormalIdx != 7; ++FormalIdx) {
      auto Formal = static_cast<MatchClassKind>(it->Classes[FormalIdx]);
      DEBUG_WITH_TYPE("asm-matcher",
                      dbgs() << "  Matching formal operand class " << getMatchClassName(Formal)
                             << " against actual operand at index " << ActualIdx);
      if (ActualIdx < Operands.size())
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << " (";
                        Operands[ActualIdx]->print(dbgs()); dbgs() << "): ");
      else
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << ": ");
      if (ActualIdx >= Operands.size()) {
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << "actual operand index out of range\n");
        if (Formal == InvalidMatchClass) {
          OptionalOperandsMask.set(FormalIdx, 7);
          break;
        }
        if (isSubclass(Formal, OptionalMatchClass)) {
          OptionalOperandsMask.set(FormalIdx);
          continue;
        }
        OperandsValid = false;
        ErrorInfo = ActualIdx;
        break;
      }
      MCParsedAsmOperand &Actual = *Operands[ActualIdx];
      unsigned Diag = validateOperandClass(Actual, Formal);
      if (Diag == Match_Success) {
        DEBUG_WITH_TYPE("asm-matcher",
                        dbgs() << "match success using generic matcher\n");
        ++ActualIdx;
        continue;
      }
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag != Match_Success) {
        unsigned TargetDiag = validateTargetOperandClass(Actual, Formal);
        if (TargetDiag == Match_Success) {
          DEBUG_WITH_TYPE("asm-matcher",
                          dbgs() << "match success using target matcher\n");
          ++ActualIdx;
          continue;
        }
        // If the target matcher returned a specific error code use
        // that, else use the one from the generic matcher.
        if (TargetDiag != Match_InvalidOperand && HasRequiredFeatures)
          Diag = TargetDiag;
      }
      // If current formal operand wasn't matched and it is optional
      // then try to match next formal operand
      if (Diag == Match_InvalidOperand && isSubclass(Formal, OptionalMatchClass)) {
        OptionalOperandsMask.set(FormalIdx);
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << "ignoring optional operand\n");
        continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= ActualIdx)) {
        if (HasRequiredFeatures && (ErrorInfo != ActualIdx || Diag != Match_InvalidOperand))
          RetCode = Diag;
        ErrorInfo = ActualIdx;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) {
      DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Opcode result: multiple "
                                               "operand mismatches, ignoring "
                                               "this opcode\n");
      continue;
    }
    if (!HasRequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      FeatureBitset NewMissingFeatures = RequiredFeatures & ~AvailableFeatures;
      DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Missing target features:";
                      for (unsigned I = 0, E = NewMissingFeatures.size(); I != E; ++I)
                        if (NewMissingFeatures[I])
                          dbgs() << ' ' << I;
                      dbgs() << "\n");
      if (NewMissingFeatures.count() <=
          MissingFeatures.count())
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    Inst.clear();

    Inst.setOpcode(it->Opcode);
    // We have a potential match but have not rendered the operands.
    // Check the target predicate to handle any context sensitive
    // constraints.
    // For example, Ties that are referenced multiple times must be
    // checked here to ensure the input is the same for each match
    // constraints. If we leave it any later the ties will have been
    // canonicalized
    unsigned MatchResult;
    if ((MatchResult = checkEarlyTargetMatchPredicate(Inst, Operands)) != Match_Success) {
      Inst.clear();
      DEBUG_WITH_TYPE(
          "asm-matcher",
          dbgs() << "Early target match predicate failed with diag code "
                 << MatchResult << "\n");
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    unsigned DefaultsOffset[8] = { 0 };
    assert(OptionalOperandsMask.size() == 7);
    for (unsigned i = 0, NumDefaults = 0; i < 7; ++i) {
      DefaultsOffset[i + 1] = NumDefaults;
      NumDefaults += (OptionalOperandsMask[i] ? 1 : 0);
    }

    if (matchingInlineAsm) {
      convertToMapAndConstraints(it->ConvertFn, Operands);
      if (!checkAsmTiedOperandConstraints(*this, it->ConvertFn, Operands,
                                          DefaultsOffset, ErrorInfo))
        return Match_InvalidTiedOperand;

      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands,
                    OptionalOperandsMask, DefaultsOffset);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      DEBUG_WITH_TYPE("asm-matcher",
                      dbgs() << "Target match predicate failed with diag code "
                             << MatchResult << "\n");
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    if (!checkAsmTiedOperandConstraints(*this, it->ConvertFn, Operands,
                                         DefaultsOffset, ErrorInfo))
      return Match_InvalidTiedOperand;

    DEBUG_WITH_TYPE(
        "asm-matcher",
        dbgs() << "Opcode result: complete match, selecting this opcode\n");
    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  ErrorInfo = 0;
  return Match_MissingFeature;
}

namespace {
  struct OperandMatchEntry {
    uint16_t Mnemonic;
    uint8_t OperandMask;
    uint8_t Class;
    uint8_t RequiredFeaturesIdx;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace

static const OperandMatchEntry OperandMatchTable[1536] = {
  /* Operand List Mnemonic, Mask, Operand Class, Features */
  { 0 /* .insn_b */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 8 /* .insn_ca */, 1 /* 0 */, MCK_InsnCDirectiveOpcode, AMFBS_HasStdExtCOrZca },
  { 17 /* .insn_cb */, 1 /* 0 */, MCK_InsnCDirectiveOpcode, AMFBS_HasStdExtCOrZca },
  { 26 /* .insn_ci */, 1 /* 0 */, MCK_InsnCDirectiveOpcode, AMFBS_HasStdExtCOrZca },
  { 35 /* .insn_ciw */, 1 /* 0 */, MCK_InsnCDirectiveOpcode, AMFBS_HasStdExtCOrZca },
  { 45 /* .insn_cj */, 1 /* 0 */, MCK_InsnCDirectiveOpcode, AMFBS_HasStdExtCOrZca },
  { 54 /* .insn_cl */, 1 /* 0 */, MCK_InsnCDirectiveOpcode, AMFBS_HasStdExtCOrZca },
  { 54 /* .insn_cl */, 1 /* 0 */, MCK_InsnCDirectiveOpcode, AMFBS_HasStdExtCOrZca },
  { 63 /* .insn_cr */, 1 /* 0 */, MCK_InsnCDirectiveOpcode, AMFBS_HasStdExtCOrZca },
  { 72 /* .insn_cs */, 1 /* 0 */, MCK_InsnCDirectiveOpcode, AMFBS_HasStdExtCOrZca },
  { 72 /* .insn_cs */, 1 /* 0 */, MCK_InsnCDirectiveOpcode, AMFBS_HasStdExtCOrZca },
  { 81 /* .insn_css */, 1 /* 0 */, MCK_InsnCDirectiveOpcode, AMFBS_HasStdExtCOrZca },
  { 91 /* .insn_i */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 91 /* .insn_i */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 91 /* .insn_i */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 99 /* .insn_j */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 99 /* .insn_j */, 4 /* 2 */, MCK_SImm21Lsb0JAL, AMFBS_None },
  { 107 /* .insn_r */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 107 /* .insn_r */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 115 /* .insn_r4 */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 124 /* .insn_s */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 124 /* .insn_s */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 132 /* .insn_sb */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 141 /* .insn_u */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 149 /* .insn_uj */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 149 /* .insn_uj */, 4 /* 2 */, MCK_SImm21Lsb0JAL, AMFBS_None },
  { 158 /* add */, 8 /* 3 */, MCK_TPRelAddSymbol, AMFBS_None },
  { 284 /* amoadd.b */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 293 /* amoadd.b.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 305 /* amoadd.b.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 319 /* amoadd.b.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 331 /* amoadd.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 340 /* amoadd.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 352 /* amoadd.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 366 /* amoadd.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 378 /* amoadd.h */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 387 /* amoadd.h.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 399 /* amoadd.h.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 413 /* amoadd.h.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 425 /* amoadd.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 434 /* amoadd.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 446 /* amoadd.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 460 /* amoadd.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 472 /* amoand.b */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 481 /* amoand.b.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 493 /* amoand.b.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 507 /* amoand.b.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 519 /* amoand.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 528 /* amoand.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 540 /* amoand.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 554 /* amoand.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 566 /* amoand.h */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 575 /* amoand.h.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 587 /* amoand.h.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 601 /* amoand.h.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 613 /* amoand.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 622 /* amoand.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 634 /* amoand.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 648 /* amoand.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 660 /* amocas.b */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha_HasStdExtZacas },
  { 669 /* amocas.b.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha_HasStdExtZacas },
  { 681 /* amocas.b.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha_HasStdExtZacas },
  { 695 /* amocas.b.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha_HasStdExtZacas },
  { 707 /* amocas.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZacas_IsRV64 },
  { 707 /* amocas.d */, 3 /* 0, 1 */, MCK_GPRPairRV32, AMFBS_HasStdExtZacas_IsRV32 },
  { 707 /* amocas.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZacas_IsRV32 },
  { 716 /* amocas.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZacas_IsRV64 },
  { 716 /* amocas.d.aq */, 3 /* 0, 1 */, MCK_GPRPairRV32, AMFBS_HasStdExtZacas_IsRV32 },
  { 716 /* amocas.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZacas_IsRV32 },
  { 728 /* amocas.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZacas_IsRV64 },
  { 728 /* amocas.d.aqrl */, 3 /* 0, 1 */, MCK_GPRPairRV32, AMFBS_HasStdExtZacas_IsRV32 },
  { 728 /* amocas.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZacas_IsRV32 },
  { 742 /* amocas.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZacas_IsRV64 },
  { 742 /* amocas.d.rl */, 3 /* 0, 1 */, MCK_GPRPairRV32, AMFBS_HasStdExtZacas_IsRV32 },
  { 742 /* amocas.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZacas_IsRV32 },
  { 754 /* amocas.h */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha_HasStdExtZacas },
  { 763 /* amocas.h.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha_HasStdExtZacas },
  { 775 /* amocas.h.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha_HasStdExtZacas },
  { 789 /* amocas.h.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha_HasStdExtZacas },
  { 801 /* amocas.q */, 3 /* 0, 1 */, MCK_GPRPairRV64, AMFBS_HasStdExtZacas_IsRV64 },
  { 801 /* amocas.q */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZacas_IsRV64 },
  { 810 /* amocas.q.aq */, 3 /* 0, 1 */, MCK_GPRPairRV64, AMFBS_HasStdExtZacas_IsRV64 },
  { 810 /* amocas.q.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZacas_IsRV64 },
  { 822 /* amocas.q.aqrl */, 3 /* 0, 1 */, MCK_GPRPairRV64, AMFBS_HasStdExtZacas_IsRV64 },
  { 822 /* amocas.q.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZacas_IsRV64 },
  { 836 /* amocas.q.rl */, 3 /* 0, 1 */, MCK_GPRPairRV64, AMFBS_HasStdExtZacas_IsRV64 },
  { 836 /* amocas.q.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZacas_IsRV64 },
  { 848 /* amocas.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZacas },
  { 857 /* amocas.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZacas },
  { 869 /* amocas.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZacas },
  { 883 /* amocas.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZacas },
  { 895 /* amomax.b */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 904 /* amomax.b.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 916 /* amomax.b.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 930 /* amomax.b.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 942 /* amomax.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 951 /* amomax.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 963 /* amomax.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 977 /* amomax.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 989 /* amomax.h */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 998 /* amomax.h.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1010 /* amomax.h.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1024 /* amomax.h.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1036 /* amomax.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1045 /* amomax.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1057 /* amomax.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1071 /* amomax.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1083 /* amomaxu.b */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1093 /* amomaxu.b.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1106 /* amomaxu.b.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1121 /* amomaxu.b.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1134 /* amomaxu.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1144 /* amomaxu.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1157 /* amomaxu.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1172 /* amomaxu.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1185 /* amomaxu.h */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1195 /* amomaxu.h.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1208 /* amomaxu.h.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1223 /* amomaxu.h.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1236 /* amomaxu.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1246 /* amomaxu.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1259 /* amomaxu.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1274 /* amomaxu.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1287 /* amomin.b */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1296 /* amomin.b.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1308 /* amomin.b.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1322 /* amomin.b.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1334 /* amomin.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1343 /* amomin.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1355 /* amomin.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1369 /* amomin.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1381 /* amomin.h */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1390 /* amomin.h.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1402 /* amomin.h.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1416 /* amomin.h.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1428 /* amomin.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1437 /* amomin.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1449 /* amomin.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1463 /* amomin.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1475 /* amominu.b */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1485 /* amominu.b.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1498 /* amominu.b.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1513 /* amominu.b.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1526 /* amominu.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1536 /* amominu.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1549 /* amominu.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1564 /* amominu.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1577 /* amominu.h */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1587 /* amominu.h.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1600 /* amominu.h.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1615 /* amominu.h.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1628 /* amominu.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1638 /* amominu.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1651 /* amominu.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1666 /* amominu.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1679 /* amoor.b */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1687 /* amoor.b.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1698 /* amoor.b.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1711 /* amoor.b.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1722 /* amoor.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1730 /* amoor.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1741 /* amoor.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1754 /* amoor.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1765 /* amoor.h */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1773 /* amoor.h.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1784 /* amoor.h.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1797 /* amoor.h.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1808 /* amoor.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1816 /* amoor.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1827 /* amoor.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1840 /* amoor.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 1851 /* amoswap.b */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1861 /* amoswap.b.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1874 /* amoswap.b.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1889 /* amoswap.b.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1902 /* amoswap.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1912 /* amoswap.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1925 /* amoswap.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1940 /* amoswap.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 1953 /* amoswap.h */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1963 /* amoswap.h.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1976 /* amoswap.h.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 1991 /* amoswap.h.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 2004 /* amoswap.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 2014 /* amoswap.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 2027 /* amoswap.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 2042 /* amoswap.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 2055 /* amoxor.b */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 2064 /* amoxor.b.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 2076 /* amoxor.b.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 2090 /* amoxor.b.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 2102 /* amoxor.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 2111 /* amoxor.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 2123 /* amoxor.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 2137 /* amoxor.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo_IsRV64 },
  { 2149 /* amoxor.h */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 2158 /* amoxor.h.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 2170 /* amoxor.h.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 2184 /* amoxor.h.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZabha },
  { 2196 /* amoxor.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 2205 /* amoxor.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 2217 /* amoxor.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 2231 /* amoxor.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZaamo },
  { 2911 /* call */, 1 /* 0 */, MCK_CallSymbol, AMFBS_None },
  { 2911 /* call */, 2 /* 1 */, MCK_CallSymbol, AMFBS_None },
  { 2916 /* cbo.clean */, 1 /* 0 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZicbom },
  { 2926 /* cbo.flush */, 1 /* 0 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZicbom },
  { 2936 /* cbo.inval */, 1 /* 0 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZicbom },
  { 2946 /* cbo.zero */, 1 /* 0 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZicboz },
  { 3018 /* cm.pop */, 1 /* 0 */, MCK_Rlist, AMFBS_HasStdExtZcmp },
  { 3018 /* cm.pop */, 2 /* 1 */, MCK_StackAdj, AMFBS_HasStdExtZcmp },
  { 3025 /* cm.popret */, 1 /* 0 */, MCK_Rlist, AMFBS_HasStdExtZcmp },
  { 3025 /* cm.popret */, 2 /* 1 */, MCK_StackAdj, AMFBS_HasStdExtZcmp },
  { 3035 /* cm.popretz */, 1 /* 0 */, MCK_Rlist, AMFBS_HasStdExtZcmp },
  { 3035 /* cm.popretz */, 2 /* 1 */, MCK_StackAdj, AMFBS_HasStdExtZcmp },
  { 3046 /* cm.push */, 2 /* 1 */, MCK_NegStackAdj, AMFBS_HasStdExtZcmp },
  { 3046 /* cm.push */, 1 /* 0 */, MCK_Rlist, AMFBS_HasStdExtZcmp },
  { 3065 /* csrc */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 3065 /* csrc */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 3070 /* csrci */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 3076 /* csrr */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 3081 /* csrrc */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 3081 /* csrrc */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 3087 /* csrrci */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 3094 /* csrrs */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 3094 /* csrrs */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 3100 /* csrrsi */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 3107 /* csrrw */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 3107 /* csrrw */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 3113 /* csrrwi */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 3120 /* csrs */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 3120 /* csrs */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 3125 /* csrsi */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 3131 /* csrw */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 3131 /* csrw */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 3136 /* csrwi */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 5100 /* cv.lb */, 2 /* 1 */, MCK_RegReg, AMFBS_HasVendorXCVmem_IsRV32 },
  { 5106 /* cv.lbu */, 2 /* 1 */, MCK_RegReg, AMFBS_HasVendorXCVmem_IsRV32 },
  { 5113 /* cv.lh */, 2 /* 1 */, MCK_RegReg, AMFBS_HasVendorXCVmem_IsRV32 },
  { 5119 /* cv.lhu */, 2 /* 1 */, MCK_RegReg, AMFBS_HasVendorXCVmem_IsRV32 },
  { 5126 /* cv.lw */, 2 /* 1 */, MCK_RegReg, AMFBS_HasVendorXCVmem_IsRV32 },
  { 5775 /* cv.sb */, 2 /* 1 */, MCK_RegReg, AMFBS_HasVendorXCVmem_IsRV32 },
  { 6045 /* cv.sh */, 2 /* 1 */, MCK_RegReg, AMFBS_HasVendorXCVmem_IsRV32 },
  { 6662 /* cv.sw */, 2 /* 1 */, MCK_RegReg, AMFBS_HasVendorXCVmem_IsRV32 },
  { 6794 /* fabs.d */, 3 /* 0, 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 6794 /* fabs.d */, 3 /* 0, 1 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 6801 /* fabs.h */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 6808 /* fabs.s */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 6815 /* fadd.d */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtD },
  { 6815 /* fadd.d */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV64 },
  { 6815 /* fadd.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 6815 /* fadd.d */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV32 },
  { 6815 /* fadd.d */, 7 /* 0, 1, 2 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 6822 /* fadd.h */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZfh },
  { 6822 /* fadd.h */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZhinx },
  { 6822 /* fadd.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 6829 /* fadd.s */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtF },
  { 6829 /* fadd.s */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZfinx },
  { 6829 /* fadd.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 6836 /* fclass.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 6836 /* fclass.d */, 2 /* 1 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 6845 /* fclass.h */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 6854 /* fclass.s */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 6863 /* fcvt.bf16.s */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfbfmin },
  { 6875 /* fcvt.d.h */, 4 /* 2 */, MCK_FRMArgLegacy, AMFBS_HasStdExtZfhmin_HasStdExtD },
  { 6875 /* fcvt.d.h */, 4 /* 2 */, MCK_FRMArgLegacy, AMFBS_HasStdExtZhinxmin_HasStdExtZdinx_IsRV64 },
  { 6875 /* fcvt.d.h */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinxmin_HasStdExtZdinx_IsRV64 },
  { 6875 /* fcvt.d.h */, 1 /* 0 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZhinxmin_HasStdExtZdinx_IsRV64 },
  { 6875 /* fcvt.d.h */, 4 /* 2 */, MCK_FRMArgLegacy, AMFBS_HasStdExtZhinxmin_HasStdExtZdinx_IsRV32 },
  { 6875 /* fcvt.d.h */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinxmin_HasStdExtZdinx_IsRV32 },
  { 6875 /* fcvt.d.h */, 1 /* 0 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZhinxmin_HasStdExtZdinx_IsRV32 },
  { 6884 /* fcvt.d.l */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtD_IsRV64 },
  { 6884 /* fcvt.d.l */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV64_IsRV64 },
  { 6884 /* fcvt.d.l */, 1 /* 0 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64_IsRV64 },
  { 6893 /* fcvt.d.lu */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtD_IsRV64 },
  { 6893 /* fcvt.d.lu */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV64_IsRV64 },
  { 6893 /* fcvt.d.lu */, 1 /* 0 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64_IsRV64 },
  { 6903 /* fcvt.d.s */, 4 /* 2 */, MCK_FRMArgLegacy, AMFBS_HasStdExtD },
  { 6903 /* fcvt.d.s */, 4 /* 2 */, MCK_FRMArgLegacy, AMFBS_HasStdExtZdinx_IsRV64 },
  { 6903 /* fcvt.d.s */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 6903 /* fcvt.d.s */, 1 /* 0 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 6903 /* fcvt.d.s */, 4 /* 2 */, MCK_FRMArgLegacy, AMFBS_HasStdExtZdinx_IsRV32 },
  { 6903 /* fcvt.d.s */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 6903 /* fcvt.d.s */, 1 /* 0 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 6912 /* fcvt.d.w */, 4 /* 2 */, MCK_FRMArgLegacy, AMFBS_HasStdExtD },
  { 6912 /* fcvt.d.w */, 4 /* 2 */, MCK_FRMArgLegacy, AMFBS_HasStdExtZdinx_IsRV64 },
  { 6912 /* fcvt.d.w */, 1 /* 0 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 6912 /* fcvt.d.w */, 4 /* 2 */, MCK_FRMArgLegacy, AMFBS_HasStdExtZdinx_IsRV32 },
  { 6912 /* fcvt.d.w */, 1 /* 0 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 6921 /* fcvt.d.wu */, 4 /* 2 */, MCK_FRMArgLegacy, AMFBS_HasStdExtD },
  { 6921 /* fcvt.d.wu */, 4 /* 2 */, MCK_FRMArgLegacy, AMFBS_HasStdExtZdinx_IsRV64 },
  { 6921 /* fcvt.d.wu */, 1 /* 0 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 6921 /* fcvt.d.wu */, 4 /* 2 */, MCK_FRMArgLegacy, AMFBS_HasStdExtZdinx_IsRV32 },
  { 6921 /* fcvt.d.wu */, 1 /* 0 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 6931 /* fcvt.h.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfhmin_HasStdExtD },
  { 6931 /* fcvt.h.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZhinxmin_HasStdExtZdinx_IsRV64 },
  { 6931 /* fcvt.h.d */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinxmin_HasStdExtZdinx_IsRV64 },
  { 6931 /* fcvt.h.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZhinxmin_HasStdExtZdinx_IsRV64 },
  { 6931 /* fcvt.h.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZhinxmin_HasStdExtZdinx_IsRV32 },
  { 6931 /* fcvt.h.d */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinxmin_HasStdExtZdinx_IsRV32 },
  { 6931 /* fcvt.h.d */, 2 /* 1 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZhinxmin_HasStdExtZdinx_IsRV32 },
  { 6940 /* fcvt.h.l */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfh_IsRV64 },
  { 6940 /* fcvt.h.l */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZhinx_IsRV64 },
  { 6940 /* fcvt.h.l */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx_IsRV64 },
  { 6949 /* fcvt.h.lu */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfh_IsRV64 },
  { 6949 /* fcvt.h.lu */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZhinx_IsRV64 },
  { 6949 /* fcvt.h.lu */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx_IsRV64 },
  { 6959 /* fcvt.h.s */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfhmin },
  { 6959 /* fcvt.h.s */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZhinxmin },
  { 6959 /* fcvt.h.s */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinxmin },
  { 6968 /* fcvt.h.w */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfh },
  { 6968 /* fcvt.h.w */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZhinx },
  { 6968 /* fcvt.h.w */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 6977 /* fcvt.h.wu */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfh },
  { 6977 /* fcvt.h.wu */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZhinx },
  { 6977 /* fcvt.h.wu */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 6987 /* fcvt.l.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtD_IsRV64 },
  { 6987 /* fcvt.l.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV64_IsRV64 },
  { 6987 /* fcvt.l.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64_IsRV64 },
  { 6996 /* fcvt.l.h */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfh_IsRV64 },
  { 6996 /* fcvt.l.h */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZhinx_IsRV64 },
  { 6996 /* fcvt.l.h */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx_IsRV64 },
  { 7005 /* fcvt.l.s */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtF_IsRV64 },
  { 7005 /* fcvt.l.s */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfinx_IsRV64 },
  { 7005 /* fcvt.l.s */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx_IsRV64 },
  { 7014 /* fcvt.lu.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtD_IsRV64 },
  { 7014 /* fcvt.lu.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV64_IsRV64 },
  { 7014 /* fcvt.lu.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64_IsRV64 },
  { 7024 /* fcvt.lu.h */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfh_IsRV64 },
  { 7024 /* fcvt.lu.h */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZhinx_IsRV64 },
  { 7024 /* fcvt.lu.h */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx_IsRV64 },
  { 7034 /* fcvt.lu.s */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtF_IsRV64 },
  { 7034 /* fcvt.lu.s */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfinx_IsRV64 },
  { 7034 /* fcvt.lu.s */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx_IsRV64 },
  { 7044 /* fcvt.s.bf16 */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfbfmin },
  { 7056 /* fcvt.s.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtD },
  { 7056 /* fcvt.s.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7056 /* fcvt.s.d */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7056 /* fcvt.s.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7056 /* fcvt.s.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7056 /* fcvt.s.d */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7056 /* fcvt.s.d */, 2 /* 1 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7065 /* fcvt.s.h */, 4 /* 2 */, MCK_FRMArgLegacy, AMFBS_HasStdExtZfhmin },
  { 7065 /* fcvt.s.h */, 4 /* 2 */, MCK_FRMArgLegacy, AMFBS_HasStdExtZhinxmin },
  { 7065 /* fcvt.s.h */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinxmin },
  { 7074 /* fcvt.s.l */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtF_IsRV64 },
  { 7074 /* fcvt.s.l */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfinx_IsRV64 },
  { 7074 /* fcvt.s.l */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx_IsRV64 },
  { 7083 /* fcvt.s.lu */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtF_IsRV64 },
  { 7083 /* fcvt.s.lu */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfinx_IsRV64 },
  { 7083 /* fcvt.s.lu */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx_IsRV64 },
  { 7093 /* fcvt.s.w */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtF },
  { 7093 /* fcvt.s.w */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfinx },
  { 7093 /* fcvt.s.w */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7102 /* fcvt.s.wu */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtF },
  { 7102 /* fcvt.s.wu */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfinx },
  { 7102 /* fcvt.s.wu */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7112 /* fcvt.w.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtD },
  { 7112 /* fcvt.w.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7112 /* fcvt.w.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7112 /* fcvt.w.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7112 /* fcvt.w.d */, 2 /* 1 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7121 /* fcvt.w.h */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfh },
  { 7121 /* fcvt.w.h */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZhinx },
  { 7121 /* fcvt.w.h */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7130 /* fcvt.w.s */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtF },
  { 7130 /* fcvt.w.s */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfinx },
  { 7130 /* fcvt.w.s */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7139 /* fcvt.wu.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtD },
  { 7139 /* fcvt.wu.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7139 /* fcvt.wu.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7139 /* fcvt.wu.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7139 /* fcvt.wu.d */, 2 /* 1 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7149 /* fcvt.wu.h */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfh },
  { 7149 /* fcvt.wu.h */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZhinx },
  { 7149 /* fcvt.wu.h */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7159 /* fcvt.wu.s */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtF },
  { 7159 /* fcvt.wu.s */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfinx },
  { 7159 /* fcvt.wu.s */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7169 /* fcvtmod.w.d */, 4 /* 2 */, MCK_RTZArg, AMFBS_HasStdExtZfa_HasStdExtD },
  { 7181 /* fdiv.d */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtD },
  { 7181 /* fdiv.d */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7181 /* fdiv.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7181 /* fdiv.d */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7181 /* fdiv.d */, 7 /* 0, 1, 2 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7188 /* fdiv.h */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZfh },
  { 7188 /* fdiv.h */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZhinx },
  { 7188 /* fdiv.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7195 /* fdiv.s */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtF },
  { 7195 /* fdiv.s */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZfinx },
  { 7195 /* fdiv.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7202 /* fence */, 3 /* 0, 1 */, MCK_FenceArg, AMFBS_None },
  { 7226 /* feq.d */, 6 /* 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7226 /* feq.d */, 6 /* 1, 2 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7232 /* feq.h */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7238 /* feq.s */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7244 /* fge.d */, 6 /* 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7244 /* fge.d */, 6 /* 1, 2 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7250 /* fge.h */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7256 /* fge.s */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7283 /* fgt.d */, 6 /* 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7283 /* fgt.d */, 6 /* 1, 2 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7289 /* fgt.h */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7295 /* fgt.s */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7322 /* fld */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtD },
  { 7326 /* fle.d */, 6 /* 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7326 /* fle.d */, 6 /* 1, 2 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7332 /* fle.h */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7338 /* fle.s */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7365 /* flh */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtZfhmin },
  { 7369 /* fli.d */, 2 /* 1 */, MCK_LoadFPImm, AMFBS_HasStdExtZfa_HasStdExtD },
  { 7375 /* fli.h */, 2 /* 1 */, MCK_LoadFPImm, AMFBS_HasStdExtZfa_HasStdExtZfhOrZvfh },
  { 7381 /* fli.s */, 2 /* 1 */, MCK_LoadFPImm, AMFBS_HasStdExtZfa },
  { 7387 /* flt.d */, 6 /* 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7387 /* flt.d */, 6 /* 1, 2 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7393 /* flt.h */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7399 /* flt.s */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7426 /* flw */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtF },
  { 7430 /* fmadd.d */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtD },
  { 7430 /* fmadd.d */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7430 /* fmadd.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7430 /* fmadd.d */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7430 /* fmadd.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7438 /* fmadd.h */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZfh },
  { 7438 /* fmadd.h */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZhinx },
  { 7438 /* fmadd.h */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7446 /* fmadd.s */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtF },
  { 7446 /* fmadd.s */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZfinx },
  { 7446 /* fmadd.s */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7454 /* fmax.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7454 /* fmax.d */, 7 /* 0, 1, 2 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7461 /* fmax.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7468 /* fmax.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7499 /* fmin.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7499 /* fmin.d */, 7 /* 0, 1, 2 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7506 /* fmin.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7513 /* fmin.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7544 /* fmsub.d */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtD },
  { 7544 /* fmsub.d */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7544 /* fmsub.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7544 /* fmsub.d */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7544 /* fmsub.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7552 /* fmsub.h */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZfh },
  { 7552 /* fmsub.h */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZhinx },
  { 7552 /* fmsub.h */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7560 /* fmsub.s */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtF },
  { 7560 /* fmsub.s */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZfinx },
  { 7560 /* fmsub.s */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7568 /* fmul.d */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtD },
  { 7568 /* fmul.d */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7568 /* fmul.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7568 /* fmul.d */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7568 /* fmul.d */, 7 /* 0, 1, 2 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7575 /* fmul.h */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZfh },
  { 7575 /* fmul.h */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZhinx },
  { 7575 /* fmul.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7582 /* fmul.s */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtF },
  { 7582 /* fmul.s */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZfinx },
  { 7582 /* fmul.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7603 /* fmv.h */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7673 /* fneg.d */, 3 /* 0, 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7673 /* fneg.d */, 3 /* 0, 1 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7680 /* fneg.h */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7687 /* fneg.s */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7694 /* fnmadd.d */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtD },
  { 7694 /* fnmadd.d */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7694 /* fnmadd.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7694 /* fnmadd.d */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7694 /* fnmadd.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7703 /* fnmadd.h */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZfh },
  { 7703 /* fnmadd.h */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZhinx },
  { 7703 /* fnmadd.h */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7712 /* fnmadd.s */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtF },
  { 7712 /* fnmadd.s */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZfinx },
  { 7712 /* fnmadd.s */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7721 /* fnmsub.d */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtD },
  { 7721 /* fnmsub.d */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7721 /* fnmsub.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7721 /* fnmsub.d */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7721 /* fnmsub.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7730 /* fnmsub.h */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZfh },
  { 7730 /* fnmsub.h */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZhinx },
  { 7730 /* fnmsub.h */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7739 /* fnmsub.s */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtF },
  { 7739 /* fnmsub.s */, 16 /* 4 */, MCK_FRMArg, AMFBS_HasStdExtZfinx },
  { 7739 /* fnmsub.s */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7762 /* fround.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfa_HasStdExtD },
  { 7771 /* fround.h */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfa_HasStdExtZfh },
  { 7780 /* fround.s */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfa },
  { 7789 /* froundnx.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfa_HasStdExtD },
  { 7800 /* froundnx.h */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfa_HasStdExtZfh },
  { 7811 /* froundnx.s */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfa },
  { 7838 /* fsd */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtD },
  { 7859 /* fsgnj.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7859 /* fsgnj.d */, 7 /* 0, 1, 2 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7867 /* fsgnj.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7875 /* fsgnj.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7883 /* fsgnjn.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7883 /* fsgnjn.d */, 7 /* 0, 1, 2 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7892 /* fsgnjn.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7901 /* fsgnjn.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7910 /* fsgnjx.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7910 /* fsgnjx.d */, 7 /* 0, 1, 2 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7919 /* fsgnjx.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7928 /* fsgnjx.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7937 /* fsh */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtZfhmin },
  { 7941 /* fsqrt.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtD },
  { 7941 /* fsqrt.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7941 /* fsqrt.d */, 3 /* 0, 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7941 /* fsqrt.d */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7941 /* fsqrt.d */, 3 /* 0, 1 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7949 /* fsqrt.h */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfh },
  { 7949 /* fsqrt.h */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZhinx },
  { 7949 /* fsqrt.h */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7957 /* fsqrt.s */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtF },
  { 7957 /* fsqrt.s */, 4 /* 2 */, MCK_FRMArg, AMFBS_HasStdExtZfinx },
  { 7957 /* fsqrt.s */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 7981 /* fsub.d */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtD },
  { 7981 /* fsub.d */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7981 /* fsub.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 7981 /* fsub.d */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7981 /* fsub.d */, 7 /* 0, 1, 2 */, MCK_GPRPairAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 7988 /* fsub.h */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZfh },
  { 7988 /* fsub.h */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZhinx },
  { 7988 /* fsub.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 7995 /* fsub.s */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtF },
  { 7995 /* fsub.s */, 8 /* 3 */, MCK_FRMArg, AMFBS_HasStdExtZfinx },
  { 7995 /* fsub.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 8002 /* fsw */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtF },
  { 8054 /* hlv.b */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtH },
  { 8060 /* hlv.bu */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtH },
  { 8067 /* hlv.d */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_IsRV64_HasStdExtH },
  { 8073 /* hlv.h */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtH },
  { 8079 /* hlv.hu */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtH },
  { 8086 /* hlv.w */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtH },
  { 8092 /* hlv.wu */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_IsRV64_HasStdExtH },
  { 8099 /* hlvx.hu */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtH },
  { 8107 /* hlvx.wu */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtH },
  { 8115 /* hsv.b */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtH },
  { 8121 /* hsv.d */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_IsRV64_HasStdExtH },
  { 8127 /* hsv.h */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtH },
  { 8133 /* hsv.w */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtH },
  { 8139 /* j */, 1 /* 0 */, MCK_SImm21Lsb0JAL, AMFBS_None },
  { 8141 /* jal */, 1 /* 0 */, MCK_SImm21Lsb0JAL, AMFBS_None },
  { 8141 /* jal */, 2 /* 1 */, MCK_SImm21Lsb0JAL, AMFBS_None },
  { 8145 /* jalr */, 32 /* 5 */, MCK_TLSDESCCallSymbol, AMFBS_None },
  { 8153 /* jump */, 1 /* 0 */, MCK_PseudoJumpSymbol, AMFBS_None },
  { 8158 /* la */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 8161 /* la.tls.gd */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 8171 /* la.tls.ie */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 8181 /* la.tlsdesc */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 8192 /* lb */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 8195 /* lb.aq */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZalasr },
  { 8201 /* lb.aqrl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZalasr },
  { 8209 /* lbu */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 8213 /* ld */, 2 /* 1 */, MCK_BareSymbol, AMFBS_IsRV64 },
  { 8216 /* ld.aq */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZalasr_IsRV64 },
  { 8222 /* ld.aqrl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZalasr_IsRV64 },
  { 8230 /* lga */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 8234 /* lh */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 8237 /* lh.aq */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZalasr },
  { 8243 /* lh.aqrl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZalasr },
  { 8251 /* lhu */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 8258 /* lla */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 8267 /* lr.d */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZalrsc_IsRV64 },
  { 8272 /* lr.d.aq */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZalrsc_IsRV64 },
  { 8280 /* lr.d.aqrl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZalrsc_IsRV64 },
  { 8290 /* lr.d.rl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZalrsc_IsRV64 },
  { 8298 /* lr.w */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZalrsc },
  { 8303 /* lr.w.aq */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZalrsc },
  { 8311 /* lr.w.aqrl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZalrsc },
  { 8321 /* lr.w.rl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZalrsc },
  { 8333 /* lw */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 8336 /* lw.aq */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZalasr },
  { 8342 /* lw.aqrl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZalasr },
  { 8350 /* lwu */, 2 /* 1 */, MCK_BareSymbol, AMFBS_IsRV64 },
  { 9065 /* sb */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 9068 /* sb.aqrl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZalasr },
  { 9076 /* sb.rl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZalasr },
  { 9082 /* sc.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZalrsc_IsRV64 },
  { 9087 /* sc.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZalrsc_IsRV64 },
  { 9095 /* sc.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZalrsc_IsRV64 },
  { 9105 /* sc.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZalrsc_IsRV64 },
  { 9113 /* sc.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZalrsc },
  { 9118 /* sc.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZalrsc },
  { 9126 /* sc.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZalrsc },
  { 9136 /* sc.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtAOrZalrsc },
  { 9144 /* sd */, 2 /* 1 */, MCK_BareSymbol, AMFBS_IsRV64 },
  { 9147 /* sd.aqrl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZalasr_IsRV64 },
  { 9155 /* sd.rl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZalasr_IsRV64 },
  { 9520 /* sf.vfnrclip.x.f.qf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVendorXSfvfnrclipxfqf },
  { 9539 /* sf.vfnrclip.xu.f.qf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVendorXSfvfnrclipxfqf },
  { 9770 /* sh */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 9773 /* sh.aqrl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZalasr },
  { 9781 /* sh.rl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZalasr },
  { 10136 /* ssamoswap.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZicfiss_IsRV64 },
  { 10148 /* ssamoswap.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZicfiss_IsRV64 },
  { 10163 /* ssamoswap.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZicfiss_IsRV64 },
  { 10180 /* ssamoswap.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZicfiss_IsRV64 },
  { 10195 /* ssamoswap.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZicfiss },
  { 10207 /* ssamoswap.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZicfiss },
  { 10222 /* ssamoswap.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZicfiss },
  { 10239 /* ssamoswap.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZicfiss },
  { 10285 /* sw */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 10288 /* sw.aqrl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZalasr },
  { 10296 /* sw.rl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZalasr },
  { 10302 /* tail */, 1 /* 0 */, MCK_CallSymbol, AMFBS_None },
  { 11290 /* th.vmaqa.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVendorXTHeadVdot },
  { 11302 /* th.vmaqa.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVendorXTHeadVdot },
  { 11314 /* th.vmaqasu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVendorXTHeadVdot },
  { 11328 /* th.vmaqasu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVendorXTHeadVdot },
  { 11342 /* th.vmaqau.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVendorXTHeadVdot },
  { 11355 /* th.vmaqau.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVendorXTHeadVdot },
  { 11368 /* th.vmaqaus.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVendorXTHeadVdot },
  { 11394 /* vaadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11403 /* vaadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11412 /* vaaddu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11422 /* vaaddu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11459 /* vadd.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11467 /* vadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11475 /* vadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11594 /* vand.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11602 /* vand.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11610 /* vand.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11618 /* vandn.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvkb },
  { 11627 /* vandn.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvkb },
  { 11636 /* vasub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11645 /* vasub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11654 /* vasubu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11664 /* vasubu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11674 /* vbrev.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvbb },
  { 11682 /* vbrev8.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvkb },
  { 11691 /* vclmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvbc },
  { 11701 /* vclmul.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvbc },
  { 11711 /* vclmulh.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvbc },
  { 11722 /* vclmulh.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvbc },
  { 11733 /* vclz.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvbb },
  { 11753 /* vcpop.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11761 /* vcpop.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvbb },
  { 11769 /* vctz.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvbb },
  { 11776 /* vdiv.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11784 /* vdiv.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11792 /* vdivu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11801 /* vdivu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11810 /* vfabs.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 11818 /* vfadd.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 11827 /* vfadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 11836 /* vfclass.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 11846 /* vfcvt.f.x.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 11858 /* vfcvt.f.xu.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 11871 /* vfcvt.rtz.x.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 11887 /* vfcvt.rtz.xu.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 11904 /* vfcvt.x.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 11916 /* vfcvt.xu.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 11929 /* vfdiv.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 11938 /* vfdiv.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 11947 /* vfirst.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11956 /* vfmacc.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 11966 /* vfmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 11976 /* vfmadd.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 11986 /* vfmadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 11996 /* vfmax.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12005 /* vfmax.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12026 /* vfmin.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12035 /* vfmin.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12044 /* vfmsac.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12054 /* vfmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12064 /* vfmsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12074 /* vfmsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12084 /* vfmul.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12093 /* vfmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12129 /* vfncvt.f.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12142 /* vfncvt.f.x.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12155 /* vfncvt.f.xu.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12169 /* vfncvt.rod.f.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12186 /* vfncvt.rtz.x.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12203 /* vfncvt.rtz.xu.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12221 /* vfncvt.x.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12234 /* vfncvt.xu.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12248 /* vfncvtbf16.f.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvfbfmin },
  { 12265 /* vfneg.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12273 /* vfnmacc.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12284 /* vfnmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12295 /* vfnmadd.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12306 /* vfnmadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12317 /* vfnmsac.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12328 /* vfnmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12339 /* vfnmsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12350 /* vfnmsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12361 /* vfrdiv.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12371 /* vfrec7.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12380 /* vfredmax.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12392 /* vfredmin.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12404 /* vfredosum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12417 /* vfredsum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12429 /* vfredusum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12442 /* vfrsqrt7.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12453 /* vfrsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12463 /* vfsgnj.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12473 /* vfsgnj.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12483 /* vfsgnjn.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12494 /* vfsgnjn.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12505 /* vfsgnjx.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12516 /* vfsgnjx.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12527 /* vfslide1down.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12543 /* vfslide1up.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12557 /* vfsqrt.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12566 /* vfsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12575 /* vfsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12584 /* vfwadd.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12594 /* vfwadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12604 /* vfwadd.wf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12614 /* vfwadd.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12624 /* vfwcvt.f.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12637 /* vfwcvt.f.x.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12650 /* vfwcvt.f.xu.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12664 /* vfwcvt.rtz.x.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12681 /* vfwcvt.rtz.xu.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12699 /* vfwcvt.x.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12712 /* vfwcvt.xu.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12726 /* vfwcvtbf16.f.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvfbfmin },
  { 12743 /* vfwmacc.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12754 /* vfwmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12765 /* vfwmaccbf16.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvfbfwma },
  { 12780 /* vfwmaccbf16.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvfbfwma },
  { 12795 /* vfwmsac.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12806 /* vfwmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12817 /* vfwmul.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12827 /* vfwmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12837 /* vfwnmacc.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12849 /* vfwnmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12861 /* vfwnmsac.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12873 /* vfwnmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12885 /* vfwredosum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12899 /* vfwredsum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12912 /* vfwredusum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12926 /* vfwsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12936 /* vfwsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12946 /* vfwsub.wf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12956 /* vfwsub.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 12984 /* vid.v */, 2 /* 1 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 12990 /* viota.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13005 /* vl1re16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13015 /* vl1re32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13025 /* vl1re64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 13035 /* vl1re8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13051 /* vl2re16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13061 /* vl2re32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13071 /* vl2re64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 13081 /* vl2re8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13097 /* vl4re16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13107 /* vl4re32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13117 /* vl4re64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 13127 /* vl4re8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13143 /* vl8re16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13153 /* vl8re32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13163 /* vl8re64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 13173 /* vl8re8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13189 /* vle16.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13189 /* vle16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13197 /* vle16ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13197 /* vle16ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13207 /* vle32.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13207 /* vle32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13215 /* vle32ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13215 /* vle32ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13225 /* vle64.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 13225 /* vle64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 13233 /* vle64ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 13233 /* vle64ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 13243 /* vle8.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13243 /* vle8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13250 /* vle8ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13250 /* vle8ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13259 /* vlm.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13265 /* vloxei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13265 /* vloxei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13276 /* vloxei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13276 /* vloxei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13287 /* vloxei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_IsRV64_HasVInstructionsI64 },
  { 13287 /* vloxei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_IsRV64_HasVInstructionsI64 },
  { 13298 /* vloxei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13298 /* vloxei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13308 /* vloxseg2ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13308 /* vloxseg2ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13323 /* vloxseg2ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13323 /* vloxseg2ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13338 /* vloxseg2ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 13338 /* vloxseg2ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 13353 /* vloxseg2ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13353 /* vloxseg2ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13367 /* vloxseg3ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13367 /* vloxseg3ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13382 /* vloxseg3ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13382 /* vloxseg3ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13397 /* vloxseg3ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 13397 /* vloxseg3ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 13412 /* vloxseg3ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13412 /* vloxseg3ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13426 /* vloxseg4ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13426 /* vloxseg4ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13441 /* vloxseg4ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13441 /* vloxseg4ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13456 /* vloxseg4ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 13456 /* vloxseg4ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 13471 /* vloxseg4ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13471 /* vloxseg4ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13485 /* vloxseg5ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13485 /* vloxseg5ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13500 /* vloxseg5ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13500 /* vloxseg5ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13515 /* vloxseg5ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 13515 /* vloxseg5ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 13530 /* vloxseg5ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13530 /* vloxseg5ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13544 /* vloxseg6ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13544 /* vloxseg6ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13559 /* vloxseg6ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13559 /* vloxseg6ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13574 /* vloxseg6ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 13574 /* vloxseg6ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 13589 /* vloxseg6ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13589 /* vloxseg6ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13603 /* vloxseg7ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13603 /* vloxseg7ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13618 /* vloxseg7ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13618 /* vloxseg7ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13633 /* vloxseg7ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 13633 /* vloxseg7ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 13648 /* vloxseg7ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13648 /* vloxseg7ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13662 /* vloxseg8ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13662 /* vloxseg8ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13677 /* vloxseg8ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13677 /* vloxseg8ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13692 /* vloxseg8ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 13692 /* vloxseg8ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 13707 /* vloxseg8ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13707 /* vloxseg8ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13721 /* vlse16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13721 /* vlse16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13730 /* vlse32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13730 /* vlse32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13739 /* vlse64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 13739 /* vlse64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 13748 /* vlse8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13748 /* vlse8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13756 /* vlseg2e16.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13756 /* vlseg2e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13768 /* vlseg2e16ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13768 /* vlseg2e16ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13782 /* vlseg2e32.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13782 /* vlseg2e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13794 /* vlseg2e32ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13794 /* vlseg2e32ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13808 /* vlseg2e64.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 13808 /* vlseg2e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 13820 /* vlseg2e64ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 13820 /* vlseg2e64ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 13834 /* vlseg2e8.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13834 /* vlseg2e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13845 /* vlseg2e8ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13845 /* vlseg2e8ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13858 /* vlseg3e16.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13858 /* vlseg3e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13870 /* vlseg3e16ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13870 /* vlseg3e16ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13884 /* vlseg3e32.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13884 /* vlseg3e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13896 /* vlseg3e32ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13896 /* vlseg3e32ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13910 /* vlseg3e64.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 13910 /* vlseg3e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 13922 /* vlseg3e64ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 13922 /* vlseg3e64ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 13936 /* vlseg3e8.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13936 /* vlseg3e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13947 /* vlseg3e8ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13947 /* vlseg3e8ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13960 /* vlseg4e16.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13960 /* vlseg4e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13972 /* vlseg4e16ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13972 /* vlseg4e16ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13986 /* vlseg4e32.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13986 /* vlseg4e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 13998 /* vlseg4e32ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 13998 /* vlseg4e32ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14012 /* vlseg4e64.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 14012 /* vlseg4e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 14024 /* vlseg4e64ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 14024 /* vlseg4e64ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 14038 /* vlseg4e8.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14038 /* vlseg4e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14049 /* vlseg4e8ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14049 /* vlseg4e8ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14062 /* vlseg5e16.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14062 /* vlseg5e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14074 /* vlseg5e16ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14074 /* vlseg5e16ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14088 /* vlseg5e32.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14088 /* vlseg5e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14100 /* vlseg5e32ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14100 /* vlseg5e32ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14114 /* vlseg5e64.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 14114 /* vlseg5e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 14126 /* vlseg5e64ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 14126 /* vlseg5e64ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 14140 /* vlseg5e8.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14140 /* vlseg5e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14151 /* vlseg5e8ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14151 /* vlseg5e8ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14164 /* vlseg6e16.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14164 /* vlseg6e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14176 /* vlseg6e16ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14176 /* vlseg6e16ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14190 /* vlseg6e32.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14190 /* vlseg6e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14202 /* vlseg6e32ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14202 /* vlseg6e32ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14216 /* vlseg6e64.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 14216 /* vlseg6e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 14228 /* vlseg6e64ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 14228 /* vlseg6e64ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 14242 /* vlseg6e8.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14242 /* vlseg6e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14253 /* vlseg6e8ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14253 /* vlseg6e8ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14266 /* vlseg7e16.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14266 /* vlseg7e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14278 /* vlseg7e16ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14278 /* vlseg7e16ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14292 /* vlseg7e32.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14292 /* vlseg7e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14304 /* vlseg7e32ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14304 /* vlseg7e32ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14318 /* vlseg7e64.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 14318 /* vlseg7e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 14330 /* vlseg7e64ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 14330 /* vlseg7e64ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 14344 /* vlseg7e8.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14344 /* vlseg7e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14355 /* vlseg7e8ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14355 /* vlseg7e8ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14368 /* vlseg8e16.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14368 /* vlseg8e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14380 /* vlseg8e16ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14380 /* vlseg8e16ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14394 /* vlseg8e32.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14394 /* vlseg8e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14406 /* vlseg8e32ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14406 /* vlseg8e32ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14420 /* vlseg8e64.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 14420 /* vlseg8e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 14432 /* vlseg8e64ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 14432 /* vlseg8e64ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 14446 /* vlseg8e8.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14446 /* vlseg8e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14457 /* vlseg8e8ff.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14457 /* vlseg8e8ff.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14470 /* vlsseg2e16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14470 /* vlsseg2e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14483 /* vlsseg2e32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14483 /* vlsseg2e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14496 /* vlsseg2e64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 14496 /* vlsseg2e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 14509 /* vlsseg2e8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14509 /* vlsseg2e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14521 /* vlsseg3e16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14521 /* vlsseg3e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14534 /* vlsseg3e32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14534 /* vlsseg3e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14547 /* vlsseg3e64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 14547 /* vlsseg3e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 14560 /* vlsseg3e8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14560 /* vlsseg3e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14572 /* vlsseg4e16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14572 /* vlsseg4e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14585 /* vlsseg4e32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14585 /* vlsseg4e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14598 /* vlsseg4e64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 14598 /* vlsseg4e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 14611 /* vlsseg4e8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14611 /* vlsseg4e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14623 /* vlsseg5e16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14623 /* vlsseg5e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14636 /* vlsseg5e32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14636 /* vlsseg5e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14649 /* vlsseg5e64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 14649 /* vlsseg5e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 14662 /* vlsseg5e8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14662 /* vlsseg5e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14674 /* vlsseg6e16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14674 /* vlsseg6e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14687 /* vlsseg6e32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14687 /* vlsseg6e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14700 /* vlsseg6e64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 14700 /* vlsseg6e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 14713 /* vlsseg6e8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14713 /* vlsseg6e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14725 /* vlsseg7e16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14725 /* vlsseg7e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14738 /* vlsseg7e32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14738 /* vlsseg7e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14751 /* vlsseg7e64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 14751 /* vlsseg7e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 14764 /* vlsseg7e8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14764 /* vlsseg7e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14776 /* vlsseg8e16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14776 /* vlsseg8e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14789 /* vlsseg8e32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14789 /* vlsseg8e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14802 /* vlsseg8e64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 14802 /* vlsseg8e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 14815 /* vlsseg8e8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14815 /* vlsseg8e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14827 /* vluxei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14827 /* vluxei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14838 /* vluxei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14838 /* vluxei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14849 /* vluxei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_IsRV64_HasVInstructionsI64 },
  { 14849 /* vluxei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_IsRV64_HasVInstructionsI64 },
  { 14860 /* vluxei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14860 /* vluxei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14870 /* vluxseg2ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14870 /* vluxseg2ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14885 /* vluxseg2ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14885 /* vluxseg2ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14900 /* vluxseg2ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 14900 /* vluxseg2ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 14915 /* vluxseg2ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14915 /* vluxseg2ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14929 /* vluxseg3ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14929 /* vluxseg3ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14944 /* vluxseg3ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14944 /* vluxseg3ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14959 /* vluxseg3ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 14959 /* vluxseg3ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 14974 /* vluxseg3ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14974 /* vluxseg3ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 14988 /* vluxseg4ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 14988 /* vluxseg4ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 15003 /* vluxseg4ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15003 /* vluxseg4ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 15018 /* vluxseg4ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 15018 /* vluxseg4ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 15033 /* vluxseg4ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15033 /* vluxseg4ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 15047 /* vluxseg5ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15047 /* vluxseg5ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 15062 /* vluxseg5ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15062 /* vluxseg5ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 15077 /* vluxseg5ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 15077 /* vluxseg5ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 15092 /* vluxseg5ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15092 /* vluxseg5ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 15106 /* vluxseg6ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15106 /* vluxseg6ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 15121 /* vluxseg6ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15121 /* vluxseg6ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 15136 /* vluxseg6ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 15136 /* vluxseg6ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 15151 /* vluxseg6ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15151 /* vluxseg6ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 15165 /* vluxseg7ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15165 /* vluxseg7ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 15180 /* vluxseg7ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15180 /* vluxseg7ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 15195 /* vluxseg7ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 15195 /* vluxseg7ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 15210 /* vluxseg7ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15210 /* vluxseg7ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 15224 /* vluxseg8ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15224 /* vluxseg8ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 15239 /* vluxseg8ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15239 /* vluxseg8ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 15254 /* vluxseg8ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 15254 /* vluxseg8ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 15269 /* vluxseg8ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15269 /* vluxseg8ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 15283 /* vmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15292 /* vmacc.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15358 /* vmadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15367 /* vmadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15407 /* vmax.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15415 /* vmax.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15423 /* vmaxu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15432 /* vmaxu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15482 /* vmfeq.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 15491 /* vmfeq.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 15500 /* vmfge.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 15509 /* vmfge.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 15518 /* vmfgt.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 15527 /* vmfgt.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 15536 /* vmfle.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 15545 /* vmfle.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 15554 /* vmflt.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 15563 /* vmflt.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 15572 /* vmfne.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 15581 /* vmfne.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 15590 /* vmin.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15598 /* vmin.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15606 /* vminu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15615 /* vminu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15724 /* vmsbf.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15732 /* vmseq.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15741 /* vmseq.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15750 /* vmseq.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15767 /* vmsge.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15776 /* vmsge.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15785 /* vmsge.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15785 /* vmsge.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15794 /* vmsgeu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15804 /* vmsgeu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15814 /* vmsgeu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15814 /* vmsgeu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15824 /* vmsgt.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15833 /* vmsgt.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15842 /* vmsgt.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15851 /* vmsgtu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15861 /* vmsgtu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15871 /* vmsgtu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15881 /* vmsif.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15889 /* vmsle.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15898 /* vmsle.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15907 /* vmsle.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15916 /* vmsleu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15926 /* vmsleu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15936 /* vmsleu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15946 /* vmslt.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15955 /* vmslt.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15964 /* vmslt.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15973 /* vmsltu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15983 /* vmsltu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 15993 /* vmsltu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16003 /* vmsne.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16012 /* vmsne.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16021 /* vmsne.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16030 /* vmsof.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16038 /* vmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16046 /* vmul.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16054 /* vmulh.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16063 /* vmulh.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16072 /* vmulhsu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16083 /* vmulhsu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16094 /* vmulhu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16104 /* vmulhu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16205 /* vnclip.wi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16215 /* vnclip.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16225 /* vnclip.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16235 /* vnclipu.wi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16246 /* vnclipu.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16257 /* vnclipu.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16268 /* vncvt.x.x.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16280 /* vneg.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16287 /* vnmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16297 /* vnmsac.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16307 /* vnmsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16317 /* vnmsub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16327 /* vnot.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16334 /* vnsra.wi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16343 /* vnsra.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16352 /* vnsra.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16361 /* vnsrl.wi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16370 /* vnsrl.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16379 /* vnsrl.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16388 /* vor.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16395 /* vor.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16402 /* vor.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16409 /* vpopc.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16417 /* vredand.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16428 /* vredmax.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16439 /* vredmaxu.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16451 /* vredmin.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16462 /* vredminu.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16474 /* vredor.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16484 /* vredsum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16495 /* vredxor.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16506 /* vrem.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16514 /* vrem.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16522 /* vremu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16531 /* vremu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16540 /* vrev8.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvkb },
  { 16548 /* vrgather.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16560 /* vrgather.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16572 /* vrgather.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16584 /* vrgatherei16.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16600 /* vrol.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvkb },
  { 16608 /* vrol.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvkb },
  { 16616 /* vror.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvkb },
  { 16624 /* vror.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvkb },
  { 16632 /* vror.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvkb },
  { 16640 /* vrsub.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16649 /* vrsub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16658 /* vs1r.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 16665 /* vs2r.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 16672 /* vs4r.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 16679 /* vs8r.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 16686 /* vsadd.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16695 /* vsadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16704 /* vsadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16713 /* vsaddu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16723 /* vsaddu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16733 /* vsaddu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16768 /* vse16.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16768 /* vse16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 16776 /* vse32.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16776 /* vse32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 16784 /* vse64.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 16784 /* vse64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 16792 /* vse8.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16792 /* vse8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 16799 /* vsetivli */, 4 /* 2 */, MCK_VTypeI10, AMFBS_HasVInstructions },
  { 16815 /* vsetvli */, 4 /* 2 */, MCK_VTypeI11, AMFBS_HasVInstructions },
  { 16823 /* vsext.vf2 */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16833 /* vsext.vf4 */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16843 /* vsext.vf8 */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16886 /* vslide1down.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16901 /* vslide1up.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16914 /* vslidedown.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16928 /* vslidedown.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16942 /* vslideup.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16954 /* vslideup.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16966 /* vsll.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16974 /* vsll.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16982 /* vsll.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 16990 /* vsm.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17042 /* vsmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17051 /* vsmul.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17060 /* vsoxei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17060 /* vsoxei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17071 /* vsoxei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17071 /* vsoxei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17082 /* vsoxei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_IsRV64_HasVInstructionsI64 },
  { 17082 /* vsoxei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_IsRV64_HasVInstructionsI64 },
  { 17093 /* vsoxei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17093 /* vsoxei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17103 /* vsoxseg2ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17103 /* vsoxseg2ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17118 /* vsoxseg2ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17118 /* vsoxseg2ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17133 /* vsoxseg2ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 17133 /* vsoxseg2ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 17148 /* vsoxseg2ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17148 /* vsoxseg2ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17162 /* vsoxseg3ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17162 /* vsoxseg3ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17177 /* vsoxseg3ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17177 /* vsoxseg3ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17192 /* vsoxseg3ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 17192 /* vsoxseg3ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 17207 /* vsoxseg3ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17207 /* vsoxseg3ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17221 /* vsoxseg4ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17221 /* vsoxseg4ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17236 /* vsoxseg4ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17236 /* vsoxseg4ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17251 /* vsoxseg4ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 17251 /* vsoxseg4ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 17266 /* vsoxseg4ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17266 /* vsoxseg4ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17280 /* vsoxseg5ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17280 /* vsoxseg5ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17295 /* vsoxseg5ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17295 /* vsoxseg5ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17310 /* vsoxseg5ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 17310 /* vsoxseg5ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 17325 /* vsoxseg5ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17325 /* vsoxseg5ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17339 /* vsoxseg6ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17339 /* vsoxseg6ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17354 /* vsoxseg6ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17354 /* vsoxseg6ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17369 /* vsoxseg6ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 17369 /* vsoxseg6ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 17384 /* vsoxseg6ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17384 /* vsoxseg6ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17398 /* vsoxseg7ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17398 /* vsoxseg7ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17413 /* vsoxseg7ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17413 /* vsoxseg7ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17428 /* vsoxseg7ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 17428 /* vsoxseg7ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 17443 /* vsoxseg7ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17443 /* vsoxseg7ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17457 /* vsoxseg8ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17457 /* vsoxseg8ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17472 /* vsoxseg8ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17472 /* vsoxseg8ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17487 /* vsoxseg8ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 17487 /* vsoxseg8ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 17502 /* vsoxseg8ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17502 /* vsoxseg8ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17516 /* vsra.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17524 /* vsra.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17532 /* vsra.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17540 /* vsrl.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17548 /* vsrl.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17556 /* vsrl.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17564 /* vsse16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17564 /* vsse16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17573 /* vsse32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17573 /* vsse32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17582 /* vsse64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 17582 /* vsse64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 17591 /* vsse8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17591 /* vsse8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17599 /* vsseg2e16.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17599 /* vsseg2e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17611 /* vsseg2e32.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17611 /* vsseg2e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17623 /* vsseg2e64.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 17623 /* vsseg2e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 17635 /* vsseg2e8.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17635 /* vsseg2e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17646 /* vsseg3e16.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17646 /* vsseg3e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17658 /* vsseg3e32.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17658 /* vsseg3e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17670 /* vsseg3e64.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 17670 /* vsseg3e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 17682 /* vsseg3e8.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17682 /* vsseg3e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17693 /* vsseg4e16.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17693 /* vsseg4e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17705 /* vsseg4e32.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17705 /* vsseg4e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17717 /* vsseg4e64.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 17717 /* vsseg4e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 17729 /* vsseg4e8.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17729 /* vsseg4e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17740 /* vsseg5e16.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17740 /* vsseg5e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17752 /* vsseg5e32.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17752 /* vsseg5e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17764 /* vsseg5e64.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 17764 /* vsseg5e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 17776 /* vsseg5e8.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17776 /* vsseg5e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17787 /* vsseg6e16.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17787 /* vsseg6e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17799 /* vsseg6e32.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17799 /* vsseg6e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17811 /* vsseg6e64.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 17811 /* vsseg6e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 17823 /* vsseg6e8.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17823 /* vsseg6e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17834 /* vsseg7e16.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17834 /* vsseg7e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17846 /* vsseg7e32.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17846 /* vsseg7e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17858 /* vsseg7e64.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 17858 /* vsseg7e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 17870 /* vsseg7e8.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17870 /* vsseg7e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17881 /* vsseg8e16.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17881 /* vsseg8e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17893 /* vsseg8e32.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17893 /* vsseg8e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17905 /* vsseg8e64.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 17905 /* vsseg8e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 17917 /* vsseg8e8.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17917 /* vsseg8e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17928 /* vssra.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17937 /* vssra.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17946 /* vssra.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17955 /* vssrl.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17964 /* vssrl.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17973 /* vssrl.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17982 /* vssseg2e16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17982 /* vssseg2e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 17995 /* vssseg2e32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 17995 /* vssseg2e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18008 /* vssseg2e64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 18008 /* vssseg2e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 18021 /* vssseg2e8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18021 /* vssseg2e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18033 /* vssseg3e16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18033 /* vssseg3e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18046 /* vssseg3e32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18046 /* vssseg3e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18059 /* vssseg3e64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 18059 /* vssseg3e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 18072 /* vssseg3e8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18072 /* vssseg3e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18084 /* vssseg4e16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18084 /* vssseg4e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18097 /* vssseg4e32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18097 /* vssseg4e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18110 /* vssseg4e64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 18110 /* vssseg4e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 18123 /* vssseg4e8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18123 /* vssseg4e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18135 /* vssseg5e16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18135 /* vssseg5e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18148 /* vssseg5e32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18148 /* vssseg5e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18161 /* vssseg5e64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 18161 /* vssseg5e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 18174 /* vssseg5e8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18174 /* vssseg5e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18186 /* vssseg6e16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18186 /* vssseg6e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18199 /* vssseg6e32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18199 /* vssseg6e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18212 /* vssseg6e64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 18212 /* vssseg6e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 18225 /* vssseg6e8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18225 /* vssseg6e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18237 /* vssseg7e16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18237 /* vssseg7e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18250 /* vssseg7e32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18250 /* vssseg7e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18263 /* vssseg7e64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 18263 /* vssseg7e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 18276 /* vssseg7e8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18276 /* vssseg7e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18288 /* vssseg8e16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18288 /* vssseg8e16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18301 /* vssseg8e32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18301 /* vssseg8e32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18314 /* vssseg8e64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 18314 /* vssseg8e64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64 },
  { 18327 /* vssseg8e8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18327 /* vssseg8e8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18339 /* vssub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18348 /* vssub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18357 /* vssubu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18367 /* vssubu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18377 /* vsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18385 /* vsub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18393 /* vsuxei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18393 /* vsuxei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18404 /* vsuxei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18404 /* vsuxei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18415 /* vsuxei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_IsRV64_HasVInstructionsI64 },
  { 18415 /* vsuxei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_IsRV64_HasVInstructionsI64 },
  { 18426 /* vsuxei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18426 /* vsuxei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18436 /* vsuxseg2ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18436 /* vsuxseg2ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18451 /* vsuxseg2ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18451 /* vsuxseg2ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18466 /* vsuxseg2ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 18466 /* vsuxseg2ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 18481 /* vsuxseg2ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18481 /* vsuxseg2ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18495 /* vsuxseg3ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18495 /* vsuxseg3ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18510 /* vsuxseg3ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18510 /* vsuxseg3ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18525 /* vsuxseg3ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 18525 /* vsuxseg3ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 18540 /* vsuxseg3ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18540 /* vsuxseg3ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18554 /* vsuxseg4ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18554 /* vsuxseg4ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18569 /* vsuxseg4ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18569 /* vsuxseg4ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18584 /* vsuxseg4ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 18584 /* vsuxseg4ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 18599 /* vsuxseg4ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18599 /* vsuxseg4ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18613 /* vsuxseg5ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18613 /* vsuxseg5ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18628 /* vsuxseg5ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18628 /* vsuxseg5ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18643 /* vsuxseg5ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 18643 /* vsuxseg5ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 18658 /* vsuxseg5ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18658 /* vsuxseg5ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18672 /* vsuxseg6ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18672 /* vsuxseg6ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18687 /* vsuxseg6ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18687 /* vsuxseg6ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18702 /* vsuxseg6ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 18702 /* vsuxseg6ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 18717 /* vsuxseg6ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18717 /* vsuxseg6ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18731 /* vsuxseg7ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18731 /* vsuxseg7ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18746 /* vsuxseg7ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18746 /* vsuxseg7ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18761 /* vsuxseg7ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 18761 /* vsuxseg7ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 18776 /* vsuxseg7ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18776 /* vsuxseg7ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18790 /* vsuxseg8ei16.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18790 /* vsuxseg8ei16.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18805 /* vsuxseg8ei32.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18805 /* vsuxseg8ei32.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18820 /* vsuxseg8ei64.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 18820 /* vsuxseg8ei64.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 18835 /* vsuxseg8ei8.v */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18835 /* vsuxseg8ei8.v */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasVInstructions },
  { 18868 /* vwadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18877 /* vwadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18886 /* vwadd.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18895 /* vwadd.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18904 /* vwaddu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18914 /* vwaddu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18924 /* vwaddu.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18934 /* vwaddu.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18944 /* vwcvt.x.x.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18956 /* vwcvtu.x.x.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18969 /* vwmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18979 /* vwmacc.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 18989 /* vwmaccsu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19001 /* vwmaccsu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19013 /* vwmaccu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19024 /* vwmaccu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19035 /* vwmaccus.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19047 /* vwmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19056 /* vwmul.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19065 /* vwmulsu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19076 /* vwmulsu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19087 /* vwmulu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19097 /* vwmulu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19107 /* vwredsum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19119 /* vwredsumu.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19132 /* vwsll.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvbb },
  { 19141 /* vwsll.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvbb },
  { 19150 /* vwsll.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvbb },
  { 19159 /* vwsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19168 /* vwsub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19177 /* vwsub.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19186 /* vwsub.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19195 /* vwsubu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19205 /* vwsubu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19215 /* vwsubu.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19225 /* vwsubu.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19235 /* vxor.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19243 /* vxor.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19251 /* vxor.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19259 /* vzext.vf2 */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19269 /* vzext.vf4 */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 19279 /* vzext.vf8 */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
};

ParseStatus RISCVAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_BareSymbol:
    return parseBareSymbol(Operands);
  case MCK_CSRSystemRegister:
    return parseCSRSystemRegister(Operands);
  case MCK_RegReg:
    return parseRegReg(Operands);
  case MCK_CallSymbol:
    return parseCallSymbol(Operands);
  case MCK_FRMArg:
    return parseFRMArg(Operands);
  case MCK_FRMArgLegacy:
    return parseFRMArg(Operands);
  case MCK_FenceArg:
    return parseFenceArg(Operands);
  case MCK_GPRAsFPR:
    return parseGPRAsFPR(Operands);
  case MCK_GPRF64AsFPR:
    return parseGPRAsFPR(Operands);
  case MCK_GPRPairAsFPR:
    return parseGPRAsFPR(Operands);
  case MCK_GPRPairRV32:
    return parseGPRPair<false>(Operands);
  case MCK_GPRPairRV64:
    return parseGPRPair<true>(Operands);
  case MCK_InsnCDirectiveOpcode:
    return parseInsnCDirectiveOpcode(Operands);
  case MCK_InsnDirectiveOpcode:
    return parseInsnDirectiveOpcode(Operands);
  case MCK_LoadFPImm:
    return parseFPImm(Operands);
  case MCK_NegStackAdj:
    return parseZcmpNegStackAdj(Operands);
  case MCK_PseudoJumpSymbol:
    return parsePseudoJumpSymbol(Operands);
  case MCK_RTZArg:
    return parseFRMArg(Operands);
  case MCK_Rlist:
    return parseReglist(Operands);
  case MCK_SImm21Lsb0JAL:
    return parseJALOffset(Operands);
  case MCK_StackAdj:
    return parseZcmpStackAdj(Operands);
  case MCK_TLSDESCCallSymbol:
    return parseOperandWithModifier(Operands);
  case MCK_TPRelAddSymbol:
    return parseOperandWithModifier(Operands);
  case MCK_RVVMaskRegOpOperand:
    return parseMaskReg(Operands);
  case MCK_ZeroOffsetMemOpOperand:
    return parseZeroOffsetMemOp(Operands);
  case MCK_VTypeI10:
    return parseVTypeI(Operands);
  case MCK_VTypeI11:
    return parseVTypeI(Operands);
  default:
    return ParseStatus::NoMatch;
  }
  return ParseStatus::NoMatch;
}

ParseStatus RISCVAsmParser::
MatchOperandParserImpl(OperandVector &Operands,
                       StringRef Mnemonic,
                       bool ParseForAllFeatures) {
  // Get the current feature set.
  const FeatureBitset &AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size() - 1;
  // Search the table.
  auto MnemonicRange =
    std::equal_range(std::begin(OperandMatchTable), std::end(OperandMatchTable),
                     Mnemonic, LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return ParseStatus::NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    const FeatureBitset &RequiredFeatures = FeatureBitsets[it->RequiredFeaturesIdx];
    if (!ParseForAllFeatures && (AvailableFeatures & RequiredFeatures) != RequiredFeatures)
      continue;

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    ParseStatus Result = tryCustomParseOperand(Operands, it->Class);
    if (!Result.isNoMatch())
      return Result;
  }

  // Okay, we had no match.
  return ParseStatus::NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION


#ifdef GET_MNEMONIC_SPELL_CHECKER
#undef GET_MNEMONIC_SPELL_CHECKER

static std::string RISCVMnemonicSpellCheck(StringRef S, const FeatureBitset &FBS, unsigned VariantID) {
  const unsigned MaxEditDist = 2;
  std::vector<StringRef> Candidates;
  StringRef Prev = "";

  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }

  for (auto I = Start; I < End; I++) {
    // Ignore unsupported instructions.
    const FeatureBitset &RequiredFeatures = FeatureBitsets[I->RequiredFeaturesIdx];
    if ((FBS & RequiredFeatures) != RequiredFeatures)
      continue;

    StringRef T = I->getMnemonic();
    // Avoid recomputing the edit distance for the same string.
    if (T == Prev)
      continue;

    Prev = T;
    unsigned Dist = S.edit_distance(T, false, MaxEditDist);
    if (Dist <= MaxEditDist)
      Candidates.push_back(T);
  }

  if (Candidates.empty())
    return "";

  std::string Res = ", did you mean: ";
  unsigned i = 0;
  for (; i < Candidates.size() - 1; i++)
    Res += Candidates[i].str() + ", ";
  return Res + Candidates[i].str() + "?";
}

#endif // GET_MNEMONIC_SPELL_CHECKER


#ifdef GET_MNEMONIC_CHECKER
#undef GET_MNEMONIC_CHECKER

static bool RISCVCheckMnemonic(StringRef Mnemonic,
                                const FeatureBitset &AvailableFeatures,
                                unsigned VariantID) {
  // Process all MnemonicAliases to remap the mnemonic.
  applyMnemonicAliases(Mnemonic, AvailableFeatures, VariantID);

  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }

  // Search the table.
  auto MnemonicRange = std::equal_range(Start, End, Mnemonic, LessOpcode());

  if (MnemonicRange.first == MnemonicRange.second)
    return false;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    const FeatureBitset &RequiredFeatures =
      FeatureBitsets[it->RequiredFeaturesIdx];
    if ((AvailableFeatures & RequiredFeatures) == RequiredFeatures)
      return true;
  }
  return false;
}

#endif // GET_MNEMONIC_CHECKER

