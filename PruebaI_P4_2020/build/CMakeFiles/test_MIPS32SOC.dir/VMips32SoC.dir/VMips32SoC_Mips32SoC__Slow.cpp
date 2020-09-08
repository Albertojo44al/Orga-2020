// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMips32SoC.h for the primary calling header

#include "VMips32SoC_Mips32SoC.h"
#include "VMips32SoC__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VMips32SoC_Mips32SoC) {
    VL_CELL(inst_mem, VMips32SoC_AsyncROM);
    VL_CELL(reg_file, VMips32SoC_RegisterFile);
    VL_CELL(data_mem, VMips32SoC_RAMDualPort);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VMips32SoC_Mips32SoC::__Vconfigure(VMips32SoC__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VMips32SoC_Mips32SoC::~VMips32SoC_Mips32SoC() {
}

void VMips32SoC_Mips32SoC::_settle__TOP__Mips32SoC__1(VMips32SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMips32SoC_Mips32SoC::_settle__TOP__Mips32SoC__1\n"); );
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Mips32SoC.__PVT__s28 = (0xffffffcU 
                                          & vlSymsp->TOP__Mips32SoC.__PVT__s28);
    vlSymsp->TOP__Mips32SoC.__PVT__s22 = (0xfffffffcU 
                                          & vlSymsp->TOP__Mips32SoC.__PVT__s22);
    vlSymsp->TOP__Mips32SoC.__PVT__alu_i10__DOT__s5 
        = (1U & vlSymsp->TOP__Mips32SoC.__PVT__alu_i10__DOT__s5);
    vlSymsp->TOP__Mips32SoC.__PVT__s29 = (0xffffU & vlSymsp->TOP__Mips32SoC.__PVT__s29);
    vlSymsp->TOP__Mips32SoC.__PVT__s18 = (0xffff0000U 
                                          & vlSymsp->TOP__Mips32SoC.__PVT__s18);
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

void VMips32SoC_Mips32SoC::_settle__TOP__Mips32SoC__2(VMips32SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMips32SoC_Mips32SoC::_settle__TOP__Mips32SoC__2\n"); );
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
}

void VMips32SoC_Mips32SoC::_initial__TOP__Mips32SoC__3(VMips32SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMips32SoC_Mips32SoC::_initial__TOP__Mips32SoC__3\n"); );
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[1U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[2U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[3U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[4U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[5U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[6U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[7U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[8U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[9U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0xaU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0xbU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0xcU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0xdU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0xeU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0xfU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x10U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x11U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x12U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x13U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x14U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x15U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x16U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x17U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x18U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x19U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x1aU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x1bU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x1cU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x1dU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x1eU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x1fU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x20U] = 0x4300U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x21U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x22U] = 0x4b00U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x23U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x24U] = 0x5b00U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x25U] = 0x6300U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x26U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x27U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x28U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x29U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x2aU] = 0x5300U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x2bU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x2cU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x2dU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x2eU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x2fU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x30U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x31U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x32U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x33U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x34U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x35U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x36U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x37U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x38U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x39U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x3aU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x3bU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x3cU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x3dU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x3eU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x3fU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x40U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x41U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x42U] = 0x4001U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x43U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x44U] = 0x4802U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x45U] = 0x4804U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x46U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x47U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x48U] = 0x4180U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x49U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x4aU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x4bU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x4cU] = 0x1980U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x4dU] = 0x2180U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x4eU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x4fU] = 0x4140U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x50U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x51U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x52U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x53U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x54U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x55U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x56U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x57U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x58U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x59U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x5aU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x5bU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x5cU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x5dU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x5eU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x5fU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x60U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x61U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x62U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x63U] = 0x41a8U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x64U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x65U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x66U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x67U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x68U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x69U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x6aU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x6bU] = 0x4090U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x6cU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x6dU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x6eU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x6fU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x70U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x71U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x72U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x73U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x74U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x75U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x76U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x77U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x78U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x79U] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x7aU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x7bU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x7cU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x7dU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x7eU] = 0x4400U;
    vlSymsp->TOP__Mips32SoC.__PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[0x7fU] = 0x4400U;
}

void VMips32SoC_Mips32SoC::_settle__TOP__Mips32SoC__7(VMips32SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMips32SoC_Mips32SoC::_settle__TOP__Mips32SoC__7\n"); );
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void VMips32SoC_Mips32SoC::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMips32SoC_Mips32SoC::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    __PVT__s13 = VL_RAND_RESET_I(32);
    __PVT__s18 = VL_RAND_RESET_I(32);
    __PVT__s20 = VL_RAND_RESET_I(32);
    __PVT__s21 = VL_RAND_RESET_I(32);
    __PVT__s22 = VL_RAND_RESET_I(32);
    __PVT__s23 = VL_RAND_RESET_I(1);
    __PVT__s25 = VL_RAND_RESET_I(32);
    __PVT__s26 = VL_RAND_RESET_I(32);
    __PVT__s28 = VL_RAND_RESET_I(28);
    __PVT__s29 = VL_RAND_RESET_I(32);
    PC = VL_RAND_RESET_I(32);
    __PVT__control_unit_full_i4__DOT__s0 = VL_RAND_RESET_I(7);
    __PVT__control_unit_full_i4__DOT__s3 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<128; ++__Vi0) {
            __PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[__Vi0] = VL_RAND_RESET_I(15);
    }}
    control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0 = 0;
    __PVT__alu_i10__DOT__s5 = VL_RAND_RESET_I(32);
    __PVT__alu_i10__DOT__res_temp = VL_RAND_RESET_I(32);
}
