// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_single_cycle.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv_single_cycle___024root.h"

VL_ATTR_COLD void Vriscv_single_cycle___024root___eval_static(Vriscv_single_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vriscv_single_cycle___024root___eval_initial__TOP(Vriscv_single_cycle___024root* vlSelf);

VL_ATTR_COLD void Vriscv_single_cycle___024root___eval_initial(Vriscv_single_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root___eval_initial\n"); );
    // Body
    Vriscv_single_cycle___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vriscv_single_cycle___024root___eval_initial__TOP(Vriscv_single_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->riscv_single_cycle__DOT__instr_mem[0U] = 0x500093U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[1U] = 0x308113U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[2U] = 0x802123U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[3U] = 0x8002efU;
    vlSelf->riscv_single_cycle__DOT__instr_mem[4U] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[5U] = 0x1137U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[6U] = 0x100073U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[7U] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[8U] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[9U] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0xaU] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0xbU] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0xcU] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0xdU] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0xeU] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0xfU] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0x10U] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0x11U] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0x12U] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0x13U] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0x14U] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0x15U] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0x16U] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0x17U] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0x18U] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0x19U] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0x1aU] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0x1bU] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0x1cU] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0x1dU] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0x1eU] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__instr_mem[0x1fU] = 0x13U;
    vlSelf->riscv_single_cycle__DOT__unnamedblk1__DOT__i = 0x20U;
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
    vlSelf->riscv_single_cycle__DOT__data_mem[0U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[1U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[2U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[3U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[4U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[5U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[6U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[7U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[8U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[9U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0xaU] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0xbU] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0xcU] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0xdU] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0xeU] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0xfU] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0x10U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0x11U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0x12U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0x13U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0x14U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0x15U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0x16U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0x17U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0x18U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0x19U] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0x1aU] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0x1bU] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0x1cU] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0x1dU] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0x1eU] = 0U;
    vlSelf->riscv_single_cycle__DOT__data_mem[0x1fU] = 0U;
    vlSelf->riscv_single_cycle__DOT__i = 0x20U;
}

VL_ATTR_COLD void Vriscv_single_cycle___024root___eval_final(Vriscv_single_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vriscv_single_cycle___024root___eval_triggers__stl(Vriscv_single_cycle___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_single_cycle___024root___dump_triggers__stl(Vriscv_single_cycle___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vriscv_single_cycle___024root___eval_stl(Vriscv_single_cycle___024root* vlSelf);

VL_ATTR_COLD void Vriscv_single_cycle___024root___eval_settle(Vriscv_single_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vriscv_single_cycle___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vriscv_single_cycle___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("riscv_single_cycle.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vriscv_single_cycle___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_single_cycle___024root___dump_triggers__stl(Vriscv_single_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_single_cycle___024root___stl_sequent__TOP__0(Vriscv_single_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root___stl_sequent__TOP__0\n"); );
    // Body
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
    vlSelf->riscv_single_cycle__DOT__instruction = 
        vlSelf->riscv_single_cycle__DOT__instr_mem[
        (0x1fU & ((vlSelf->pc - (IData)(0x80000000U)) 
                  >> 2U))];
    vlSelf->riscv_single_cycle__DOT__is_addi = (IData)(
                                                       (0x13U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_single_cycle__DOT__instruction)));
    vlSelf->riscv_single_cycle__DOT__is_jalr = (IData)(
                                                       (0x67U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_single_cycle__DOT__instruction)));
    vlSelf->riscv_single_cycle__DOT____VdfgExtracted_ha0d62377__0 
        = (((- (IData)((vlSelf->riscv_single_cycle__DOT__instruction 
                        >> 0x1fU))) << 0xcU) | (vlSelf->riscv_single_cycle__DOT__instruction 
                                                >> 0x14U));
    vlSelf->riscv_single_cycle__DOT__imm = ((0x40U 
                                             & vlSelf->riscv_single_cycle__DOT__instruction)
                                             ? ((0x20U 
                                                 & vlSelf->riscv_single_cycle__DOT__instruction)
                                                 ? 
                                                ((0x10U 
                                                  & vlSelf->riscv_single_cycle__DOT__instruction)
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & vlSelf->riscv_single_cycle__DOT__instruction)
                                                   ? 
                                                  ((4U 
                                                    & vlSelf->riscv_single_cycle__DOT__instruction)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->riscv_single_cycle__DOT__instruction)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv_single_cycle__DOT__instruction)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->riscv_single_cycle__DOT__instruction 
                                                                   >> 0x1fU))) 
                                                       << 0x14U) 
                                                      | ((0xff000U 
                                                          & vlSelf->riscv_single_cycle__DOT__instruction) 
                                                         | ((0x800U 
                                                             & (vlSelf->riscv_single_cycle__DOT__instruction 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (vlSelf->riscv_single_cycle__DOT__instruction 
                                                                  >> 0x14U)))))
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((4U 
                                                    & vlSelf->riscv_single_cycle__DOT__instruction)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->riscv_single_cycle__DOT__instruction)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv_single_cycle__DOT__instruction)
                                                      ? vlSelf->riscv_single_cycle__DOT____VdfgExtracted_ha0d62377__0
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)))
                                                 : 0U)
                                             : ((0x20U 
                                                 & vlSelf->riscv_single_cycle__DOT__instruction)
                                                 ? 
                                                ((0x10U 
                                                  & vlSelf->riscv_single_cycle__DOT__instruction)
                                                  ? 
                                                 ((8U 
                                                   & vlSelf->riscv_single_cycle__DOT__instruction)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->riscv_single_cycle__DOT__instruction)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->riscv_single_cycle__DOT__instruction)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv_single_cycle__DOT__instruction)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelf->riscv_single_cycle__DOT__instruction)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U))
                                                  : 
                                                 ((8U 
                                                   & vlSelf->riscv_single_cycle__DOT__instruction)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->riscv_single_cycle__DOT__instruction)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscv_single_cycle__DOT__instruction)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv_single_cycle__DOT__instruction)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->riscv_single_cycle__DOT__instruction 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0xfe0U 
                                                          & (vlSelf->riscv_single_cycle__DOT__instruction 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelf->riscv_single_cycle__DOT__instruction 
                                                               >> 7U))))
                                                      : 0U)
                                                     : 0U))))
                                                 : 
                                                ((0x10U 
                                                  & vlSelf->riscv_single_cycle__DOT__instruction)
                                                  ? 
                                                 ((8U 
                                                   & vlSelf->riscv_single_cycle__DOT__instruction)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->riscv_single_cycle__DOT__instruction)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->riscv_single_cycle__DOT__instruction)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv_single_cycle__DOT__instruction)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelf->riscv_single_cycle__DOT__instruction)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscv_single_cycle__DOT__instruction)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv_single_cycle__DOT__instruction)
                                                      ? vlSelf->riscv_single_cycle__DOT____VdfgExtracted_ha0d62377__0
                                                      : 0U)
                                                     : 0U)))
                                                  : 0U)));
    vlSelf->riscv_single_cycle__DOT____VdfgTmp_h8a6dd36a__0 
        = (vlSelf->pc + vlSelf->riscv_single_cycle__DOT__imm);
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
                                                   + vlSelf->riscv_single_cycle__DOT__imm);
    vlSelf->riscv_single_cycle__DOT__pc_next = ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->riscv_single_cycle__DOT__instruction))
                                                 ? vlSelf->riscv_single_cycle__DOT____VdfgTmp_h8a6dd36a__0
                                                 : 
                                                ((IData)(vlSelf->riscv_single_cycle__DOT__is_jalr)
                                                  ? 
                                                 (0xfffffffeU 
                                                  & vlSelf->riscv_single_cycle__DOT__alu_result)
                                                  : 
                                                 (((0x100073U 
                                                    != vlSelf->riscv_single_cycle__DOT__instruction) 
                                                   & (0x80000018U 
                                                      > vlSelf->pc))
                                                   ? 
                                                  ((IData)(4U) 
                                                   + vlSelf->pc)
                                                   : vlSelf->pc)));
}

VL_ATTR_COLD void Vriscv_single_cycle___024root___eval_stl(Vriscv_single_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vriscv_single_cycle___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_single_cycle___024root___dump_triggers__act(Vriscv_single_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vriscv_single_cycle___024root___dump_triggers__nba(Vriscv_single_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_single_cycle___024root___ctor_var_reset(Vriscv_single_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->x1 = VL_RAND_RESET_I(32);
    vlSelf->x2 = VL_RAND_RESET_I(32);
    vlSelf->x3 = VL_RAND_RESET_I(32);
    vlSelf->x4 = VL_RAND_RESET_I(32);
    vlSelf->x5 = VL_RAND_RESET_I(32);
    vlSelf->riscv_single_cycle__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->riscv_single_cycle__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->riscv_single_cycle__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->riscv_single_cycle__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->riscv_single_cycle__DOT__is_addi = VL_RAND_RESET_I(1);
    vlSelf->riscv_single_cycle__DOT__is_jalr = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->riscv_single_cycle__DOT__instr_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->riscv_single_cycle__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->riscv_single_cycle__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->riscv_single_cycle__DOT__data_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->riscv_single_cycle__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->riscv_single_cycle__DOT____VdfgExtracted_ha0d62377__0 = VL_RAND_RESET_I(32);
    vlSelf->riscv_single_cycle__DOT____VdfgTmp_h8a6dd36a__0 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
