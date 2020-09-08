// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMips32SoC.h for the primary calling header

#ifndef _VMIPS32SOC_REGISTERFILE_H_
#define _VMIPS32SOC_REGISTERFILE_H_  // guard

#include "verilated.h"
#include "VMips32SoC__Dpi.h"

//==========

class VMips32SoC__Syms;

//----------

VL_MODULE(VMips32SoC_RegisterFile) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__read_addr1,4,0);
    VL_IN8(__PVT__read_addr2,4,0);
    VL_IN8(__PVT__write_addr,4,0);
    VL_IN8(__PVT__write_en,0,0);
    VL_IN(__PVT__write_data,31,0);
    VL_OUT(__PVT__read_data1,31,0);
    VL_OUT(__PVT__read_data2,31,0);
    
    // LOCAL SIGNALS
    IData/*31:0*/ memory[32];
    
    // INTERNAL VARIABLES
  private:
    VMips32SoC__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VMips32SoC_RegisterFile);  ///< Copying not allowed
  public:
    VMips32SoC_RegisterFile(const char* name = "TOP");
    ~VMips32SoC_RegisterFile();
    
    // INTERNAL METHODS
    void __Vconfigure(VMips32SoC__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__Mips32SoC__reg_file__1(VMips32SoC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__Mips32SoC__reg_file__2(VMips32SoC__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Mips32SoC__reg_file__3(VMips32SoC__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
