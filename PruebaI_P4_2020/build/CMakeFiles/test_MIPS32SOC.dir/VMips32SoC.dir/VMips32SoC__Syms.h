// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VMIPS32SOC__SYMS_H_
#define _VMIPS32SOC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VMips32SoC.h"
#include "VMips32SoC_Mips32SoC.h"
#include "VMips32SoC_AsyncROM.h"
#include "VMips32SoC_RegisterFile.h"
#include "VMips32SoC_RAMDualPort.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VMips32SoC__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VMips32SoC*                    TOPp;
    VMips32SoC_Mips32SoC           TOP__Mips32SoC;
    VMips32SoC_RAMDualPort         TOP__Mips32SoC__data_mem;
    VMips32SoC_AsyncROM            TOP__Mips32SoC__inst_mem;
    VMips32SoC_RegisterFile        TOP__Mips32SoC__reg_file;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_Mips32SoC;
    VerilatedScope __Vscope_Mips32SoC__data_mem;
    VerilatedScope __Vscope_Mips32SoC__inst_mem;
    VerilatedScope __Vscope_Mips32SoC__reg_file;
    
    // CREATORS
    VMips32SoC__Syms(VMips32SoC* topp, const char* namep);
    ~VMips32SoC__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
