// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMips32SoC.h for the primary calling header

#include "VMips32SoC_RegisterFile.h"
#include "VMips32SoC__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VMips32SoC_RegisterFile::_sequent__TOP__Mips32SoC__reg_file__2(VMips32SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMips32SoC_RegisterFile::_sequent__TOP__Mips32SoC__reg_file__2\n"); );
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__memory__v0;
    CData/*0:0*/ __Vdlyvset__memory__v0;
    IData/*31:0*/ __Vdlyvval__memory__v0;
    // Body
    __Vdlyvset__memory__v0 = 0U;
    if ((0x100U & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))) {
        __Vdlyvval__memory__v0 = ((0x40U & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
                                   ? ((0x20U & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
                                       ? 0U : vlSymsp->TOP__Mips32SoC.__PVT__s18)
                                   : ((0x20U & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
                                       ? ((((8U & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
                                             ? vlSymsp->TOP__Mips32SoC__data_mem.memory
                                            [(0xffU 
                                              & (vlSymsp->TOP__Mips32SoC.__PVT__alu_i10__DOT__res_temp 
                                                 >> 2U))]
                                             : 0U) 
                                           & ((8U & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
                                               ? 0xffffffffU
                                               : 0U)) 
                                          & ((8U & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
                                              ? 0xffffffffU
                                              : 0U))
                                       : vlSymsp->TOP__Mips32SoC.__PVT__alu_i10__DOT__res_temp));
        __Vdlyvset__memory__v0 = 1U;
        __Vdlyvdim0__memory__v0 = (0x1fU & ((0x200U 
                                             & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
                                             ? ((0x200U 
                                                 & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))
                                                 ? 
                                                (vlSymsp->TOP__Mips32SoC__inst_mem.read_data__out__out0 
                                                 >> 0xbU)
                                                 : 0U)
                                             : (vlSymsp->TOP__Mips32SoC__inst_mem.read_data__out__out0 
                                                >> 0x10U)));
    }
    if (__Vdlyvset__memory__v0) {
        vlSymsp->TOP__Mips32SoC__reg_file.memory[__Vdlyvdim0__memory__v0] 
            = __Vdlyvval__memory__v0;
    }
}

VL_INLINE_OPT void VMips32SoC_RegisterFile::_sequent__TOP__Mips32SoC__reg_file__3(VMips32SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMips32SoC_RegisterFile::_sequent__TOP__Mips32SoC__reg_file__3\n"); );
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Mips32SoC__reg_file.__PVT__read_data1 
        = vlSymsp->TOP__Mips32SoC__reg_file.memory[
        (0x1fU & (vlSymsp->TOP__Mips32SoC__inst_mem.read_data__out__out0 
                  >> 0x15U))];
    vlSymsp->TOP__Mips32SoC__reg_file.__PVT__read_data2 
        = vlSymsp->TOP__Mips32SoC__reg_file.memory[
        (0x1fU & (vlSymsp->TOP__Mips32SoC__inst_mem.read_data__out__out0 
                  >> 0x10U))];
}
