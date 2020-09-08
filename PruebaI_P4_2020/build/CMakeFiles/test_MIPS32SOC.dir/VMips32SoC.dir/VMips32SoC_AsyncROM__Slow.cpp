// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMips32SoC.h for the primary calling header

#include "VMips32SoC_AsyncROM.h"
#include "VMips32SoC__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VMips32SoC_AsyncROM) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VMips32SoC_AsyncROM::__Vconfigure(VMips32SoC__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VMips32SoC_AsyncROM::~VMips32SoC_AsyncROM() {
}

void VMips32SoC_AsyncROM::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMips32SoC_AsyncROM::_ctor_var_reset\n"); );
    // Body
    __PVT__addr = VL_RAND_RESET_I(8);
    __PVT__en = VL_RAND_RESET_I(1);
    __PVT__read_data = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            memory[__Vi0] = VL_RAND_RESET_I(32);
    }}
    read_data__out = VL_RAND_RESET_I(32);
    read_data__en = VL_RAND_RESET_I(32);
    read_data__out__out0 = 0;
}
