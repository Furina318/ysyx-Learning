// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32e.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32e___024root.h"

VL_ATTR_COLD void Vrv32e___024root___eval_static(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vrv32e___024root___eval_initial(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vrv32e___024root___eval_final(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vrv32e___024root___eval_triggers__stl(Vrv32e___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__stl(Vrv32e___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___eval_stl(Vrv32e___024root* vlSelf);

VL_ATTR_COLD void Vrv32e___024root___eval_settle(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vrv32e___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vrv32e___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/furina/ysyx-workbench/npc/vsrc/rv32e.v", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vrv32e___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__stl(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);

VL_ATTR_COLD void Vrv32e___024root___stl_sequent__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___stl_sequent__TOP__0\n"); );
    // Body
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

VL_ATTR_COLD void Vrv32e___024root___eval_stl(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vrv32e___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__ico(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__act(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__nba(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrv32e___024root___ctor_var_reset(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__pc_now = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_data_out = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__less = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__i_type = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__reg_wr = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__alu_a_src = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__alu_b_src = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__alu_ctr = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_wr = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_rd = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_op = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__branch = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__pc_a_src = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__pc_b_src = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__time_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rv32e__DOT__register_files_inst__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_inst__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_inst__DOT__temp_data = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__alu_inst__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__alu_inst__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__alu_inst__DOT__adder_out = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__alu_inst__DOT__sub_out = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__alu_inst__DOT__shift_out = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__alu_inst__DOT__xor_out = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__alu_inst__DOT__or_out = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__alu_inst__DOT__and_out = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__rv32e__DOT__mem_data_out = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__rv32e__DOT__mem_inst__DOT__temp_data = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__rv32e__DOT__mem_inst__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
