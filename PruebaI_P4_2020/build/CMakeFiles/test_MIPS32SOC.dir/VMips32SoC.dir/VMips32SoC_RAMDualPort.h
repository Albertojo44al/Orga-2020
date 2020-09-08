// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMips32SoC.h for the primary calling header

#ifndef _VMIPS32SOC_RAMDUALPORT_H_
#define _VMIPS32SOC_RAMDUALPORT_H_  // guard

#include "verilated.h"
#include "VMips32SoC__Dpi.h"

//==========

class VMips32SoC__Syms;

//----------

VL_MODULE(VMips32SoC_RAMDualPort) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__addr,7,0);
    VL_IN8(__PVT__mem_write,0,0);
    VL_IN8(__PVT__mem_read,0,0);
    VL_IN(__PVT__write_data,31,0);
    VL_IN(__PVT__read_data,31,0);
    VL_OUT(read_data__out,31,0);
    VL_OUT(read_data__en,31,0);
    
    // LOCAL SIGNALS
    IData/*31:0*/ memory[256];
    
    // LOCAL VARIABLES
    CData/*7:0*/ __Vdlyvdim0__memory__v0;
    CData/*0:0*/ __Vdlyvset__memory__v0;
    IData/*31:0*/ __Vdlyvval__memory__v0;
    
    // INTERNAL VARIABLES
  private:
    VMips32SoC__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VMips32SoC_RAMDualPort);  ///< Copying not allowed
  public:
    VMips32SoC_RAMDualPort(const char* name = "TOP");
    ~VMips32SoC_RAMDualPort();
    
    // INTERNAL METHODS
    void __Vconfigure(VMips32SoC__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__Mips32SoC__data_mem__1(VMips32SoC__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Mips32SoC__data_mem__2(VMips32SoC__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
