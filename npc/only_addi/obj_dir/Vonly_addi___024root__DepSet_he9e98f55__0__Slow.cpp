// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vonly_addi.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vonly_addi___024root.h"

VL_ATTR_COLD void Vonly_addi___024root___eval_static(Vonly_addi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonly_addi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonly_addi___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vonly_addi___024root___eval_initial__TOP(Vonly_addi___024root* vlSelf);

VL_ATTR_COLD void Vonly_addi___024root___eval_initial(Vonly_addi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonly_addi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonly_addi___024root___eval_initial\n"); );
    // Body
    Vonly_addi___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vonly_addi___024root___eval_initial__TOP(Vonly_addi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonly_addi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonly_addi___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->only_addi__DOT__instr_mem[0U] = 0x500093U;
    vlSelf->only_addi__DOT__instr_mem[1U] = 0x308113U;
    vlSelf->only_addi__DOT__instr_mem[2U] = 0xff800193U;
    vlSelf->only_addi__DOT__instr_mem[3U] = 0x100073U;
    vlSelf->only_addi__DOT__instr_mem[4U] = 0x210213U;
    vlSelf->only_addi__DOT__instr_mem[5U] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[6U] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[7U] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[8U] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[9U] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0xaU] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0xbU] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0xcU] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0xdU] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0xeU] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0xfU] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0x10U] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0x11U] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0x12U] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0x13U] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0x14U] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0x15U] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0x16U] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0x17U] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0x18U] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0x19U] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0x1aU] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0x1bU] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0x1cU] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0x1dU] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0x1eU] = 0x13U;
    vlSelf->only_addi__DOT__instr_mem[0x1fU] = 0x13U;
    vlSelf->only_addi__DOT__unnamedblk1__DOT__i = 0x20U;
    vlSelf->only_addi__DOT__regs[0U] = 0U;
    vlSelf->only_addi__DOT__regs[1U] = 0U;
    vlSelf->only_addi__DOT__regs[2U] = 0U;
    vlSelf->only_addi__DOT__regs[3U] = 0U;
    vlSelf->only_addi__DOT__regs[4U] = 0U;
    vlSelf->only_addi__DOT__regs[5U] = 0U;
    vlSelf->only_addi__DOT__regs[6U] = 0U;
    vlSelf->only_addi__DOT__regs[7U] = 0U;
    vlSelf->only_addi__DOT__regs[8U] = 0U;
    vlSelf->only_addi__DOT__regs[9U] = 0U;
    vlSelf->only_addi__DOT__regs[0xaU] = 0U;
    vlSelf->only_addi__DOT__regs[0xbU] = 0U;
    vlSelf->only_addi__DOT__regs[0xcU] = 0U;
    vlSelf->only_addi__DOT__regs[0xdU] = 0U;
    vlSelf->only_addi__DOT__regs[0xeU] = 0U;
    vlSelf->only_addi__DOT__regs[0xfU] = 0U;
    vlSelf->only_addi__DOT__regs[0x10U] = 0U;
    vlSelf->only_addi__DOT__regs[0x11U] = 0U;
    vlSelf->only_addi__DOT__regs[0x12U] = 0U;
    vlSelf->only_addi__DOT__regs[0x13U] = 0U;
    vlSelf->only_addi__DOT__regs[0x14U] = 0U;
    vlSelf->only_addi__DOT__regs[0x15U] = 0U;
    vlSelf->only_addi__DOT__regs[0x16U] = 0U;
    vlSelf->only_addi__DOT__regs[0x17U] = 0U;
    vlSelf->only_addi__DOT__regs[0x18U] = 0U;
    vlSelf->only_addi__DOT__regs[0x19U] = 0U;
    vlSelf->only_addi__DOT__regs[0x1aU] = 0U;
    vlSelf->only_addi__DOT__regs[0x1bU] = 0U;
    vlSelf->only_addi__DOT__regs[0x1cU] = 0U;
    vlSelf->only_addi__DOT__regs[0x1dU] = 0U;
    vlSelf->only_addi__DOT__regs[0x1eU] = 0U;
    vlSelf->only_addi__DOT__regs[0x1fU] = 0U;
    vlSelf->only_addi__DOT__i = 0x20U;
}

VL_ATTR_COLD void Vonly_addi___024root___eval_final(Vonly_addi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonly_addi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonly_addi___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vonly_addi___024root___eval_triggers__stl(Vonly_addi___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vonly_addi___024root___dump_triggers__stl(Vonly_addi___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vonly_addi___024root___eval_stl(Vonly_addi___024root* vlSelf);

VL_ATTR_COLD void Vonly_addi___024root___eval_settle(Vonly_addi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonly_addi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonly_addi___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vonly_addi___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vonly_addi___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("only_addi.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vonly_addi___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vonly_addi___024root___dump_triggers__stl(Vonly_addi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonly_addi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonly_addi___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vonly_addi___024root___stl_sequent__TOP__0(Vonly_addi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonly_addi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonly_addi___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->x1 = vlSelf->only_addi__DOT__regs[1U];
    vlSelf->x2 = vlSelf->only_addi__DOT__regs[2U];
    vlSelf->x3 = vlSelf->only_addi__DOT__regs[3U];
    vlSelf->x4 = vlSelf->only_addi__DOT__regs[4U];
    vlSelf->x5 = vlSelf->only_addi__DOT__regs[5U];
    vlSelf->only_addi__DOT__instruction = vlSelf->only_addi__DOT__instr_mem
        [(0x1fU & ((vlSelf->pc - (IData)(0x80000000U)) 
                   >> 2U))];
    vlSelf->only_addi__DOT__alu_result = (((0U == (0x1fU 
                                                   & (vlSelf->only_addi__DOT__instruction 
                                                      >> 0xfU)))
                                            ? 0U : 
                                           vlSelf->only_addi__DOT__regs
                                           [(0x1fU 
                                             & (vlSelf->only_addi__DOT__instruction 
                                                >> 0xfU))]) 
                                          + (((- (IData)(
                                                         (vlSelf->only_addi__DOT__instruction 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->only_addi__DOT__instruction 
                                                >> 0x14U)));
}

VL_ATTR_COLD void Vonly_addi___024root___eval_stl(Vonly_addi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonly_addi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonly_addi___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vonly_addi___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vonly_addi___024root___dump_triggers__act(Vonly_addi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonly_addi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonly_addi___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vonly_addi___024root___dump_triggers__nba(Vonly_addi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonly_addi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonly_addi___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vonly_addi___024root___ctor_var_reset(Vonly_addi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonly_addi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonly_addi___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->x1 = VL_RAND_RESET_I(32);
    vlSelf->x2 = VL_RAND_RESET_I(32);
    vlSelf->x3 = VL_RAND_RESET_I(32);
    vlSelf->x4 = VL_RAND_RESET_I(32);
    vlSelf->x5 = VL_RAND_RESET_I(32);
    vlSelf->only_addi__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->only_addi__DOT__alu_result = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->only_addi__DOT__instr_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->only_addi__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->only_addi__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->only_addi__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
