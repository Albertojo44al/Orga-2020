// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMips32SoC.h for the primary calling header

#include "VMips32SoC_RAMDualPort.h"
#include "VMips32SoC__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VMips32SoC_RAMDualPort::_sequent__TOP__Mips32SoC__data_mem__1(VMips32SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMips32SoC_RAMDualPort::_sequent__TOP__Mips32SoC__data_mem__1\n"); );
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Mips32SoC__data_mem.__Vdlyvset__memory__v0 = 0U;
    if ((0x10U & (IData)(vlSymsp->TOP__Mips32SoC.control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0))) {
        vlSymsp->TOP__Mips32SoC__data_mem.__Vdlyvval__memory__v0 
            = vlSymsp->TOP__Mips32SoC__reg_file.__PVT__read_data2;
        vlSymsp->TOP__Mips32SoC__data_mem.__Vdlyvset__memory__v0 = 1U;
        vlSymsp->TOP__Mips32SoC__data_mem.__Vdlyvdim0__memory__v0 
            = (0xffU & (vlSymsp->TOP__Mips32SoC.__PVT__alu_i10__DOT__res_temp 
                        >> 2U));
    }
}

VL_INLINE_OPT void VMips32SoC_RAMDualPort::_sequent__TOP__Mips32SoC__data_mem__2(VMips32SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMips32SoC_RAMDualPort::_sequent__TOP__Mips32SoC__data_mem__2\n"); );
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__Mips32SoC__data_mem.__Vdlyvset__memory__v0) {
        vlSymsp->TOP__Mips32SoC__data_mem.memory[vlSymsp->TOP__Mips32SoC__data_mem.__Vdlyvdim0__memory__v0] 
            = vlSymsp->TOP__Mips32SoC__data_mem.__Vdlyvval__memory__v0;
    }
}
