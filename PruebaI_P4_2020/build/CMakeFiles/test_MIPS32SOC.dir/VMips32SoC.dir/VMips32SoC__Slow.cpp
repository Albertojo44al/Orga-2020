// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMips32SoC.h for the primary calling header

#include "VMips32SoC.h"
#include "VMips32SoC__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VMips32SoC) {
    VMips32SoC__Syms* __restrict vlSymsp = __VlSymsp = new VMips32SoC__Syms(this, name());
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(Mips32SoC, VMips32SoC_Mips32SoC);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VMips32SoC::__Vconfigure(VMips32SoC__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VMips32SoC::~VMips32SoC() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VMips32SoC::_eval_initial(VMips32SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMips32SoC::_eval_initial\n"); );
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Mips32SoC__reg_file._initial__TOP__Mips32SoC__reg_file__1(vlSymsp);
    vlSymsp->TOP__Mips32SoC._initial__TOP__Mips32SoC__3(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VMips32SoC::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMips32SoC::final\n"); );
    // Variables
    VMips32SoC__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMips32SoC::_eval_settle(VMips32SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMips32SoC::_eval_settle\n"); );
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Mips32SoC._settle__TOP__Mips32SoC__1(vlSymsp);
    vlSymsp->TOP__Mips32SoC__inst_mem._settle__TOP__Mips32SoC__inst_mem__1(vlSymsp);
    vlSymsp->TOP__Mips32SoC._settle__TOP__Mips32SoC__2(vlSymsp);
    vlSymsp->TOP__Mips32SoC__reg_file._sequent__TOP__Mips32SoC__reg_file__3(vlSymsp);
    vlSymsp->TOP__Mips32SoC._settle__TOP__Mips32SoC__7(vlSymsp);
}

void VMips32SoC::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMips32SoC::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
}
