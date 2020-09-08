// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMips32SoC.h for the primary calling header

#ifndef _VMIPS32SOC_MIPS32SOC_H_
#define _VMIPS32SOC_MIPS32SOC_H_  // guard

#include "verilated.h"
#include "VMips32SoC__Dpi.h"

//==========

class VMips32SoC__Syms;
class VMips32SoC_AsyncROM;
class VMips32SoC_RegisterFile;
class VMips32SoC_RAMDualPort;


//----------

VL_MODULE(VMips32SoC_Mips32SoC) {
  public:
    // CELLS
    VMips32SoC_AsyncROM* inst_mem;
    VMips32SoC_RegisterFile* reg_file;
    VMips32SoC_RAMDualPort* data_mem;
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__s23;
    CData/*6:0*/ __PVT__control_unit_full_i4__DOT__s0;
    CData/*0:0*/ __PVT__control_unit_full_i4__DOT__s3;
    IData/*31:0*/ __PVT__s13;
    IData/*31:0*/ __PVT__s18;
    IData/*31:0*/ __PVT__s20;
    IData/*31:0*/ __PVT__s21;
    IData/*31:0*/ __PVT__s22;
    IData/*31:0*/ __PVT__s25;
    IData/*31:0*/ __PVT__s26;
    IData/*27:0*/ __PVT__s28;
    IData/*31:0*/ __PVT__s29;
    IData/*31:0*/ PC;
    IData/*31:0*/ __PVT__alu_i10__DOT__s5;
    IData/*31:0*/ __PVT__alu_i10__DOT__res_temp;
    SData/*14:0*/ __PVT__control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__my_rom[128];
    
    // LOCAL VARIABLES
    SData/*14:0*/ control_unit_full_i4__DOT__DIG_ROM_128X15_ControlUnit_i1__DOT__D__out__out0;
    
    // INTERNAL VARIABLES
  private:
    VMips32SoC__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VMips32SoC_Mips32SoC);  ///< Copying not allowed
  public:
    VMips32SoC_Mips32SoC(const char* name = "TOP");
    ~VMips32SoC_Mips32SoC();
    
    // INTERNAL METHODS
    void __Vconfigure(VMips32SoC__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__Mips32SoC__3(VMips32SoC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__Mips32SoC__4(VMips32SoC__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Mips32SoC__5(VMips32SoC__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Mips32SoC__6(VMips32SoC__Syms* __restrict vlSymsp);
    static void _settle__TOP__Mips32SoC__1(VMips32SoC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__Mips32SoC__2(VMips32SoC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__Mips32SoC__7(VMips32SoC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
