// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_single_cycle.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv_single_cycle___024root.h"

void Vriscv_single_cycle___024root___eval_act(Vriscv_single_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root___eval_act\n"); );
}

void Vriscv_single_cycle___024root____Vdpiimwrap_riscv_single_cycle__DOT__dpi_ebreak_TOP();

VL_INLINE_OPT void Vriscv_single_cycle___024root___nba_sequent__TOP__0(Vriscv_single_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__riscv_single_cycle__DOT__regs__v0;
    __Vdlyvset__riscv_single_cycle__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__riscv_single_cycle__DOT__regs__v32;
    __Vdlyvdim0__riscv_single_cycle__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__riscv_single_cycle__DOT__regs__v32;
    __Vdlyvval__riscv_single_cycle__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__riscv_single_cycle__DOT__regs__v32;
    __Vdlyvset__riscv_single_cycle__DOT__regs__v32 = 0;
    // Body
    if (((~ (IData)(vlSelf->reset)) & (0x100073U == vlSelf->riscv_single_cycle__DOT__instruction))) {
        Vriscv_single_cycle___024root____Vdpiimwrap_riscv_single_cycle__DOT__dpi_ebreak_TOP();
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("Time: %0t | PC: %x | Instr: %x | x1: %10# | x2: %10# | x3: %10# | x4: %10# | x5: %10#\n",
                  64,VL_TIME_UNITED_Q(1),-12,32,vlSelf->pc,
                  32,vlSelf->riscv_single_cycle__DOT__instruction,
                  32,vlSelf->riscv_single_cycle__DOT__regs
                  [1U],32,vlSelf->riscv_single_cycle__DOT__regs
                  [2U],32,vlSelf->riscv_single_cycle__DOT__regs
                  [3U],32,vlSelf->riscv_single_cycle__DOT__regs
                  [4U],32,vlSelf->riscv_single_cycle__DOT__regs
                  [5U]);
    }
    __Vdlyvset__riscv_single_cycle__DOT__regs__v0 = 0U;
    __Vdlyvset__riscv_single_cycle__DOT__regs__v32 = 0U;
    if (vlSelf->reset) {
        vlSelf->riscv_single_cycle__DOT__i = 0x20U;
        vlSelf->pc = 0x80000000U;
        __Vdlyvset__riscv_single_cycle__DOT__regs__v0 = 1U;
    } else {
        vlSelf->pc = ((0x80000014U > vlSelf->pc) ? 
                      ((IData)(4U) + vlSelf->pc) : vlSelf->pc);
        if (((IData)((0x13U == (0x707fU & vlSelf->riscv_single_cycle__DOT__instruction))) 
             & (0U != (0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                >> 7U))))) {
            __Vdlyvval__riscv_single_cycle__DOT__regs__v32 
                = vlSelf->riscv_single_cycle__DOT__alu_result;
            __Vdlyvset__riscv_single_cycle__DOT__regs__v32 = 1U;
            __Vdlyvdim0__riscv_single_cycle__DOT__regs__v32 
                = (0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                            >> 7U));
        }
    }
    if (__Vdlyvset__riscv_single_cycle__DOT__regs__v0) {
        vlSelf->riscv_single_cycle__DOT__regs[0U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[1U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[2U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[3U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[4U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[5U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[6U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[7U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[8U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[9U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0xaU] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0xbU] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0xcU] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0xdU] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0xeU] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0xfU] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0x10U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0x11U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0x12U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0x13U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0x14U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0x15U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0x16U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0x17U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0x18U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0x19U] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0x1aU] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0x1bU] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0x1cU] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0x1dU] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0x1eU] = 0U;
        vlSelf->riscv_single_cycle__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__riscv_single_cycle__DOT__regs__v32) {
        vlSelf->riscv_single_cycle__DOT__regs[__Vdlyvdim0__riscv_single_cycle__DOT__regs__v32] 
            = __Vdlyvval__riscv_single_cycle__DOT__regs__v32;
    }
    vlSelf->riscv_single_cycle__DOT__instruction = 
        vlSelf->riscv_single_cycle__DOT__instr_mem[
        (0x1fU & ((vlSelf->pc - (IData)(0x80000000U)) 
                  >> 2U))];
    vlSelf->x1 = vlSelf->riscv_single_cycle__DOT__regs
        [1U];
    vlSelf->x2 = vlSelf->riscv_single_cycle__DOT__regs
        [2U];
    vlSelf->x3 = vlSelf->riscv_single_cycle__DOT__regs
        [3U];
    vlSelf->x4 = vlSelf->riscv_single_cycle__DOT__regs
        [4U];
    vlSelf->x5 = vlSelf->riscv_single_cycle__DOT__regs
        [5U];
    vlSelf->riscv_single_cycle__DOT__alu_result = (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->riscv_single_cycle__DOT__instruction 
                                                         >> 0xfU)))
                                                     ? 0U
                                                     : 
                                                    vlSelf->riscv_single_cycle__DOT__regs
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

void Vriscv_single_cycle___024root___eval_nba(Vriscv_single_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vriscv_single_cycle___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vriscv_single_cycle___024root___eval_triggers__act(Vriscv_single_cycle___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_single_cycle___024root___dump_triggers__act(Vriscv_single_cycle___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_single_cycle___024root___dump_triggers__nba(Vriscv_single_cycle___024root* vlSelf);
#endif  // VL_DEBUG

void Vriscv_single_cycle___024root___eval(Vriscv_single_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
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
            Vriscv_single_cycle___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vriscv_single_cycle___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("riscv_single_cycle.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vriscv_single_cycle___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vriscv_single_cycle___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("riscv_single_cycle.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vriscv_single_cycle___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vriscv_single_cycle___024root___eval_debug_assertions(Vriscv_single_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
