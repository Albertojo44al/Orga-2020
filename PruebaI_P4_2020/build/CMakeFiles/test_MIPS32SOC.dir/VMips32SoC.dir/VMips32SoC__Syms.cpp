// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VMips32SoC__Syms.h"
#include "VMips32SoC.h"
#include "VMips32SoC_Mips32SoC.h"
#include "VMips32SoC_AsyncROM.h"
#include "VMips32SoC_RegisterFile.h"
#include "VMips32SoC_RAMDualPort.h"



// FUNCTIONS
VMips32SoC__Syms::VMips32SoC__Syms(VMips32SoC* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__Mips32SoC(Verilated::catName(topp->name(), "Mips32SoC"))
    , TOP__Mips32SoC__data_mem(Verilated::catName(topp->name(), "Mips32SoC.data_mem"))
    , TOP__Mips32SoC__inst_mem(Verilated::catName(topp->name(), "Mips32SoC.inst_mem"))
    , TOP__Mips32SoC__reg_file(Verilated::catName(topp->name(), "Mips32SoC.reg_file"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->Mips32SoC = &TOP__Mips32SoC;
    TOPp->Mips32SoC->data_mem = &TOP__Mips32SoC__data_mem;
    TOPp->Mips32SoC->inst_mem = &TOP__Mips32SoC__inst_mem;
    TOPp->Mips32SoC->reg_file = &TOP__Mips32SoC__reg_file;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__Mips32SoC.__Vconfigure(this, true);
    TOP__Mips32SoC__data_mem.__Vconfigure(this, true);
    TOP__Mips32SoC__inst_mem.__Vconfigure(this, true);
    TOP__Mips32SoC__reg_file.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_Mips32SoC.configure(this, name(), "Mips32SoC", "Mips32SoC", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Mips32SoC__data_mem.configure(this, name(), "Mips32SoC.data_mem", "data_mem", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Mips32SoC__inst_mem.configure(this, name(), "Mips32SoC.inst_mem", "inst_mem", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Mips32SoC__reg_file.configure(this, name(), "Mips32SoC.reg_file", "reg_file", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_Mips32SoC.varInsert(__Vfinal,"PC", &(TOP__Mips32SoC.PC), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_Mips32SoC__data_mem.varInsert(__Vfinal,"memory", &(TOP__Mips32SoC__data_mem.memory), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,255,0);
        __Vscope_Mips32SoC__inst_mem.varInsert(__Vfinal,"memory", &(TOP__Mips32SoC__inst_mem.memory), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,255,0);
        __Vscope_Mips32SoC__reg_file.varInsert(__Vfinal,"memory", &(TOP__Mips32SoC__reg_file.memory), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
    }
}
