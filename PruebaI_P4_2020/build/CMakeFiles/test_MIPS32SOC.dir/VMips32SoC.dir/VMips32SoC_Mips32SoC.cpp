// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMips32SoC.h for the primary calling header

#include "VMips32SoC_Mips32SoC.h"
#include "VMips32SoC__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VMips32SoC_Mips32SoC::_sequent__TOP__Mips32SoC__4(VMips32SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMips32SoC_Mips32SoC::_sequent__TOP__Mips32SoC__4\n"); );
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Mips32SoC.PC = ((IData)(vlTOPp->rst)
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
                                            ? ((1U 
                                                & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
                                                ? vlSymsp->TOP__Mips32SoC.__PVT__s26
                                                : 0U)
                                            : vlSymsp->TOP__Mips32SoC.__PVT__s25));
    vlSymsp->TOP__Mips32SoC.__PVT__s26 = ((0xfffffffU 
                                           & vlSymsp->TOP__Mips32SoC.__PVT__s26) 
                                          | (0xf0000000U 
                                             & ((IData)(
                                                        (0x1fULL 
                                                         & ((4ULL 
                                                             + (QData)((IData)(vlSymsp->TOP__Mips32SoC.PC))) 
                                                            >> 0x1cU))) 
                                                << 0x1cU)));
}

VL_INLINE_OPT void VMips32SoC_Mips32SoC::_sequent__TOP__Mips32SoC__5(VMips32SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMips32SoC_Mips32SoC::_sequent__TOP__Mips32SoC__5\n"); );
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Mips32SoC.__PVT__s28 = ((3U & vlSymsp->TOP__Mips32SoC.__PVT__s28) 
                                          | (0xffffffcU 
                                             & (vlSymsp->TOP__Mips32SoC__inst_mem.read_data__out__out0 
                                                << 2U)));
    vlSymsp->TOP__Mips32SoC.__PVT__s29 = ((0xffff0000U 
                                           & vlSymsp->TOP__Mips32SoC.__PVT__s29) 
                                          | (0xffffU 
                                             & vlSymsp->TOP__Mips32SoC__inst_mem.read_data__out__out0));
    vlSymsp->TOP__Mips32SoC.__PVT__s20 = ((0xffff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__Mips32SoC__inst_mem.read_data__out__out0 
                                                             >> 0xfU)))) 
                                              << 0x10U)) 
                                          | (0xffffU 
                                             & vlSymsp->TOP__Mips32SoC__inst_mem.read_data__out__out0));
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__s3 
        = (1U & ((((((vlSymsp->TOP__Mips32SoC__inst_mem.read_data__out__out0 
                      >> 0x1aU) | (vlSymsp->TOP__Mips32SoC__inst_mem.read_data__out__out0 
                                   >> 0x1bU)) | (vlSymsp->TOP__Mips32SoC__inst_mem.read_data__out__out0 
                                                 >> 0x1cU)) 
                   | (vlSymsp->TOP__Mips32SoC__inst_mem.read_data__out__out0 
                      >> 0x1dU)) | (vlSymsp->TOP__Mips32SoC__inst_mem.read_data__out__out0 
                                    >> 0x1eU)) | (vlSymsp->TOP__Mips32SoC__inst_mem.read_data__out__out0 
                                                  >> 0x1fU)));
    vlSymsp->TOP__Mips32SoC.__PVT__s26 = ((0xf0000000U 
                                           & vlSymsp->TOP__Mips32SoC.__PVT__s26) 
                                          | vlSymsp->TOP__Mips32SoC.__PVT__s28);
    vlSymsp->TOP__Mips32SoC.__PVT__s22 = ((3U & vlSymsp->TOP__Mips32SoC.__PVT__s22) 
                                          | (0xfffffffcU 
                                             & (vlSymsp->TOP__Mips32SoC.__PVT__s20 
                                                << 2U)));
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__s0 
        = ((0x3fU & (IData)(vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__s0)) 
           | ((IData)(vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__s3) 
              << 6U));
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__s0 
        = ((0x40U & (IData)(vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__s0)) 
           | (0x3fU & ((IData)(vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__s3)
                        ? ((IData)(vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__s3)
                            ? (vlSymsp->TOP__Mips32SoC__inst_mem.read_data__out__out0 
                               >> 0x1aU) : 0U) : vlSymsp->TOP__Mips32SoC__inst_mem.read_data__out__out0)));
    vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0 
        = vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom
        [vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__s0];
    vlSymsp->TOP__Mips32SoC.__PVT__s21 = ((0x4000U 
                                           & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
                                           ? ((0x4000U 
                                               & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
                                               ? vlSymsp->TOP__Mips32SoC.__PVT__s20
                                               : 0U)
                                           : vlSymsp->TOP__Mips32SoC.__PVT__s29);
    vlSymsp->TOP__Mips32SoC.__PVT__s18 = ((0xffffU 
                                           & vlSymsp->TOP__Mips32SoC.__PVT__s18) 
                                          | (0xffff0000U 
                                             & (vlSymsp->TOP__Mips32SoC.__PVT__s21 
                                                << 0x10U)));
}

VL_INLINE_OPT void VMips32SoC_Mips32SoC::_sequent__TOP__Mips32SoC__6(VMips32SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMips32SoC_Mips32SoC::_sequent__TOP__Mips32SoC__6\n"); );
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Mips32SoC.__PVT__s13 = ((0x80U & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
                                           ? ((0x80U 
                                               & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
                                               ? vlSymsp->TOP__Mips32SoC.__PVT__s21
                                               : 0U)
                                           : vlSymsp->TOP__Mips32SoC__reg_file.__PVT__read_data2);
    vlSymsp->TOP__Mips32SoC.__PVT__alu_i10__DOT__s5 
        = ((0xfffffffeU & vlSymsp->TOP__Mips32SoC.__PVT__alu_i10__DOT__s5) 
           | VL_LTS_III(32,32,32, vlSymsp->TOP__Mips32SoC__reg_file.__PVT__read_data1, vlSymsp->TOP__Mips32SoC.__PVT__s13));
    vlSymsp->TOP__Mips32SoC.__PVT__alu_i10__DOT__res_temp 
        = ((0x2000U & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
            ? ((0x1000U & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
                ? 0U : ((0x800U & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
                         ? 0U : (vlSymsp->TOP__Mips32SoC__reg_file.__PVT__read_data1 
                                 | vlSymsp->TOP__Mips32SoC.__PVT__s13)))
            : ((0x1000U & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
                ? ((0x800U & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
                    ? (vlSymsp->TOP__Mips32SoC__reg_file.__PVT__read_data1 
                       & vlSymsp->TOP__Mips32SoC.__PVT__s13)
                    : vlSymsp->TOP__Mips32SoC.__PVT__alu_i10__DOT__s5)
                : ((0x800U & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
                    ? (vlSymsp->TOP__Mips32SoC__reg_file.__PVT__read_data1 
                       - vlSymsp->TOP__Mips32SoC.__PVT__s13)
                    : (vlSymsp->TOP__Mips32SoC__reg_file.__PVT__read_data1 
                       + vlSymsp->TOP__Mips32SoC.__PVT__s13))));
    vlSymsp->TOP__Mips32SoC.__PVT__s23 = ((((IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0) 
                                            >> 1U) 
                                           & (0U == vlSymsp->TOP__Mips32SoC.__PVT__alu_i10__DOT__res_temp)) 
                                          | (((IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0) 
                                              >> 2U) 
                                             & (0U 
                                                != vlSymsp->TOP__Mips32SoC.__PVT__alu_i10__DOT__res_temp)));
    vlSymsp->TOP__Mips32SoC.__PVT__s25 = ((IData)(vlSymsp->TOP__Mips32SoC.__PVT__s23)
                                           ? ((IData)(vlSymsp->TOP__Mips32SoC.__PVT__s23)
                                               ? ((IData)(4U) 
                                                  + 
                                                  (vlSymsp->TOP__Mips32SoC.PC 
                                                   + vlSymsp->TOP__Mips32SoC.__PVT__s22))
                                               : 0U)
                                           : ((IData)(4U) 
                                              + vlSymsp->TOP__Mips32SoC.PC));
}
