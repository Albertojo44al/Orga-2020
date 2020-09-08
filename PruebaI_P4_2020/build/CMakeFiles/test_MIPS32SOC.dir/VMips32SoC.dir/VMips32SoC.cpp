// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMips32SoC.h for the primary calling header

#include "VMips32SoC.h"
#include "VMips32SoC__Syms.h"

#include "verilated_dpi.h"

//==========

void VMips32SoC::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMips32SoC::eval\n"); );
    VMips32SoC__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/alberto/Escritorio/PruebaI_P4_2020/build/Mips32SoC.v", 514, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VMips32SoC::_eval_initial_loop(VMips32SoC__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/alberto/Escritorio/PruebaI_P4_2020/build/Mips32SoC.v", 514, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VMips32SoC::_eval(VMips32SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMips32SoC::_eval\n"); );
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlSymsp->TOP__Mips32SoC__data_mem._sequent__TOP__Mips32SoC__data_mem__1(vlSymsp);
        vlSymsp->TOP__Mips32SoC._sequent__TOP__Mips32SoC__4(vlSymsp);
        vlSymsp->TOP__Mips32SoC__reg_file._sequent__TOP__Mips32SoC__reg_file__2(vlSymsp);
        vlSymsp->TOP__Mips32SoC__data_mem._sequent__TOP__Mips32SoC__data_mem__2(vlSymsp);
        vlSymsp->TOP__Mips32SoC__inst_mem._settle__TOP__Mips32SoC__inst_mem__1(vlSymsp);
        vlSymsp->TOP__Mips32SoC._sequent__TOP__Mips32SoC__5(vlSymsp);
        vlSymsp->TOP__Mips32SoC__reg_file._sequent__TOP__Mips32SoC__reg_file__3(vlSymsp);
        vlSymsp->TOP__Mips32SoC._sequent__TOP__Mips32SoC__6(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VMips32SoC::_change_request(VMips32SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMips32SoC::_change_request\n"); );
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VMips32SoC::_change_request_1(VMips32SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMips32SoC::_change_request_1\n"); );
    VMips32SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VMips32SoC::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMips32SoC::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
