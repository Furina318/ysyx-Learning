// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32e.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32e___024root.h"

void Vrv32e___024root___eval_act(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_act\n"); );
}

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_inst__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ len);

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_inst__DOT__temp_data;
    __Vdly__rv32e__DOT__mem_inst__DOT__temp_data = 0;
    // Body
    __Vdly__rv32e__DOT__mem_inst__DOT__temp_data = vlSelf->rv32e__DOT__mem_inst__DOT__temp_data;
    if (vlSelf->rv32e__DOT__mem_wr) {
        if ((4U & (IData)(vlSelf->rv32e__DOT__mem_op))) {
            if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__mem_op)))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, 0xdeafbeafU);
                VL_WRITEF("Something wrong in ram write module\n");
            } else if ((1U & (IData)(vlSelf->rv32e__DOT__mem_op))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__alu_result, vlSelf->rv32e__DOT__mem_inst__DOT__temp_data, 2U);
                __Vdly__rv32e__DOT__mem_inst__DOT__temp_data 
                    = (0xffffU & vlSelf->rv32e__DOT__rs2_data);
            } else {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__alu_result, vlSelf->rv32e__DOT__mem_inst__DOT__temp_data, 1U);
                __Vdly__rv32e__DOT__mem_inst__DOT__temp_data 
                    = (0xffU & vlSelf->rv32e__DOT__rs2_data);
            }
        } else if ((2U & (IData)(vlSelf->rv32e__DOT__mem_op))) {
            if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__mem_op)))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, 0xdeafbeafU);
                VL_WRITEF("Something wrong in ram write module\n");
            } else {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__alu_result, vlSelf->rv32e__DOT__rs2_data, 4U);
            }
        } else if ((1U & (IData)(vlSelf->rv32e__DOT__mem_op))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__alu_result, vlSelf->rv32e__DOT__rs2_data, 2U);
        } else {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__alu_result, vlSelf->rv32e__DOT__rs2_data, 1U);
        }
    }
    if (vlSelf->rv32e__DOT__mem_to_reg) {
        vlSelf->rv32e__DOT__mem_data_out = vlSelf->rv32e__DOT__alu_result;
    } else if ((4U & (IData)(vlSelf->rv32e__DOT__mem_op))) {
        if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__mem_op)))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, 0xdeafbeafU);
            VL_WRITEF("Something wrong in ram  read module\n");
        } else {
            vlSelf->rv32e__DOT__mem_data_out = ((1U 
                                                 & (IData)(vlSelf->rv32e__DOT__mem_op))
                                                 ? 
                                                (0xffffU 
                                                 & vlSelf->rv32e__DOT__mem_inst__DOT__read_data)
                                                 : 
                                                (0xffU 
                                                 & vlSelf->rv32e__DOT__mem_inst__DOT__read_data));
        }
    } else if ((2U & (IData)(vlSelf->rv32e__DOT__mem_op))) {
        if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__mem_op)))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, 0xdeafbeafU);
            VL_WRITEF("Something wrong in ram  read module\n");
        } else {
            vlSelf->rv32e__DOT__mem_data_out = vlSelf->rv32e__DOT__mem_inst__DOT__read_data;
        }
    } else {
        vlSelf->rv32e__DOT__mem_data_out = ((1U & (IData)(vlSelf->rv32e__DOT__mem_op))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->rv32e__DOT__mem_inst__DOT__read_data 
                                                                >> 0xfU)))) 
                                                 << 0x10U) 
                                                | (0xffffU 
                                                   & vlSelf->rv32e__DOT__mem_inst__DOT__read_data))
                                             : (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->rv32e__DOT__mem_inst__DOT__read_data 
                                                                >> 7U)))) 
                                                 << 8U) 
                                                | (0xffU 
                                                   & vlSelf->rv32e__DOT__mem_inst__DOT__read_data)));
    }
    vlSelf->rv32e__DOT__mem_inst__DOT__temp_data = __Vdly__rv32e__DOT__mem_inst__DOT__temp_data;
}

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__1(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__1\n"); );
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
    __Vdlyvset__rv32e__DOT__register_files_inst__DOT__regs__v0 = 0U;
    __Vdlyvset__rv32e__DOT__register_files_inst__DOT__regs__v32 = 0U;
    if (vlSelf->rst) {
        vlSelf->rv32e__DOT__register_files_inst__DOT__i = 0x20U;
        __Vdlyvset__rv32e__DOT__register_files_inst__DOT__regs__v0 = 1U;
        vlSelf->rv32e__DOT__pc_next = 0x80000000U;
    } else {
        if (vlSelf->rv32e__DOT__reg_wr) {
            if ((0U != (0x1fU & (vlSelf->rv32e__DOT__inst 
                                 >> 7U)))) {
                __Vdlyvval__rv32e__DOT__register_files_inst__DOT__regs__v32 
                    = vlSelf->rv32e__DOT__reg_write_data;
                __Vdlyvset__rv32e__DOT__register_files_inst__DOT__regs__v32 = 1U;
                __Vdlyvdim0__rv32e__DOT__register_files_inst__DOT__regs__v32 
                    = (0x1fU & (vlSelf->rv32e__DOT__inst 
                                >> 7U));
            }
        }
        vlSelf->rv32e__DOT__pc_next = (vlSelf->rv32e__DOT__pc_inst__DOT__PCa 
                                       + vlSelf->rv32e__DOT__pc_inst__DOT__PCb);
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
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->rv32e__DOT__pc_inst__DOT__PCa = ((IData)(vlSelf->rv32e__DOT__pc_a_src)
                                                  ? vlSelf->rv32e__DOT__imm
                                                  : 4U);
        vlSelf->rv32e__DOT__pc_inst__DOT__PCb = ((IData)(vlSelf->rv32e__DOT__pc_b_src)
                                                  ? vlSelf->rv32e__DOT__rs1_data
                                                  : vlSelf->rv32e__DOT__pc);
    }
}

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_inst__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__2(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__2\n"); );
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
    vlSelf->rv32e__DOT__alu_inst__DOT__B = ((0U == (IData)(vlSelf->rv32e__DOT__alu_b_src))
                                             ? vlSelf->rv32e__DOT__rs2_data
                                             : ((1U 
                                                 == (IData)(vlSelf->rv32e__DOT__alu_b_src))
                                                 ? vlSelf->rv32e__DOT__imm
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->rv32e__DOT__alu_b_src))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->rv32e__DOT__alu_inst__DOT__A = ((IData)(vlSelf->rv32e__DOT__alu_a_src)
                                             ? vlSelf->rv32e__DOT__pc
                                             : vlSelf->rv32e__DOT__rs1_data);
    vlSelf->rv32e__DOT__alu_inst__DOT__shift_out = 
        ((1U == (7U & (IData)(vlSelf->rv32e__DOT__alu_ctr)))
          ? (vlSelf->rv32e__DOT__alu_inst__DOT__A << 
             (0x1fU & vlSelf->rv32e__DOT__alu_inst__DOT__B))
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
                                           ? ((1U & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                               ? (vlSelf->rv32e__DOT__alu_inst__DOT__A 
                                                  & vlSelf->rv32e__DOT__alu_inst__DOT__B)
                                               : (vlSelf->rv32e__DOT__alu_inst__DOT__A 
                                                  | vlSelf->rv32e__DOT__alu_inst__DOT__B))
                                           : ((1U & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                               ? vlSelf->rv32e__DOT__alu_inst__DOT__shift_out
                                               : (vlSelf->rv32e__DOT__alu_inst__DOT__A 
                                                  ^ vlSelf->rv32e__DOT__alu_inst__DOT__B)))
                                       : ((2U & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                           ? ((1U & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                               ? vlSelf->rv32e__DOT__alu_inst__DOT__B
                                               : (IData)(vlSelf->rv32e__DOT__less))
                                           : ((1U & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                               ? vlSelf->rv32e__DOT__alu_inst__DOT__shift_out
                                               : ((8U 
                                                   & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                                   ? 
                                                  (vlSelf->rv32e__DOT__alu_inst__DOT__A 
                                                   - vlSelf->rv32e__DOT__alu_inst__DOT__B)
                                                   : 
                                                  (vlSelf->rv32e__DOT__alu_inst__DOT__A 
                                                   + vlSelf->rv32e__DOT__alu_inst__DOT__B)))));
    vlSelf->rv32e__DOT__zero = (0U == vlSelf->rv32e__DOT__alu_result);
    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_inst__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__alu_result, 4U, vlSelf->__Vfunc_rv32e__DOT__mem_inst__DOT__pmem_read__2__Vfuncout);
    vlSelf->rv32e__DOT__mem_inst__DOT__read_data = vlSelf->__Vfunc_rv32e__DOT__mem_inst__DOT__pmem_read__2__Vfuncout;
    if ((4U & (IData)(vlSelf->rv32e__DOT__branch))) {
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
}

void Vrv32e___024root___eval_nba(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vrv32e___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrv32e___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vrv32e___024root___nba_sequent__TOP__2(vlSelf);
    }
}

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
