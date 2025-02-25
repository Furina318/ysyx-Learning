// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaddi.h for the primary calling header

#include "verilated.h"

#include "Vaddi___024root.h"

void Vaddi___024root___eval_act(Vaddi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddi___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vaddi___024root___nba_sequent__TOP__0(Vaddi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddi___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__riscv_single_cycle__DOT__registers__v0;
    __Vdlyvdim0__riscv_single_cycle__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__riscv_single_cycle__DOT__registers__v0;
    __Vdlyvval__riscv_single_cycle__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__riscv_single_cycle__DOT__registers__v0;
    __Vdlyvset__riscv_single_cycle__DOT__registers__v0 = 0;
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("Time: %0t | PC: %x | Instr: %x | x1: %10# | x2: %10# | x3: %10# | x4: %10# | x5: %10#\n",
                  64,VL_TIME_UNITED_Q(1),-12,32,vlSelf->pc,
                  32,vlSelf->riscv_single_cycle__DOT__instruction,
                  32,vlSelf->riscv_single_cycle__DOT__registers
                  [1U],32,vlSelf->riscv_single_cycle__DOT__registers
                  [2U],32,vlSelf->riscv_single_cycle__DOT__registers
                  [3U],32,vlSelf->riscv_single_cycle__DOT__registers
                  [4U],32,vlSelf->riscv_single_cycle__DOT__registers
                  [5U]);
    }
    __Vdlyvset__riscv_single_cycle__DOT__registers__v0 = 0U;
    if (((IData)((0x13U == (0x707fU & vlSelf->riscv_single_cycle__DOT__instruction))) 
         & (0U != (0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                            >> 7U))))) {
        __Vdlyvval__riscv_single_cycle__DOT__registers__v0 
            = vlSelf->riscv_single_cycle__DOT__alu_result;
        __Vdlyvset__riscv_single_cycle__DOT__registers__v0 = 1U;
        __Vdlyvdim0__riscv_single_cycle__DOT__registers__v0 
            = (0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                        >> 7U));
    }
    if (__Vdlyvset__riscv_single_cycle__DOT__registers__v0) {
        vlSelf->riscv_single_cycle__DOT__registers[__Vdlyvdim0__riscv_single_cycle__DOT__registers__v0] 
            = __Vdlyvval__riscv_single_cycle__DOT__registers__v0;
    }
}

VL_INLINE_OPT void Vaddi___024root___nba_sequent__TOP__1(Vaddi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddi___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->pc = ((IData)(vlSelf->reset) ? 0x80000000U
                   : ((0x80000014U > vlSelf->pc) ? 
                      ((IData)(4U) + vlSelf->pc) : vlSelf->pc));
    vlSelf->riscv_single_cycle__DOT__instruction = 
        vlSelf->riscv_single_cycle__DOT__instr_mem[
        (0x1fU & (vlSelf->pc >> 2U))];
}

VL_INLINE_OPT void Vaddi___024root___nba_comb__TOP__0(Vaddi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddi___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->riscv_single_cycle__DOT__alu_result = (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->riscv_single_cycle__DOT__instruction 
                                                         >> 0xfU)))
                                                     ? 0U
                                                     : 
                                                    vlSelf->riscv_single_cycle__DOT__registers
                                                    [
                                                    (0x1fU 
                                                     & (vlSelf->riscv_single_cycle__DOT__instruction 
                                                        >> 0xfU))]) 
                                                   + 
                                                   (((- (IData)(
                                                                (vlSelf->riscv_single_cycle__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelf->riscv_single_cycle__DOT__instruction 
                                                       >> 0x14U)));
}

void Vaddi___024root___eval_nba(Vaddi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddi___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vaddi___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vaddi___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vaddi___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vaddi___024root___eval_triggers__act(Vaddi___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddi___024root___dump_triggers__act(Vaddi___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddi___024root___dump_triggers__nba(Vaddi___024root* vlSelf);
#endif  // VL_DEBUG

void Vaddi___024root___eval(Vaddi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddi___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vaddi___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vaddi___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("addi.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vaddi___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vaddi___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("addi.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vaddi___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vaddi___024root___eval_debug_assertions(Vaddi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddi___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
