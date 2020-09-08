// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMips32SoC.h for the primary calling header

#include "VMips32SoC_RegisterFile.h"
#include "VMips32SoC__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VMips32SoC_RegisterFile) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VMips32SoC_RegisterFile::__Vconfigure(VMips32SoC__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VMips32SoC_RegisterFile::~VMips32SoC_RegisterFile() {
}

void VMips32SoC_RegisterFile::_initial__TOP__Mips32SoC__reg_file__1(VMips32SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMips32SoC_RegisterFile::_initial__TOP__Mips32SoC__reg_file__1\n"); );
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Mips32SoC__reg_file.memory[0U] = 0U;
}

void VMips32SoC_RegisterFile::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMips32SoC_RegisterFile::_ctor_var_reset\n"); );
    // Body
    __PVT__read_addr1 = VL_RAND_RESET_I(5);
    __PVT__read_addr2 = VL_RAND_RESET_I(5);
    __PVT__write_addr = VL_RAND_RESET_I(5);
    __PVT__write_data = VL_RAND_RESET_I(32);
    __PVT__write_en = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__read_data1 = VL_RAND_RESET_I(32);
    __PVT__read_data2 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            memory[__Vi0] = VL_RAND_RESET_I(32);
    }}
}
