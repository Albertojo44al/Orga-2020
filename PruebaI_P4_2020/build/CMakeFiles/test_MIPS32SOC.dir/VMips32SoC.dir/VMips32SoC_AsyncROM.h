// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMips32SoC.h for the primary calling header

#ifndef _VMIPS32SOC_ASYNCROM_H_
#define _VMIPS32SOC_ASYNCROM_H_  // guard

#include "verilated.h"
#include "VMips32SoC__Dpi.h"

//==========

class VMips32SoC__Syms;

//----------

VL_MODULE(VMips32SoC_AsyncROM) {
  public:
    
    // PORTS
    VL_IN8(__PVT__addr,7,0);
    VL_IN8(__PVT__en,0,0);
    VL_IN(__PVT__read_data,31,0);
    VL_OUT(read_data__out,31,0);
    VL_OUT(read_data__en,31,0);
    
    // LOCAL SIGNALS
    IData/*31:0*/ memory[256];
    
    // LOCAL VARIABLES
    IData/*31:0*/ read_data__out__out0;
    
    // INTERNAL VARIABLES
  private:
    VMips32SoC__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VMips32SoC_AsyncROM);  ///< Copying not allowed
  public:
    VMips32SoC_AsyncROM(const char* name = "TOP");
    ~VMips32SoC_AsyncROM();
    
    // INTERNAL METHODS
    void __Vconfigure(VMips32SoC__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _settle__TOP__Mips32SoC__inst_mem__1(VMips32SoC__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
