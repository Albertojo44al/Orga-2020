// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMips32SoC.h for the primary calling header

#include "VMips32SoC_AsyncROM.h"
#include "VMips32SoC__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VMips32SoC_AsyncROM::_settle__TOP__Mips32SoC__inst_mem__1(VMips32SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMips32SoC_AsyncROM::_settle__TOP__Mips32SoC__inst_mem__1\n"); );
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Mips32SoC__inst_mem.read_data__out__out0 
        = vlSymsp->TOP__Mips32SoC__inst_mem.memory[
        (0xffU & (vlSymsp->TOP__Mips32SoC.PC >> 2U))];
}
