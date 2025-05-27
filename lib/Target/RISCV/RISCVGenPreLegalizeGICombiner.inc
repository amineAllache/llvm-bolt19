/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* RISCVPreLegalizerCombinerImpl Combiner Match Table                         *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_GICOMBINER_DEPS
#include "llvm/ADT/SparseBitVector.h"
namespace llvm {
extern cl::OptionCategory GICombinerOptionCategory;
} // end namespace llvm
#endif // ifdef GET_GICOMBINER_DEPS

#ifdef GET_GICOMBINER_TYPES
struct RISCVPreLegalizerCombinerImplRuleConfig {
  SparseBitVector<> DisabledRules;

  bool isRuleEnabled(unsigned RuleID) const;
  bool parseCommandLineOption();
  bool setRuleEnabled(StringRef RuleIdentifier);
  bool setRuleDisabled(StringRef RuleIdentifier);
};

static std::optional<uint64_t> getRuleIdxForIdentifier(StringRef RuleIdentifier) {
  uint64_t I;
  // getAtInteger(...) returns false on success
  bool Parsed = !RuleIdentifier.getAsInteger(0, I);
  if (Parsed)
    return I;

#ifndef NDEBUG
  switch (RuleIdentifier.size()) {
  default: break;
  case 9:	 // 5 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "opy_prop", 8) != 0)
        break;
      return 8;	 // "copy_prop"
    case 'm':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "tch_ors", 7) != 0)
          break;
        return 180;	 // "match_ors"
      case 'u':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "lo_by_", 6) != 0)
          break;
        switch (RuleIdentifier[8]) {
        default: break;
        case '0':	 // 1 string to match.
          return 130;	 // "mulo_by_0"
        case '2':	 // 1 string to match.
          return 129;	 // "mulo_by_2"
        }
        break;
      }
      break;
    case 'n':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "neg_zext", 8) != 0)
        break;
      return 187;	 // "nneg_zext"
    }
    break;
  case 10:	 // 6 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "2p_to_p2i", 9) != 0)
        break;
      return 74;	 // "i2p_to_p2i"
    case 'm':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "tch_ands", 8) != 0)
          break;
        return 179;	 // "match_ands"
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "l_to_shl", 8) != 0)
          break;
        return 9;	 // "mul_to_shl"
      }
      break;
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "2i_to_i2p", 9) != 0)
        break;
      return 73;	 // "p2i_to_i2p"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_trunc", 9) != 0)
        break;
      return 185;	 // "sext_trunc"
    case 'z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_trunc", 9) != 0)
        break;
      return 186;	 // "zext_trunc"
    }
    break;
  case 11:	 // 5 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "dd_sub_reg", 10) != 0)
        break;
      return 79;	 // "add_sub_reg"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "atch_addos", 10) != 0)
        break;
      return 184;	 // "match_addos"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ub_add_reg", 10) != 0)
        break;
      return 173;	 // "sub_add_reg"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runc_shift", 10) != 0)
        break;
      return 119;	 // "trunc_shift"
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nmerge_cst", 10) != 0)
        break;
      return 114;	 // "unmerge_cst"
    }
    break;
  case 12:	 // 10 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'A':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "PlusBMinusB", 11) != 0)
        break;
      return 2;	 // "APlusBMinusB"
    case 'B':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "MinusAPlusA", 11) != 0)
        break;
      return 3;	 // "BMinusAPlusA"
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "dde_to_addo", 11) != 0)
        break;
      return 131;	 // "adde_to_addo"
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xt_ext_fold", 11) != 0)
        break;
      return 110;	 // "ext_ext_fold"
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "sub_to_fneg", 11) != 0)
        break;
      return 176;	 // "fsub_to_fneg"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ulh_to_lshr", 11) != 0)
        break;
      return 161;	 // "mulh_to_lshr"
    case 'n':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ot_cmp_fold", 11) != 0)
        break;
      return 111;	 // "not_cmp_fold"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "edundant_or", 11) != 0)
        break;
      return 104;	 // "redundant_or"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "div_by_pow2", 11) != 0)
        break;
      return 159;	 // "sdiv_by_pow2"
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "div_by_pow2", 11) != 0)
        break;
      return 160;	 // "udiv_by_pow2"
    }
    break;
  case 13:	 // 13 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "dd_of_vscale", 12) != 0)
        break;
      return 44;	 // "add_of_vscale"
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ommute_shift", 12) != 0)
        break;
      return 147;	 // "commute_shift"
    case 'l':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "oad_and_mask", 12) != 0)
        break;
      return 54;	 // "load_and_mask"
    case 'm':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "tch_selects", 11) != 0)
          break;
        return 101;	 // "match_selects"
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "rge_unmerge", 11) != 0)
          break;
        return 117;	 // "merge_unmerge"
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "l_of_vscale", 11) != 0)
          break;
        return 45;	 // "mul_of_vscale"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "edundant_and", 12) != 0)
        break;
      return 102;	 // "redundant_and"
    case 's':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "iv_by_const", 11) != 0)
          break;
        return 158;	 // "sdiv_by_const"
      case 'h':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "l_of_vscale", 11) != 0)
          break;
        return 46;	 // "shl_of_vscale"
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "b_of_vscale", 11) != 0)
          break;
        return 47;	 // "sub_of_vscale"
      }
      break;
    case 'u':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "iv_by_const", 11) != 0)
          break;
        return 157;	 // "udiv_by_const"
      case 'n':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "merge_", 6) != 0)
          break;
        switch (RuleIdentifier[8]) {
        default: break;
        case 'm':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+9, "erge", 4) != 0)
            break;
          return 113;	 // "unmerge_merge"
        case 'u':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+9, "ndef", 4) != 0)
            break;
          return 66;	 // "unmerge_undef"
        }
        break;
      }
      break;
    }
    break;
  case 14:	 // 8 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 2 strings to match.
      if (RuleIdentifier[1] != 'i')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "op_same_val", 11) != 0)
          break;
        return 70;	 // "binop_same_val"
      case 't':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "reverse_shl", 11) != 0)
          break;
        return 145;	 // "bitreverse_shl"
      }
      break;
    case 'f':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "bs_fneg_fold", 12) != 0)
          break;
        return 156;	 // "fabs_fneg_fold"
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "eg_fneg_fold", 12) != 0)
          break;
        return 76;	 // "fneg_fneg_fold"
      }
      break;
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ul_by_neg_one", 13) != 0)
        break;
      return 11;	 // "mul_by_neg_one"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "eassoc_ptradd", 13) != 0)
        break;
      return 91;	 // "reassoc_ptradd"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "hifts_too_big", 13) != 0)
        break;
      return 90;	 // "shifts_too_big"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runc_ext_fold", 13) != 0)
        break;
      return 118;	 // "trunc_ext_fold"
    }
    break;
  case 15:	 // 9 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'A':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "PlusZeroMinusB", 14) != 0)
        break;
      return 1;	 // "APlusZeroMinusB"
    case 'Z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "eroMinusAPlusB", 14) != 0)
        break;
      return 0;	 // "ZeroMinusAPlusB"
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "itreverse_lshr", 14) != 0)
        break;
      return 146;	 // "bitreverse_lshr"
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtending_loads", 14) != 0)
        break;
      return 53;	 // "extending_loads"
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "dempotent_prop", 14) != 0)
        break;
      return 12;	 // "idempotent_prop"
    case 'l':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "oad_or_combine", 14) != 0)
        break;
      return 138;	 // "load_or_combine"
    case 'o':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "verlapping_and", 14) != 0)
        break;
      return 128;	 // "overlapping_and"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "elect_same_val", 14) != 0)
        break;
      return 68;	 // "select_same_val"
    case 'z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_trunc_fold", 14) != 0)
        break;
      return 106;	 // "zext_trunc_fold"
    }
    break;
  case 16:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 's':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "elect_", 6) != 0)
        break;
      switch (RuleIdentifier[7]) {
      default: break;
      case 't':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+8, "o_minmax", 8) != 0)
          break;
        return 174;	 // "select_to_minmax"
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+8, "ndef_cmp", 8) != 0)
          break;
        return 98;	 // "select_undef_cmp"
      }
      break;
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ndef_to_fp_zero", 15) != 0)
        break;
      return 56;	 // "undef_to_fp_zero"
    }
    break;
  case 17:	 // 12 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'A':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "PlusBMinus", 10) != 0)
        break;
      switch (RuleIdentifier[11]) {
      default: break;
      case 'A':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+12, "plusC", 5) != 0)
          break;
        return 6;	 // "APlusBMinusAplusC"
      case 'C':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+12, "PlusA", 5) != 0)
          break;
        return 7;	 // "APlusBMinusCPlusA"
      }
      break;
    case 'a':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "d_p2i_to_ptradd", 15) != 0)
          break;
        return 10;	 // "add_p2i_to_ptradd"
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "yext_trunc_fold", 15) != 0)
          break;
        return 75;	 // "anyext_trunc_fold"
      }
      break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "onstant_fold_fma", 16) != 0)
        break;
      return 154;	 // "constant_fold_fma"
    case 'd':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "iv_rem_to_divrem", 16) != 0)
        break;
      return 139;	 // "div_rem_to_divrem"
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "rase_undef_store", 16) != 0)
        break;
      return 65;	 // "erase_undef_store"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "tr_add_with_zero", 16) != 0)
        break;
      return 135;	 // "ptr_add_with_zero"
    case 's':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "lect_to_iminmax", 15) != 0)
          break;
        return 100;	 // "select_to_iminmax"
      case 'h':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ift_immed_chain", 15) != 0)
          break;
        return 136;	 // "shift_immed_chain"
      }
      break;
    case 'u':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "def_to_int_zero", 15) != 0)
          break;
        return 57;	 // "undef_to_int_zero"
      case 'r':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "em_pow2_to_mask", 15) != 0)
          break;
        return 105;	 // "urem_pow2_to_mask"
      }
      break;
    }
    break;
  case 18:	 // 9 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'A':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "MinusBPlus", 10) != 0)
        break;
      switch (RuleIdentifier[11]) {
      default: break;
      case 'B':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+12, "MinusC", 6) != 0)
          break;
        return 5;	 // "AMinusBPlusBMinusC"
      case 'C':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+12, "MinusA", 6) != 0)
          break;
        return 4;	 // "AMinusBPlusCMinusA"
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_left_to_zero", 17) != 0)
        break;
      return 71;	 // "binop_left_to_zero"
    case 'c':	 // 3 strings to match.
      if (RuleIdentifier[1] != 'o')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "bine_minmax_nan", 15) != 0)
          break;
        return 132;	 // "combine_minmax_nan"
      case 'n':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+3, "stant_fold_f", 12) != 0)
          break;
        switch (RuleIdentifier[15]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+16, "bs", 2) != 0)
            break;
          return 121;	 // "constant_fold_fabs"
        case 'n':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+16, "eg", 2) != 0)
            break;
          return 120;	 // "constant_fold_fneg"
        }
        break;
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xpand_const_fpowi", 17) != 0)
        break;
      return 133;	 // "expand_const_fpowi"
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ptrunc_fpext_fold", 17) != 0)
        break;
      return 84;	 // "fptrunc_fpext_fold"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_inreg_of_load", 17) != 0)
        break;
      return 95;	 // "sext_inreg_of_load"
    }
    break;
  case 19:	 // 12 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_right_to_zero", 18) != 0)
        break;
      return 72;	 // "binop_right_to_zero"
    case 'c':	 // 4 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "onst", 4) != 0)
        break;
      switch (RuleIdentifier[5]) {
      default: break;
      case '_':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+6, "ptradd_to_i2p", 13) != 0)
          break;
        return 127;	 // "const_ptradd_to_i2p"
      case 'a':	 // 3 strings to match.
        if (memcmp(RuleIdentifier.data()+6, "nt_fold_", 8) != 0)
          break;
        switch (RuleIdentifier[14]) {
        default: break;
        case 'b':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+15, "inop", 4) != 0)
            break;
          return 152;	 // "constant_fold_binop"
        case 'f':	 // 2 strings to match.
          switch (RuleIdentifier[15]) {
          default: break;
          case 'l':	 // 1 string to match.
            if (memcmp(RuleIdentifier.data()+16, "og2", 3) != 0)
              break;
            return 123;	 // "constant_fold_flog2"
          case 's':	 // 1 string to match.
            if (memcmp(RuleIdentifier.data()+16, "qrt", 3) != 0)
              break;
            return 122;	 // "constant_fold_fsqrt"
          }
          break;
        }
        break;
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtend_through_phis", 18) != 0)
        break;
      return 87;	 // "extend_through_phis"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "tr_add_immed_chain", 18) != 0)
        break;
      return 93;	 // "ptr_add_immed_chain"
    case 'r':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "assoc_comm_binops", 17) != 0)
          break;
        return 92;	 // "reassoc_comm_binops"
      case 'i':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ght_identity_zero", 17) != 0)
          break;
        return 69;	 // "right_identity_zero"
      }
      break;
    case 's':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "lect_constant_cmp", 17) != 0)
          break;
        return 99;	 // "select_constant_cmp"
      case 'i':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "mplify_add_to_sub", 17) != 0)
          break;
        return 88;	 // "simplify_add_to_sub"
      }
      break;
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nary_undef_to_zero", 18) != 0)
        break;
      return 61;	 // "unary_undef_to_zero"
    }
    break;
  case 20:	 // 5 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nd_or_disjoint_mask", 19) != 0)
        break;
      return 163;	 // "and_or_disjoint_mask"
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "itcast_bitcast_fold", 19) != 0)
        break;
      return 83;	 // "bitcast_bitcast_fold"
    case 'r':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "edu", 3) != 0)
        break;
      switch (RuleIdentifier[4]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+5, "e_shl_of_extend", 15) != 0)
          break;
        return 96;	 // "reduce_shl_of_extend"
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+5, "dant_sext_inreg", 15) != 0)
          break;
        return 103;	 // "redundant_sext_inreg"
      }
      break;
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nmerge_zext_to_zext", 19) != 0)
        break;
      return 116;	 // "unmerge_zext_to_zext"
    }
    break;
  case 21:	 // 7 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 3 strings to match.
      if (RuleIdentifier[1] != 'o')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "bine_concat_vector", 18) != 0)
          break;
        return 181;	 // "combine_concat_vector"
      case 'n':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+3, "stant_fold_", 11) != 0)
          break;
        switch (RuleIdentifier[14]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+15, "ast_op", 6) != 0)
            break;
          return 155;	 // "constant_fold_cast_op"
        case 'f':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+15, "ptrunc", 6) != 0)
            break;
          return 124;	 // "constant_fold_fptrunc"
        }
        break;
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nsert_vector_elt_oob", 20) != 0)
        break;
      return 18;	 // "insert_vector_elt_oob"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_one_fp", 20) != 0)
        break;
      return 78;	 // "right_identity_one_fp"
    case 'u':	 // 2 strings to match.
      if (RuleIdentifier[1] != 'n')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "ef_to_negative_one", 18) != 0)
          break;
        return 58;	 // "undef_to_negative_one"
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "erge_dead_to_trunc", 18) != 0)
          break;
        return 115;	 // "unmerge_dead_to_trunc"
      }
      break;
    }
    break;
  case 22:	 // 12 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 2 strings to match.
      if (RuleIdentifier[1] != 'o')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "bine_shuffle_concat", 19) != 0)
          break;
        return 188;	 // "combine_shuffle_concat"
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "stant_fold_fp_binop", 19) != 0)
          break;
        return 153;	 // "constant_fold_fp_binop"
      }
      break;
    case 'f':	 // 4 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'o':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ld_binop_into_select", 20) != 0)
          break;
        return 172;	 // "fold_binop_into_select"
      case 'u':	 // 3 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "nnel_shift_", 11) != 0)
          break;
        switch (RuleIdentifier[13]) {
        default: break;
        case 'l':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+14, "eft_zero", 8) != 0)
            break;
          return 143;	 // "funnel_shift_left_zero"
        case 'o':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+14, "vershift", 8) != 0)
            break;
          return 144;	 // "funnel_shift_overshift"
        case 't':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+14, "o_rotate", 8) != 0)
            break;
          return 141;	 // "funnel_shift_to_rotate"
        }
        break;
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "cmp_to_lhs_known_bits", 21) != 0)
        break;
      return 108;	 // "icmp_to_lhs_known_bits"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ropagate_undef_any_op", 21) != 0)
        break;
      return 62;	 // "propagate_undef_any_op"
    case 'r':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "dundant_neg_operands", 20) != 0)
          break;
        return 162;	 // "redundant_neg_operands"
      case 'i':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ght_identity_one_int", 20) != 0)
          break;
        return 77;	 // "right_identity_one_int"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "hl_ashr_to_sext_inreg", 21) != 0)
        break;
      return 94;	 // "shl_ashr_to_sext_inreg"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runc_buildvector_fold", 21) != 0)
        break;
      return 81;	 // "trunc_buildvector_fold"
    }
    break;
  case 23:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "unnel_shift_right_zero", 22) != 0)
        break;
      return 142;	 // "funnel_shift_right_zero"
    case 'i':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "tof_const_zero_fold_", 20) != 0)
        break;
      switch (RuleIdentifier[21]) {
      default: break;
      case 's':	 // 1 string to match.
        if (RuleIdentifier[22] != 'i')
          break;
        return 125;	 // "itof_const_zero_fold_si"
      case 'u':	 // 1 string to match.
        if (RuleIdentifier[22] != 'i')
          break;
        return 126;	 // "itof_const_zero_fold_ui"
      }
      break;
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ropagate_undef_all_ops", 22) != 0)
        break;
      return 63;	 // "propagate_undef_all_ops"
    }
    break;
  case 24:	 // 5 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_left_undef_to_zero", 23) != 0)
        break;
      return 59;	 // "binop_left_undef_to_zero"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "atch_extract_of_element", 23) != 0)
        break;
      return 17;	 // "match_extract_of_element"
    case 'n':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "arrow_binop_feeding_and", 23) != 0)
        break;
      return 97;	 // "narrow_binop_feeding_and"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_inreg_to_zext_inreg", 23) != 0)
        break;
      return 109;	 // "sext_inreg_to_zext_inreg"
    case 'x':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "or_of_and_with_same_reg", 23) != 0)
        break;
      return 134;	 // "xor_of_and_with_same_reg"
    }
    break;
  case 25:	 // 5 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'i':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "tfield_extract_from_", 20) != 0)
          break;
        switch (RuleIdentifier[22]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+23, "nd", 2) != 0)
            break;
          return 149;	 // "bitfield_extract_from_and"
        case 's':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+23, "hr", 2) != 0)
            break;
          return 150;	 // "bitfield_extract_from_shr"
        }
        break;
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ildvector_identity_fold", 23) != 0)
          break;
        return 80;	 // "buildvector_identity_fold"
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtract_vec_elt_build_vec", 24) != 0)
        break;
      return 51;	 // "extract_vec_elt_build_vec"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_neg_one_fp", 24) != 0)
        break;
      return 86;	 // "right_identity_neg_one_fp"
    }
    break;
  case 26:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_right_undef_to_undef", 25) != 0)
        break;
      return 60;	 // "binop_right_undef_to_undef"
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ommute_fp_constant_to_rhs", 25) != 0)
        break;
      return 178;	 // "commute_fp_constant_to_rhs"
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "unnel_shift_from_or_shift", 25) != 0)
        break;
      return 140;	 // "funnel_shift_from_or_shift"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_neg_zero_fp", 25) != 0)
        break;
      return 85;	 // "right_identity_neg_zero_fp"
    }
    break;
  case 27:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ommute_int_constant_to_rhs", 26) != 0)
        break;
      return 177;	 // "commute_int_constant_to_rhs"
    case 'd':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ouble_icmp_zero_or_combine", 26) != 0)
        break;
      return 183;	 // "double_icmp_zero_or_combine"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "edundant_binop_in_equality", 26) != 0)
        break;
      return 175;	 // "redundant_binop_in_equality"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runc_lshr_buildvector_fold", 26) != 0)
        break;
      return 82;	 // "trunc_lshr_buildvector_fold"
    }
    break;
  case 28:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'd':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ouble_icmp_zero_and_combine", 27) != 0)
        break;
      return 182;	 // "double_icmp_zero_and_combine"
    case 'o':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "pt_brcond_by_inverting_cond", 27) != 0)
        break;
      return 112;	 // "opt_brcond_by_inverting_cond"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ropagate_undef_shuffle_mask", 27) != 0)
        break;
      return 64;	 // "propagate_undef_shuffle_mask"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "hift_of_shifted_logic_chain", 27) != 0)
        break;
      return 137;	 // "shift_of_shifted_logic_chain"
    }
    break;
  case 29:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "itfield_extract_from_shr_and", 28) != 0)
        break;
      return 151;	 // "bitfield_extract_from_shr_and"
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_extracted_vector_load", 28) != 0)
        break;
      return 55;	 // "combine_extracted_vector_load"
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "cmp_to_true_false_known_bits", 28) != 0)
        break;
      return 107;	 // "icmp_to_true_false_known_bits"
    }
    break;
  case 30:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "freeze_of_non_undef_non_poison", 30) != 0)
      break;
    return 48;	 // "freeze_of_non_undef_non_poison"
  case 31:	 // 2 strings to match.
    if (memcmp(RuleIdentifier.data()+0, "insert_vector_element_", 22) != 0)
      break;
    switch (RuleIdentifier[22]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+23, "lt_undef", 8) != 0)
        break;
      return 16;	 // "insert_vector_element_elt_undef"
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+23, "dx_undef", 8) != 0)
        break;
      return 15;	 // "insert_vector_element_idx_undef"
    }
    break;
  case 32:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "itfield_extract_from_sext_inreg", 31) != 0)
        break;
      return 148;	 // "bitfield_extract_from_sext_inreg"
    case 'c':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_f", 8) != 0)
        break;
      switch (RuleIdentifier[9]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+10, "dd_fmul_to_fmad_or_fma", 22) != 0)
          break;
        return 164;	 // "combine_fadd_fmul_to_fmad_or_fma"
      case 's':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+10, "ub_fmul_to_fmad_or_fma", 22) != 0)
          break;
        return 168;	 // "combine_fsub_fmul_to_fmad_or_fma"
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtract_vector_element_not_const", 31) != 0)
        break;
      return 19;	 // "extract_vector_element_not_const"
    }
    break;
  case 34:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "extract_all_elts_from_build_vector", 34) != 0)
      break;
    return 52;	 // "extract_all_elts_from_build_vector"
  case 36:	 // 11 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_", 7) != 0)
        break;
      switch (RuleIdentifier[8]) {
      default: break;
      case 'f':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+9, "add_fma_fmul_to_fmad_or_fma", 27) != 0)
          break;
        return 166;	 // "combine_fadd_fma_fmul_to_fmad_or_fma"
      case 'i':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+9, "nsert_vec_elts_build_vector", 27) != 0)
          break;
        return 50;	 // "combine_insert_vec_elts_build_vector"
      }
      break;
    case 'e':	 // 7 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "xtract_vector_element_build_vector", 34) != 0)
        break;
      switch (RuleIdentifier[35]) {
      default: break;
      case '2':	 // 1 string to match.
        return 21;	 // "extract_vector_element_build_vector2"
      case '3':	 // 1 string to match.
        return 22;	 // "extract_vector_element_build_vector3"
      case '4':	 // 1 string to match.
        return 23;	 // "extract_vector_element_build_vector4"
      case '5':	 // 1 string to match.
        return 24;	 // "extract_vector_element_build_vector5"
      case '7':	 // 1 string to match.
        return 25;	 // "extract_vector_element_build_vector7"
      case '8':	 // 1 string to match.
        return 26;	 // "extract_vector_element_build_vector8"
      case '9':	 // 1 string to match.
        return 27;	 // "extract_vector_element_build_vector9"
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nsert_extract_vec_elt_out_of_bounds", 35) != 0)
        break;
      return 67;	 // "insert_extract_vec_elt_out_of_bounds"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "atch_extract_of_element_undef_index", 35) != 0)
        break;
      return 14;	 // "match_extract_of_element_undef_index"
    }
    break;
  case 37:	 // 11 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_fsub_fneg_fmul_to_fmad_or_fma", 36) != 0)
        break;
      return 169;	 // "combine_fsub_fneg_fmul_to_fmad_or_fma"
    case 'e':	 // 8 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "xtract_vector_element_", 22) != 0)
        break;
      switch (RuleIdentifier[23]) {
      default: break;
      case 'b':	 // 7 strings to match.
        if (memcmp(RuleIdentifier.data()+24, "uild_vector1", 12) != 0)
          break;
        switch (RuleIdentifier[36]) {
        default: break;
        case '0':	 // 1 string to match.
          return 28;	 // "extract_vector_element_build_vector10"
        case '1':	 // 1 string to match.
          return 29;	 // "extract_vector_element_build_vector11"
        case '2':	 // 1 string to match.
          return 30;	 // "extract_vector_element_build_vector12"
        case '3':	 // 1 string to match.
          return 31;	 // "extract_vector_element_build_vector13"
        case '4':	 // 1 string to match.
          return 32;	 // "extract_vector_element_build_vector14"
        case '5':	 // 1 string to match.
          return 33;	 // "extract_vector_element_build_vector15"
        case '6':	 // 1 string to match.
          return 34;	 // "extract_vector_element_build_vector16"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+24, "huffle_vector", 13) != 0)
          break;
        return 42;	 // "extract_vector_element_shuffle_vector"
      }
      break;
    case 'h':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "oist_logic_op_with_same_opcode_hands", 36) != 0)
        break;
      return 89;	 // "hoist_logic_op_with_same_opcode_hands"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "atch_extract_of_element_undef_vector", 36) != 0)
        break;
      return 13;	 // "match_extract_of_element_undef_vector"
    }
    break;
  case 38:	 // 2 strings to match.
    if (memcmp(RuleIdentifier.data()+0, "combine_f", 9) != 0)
      break;
    switch (RuleIdentifier[9]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+10, "dd_fpext_fmul_to_fmad_or_fma", 28) != 0)
        break;
      return 165;	 // "combine_fadd_fpext_fmul_to_fmad_or_fma"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+10, "ub_fpext_fmul_to_fmad_or_fma", 28) != 0)
        break;
      return 170;	 // "combine_fsub_fpext_fmul_to_fmad_or_fma"
    }
    break;
  case 40:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "extract_vector_element_different_indices", 40) != 0)
      break;
    return 20;	 // "extract_vector_element_different_indices"
  case 42:	 // 8 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_fadd_fpext_fma_fmul_to_fmad_or_fma", 41) != 0)
        break;
      return 167;	 // "combine_fadd_fpext_fma_fmul_to_fmad_or_fma"
    case 'e':	 // 7 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "xtract_vector_element_build_vector_trunc", 40) != 0)
        break;
      switch (RuleIdentifier[41]) {
      default: break;
      case '2':	 // 1 string to match.
        return 35;	 // "extract_vector_element_build_vector_trunc2"
      case '3':	 // 1 string to match.
        return 36;	 // "extract_vector_element_build_vector_trunc3"
      case '4':	 // 1 string to match.
        return 37;	 // "extract_vector_element_build_vector_trunc4"
      case '5':	 // 1 string to match.
        return 38;	 // "extract_vector_element_build_vector_trunc5"
      case '6':	 // 1 string to match.
        return 39;	 // "extract_vector_element_build_vector_trunc6"
      case '7':	 // 1 string to match.
        return 40;	 // "extract_vector_element_build_vector_trunc7"
      case '8':	 // 1 string to match.
        return 41;	 // "extract_vector_element_build_vector_trunc8"
      }
      break;
    }
    break;
  case 43:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "combine_fsub_fpext_fneg_fmul_to_fmad_or_fma", 43) != 0)
      break;
    return 171;	 // "combine_fsub_fpext_fneg_fmul_to_fmad_or_fma"
  case 44:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "insert_vector_element_extract_vector_element", 44) != 0)
      break;
    return 43;	 // "insert_vector_element_extract_vector_element"
  case 46:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "push_freeze_to_prevent_poison_from_propagating", 46) != 0)
      break;
    return 49;	 // "push_freeze_to_prevent_poison_from_propagating"
  }
#endif // ifndef NDEBUG

  return std::nullopt;
}
static std::optional<std::pair<uint64_t, uint64_t>> getRuleRangeForIdentifier(StringRef RuleIdentifier) {
  std::pair<StringRef, StringRef> RangePair = RuleIdentifier.split('-');
  if (!RangePair.second.empty()) {
    const auto First = getRuleIdxForIdentifier(RangePair.first);
    const auto Last = getRuleIdxForIdentifier(RangePair.second);
    if (!First || !Last)
      return std::nullopt;
    if (First >= Last)
      report_fatal_error("Beginning of range should be before end of range");
    return {{*First, *Last + 1}};
  }
  if (RangePair.first == "*") {
    return {{0, 189}};
  }
  const auto I = getRuleIdxForIdentifier(RangePair.first);
  if (!I)
    return std::nullopt;
  return {{*I, *I + 1}};
}

bool RISCVPreLegalizerCombinerImplRuleConfig::setRuleEnabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.reset(I);
  return true;
}

bool RISCVPreLegalizerCombinerImplRuleConfig::setRuleDisabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.set(I);
  return true;
}

static std::vector<std::string> RISCVPreLegalizerCombinerOption;
static cl::list<std::string> RISCVPreLegalizerCombinerDisableOption(
    "riscvprelegalizercombiner-disable-rule",
    cl::desc("Disable one or more combiner rules temporarily in the RISCVPreLegalizerCombiner pass"),
    cl::CommaSeparated,
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &Str) {
      RISCVPreLegalizerCombinerOption.push_back(Str);
    }));
static cl::list<std::string> RISCVPreLegalizerCombinerOnlyEnableOption(
    "riscvprelegalizercombiner-only-enable-rule",
    cl::desc("Disable all rules in the RISCVPreLegalizerCombiner pass then re-enable the specified ones"),
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &CommaSeparatedArg) {
      StringRef Str = CommaSeparatedArg;
      RISCVPreLegalizerCombinerOption.push_back("*");
      do {
        auto X = Str.split(",");
        RISCVPreLegalizerCombinerOption.push_back(("!" + X.first).str());
        Str = X.second;
      } while (!Str.empty());
    }));


bool RISCVPreLegalizerCombinerImplRuleConfig::isRuleEnabled(unsigned RuleID) const {
    return  !DisabledRules.test(RuleID);
}
bool RISCVPreLegalizerCombinerImplRuleConfig::parseCommandLineOption() {
  for (StringRef Identifier : RISCVPreLegalizerCombinerOption) {
    bool Enabled = Identifier.consume_front("!");
    if (Enabled && !setRuleEnabled(Identifier))
      return false;
    if (!Enabled && !setRuleDisabled(Identifier))
      return false;
  }
  return true;
}

#endif // ifdef GET_GICOMBINER_TYPES

#ifdef GET_GICOMBINER_TYPES
const unsigned MAX_SUBTARGET_PREDICATES = 0;
using PredicateBitset = llvm::Bitset<MAX_SUBTARGET_PREDICATES>;
#endif // ifdef GET_GICOMBINER_TYPES

#ifdef GET_GICOMBINER_CLASS_MEMBERS
PredicateBitset AvailableModuleFeatures;
mutable PredicateBitset AvailableFunctionFeatures;
PredicateBitset getAvailableFeatures() const {
  return AvailableModuleFeatures | AvailableFunctionFeatures;
}
PredicateBitset
computeAvailableModuleFeatures(const RISCVSubtarget *Subtarget) const;
PredicateBitset
computeAvailableFunctionFeatures(const RISCVSubtarget *Subtarget,
                                 const MachineFunction *MF) const;
void setupGeneratedPerFunctionState(MachineFunction &MF) override;
#endif // ifdef GET_GICOMBINER_CLASS_MEMBERS
#ifdef GET_GICOMBINER_CLASS_MEMBERS
  mutable MatcherState State;
  typedef ComplexRendererFns(RISCVPreLegalizerCombinerImpl::*ComplexMatcherMemFn)(MachineOperand &) const;
  typedef void(RISCVPreLegalizerCombinerImpl::*CustomRendererFn)(MachineInstrBuilder &, const MachineInstr &, int) const;
  const ExecInfoTy<PredicateBitset, ComplexMatcherMemFn, CustomRendererFn> ExecInfo;
  static RISCVPreLegalizerCombinerImpl::ComplexMatcherMemFn ComplexPredicateFns[];
  static RISCVPreLegalizerCombinerImpl::CustomRendererFn CustomRenderers[];
  bool testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const override;
  bool testImmPredicate_APInt(unsigned PredicateID, const APInt &Imm) const override;
  bool testImmPredicate_APFloat(unsigned PredicateID, const APFloat &Imm) const override;
  const uint8_t *getMatchTable() const override;
  bool testMIPredicate_MI(unsigned PredicateID, const MachineInstr &MI, const MatcherState &State) const override;
  bool testSimplePredicate(unsigned PredicateID) const override;
  bool runCustomAction(unsigned FnID, const MatcherState &State, NewMIVector &OutMIs) const override;
#endif // ifdef GET_GICOMBINER_CLASS_MEMBERS

#ifdef GET_GICOMBINER_IMPL
// LLT Objects.
enum {
  GILLT_s1,
};
const static size_t NumTypeObjects = 1;
const static LLT TypeObjects[] = {
  LLT::scalar(1),
};

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
};

PredicateBitset RISCVPreLegalizerCombinerImpl::
computeAvailableModuleFeatures(const RISCVSubtarget *Subtarget) const {
  PredicateBitset Features{};
  return Features;
}

void RISCVPreLegalizerCombinerImpl::setupGeneratedPerFunctionState(MachineFunction &MF) {
  AvailableFunctionFeatures = computeAvailableFunctionFeatures((const RISCVSubtarget *)&MF.getSubtarget(), &MF);
}
PredicateBitset RISCVPreLegalizerCombinerImpl::
computeAvailableFunctionFeatures(const RISCVSubtarget *Subtarget, const MachineFunction *MF) const {
  PredicateBitset Features{};
  return Features;
}

// Feature bitsets.
enum {
  GIFBS_Invalid,
};
constexpr static PredicateBitset FeatureBitsets[] {
  {}, // GIFBS_Invalid
};

// ComplexPattern predicates.
enum {
  GICP_Invalid,
};
// See constructor for table contents

RISCVPreLegalizerCombinerImpl::ComplexMatcherMemFn
RISCVPreLegalizerCombinerImpl::ComplexPredicateFns[] = {
  nullptr, // GICP_Invalid
};

enum {
  GICXXPred_MI_Predicate_GICombiner0 = GICXXPred_Invalid + 1,
  GICXXPred_MI_Predicate_GICombiner1,
  GICXXPred_MI_Predicate_GICombiner2,
  GICXXPred_MI_Predicate_GICombiner3,
  GICXXPred_MI_Predicate_GICombiner4,
  GICXXPred_MI_Predicate_GICombiner5,
  GICXXPred_MI_Predicate_GICombiner6,
  GICXXPred_MI_Predicate_GICombiner7,
  GICXXPred_MI_Predicate_GICombiner8,
};
bool RISCVPreLegalizerCombinerImpl::testMIPredicate_MI(unsigned PredicateID, const MachineInstr & MI, const MatcherState &State) const {
  switch (PredicateID) {
  case GICXXPred_MI_Predicate_GICombiner0: {
    return isGuaranteedNotToBePoison(State.MIs[0]->getOperand(1).getReg(), MRI);
  }
  case GICXXPred_MI_Predicate_GICombiner1: {
    return isGuaranteedNotToBeUndefOrPoison(State.MIs[0]->getOperand(1).getReg(), MRI);
  }
  case GICXXPred_MI_Predicate_GICombiner2: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), 1.0);
  }
  case GICXXPred_MI_Predicate_GICombiner3: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), -0.0);
  }
  case GICXXPred_MI_Predicate_GICombiner4: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), -1.0);
  }
  case GICXXPred_MI_Predicate_GICombiner5: {
    return Helper.isLegalOrBeforeLegalizer({TargetOpcode::G_LSHR,
                                                           {MRI.getType(State.MIs[2]->getOperand(1).getReg()),
                                                            MRI.getType(State.MIs[1]->getOperand(2).getReg())}});
  }
  case GICXXPred_MI_Predicate_GICombiner6: {
    return Helper.isLegalOrBeforeLegalizer({TargetOpcode::G_SHL,
                                                           {MRI.getType(State.MIs[2]->getOperand(1).getReg()),
                                                            MRI.getType(State.MIs[1]->getOperand(2).getReg())}});
  }
  case GICXXPred_MI_Predicate_GICombiner7: {
    return State.MIs[1]->getOperand(1).getPredicate() == CmpInst::ICMP_EQ &&
                               !MRI.getType(State.MIs[1]->getOperand(2).getReg()).getScalarType().isPointer() &&
                               (MRI.getType(State.MIs[1]->getOperand(2).getReg()) ==
                                   MRI.getType(State.MIs[2]->getOperand(2).getReg()));
  }
  case GICXXPred_MI_Predicate_GICombiner8: {
    return State.MIs[1]->getOperand(1).getPredicate() == CmpInst::ICMP_NE &&
                               !MRI.getType(State.MIs[1]->getOperand(2).getReg()).getScalarType().isPointer() &&
                               (MRI.getType(State.MIs[1]->getOperand(2).getReg()) ==
                                   MRI.getType(State.MIs[2]->getOperand(2).getReg()));
  }
  }
  llvm_unreachable("Unknown predicate");
  return false;
}
bool RISCVPreLegalizerCombinerImpl::testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool RISCVPreLegalizerCombinerImpl::testImmPredicate_APFloat(unsigned PredicateID, const APFloat & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool RISCVPreLegalizerCombinerImpl::testImmPredicate_APInt(unsigned PredicateID, const APInt & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
enum {
  GICXXPred_Simple_IsRule0Enabled = GICXXPred_Invalid + 1,
  GICXXPred_Simple_IsRule1Enabled,
  GICXXPred_Simple_IsRule2Enabled,
  GICXXPred_Simple_IsRule3Enabled,
  GICXXPred_Simple_IsRule4Enabled,
  GICXXPred_Simple_IsRule5Enabled,
  GICXXPred_Simple_IsRule6Enabled,
  GICXXPred_Simple_IsRule7Enabled,
  GICXXPred_Simple_IsRule8Enabled,
  GICXXPred_Simple_IsRule9Enabled,
  GICXXPred_Simple_IsRule10Enabled,
  GICXXPred_Simple_IsRule11Enabled,
  GICXXPred_Simple_IsRule12Enabled,
  GICXXPred_Simple_IsRule13Enabled,
  GICXXPred_Simple_IsRule14Enabled,
  GICXXPred_Simple_IsRule15Enabled,
  GICXXPred_Simple_IsRule16Enabled,
  GICXXPred_Simple_IsRule17Enabled,
  GICXXPred_Simple_IsRule18Enabled,
  GICXXPred_Simple_IsRule19Enabled,
  GICXXPred_Simple_IsRule20Enabled,
  GICXXPred_Simple_IsRule21Enabled,
  GICXXPred_Simple_IsRule22Enabled,
  GICXXPred_Simple_IsRule23Enabled,
  GICXXPred_Simple_IsRule24Enabled,
  GICXXPred_Simple_IsRule25Enabled,
  GICXXPred_Simple_IsRule26Enabled,
  GICXXPred_Simple_IsRule27Enabled,
  GICXXPred_Simple_IsRule28Enabled,
  GICXXPred_Simple_IsRule29Enabled,
  GICXXPred_Simple_IsRule30Enabled,
  GICXXPred_Simple_IsRule31Enabled,
  GICXXPred_Simple_IsRule32Enabled,
  GICXXPred_Simple_IsRule33Enabled,
  GICXXPred_Simple_IsRule34Enabled,
  GICXXPred_Simple_IsRule35Enabled,
  GICXXPred_Simple_IsRule36Enabled,
  GICXXPred_Simple_IsRule37Enabled,
  GICXXPred_Simple_IsRule38Enabled,
  GICXXPred_Simple_IsRule39Enabled,
  GICXXPred_Simple_IsRule40Enabled,
  GICXXPred_Simple_IsRule41Enabled,
  GICXXPred_Simple_IsRule42Enabled,
  GICXXPred_Simple_IsRule43Enabled,
  GICXXPred_Simple_IsRule44Enabled,
  GICXXPred_Simple_IsRule45Enabled,
  GICXXPred_Simple_IsRule46Enabled,
  GICXXPred_Simple_IsRule47Enabled,
  GICXXPred_Simple_IsRule48Enabled,
  GICXXPred_Simple_IsRule49Enabled,
  GICXXPred_Simple_IsRule50Enabled,
  GICXXPred_Simple_IsRule51Enabled,
  GICXXPred_Simple_IsRule52Enabled,
  GICXXPred_Simple_IsRule53Enabled,
  GICXXPred_Simple_IsRule54Enabled,
  GICXXPred_Simple_IsRule55Enabled,
  GICXXPred_Simple_IsRule56Enabled,
  GICXXPred_Simple_IsRule57Enabled,
  GICXXPred_Simple_IsRule58Enabled,
  GICXXPred_Simple_IsRule59Enabled,
  GICXXPred_Simple_IsRule60Enabled,
  GICXXPred_Simple_IsRule61Enabled,
  GICXXPred_Simple_IsRule62Enabled,
  GICXXPred_Simple_IsRule63Enabled,
  GICXXPred_Simple_IsRule64Enabled,
  GICXXPred_Simple_IsRule65Enabled,
  GICXXPred_Simple_IsRule66Enabled,
  GICXXPred_Simple_IsRule67Enabled,
  GICXXPred_Simple_IsRule68Enabled,
  GICXXPred_Simple_IsRule69Enabled,
  GICXXPred_Simple_IsRule70Enabled,
  GICXXPred_Simple_IsRule71Enabled,
  GICXXPred_Simple_IsRule72Enabled,
  GICXXPred_Simple_IsRule73Enabled,
  GICXXPred_Simple_IsRule74Enabled,
  GICXXPred_Simple_IsRule75Enabled,
  GICXXPred_Simple_IsRule76Enabled,
  GICXXPred_Simple_IsRule77Enabled,
  GICXXPred_Simple_IsRule78Enabled,
  GICXXPred_Simple_IsRule79Enabled,
  GICXXPred_Simple_IsRule80Enabled,
  GICXXPred_Simple_IsRule81Enabled,
  GICXXPred_Simple_IsRule82Enabled,
  GICXXPred_Simple_IsRule83Enabled,
  GICXXPred_Simple_IsRule84Enabled,
  GICXXPred_Simple_IsRule85Enabled,
  GICXXPred_Simple_IsRule86Enabled,
  GICXXPred_Simple_IsRule87Enabled,
  GICXXPred_Simple_IsRule88Enabled,
  GICXXPred_Simple_IsRule89Enabled,
  GICXXPred_Simple_IsRule90Enabled,
  GICXXPred_Simple_IsRule91Enabled,
  GICXXPred_Simple_IsRule92Enabled,
  GICXXPred_Simple_IsRule93Enabled,
  GICXXPred_Simple_IsRule94Enabled,
  GICXXPred_Simple_IsRule95Enabled,
  GICXXPred_Simple_IsRule96Enabled,
  GICXXPred_Simple_IsRule97Enabled,
  GICXXPred_Simple_IsRule98Enabled,
  GICXXPred_Simple_IsRule99Enabled,
  GICXXPred_Simple_IsRule100Enabled,
  GICXXPred_Simple_IsRule101Enabled,
  GICXXPred_Simple_IsRule102Enabled,
  GICXXPred_Simple_IsRule103Enabled,
  GICXXPred_Simple_IsRule104Enabled,
  GICXXPred_Simple_IsRule105Enabled,
  GICXXPred_Simple_IsRule106Enabled,
  GICXXPred_Simple_IsRule107Enabled,
  GICXXPred_Simple_IsRule108Enabled,
  GICXXPred_Simple_IsRule109Enabled,
  GICXXPred_Simple_IsRule110Enabled,
  GICXXPred_Simple_IsRule111Enabled,
  GICXXPred_Simple_IsRule112Enabled,
  GICXXPred_Simple_IsRule113Enabled,
  GICXXPred_Simple_IsRule114Enabled,
  GICXXPred_Simple_IsRule115Enabled,
  GICXXPred_Simple_IsRule116Enabled,
  GICXXPred_Simple_IsRule117Enabled,
  GICXXPred_Simple_IsRule118Enabled,
  GICXXPred_Simple_IsRule119Enabled,
  GICXXPred_Simple_IsRule120Enabled,
  GICXXPred_Simple_IsRule121Enabled,
  GICXXPred_Simple_IsRule122Enabled,
  GICXXPred_Simple_IsRule123Enabled,
  GICXXPred_Simple_IsRule124Enabled,
  GICXXPred_Simple_IsRule125Enabled,
  GICXXPred_Simple_IsRule126Enabled,
  GICXXPred_Simple_IsRule127Enabled,
  GICXXPred_Simple_IsRule128Enabled,
  GICXXPred_Simple_IsRule129Enabled,
  GICXXPred_Simple_IsRule130Enabled,
  GICXXPred_Simple_IsRule131Enabled,
  GICXXPred_Simple_IsRule132Enabled,
  GICXXPred_Simple_IsRule133Enabled,
  GICXXPred_Simple_IsRule134Enabled,
  GICXXPred_Simple_IsRule135Enabled,
  GICXXPred_Simple_IsRule136Enabled,
  GICXXPred_Simple_IsRule137Enabled,
  GICXXPred_Simple_IsRule138Enabled,
  GICXXPred_Simple_IsRule139Enabled,
  GICXXPred_Simple_IsRule140Enabled,
  GICXXPred_Simple_IsRule141Enabled,
  GICXXPred_Simple_IsRule142Enabled,
  GICXXPred_Simple_IsRule143Enabled,
  GICXXPred_Simple_IsRule144Enabled,
  GICXXPred_Simple_IsRule145Enabled,
  GICXXPred_Simple_IsRule146Enabled,
  GICXXPred_Simple_IsRule147Enabled,
  GICXXPred_Simple_IsRule148Enabled,
  GICXXPred_Simple_IsRule149Enabled,
  GICXXPred_Simple_IsRule150Enabled,
  GICXXPred_Simple_IsRule151Enabled,
  GICXXPred_Simple_IsRule152Enabled,
  GICXXPred_Simple_IsRule153Enabled,
  GICXXPred_Simple_IsRule154Enabled,
  GICXXPred_Simple_IsRule155Enabled,
  GICXXPred_Simple_IsRule156Enabled,
  GICXXPred_Simple_IsRule157Enabled,
  GICXXPred_Simple_IsRule158Enabled,
  GICXXPred_Simple_IsRule159Enabled,
  GICXXPred_Simple_IsRule160Enabled,
  GICXXPred_Simple_IsRule161Enabled,
  GICXXPred_Simple_IsRule162Enabled,
  GICXXPred_Simple_IsRule163Enabled,
  GICXXPred_Simple_IsRule164Enabled,
  GICXXPred_Simple_IsRule165Enabled,
  GICXXPred_Simple_IsRule166Enabled,
  GICXXPred_Simple_IsRule167Enabled,
  GICXXPred_Simple_IsRule168Enabled,
  GICXXPred_Simple_IsRule169Enabled,
  GICXXPred_Simple_IsRule170Enabled,
  GICXXPred_Simple_IsRule171Enabled,
  GICXXPred_Simple_IsRule172Enabled,
  GICXXPred_Simple_IsRule173Enabled,
  GICXXPred_Simple_IsRule174Enabled,
  GICXXPred_Simple_IsRule175Enabled,
  GICXXPred_Simple_IsRule176Enabled,
  GICXXPred_Simple_IsRule177Enabled,
  GICXXPred_Simple_IsRule178Enabled,
  GICXXPred_Simple_IsRule179Enabled,
  GICXXPred_Simple_IsRule180Enabled,
  GICXXPred_Simple_IsRule181Enabled,
  GICXXPred_Simple_IsRule182Enabled,
  GICXXPred_Simple_IsRule183Enabled,
  GICXXPred_Simple_IsRule184Enabled,
  GICXXPred_Simple_IsRule185Enabled,
  GICXXPred_Simple_IsRule186Enabled,
  GICXXPred_Simple_IsRule187Enabled,
  GICXXPred_Simple_IsRule188Enabled,
};

bool RISCVPreLegalizerCombinerImpl::testSimplePredicate(unsigned Predicate) const {
    return RuleConfig.isRuleEnabled(Predicate - GICXXPred_Invalid - 1);
}
// Custom renderers.
enum {
  GICR_Invalid,
};
RISCVPreLegalizerCombinerImpl::CustomRendererFn
RISCVPreLegalizerCombinerImpl::CustomRenderers[] = {
  nullptr, // GICR_Invalid
};

bool RISCVPreLegalizerCombinerImpl::tryCombineAll(MachineInstr &I) const {
  const TargetSubtargetInfo &ST = MF.getSubtarget();
  const PredicateBitset AvailableFeatures = getAvailableFeatures();
  B.setInstrAndDebugLoc(I);
  State.MIs.clear();
  State.MIs.push_back(&I);
  if (executeMatchTable(*this, State, ExecInfo, B, getMatchTable(), *ST.getInstrInfo(), MRI, *MRI.getTargetRegisterInfo(), *ST.getRegBankInfo(), AvailableFeatures, /*CoverageInfo*/ nullptr)) {
    return true;
  }

  return false;
}

enum {
  GICXXCustomAction_GICombiner0 = GICXXCustomAction_Invalid + 1,
  GICXXCustomAction_GICombiner1,
  GICXXCustomAction_GICombiner2,
  GICXXCustomAction_GICombiner3,
  GICXXCustomAction_GICombiner4,
  GICXXCustomAction_GICombiner5,
  GICXXCustomAction_GICombiner6,
  GICXXCustomAction_GICombiner7,
  GICXXCustomAction_GICombiner8,
  GICXXCustomAction_GICombiner9,
  GICXXCustomAction_GICombiner10,
  GICXXCustomAction_GICombiner11,
  GICXXCustomAction_GICombiner12,
  GICXXCustomAction_GICombiner13,
  GICXXCustomAction_GICombiner14,
  GICXXCustomAction_GICombiner15,
  GICXXCustomAction_GICombiner16,
  GICXXCustomAction_GICombiner17,
  GICXXCustomAction_GICombiner18,
  GICXXCustomAction_GICombiner19,
  GICXXCustomAction_GICombiner20,
  GICXXCustomAction_GICombiner21,
  GICXXCustomAction_GICombiner22,
  GICXXCustomAction_GICombiner23,
  GICXXCustomAction_GICombiner24,
  GICXXCustomAction_GICombiner25,
  GICXXCustomAction_GICombiner26,
  GICXXCustomAction_GICombiner27,
  GICXXCustomAction_GICombiner28,
  GICXXCustomAction_GICombiner29,
  GICXXCustomAction_GICombiner30,
  GICXXCustomAction_GICombiner31,
  GICXXCustomAction_GICombiner32,
  GICXXCustomAction_GICombiner33,
  GICXXCustomAction_GICombiner34,
  GICXXCustomAction_GICombiner35,
  GICXXCustomAction_GICombiner36,
  GICXXCustomAction_GICombiner37,
  GICXXCustomAction_GICombiner38,
  GICXXCustomAction_GICombiner39,
  GICXXCustomAction_GICombiner40,
  GICXXCustomAction_GICombiner41,
  GICXXCustomAction_GICombiner42,
  GICXXCustomAction_GICombiner43,
  GICXXCustomAction_GICombiner44,
  GICXXCustomAction_GICombiner45,
  GICXXCustomAction_GICombiner46,
  GICXXCustomAction_GICombiner47,
  GICXXCustomAction_GICombiner48,
  GICXXCustomAction_GICombiner49,
  GICXXCustomAction_GICombiner50,
  GICXXCustomAction_GICombiner51,
  GICXXCustomAction_GICombiner52,
  GICXXCustomAction_GICombiner53,
  GICXXCustomAction_GICombiner54,
  GICXXCustomAction_GICombiner55,
  GICXXCustomAction_GICombiner56,
  GICXXCustomAction_GICombiner57,
  GICXXCustomAction_GICombiner58,
  GICXXCustomAction_GICombiner59,
  GICXXCustomAction_GICombiner60,
  GICXXCustomAction_GICombiner61,
  GICXXCustomAction_GICombiner62,
  GICXXCustomAction_GICombiner63,
  GICXXCustomAction_GICombiner64,
  GICXXCustomAction_GICombiner65,
  GICXXCustomAction_GICombiner66,
  GICXXCustomAction_GICombiner67,
  GICXXCustomAction_GICombiner68,
  GICXXCustomAction_GICombiner69,
  GICXXCustomAction_GICombiner70,
  GICXXCustomAction_GICombiner71,
  GICXXCustomAction_GICombiner72,
  GICXXCustomAction_GICombiner73,
  GICXXCustomAction_GICombiner74,
  GICXXCustomAction_GICombiner75,
  GICXXCustomAction_GICombiner76,
  GICXXCustomAction_GICombiner77,
  GICXXCustomAction_GICombiner78,
  GICXXCustomAction_GICombiner79,
  GICXXCustomAction_GICombiner80,
  GICXXCustomAction_GICombiner81,
  GICXXCustomAction_GICombiner82,
  GICXXCustomAction_GICombiner83,
  GICXXCustomAction_GICombiner84,
  GICXXCustomAction_GICombiner85,
  GICXXCustomAction_GICombiner86,
  GICXXCustomAction_GICombiner87,
  GICXXCustomAction_GICombiner88,
  GICXXCustomAction_GICombiner89,
  GICXXCustomAction_GICombiner90,
  GICXXCustomAction_GICombiner91,
  GICXXCustomAction_GICombiner92,
  GICXXCustomAction_GICombiner93,
  GICXXCustomAction_GICombiner94,
  GICXXCustomAction_GICombiner95,
  GICXXCustomAction_GICombiner96,
  GICXXCustomAction_GICombiner97,
  GICXXCustomAction_GICombiner98,
  GICXXCustomAction_GICombiner99,
  GICXXCustomAction_GICombiner100,
  GICXXCustomAction_GICombiner101,
  GICXXCustomAction_GICombiner102,
  GICXXCustomAction_GICombiner103,
  GICXXCustomAction_GICombiner104,
  GICXXCustomAction_GICombiner105,
  GICXXCustomAction_GICombiner106,
  GICXXCustomAction_GICombiner107,
  GICXXCustomAction_GICombiner108,
  GICXXCustomAction_GICombiner109,
  GICXXCustomAction_GICombiner110,
  GICXXCustomAction_GICombiner111,
  GICXXCustomAction_GICombiner112,
  GICXXCustomAction_GICombiner113,
  GICXXCustomAction_GICombiner114,
  GICXXCustomAction_GICombiner115,
  GICXXCustomAction_GICombiner116,
  GICXXCustomAction_GICombiner117,
  GICXXCustomAction_GICombiner118,
  GICXXCustomAction_GICombiner119,
  GICXXCustomAction_GICombiner120,
  GICXXCustomAction_GICombiner121,
  GICXXCustomAction_GICombiner122,
  GICXXCustomAction_GICombiner123,
  GICXXCustomAction_GICombiner124,
  GICXXCustomAction_GICombiner125,
  GICXXCustomAction_GICombiner126,
  GICXXCustomAction_GICombiner127,
  GICXXCustomAction_GICombiner128,
};
bool RISCVPreLegalizerCombinerImpl::runCustomAction(unsigned ApplyID, const MatcherState &State, NewMIVector &OutMIs) const {
  Helper.getBuilder().setInstrAndDebugLoc(*State.MIs[0]);
  switch(ApplyID) {
  case GICXXCustomAction_GICombiner0:{
    // Match Patterns
    if(![&](){return Helper.matchCombineCopy(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineCopy(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner1:{
    unsigned GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineMulToShl(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineMulToShl(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner2:{
    std::pair<Register, bool> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineAddP2IToPtrAdd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineAddP2IToPtrAdd(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner3:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElement(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner4:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchInsertVectorElementOOB(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner5:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElementWithDifferentIndices(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner6:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElementWithBuildVector(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner7:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElementWithBuildVectorTrunc(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner8:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElementWithShuffleVector(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner9:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchAddOfVScale(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner10:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchMulOfVScale(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner11:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchShlOfVScale(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner12:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSubOfVScale(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner13:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return !isGuaranteedNotToBePoison(State.MIs[0]->getOperand(1).getReg(), MRI) && Helper.matchFreezeOfSingleMaybePoisonOperand(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner14:{
    SmallVector<Register, 4> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineInsertVecElts(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineInsertVecElts(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner15:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVecEltBuildVec(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyExtractVecEltBuildVec(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner16:{
    SmallVector<std::pair<Register, MachineInstr*>> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractAllEltsFromBuildVector(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyExtractAllEltsFromBuildVector(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner17:{
    PreferredTuple GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineExtendingLoads(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineExtendingLoads(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner18:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineLoadWithAndMask(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner19:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineExtractedVectorLoad(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner20:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0], 0.0);
    return true;
  }
  case GICXXCustomAction_GICombiner21:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], 0);
    return true;
  }
  case GICXXCustomAction_GICombiner22:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], -1);
    return true;
  }
  case GICXXCustomAction_GICombiner23:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsUndef(*State.MIs[0], 1);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], 0);
    return true;
  }
  case GICXXCustomAction_GICombiner24:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsUndef(*State.MIs[0], 2);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner25:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner26:{
    // Match Patterns
    if(![&](){return Helper.matchAllExplicitUsesAreUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner27:{
    // Match Patterns
    if(![&](){return Helper.matchUndefShuffleVectorMask(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner28:{
    // Match Patterns
    if(![&](){return Helper.matchUndefStore(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.eraseInst(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner29:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeUndef(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner30:{
    // Match Patterns
    if(![&](){return Helper.matchInsertExtractVecEltOutOfBounds(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner31:{
    // Match Patterns
    if(![&](){return Helper.matchSelectSameVal(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], 2);
    return true;
  }
  case GICXXCustomAction_GICombiner32:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsZero(*State.MIs[0], 1);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], 1);
    return true;
  }
  case GICXXCustomAction_GICombiner33:{
    Register GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineI2PToP2I(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineI2PToP2I(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner34:{
    Register GIMatchData_info;
    // Match Patterns
    if(![&](){GIMatchData_info = State.MIs[1]->getOperand(1).getReg(); return true;}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineP2IToI2P(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner35:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineAnyExtTrunc(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner36:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchBuildVectorIdentityFold(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner37:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncBuildVectorFold(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner38:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncLshrBuildVectorFold(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner39:{
    // Match Patterns
    if(![&](){return MRI.getType(State.MIs[1]->getOperand(1).getReg()) == MRI.getType(State.MIs[0]->getOperand(0).getReg());}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], State.MIs[1]->getOperand(1).getReg());
    return true;
  }
  case GICXXCustomAction_GICombiner40:{
    MachineInstr* GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtendThroughPhis(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyExtendThroughPhis(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner41:{
    std::tuple<Register, Register> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchSimplifyAddToSub(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applySimplifyAddToSub(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner42:{
    InstructionStepsMatchInfo GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchHoistLogicOpWithSameOpcodeHands(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildInstructionSteps(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner43:{
    // Match Patterns
    if(![&](){return Helper.matchShiftsTooBig(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner44:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchReassocPtrAdd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner45:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchReassocCommBinOp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner46:{
    PtrAddChain GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchPtrAddImmedChain(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyPtrAddImmedChain(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner47:{
    std::tuple<Register, int64_t> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchAshrShlToSextInreg(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyAshShlToSextInreg(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner48:{
    std::tuple<Register, unsigned> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSextInRegOfLoad(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applySextInRegOfLoad(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner49:{
    RegisterImmPair GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineShlOfExtend(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineShlOfExtend(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner50:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchNarrowBinopFeedingAnd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner51:{
    unsigned GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantSelectCmp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner52:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchSelectIMinMax(State.MIs[0]->getOperand(0), GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner53:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSelect(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner54:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchRedundantAnd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner55:{
    // Match Patterns
    if(![&](){return Helper.matchRedundantSExtInReg(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], 1);
    return true;
  }
  case GICXXCustomAction_GICombiner56:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchRedundantOr(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner57:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsKnownToBeAPowerOfTwo(*State.MIs[0], 2);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applySimplifyURemByPow2(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner58:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineZextTrunc(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner59:{
    int64_t GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchICmpToTrueFalseKnownBits(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner60:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchICmpToLHSKnownBits(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner61:{
    // Match Patterns
    if(![&](){unsigned BitWidth = MRI.getType(State.MIs[0]->getOperand(1).getReg()).getScalarSizeInBits();
                return Helper.getKnownBits()->maskedValueIsZero(State.MIs[0]->getOperand(1).getReg(),
                         APInt::getOneBitSet(BitWidth, State.MIs[0]->getOperand(2).getImm() - 1));}()) {
      return false;
    }
    // Apply Patterns
    Helper.getBuilder().setInstrAndDebugLoc(*State.MIs[0]);
              Helper.getBuilder().buildZExtInReg(State.MIs[0]->getOperand(0), State.MIs[0]->getOperand(1), State.MIs[0]->getOperand(2).getImm());
              State.MIs[0]->eraseFromParent();
    return true;
  }
  case GICXXCustomAction_GICombiner62:{
    std::tuple<Register, unsigned> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineExtOfExt(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineExtOfExt(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner63:{
    SmallVector<Register, 4> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchNotCmp(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyNotCmp(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner64:{
    MachineInstr * GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchOptBrCondByInvertingCond(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyOptBrCondByInvertingCond(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner65:{
    SmallVector<Register, 8> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeMergeToPlainValues(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeMergeToPlainValues(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner66:{
    SmallVector<APInt, 8> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeConstant(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeConstant(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner67:{
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeWithDeadLanesToTrunc(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeWithDeadLanesToTrunc(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner68:{
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeZExtToZExt(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeZExtToZExt(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner69:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineMergeUnmerge(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner70:{
    std::pair<Register, unsigned> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineTruncOfExt(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineTruncOfExt(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner71:{
    std::pair<MachineInstr*, LLT> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineTruncOfShift(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineTruncOfShift(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner72:{
    // Apply Patterns
    Helper.applyCombineConstantFoldFpUnary(*State.MIs[0], State.MIs[1]->getOperand(1).getFPImm());
    return true;
  }
  case GICXXCustomAction_GICombiner73:{
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0]->getOperand(0).getParent(), 0.0);
    return true;
  }
  case GICXXCustomAction_GICombiner74:{
    APInt GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineConstPtrAddToI2P(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineConstPtrAddToI2P(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner75:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchOverlappingAnd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner76:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchMulOBy2(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner77:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchMulOBy0(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner78:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchAddEToAddO(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner79:{
    unsigned GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFMinMaxNaN(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner80:{
    // Match Patterns
    if(![&](){return Helper.matchFPowIExpansion(*State.MIs[0], State.MIs[1]->getOperand(1).getCImm()->getSExtValue());}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyExpandFPowI(*State.MIs[0], State.MIs[1]->getOperand(1).getCImm()->getSExtValue());
    return true;
  }
  case GICXXCustomAction_GICombiner81:{
    std::pair<Register, Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchXorOfAndWithSameReg(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyXorOfAndWithSameReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner82:{
    // Match Patterns
    if(![&](){return Helper.matchPtrAddZero(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyPtrAddZero(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner83:{
    RegisterImmPair GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchShiftImmedChain(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyShiftImmedChain(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner84:{
    ShiftOfShiftedLogic GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchShiftOfShiftedLogic(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyShiftOfShiftedLogic(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner85:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchLoadOrCombine(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner86:{
    MachineInstr * GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineDivRem(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineDivRem(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner87:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchOrShiftToFunnelShift(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner88:{
    // Match Patterns
    if(![&](){return Helper.matchFunnelShiftToRotate(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyFunnelShiftToRotate(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner89:{
    // Match Patterns
    if(![&](){return Helper.matchConstantLargerBitWidth(*State.MIs[0], 3);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyFunnelShiftConstantModulo(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner90:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCommuteShift(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner91:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromSExtInReg(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner92:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromAnd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner93:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromShr(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner94:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromShrAnd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner95:{
    APInt GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantFoldBinOp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner96:{
    ConstantFP* GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantFoldFPBinOp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner97:{
    ConstantFP* GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantFoldFMA(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner98:{
    APInt GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantFoldCastOp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner99:{
    // Match Patterns
    if(![&](){return Helper.matchUDivByConst(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyUDivByConst(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner100:{
    // Match Patterns
    if(![&](){return Helper.matchSDivByConst(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applySDivByConst(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner101:{
    // Match Patterns
    if(![&](){return Helper.matchDivByPow2(*State.MIs[0], /*IsSigned=*/true);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applySDivByPow2(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner102:{
    // Match Patterns
    if(![&](){return Helper.matchDivByPow2(*State.MIs[0], /*IsSigned=*/false);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyUDivByPow2(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner103:{
    // Match Patterns
    if(![&](){return Helper.matchUMulHToLShr(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyUMulHToLShr(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner104:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchRedundantNegOperands(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner105:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchAndOrDisjointMask(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner106:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFAddFMulToFMadOrFMA(*State.MIs[0],
                                                                  GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner107:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFAddFpExtFMulToFMadOrFMA(*State.MIs[0],
                                                                       GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner108:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFAddFMAFMulToFMadOrFMA(*State.MIs[0],
                                                                     GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner109:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFAddFpExtFMulToFMadOrFMAAggressive(
                                                          *State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner110:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFSubFMulToFMadOrFMA(*State.MIs[0],
                                                                  GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner111:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFSubFNegFMulToFMadOrFMA(*State.MIs[0],
                                                                      GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner112:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFSubFpExtFMulToFMadOrFMA(*State.MIs[0],
                                                                       GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner113:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFSubFpExtFNegFMulToFMadOrFMA(
                                                    *State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner114:{
    unsigned GIMatchData_select_op_no;
    // Match Patterns
    if(![&](){return Helper.matchFoldBinOpIntoSelect(*State.MIs[0], GIMatchData_select_op_no);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyFoldBinOpIntoSelect(*State.MIs[0], GIMatchData_select_op_no);
    return true;
  }
  case GICXXCustomAction_GICombiner115:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSubAddSameReg(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner116:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchSimplifySelectToMinMax(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner117:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchRedundantBinOpInEquality(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner118:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchFsubToFneg(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyFsubToFneg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner119:{
    // Match Patterns
    if(![&](){return Helper.matchCommuteConstantToRHS(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCommuteBinOpOperands(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner120:{
    // Match Patterns
    if(![&](){return Helper.matchCommuteFPConstantToRHS(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCommuteBinOpOperands(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner121:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchAnd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner122:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchOr(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner123:{
    SmallVector<Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineConcatVectors(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineConcatVectors(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner124:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchAddOverflow(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner125:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSextOfTrunc(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner126:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchZextOfTrunc(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner127:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchNonNegZext(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner128:{
    SmallVector<Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineShuffleConcat(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineShuffleConcat(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  }
  llvm_unreachable("Unknown Apply Action");
}
#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
#define GIMT_Encode2(Val) uint8_t(Val), uint8_t((uint16_t)Val >> 8)
#define GIMT_Encode4(Val) uint8_t(Val), uint8_t((uint32_t)Val >> 8), uint8_t((uint32_t)Val >> 16), uint8_t((uint32_t)Val >> 24)
#define GIMT_Encode8(Val) uint8_t(Val), uint8_t((uint64_t)Val >> 8), uint8_t((uint64_t)Val >> 16), uint8_t((uint64_t)Val >> 24),  uint8_t((uint64_t)Val >> 32), uint8_t((uint64_t)Val >> 40), uint8_t((uint64_t)Val >> 48), uint8_t((uint64_t)Val >> 56)
#else
#define GIMT_Encode2(Val) uint8_t((uint16_t)Val >> 8), uint8_t(Val)
#define GIMT_Encode4(Val) uint8_t((uint32_t)Val >> 24), uint8_t((uint32_t)Val >> 16), uint8_t((uint32_t)Val >> 8), uint8_t(Val)
#define GIMT_Encode8(Val) uint8_t((uint64_t)Val >> 56), uint8_t((uint64_t)Val >> 48), uint8_t((uint64_t)Val >> 40), uint8_t((uint64_t)Val >> 32),  uint8_t((uint64_t)Val >> 24), uint8_t((uint64_t)Val >> 16), uint8_t((uint64_t)Val >> 8), uint8_t(Val)
#endif
const uint8_t *RISCVPreLegalizerCombinerImpl::getMatchTable() const {
  constexpr static uint8_t MatchTable0[] = {
    GIM_SwitchOpcode, /*MI*/0, /*[*/GIMT_Encode2(19), GIMT_Encode2(249), /*)*//*default:*//*Label 92*/ GIMT_Encode4(6113),
    /*TargetOpcode::COPY*//*Label 0*/ GIMT_Encode4(930), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_ADD*//*Label 1*/ GIMT_Encode4(942),
    /*TargetOpcode::G_SUB*//*Label 2*/ GIMT_Encode4(1462),
    /*TargetOpcode::G_MUL*//*Label 3*/ GIMT_Encode4(1557),
    /*TargetOpcode::G_SDIV*//*Label 4*/ GIMT_Encode4(1723),
    /*TargetOpcode::G_UDIV*//*Label 5*/ GIMT_Encode4(1785),
    /*TargetOpcode::G_SREM*//*Label 6*/ GIMT_Encode4(1858),
    /*TargetOpcode::G_UREM*//*Label 7*/ GIMT_Encode4(1892), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_AND*//*Label 8*/ GIMT_Encode4(1948),
    /*TargetOpcode::G_OR*//*Label 9*/ GIMT_Encode4(2229),
    /*TargetOpcode::G_XOR*//*Label 10*/ GIMT_Encode4(2474), GIMT_Encode4(0),
    /*TargetOpcode::G_PHI*//*Label 11*/ GIMT_Encode4(2575), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_UNMERGE_VALUES*//*Label 12*/ GIMT_Encode4(2587), GIMT_Encode4(0),
    /*TargetOpcode::G_MERGE_VALUES*//*Label 13*/ GIMT_Encode4(2643),
    /*TargetOpcode::G_BUILD_VECTOR*//*Label 14*/ GIMT_Encode4(2655),
    /*TargetOpcode::G_BUILD_VECTOR_TRUNC*//*Label 15*/ GIMT_Encode4(2678),
    /*TargetOpcode::G_CONCAT_VECTORS*//*Label 16*/ GIMT_Encode4(2690),
    /*TargetOpcode::G_PTRTOINT*//*Label 17*/ GIMT_Encode4(2702),
    /*TargetOpcode::G_INTTOPTR*//*Label 18*/ GIMT_Encode4(2724),
    /*TargetOpcode::G_BITCAST*//*Label 19*/ GIMT_Encode4(2736),
    /*TargetOpcode::G_FREEZE*//*Label 20*/ GIMT_Encode4(2758), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_LOAD*//*Label 21*/ GIMT_Encode4(2822),
    /*TargetOpcode::G_SEXTLOAD*//*Label 22*/ GIMT_Encode4(2834),
    /*TargetOpcode::G_ZEXTLOAD*//*Label 23*/ GIMT_Encode4(2846), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_STORE*//*Label 24*/ GIMT_Encode4(2858), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_ANYEXT*//*Label 25*/ GIMT_Encode4(2870),
    /*TargetOpcode::G_TRUNC*//*Label 26*/ GIMT_Encode4(2904), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_SEXT*//*Label 27*/ GIMT_Encode4(2960),
    /*TargetOpcode::G_SEXT_INREG*//*Label 28*/ GIMT_Encode4(3010),
    /*TargetOpcode::G_ZEXT*//*Label 29*/ GIMT_Encode4(3055),
    /*TargetOpcode::G_SHL*//*Label 30*/ GIMT_Encode4(3133),
    /*TargetOpcode::G_LSHR*//*Label 31*/ GIMT_Encode4(3291),
    /*TargetOpcode::G_ASHR*//*Label 32*/ GIMT_Encode4(3403),
    /*TargetOpcode::G_FSHL*//*Label 33*/ GIMT_Encode4(3526),
    /*TargetOpcode::G_FSHR*//*Label 34*/ GIMT_Encode4(3569),
    /*TargetOpcode::G_ROTR*//*Label 35*/ GIMT_Encode4(3612),
    /*TargetOpcode::G_ROTL*//*Label 36*/ GIMT_Encode4(3636),
    /*TargetOpcode::G_ICMP*//*Label 37*/ GIMT_Encode4(3660), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_SELECT*//*Label 38*/ GIMT_Encode4(3694),
    /*TargetOpcode::G_UADDO*//*Label 39*/ GIMT_Encode4(3789),
    /*TargetOpcode::G_UADDE*//*Label 40*/ GIMT_Encode4(3812), GIMT_Encode4(0),
    /*TargetOpcode::G_USUBE*//*Label 41*/ GIMT_Encode4(3824),
    /*TargetOpcode::G_SADDO*//*Label 42*/ GIMT_Encode4(3836),
    /*TargetOpcode::G_SADDE*//*Label 43*/ GIMT_Encode4(3859), GIMT_Encode4(0),
    /*TargetOpcode::G_SSUBE*//*Label 44*/ GIMT_Encode4(3871),
    /*TargetOpcode::G_UMULO*//*Label 45*/ GIMT_Encode4(3883),
    /*TargetOpcode::G_SMULO*//*Label 46*/ GIMT_Encode4(3917),
    /*TargetOpcode::G_UMULH*//*Label 47*/ GIMT_Encode4(3951),
    /*TargetOpcode::G_SMULH*//*Label 48*/ GIMT_Encode4(3974),
    /*TargetOpcode::G_UADDSAT*//*Label 49*/ GIMT_Encode4(3986),
    /*TargetOpcode::G_SADDSAT*//*Label 50*/ GIMT_Encode4(3998), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_USHLSAT*//*Label 51*/ GIMT_Encode4(4010),
    /*TargetOpcode::G_SSHLSAT*//*Label 52*/ GIMT_Encode4(4033),
    /*TargetOpcode::G_SMULFIX*//*Label 53*/ GIMT_Encode4(4056),
    /*TargetOpcode::G_UMULFIX*//*Label 54*/ GIMT_Encode4(4068),
    /*TargetOpcode::G_SMULFIXSAT*//*Label 55*/ GIMT_Encode4(4080),
    /*TargetOpcode::G_UMULFIXSAT*//*Label 56*/ GIMT_Encode4(4092), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_FADD*//*Label 57*/ GIMT_Encode4(4104),
    /*TargetOpcode::G_FSUB*//*Label 58*/ GIMT_Encode4(4216),
    /*TargetOpcode::G_FMUL*//*Label 59*/ GIMT_Encode4(4305),
    /*TargetOpcode::G_FMA*//*Label 60*/ GIMT_Encode4(4393),
    /*TargetOpcode::G_FMAD*//*Label 61*/ GIMT_Encode4(4416),
    /*TargetOpcode::G_FDIV*//*Label 62*/ GIMT_Encode4(4439),
    /*TargetOpcode::G_FREM*//*Label 63*/ GIMT_Encode4(4473), GIMT_Encode4(0),
    /*TargetOpcode::G_FPOWI*//*Label 64*/ GIMT_Encode4(4485), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_FLOG2*//*Label 65*/ GIMT_Encode4(4507), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_FNEG*//*Label 66*/ GIMT_Encode4(4529), GIMT_Encode4(0),
    /*TargetOpcode::G_FPTRUNC*//*Label 67*/ GIMT_Encode4(4580),
    /*TargetOpcode::G_FPTOSI*//*Label 68*/ GIMT_Encode4(4623),
    /*TargetOpcode::G_FPTOUI*//*Label 69*/ GIMT_Encode4(4635),
    /*TargetOpcode::G_SITOFP*//*Label 70*/ GIMT_Encode4(4647),
    /*TargetOpcode::G_UITOFP*//*Label 71*/ GIMT_Encode4(4674),
    /*TargetOpcode::G_FABS*//*Label 72*/ GIMT_Encode4(4701), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_FCANONICALIZE*//*Label 73*/ GIMT_Encode4(4780),
    /*TargetOpcode::G_FMINNUM*//*Label 74*/ GIMT_Encode4(4810),
    /*TargetOpcode::G_FMAXNUM*//*Label 75*/ GIMT_Encode4(4844),
    /*TargetOpcode::G_FMINNUM_IEEE*//*Label 76*/ GIMT_Encode4(4878),
    /*TargetOpcode::G_FMAXNUM_IEEE*//*Label 77*/ GIMT_Encode4(4890),
    /*TargetOpcode::G_FMINIMUM*//*Label 78*/ GIMT_Encode4(4902),
    /*TargetOpcode::G_FMAXIMUM*//*Label 79*/ GIMT_Encode4(4936), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_PTR_ADD*//*Label 80*/ GIMT_Encode4(4970), GIMT_Encode4(0),
    /*TargetOpcode::G_SMIN*//*Label 81*/ GIMT_Encode4(5049),
    /*TargetOpcode::G_SMAX*//*Label 82*/ GIMT_Encode4(5072),
    /*TargetOpcode::G_UMIN*//*Label 83*/ GIMT_Encode4(5095),
    /*TargetOpcode::G_UMAX*//*Label 84*/ GIMT_Encode4(5118),
    /*TargetOpcode::G_ABS*//*Label 85*/ GIMT_Encode4(5141), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_BR*//*Label 86*/ GIMT_Encode4(5153), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_INSERT_VECTOR_ELT*//*Label 87*/ GIMT_Encode4(5165),
    /*TargetOpcode::G_EXTRACT_VECTOR_ELT*//*Label 88*/ GIMT_Encode4(5295),
    /*TargetOpcode::G_SHUFFLE_VECTOR*//*Label 89*/ GIMT_Encode4(5968), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_BITREVERSE*//*Label 90*/ GIMT_Encode4(6002), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_FSQRT*//*Label 91*/ GIMT_Encode4(6091),
    // Label 0: @930
    GIM_Try, /*On fail goto*//*Label 93*/ GIMT_Encode4(941), // Rule ID 8 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule8Enabled),
      // MIs[0] d
      // No operand predicates
      // MIs[0] s
      // No operand predicates
      // Combiner Rule #8: copy_prop
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner0),
    // Label 93: @941
    GIM_Reject,
    // Label 1: @942
    GIM_Try, /*On fail goto*//*Label 94*/ GIMT_Encode4(953), // Rule ID 10 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule10Enabled),
      // Combiner Rule #10: add_p2i_to_ptradd; wip_match_opcode 'G_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
    // Label 94: @953
    GIM_Try, /*On fail goto*//*Label 95*/ GIMT_Encode4(964), // Rule ID 72 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule62Enabled),
      // Combiner Rule #62: propagate_undef_any_op; wip_match_opcode 'G_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner25),
    // Label 95: @964
    GIM_Try, /*On fail goto*//*Label 96*/ GIMT_Encode4(975), // Rule ID 119 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule88Enabled),
      // Combiner Rule #88: simplify_add_to_sub; wip_match_opcode 'G_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner41),
    // Label 96: @975
    GIM_Try, /*On fail goto*//*Label 97*/ GIMT_Encode4(986), // Rule ID 212 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule152Enabled),
      // Combiner Rule #152: constant_fold_binop; wip_match_opcode 'G_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner95),
    // Label 97: @986
    GIM_Try, /*On fail goto*//*Label 98*/ GIMT_Encode4(997), // Rule ID 251 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 98: @997
    GIM_Try, /*On fail goto*//*Label 99*/ GIMT_Encode4(1008), // Rule ID 281 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 99: @1008
    GIM_Try, /*On fail goto*//*Label 100*/ GIMT_Encode4(1042), // Rule ID 0 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule0Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] sub
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] Operand 1
      GIM_CheckConstantInt8, /*MI*/1, /*Op*/1, 0,
      // MIs[1] A
      // No operand predicates
      // MIs[0] B
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #0: ZeroMinusAPlusB
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
      GIR_RootToRootCopy, /*OpIdx*/0, // root
      GIR_RootToRootCopy, /*OpIdx*/2, // B
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // A
      GIR_EraseRootFromParent_Done,
    // Label 100: @1042
    GIM_Try, /*On fail goto*//*Label 101*/ GIMT_Encode4(1076), // Rule ID 3 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule3Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] sub
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] B
      // No operand predicates
      // MIs[1] A
      // No operand predicates
      // MIs[0] A
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #3: BMinusAPlusA
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 101: @1076
    GIM_Try, /*On fail goto*//*Label 102*/ GIMT_Encode4(1110), // Rule ID 109 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule79Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __add_sub_reg_match_0.tmp
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] src
      // No operand predicates
      // MIs[1] __add_sub_reg_match_0.x
      // No operand predicates
      // MIs[0] __add_sub_reg_match_0.x
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #79: add_sub_reg @ [__add_sub_reg_match_0[1]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 102: @1110
    GIM_Try, /*On fail goto*//*Label 103*/ GIMT_Encode4(1155), // Rule ID 5 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule5Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] sub1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] A
      // No operand predicates
      // MIs[1] B
      // No operand predicates
      // MIs[0] sub2
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[2] B
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/2,
      // MIs[2] C
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #5: AMinusBPlusBMinusC
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
      GIR_RootToRootCopy, /*OpIdx*/0, // root
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // A
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // C
      GIR_EraseRootFromParent_Done,
    // Label 103: @1155
    GIM_Try, /*On fail goto*//*Label 104*/ GIMT_Encode4(1200), // Rule ID 4 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule4Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] sub1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] A
      // No operand predicates
      // MIs[1] B
      // No operand predicates
      // MIs[0] sub2
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[2] C
      // No operand predicates
      // MIs[2] A
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #4: AMinusBPlusCMinusA
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
      GIR_RootToRootCopy, /*OpIdx*/0, // root
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // C
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // B
      GIR_EraseRootFromParent_Done,
    // Label 104: @1200
    GIM_Try, /*On fail goto*//*Label 105*/ GIMT_Encode4(1235), // Rule ID 46 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule44Enabled),
      GIM_MIFlags, /*MI*/0, GIMT_Encode4(MachineInstr::NoSWrap),
      // MIs[0] root
      // No operand predicates
      // MIs[0] left
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_VSCALE),
      // MIs[1] imm1
      // No operand predicates
      // MIs[0] right
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_VSCALE),
      // MIs[2] imm2
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #44: add_of_vscale
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner9),
    // Label 105: @1235
    GIM_Try, /*On fail goto*//*Label 106*/ GIMT_Encode4(1269), // Rule ID 1 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] A
      // No operand predicates
      // MIs[0] sub
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] Operand 1
      GIM_CheckConstantInt8, /*MI*/1, /*Op*/1, 0,
      // MIs[1] B
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #1: APlusZeroMinusB
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
      GIR_RootToRootCopy, /*OpIdx*/0, // root
      GIR_RootToRootCopy, /*OpIdx*/1, // A
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // B
      GIR_EraseRootFromParent_Done,
    // Label 106: @1269
    GIM_Try, /*On fail goto*//*Label 107*/ GIMT_Encode4(1303), // Rule ID 2 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule2Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] A
      // No operand predicates
      // MIs[0] sub
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] B
      // No operand predicates
      // MIs[1] A
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/1, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #2: APlusBMinusB
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 107: @1303
    GIM_Try, /*On fail goto*//*Label 108*/ GIMT_Encode4(1337), // Rule ID 108 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule79Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __add_sub_reg_match_0.x
      // No operand predicates
      // MIs[0] __add_sub_reg_match_0.tmp
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] src
      // No operand predicates
      // MIs[1] __add_sub_reg_match_0.x
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/1, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #79: add_sub_reg @ [__add_sub_reg_match_0[0]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 108: @1337
    GIM_Try, /*On fail goto*//*Label 109*/ GIMT_Encode4(1382), // Rule ID 6 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule6Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] A
      // No operand predicates
      // MIs[0] sub1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] B
      // No operand predicates
      // MIs[1] add1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ADD),
      // MIs[2] A
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/1, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[2] C
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #6: APlusBMinusAplusC
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
      GIR_RootToRootCopy, /*OpIdx*/0, // root
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // B
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // C
      GIR_EraseRootFromParent_Done,
    // Label 109: @1382
    GIM_Try, /*On fail goto*//*Label 110*/ GIMT_Encode4(1427), // Rule ID 7 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule7Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] A
      // No operand predicates
      // MIs[0] sub1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] B
      // No operand predicates
      // MIs[1] add1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ADD),
      // MIs[2] C
      // No operand predicates
      // MIs[2] A
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #7: APlusBMinusCPlusA
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
      GIR_RootToRootCopy, /*OpIdx*/0, // root
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // B
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // C
      GIR_EraseRootFromParent_Done,
    // Label 110: @1427
    GIM_Try, /*On fail goto*//*Label 111*/ GIMT_Encode4(1450), // Rule ID 86 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule69Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #69: right_identity_zero @ [__right_identity_zero_match_0[1]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 111: @1450
    GIM_Try, /*On fail goto*//*Label 112*/ GIMT_Encode4(1461), // Rule ID 127 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule92Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src1
      // No operand predicates
      // MIs[0] src2
      // No operand predicates
      // Combiner Rule #92: reassoc_comm_binops
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner45),
    // Label 112: @1461
    GIM_Reject,
    // Label 2: @1462
    GIM_Try, /*On fail goto*//*Label 113*/ GIMT_Encode4(1473), // Rule ID 75 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule62Enabled),
      // Combiner Rule #62: propagate_undef_any_op; wip_match_opcode 'G_SUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner25),
    // Label 113: @1473
    GIM_Try, /*On fail goto*//*Label 114*/ GIMT_Encode4(1484), // Rule ID 213 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule152Enabled),
      // Combiner Rule #152: constant_fold_binop; wip_match_opcode 'G_SUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner95),
    // Label 114: @1484
    GIM_Try, /*On fail goto*//*Label 115*/ GIMT_Encode4(1495), // Rule ID 252 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_SUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 115: @1495
    GIM_Try, /*On fail goto*//*Label 116*/ GIMT_Encode4(1506), // Rule ID 277 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule173Enabled),
      // Combiner Rule #173: sub_add_reg; wip_match_opcode 'G_SUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner115),
    // Label 116: @1506
    GIM_Try, /*On fail goto*//*Label 117*/ GIMT_Encode4(1533), // Rule ID 49 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      GIM_MIFlags, /*MI*/0, GIMT_Encode4(MachineInstr::NoSWrap),
      // MIs[0] root
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] right
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_VSCALE),
      // MIs[1] imm
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #47: sub_of_vscale
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner12),
    // Label 117: @1533
    GIM_Try, /*On fail goto*//*Label 118*/ GIMT_Encode4(1556), // Rule ID 85 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule69Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #69: right_identity_zero @ [__right_identity_zero_match_0[0]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 118: @1556
    GIM_Reject,
    // Label 3: @1557
    GIM_Try, /*On fail goto*//*Label 119*/ GIMT_Encode4(1568), // Rule ID 63 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule57Enabled),
      // Combiner Rule #57: undef_to_int_zero; wip_match_opcode 'G_MUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner21),
    // Label 119: @1568
    GIM_Try, /*On fail goto*//*Label 120*/ GIMT_Encode4(1579), // Rule ID 214 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule152Enabled),
      // Combiner Rule #152: constant_fold_binop; wip_match_opcode 'G_MUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner95),
    // Label 120: @1579
    GIM_Try, /*On fail goto*//*Label 121*/ GIMT_Encode4(1590), // Rule ID 282 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_MUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 121: @1590
    GIM_Try, /*On fail goto*//*Label 122*/ GIMT_Encode4(1630), // Rule ID 11 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule11Enabled),
      // MIs[0] dst
      GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/uint8_t(-1),
      // MIs[0] x
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, uint8_t(-1),
      GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/uint8_t(-1),
      GIR_BuildConstant, /*TempRegID*/0, /*Val*/GIMT_Encode8(0),
      // Combiner Rule #11: mul_by_neg_one
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
      GIR_RootToRootCopy, /*OpIdx*/0, // dst
      GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/0,
      GIR_RootToRootCopy, /*OpIdx*/1, // x
      GIR_EraseRootFromParent_Done,
    // Label 122: @1630
    GIM_Try, /*On fail goto*//*Label 123*/ GIMT_Encode4(1665), // Rule ID 47 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule45Enabled),
      GIM_MIFlags, /*MI*/0, GIMT_Encode4(MachineInstr::NoSWrap),
      // MIs[0] root
      // No operand predicates
      // MIs[0] left
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_VSCALE),
      // MIs[1] scale
      // No operand predicates
      // MIs[0] x
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[2] imm1
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #45: mul_of_vscale
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
    // Label 123: @1665
    GIM_Try, /*On fail goto*//*Label 124*/ GIMT_Encode4(1688), // Rule ID 101 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule72Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] zero
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/2,
      // Combiner Rule #72: binop_right_to_zero
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/2,
      GIR_EraseRootFromParent_Done,
    // Label 124: @1688
    GIM_Try, /*On fail goto*//*Label 125*/ GIMT_Encode4(1711), // Rule ID 106 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule77Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 1,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #77: right_identity_one_int
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 125: @1711
    GIM_Try, /*On fail goto*//*Label 126*/ GIMT_Encode4(1722), // Rule ID 9 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule9Enabled),
      // MIs[0] d
      // No operand predicates
      // MIs[0] op1
      // No operand predicates
      // MIs[0] op2
      // No operand predicates
      // Combiner Rule #9: mul_to_shl
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
    // Label 126: @1722
    GIM_Reject,
    // Label 4: @1723
    GIM_Try, /*On fail goto*//*Label 127*/ GIMT_Encode4(1734), // Rule ID 97 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule71Enabled),
      // Combiner Rule #71: binop_left_to_zero; wip_match_opcode 'G_SDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner32),
    // Label 127: @1734
    GIM_Try, /*On fail goto*//*Label 128*/ GIMT_Encode4(1745), // Rule ID 192 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule139Enabled),
      // Combiner Rule #139: div_rem_to_divrem; wip_match_opcode 'G_SDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner86),
    // Label 128: @1745
    GIM_Try, /*On fail goto*//*Label 129*/ GIMT_Encode4(1756), // Rule ID 232 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule158Enabled),
      // Combiner Rule #158: sdiv_by_const; wip_match_opcode 'G_SDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner100),
    // Label 129: @1756
    GIM_Try, /*On fail goto*//*Label 130*/ GIMT_Encode4(1767), // Rule ID 257 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_SDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 130: @1767
    GIM_Try, /*On fail goto*//*Label 131*/ GIMT_Encode4(1784), // Rule ID 233 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule159Enabled),
      GIM_MIFlagsNot, /*MI*/0, GIMT_Encode4(MachineInstr::IsExact),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      // Combiner Rule #159: sdiv_by_pow2
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner101),
    // Label 131: @1784
    GIM_Reject,
    // Label 5: @1785
    GIM_Try, /*On fail goto*//*Label 132*/ GIMT_Encode4(1796), // Rule ID 66 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule59Enabled),
      // Combiner Rule #59: binop_left_undef_to_zero; wip_match_opcode 'G_UDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner23),
    // Label 132: @1796
    GIM_Try, /*On fail goto*//*Label 133*/ GIMT_Encode4(1807), // Rule ID 98 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule71Enabled),
      // Combiner Rule #71: binop_left_to_zero; wip_match_opcode 'G_UDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner32),
    // Label 133: @1807
    GIM_Try, /*On fail goto*//*Label 134*/ GIMT_Encode4(1818), // Rule ID 193 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule139Enabled),
      // Combiner Rule #139: div_rem_to_divrem; wip_match_opcode 'G_UDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner86),
    // Label 134: @1818
    GIM_Try, /*On fail goto*//*Label 135*/ GIMT_Encode4(1829), // Rule ID 231 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule157Enabled),
      // Combiner Rule #157: udiv_by_const; wip_match_opcode 'G_UDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner99),
    // Label 135: @1829
    GIM_Try, /*On fail goto*//*Label 136*/ GIMT_Encode4(1840), // Rule ID 259 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_UDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 136: @1840
    GIM_Try, /*On fail goto*//*Label 137*/ GIMT_Encode4(1857), // Rule ID 234 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule160Enabled),
      GIM_MIFlagsNot, /*MI*/0, GIMT_Encode4(MachineInstr::IsExact),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      // Combiner Rule #160: udiv_by_pow2
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner102),
    // Label 137: @1857
    GIM_Reject,
    // Label 6: @1858
    GIM_Try, /*On fail goto*//*Label 138*/ GIMT_Encode4(1869), // Rule ID 99 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule71Enabled),
      // Combiner Rule #71: binop_left_to_zero; wip_match_opcode 'G_SREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner32),
    // Label 138: @1869
    GIM_Try, /*On fail goto*//*Label 139*/ GIMT_Encode4(1880), // Rule ID 194 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule139Enabled),
      // Combiner Rule #139: div_rem_to_divrem; wip_match_opcode 'G_SREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner86),
    // Label 139: @1880
    GIM_Try, /*On fail goto*//*Label 140*/ GIMT_Encode4(1891), // Rule ID 258 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_SREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 140: @1891
    GIM_Reject,
    // Label 7: @1892
    GIM_Try, /*On fail goto*//*Label 141*/ GIMT_Encode4(1903), // Rule ID 67 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule59Enabled),
      // Combiner Rule #59: binop_left_undef_to_zero; wip_match_opcode 'G_UREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner23),
    // Label 141: @1903
    GIM_Try, /*On fail goto*//*Label 142*/ GIMT_Encode4(1914), // Rule ID 100 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule71Enabled),
      // Combiner Rule #71: binop_left_to_zero; wip_match_opcode 'G_UREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner32),
    // Label 142: @1914
    GIM_Try, /*On fail goto*//*Label 143*/ GIMT_Encode4(1925), // Rule ID 140 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule105Enabled),
      // Combiner Rule #105: urem_pow2_to_mask; wip_match_opcode 'G_UREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner57),
    // Label 143: @1925
    GIM_Try, /*On fail goto*//*Label 144*/ GIMT_Encode4(1936), // Rule ID 195 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule139Enabled),
      // Combiner Rule #139: div_rem_to_divrem; wip_match_opcode 'G_UREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner86),
    // Label 144: @1936
    GIM_Try, /*On fail goto*//*Label 145*/ GIMT_Encode4(1947), // Rule ID 260 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_UREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 145: @1947
    GIM_Reject,
    // Label 8: @1948
    GIM_Try, /*On fail goto*//*Label 146*/ GIMT_Encode4(1959), // Rule ID 58 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule54Enabled),
      // Combiner Rule #54: load_and_mask; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner18),
    // Label 146: @1959
    GIM_Try, /*On fail goto*//*Label 147*/ GIMT_Encode4(1970), // Rule ID 62 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule57Enabled),
      // Combiner Rule #57: undef_to_int_zero; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner21),
    // Label 147: @1970
    GIM_Try, /*On fail goto*//*Label 148*/ GIMT_Encode4(1981), // Rule ID 120 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule89Enabled),
      // Combiner Rule #89: hoist_logic_op_with_same_opcode_hands; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
    // Label 148: @1981
    GIM_Try, /*On fail goto*//*Label 149*/ GIMT_Encode4(1992), // Rule ID 132 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule97Enabled),
      // Combiner Rule #97: narrow_binop_feeding_and; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner50),
    // Label 149: @1992
    GIM_Try, /*On fail goto*//*Label 150*/ GIMT_Encode4(2003), // Rule ID 137 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule102Enabled),
      // Combiner Rule #102: redundant_and; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner54),
    // Label 150: @2003
    GIM_Try, /*On fail goto*//*Label 151*/ GIMT_Encode4(2014), // Rule ID 165 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule128Enabled),
      // Combiner Rule #128: overlapping_and; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner75),
    // Label 151: @2014
    GIM_Try, /*On fail goto*//*Label 152*/ GIMT_Encode4(2025), // Rule ID 215 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule152Enabled),
      // Combiner Rule #152: constant_fold_binop; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner95),
    // Label 152: @2025
    GIM_Try, /*On fail goto*//*Label 153*/ GIMT_Encode4(2036), // Rule ID 242 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule163Enabled),
      // Combiner Rule #163: and_or_disjoint_mask; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner105),
    // Label 153: @2036
    GIM_Try, /*On fail goto*//*Label 154*/ GIMT_Encode4(2047), // Rule ID 254 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 154: @2047
    GIM_Try, /*On fail goto*//*Label 155*/ GIMT_Encode4(2058), // Rule ID 283 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 155: @2058
    GIM_Try, /*On fail goto*//*Label 156*/ GIMT_Encode4(2069), // Rule ID 310 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule179Enabled),
      // Combiner Rule #179: match_ands; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner121),
    // Label 156: @2069
    GIM_Try, /*On fail goto*//*Label 157*/ GIMT_Encode4(2167), // Rule ID 313 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule182Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] d1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ICMP),
      // MIs[1] p
      // No operand predicates
      // MIs[1] s1
      GIM_RecordRegType, /*MI*/1, /*Op*/2, /*TempTypeIdx*/uint8_t(-1),
      // MIs[1] Operand 3
      GIM_CheckConstantInt8, /*MI*/1, /*Op*/3, 0,
      // MIs[0] d2
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ICMP),
      // MIs[2] p
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
      // MIs[2] s2
      // No operand predicates
      // MIs[2] Operand 3
      GIM_CheckConstantInt8, /*MI*/2, /*Op*/3, 0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner7),
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      GIR_MakeTempReg, /*TempRegID*/1, /*TypeID*/uint8_t(-1),
      GIR_BuildConstant, /*TempRegID*/1, /*Val*/GIMT_Encode8(0),
      GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/uint8_t(-1),
      // Combiner Rule #182: double_icmp_zero_and_combine
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_OR),
      GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(RegState::Define),
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // s1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // s2
      GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_ICMP),
      GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // root
      GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // p
      GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
      GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/1,
      GIR_EraseRootFromParent_Done,
    // Label 157: @2167
    GIM_Try, /*On fail goto*//*Label 158*/ GIMT_Encode4(2204), // Rule ID 207 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule149Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] shift
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_LSHR),
      // MIs[1] x
      // No operand predicates
      // MIs[1] lsb
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[2] imm1
      // No operand predicates
      // MIs[0] mask
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
      GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[3] imm2
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/3,
      // Combiner Rule #149: bitfield_extract_from_and
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner92),
    // Label 158: @2204
    GIM_Try, /*On fail goto*//*Label 159*/ GIMT_Encode4(2228), // Rule ID 95 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule70Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      // MIs[0] src
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #70: binop_same_val @ [__binop_same_val_match_0[0]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 159: @2228
    GIM_Reject,
    // Label 9: @2229
    GIM_Try, /*On fail goto*//*Label 160*/ GIMT_Encode4(2240), // Rule ID 64 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule58Enabled),
      // Combiner Rule #58: undef_to_negative_one; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner22),
    // Label 160: @2240
    GIM_Try, /*On fail goto*//*Label 161*/ GIMT_Encode4(2251), // Rule ID 121 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule89Enabled),
      // Combiner Rule #89: hoist_logic_op_with_same_opcode_hands; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
    // Label 161: @2251
    GIM_Try, /*On fail goto*//*Label 162*/ GIMT_Encode4(2262), // Rule ID 139 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule104Enabled),
      // Combiner Rule #104: redundant_or; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner56),
    // Label 162: @2262
    GIM_Try, /*On fail goto*//*Label 163*/ GIMT_Encode4(2273), // Rule ID 191 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule138Enabled),
      // Combiner Rule #138: load_or_combine; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner85),
    // Label 163: @2273
    GIM_Try, /*On fail goto*//*Label 164*/ GIMT_Encode4(2284), // Rule ID 196 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule140Enabled),
      // Combiner Rule #140: funnel_shift_from_or_shift; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner87),
    // Label 164: @2284
    GIM_Try, /*On fail goto*//*Label 165*/ GIMT_Encode4(2295), // Rule ID 216 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule152Enabled),
      // Combiner Rule #152: constant_fold_binop; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner95),
    // Label 165: @2295
    GIM_Try, /*On fail goto*//*Label 166*/ GIMT_Encode4(2306), // Rule ID 255 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 166: @2306
    GIM_Try, /*On fail goto*//*Label 167*/ GIMT_Encode4(2317), // Rule ID 284 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 167: @2317
    GIM_Try, /*On fail goto*//*Label 168*/ GIMT_Encode4(2328), // Rule ID 311 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule180Enabled),
      // Combiner Rule #180: match_ors; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner122),
    // Label 168: @2328
    GIM_Try, /*On fail goto*//*Label 169*/ GIMT_Encode4(2426), // Rule ID 314 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule183Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] d1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ICMP),
      // MIs[1] p
      // No operand predicates
      // MIs[1] s1
      GIM_RecordRegType, /*MI*/1, /*Op*/2, /*TempTypeIdx*/uint8_t(-1),
      // MIs[1] Operand 3
      GIM_CheckConstantInt8, /*MI*/1, /*Op*/3, 0,
      // MIs[0] d2
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ICMP),
      // MIs[2] p
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
      // MIs[2] s2
      // No operand predicates
      // MIs[2] Operand 3
      GIM_CheckConstantInt8, /*MI*/2, /*Op*/3, 0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner8),
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      GIR_MakeTempReg, /*TempRegID*/1, /*TypeID*/uint8_t(-1),
      GIR_BuildConstant, /*TempRegID*/1, /*Val*/GIMT_Encode8(0),
      GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/uint8_t(-1),
      // Combiner Rule #183: double_icmp_zero_or_combine
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_OR),
      GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(RegState::Define),
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // s1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // s2
      GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_ICMP),
      GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // root
      GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // p
      GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
      GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/1,
      GIR_EraseRootFromParent_Done,
    // Label 169: @2426
    GIM_Try, /*On fail goto*//*Label 170*/ GIMT_Encode4(2450), // Rule ID 96 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule70Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      // MIs[0] src
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #70: binop_same_val @ [__binop_same_val_match_0[1]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 170: @2450
    GIM_Try, /*On fail goto*//*Label 171*/ GIMT_Encode4(2473), // Rule ID 87 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule69Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #69: right_identity_zero @ [__right_identity_zero_match_0[2]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 171: @2473
    GIM_Reject,
    // Label 10: @2474
    GIM_Try, /*On fail goto*//*Label 172*/ GIMT_Encode4(2485), // Rule ID 76 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule62Enabled),
      // Combiner Rule #62: propagate_undef_any_op; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner25),
    // Label 172: @2485
    GIM_Try, /*On fail goto*//*Label 173*/ GIMT_Encode4(2496), // Rule ID 122 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule89Enabled),
      // Combiner Rule #89: hoist_logic_op_with_same_opcode_hands; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
    // Label 173: @2496
    GIM_Try, /*On fail goto*//*Label 174*/ GIMT_Encode4(2507), // Rule ID 148 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule111Enabled),
      // Combiner Rule #111: not_cmp_fold; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner63),
    // Label 174: @2507
    GIM_Try, /*On fail goto*//*Label 175*/ GIMT_Encode4(2518), // Rule ID 179 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule134Enabled),
      // Combiner Rule #134: xor_of_and_with_same_reg; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner81),
    // Label 175: @2518
    GIM_Try, /*On fail goto*//*Label 176*/ GIMT_Encode4(2529), // Rule ID 217 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule152Enabled),
      // Combiner Rule #152: constant_fold_binop; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner95),
    // Label 176: @2529
    GIM_Try, /*On fail goto*//*Label 177*/ GIMT_Encode4(2540), // Rule ID 256 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 177: @2540
    GIM_Try, /*On fail goto*//*Label 178*/ GIMT_Encode4(2551), // Rule ID 285 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 178: @2551
    GIM_Try, /*On fail goto*//*Label 179*/ GIMT_Encode4(2574), // Rule ID 88 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule69Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #69: right_identity_zero @ [__right_identity_zero_match_0[3]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 179: @2574
    GIM_Reject,
    // Label 11: @2575
    GIM_Try, /*On fail goto*//*Label 180*/ GIMT_Encode4(2586), // Rule ID 118 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule87Enabled),
      // Combiner Rule #87: extend_through_phis; wip_match_opcode 'G_PHI'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner40),
    // Label 180: @2586
    GIM_Reject,
    // Label 12: @2587
    GIM_Try, /*On fail goto*//*Label 181*/ GIMT_Encode4(2598), // Rule ID 81 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule66Enabled),
      // Combiner Rule #66: unmerge_undef; wip_match_opcode 'G_UNMERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner29),
    // Label 181: @2598
    GIM_Try, /*On fail goto*//*Label 182*/ GIMT_Encode4(2609), // Rule ID 150 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule113Enabled),
      // Combiner Rule #113: unmerge_merge; wip_match_opcode 'G_UNMERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner65),
    // Label 182: @2609
    GIM_Try, /*On fail goto*//*Label 183*/ GIMT_Encode4(2620), // Rule ID 151 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule114Enabled),
      // Combiner Rule #114: unmerge_cst; wip_match_opcode 'G_UNMERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 183: @2620
    GIM_Try, /*On fail goto*//*Label 184*/ GIMT_Encode4(2631), // Rule ID 152 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule115Enabled),
      // Combiner Rule #115: unmerge_dead_to_trunc; wip_match_opcode 'G_UNMERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner67),
    // Label 184: @2631
    GIM_Try, /*On fail goto*//*Label 185*/ GIMT_Encode4(2642), // Rule ID 153 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule116Enabled),
      // Combiner Rule #116: unmerge_zext_to_zext; wip_match_opcode 'G_UNMERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner68),
    // Label 185: @2642
    GIM_Reject,
    // Label 13: @2643
    GIM_Try, /*On fail goto*//*Label 186*/ GIMT_Encode4(2654), // Rule ID 154 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule117Enabled),
      // Combiner Rule #117: merge_unmerge; wip_match_opcode 'G_MERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner69),
    // Label 186: @2654
    GIM_Reject,
    // Label 14: @2655
    GIM_Try, /*On fail goto*//*Label 187*/ GIMT_Encode4(2666), // Rule ID 54 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule52Enabled),
      // Combiner Rule #52: extract_all_elts_from_build_vector; wip_match_opcode 'G_BUILD_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner16),
    // Label 187: @2666
    GIM_Try, /*On fail goto*//*Label 188*/ GIMT_Encode4(2677), // Rule ID 111 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule80Enabled),
      // Combiner Rule #80: buildvector_identity_fold; wip_match_opcode 'G_BUILD_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner36),
    // Label 188: @2677
    GIM_Reject,
    // Label 15: @2678
    GIM_Try, /*On fail goto*//*Label 189*/ GIMT_Encode4(2689), // Rule ID 110 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule80Enabled),
      // Combiner Rule #80: buildvector_identity_fold; wip_match_opcode 'G_BUILD_VECTOR_TRUNC'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner36),
    // Label 189: @2689
    GIM_Reject,
    // Label 16: @2690
    GIM_Try, /*On fail goto*//*Label 190*/ GIMT_Encode4(2701), // Rule ID 312 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule181Enabled),
      // Combiner Rule #181: combine_concat_vector; wip_match_opcode 'G_CONCAT_VECTORS'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner123),
    // Label 190: @2701
    GIM_Reject,
    // Label 17: @2702
    GIM_Try, /*On fail goto*//*Label 191*/ GIMT_Encode4(2723), // Rule ID 103 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule74Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] t
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_INTTOPTR),
      // MIs[1] ptr
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #74: i2p_to_p2i
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner34),
    // Label 191: @2723
    GIM_Reject,
    // Label 18: @2724
    GIM_Try, /*On fail goto*//*Label 192*/ GIMT_Encode4(2735), // Rule ID 102 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule73Enabled),
      // Combiner Rule #73: p2i_to_i2p; wip_match_opcode 'G_INTTOPTR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner33),
    // Label 192: @2735
    GIM_Reject,
    // Label 19: @2736
    GIM_Try, /*On fail goto*//*Label 193*/ GIMT_Encode4(2757), // Rule ID 114 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BITCAST),
      // MIs[1] src0
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #83: bitcast_bitcast_fold
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner39),
    // Label 193: @2757
    GIM_Reject,
    // Label 20: @2758
    GIM_Try, /*On fail goto*//*Label 194*/ GIMT_Encode4(2787), // Rule ID 12 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule12Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FREEZE),
      // MIs[1] __idempotent_prop_match_0.x
      // No operand predicates
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #12: idempotent_prop @ [__idempotent_prop_match_0[0]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 194: @2787
    GIM_Try, /*On fail goto*//*Label 195*/ GIMT_Encode4(2810), // Rule ID 50 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule48Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner1),
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #48: freeze_of_non_undef_non_poison
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 195: @2810
    GIM_Try, /*On fail goto*//*Label 196*/ GIMT_Encode4(2821), // Rule ID 51 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule49Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      // Combiner Rule #49: push_freeze_to_prevent_poison_from_propagating
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner13),
    // Label 196: @2821
    GIM_Reject,
    // Label 21: @2822
    GIM_Try, /*On fail goto*//*Label 197*/ GIMT_Encode4(2833), // Rule ID 55 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule53Enabled),
      // Combiner Rule #53: extending_loads; wip_match_opcode 'G_LOAD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner17),
    // Label 197: @2833
    GIM_Reject,
    // Label 22: @2834
    GIM_Try, /*On fail goto*//*Label 198*/ GIMT_Encode4(2845), // Rule ID 56 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule53Enabled),
      // Combiner Rule #53: extending_loads; wip_match_opcode 'G_SEXTLOAD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner17),
    // Label 198: @2845
    GIM_Reject,
    // Label 23: @2846
    GIM_Try, /*On fail goto*//*Label 199*/ GIMT_Encode4(2857), // Rule ID 57 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule53Enabled),
      // Combiner Rule #53: extending_loads; wip_match_opcode 'G_ZEXTLOAD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner17),
    // Label 199: @2857
    GIM_Reject,
    // Label 24: @2858
    GIM_Try, /*On fail goto*//*Label 200*/ GIMT_Encode4(2869), // Rule ID 80 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule65Enabled),
      // Combiner Rule #65: erase_undef_store; wip_match_opcode 'G_STORE'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner28),
    // Label 200: @2869
    GIM_Reject,
    // Label 25: @2870
    GIM_Try, /*On fail goto*//*Label 201*/ GIMT_Encode4(2881), // Rule ID 104 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule75Enabled),
      // Combiner Rule #75: anyext_trunc_fold; wip_match_opcode 'G_ANYEXT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner35),
    // Label 201: @2881
    GIM_Try, /*On fail goto*//*Label 202*/ GIMT_Encode4(2892), // Rule ID 145 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
      // Combiner Rule #110: ext_ext_fold; wip_match_opcode 'G_ANYEXT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner62),
    // Label 202: @2892
    GIM_Try, /*On fail goto*//*Label 203*/ GIMT_Encode4(2903), // Rule ID 229 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule155Enabled),
      // Combiner Rule #155: constant_fold_cast_op; wip_match_opcode 'G_ANYEXT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner98),
    // Label 203: @2903
    GIM_Reject,
    // Label 26: @2904
    GIM_Try, /*On fail goto*//*Label 204*/ GIMT_Encode4(2915), // Rule ID 77 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule62Enabled),
      // Combiner Rule #62: propagate_undef_any_op; wip_match_opcode 'G_TRUNC'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner25),
    // Label 204: @2915
    GIM_Try, /*On fail goto*//*Label 205*/ GIMT_Encode4(2926), // Rule ID 112 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule81Enabled),
      // Combiner Rule #81: trunc_buildvector_fold; wip_match_opcode 'G_TRUNC'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner37),
    // Label 205: @2926
    GIM_Try, /*On fail goto*//*Label 206*/ GIMT_Encode4(2937), // Rule ID 113 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule82Enabled),
      // Combiner Rule #82: trunc_lshr_buildvector_fold; wip_match_opcode 'G_TRUNC'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 206: @2937
    GIM_Try, /*On fail goto*//*Label 207*/ GIMT_Encode4(2948), // Rule ID 155 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule118Enabled),
      // Combiner Rule #118: trunc_ext_fold; wip_match_opcode 'G_TRUNC'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
    // Label 207: @2948
    GIM_Try, /*On fail goto*//*Label 208*/ GIMT_Encode4(2959), // Rule ID 156 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule119Enabled),
      // Combiner Rule #119: trunc_shift; wip_match_opcode 'G_TRUNC'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner71),
    // Label 208: @2959
    GIM_Reject,
    // Label 27: @2960
    GIM_Try, /*On fail goto*//*Label 209*/ GIMT_Encode4(2971), // Rule ID 146 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
      // Combiner Rule #110: ext_ext_fold; wip_match_opcode 'G_SEXT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner62),
    // Label 209: @2971
    GIM_Try, /*On fail goto*//*Label 210*/ GIMT_Encode4(2982), // Rule ID 228 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule155Enabled),
      // Combiner Rule #155: constant_fold_cast_op; wip_match_opcode 'G_SEXT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner98),
    // Label 210: @2982
    GIM_Try, /*On fail goto*//*Label 211*/ GIMT_Encode4(3009), // Rule ID 317 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule185Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_TRUNC),
      GIM_MIFlags, /*MI*/1, GIMT_Encode4(MachineInstr::NoSWrap),
      // MIs[1] x
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #185: sext_trunc
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner125),
    // Label 211: @3009
    GIM_Reject,
    // Label 28: @3010
    GIM_Try, /*On fail goto*//*Label 212*/ GIMT_Encode4(3021), // Rule ID 130 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule95Enabled),
      // Combiner Rule #95: sext_inreg_of_load; wip_match_opcode 'G_SEXT_INREG'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner48),
    // Label 212: @3021
    GIM_Try, /*On fail goto*//*Label 213*/ GIMT_Encode4(3032), // Rule ID 138 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule103Enabled),
      // Combiner Rule #103: redundant_sext_inreg; wip_match_opcode 'G_SEXT_INREG'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner55),
    // Label 213: @3032
    GIM_Try, /*On fail goto*//*Label 214*/ GIMT_Encode4(3043), // Rule ID 206 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule148Enabled),
      // Combiner Rule #148: bitfield_extract_from_sext_inreg; wip_match_opcode 'G_SEXT_INREG'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner91),
    // Label 214: @3043
    GIM_Try, /*On fail goto*//*Label 215*/ GIMT_Encode4(3054), // Rule ID 144 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule109Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      // MIs[0] imm
      // No operand predicates
      // Combiner Rule #109: sext_inreg_to_zext_inreg
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner61),
    // Label 215: @3054
    GIM_Reject,
    // Label 29: @3055
    GIM_Try, /*On fail goto*//*Label 216*/ GIMT_Encode4(3066), // Rule ID 141 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule106Enabled),
      // Combiner Rule #106: zext_trunc_fold; wip_match_opcode 'G_ZEXT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner58),
    // Label 216: @3066
    GIM_Try, /*On fail goto*//*Label 217*/ GIMT_Encode4(3077), // Rule ID 147 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
      // Combiner Rule #110: ext_ext_fold; wip_match_opcode 'G_ZEXT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner62),
    // Label 217: @3077
    GIM_Try, /*On fail goto*//*Label 218*/ GIMT_Encode4(3088), // Rule ID 227 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule155Enabled),
      // Combiner Rule #155: constant_fold_cast_op; wip_match_opcode 'G_ZEXT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner98),
    // Label 218: @3088
    GIM_Try, /*On fail goto*//*Label 219*/ GIMT_Encode4(3115), // Rule ID 318 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule186Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_TRUNC),
      GIM_MIFlags, /*MI*/1, GIMT_Encode4(MachineInstr::NoUWrap),
      // MIs[1] x
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #186: zext_trunc
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner126),
    // Label 219: @3115
    GIM_Try, /*On fail goto*//*Label 220*/ GIMT_Encode4(3132), // Rule ID 319 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
      GIM_MIFlags, /*MI*/0, GIMT_Encode4(MachineInstr::NonNeg),
      // MIs[0] root
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // Combiner Rule #187: nneg_zext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner127),
    // Label 220: @3132
    GIM_Reject,
    // Label 30: @3133
    GIM_Try, /*On fail goto*//*Label 221*/ GIMT_Encode4(3144), // Rule ID 65 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule59Enabled),
      // Combiner Rule #59: binop_left_undef_to_zero; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner23),
    // Label 221: @3144
    GIM_Try, /*On fail goto*//*Label 222*/ GIMT_Encode4(3155), // Rule ID 68 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule60Enabled),
      // Combiner Rule #60: binop_right_undef_to_undef; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner24),
    // Label 222: @3155
    GIM_Try, /*On fail goto*//*Label 223*/ GIMT_Encode4(3166), // Rule ID 123 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule90Enabled),
      // Combiner Rule #90: shifts_too_big; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner43),
    // Label 223: @3166
    GIM_Try, /*On fail goto*//*Label 224*/ GIMT_Encode4(3177), // Rule ID 181 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule136Enabled),
      // Combiner Rule #136: shift_immed_chain; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner83),
    // Label 224: @3177
    GIM_Try, /*On fail goto*//*Label 225*/ GIMT_Encode4(3188), // Rule ID 186 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule137Enabled),
      // Combiner Rule #137: shift_of_shifted_logic_chain; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner84),
    // Label 225: @3188
    GIM_Try, /*On fail goto*//*Label 226*/ GIMT_Encode4(3199), // Rule ID 205 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule147Enabled),
      // Combiner Rule #147: commute_shift; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner90),
    // Label 226: @3199
    GIM_Try, /*On fail goto*//*Label 227*/ GIMT_Encode4(3210), // Rule ID 218 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule152Enabled),
      // Combiner Rule #152: constant_fold_binop; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner95),
    // Label 227: @3210
    GIM_Try, /*On fail goto*//*Label 228*/ GIMT_Encode4(3221), // Rule ID 263 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 228: @3221
    GIM_Try, /*On fail goto*//*Label 229*/ GIMT_Encode4(3256), // Rule ID 48 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule46Enabled),
      GIM_MIFlags, /*MI*/0, GIMT_Encode4(MachineInstr::NoSWrap),
      // MIs[0] root
      // No operand predicates
      // MIs[0] left
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_VSCALE),
      // MIs[1] imm
      // No operand predicates
      // MIs[0] x
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[2] imm1
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #46: shl_of_vscale
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner11),
    // Label 229: @3256
    GIM_Try, /*On fail goto*//*Label 230*/ GIMT_Encode4(3279), // Rule ID 89 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule69Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #69: right_identity_zero @ [__right_identity_zero_match_0[4]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 230: @3279
    GIM_Try, /*On fail goto*//*Label 231*/ GIMT_Encode4(3290), // Rule ID 131 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule96Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src0
      // No operand predicates
      // MIs[0] src1
      // No operand predicates
      // Combiner Rule #96: reduce_shl_of_extend
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner49),
    // Label 231: @3290
    GIM_Reject,
    // Label 31: @3291
    GIM_Try, /*On fail goto*//*Label 232*/ GIMT_Encode4(3302), // Rule ID 70 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule60Enabled),
      // Combiner Rule #60: binop_right_undef_to_undef; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner24),
    // Label 232: @3302
    GIM_Try, /*On fail goto*//*Label 233*/ GIMT_Encode4(3313), // Rule ID 125 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule90Enabled),
      // Combiner Rule #90: shifts_too_big; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner43),
    // Label 233: @3313
    GIM_Try, /*On fail goto*//*Label 234*/ GIMT_Encode4(3324), // Rule ID 183 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule136Enabled),
      // Combiner Rule #136: shift_immed_chain; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner83),
    // Label 234: @3324
    GIM_Try, /*On fail goto*//*Label 235*/ GIMT_Encode4(3335), // Rule ID 188 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule137Enabled),
      // Combiner Rule #137: shift_of_shifted_logic_chain; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner84),
    // Label 235: @3335
    GIM_Try, /*On fail goto*//*Label 236*/ GIMT_Encode4(3346), // Rule ID 209 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule150Enabled),
      // Combiner Rule #150: bitfield_extract_from_shr; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner93),
    // Label 236: @3346
    GIM_Try, /*On fail goto*//*Label 237*/ GIMT_Encode4(3357), // Rule ID 211 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule151Enabled),
      // Combiner Rule #151: bitfield_extract_from_shr_and; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner94),
    // Label 237: @3357
    GIM_Try, /*On fail goto*//*Label 238*/ GIMT_Encode4(3368), // Rule ID 219 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule152Enabled),
      // Combiner Rule #152: constant_fold_binop; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner95),
    // Label 238: @3368
    GIM_Try, /*On fail goto*//*Label 239*/ GIMT_Encode4(3379), // Rule ID 261 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 239: @3379
    GIM_Try, /*On fail goto*//*Label 240*/ GIMT_Encode4(3402), // Rule ID 91 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule69Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #69: right_identity_zero @ [__right_identity_zero_match_0[6]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 240: @3402
    GIM_Reject,
    // Label 32: @3403
    GIM_Try, /*On fail goto*//*Label 241*/ GIMT_Encode4(3414), // Rule ID 69 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule60Enabled),
      // Combiner Rule #60: binop_right_undef_to_undef; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner24),
    // Label 241: @3414
    GIM_Try, /*On fail goto*//*Label 242*/ GIMT_Encode4(3425), // Rule ID 124 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule90Enabled),
      // Combiner Rule #90: shifts_too_big; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner43),
    // Label 242: @3425
    GIM_Try, /*On fail goto*//*Label 243*/ GIMT_Encode4(3436), // Rule ID 129 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule94Enabled),
      // Combiner Rule #94: shl_ashr_to_sext_inreg; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner47),
    // Label 243: @3436
    GIM_Try, /*On fail goto*//*Label 244*/ GIMT_Encode4(3447), // Rule ID 182 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule136Enabled),
      // Combiner Rule #136: shift_immed_chain; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner83),
    // Label 244: @3447
    GIM_Try, /*On fail goto*//*Label 245*/ GIMT_Encode4(3458), // Rule ID 187 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule137Enabled),
      // Combiner Rule #137: shift_of_shifted_logic_chain; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner84),
    // Label 245: @3458
    GIM_Try, /*On fail goto*//*Label 246*/ GIMT_Encode4(3469), // Rule ID 208 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule150Enabled),
      // Combiner Rule #150: bitfield_extract_from_shr; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner93),
    // Label 246: @3469
    GIM_Try, /*On fail goto*//*Label 247*/ GIMT_Encode4(3480), // Rule ID 210 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule151Enabled),
      // Combiner Rule #151: bitfield_extract_from_shr_and; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner94),
    // Label 247: @3480
    GIM_Try, /*On fail goto*//*Label 248*/ GIMT_Encode4(3491), // Rule ID 220 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule152Enabled),
      // Combiner Rule #152: constant_fold_binop; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner95),
    // Label 248: @3491
    GIM_Try, /*On fail goto*//*Label 249*/ GIMT_Encode4(3502), // Rule ID 262 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 249: @3502
    GIM_Try, /*On fail goto*//*Label 250*/ GIMT_Encode4(3525), // Rule ID 90 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule69Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #69: right_identity_zero @ [__right_identity_zero_match_0[5]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 250: @3525
    GIM_Reject,
    // Label 33: @3526
    GIM_Try, /*On fail goto*//*Label 251*/ GIMT_Encode4(3537), // Rule ID 197 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule141Enabled),
      // Combiner Rule #141: funnel_shift_to_rotate; wip_match_opcode 'G_FSHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner88),
    // Label 251: @3537
    GIM_Try, /*On fail goto*//*Label 252*/ GIMT_Encode4(3548), // Rule ID 201 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule144Enabled),
      // Combiner Rule #144: funnel_shift_overshift; wip_match_opcode 'G_FSHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner89),
    // Label 252: @3548
    GIM_Try, /*On fail goto*//*Label 253*/ GIMT_Encode4(3568), // Rule ID 200 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule143Enabled),
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      // MIs[0] z
      // No operand predicates
      // MIs[0] Operand 3
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/3, 0,
      // Combiner Rule #143: funnel_shift_left_zero
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::COPY),
      GIR_RootToRootCopy, /*OpIdx*/0, // x
      GIR_RootToRootCopy, /*OpIdx*/1, // y
      GIR_EraseRootFromParent_Done,
    // Label 253: @3568
    GIM_Reject,
    // Label 34: @3569
    GIM_Try, /*On fail goto*//*Label 254*/ GIMT_Encode4(3580), // Rule ID 198 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule141Enabled),
      // Combiner Rule #141: funnel_shift_to_rotate; wip_match_opcode 'G_FSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner88),
    // Label 254: @3580
    GIM_Try, /*On fail goto*//*Label 255*/ GIMT_Encode4(3591), // Rule ID 202 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule144Enabled),
      // Combiner Rule #144: funnel_shift_overshift; wip_match_opcode 'G_FSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner89),
    // Label 255: @3591
    GIM_Try, /*On fail goto*//*Label 256*/ GIMT_Encode4(3611), // Rule ID 199 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule142Enabled),
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      // MIs[0] z
      // No operand predicates
      // MIs[0] Operand 3
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/3, 0,
      // Combiner Rule #142: funnel_shift_right_zero
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::COPY),
      GIR_RootToRootCopy, /*OpIdx*/0, // x
      GIR_RootToRootCopy, /*OpIdx*/2, // z
      GIR_EraseRootFromParent_Done,
    // Label 256: @3611
    GIM_Reject,
    // Label 35: @3612
    GIM_Try, /*On fail goto*//*Label 257*/ GIMT_Encode4(3635), // Rule ID 94 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule69Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #69: right_identity_zero @ [__right_identity_zero_match_0[9]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 257: @3635
    GIM_Reject,
    // Label 36: @3636
    GIM_Try, /*On fail goto*//*Label 258*/ GIMT_Encode4(3659), // Rule ID 93 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule69Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #69: right_identity_zero @ [__right_identity_zero_match_0[8]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 258: @3659
    GIM_Reject,
    // Label 37: @3660
    GIM_Try, /*On fail goto*//*Label 259*/ GIMT_Encode4(3671), // Rule ID 142 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule107Enabled),
      // Combiner Rule #107: icmp_to_true_false_known_bits; wip_match_opcode 'G_ICMP'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner59),
    // Label 259: @3671
    GIM_Try, /*On fail goto*//*Label 260*/ GIMT_Encode4(3682), // Rule ID 143 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule108Enabled),
      // Combiner Rule #108: icmp_to_lhs_known_bits; wip_match_opcode 'G_ICMP'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner60),
    // Label 260: @3682
    GIM_Try, /*On fail goto*//*Label 261*/ GIMT_Encode4(3693), // Rule ID 279 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule175Enabled),
      // Combiner Rule #175: redundant_binop_in_equality; wip_match_opcode 'G_ICMP'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner117),
    // Label 261: @3693
    GIM_Reject,
    // Label 38: @3694
    GIM_Try, /*On fail goto*//*Label 262*/ GIMT_Encode4(3705), // Rule ID 84 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule68Enabled),
      // Combiner Rule #68: select_same_val; wip_match_opcode 'G_SELECT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner31),
    // Label 262: @3705
    GIM_Try, /*On fail goto*//*Label 263*/ GIMT_Encode4(3716), // Rule ID 134 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule99Enabled),
      // Combiner Rule #99: select_constant_cmp; wip_match_opcode 'G_SELECT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner51),
    // Label 263: @3716
    GIM_Try, /*On fail goto*//*Label 264*/ GIMT_Encode4(3727), // Rule ID 136 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule101Enabled),
      // Combiner Rule #101: match_selects; wip_match_opcode 'G_SELECT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner53),
    // Label 264: @3727
    GIM_Try, /*On fail goto*//*Label 265*/ GIMT_Encode4(3738), // Rule ID 278 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule174Enabled),
      // Combiner Rule #174: select_to_minmax; wip_match_opcode 'G_SELECT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner116),
    // Label 265: @3738
    GIM_Try, /*On fail goto*//*Label 266*/ GIMT_Encode4(3759), // Rule ID 135 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule100Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] tst
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ICMP),
      // MIs[1] tst1
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #100: select_to_iminmax
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner52),
    // Label 266: @3759
    GIM_Try, /*On fail goto*//*Label 267*/ GIMT_Encode4(3788), // Rule ID 133 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule98Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] undef
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/3,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #98: select_undef_cmp
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/3,
      GIR_EraseRootFromParent_Done,
    // Label 267: @3788
    GIM_Reject,
    // Label 39: @3789
    GIM_Try, /*On fail goto*//*Label 268*/ GIMT_Encode4(3800), // Rule ID 290 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_UADDO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 268: @3800
    GIM_Try, /*On fail goto*//*Label 269*/ GIMT_Encode4(3811), // Rule ID 316 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: match_addos; wip_match_opcode 'G_UADDO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner124),
    // Label 269: @3811
    GIM_Reject,
    // Label 40: @3812
    GIM_Try, /*On fail goto*//*Label 270*/ GIMT_Encode4(3823), // Rule ID 170 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule131Enabled),
      // Combiner Rule #131: adde_to_addo; wip_match_opcode 'G_UADDE'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner78),
    // Label 270: @3823
    GIM_Reject,
    // Label 41: @3824
    GIM_Try, /*On fail goto*//*Label 271*/ GIMT_Encode4(3835), // Rule ID 172 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule131Enabled),
      // Combiner Rule #131: adde_to_addo; wip_match_opcode 'G_USUBE'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner78),
    // Label 271: @3835
    GIM_Reject,
    // Label 42: @3836
    GIM_Try, /*On fail goto*//*Label 272*/ GIMT_Encode4(3847), // Rule ID 291 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_SADDO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 272: @3847
    GIM_Try, /*On fail goto*//*Label 273*/ GIMT_Encode4(3858), // Rule ID 315 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: match_addos; wip_match_opcode 'G_SADDO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner124),
    // Label 273: @3858
    GIM_Reject,
    // Label 43: @3859
    GIM_Try, /*On fail goto*//*Label 274*/ GIMT_Encode4(3870), // Rule ID 171 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule131Enabled),
      // Combiner Rule #131: adde_to_addo; wip_match_opcode 'G_SADDE'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner78),
    // Label 274: @3870
    GIM_Reject,
    // Label 44: @3871
    GIM_Try, /*On fail goto*//*Label 275*/ GIMT_Encode4(3882), // Rule ID 173 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule131Enabled),
      // Combiner Rule #131: adde_to_addo; wip_match_opcode 'G_SSUBE'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner78),
    // Label 275: @3882
    GIM_Reject,
    // Label 45: @3883
    GIM_Try, /*On fail goto*//*Label 276*/ GIMT_Encode4(3894), // Rule ID 166 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule129Enabled),
      // Combiner Rule #129: mulo_by_2; wip_match_opcode 'G_UMULO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner76),
    // Label 276: @3894
    GIM_Try, /*On fail goto*//*Label 277*/ GIMT_Encode4(3905), // Rule ID 168 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule130Enabled),
      // Combiner Rule #130: mulo_by_0; wip_match_opcode 'G_UMULO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner77),
    // Label 277: @3905
    GIM_Try, /*On fail goto*//*Label 278*/ GIMT_Encode4(3916), // Rule ID 292 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 278: @3916
    GIM_Reject,
    // Label 46: @3917
    GIM_Try, /*On fail goto*//*Label 279*/ GIMT_Encode4(3928), // Rule ID 167 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule129Enabled),
      // Combiner Rule #129: mulo_by_2; wip_match_opcode 'G_SMULO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner76),
    // Label 279: @3928
    GIM_Try, /*On fail goto*//*Label 280*/ GIMT_Encode4(3939), // Rule ID 169 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule130Enabled),
      // Combiner Rule #130: mulo_by_0; wip_match_opcode 'G_SMULO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner77),
    // Label 280: @3939
    GIM_Try, /*On fail goto*//*Label 281*/ GIMT_Encode4(3950), // Rule ID 293 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 281: @3950
    GIM_Reject,
    // Label 47: @3951
    GIM_Try, /*On fail goto*//*Label 282*/ GIMT_Encode4(3962), // Rule ID 235 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule161Enabled),
      // Combiner Rule #161: mulh_to_lshr; wip_match_opcode 'G_UMULH'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
    // Label 282: @3962
    GIM_Try, /*On fail goto*//*Label 283*/ GIMT_Encode4(3973), // Rule ID 294 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULH'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 283: @3973
    GIM_Reject,
    // Label 48: @3974
    GIM_Try, /*On fail goto*//*Label 284*/ GIMT_Encode4(3985), // Rule ID 295 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULH'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 284: @3985
    GIM_Reject,
    // Label 49: @3986
    GIM_Try, /*On fail goto*//*Label 285*/ GIMT_Encode4(3997), // Rule ID 296 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_UADDSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 285: @3997
    GIM_Reject,
    // Label 50: @3998
    GIM_Try, /*On fail goto*//*Label 286*/ GIMT_Encode4(4009), // Rule ID 297 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_SADDSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 286: @4009
    GIM_Reject,
    // Label 51: @4010
    GIM_Try, /*On fail goto*//*Label 287*/ GIMT_Encode4(4021), // Rule ID 185 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule136Enabled),
      // Combiner Rule #136: shift_immed_chain; wip_match_opcode 'G_USHLSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner83),
    // Label 287: @4021
    GIM_Try, /*On fail goto*//*Label 288*/ GIMT_Encode4(4032), // Rule ID 189 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule137Enabled),
      // Combiner Rule #137: shift_of_shifted_logic_chain; wip_match_opcode 'G_USHLSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner84),
    // Label 288: @4032
    GIM_Reject,
    // Label 52: @4033
    GIM_Try, /*On fail goto*//*Label 289*/ GIMT_Encode4(4044), // Rule ID 184 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule136Enabled),
      // Combiner Rule #136: shift_immed_chain; wip_match_opcode 'G_SSHLSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner83),
    // Label 289: @4044
    GIM_Try, /*On fail goto*//*Label 290*/ GIMT_Encode4(4055), // Rule ID 190 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule137Enabled),
      // Combiner Rule #137: shift_of_shifted_logic_chain; wip_match_opcode 'G_SSHLSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner84),
    // Label 290: @4055
    GIM_Reject,
    // Label 53: @4056
    GIM_Try, /*On fail goto*//*Label 291*/ GIMT_Encode4(4067), // Rule ID 298 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULFIX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 291: @4067
    GIM_Reject,
    // Label 54: @4068
    GIM_Try, /*On fail goto*//*Label 292*/ GIMT_Encode4(4079), // Rule ID 299 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULFIX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 292: @4079
    GIM_Reject,
    // Label 55: @4080
    GIM_Try, /*On fail goto*//*Label 293*/ GIMT_Encode4(4091), // Rule ID 300 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULFIXSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 293: @4091
    GIM_Reject,
    // Label 56: @4092
    GIM_Try, /*On fail goto*//*Label 294*/ GIMT_Encode4(4103), // Rule ID 301 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULFIXSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 294: @4103
    GIM_Reject,
    // Label 57: @4104
    GIM_Try, /*On fail goto*//*Label 295*/ GIMT_Encode4(4115), // Rule ID 221 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule153Enabled),
      // Combiner Rule #153: constant_fold_fp_binop; wip_match_opcode 'G_FADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner96),
    // Label 295: @4115
    GIM_Try, /*On fail goto*//*Label 296*/ GIMT_Encode4(4126), // Rule ID 236 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule162Enabled),
      // Combiner Rule #162: redundant_neg_operands; wip_match_opcode 'G_FADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner104),
    // Label 296: @4126
    GIM_Try, /*On fail goto*//*Label 297*/ GIMT_Encode4(4137), // Rule ID 243 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
      // Combiner Rule #164: combine_fadd_fmul_to_fmad_or_fma; wip_match_opcode 'G_FADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner106),
    // Label 297: @4137
    GIM_Try, /*On fail goto*//*Label 298*/ GIMT_Encode4(4148), // Rule ID 244 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule165Enabled),
      // Combiner Rule #165: combine_fadd_fpext_fmul_to_fmad_or_fma; wip_match_opcode 'G_FADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner107),
    // Label 298: @4148
    GIM_Try, /*On fail goto*//*Label 299*/ GIMT_Encode4(4159), // Rule ID 245 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule166Enabled),
      // Combiner Rule #166: combine_fadd_fma_fmul_to_fmad_or_fma; wip_match_opcode 'G_FADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner108),
    // Label 299: @4159
    GIM_Try, /*On fail goto*//*Label 300*/ GIMT_Encode4(4170), // Rule ID 246 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule167Enabled),
      // Combiner Rule #167: combine_fadd_fpext_fma_fmul_to_fmad_or_fma; wip_match_opcode 'G_FADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner109),
    // Label 300: @4170
    GIM_Try, /*On fail goto*//*Label 301*/ GIMT_Encode4(4181), // Rule ID 269 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_FADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 301: @4181
    GIM_Try, /*On fail goto*//*Label 302*/ GIMT_Encode4(4192), // Rule ID 302 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule178Enabled),
      // Combiner Rule #178: commute_fp_constant_to_rhs; wip_match_opcode 'G_FADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner120),
    // Label 302: @4192
    GIM_Try, /*On fail goto*//*Label 303*/ GIMT_Encode4(4215), // Rule ID 116 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule85Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner3),
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #85: right_identity_neg_zero_fp
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 303: @4215
    GIM_Reject,
    // Label 58: @4216
    GIM_Try, /*On fail goto*//*Label 304*/ GIMT_Encode4(4227), // Rule ID 222 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule153Enabled),
      // Combiner Rule #153: constant_fold_fp_binop; wip_match_opcode 'G_FSUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner96),
    // Label 304: @4227
    GIM_Try, /*On fail goto*//*Label 305*/ GIMT_Encode4(4238), // Rule ID 237 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule162Enabled),
      // Combiner Rule #162: redundant_neg_operands; wip_match_opcode 'G_FSUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner104),
    // Label 305: @4238
    GIM_Try, /*On fail goto*//*Label 306*/ GIMT_Encode4(4249), // Rule ID 247 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule168Enabled),
      // Combiner Rule #168: combine_fsub_fmul_to_fmad_or_fma; wip_match_opcode 'G_FSUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner110),
    // Label 306: @4249
    GIM_Try, /*On fail goto*//*Label 307*/ GIMT_Encode4(4260), // Rule ID 248 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule169Enabled),
      // Combiner Rule #169: combine_fsub_fneg_fmul_to_fmad_or_fma; wip_match_opcode 'G_FSUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner111),
    // Label 307: @4260
    GIM_Try, /*On fail goto*//*Label 308*/ GIMT_Encode4(4271), // Rule ID 249 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule170Enabled),
      // Combiner Rule #170: combine_fsub_fpext_fmul_to_fmad_or_fma; wip_match_opcode 'G_FSUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner112),
    // Label 308: @4271
    GIM_Try, /*On fail goto*//*Label 309*/ GIMT_Encode4(4282), // Rule ID 250 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule171Enabled),
      // Combiner Rule #171: combine_fsub_fpext_fneg_fmul_to_fmad_or_fma; wip_match_opcode 'G_FSUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner113),
    // Label 309: @4282
    GIM_Try, /*On fail goto*//*Label 310*/ GIMT_Encode4(4293), // Rule ID 270 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_FSUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 310: @4293
    GIM_Try, /*On fail goto*//*Label 311*/ GIMT_Encode4(4304), // Rule ID 280 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule176Enabled),
      // Combiner Rule #176: fsub_to_fneg; wip_match_opcode 'G_FSUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner118),
    // Label 311: @4304
    GIM_Reject,
    // Label 59: @4305
    GIM_Try, /*On fail goto*//*Label 312*/ GIMT_Encode4(4316), // Rule ID 223 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule153Enabled),
      // Combiner Rule #153: constant_fold_fp_binop; wip_match_opcode 'G_FMUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner96),
    // Label 312: @4316
    GIM_Try, /*On fail goto*//*Label 313*/ GIMT_Encode4(4327), // Rule ID 238 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule162Enabled),
      // Combiner Rule #162: redundant_neg_operands; wip_match_opcode 'G_FMUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner104),
    // Label 313: @4327
    GIM_Try, /*On fail goto*//*Label 314*/ GIMT_Encode4(4338), // Rule ID 268 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_FMUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 314: @4338
    GIM_Try, /*On fail goto*//*Label 315*/ GIMT_Encode4(4349), // Rule ID 303 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule178Enabled),
      // Combiner Rule #178: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner120),
    // Label 315: @4349
    GIM_Try, /*On fail goto*//*Label 316*/ GIMT_Encode4(4372), // Rule ID 107 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule78Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner2),
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #78: right_identity_one_fp
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 316: @4372
    GIM_Try, /*On fail goto*//*Label 317*/ GIMT_Encode4(4392), // Rule ID 117 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner4),
      // Combiner Rule #86: right_identity_neg_one_fp
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_FNEG),
      GIR_RootToRootCopy, /*OpIdx*/0, // dst
      GIR_RootToRootCopy, /*OpIdx*/1, // x
      GIR_EraseRootFromParent_Done,
    // Label 317: @4392
    GIM_Reject,
    // Label 60: @4393
    GIM_Try, /*On fail goto*//*Label 318*/ GIMT_Encode4(4404), // Rule ID 226 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule154Enabled),
      // Combiner Rule #154: constant_fold_fma; wip_match_opcode 'G_FMA'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner97),
    // Label 318: @4404
    GIM_Try, /*On fail goto*//*Label 319*/ GIMT_Encode4(4415), // Rule ID 241 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule162Enabled),
      // Combiner Rule #162: redundant_neg_operands; wip_match_opcode 'G_FMA'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner104),
    // Label 319: @4415
    GIM_Reject,
    // Label 61: @4416
    GIM_Try, /*On fail goto*//*Label 320*/ GIMT_Encode4(4427), // Rule ID 225 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule154Enabled),
      // Combiner Rule #154: constant_fold_fma; wip_match_opcode 'G_FMAD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner97),
    // Label 320: @4427
    GIM_Try, /*On fail goto*//*Label 321*/ GIMT_Encode4(4438), // Rule ID 240 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule162Enabled),
      // Combiner Rule #162: redundant_neg_operands; wip_match_opcode 'G_FMAD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner104),
    // Label 321: @4438
    GIM_Reject,
    // Label 62: @4439
    GIM_Try, /*On fail goto*//*Label 322*/ GIMT_Encode4(4450), // Rule ID 224 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule153Enabled),
      // Combiner Rule #153: constant_fold_fp_binop; wip_match_opcode 'G_FDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner96),
    // Label 322: @4450
    GIM_Try, /*On fail goto*//*Label 323*/ GIMT_Encode4(4461), // Rule ID 239 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule162Enabled),
      // Combiner Rule #162: redundant_neg_operands; wip_match_opcode 'G_FDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner104),
    // Label 323: @4461
    GIM_Try, /*On fail goto*//*Label 324*/ GIMT_Encode4(4472), // Rule ID 271 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_FDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 324: @4472
    GIM_Reject,
    // Label 63: @4473
    GIM_Try, /*On fail goto*//*Label 325*/ GIMT_Encode4(4484), // Rule ID 272 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_FREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 325: @4484
    GIM_Reject,
    // Label 64: @4485
    GIM_Try, /*On fail goto*//*Label 326*/ GIMT_Encode4(4506), // Rule ID 178 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule133Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] float
      // No operand predicates
      // MIs[0] int
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[1] imm
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #133: expand_const_fpowi
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner80),
    // Label 326: @4506
    GIM_Reject,
    // Label 65: @4507
    GIM_Try, /*On fail goto*//*Label 327*/ GIMT_Encode4(4528), // Rule ID 160 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule123Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src0
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
      // MIs[1] cst
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #123: constant_fold_flog2
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner72),
    // Label 327: @4528
    GIM_Reject,
    // Label 66: @4529
    GIM_Try, /*On fail goto*//*Label 328*/ GIMT_Encode4(4550), // Rule ID 157 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule120Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src0
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
      // MIs[1] cst
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #120: constant_fold_fneg
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner72),
    // Label 328: @4550
    GIM_Try, /*On fail goto*//*Label 329*/ GIMT_Encode4(4579), // Rule ID 105 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule76Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] t
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FNEG),
      // MIs[1] src
      // No operand predicates
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #76: fneg_fneg_fold
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 329: @4579
    GIM_Reject,
    // Label 67: @4580
    GIM_Try, /*On fail goto*//*Label 330*/ GIMT_Encode4(4601), // Rule ID 161 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule124Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src0
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
      // MIs[1] cst
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #124: constant_fold_fptrunc
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner72),
    // Label 330: @4601
    GIM_Try, /*On fail goto*//*Label 331*/ GIMT_Encode4(4622), // Rule ID 115 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule84Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FPEXT),
      // MIs[1] src0
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #84: fptrunc_fpext_fold
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner39),
    // Label 331: @4622
    GIM_Reject,
    // Label 68: @4623
    GIM_Try, /*On fail goto*//*Label 332*/ GIMT_Encode4(4634), // Rule ID 73 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule62Enabled),
      // Combiner Rule #62: propagate_undef_any_op; wip_match_opcode 'G_FPTOSI'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner25),
    // Label 332: @4634
    GIM_Reject,
    // Label 69: @4635
    GIM_Try, /*On fail goto*//*Label 333*/ GIMT_Encode4(4646), // Rule ID 74 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule62Enabled),
      // Combiner Rule #62: propagate_undef_any_op; wip_match_opcode 'G_FPTOUI'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner25),
    // Label 333: @4646
    GIM_Reject,
    // Label 70: @4647
    GIM_Try, /*On fail goto*//*Label 334*/ GIMT_Encode4(4658), // Rule ID 61 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule56Enabled),
      // Combiner Rule #56: undef_to_fp_zero; wip_match_opcode 'G_SITOFP'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner20),
    // Label 334: @4658
    GIM_Try, /*On fail goto*//*Label 335*/ GIMT_Encode4(4673), // Rule ID 162 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule125Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] Operand 1
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/1, 0,
      // Combiner Rule #125: itof_const_zero_fold_si
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner73),
    // Label 335: @4673
    GIM_Reject,
    // Label 71: @4674
    GIM_Try, /*On fail goto*//*Label 336*/ GIMT_Encode4(4685), // Rule ID 60 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule56Enabled),
      // Combiner Rule #56: undef_to_fp_zero; wip_match_opcode 'G_UITOFP'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner20),
    // Label 336: @4685
    GIM_Try, /*On fail goto*//*Label 337*/ GIMT_Encode4(4700), // Rule ID 163 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule126Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] Operand 1
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/1, 0,
      // Combiner Rule #126: itof_const_zero_fold_ui
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner73),
    // Label 337: @4700
    GIM_Reject,
    // Label 72: @4701
    GIM_Try, /*On fail goto*//*Label 338*/ GIMT_Encode4(4730), // Rule ID 13 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule12Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FABS),
      // MIs[1] __idempotent_prop_match_0.x
      // No operand predicates
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #12: idempotent_prop @ [__idempotent_prop_match_0[1]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 338: @4730
    GIM_Try, /*On fail goto*//*Label 339*/ GIMT_Encode4(4751), // Rule ID 158 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule121Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src0
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
      // MIs[1] cst
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #121: constant_fold_fabs
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner72),
    // Label 339: @4751
    GIM_Try, /*On fail goto*//*Label 340*/ GIMT_Encode4(4779), // Rule ID 230 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule156Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] tmp
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FNEG),
      // MIs[1] x
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #156: fabs_fneg_fold
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_FABS),
      GIR_RootToRootCopy, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // x
      GIR_EraseRootFromParent_Done,
    // Label 340: @4779
    GIM_Reject,
    // Label 73: @4780
    GIM_Try, /*On fail goto*//*Label 341*/ GIMT_Encode4(4809), // Rule ID 14 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule12Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCANONICALIZE),
      // MIs[1] __idempotent_prop_match_0.x
      // No operand predicates
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #12: idempotent_prop @ [__idempotent_prop_match_0[2]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 341: @4809
    GIM_Reject,
    // Label 74: @4810
    GIM_Try, /*On fail goto*//*Label 342*/ GIMT_Encode4(4821), // Rule ID 174 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule132Enabled),
      // Combiner Rule #132: combine_minmax_nan; wip_match_opcode 'G_FMINNUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner79),
    // Label 342: @4821
    GIM_Try, /*On fail goto*//*Label 343*/ GIMT_Encode4(4832), // Rule ID 273 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_FMINNUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 343: @4832
    GIM_Try, /*On fail goto*//*Label 344*/ GIMT_Encode4(4843), // Rule ID 304 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule178Enabled),
      // Combiner Rule #178: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMINNUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner120),
    // Label 344: @4843
    GIM_Reject,
    // Label 75: @4844
    GIM_Try, /*On fail goto*//*Label 345*/ GIMT_Encode4(4855), // Rule ID 175 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule132Enabled),
      // Combiner Rule #132: combine_minmax_nan; wip_match_opcode 'G_FMAXNUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner79),
    // Label 345: @4855
    GIM_Try, /*On fail goto*//*Label 346*/ GIMT_Encode4(4866), // Rule ID 274 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_FMAXNUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 346: @4866
    GIM_Try, /*On fail goto*//*Label 347*/ GIMT_Encode4(4877), // Rule ID 305 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule178Enabled),
      // Combiner Rule #178: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMAXNUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner120),
    // Label 347: @4877
    GIM_Reject,
    // Label 76: @4878
    GIM_Try, /*On fail goto*//*Label 348*/ GIMT_Encode4(4889), // Rule ID 306 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule178Enabled),
      // Combiner Rule #178: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMINNUM_IEEE'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner120),
    // Label 348: @4889
    GIM_Reject,
    // Label 77: @4890
    GIM_Try, /*On fail goto*//*Label 349*/ GIMT_Encode4(4901), // Rule ID 307 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule178Enabled),
      // Combiner Rule #178: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMAXNUM_IEEE'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner120),
    // Label 349: @4901
    GIM_Reject,
    // Label 78: @4902
    GIM_Try, /*On fail goto*//*Label 350*/ GIMT_Encode4(4913), // Rule ID 176 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule132Enabled),
      // Combiner Rule #132: combine_minmax_nan; wip_match_opcode 'G_FMINIMUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner79),
    // Label 350: @4913
    GIM_Try, /*On fail goto*//*Label 351*/ GIMT_Encode4(4924), // Rule ID 275 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_FMINIMUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 351: @4924
    GIM_Try, /*On fail goto*//*Label 352*/ GIMT_Encode4(4935), // Rule ID 308 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule178Enabled),
      // Combiner Rule #178: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMINIMUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner120),
    // Label 352: @4935
    GIM_Reject,
    // Label 79: @4936
    GIM_Try, /*On fail goto*//*Label 353*/ GIMT_Encode4(4947), // Rule ID 177 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule132Enabled),
      // Combiner Rule #132: combine_minmax_nan; wip_match_opcode 'G_FMAXIMUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner79),
    // Label 353: @4947
    GIM_Try, /*On fail goto*//*Label 354*/ GIMT_Encode4(4958), // Rule ID 276 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_FMAXIMUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 354: @4958
    GIM_Try, /*On fail goto*//*Label 355*/ GIMT_Encode4(4969), // Rule ID 309 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule178Enabled),
      // Combiner Rule #178: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMAXIMUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner120),
    // Label 355: @4969
    GIM_Reject,
    // Label 80: @4970
    GIM_Try, /*On fail goto*//*Label 356*/ GIMT_Encode4(4981), // Rule ID 126 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule91Enabled),
      // Combiner Rule #91: reassoc_ptradd; wip_match_opcode 'G_PTR_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner44),
    // Label 356: @4981
    GIM_Try, /*On fail goto*//*Label 357*/ GIMT_Encode4(4992), // Rule ID 128 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule93Enabled),
      // Combiner Rule #93: ptr_add_immed_chain; wip_match_opcode 'G_PTR_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner46),
    // Label 357: @4992
    GIM_Try, /*On fail goto*//*Label 358*/ GIMT_Encode4(5003), // Rule ID 164 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule127Enabled),
      // Combiner Rule #127: const_ptradd_to_i2p; wip_match_opcode 'G_PTR_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner74),
    // Label 358: @5003
    GIM_Try, /*On fail goto*//*Label 359*/ GIMT_Encode4(5014), // Rule ID 180 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule135Enabled),
      // Combiner Rule #135: ptr_add_with_zero; wip_match_opcode 'G_PTR_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner82),
    // Label 359: @5014
    GIM_Try, /*On fail goto*//*Label 360*/ GIMT_Encode4(5025), // Rule ID 253 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_PTR_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 360: @5025
    GIM_Try, /*On fail goto*//*Label 361*/ GIMT_Encode4(5048), // Rule ID 92 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule69Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #69: right_identity_zero @ [__right_identity_zero_match_0[7]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 361: @5048
    GIM_Reject,
    // Label 81: @5049
    GIM_Try, /*On fail goto*//*Label 362*/ GIMT_Encode4(5060), // Rule ID 264 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_SMIN'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 362: @5060
    GIM_Try, /*On fail goto*//*Label 363*/ GIMT_Encode4(5071), // Rule ID 286 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_SMIN'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 363: @5071
    GIM_Reject,
    // Label 82: @5072
    GIM_Try, /*On fail goto*//*Label 364*/ GIMT_Encode4(5083), // Rule ID 265 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_SMAX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 364: @5083
    GIM_Try, /*On fail goto*//*Label 365*/ GIMT_Encode4(5094), // Rule ID 287 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_SMAX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 365: @5094
    GIM_Reject,
    // Label 83: @5095
    GIM_Try, /*On fail goto*//*Label 366*/ GIMT_Encode4(5106), // Rule ID 266 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_UMIN'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 366: @5106
    GIM_Try, /*On fail goto*//*Label 367*/ GIMT_Encode4(5117), // Rule ID 288 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_UMIN'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 367: @5117
    GIM_Reject,
    // Label 84: @5118
    GIM_Try, /*On fail goto*//*Label 368*/ GIMT_Encode4(5129), // Rule ID 267 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      // Combiner Rule #172: fold_binop_into_select; wip_match_opcode 'G_UMAX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 368: @5129
    GIM_Try, /*On fail goto*//*Label 369*/ GIMT_Encode4(5140), // Rule ID 289 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: commute_int_constant_to_rhs; wip_match_opcode 'G_UMAX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 369: @5140
    GIM_Reject,
    // Label 85: @5141
    GIM_Try, /*On fail goto*//*Label 370*/ GIMT_Encode4(5152), // Rule ID 71 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule61Enabled),
      // Combiner Rule #61: unary_undef_to_zero; wip_match_opcode 'G_ABS'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner23),
    // Label 370: @5152
    GIM_Reject,
    // Label 86: @5153
    GIM_Try, /*On fail goto*//*Label 371*/ GIMT_Encode4(5164), // Rule ID 149 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule112Enabled),
      // Combiner Rule #112: opt_brcond_by_inverting_cond; wip_match_opcode 'G_BR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner64),
    // Label 371: @5164
    GIM_Reject,
    // Label 87: @5165
    GIM_Try, /*On fail goto*//*Label 372*/ GIMT_Encode4(5176), // Rule ID 20 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule18Enabled),
      // Combiner Rule #18: insert_vector_elt_oob; wip_match_opcode 'G_INSERT_VECTOR_ELT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
    // Label 372: @5176
    GIM_Try, /*On fail goto*//*Label 373*/ GIMT_Encode4(5187), // Rule ID 52 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule50Enabled),
      // Combiner Rule #50: combine_insert_vec_elts_build_vector; wip_match_opcode 'G_INSERT_VECTOR_ELT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner14),
    // Label 373: @5187
    GIM_Try, /*On fail goto*//*Label 374*/ GIMT_Encode4(5198), // Rule ID 82 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
      // Combiner Rule #67: insert_extract_vec_elt_out_of_bounds; wip_match_opcode 'G_INSERT_VECTOR_ELT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner30),
    // Label 374: @5198
    GIM_Try, /*On fail goto*//*Label 375*/ GIMT_Encode4(5237), // Rule ID 45 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule43Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      // MIs[0] elt
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_EXTRACT_VECTOR_ELT),
      // MIs[1] src
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/1, /*OpIdx*/1, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[1] idx
      // No operand predicates
      // MIs[0] idx
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/3, /*OtherMI*/1, /*OtherOpIdx*/2,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #43: insert_vector_element_extract_vector_element
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 375: @5237
    GIM_Try, /*On fail goto*//*Label 376*/ GIMT_Encode4(5270), // Rule ID 18 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule16Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      // MIs[0] elt
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      // MIs[0] idx
      // No operand predicates
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner0),
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #16: insert_vector_element_elt_undef
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 376: @5270
    GIM_Try, /*On fail goto*//*Label 377*/ GIMT_Encode4(5294), // Rule ID 17 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule15Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      // MIs[0] elt
      // No operand predicates
      // MIs[0] idx
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #15: insert_vector_element_idx_undef
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIR_RootToRootCopy, /*OpIdx*/0, // root
      GIR_EraseRootFromParent_Done,
    // Label 377: @5294
    GIM_Reject,
    // Label 88: @5295
    GIM_Try, /*On fail goto*//*Label 378*/ GIMT_Encode4(5306), // Rule ID 19 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule17Enabled),
      // Combiner Rule #17: match_extract_of_element; wip_match_opcode 'G_EXTRACT_VECTOR_ELT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner3),
    // Label 378: @5306
    GIM_Try, /*On fail goto*//*Label 379*/ GIMT_Encode4(5317), // Rule ID 53 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule51Enabled),
      // Combiner Rule #51: extract_vec_elt_build_vec; wip_match_opcode 'G_EXTRACT_VECTOR_ELT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner15),
    // Label 379: @5317
    GIM_Try, /*On fail goto*//*Label 380*/ GIMT_Encode4(5328), // Rule ID 59 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule55Enabled),
      // Combiner Rule #55: combine_extracted_vector_load; wip_match_opcode 'G_EXTRACT_VECTOR_ELT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner19),
    // Label 380: @5328
    GIM_Try, /*On fail goto*//*Label 381*/ GIMT_Encode4(5339), // Rule ID 83 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
      // Combiner Rule #67: insert_extract_vec_elt_out_of_bounds; wip_match_opcode 'G_EXTRACT_VECTOR_ELT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner30),
    // Label 381: @5339
    GIM_Try, /*On fail goto*//*Label 382*/ GIMT_Encode4(5363), // Rule ID 36 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule34Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/17,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[1] c
      // No operand predicates
      // MIs[1] d
      // No operand predicates
      // MIs[1] e
      // No operand predicates
      // MIs[1] f
      // No operand predicates
      // MIs[1] g
      // No operand predicates
      // MIs[1] h
      // No operand predicates
      // MIs[1] i
      // No operand predicates
      // MIs[1] j
      // No operand predicates
      // MIs[1] k
      // No operand predicates
      // MIs[1] l
      // No operand predicates
      // MIs[1] m
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #34: extract_vector_element_build_vector16
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 382: @5363
    GIM_Try, /*On fail goto*//*Label 383*/ GIMT_Encode4(5387), // Rule ID 35 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule33Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/16,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[1] c
      // No operand predicates
      // MIs[1] d
      // No operand predicates
      // MIs[1] e
      // No operand predicates
      // MIs[1] f
      // No operand predicates
      // MIs[1] g
      // No operand predicates
      // MIs[1] h
      // No operand predicates
      // MIs[1] i
      // No operand predicates
      // MIs[1] j
      // No operand predicates
      // MIs[1] k
      // No operand predicates
      // MIs[1] l
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #33: extract_vector_element_build_vector15
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 383: @5387
    GIM_Try, /*On fail goto*//*Label 384*/ GIMT_Encode4(5411), // Rule ID 34 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule32Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/15,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[1] c
      // No operand predicates
      // MIs[1] d
      // No operand predicates
      // MIs[1] e
      // No operand predicates
      // MIs[1] f
      // No operand predicates
      // MIs[1] g
      // No operand predicates
      // MIs[1] h
      // No operand predicates
      // MIs[1] i
      // No operand predicates
      // MIs[1] j
      // No operand predicates
      // MIs[1] k
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #32: extract_vector_element_build_vector14
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 384: @5411
    GIM_Try, /*On fail goto*//*Label 385*/ GIMT_Encode4(5435), // Rule ID 33 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule31Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/14,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[1] c
      // No operand predicates
      // MIs[1] d
      // No operand predicates
      // MIs[1] e
      // No operand predicates
      // MIs[1] f
      // No operand predicates
      // MIs[1] g
      // No operand predicates
      // MIs[1] h
      // No operand predicates
      // MIs[1] i
      // No operand predicates
      // MIs[1] j
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #31: extract_vector_element_build_vector13
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 385: @5435
    GIM_Try, /*On fail goto*//*Label 386*/ GIMT_Encode4(5459), // Rule ID 32 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule30Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/13,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[1] c
      // No operand predicates
      // MIs[1] d
      // No operand predicates
      // MIs[1] e
      // No operand predicates
      // MIs[1] f
      // No operand predicates
      // MIs[1] g
      // No operand predicates
      // MIs[1] h
      // No operand predicates
      // MIs[1] i
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #30: extract_vector_element_build_vector12
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 386: @5459
    GIM_Try, /*On fail goto*//*Label 387*/ GIMT_Encode4(5483), // Rule ID 31 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule29Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/12,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[1] c
      // No operand predicates
      // MIs[1] d
      // No operand predicates
      // MIs[1] e
      // No operand predicates
      // MIs[1] f
      // No operand predicates
      // MIs[1] g
      // No operand predicates
      // MIs[1] h
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #29: extract_vector_element_build_vector11
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 387: @5483
    GIM_Try, /*On fail goto*//*Label 388*/ GIMT_Encode4(5507), // Rule ID 30 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule28Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/11,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[1] c
      // No operand predicates
      // MIs[1] d
      // No operand predicates
      // MIs[1] e
      // No operand predicates
      // MIs[1] f
      // No operand predicates
      // MIs[1] g
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #28: extract_vector_element_build_vector10
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 388: @5507
    GIM_Try, /*On fail goto*//*Label 389*/ GIMT_Encode4(5531), // Rule ID 29 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule27Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/10,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[1] c
      // No operand predicates
      // MIs[1] d
      // No operand predicates
      // MIs[1] e
      // No operand predicates
      // MIs[1] f
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #27: extract_vector_element_build_vector9
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 389: @5531
    GIM_Try, /*On fail goto*//*Label 390*/ GIMT_Encode4(5555), // Rule ID 28 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule26Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/9,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[1] c
      // No operand predicates
      // MIs[1] d
      // No operand predicates
      // MIs[1] e
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #26: extract_vector_element_build_vector8
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 390: @5555
    GIM_Try, /*On fail goto*//*Label 391*/ GIMT_Encode4(5579), // Rule ID 43 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule41Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/9,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[1] c
      // No operand predicates
      // MIs[1] d
      // No operand predicates
      // MIs[1] e
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #41: extract_vector_element_build_vector_trunc8
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner7),
    // Label 391: @5579
    GIM_Try, /*On fail goto*//*Label 392*/ GIMT_Encode4(5603), // Rule ID 27 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule25Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/8,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[1] c
      // No operand predicates
      // MIs[1] d
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #25: extract_vector_element_build_vector7
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 392: @5603
    GIM_Try, /*On fail goto*//*Label 393*/ GIMT_Encode4(5627), // Rule ID 42 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule40Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/8,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[1] c
      // No operand predicates
      // MIs[1] d
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #40: extract_vector_element_build_vector_trunc7
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner7),
    // Label 393: @5627
    GIM_Try, /*On fail goto*//*Label 394*/ GIMT_Encode4(5651), // Rule ID 41 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule39Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/7,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[1] c
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #39: extract_vector_element_build_vector_trunc6
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner7),
    // Label 394: @5651
    GIM_Try, /*On fail goto*//*Label 395*/ GIMT_Encode4(5675), // Rule ID 26 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule24Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/6,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #24: extract_vector_element_build_vector5
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 395: @5675
    GIM_Try, /*On fail goto*//*Label 396*/ GIMT_Encode4(5699), // Rule ID 40 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule38Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/6,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #38: extract_vector_element_build_vector_trunc5
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner7),
    // Label 396: @5699
    GIM_Try, /*On fail goto*//*Label 397*/ GIMT_Encode4(5723), // Rule ID 25 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule23Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/5,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #23: extract_vector_element_build_vector4
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 397: @5723
    GIM_Try, /*On fail goto*//*Label 398*/ GIMT_Encode4(5747), // Rule ID 39 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule37Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/5,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #37: extract_vector_element_build_vector_trunc4
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner7),
    // Label 398: @5747
    GIM_Try, /*On fail goto*//*Label 399*/ GIMT_Encode4(5771), // Rule ID 24 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule22Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/4,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #22: extract_vector_element_build_vector3
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 399: @5771
    GIM_Try, /*On fail goto*//*Label 400*/ GIMT_Encode4(5795), // Rule ID 38 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule36Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/4,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #36: extract_vector_element_build_vector_trunc3
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner7),
    // Label 400: @5795
    GIM_Try, /*On fail goto*//*Label 401*/ GIMT_Encode4(5829), // Rule ID 21 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule19Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_INSERT_VECTOR_ELT),
      // MIs[1] x
      // No operand predicates
      // MIs[1] value
      // No operand predicates
      // MIs[1] idx
      // No operand predicates
      // MIs[0] idx
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/3,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/2,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #19: extract_vector_element_not_const
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/2,
      GIR_EraseRootFromParent_Done,
    // Label 401: @5829
    GIM_Try, /*On fail goto*//*Label 402*/ GIMT_Encode4(5850), // Rule ID 22 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule20Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_INSERT_VECTOR_ELT),
      // MIs[1] x
      // No operand predicates
      // MIs[1] value
      // No operand predicates
      // MIs[1] idx2
      // No operand predicates
      // MIs[0] idx1
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #20: extract_vector_element_different_indices
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner5),
    // Label 402: @5850
    GIM_Try, /*On fail goto*//*Label 403*/ GIMT_Encode4(5871), // Rule ID 44 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule42Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SHUFFLE_VECTOR),
      // MIs[1] src1
      // No operand predicates
      // MIs[1] src2
      // No operand predicates
      // MIs[1] mask
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #42: extract_vector_element_shuffle_vector
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner8),
    // Label 403: @5871
    GIM_Try, /*On fail goto*//*Label 404*/ GIMT_Encode4(5895), // Rule ID 23 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule21Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #21: extract_vector_element_build_vector2
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 404: @5895
    GIM_Try, /*On fail goto*//*Label 405*/ GIMT_Encode4(5919), // Rule ID 37 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule35Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #35: extract_vector_element_build_vector_trunc2
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner7),
    // Label 405: @5919
    GIM_Try, /*On fail goto*//*Label 406*/ GIMT_Encode4(5943), // Rule ID 15 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule13Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] vector
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #13: match_extract_of_element_undef_vector
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIR_RootToRootCopy, /*OpIdx*/0, // root
      GIR_EraseRootFromParent_Done,
    // Label 406: @5943
    GIM_Try, /*On fail goto*//*Label 407*/ GIMT_Encode4(5967), // Rule ID 16 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule14Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] vector
      // No operand predicates
      // MIs[0] idx
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #14: match_extract_of_element_undef_index
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIR_RootToRootCopy, /*OpIdx*/0, // root
      GIR_EraseRootFromParent_Done,
    // Label 407: @5967
    GIM_Reject,
    // Label 89: @5968
    GIM_Try, /*On fail goto*//*Label 408*/ GIMT_Encode4(5979), // Rule ID 78 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule63Enabled),
      // Combiner Rule #63: propagate_undef_all_ops; wip_match_opcode 'G_SHUFFLE_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner26),
    // Label 408: @5979
    GIM_Try, /*On fail goto*//*Label 409*/ GIMT_Encode4(5990), // Rule ID 79 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule64Enabled),
      // Combiner Rule #64: propagate_undef_shuffle_mask; wip_match_opcode 'G_SHUFFLE_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner27),
    // Label 409: @5990
    GIM_Try, /*On fail goto*//*Label 410*/ GIMT_Encode4(6001), // Rule ID 320 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: combine_shuffle_concat; wip_match_opcode 'G_SHUFFLE_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner128),
    // Label 410: @6001
    GIM_Reject,
    // Label 90: @6002
    GIM_Try, /*On fail goto*//*Label 411*/ GIMT_Encode4(6046), // Rule ID 204 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule146Enabled),
      // MIs[0] d
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_LSHR),
      // MIs[1] rev
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_BITREVERSE),
      // MIs[2] val
      // No operand predicates
      // MIs[1] amt
      // No operand predicates
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner6),
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #146: bitreverse_lshr
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SHL),
      GIR_RootToRootCopy, /*OpIdx*/0, // d
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // val
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // amt
      GIR_EraseRootFromParent_Done,
    // Label 411: @6046
    GIM_Try, /*On fail goto*//*Label 412*/ GIMT_Encode4(6090), // Rule ID 203 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule145Enabled),
      // MIs[0] d
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SHL),
      // MIs[1] rev
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_BITREVERSE),
      // MIs[2] val
      // No operand predicates
      // MIs[1] amt
      // No operand predicates
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner5),
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #145: bitreverse_shl
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_LSHR),
      GIR_RootToRootCopy, /*OpIdx*/0, // d
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // val
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // amt
      GIR_EraseRootFromParent_Done,
    // Label 412: @6090
    GIM_Reject,
    // Label 91: @6091
    GIM_Try, /*On fail goto*//*Label 413*/ GIMT_Encode4(6112), // Rule ID 159 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule122Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src0
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
      // MIs[1] cst
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #122: constant_fold_fsqrt
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner72),
    // Label 413: @6112
    GIM_Reject,
    // Label 92: @6113
    GIM_Reject,
    }; // Size: 6114 bytes
  return MatchTable0;
}
#undef GIMT_Encode2
#undef GIMT_Encode4
#undef GIMT_Encode8

#endif // ifdef GET_GICOMBINER_IMPL

#ifdef GET_GICOMBINER_CONSTRUCTOR_INITS
AvailableModuleFeatures(computeAvailableModuleFeatures(&STI)),
AvailableFunctionFeatures()
#endif // ifdef GET_GICOMBINER_CONSTRUCTOR_INITS
#ifdef GET_GICOMBINER_CONSTRUCTOR_INITS
, State(0),
ExecInfo(TypeObjects, NumTypeObjects, FeatureBitsets, ComplexPredicateFns, CustomRenderers)
#endif // ifdef GET_GICOMBINER_CONSTRUCTOR_INITS

