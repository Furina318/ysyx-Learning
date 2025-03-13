// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32e.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32e___024root.h"

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);

VL_INLINE_OPT void Vrv32e___024root___ico_sequent__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->rv32e__DOT__imm = 0U;
    } else if ((4U & (IData)(vlSelf->rv32e__DOT__i_type))) {
        if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__i_type)))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, 0xdeadbeafU);
            vlSelf->rv32e__DOT__imm = 0U;
            VL_WRITEF("imm_gen: unknown i_type %1#\n",
                      3,vlSelf->rv32e__DOT__i_type);
        } else {
            vlSelf->rv32e__DOT__imm = ((1U & (IData)(vlSelf->rv32e__DOT__i_type))
                                        ? 0U : (((- (IData)(
                                                            (vlSelf->rv32e__DOT__inst 
                                                             >> 0x1fU))) 
                                                 << 0x14U) 
                                                | ((0xff000U 
                                                    & vlSelf->rv32e__DOT__inst) 
                                                   | ((0x800U 
                                                       & (vlSelf->rv32e__DOT__inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->rv32e__DOT__inst 
                                                            >> 0x14U))))));
        }
    } else {
        vlSelf->rv32e__DOT__imm = ((2U & (IData)(vlSelf->rv32e__DOT__i_type))
                                    ? ((1U & (IData)(vlSelf->rv32e__DOT__i_type))
                                        ? (((- (IData)(
                                                       (vlSelf->rv32e__DOT__inst 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0x800U 
                                               & (vlSelf->rv32e__DOT__inst 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->rv32e__DOT__inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->rv32e__DOT__inst 
                                                       >> 7U)))))
                                        : (((- (IData)(
                                                       (vlSelf->rv32e__DOT__inst 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & (vlSelf->rv32e__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->rv32e__DOT__inst 
                                                    >> 7U)))))
                                    : ((1U & (IData)(vlSelf->rv32e__DOT__i_type))
                                        ? (0xfffff000U 
                                           & vlSelf->rv32e__DOT__inst)
                                        : (((- (IData)(
                                                       (vlSelf->rv32e__DOT__inst 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelf->rv32e__DOT__inst 
                                              >> 0x14U))));
    }
    if (vlSelf->rst) {
        vlSelf->rv32e__DOT__alu_result = 0U;
        vlSelf->rv32e__DOT__less = 0U;
        vlSelf->rv32e__DOT__zero = 0U;
    } else {
        vlSelf->rv32e__DOT__alu_inst__DOT__A = ((IData)(vlSelf->rv32e__DOT__alu_a_src)
                                                 ? vlSelf->rv32e__DOT__pc_now
                                                 : vlSelf->rv32e__DOT__rs1_data);
        vlSelf->rv32e__DOT__alu_inst__DOT__B = ((0U 
                                                 == (IData)(vlSelf->rv32e__DOT__alu_b_src))
                                                 ? vlSelf->rv32e__DOT__rs2_data
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->rv32e__DOT__alu_b_src))
                                                  ? vlSelf->rv32e__DOT__imm
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->rv32e__DOT__alu_b_src))
                                                   ? 4U
                                                   : 0U)));
        vlSelf->rv32e__DOT__alu_inst__DOT__adder_out 
            = (vlSelf->rv32e__DOT__alu_inst__DOT__A 
               + vlSelf->rv32e__DOT__alu_inst__DOT__B);
        vlSelf->rv32e__DOT__alu_inst__DOT__sub_out 
            = (vlSelf->rv32e__DOT__alu_inst__DOT__A 
               - vlSelf->rv32e__DOT__alu_inst__DOT__B);
        vlSelf->rv32e__DOT__alu_inst__DOT__xor_out 
            = (vlSelf->rv32e__DOT__alu_inst__DOT__A 
               ^ vlSelf->rv32e__DOT__alu_inst__DOT__B);
        vlSelf->rv32e__DOT__alu_inst__DOT__or_out = 
            (vlSelf->rv32e__DOT__alu_inst__DOT__A | vlSelf->rv32e__DOT__alu_inst__DOT__B);
        vlSelf->rv32e__DOT__alu_inst__DOT__and_out 
            = (vlSelf->rv32e__DOT__alu_inst__DOT__A 
               & vlSelf->rv32e__DOT__alu_inst__DOT__B);
        vlSelf->rv32e__DOT__alu_inst__DOT__shift_out 
            = ((1U == (7U & (IData)(vlSelf->rv32e__DOT__alu_ctr)))
                ? (vlSelf->rv32e__DOT__alu_inst__DOT__A 
                   << (0x1fU & vlSelf->rv32e__DOT__alu_inst__DOT__B))
                : ((5U == (7U & (IData)(vlSelf->rv32e__DOT__alu_ctr)))
                    ? ((8U & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                        ? (vlSelf->rv32e__DOT__alu_inst__DOT__A 
                           >> (0x1fU & vlSelf->rv32e__DOT__alu_inst__DOT__B))
                        : (vlSelf->rv32e__DOT__alu_inst__DOT__A 
                           >> (0x1fU & vlSelf->rv32e__DOT__alu_inst__DOT__B)))
                    : 0U));
        vlSelf->rv32e__DOT__less = ((8U & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                     ? (vlSelf->rv32e__DOT__alu_inst__DOT__A 
                                        < vlSelf->rv32e__DOT__alu_inst__DOT__B)
                                     : VL_LTS_III(32, vlSelf->rv32e__DOT__alu_inst__DOT__A, vlSelf->rv32e__DOT__alu_inst__DOT__B));
        vlSelf->rv32e__DOT__alu_result = ((4U & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                           ? ((2U & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                               ? ((1U 
                                                   & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                                   ? vlSelf->rv32e__DOT__alu_inst__DOT__and_out
                                                   : vlSelf->rv32e__DOT__alu_inst__DOT__or_out)
                                               : ((1U 
                                                   & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                                   ? vlSelf->rv32e__DOT__alu_inst__DOT__shift_out
                                                   : vlSelf->rv32e__DOT__alu_inst__DOT__xor_out))
                                           : ((2U & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                               ? ((1U 
                                                   & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                                   ? vlSelf->rv32e__DOT__alu_inst__DOT__B
                                                   : (IData)(vlSelf->rv32e__DOT__less))
                                               : ((1U 
                                                   & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                                   ? vlSelf->rv32e__DOT__alu_inst__DOT__shift_out
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                                    ? vlSelf->rv32e__DOT__alu_inst__DOT__sub_out
                                                    : vlSelf->rv32e__DOT__alu_inst__DOT__adder_out))));
        vlSelf->rv32e__DOT__zero = (0U == vlSelf->rv32e__DOT__alu_result);
    }
    if (vlSelf->rst) {
        vlSelf->rv32e__DOT__pc_a_src = 0U;
        vlSelf->rv32e__DOT__pc_b_src = 0U;
    } else if ((4U & (IData)(vlSelf->rv32e__DOT__branch))) {
        if ((2U & (IData)(vlSelf->rv32e__DOT__branch))) {
            if ((1U & (IData)(vlSelf->rv32e__DOT__branch))) {
                if (vlSelf->rv32e__DOT__less) {
                    if (vlSelf->rv32e__DOT__less) {
                        vlSelf->rv32e__DOT__pc_a_src = 0U;
                        vlSelf->rv32e__DOT__pc_b_src = 0U;
                    }
                } else {
                    vlSelf->rv32e__DOT__pc_a_src = 1U;
                    vlSelf->rv32e__DOT__pc_b_src = 0U;
                }
            } else if (vlSelf->rv32e__DOT__less) {
                if (vlSelf->rv32e__DOT__less) {
                    vlSelf->rv32e__DOT__pc_a_src = 1U;
                    vlSelf->rv32e__DOT__pc_b_src = 0U;
                }
            } else {
                vlSelf->rv32e__DOT__pc_a_src = 0U;
                vlSelf->rv32e__DOT__pc_b_src = 0U;
            }
        } else if ((1U & (IData)(vlSelf->rv32e__DOT__branch))) {
            if (vlSelf->rv32e__DOT__zero) {
                if (vlSelf->rv32e__DOT__zero) {
                    vlSelf->rv32e__DOT__pc_a_src = 0U;
                    vlSelf->rv32e__DOT__pc_b_src = 0U;
                }
            } else {
                vlSelf->rv32e__DOT__pc_a_src = 1U;
                vlSelf->rv32e__DOT__pc_b_src = 0U;
            }
        } else if (vlSelf->rv32e__DOT__zero) {
            if (vlSelf->rv32e__DOT__zero) {
                vlSelf->rv32e__DOT__pc_a_src = 1U;
                vlSelf->rv32e__DOT__pc_b_src = 0U;
            }
        } else {
            vlSelf->rv32e__DOT__pc_a_src = 0U;
            vlSelf->rv32e__DOT__pc_b_src = 0U;
        }
    } else if ((2U & (IData)(vlSelf->rv32e__DOT__branch))) {
        if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__branch)))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, 0xdeafbeafU);
            VL_WRITEF("Something wrong in Branch_Cond\n");
        } else {
            vlSelf->rv32e__DOT__pc_a_src = 1U;
            vlSelf->rv32e__DOT__pc_b_src = 1U;
        }
    } else if ((1U & (IData)(vlSelf->rv32e__DOT__branch))) {
        vlSelf->rv32e__DOT__pc_a_src = 1U;
        vlSelf->rv32e__DOT__pc_b_src = 0U;
    } else {
        vlSelf->rv32e__DOT__pc_a_src = 0U;
        vlSelf->rv32e__DOT__pc_b_src = 0U;
    }
    vlSelf->rv32e__DOT__pc_next = ((IData)(vlSelf->rst)
                                    ? 0x80000000U : 
                                   (((IData)(vlSelf->rv32e__DOT__pc_a_src)
                                      ? vlSelf->rv32e__DOT__imm
                                      : 4U) + ((IData)(vlSelf->rv32e__DOT__pc_b_src)
                                                ? vlSelf->rv32e__DOT__rs1_data
                                                : vlSelf->rv32e__DOT__pc_now)));
}

void Vrv32e___024root___eval_ico(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vrv32e___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vrv32e___024root___eval_act(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__register_files_inst__DOT__regs__v0;
    __Vdlyvset__rv32e__DOT__register_files_inst__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__rv32e__DOT__register_files_inst__DOT__regs__v32;
    __Vdlyvdim0__rv32e__DOT__register_files_inst__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__rv32e__DOT__register_files_inst__DOT__regs__v32;
    __Vdlyvval__rv32e__DOT__register_files_inst__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__register_files_inst__DOT__regs__v32;
    __Vdlyvset__rv32e__DOT__register_files_inst__DOT__regs__v32 = 0;
    // Body
    vlSelf->__Vdly__rv32e__DOT__mem_inst__DOT__read_data 
        = vlSelf->rv32e__DOT__mem_inst__DOT__read_data;
    vlSelf->__Vdly__rv32e__DOT__mem_inst__DOT__temp_data 
        = vlSelf->rv32e__DOT__mem_inst__DOT__temp_data;
    vlSelf->__Vdly__rv32e__DOT__mem_data_out = vlSelf->rv32e__DOT__mem_data_out;
    __Vdlyvset__rv32e__DOT__register_files_inst__DOT__regs__v0 = 0U;
    __Vdlyvset__rv32e__DOT__register_files_inst__DOT__regs__v32 = 0U;
    if (vlSelf->rst) {
        vlSelf->rv32e__DOT__register_files_inst__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vdlyvset__rv32e__DOT__register_files_inst__DOT__regs__v0 = 1U;
    }
    if (((IData)(vlSelf->rv32e__DOT__reg_wr) & (0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->rv32e__DOT__inst 
                                                    >> 7U))))) {
        __Vdlyvval__rv32e__DOT__register_files_inst__DOT__regs__v32 
            = ((IData)(vlSelf->rv32e__DOT__mem_to_reg)
                ? vlSelf->rv32e__DOT__mem_data_out : vlSelf->rv32e__DOT__alu_result);
        __Vdlyvset__rv32e__DOT__register_files_inst__DOT__regs__v32 = 1U;
        __Vdlyvdim0__rv32e__DOT__register_files_inst__DOT__regs__v32 
            = (0x1fU & (vlSelf->rv32e__DOT__inst >> 7U));
    }
    if (__Vdlyvset__rv32e__DOT__register_files_inst__DOT__regs__v0) {
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[1U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[2U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[3U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[4U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[5U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[6U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[7U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[8U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[9U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0xaU] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0xbU] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0xcU] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0xdU] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0xeU] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0xfU] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x10U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x11U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x12U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x13U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x14U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x15U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x16U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x17U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x18U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x19U] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x1aU] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x1bU] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x1cU] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x1dU] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x1eU] = 0U;
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__register_files_inst__DOT__regs__v32) {
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[__Vdlyvdim0__rv32e__DOT__register_files_inst__DOT__regs__v32] 
            = __Vdlyvval__rv32e__DOT__register_files_inst__DOT__regs__v32;
    }
}

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__1(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vdly__rv32e__DOT__time_counter;
    __Vdly__rv32e__DOT__time_counter = 0;
    // Body
    __Vdly__rv32e__DOT__time_counter = vlSelf->rv32e__DOT__time_counter;
    vlSelf->__Vdly__rv32e__DOT__pc_now = vlSelf->rv32e__DOT__pc_now;
    if (vlSelf->rst) {
        vlSelf->rv32e__DOT__i_type = 0U;
        vlSelf->rv32e__DOT__reg_wr = 0U;
        vlSelf->rv32e__DOT__alu_a_src = 0U;
        vlSelf->rv32e__DOT__alu_b_src = 0U;
        vlSelf->rv32e__DOT__alu_ctr = 0U;
        vlSelf->rv32e__DOT__mem_to_reg = 0U;
        vlSelf->rv32e__DOT__mem_wr = 0U;
        vlSelf->rv32e__DOT__mem_rd = 0U;
        vlSelf->rv32e__DOT__mem_op = 0U;
        vlSelf->rv32e__DOT__branch = 0U;
    } else if ((0x40U & vlSelf->rv32e__DOT__inst)) {
        if ((0x20U & vlSelf->rv32e__DOT__inst)) {
            if ((0x10U & vlSelf->rv32e__DOT__inst)) {
                if ((8U & vlSelf->rv32e__DOT__inst)) {
                    if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                        VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                                  32,vlSelf->rv32e__DOT__inst);
                    }
                } else if ((4U & vlSelf->rv32e__DOT__inst)) {
                    if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                        VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                                  32,vlSelf->rv32e__DOT__inst);
                    }
                } else if ((2U & vlSelf->rv32e__DOT__inst)) {
                    if ((1U & vlSelf->rv32e__DOT__inst)) {
                        if (VL_UNLIKELY((0x100073U 
                                         == vlSelf->rv32e__DOT__inst))) {
                            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(1U, vlSelf->rv32e__DOT__inst);
                            VL_WRITEF("ebreak instruction\n");
                        }
                    } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                        VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                                  32,vlSelf->rv32e__DOT__inst);
                    }
                } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__inst);
                }
            } else if ((8U & vlSelf->rv32e__DOT__inst)) {
                if ((4U & vlSelf->rv32e__DOT__inst)) {
                    if ((2U & vlSelf->rv32e__DOT__inst)) {
                        if ((1U & vlSelf->rv32e__DOT__inst)) {
                            vlSelf->rv32e__DOT__i_type = 4U;
                            vlSelf->rv32e__DOT__reg_wr = 1U;
                            vlSelf->rv32e__DOT__alu_a_src = 1U;
                            vlSelf->rv32e__DOT__alu_b_src = 2U;
                            vlSelf->rv32e__DOT__alu_ctr = 0U;
                            vlSelf->rv32e__DOT__branch = 1U;
                        } else if (VL_UNLIKELY((0ULL 
                                                != VL_TIME_UNITED_Q(1)))) {
                            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                            VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                                      32,vlSelf->rv32e__DOT__inst);
                        }
                    } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                        VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                                  32,vlSelf->rv32e__DOT__inst);
                    }
                } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__inst);
                }
            } else if ((4U & vlSelf->rv32e__DOT__inst)) {
                if ((2U & vlSelf->rv32e__DOT__inst)) {
                    if ((1U & vlSelf->rv32e__DOT__inst)) {
                        vlSelf->rv32e__DOT__i_type = 0U;
                        vlSelf->rv32e__DOT__reg_wr = 1U;
                        vlSelf->rv32e__DOT__alu_a_src = 0U;
                        vlSelf->rv32e__DOT__alu_b_src = 1U;
                        vlSelf->rv32e__DOT__alu_ctr = 0U;
                        vlSelf->rv32e__DOT__branch = 2U;
                    } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                        VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                                  32,vlSelf->rv32e__DOT__inst);
                    }
                } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__inst);
                }
            } else if ((2U & vlSelf->rv32e__DOT__inst)) {
                if ((1U & vlSelf->rv32e__DOT__inst)) {
                    vlSelf->rv32e__DOT__i_type = 3U;
                    vlSelf->rv32e__DOT__alu_a_src = 0U;
                    vlSelf->rv32e__DOT__alu_b_src = 0U;
                    vlSelf->rv32e__DOT__alu_ctr = 2U;
                    vlSelf->rv32e__DOT__branch = (7U 
                                                  & (vlSelf->rv32e__DOT__inst 
                                                     >> 0xcU));
                } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__inst);
                }
            } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                          32,vlSelf->rv32e__DOT__inst);
            }
        } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
            VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                      32,vlSelf->rv32e__DOT__inst);
        }
    } else if ((0x20U & vlSelf->rv32e__DOT__inst)) {
        if ((0x10U & vlSelf->rv32e__DOT__inst)) {
            if ((8U & vlSelf->rv32e__DOT__inst)) {
                if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__inst);
                }
            } else if ((4U & vlSelf->rv32e__DOT__inst)) {
                if ((2U & vlSelf->rv32e__DOT__inst)) {
                    if ((1U & vlSelf->rv32e__DOT__inst)) {
                        vlSelf->rv32e__DOT__i_type = 1U;
                        vlSelf->rv32e__DOT__reg_wr = 1U;
                        vlSelf->rv32e__DOT__alu_a_src = 0U;
                        vlSelf->rv32e__DOT__alu_b_src = 1U;
                        vlSelf->rv32e__DOT__alu_ctr = 0U;
                    } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                        VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                                  32,vlSelf->rv32e__DOT__inst);
                    }
                } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__inst);
                }
            } else if ((2U & vlSelf->rv32e__DOT__inst)) {
                if ((1U & vlSelf->rv32e__DOT__inst)) {
                    vlSelf->rv32e__DOT__i_type = 5U;
                    vlSelf->rv32e__DOT__reg_wr = 1U;
                    vlSelf->rv32e__DOT__alu_a_src = 0U;
                    vlSelf->rv32e__DOT__alu_b_src = 0U;
                    vlSelf->rv32e__DOT__alu_ctr = (
                                                   (0x4000U 
                                                    & vlSelf->rv32e__DOT__inst)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->rv32e__DOT__inst)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->rv32e__DOT__inst)
                                                      ? 7U
                                                      : 6U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->rv32e__DOT__inst)
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSelf->rv32e__DOT__inst)
                                                       ? 0xdU
                                                       : 5U)
                                                      : 4U))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->rv32e__DOT__inst)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->rv32e__DOT__inst)
                                                      ? 0xaU
                                                      : 2U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->rv32e__DOT__inst)
                                                      ? 1U
                                                      : 
                                                     ((0x40000000U 
                                                       & vlSelf->rv32e__DOT__inst)
                                                       ? 8U
                                                       : 0U))));
                } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__inst);
                }
            } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                          32,vlSelf->rv32e__DOT__inst);
            }
        } else if ((8U & vlSelf->rv32e__DOT__inst)) {
            if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                          32,vlSelf->rv32e__DOT__inst);
            }
        } else if ((4U & vlSelf->rv32e__DOT__inst)) {
            if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                          32,vlSelf->rv32e__DOT__inst);
            }
        } else if ((2U & vlSelf->rv32e__DOT__inst)) {
            if ((1U & vlSelf->rv32e__DOT__inst)) {
                vlSelf->rv32e__DOT__i_type = 2U;
                vlSelf->rv32e__DOT__alu_a_src = 0U;
                vlSelf->rv32e__DOT__alu_b_src = 1U;
                vlSelf->rv32e__DOT__alu_ctr = 0U;
                vlSelf->rv32e__DOT__mem_wr = 1U;
                if ((0U == (7U & (vlSelf->rv32e__DOT__inst 
                                  >> 0xcU)))) {
                    vlSelf->rv32e__DOT__mem_op = 0U;
                } else if ((1U == (7U & (vlSelf->rv32e__DOT__inst 
                                         >> 0xcU)))) {
                    vlSelf->rv32e__DOT__mem_op = 1U;
                } else if (VL_LIKELY((2U == (7U & (vlSelf->rv32e__DOT__inst 
                                                   >> 0xcU))))) {
                    vlSelf->rv32e__DOT__mem_op = 2U;
                } else {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("contr_gen : Unknown store instruction with func3 = %b\n",
                              3,(7U & (vlSelf->rv32e__DOT__inst 
                                       >> 0xcU)));
                }
            } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                          32,vlSelf->rv32e__DOT__inst);
            }
        } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
            VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                      32,vlSelf->rv32e__DOT__inst);
        }
    } else if ((0x10U & vlSelf->rv32e__DOT__inst)) {
        if ((8U & vlSelf->rv32e__DOT__inst)) {
            if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                          32,vlSelf->rv32e__DOT__inst);
            }
        } else if ((4U & vlSelf->rv32e__DOT__inst)) {
            if ((2U & vlSelf->rv32e__DOT__inst)) {
                if ((1U & vlSelf->rv32e__DOT__inst)) {
                    vlSelf->rv32e__DOT__i_type = 1U;
                    vlSelf->rv32e__DOT__reg_wr = 1U;
                    vlSelf->rv32e__DOT__alu_a_src = 1U;
                    vlSelf->rv32e__DOT__alu_b_src = 1U;
                    vlSelf->rv32e__DOT__alu_ctr = 0U;
                } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__inst);
                }
            } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                          32,vlSelf->rv32e__DOT__inst);
            }
        } else if ((2U & vlSelf->rv32e__DOT__inst)) {
            if ((1U & vlSelf->rv32e__DOT__inst)) {
                vlSelf->rv32e__DOT__i_type = 0U;
                vlSelf->rv32e__DOT__reg_wr = 1U;
                vlSelf->rv32e__DOT__alu_a_src = 0U;
                vlSelf->rv32e__DOT__alu_b_src = 1U;
                vlSelf->rv32e__DOT__alu_ctr = ((0x4000U 
                                                & vlSelf->rv32e__DOT__inst)
                                                ? (
                                                   (0x2000U 
                                                    & vlSelf->rv32e__DOT__inst)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->rv32e__DOT__inst)
                                                     ? 7U
                                                     : 6U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->rv32e__DOT__inst)
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSelf->rv32e__DOT__inst)
                                                      ? 0xdU
                                                      : 5U)
                                                     : 4U))
                                                : (
                                                   (0x2000U 
                                                    & vlSelf->rv32e__DOT__inst)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->rv32e__DOT__inst)
                                                     ? 0xaU
                                                     : 2U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->rv32e__DOT__inst)
                                                     ? 1U
                                                     : 0U)));
            } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                          32,vlSelf->rv32e__DOT__inst);
            }
        } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
            VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                      32,vlSelf->rv32e__DOT__inst);
        }
    } else if ((8U & vlSelf->rv32e__DOT__inst)) {
        if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
            VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                      32,vlSelf->rv32e__DOT__inst);
        }
    } else if ((4U & vlSelf->rv32e__DOT__inst)) {
        if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
            VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                      32,vlSelf->rv32e__DOT__inst);
        }
    } else if ((2U & vlSelf->rv32e__DOT__inst)) {
        if ((1U & vlSelf->rv32e__DOT__inst)) {
            vlSelf->rv32e__DOT__i_type = 0U;
            vlSelf->rv32e__DOT__mem_rd = 1U;
            vlSelf->rv32e__DOT__reg_wr = 1U;
            vlSelf->rv32e__DOT__alu_a_src = 0U;
            vlSelf->rv32e__DOT__alu_b_src = 1U;
            vlSelf->rv32e__DOT__alu_ctr = 0U;
            vlSelf->rv32e__DOT__mem_to_reg = 1U;
            if ((0x4000U & vlSelf->rv32e__DOT__inst)) {
                if (VL_UNLIKELY((0x2000U & vlSelf->rv32e__DOT__inst))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("contr_gen : Unknown load instruction with func3 = %b\n",
                              3,(7U & (vlSelf->rv32e__DOT__inst 
                                       >> 0xcU)));
                } else {
                    vlSelf->rv32e__DOT__mem_op = ((0x1000U 
                                                   & vlSelf->rv32e__DOT__inst)
                                                   ? 5U
                                                   : 4U);
                }
            } else if ((0x2000U & vlSelf->rv32e__DOT__inst)) {
                if (VL_UNLIKELY((0x1000U & vlSelf->rv32e__DOT__inst))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("contr_gen : Unknown load instruction with func3 = %b\n",
                              3,(7U & (vlSelf->rv32e__DOT__inst 
                                       >> 0xcU)));
                } else {
                    vlSelf->rv32e__DOT__mem_op = 2U;
                }
            } else {
                vlSelf->rv32e__DOT__mem_op = ((0x1000U 
                                               & vlSelf->rv32e__DOT__inst)
                                               ? 1U
                                               : 0U);
            }
        } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
            VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                      32,vlSelf->rv32e__DOT__inst);
        }
    } else if (VL_UNLIKELY((0ULL != VL_TIME_UNITED_Q(1)))) {
        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
        VL_WRITEF("contr_gen : Unknown instruction with inst = %x\n",
                  32,vlSelf->rv32e__DOT__inst);
    }
    if (vlSelf->rst) {
        VL_WRITEF("Rv32e reset: PC: 0x%08x | PC_next: 0x%08x\n",
                  32,vlSelf->rv32e__DOT__pc_now,32,
                  vlSelf->rv32e__DOT__pc_next);
        __Vdly__rv32e__DOT__time_counter = 0U;
        vlSelf->__Vdly__rv32e__DOT__pc_now = 0x80000000U;
    } else {
        __Vdly__rv32e__DOT__time_counter = ((IData)(1U) 
                                            + vlSelf->rv32e__DOT__time_counter);
        VL_WRITEF("Time: %0# | PC = 0x%08x | Inst = 0x%08x | ALU Result = 0x%08x\n",
                  32,vlSelf->rv32e__DOT__time_counter,
                  32,vlSelf->rv32e__DOT__pc_now,32,
                  vlSelf->rv32e__DOT__inst,32,vlSelf->rv32e__DOT__alu_result);
        vlSelf->__Vdly__rv32e__DOT__pc_now = vlSelf->rv32e__DOT__pc_next;
    }
    vlSelf->rv32e__DOT__time_counter = __Vdly__rv32e__DOT__time_counter;
}

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_inst__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ len);

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__2(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vfunc_rv32e__DOT__mem_inst__DOT__pmem_read__35__Vfuncout;
    __Vfunc_rv32e__DOT__mem_inst__DOT__pmem_read__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rv32e__DOT__mem_inst__DOT__pmem_read__43__Vfuncout;
    __Vfunc_rv32e__DOT__mem_inst__DOT__pmem_read__43__Vfuncout = 0;
    // Body
    if (vlSelf->rst) {
        vlSelf->__Vdly__rv32e__DOT__mem_data_out = 0U;
        vlSelf->rv32e__DOT__inst = 0U;
    } else {
        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__pc_now, 4U, __Vfunc_rv32e__DOT__mem_inst__DOT__pmem_read__35__Vfuncout);
        vlSelf->rv32e__DOT__inst = __Vfunc_rv32e__DOT__mem_inst__DOT__pmem_read__35__Vfuncout;
        if (vlSelf->rv32e__DOT__mem_wr) {
            if ((4U & (IData)(vlSelf->rv32e__DOT__mem_op))) {
                if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__mem_op)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, 0xdeafbeafU);
                    VL_WRITEF("Something wrong in mem write module\n");
                } else if ((1U & (IData)(vlSelf->rv32e__DOT__mem_op))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__alu_result, vlSelf->rv32e__DOT__mem_inst__DOT__temp_data, 2U);
                    vlSelf->__Vdly__rv32e__DOT__mem_inst__DOT__temp_data 
                        = (0xffffU & vlSelf->rv32e__DOT__rs2_data);
                } else {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__alu_result, vlSelf->rv32e__DOT__mem_inst__DOT__temp_data, 1U);
                    vlSelf->__Vdly__rv32e__DOT__mem_inst__DOT__temp_data 
                        = (0xffU & vlSelf->rv32e__DOT__rs2_data);
                }
            } else if ((2U & (IData)(vlSelf->rv32e__DOT__mem_op))) {
                if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__mem_op)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, 0xdeafbeafU);
                    VL_WRITEF("Something wrong in mem write module\n");
                } else {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__alu_result, vlSelf->rv32e__DOT__rs2_data, 4U);
                }
            } else if ((1U & (IData)(vlSelf->rv32e__DOT__mem_op))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__alu_result, vlSelf->rv32e__DOT__rs2_data, 2U);
            } else {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__alu_result, vlSelf->rv32e__DOT__rs2_data, 1U);
            }
        }
        if (vlSelf->rv32e__DOT__mem_rd) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__alu_result, 4U, __Vfunc_rv32e__DOT__mem_inst__DOT__pmem_read__43__Vfuncout);
            vlSelf->__Vdly__rv32e__DOT__mem_inst__DOT__read_data 
                = __Vfunc_rv32e__DOT__mem_inst__DOT__pmem_read__43__Vfuncout;
            if ((4U & (IData)(vlSelf->rv32e__DOT__mem_op))) {
                if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__mem_op)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, 0xdeafbeafU);
                    VL_WRITEF("Something wrong in mem read module\n");
                } else {
                    vlSelf->__Vdly__rv32e__DOT__mem_data_out 
                        = ((1U & (IData)(vlSelf->rv32e__DOT__mem_op))
                            ? (0xffffU & vlSelf->rv32e__DOT__mem_inst__DOT__read_data)
                            : (0xffU & vlSelf->rv32e__DOT__mem_inst__DOT__read_data));
                }
            } else if ((2U & (IData)(vlSelf->rv32e__DOT__mem_op))) {
                if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__mem_op)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, 0xdeafbeafU);
                    VL_WRITEF("Something wrong in mem read module\n");
                } else {
                    vlSelf->__Vdly__rv32e__DOT__mem_data_out 
                        = vlSelf->rv32e__DOT__mem_inst__DOT__read_data;
                }
            } else {
                vlSelf->__Vdly__rv32e__DOT__mem_data_out 
                    = ((1U & (IData)(vlSelf->rv32e__DOT__mem_op))
                        ? (((- (IData)((1U & (vlSelf->rv32e__DOT__mem_inst__DOT__read_data 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelf->rv32e__DOT__mem_inst__DOT__read_data))
                        : (((- (IData)((1U & (vlSelf->rv32e__DOT__mem_inst__DOT__read_data 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelf->rv32e__DOT__mem_inst__DOT__read_data)));
            }
        } else {
            vlSelf->__Vdly__rv32e__DOT__mem_data_out 
                = vlSelf->rv32e__DOT__mem_data_out;
        }
    }
    vlSelf->rv32e__DOT__mem_inst__DOT__temp_data = vlSelf->__Vdly__rv32e__DOT__mem_inst__DOT__temp_data;
    vlSelf->rv32e__DOT__mem_inst__DOT__read_data = vlSelf->__Vdly__rv32e__DOT__mem_inst__DOT__read_data;
    vlSelf->rv32e__DOT__mem_data_out = vlSelf->__Vdly__rv32e__DOT__mem_data_out;
    vlSelf->rv32e__DOT__rs2_data = ((0U == (0x1fU & 
                                            (vlSelf->rv32e__DOT__inst 
                                             >> 0x14U)))
                                     ? 0U : vlSelf->rv32e__DOT__register_files_inst__DOT__regs
                                    [(0x1fU & (vlSelf->rv32e__DOT__inst 
                                               >> 0x14U))]);
    vlSelf->rv32e__DOT__rs1_data = ((0U == (0x1fU & 
                                            (vlSelf->rv32e__DOT__inst 
                                             >> 0xfU)))
                                     ? 0U : vlSelf->rv32e__DOT__register_files_inst__DOT__regs
                                    [(0x1fU & (vlSelf->rv32e__DOT__inst 
                                               >> 0xfU))]);
}

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__3(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->rv32e__DOT__pc_now = vlSelf->__Vdly__rv32e__DOT__pc_now;
}

void Vrv32e___024root___eval_nba(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vrv32e___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrv32e___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vrv32e___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrv32e___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vrv32e___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void Vrv32e___024root___eval_triggers__ico(Vrv32e___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__ico(Vrv32e___024root* vlSelf);
#endif  // VL_DEBUG
void Vrv32e___024root___eval_triggers__act(Vrv32e___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__act(Vrv32e___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__nba(Vrv32e___024root* vlSelf);
#endif  // VL_DEBUG

void Vrv32e___024root___eval(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vrv32e___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vrv32e___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/furina/ysyx-workbench/npc/vsrc/rv32e.v", 3, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vrv32e___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vrv32e___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vrv32e___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/furina/ysyx-workbench/npc/vsrc/rv32e.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vrv32e___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vrv32e___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/furina/ysyx-workbench/npc/vsrc/rv32e.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vrv32e___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vrv32e___024root___eval_debug_assertions(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
