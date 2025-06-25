// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32e.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32e___024root.h"

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ifu__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vrv32e___024root___ico_sequent__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->rv32e__DOT__ifu__DOT__check))) {
        vlSelf->rv32e__DOT__IF_valid = 0U;
        vlSelf->rv32e__DOT__IF_ID_inst = 0U;
    } else if (vlSelf->rv32e__DOT__ex_flush) {
        vlSelf->rv32e__DOT__IF_valid = vlSelf->rv32e__DOT__id_ready;
        vlSelf->rv32e__DOT__IF_ID_inst = 0U;
    } else {
        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ifu__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__IF_ID_pc, 4U, vlSelf->__Vfunc_rv32e__DOT__ifu__DOT__pmem_read__1__Vfuncout);
        vlSelf->rv32e__DOT__IF_valid = 1U;
        vlSelf->rv32e__DOT__IF_ID_inst = vlSelf->__Vfunc_rv32e__DOT__ifu__DOT__pmem_read__1__Vfuncout;
    }
    vlSelf->rv32e__DOT__idu__DOT__imm = (((5U == (0x1fU 
                                                  & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                     >> 2U))) 
                                          | (0xdU == 
                                             (0x1fU 
                                              & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                 >> 2U))))
                                          ? (0xfffff000U 
                                             & vlSelf->rv32e__DOT__IF_ID_inst)
                                          : ((0x1bU 
                                              == (0x1fU 
                                                  & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                     >> 2U)))
                                              ? (((- (IData)(
                                                             (vlSelf->rv32e__DOT__IF_ID_inst 
                                                              >> 0x1fU))) 
                                                  << 0x14U) 
                                                 | ((0xff000U 
                                                     & vlSelf->rv32e__DOT__IF_ID_inst) 
                                                    | ((0x800U 
                                                        & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                             >> 0x14U)))))
                                              : (((0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                       >> 2U))) 
                                                  | ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                          >> 2U))) 
                                                     | (4U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                            >> 2U)))))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->rv32e__DOT__IF_ID_inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelf->rv32e__DOT__IF_ID_inst 
                                                     >> 0x14U))
                                                  : 
                                                 ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                       >> 2U)))
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                        >> 2U)))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                             >> 7U))))
                                                    : 
                                                   ((0x18U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                         >> 2U)))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                 >> 7U)))))
                                                     : 
                                                    (((0x73U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->rv32e__DOT__IF_ID_inst)) 
                                                      & ((7U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                              >> 0xcU))) 
                                                         | ((6U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                 >> 0xcU))) 
                                                            | (5U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                   >> 0xcU))))))
                                                      ? 
                                                     (0x1fU 
                                                      & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                         >> 0xfU))
                                                      : 0U)))))));
    vlSelf->rv32e__DOT__idu__DOT__csr_ecall = (IData)(
                                                      (0x73U 
                                                       == vlSelf->rv32e__DOT__IF_ID_inst));
    vlSelf->rv32e__DOT__idu__DOT__csr_mret = (IData)(
                                                     (0x30200073U 
                                                      == vlSelf->rv32e__DOT__IF_ID_inst));
    vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h69b43165__0 
        = ((8U == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                            >> 2U))) | (0U == (0x1fU 
                                               & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 2U))));
    vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hf81b0dad__0 
        = ((0x73U == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst))
            ? (vlSelf->rv32e__DOT__IF_ID_inst >> 0x14U)
            : 0U);
    vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h4eb56789__0 
        = (IData)((0x30U == (0x707cU & vlSelf->rv32e__DOT__IF_ID_inst)));
    vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h05244652__0 
        = ((0xcU == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                              >> 2U))) | (4U == (0x1fU 
                                                 & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                    >> 2U))));
    vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hcf9d2862__0 
        = ((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h05244652__0) 
           & (0x5000U == (0x7000U & vlSelf->rv32e__DOT__IF_ID_inst)));
    vlSelf->rv32e__DOT__idu__DOT__alu_op = (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h4eb56789__0) 
                                             & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 0x1eU))
                                             ? 1U : 
                                            (((~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 0x1eU)) 
                                              & (IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h4eb56789__0))
                                              ? 0U : 
                                             ((IData)(
                                                      (0x10U 
                                                       == 
                                                       (0x707cU 
                                                        & vlSelf->rv32e__DOT__IF_ID_inst)))
                                               ? 0U
                                               : ((IData)(
                                                          (0x2010U 
                                                           == 
                                                           (0x707cU 
                                                            & vlSelf->rv32e__DOT__IF_ID_inst)))
                                                   ? 7U
                                                   : 
                                                  ((IData)(
                                                           ((0x60U 
                                                             == 
                                                             (0x7cU 
                                                              & vlSelf->rv32e__DOT__IF_ID_inst)) 
                                                            & ((0U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                    >> 0xcU))) 
                                                               | (1U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                      >> 0xcU))))))
                                                    ? 1U
                                                    : 
                                                   ((IData)(
                                                            ((0x60U 
                                                              == 
                                                              (0x7cU 
                                                               & vlSelf->rv32e__DOT__IF_ID_inst)) 
                                                             & ((4U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                     >> 0xcU))) 
                                                                | (5U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                       >> 0xcU))))))
                                                     ? 7U
                                                     : 
                                                    ((IData)(
                                                             ((0x60U 
                                                               == 
                                                               (0x7cU 
                                                                & vlSelf->rv32e__DOT__IF_ID_inst)) 
                                                              & ((6U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                      >> 0xcU))) 
                                                                 | (7U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                        >> 0xcU))))))
                                                      ? 6U
                                                      : 
                                                     (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h05244652__0) 
                                                       & (0x6000U 
                                                          == 
                                                          (0x7000U 
                                                           & vlSelf->rv32e__DOT__IF_ID_inst)))
                                                       ? 3U
                                                       : 
                                                      (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h05244652__0) 
                                                        & (0x4000U 
                                                           == 
                                                           (0x7000U 
                                                            & vlSelf->rv32e__DOT__IF_ID_inst)))
                                                        ? 4U
                                                        : 
                                                       (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h05244652__0) 
                                                         & (0x7000U 
                                                            == 
                                                            (0x7000U 
                                                             & vlSelf->rv32e__DOT__IF_ID_inst)))
                                                         ? 2U
                                                         : 
                                                        ((IData)(
                                                                 (0x3030U 
                                                                  == 
                                                                  (0xfe00707cU 
                                                                   & vlSelf->rv32e__DOT__IF_ID_inst)))
                                                          ? 6U
                                                          : 
                                                         ((IData)(
                                                                  (0x3010U 
                                                                   == 
                                                                   (0x707cU 
                                                                    & vlSelf->rv32e__DOT__IF_ID_inst)))
                                                           ? 6U
                                                           : 
                                                          (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hcf9d2862__0) 
                                                            & (0U 
                                                               == 
                                                               (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                >> 0x19U)))
                                                            ? 9U
                                                            : 
                                                           (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hcf9d2862__0) 
                                                             & (0x20U 
                                                                == 
                                                                (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                 >> 0x19U)))
                                                             ? 8U
                                                             : 
                                                            (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h05244652__0) 
                                                              & (IData)(
                                                                        (0x1000U 
                                                                         == 
                                                                         (0xfe007000U 
                                                                          & vlSelf->rv32e__DOT__IF_ID_inst))))
                                                              ? 5U
                                                              : 
                                                             (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h05244652__0) 
                                                               & (IData)(
                                                                         (0x2000U 
                                                                          == 
                                                                          (0xfe007000U 
                                                                           & vlSelf->rv32e__DOT__IF_ID_inst))))
                                                               ? 7U
                                                               : 0U))))))))))))))));
}

void Vrv32e___024root___eval_ico(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vrv32e___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vrv32e___024root___eval_act(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_act\n"); );
}

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__rv32e__DOT__ifu__DOT__check;
    __Vdly__rv32e__DOT__ifu__DOT__check = 0;
    // Body
    vlSelf->__Vdly__rv32e__DOT__ex_lsu_src2 = vlSelf->rv32e__DOT__ex_lsu_src2;
    vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_addr2 
        = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2;
    vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wen2 = vlSelf->rv32e__DOT__ex_lsu_csr_wen2;
    vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_addr1 
        = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1;
    vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wen1 = vlSelf->rv32e__DOT__ex_lsu_csr_wen1;
    vlSelf->__Vdly__rv32e__DOT__ex_lsu_MemLen = vlSelf->rv32e__DOT__ex_lsu_MemLen;
    __Vdly__rv32e__DOT__ifu__DOT__check = vlSelf->rv32e__DOT__ifu__DOT__check;
    vlSelf->__Vdly__rv32e__DOT__IF_ID_pc = vlSelf->rv32e__DOT__IF_ID_pc;
    vlSelf->__Vdly__rv32e__DOT__ex_lsu_MemWrite = vlSelf->rv32e__DOT__ex_lsu_MemWrite;
    vlSelf->__Vdly__rv32e__DOT__ex_lsu_process_result 
        = vlSelf->rv32e__DOT__ex_lsu_process_result;
    vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_data2 
        = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2;
    vlSelf->__Vdly__rv32e__DOT__ex_lsu_MemRead = vlSelf->rv32e__DOT__ex_lsu_MemRead;
    vlSelf->__Vdly__rv32e__DOT__ex_lsu_RegWrite = vlSelf->rv32e__DOT__ex_lsu_RegWrite;
    vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_data1 
        = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1;
    vlSelf->__Vdly__rv32e__DOT__ex_lsu_valid = vlSelf->rv32e__DOT__ex_lsu_valid;
    vlSelf->__Vdly__rv32e__DOT__ex_lsu_rd = vlSelf->rv32e__DOT__ex_lsu_rd;
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__ex_lsu_csr_rdata = 0U;
        vlSelf->__Vdly__rv32e__DOT__ex_lsu_src2 = 0U;
        vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_addr2 = 0U;
        vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_addr1 = 0U;
        vlSelf->rv32e__DOT__ex_lsu_inst = 0U;
        vlSelf->__Vdly__rv32e__DOT__ex_lsu_MemLen = 0U;
        vlSelf->__Vdly__rv32e__DOT__IF_ID_pc = 0x80000000U;
        __Vdly__rv32e__DOT__ifu__DOT__check = 1U;
        vlSelf->__Vdly__rv32e__DOT__ex_lsu_process_result = 0U;
        vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_data2 = 0U;
        vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_data1 = 0U;
        vlSelf->__Vdly__rv32e__DOT__ex_lsu_valid = 0U;
        vlSelf->__Vdly__rv32e__DOT__ex_lsu_rd = 0U;
    } else {
        if (((IData)(vlSelf->rv32e__DOT__id_valid) 
             & (IData)(vlSelf->rv32e__DOT__ex_ready))) {
            vlSelf->rv32e__DOT__ex_lsu_csr_rdata = vlSelf->rv32e__DOT__wb_ex_csr_num1;
            vlSelf->__Vdly__rv32e__DOT__ex_lsu_src2 
                = vlSelf->rv32e__DOT__exu__DOT__src2;
            vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_addr2 
                = vlSelf->rv32e__DOT__id_ex_csr_wr_addr2;
            vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_addr1 
                = vlSelf->rv32e__DOT__id_ex_csr_wr_addr1;
            vlSelf->rv32e__DOT__ex_lsu_inst = vlSelf->rv32e__DOT__id_ex_inst;
            vlSelf->__Vdly__rv32e__DOT__ex_lsu_MemLen 
                = vlSelf->rv32e__DOT__id_ex_MemLen;
            vlSelf->__Vdly__rv32e__DOT__ex_lsu_process_result 
                = vlSelf->rv32e__DOT__exu__DOT__process_result;
            vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_data2 
                = ((IData)(vlSelf->rv32e__DOT__id_ex_csr_ecall)
                    ? vlSelf->rv32e__DOT__id_ex_pc : 0U);
            vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_data1 
                = (((1U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                    & (1U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
                    ? vlSelf->rv32e__DOT__exu__DOT__src1
                    : (((3U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                        & (3U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
                        ? (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                           & (~ vlSelf->rv32e__DOT__exu__DOT__src1))
                        : (((2U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                            & (2U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
                            ? (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                               | vlSelf->rv32e__DOT__exu__DOT__src1)
                            : (((1U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                                & (5U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
                                ? (IData)(vlSelf->rv32e__DOT__id_ex_zimm)
                                : (((3U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                                    & (7U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
                                    ? (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                       & (~ (IData)(vlSelf->rv32e__DOT__id_ex_zimm)))
                                    : (((2U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                                        & (6U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
                                        ? (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                           | (IData)(vlSelf->rv32e__DOT__id_ex_zimm))
                                        : ((IData)(vlSelf->rv32e__DOT__id_ex_csr_ecall)
                                            ? 0xbU : 
                                           ((IData)(vlSelf->rv32e__DOT__id_ex_csr_mret)
                                             ? (0x80U 
                                                | ((0xffffe7f7U 
                                                    & vlSelf->rv32e__DOT__wb_ex_csr_num1) 
                                                   | (8U 
                                                      & (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                                         >> 4U))))
                                             : 0U))))))));
            vlSelf->__Vdly__rv32e__DOT__ex_lsu_rd = vlSelf->rv32e__DOT__id_ex_rd;
        } else {
            vlSelf->rv32e__DOT__ex_lsu_csr_rdata = vlSelf->rv32e__DOT__ex_lsu_csr_rdata;
            vlSelf->__Vdly__rv32e__DOT__ex_lsu_src2 
                = vlSelf->rv32e__DOT__ex_lsu_src2;
            vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_addr2 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2;
            vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_addr1 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1;
            vlSelf->rv32e__DOT__ex_lsu_inst = vlSelf->rv32e__DOT__ex_lsu_inst;
            vlSelf->__Vdly__rv32e__DOT__ex_lsu_MemLen 
                = vlSelf->rv32e__DOT__ex_lsu_MemLen;
            vlSelf->__Vdly__rv32e__DOT__ex_lsu_process_result 
                = vlSelf->rv32e__DOT__ex_lsu_process_result;
            vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_data2 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2;
            vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_data1 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1;
            vlSelf->__Vdly__rv32e__DOT__ex_lsu_rd = vlSelf->rv32e__DOT__ex_lsu_rd;
        }
        if (vlSelf->rv32e__DOT__ifu__DOT__check) {
            vlSelf->__Vdly__rv32e__DOT__IF_ID_pc = vlSelf->rv32e__DOT__IF_ID_pc;
            __Vdly__rv32e__DOT__ifu__DOT__check = 0U;
        } else if (((IData)(vlSelf->rv32e__DOT__ex_flush) 
                    & (~ (IData)(vlSelf->rv32e__DOT__ifu__DOT__check)))) {
            vlSelf->__Vdly__rv32e__DOT__IF_ID_pc = vlSelf->rv32e__DOT__ex_flush_pc;
        } else if (((IData)(vlSelf->rv32e__DOT__IF_valid) 
                    & (IData)(vlSelf->rv32e__DOT__id_ready))) {
            vlSelf->__Vdly__rv32e__DOT__IF_ID_pc = 
                ((IData)(4U) + vlSelf->rv32e__DOT__IF_ID_pc);
        }
        if ((((IData)(vlSelf->rv32e__DOT__id_valid) 
              & (IData)(vlSelf->rv32e__DOT__ex_ready)) 
             & ((IData)(vlSelf->rv32e__DOT__lsu_ex_ready) 
                | (~ (IData)(vlSelf->rv32e__DOT__ex_lsu_valid))))) {
            vlSelf->__Vdly__rv32e__DOT__ex_lsu_valid = 1U;
        } else if (((~ ((IData)(vlSelf->rv32e__DOT__id_valid) 
                        & (IData)(vlSelf->rv32e__DOT__ex_ready))) 
                    & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready))) {
            vlSelf->__Vdly__rv32e__DOT__ex_lsu_valid = 0U;
        }
    }
    vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wen2 = (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & (((IData)(vlSelf->rv32e__DOT__id_valid) 
                                                       & (IData)(vlSelf->rv32e__DOT__ex_ready))
                                                       ? (IData)(vlSelf->rv32e__DOT__id_ex_csr_wen2)
                                                       : (IData)(vlSelf->rv32e__DOT__ex_lsu_csr_wen2)));
    vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wen1 = (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & (((IData)(vlSelf->rv32e__DOT__id_valid) 
                                                       & (IData)(vlSelf->rv32e__DOT__ex_ready))
                                                       ? (IData)(vlSelf->rv32e__DOT__id_ex_csr_wen1)
                                                       : (IData)(vlSelf->rv32e__DOT__ex_lsu_csr_wen1)));
    vlSelf->rv32e__DOT__ex_lsu_csr = ((~ (IData)(vlSelf->reset)) 
                                      & (((IData)(vlSelf->rv32e__DOT__id_valid) 
                                          & (IData)(vlSelf->rv32e__DOT__ex_ready))
                                          ? (IData)(vlSelf->rv32e__DOT__id_ex_csr)
                                          : (IData)(vlSelf->rv32e__DOT__ex_lsu_csr)));
    vlSelf->rv32e__DOT__ex_lsu_csr_mret = ((~ (IData)(vlSelf->reset)) 
                                           & (((IData)(vlSelf->rv32e__DOT__id_valid) 
                                               & (IData)(vlSelf->rv32e__DOT__ex_ready))
                                               ? (IData)(vlSelf->rv32e__DOT__id_ex_csr_mret)
                                               : (IData)(vlSelf->rv32e__DOT__ex_lsu_csr_mret)));
    vlSelf->rv32e__DOT__ex_lsu_csr_ecall = ((~ (IData)(vlSelf->reset)) 
                                            & (((IData)(vlSelf->rv32e__DOT__id_valid) 
                                                & (IData)(vlSelf->rv32e__DOT__ex_ready))
                                                ? (IData)(vlSelf->rv32e__DOT__id_ex_csr_ecall)
                                                : (IData)(vlSelf->rv32e__DOT__ex_lsu_csr_ecall)));
    vlSelf->__Vdly__rv32e__DOT__ex_lsu_MemWrite = (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & (((IData)(vlSelf->rv32e__DOT__id_valid) 
                                                       & (IData)(vlSelf->rv32e__DOT__ex_ready))
                                                       ? (IData)(vlSelf->rv32e__DOT__id_ex_MemWrite)
                                                       : (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite)));
    vlSelf->__Vdly__rv32e__DOT__ex_lsu_MemRead = ((~ (IData)(vlSelf->reset)) 
                                                  & (((IData)(vlSelf->rv32e__DOT__id_valid) 
                                                      & (IData)(vlSelf->rv32e__DOT__ex_ready))
                                                      ? (IData)(vlSelf->rv32e__DOT__id_ex_MemRead)
                                                      : (IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead)));
    vlSelf->__Vdly__rv32e__DOT__ex_lsu_RegWrite = (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & (((IData)(vlSelf->rv32e__DOT__id_valid) 
                                                       & (IData)(vlSelf->rv32e__DOT__ex_ready))
                                                       ? (IData)(vlSelf->rv32e__DOT__id_ex_RegWrite)
                                                       : (IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite)));
    vlSelf->rv32e__DOT__ex_lsu_forward_las = ((~ (IData)(vlSelf->reset)) 
                                              & (((IData)(vlSelf->rv32e__DOT__id_valid) 
                                                  & (IData)(vlSelf->rv32e__DOT__ex_ready))
                                                  ? 
                                                 ((IData)(vlSelf->rv32e__DOT__id_ex_MemWrite) 
                                                  & ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                                                     & ((IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite) 
                                                        & ((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                                           & ((0U 
                                                               != (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)) 
                                                              & (((IData)(vlSelf->rv32e__DOT__ex_lsu_rd) 
                                                                  != (IData)(vlSelf->rv32e__DOT__id_wb_rs1)) 
                                                                 & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0)))))))
                                                  : (IData)(vlSelf->rv32e__DOT__ex_lsu_forward_las)));
    vlSelf->rv32e__DOT__ifu__DOT__check = __Vdly__rv32e__DOT__ifu__DOT__check;
    if ((0x100073U == vlSelf->rv32e__DOT__ex_lsu_inst)) {
        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(1U, vlSelf->rv32e__DOT__ex_lsu_inst);
    }
}

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__lsu__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ len);

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__1(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__6__Vfuncout;
    __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__7__Vfuncout;
    __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__8__Vfuncout;
    __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__9__Vfuncout;
    __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__10__Vfuncout;
    __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__10__Vfuncout = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__id_valid;
    __Vdly__rv32e__DOT__id_valid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__lsu__DOT__l_rd_en;
    __Vdly__rv32e__DOT__lsu__DOT__l_rd_en = 0;
    CData/*4:0*/ __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr;
    __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr = 0;
    CData/*2:0*/ __Vdly__rv32e__DOT__lsu__DOT__l_MemLen;
    __Vdly__rv32e__DOT__lsu__DOT__l_MemLen = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__lsu_ex_ready;
    __Vdly__rv32e__DOT__lsu_ex_ready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__lsu_wb_valid;
    __Vdly__rv32e__DOT__lsu_wb_valid = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wbu__DOT__regs__v0;
    __Vdlyvset__rv32e__DOT__wbu__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__rv32e__DOT__wbu__DOT__regs__v32;
    __Vdlyvdim0__rv32e__DOT__wbu__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__rv32e__DOT__wbu__DOT__regs__v32;
    __Vdlyvval__rv32e__DOT__wbu__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wbu__DOT__regs__v32;
    __Vdlyvset__rv32e__DOT__wbu__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v0;
    __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__rv32e__DOT__wbu__DOT__CSR__v1;
    __Vdlyvdim0__rv32e__DOT__wbu__DOT__CSR__v1 = 0;
    IData/*31:0*/ __Vdlyvval__rv32e__DOT__wbu__DOT__CSR__v1;
    __Vdlyvval__rv32e__DOT__wbu__DOT__CSR__v1 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v1;
    __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v1 = 0;
    SData/*11:0*/ __Vdlyvdim0__rv32e__DOT__wbu__DOT__CSR__v2;
    __Vdlyvdim0__rv32e__DOT__wbu__DOT__CSR__v2 = 0;
    IData/*31:0*/ __Vdlyvval__rv32e__DOT__wbu__DOT__CSR__v2;
    __Vdlyvval__rv32e__DOT__wbu__DOT__CSR__v2 = 0;
    SData/*11:0*/ __Vdlyvdim0__rv32e__DOT__wbu__DOT__CSR__v3;
    __Vdlyvdim0__rv32e__DOT__wbu__DOT__CSR__v3 = 0;
    IData/*31:0*/ __Vdlyvval__rv32e__DOT__wbu__DOT__CSR__v3;
    __Vdlyvval__rv32e__DOT__wbu__DOT__CSR__v3 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v3;
    __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v3 = 0;
    // Body
    __Vdly__rv32e__DOT__id_valid = vlSelf->rv32e__DOT__id_valid;
    __Vdly__rv32e__DOT__lsu__DOT__l_MemLen = vlSelf->rv32e__DOT__lsu__DOT__l_MemLen;
    __Vdly__rv32e__DOT__lsu_ex_ready = vlSelf->rv32e__DOT__lsu_ex_ready;
    __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v0 = 0U;
    __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v1 = 0U;
    __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v3 = 0U;
    __Vdly__rv32e__DOT__lsu__DOT__l_rd_en = vlSelf->rv32e__DOT__lsu__DOT__l_rd_en;
    __Vdlyvset__rv32e__DOT__wbu__DOT__regs__v0 = 0U;
    __Vdlyvset__rv32e__DOT__wbu__DOT__regs__v32 = 0U;
    __Vdly__rv32e__DOT__lsu_wb_valid = vlSelf->rv32e__DOT__lsu_wb_valid;
    __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr = vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr;
    __Vdly__rv32e__DOT__lsu_ex_ready = ((IData)(vlSelf->reset) 
                                        | ((~ (((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                                & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                                               & ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                                                  | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite)))) 
                                           & ((IData)(vlSelf->rv32e__DOT__lsu_wb_valid) 
                                              | (IData)(vlSelf->rv32e__DOT__lsu_ex_ready))));
    vlSelf->rv32e__DOT__lsu__DOT__l_load = ((~ (IData)(vlSelf->reset)) 
                                            & ((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                                 & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                                                & ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                                                   | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite)))
                                                ? (IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead)
                                                : (
                                                   (~ (IData)(vlSelf->rv32e__DOT__lsu_wb_valid)) 
                                                   & (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_load))));
    if (vlSelf->reset) {
        __Vdly__rv32e__DOT__id_valid = 0U;
        __Vdly__rv32e__DOT__lsu__DOT__l_MemLen = 0U;
        __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v0 = 1U;
    } else {
        if ((((IData)(vlSelf->rv32e__DOT__IF_valid) 
              & (IData)(vlSelf->rv32e__DOT__id_ready)) 
             & ((IData)(vlSelf->rv32e__DOT__ex_ready) 
                | (~ (IData)(vlSelf->rv32e__DOT__id_valid))))) {
            __Vdly__rv32e__DOT__id_valid = 1U;
        } else if (((~ ((IData)(vlSelf->rv32e__DOT__IF_valid) 
                        & (IData)(vlSelf->rv32e__DOT__id_ready))) 
                    & (IData)(vlSelf->rv32e__DOT__ex_ready))) {
            __Vdly__rv32e__DOT__id_valid = 0U;
        }
        __Vdly__rv32e__DOT__lsu__DOT__l_MemLen = ((
                                                   ((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                                    & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                                                   & ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                                                      | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite)))
                                                   ? (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen)
                                                   : 
                                                  ((IData)(vlSelf->rv32e__DOT__lsu_wb_valid)
                                                    ? (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen)
                                                    : 
                                                   (((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                                     & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready))
                                                     ? (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen)
                                                     : (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))));
        if (((IData)(vlSelf->rv32e__DOT__lsu_wb_valid) 
             & ((IData)(vlSelf->rv32e__DOT__lsu_wb_csr_wen1) 
                | (IData)(vlSelf->rv32e__DOT__lsu_wb_csr_wen2)))) {
            if (vlSelf->rv32e__DOT__lsu_wb_csr_wen2) {
                __Vdlyvval__rv32e__DOT__wbu__DOT__CSR__v1 
                    = vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1;
                __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v1 = 1U;
                __Vdlyvdim0__rv32e__DOT__wbu__DOT__CSR__v1 
                    = vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1;
                __Vdlyvval__rv32e__DOT__wbu__DOT__CSR__v2 
                    = vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2;
                __Vdlyvdim0__rv32e__DOT__wbu__DOT__CSR__v2 
                    = vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2;
            } else {
                __Vdlyvval__rv32e__DOT__wbu__DOT__CSR__v3 
                    = vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1;
                __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v3 = 1U;
                __Vdlyvdim0__rv32e__DOT__wbu__DOT__CSR__v3 
                    = vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1;
            }
        }
    }
    vlSelf->rv32e__DOT__lsu_wb_csr_wen1 = ((~ (IData)(vlSelf->reset)) 
                                           & ((IData)(vlSelf->rv32e__DOT__lsu__DOT__write_valid)
                                               ? (IData)(vlSelf->rv32e__DOT__ex_lsu_csr_wen1)
                                               : ((IData)(vlSelf->rv32e__DOT__lsu__DOT__read_valid)
                                                   ? (IData)(vlSelf->rv32e__DOT__ex_lsu_csr_wen1)
                                                   : 
                                                  ((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                                     & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                                                    & (~ 
                                                       ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                                                        | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite))))
                                                    ? (IData)(vlSelf->rv32e__DOT__ex_lsu_csr_wen1)
                                                    : (IData)(vlSelf->rv32e__DOT__lsu_wb_csr_wen1)))));
    vlSelf->rv32e__DOT__lsu_wb_csr_wen2 = ((~ (IData)(vlSelf->reset)) 
                                           & ((IData)(vlSelf->rv32e__DOT__lsu__DOT__write_valid)
                                               ? (IData)(vlSelf->rv32e__DOT__ex_lsu_csr_wen2)
                                               : ((IData)(vlSelf->rv32e__DOT__lsu__DOT__read_valid)
                                                   ? (IData)(vlSelf->rv32e__DOT__ex_lsu_csr_wen2)
                                                   : 
                                                  ((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                                     & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                                                    & (~ 
                                                       ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                                                        | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite))))
                                                    ? (IData)(vlSelf->rv32e__DOT__ex_lsu_csr_wen2)
                                                    : (IData)(vlSelf->rv32e__DOT__lsu_wb_csr_wen2)))));
    __Vdly__rv32e__DOT__lsu__DOT__l_rd_en = ((~ (IData)(vlSelf->reset)) 
                                             & ((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                                  & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                                                 & ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                                                    | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite)))
                                                 ? (IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite)
                                                 : 
                                                ((IData)(vlSelf->rv32e__DOT__lsu_wb_valid)
                                                  ? (IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite)
                                                  : 
                                                 (((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                                   & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready))
                                                   ? (IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite)
                                                   : (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_en)))));
    __Vdly__rv32e__DOT__lsu_wb_valid = ((~ (IData)(vlSelf->reset)) 
                                        & ((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                             & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                                            & (~ ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                                                  | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite)))) 
                                           | (((IData)(vlSelf->rv32e__DOT__lsu__DOT__read_valid) 
                                               | (IData)(vlSelf->rv32e__DOT__lsu__DOT__write_valid)) 
                                              | ((~ 
                                                  (((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                                    & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                                                   & ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                                                      | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite)))) 
                                                 & (IData)(vlSelf->rv32e__DOT__lsu_wb_valid)))));
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2 = 0U;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1 = 0U;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1 = 0U;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2 = 0U;
        __Vdlyvset__rv32e__DOT__wbu__DOT__regs__v0 = 1U;
    } else {
        if (vlSelf->rv32e__DOT__lsu__DOT__write_valid) {
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2;
        } else if (vlSelf->rv32e__DOT__lsu__DOT__read_valid) {
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2;
        } else if ((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                     & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                    & (~ ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                          | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite))))) {
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2;
        } else {
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2 
                = vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1 
                = vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1 
                = vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2 
                = vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2;
        }
        if ((((IData)(vlSelf->rv32e__DOT__lsu_wb_valid) 
              & (IData)(vlSelf->rv32e__DOT__lsu_wb_RegWrite)) 
             & (0U != (IData)(vlSelf->rv32e__DOT__lsu_wb_rd)))) {
            __Vdlyvval__rv32e__DOT__wbu__DOT__regs__v32 
                = vlSelf->rv32e__DOT__lsu_wb_write_rd_data;
            __Vdlyvset__rv32e__DOT__wbu__DOT__regs__v32 = 1U;
            __Vdlyvdim0__rv32e__DOT__wbu__DOT__regs__v32 
                = vlSelf->rv32e__DOT__lsu_wb_rd;
        }
    }
    vlSelf->rv32e__DOT__lsu_wb_RegWrite = ((~ (IData)(vlSelf->reset)) 
                                           & ((IData)(vlSelf->rv32e__DOT__lsu__DOT__write_valid)
                                               ? (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_en)
                                               : ((IData)(vlSelf->rv32e__DOT__lsu__DOT__read_valid)
                                                   ? (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_en)
                                                   : 
                                                  ((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                                     & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                                                    & (~ 
                                                       ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                                                        | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite))))
                                                    ? (IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite)
                                                    : (IData)(vlSelf->rv32e__DOT__lsu_wb_RegWrite)))));
    vlSelf->rv32e__DOT__id_valid = __Vdly__rv32e__DOT__id_valid;
    if (__Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v0) {
        vlSelf->rv32e__DOT__wbu__DOT__CSR[0x300U] = 0x1800U;
    }
    if (__Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v1) {
        vlSelf->rv32e__DOT__wbu__DOT__CSR[__Vdlyvdim0__rv32e__DOT__wbu__DOT__CSR__v1] 
            = __Vdlyvval__rv32e__DOT__wbu__DOT__CSR__v1;
        vlSelf->rv32e__DOT__wbu__DOT__CSR[__Vdlyvdim0__rv32e__DOT__wbu__DOT__CSR__v2] 
            = __Vdlyvval__rv32e__DOT__wbu__DOT__CSR__v2;
    }
    if (__Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v3) {
        vlSelf->rv32e__DOT__wbu__DOT__CSR[__Vdlyvdim0__rv32e__DOT__wbu__DOT__CSR__v3] 
            = __Vdlyvval__rv32e__DOT__wbu__DOT__CSR__v3;
    }
    if (__Vdlyvset__rv32e__DOT__wbu__DOT__regs__v0) {
        vlSelf->rv32e__DOT__wbu__DOT__regs[0U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[1U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[2U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[3U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[4U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[5U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[6U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[7U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[8U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[9U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0xaU] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0xbU] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0xcU] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0xdU] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0xeU] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0xfU] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0x10U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0x11U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0x12U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0x13U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0x14U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0x15U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0x16U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0x17U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0x18U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0x19U] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0x1aU] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0x1bU] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0x1cU] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0x1dU] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0x1eU] = 0U;
        vlSelf->rv32e__DOT__wbu__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wbu__DOT__regs__v32) {
        vlSelf->rv32e__DOT__wbu__DOT__regs[__Vdlyvdim0__rv32e__DOT__wbu__DOT__regs__v32] 
            = __Vdlyvval__rv32e__DOT__wbu__DOT__regs__v32;
    }
    vlSelf->rv32e__DOT__lsu__DOT__l_rd_en = __Vdly__rv32e__DOT__lsu__DOT__l_rd_en;
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__lsu_wb_write_rd_data = 0U;
        __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr = 0U;
        vlSelf->rv32e__DOT__lsu_wb_valid = __Vdly__rv32e__DOT__lsu_wb_valid;
        vlSelf->rv32e__DOT__lsu_wb_rd = 0U;
    } else {
        if (vlSelf->rv32e__DOT__lsu__DOT__write_valid) {
            vlSelf->rv32e__DOT__lsu_wb_write_rd_data 
                = vlSelf->rv32e__DOT__lsu__DOT__rd_data;
            vlSelf->rv32e__DOT__lsu_wb_rd = vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr;
        } else if (vlSelf->rv32e__DOT__lsu__DOT__read_valid) {
            vlSelf->rv32e__DOT__lsu_wb_write_rd_data 
                = vlSelf->rv32e__DOT__lsu__DOT__rd_data;
            vlSelf->rv32e__DOT__lsu_wb_rd = vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr;
        } else if ((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                     & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                    & (~ ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                          | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite))))) {
            vlSelf->rv32e__DOT__lsu_wb_write_rd_data 
                = vlSelf->rv32e__DOT__lsu__DOT__rd_data;
            vlSelf->rv32e__DOT__lsu_wb_rd = vlSelf->rv32e__DOT__ex_lsu_rd;
        } else {
            vlSelf->rv32e__DOT__lsu_wb_write_rd_data 
                = vlSelf->rv32e__DOT__lsu_wb_write_rd_data;
            vlSelf->rv32e__DOT__lsu_wb_rd = vlSelf->rv32e__DOT__lsu_wb_rd;
        }
        __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr = (
                                                   (((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                                     & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                                                    & ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                                                       | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite)))
                                                    ? (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)
                                                    : 
                                                   ((IData)(vlSelf->rv32e__DOT__lsu_wb_valid)
                                                     ? (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)
                                                     : 
                                                    (((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                                      & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready))
                                                      ? (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)
                                                      : (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr))));
        vlSelf->rv32e__DOT__lsu_wb_valid = __Vdly__rv32e__DOT__lsu_wb_valid;
    }
    vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr = __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h384f4e33__0 
        = ((IData)(vlSelf->rv32e__DOT__lsu_wb_RegWrite) 
           & (0U != (IData)(vlSelf->rv32e__DOT__lsu_wb_rd)));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hb53dc38f__0 
        = ((IData)(vlSelf->rv32e__DOT__lsu__DOT__l_load) 
           & ((IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_en) 
              & (0U != (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr))));
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__id_wb_csr_addr2 = 0U;
        vlSelf->rv32e__DOT__id_wb_csr_addr1 = 0U;
        vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition = 1U;
        vlSelf->rv32e__DOT__id_ex_shamt = 0U;
        vlSelf->rv32e__DOT__id_ex_alu_op = 0U;
        vlSelf->rv32e__DOT__id_ex_imm = 0U;
        vlSelf->rv32e__DOT__id_ex_jalr = 0U;
        vlSelf->rv32e__DOT__id_ex_jal = 0U;
        vlSelf->rv32e__DOT__id_ex_opcode = 0U;
        vlSelf->rv32e__DOT__id_wb_rs2 = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_wr_addr2 = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_wen2 = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_wr_addr1 = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_wen1 = 0U;
        vlSelf->rv32e__DOT__id_ex_inst = 0U;
        vlSelf->rv32e__DOT__id_ex_MemLen = 0U;
        vlSelf->rv32e__DOT__id_ex_csr = 0U;
        vlSelf->rv32e__DOT__id_ex_pc = 0U;
        vlSelf->rv32e__DOT__id_ex_MemRead = 0U;
        vlSelf->rv32e__DOT__id_ex_RegWrite = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_op = 0U;
        vlSelf->rv32e__DOT__id_ex_zimm = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_mret = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_ecall = 0U;
        vlSelf->rv32e__DOT__id_ex_func3 = 0U;
        vlSelf->rv32e__DOT__id_ex_rd = 0U;
        vlSelf->rv32e__DOT__id_ex_MemWrite = 0U;
        vlSelf->rv32e__DOT__id_wb_rs1 = 0U;
    } else {
        if (((IData)(vlSelf->rv32e__DOT__IF_valid) 
             & (IData)(vlSelf->rv32e__DOT__id_ready))) {
            if (vlSelf->rv32e__DOT__idu__DOT__csr_mret) {
                vlSelf->rv32e__DOT__id_wb_csr_addr2 = 0x341U;
                vlSelf->rv32e__DOT__id_wb_csr_addr1 = 0x300U;
            } else {
                vlSelf->rv32e__DOT__id_wb_csr_addr2 = 0U;
                vlSelf->rv32e__DOT__id_wb_csr_addr1 
                    = ((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall)
                        ? 0x305U : (IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hf81b0dad__0));
            }
            vlSelf->rv32e__DOT__id_ex_shamt = (0x3fU 
                                               & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 0x14U));
            vlSelf->rv32e__DOT__id_ex_alu_op = vlSelf->rv32e__DOT__idu__DOT__alu_op;
            vlSelf->rv32e__DOT__id_ex_imm = vlSelf->rv32e__DOT__idu__DOT__imm;
            vlSelf->rv32e__DOT__id_ex_jalr = (IData)(
                                                     (0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->rv32e__DOT__IF_ID_inst)));
            vlSelf->rv32e__DOT__id_ex_jal = (0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->rv32e__DOT__IF_ID_inst));
            vlSelf->rv32e__DOT__id_ex_opcode = (0x7fU 
                                                & vlSelf->rv32e__DOT__IF_ID_inst);
            vlSelf->rv32e__DOT__id_wb_rs2 = (0x1fU 
                                             & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 0x14U));
            if (vlSelf->rv32e__DOT__idu__DOT__csr_ecall) {
                vlSelf->rv32e__DOT__id_ex_csr_wr_addr2 = 0x341U;
                vlSelf->rv32e__DOT__id_ex_csr_wr_addr1 = 0x342U;
                vlSelf->rv32e__DOT__id_ex_csr_wen2 = 1U;
            } else {
                vlSelf->rv32e__DOT__id_ex_csr_wr_addr2 = 0U;
                vlSelf->rv32e__DOT__id_ex_csr_wr_addr1 
                    = ((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret)
                        ? 0x300U : (IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hf81b0dad__0));
                vlSelf->rv32e__DOT__id_ex_csr_wen2 = 0U;
            }
            vlSelf->rv32e__DOT__id_ex_csr_wen1 = (0x73U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->rv32e__DOT__IF_ID_inst));
            vlSelf->rv32e__DOT__id_ex_inst = vlSelf->rv32e__DOT__IF_ID_inst;
            vlSelf->rv32e__DOT__id_ex_MemLen = (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h69b43165__0) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->rv32e__DOT__IF_ID_inst)))
                                                 ? 2U
                                                 : 
                                                (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h69b43165__0) 
                                                  & (0x1000U 
                                                     == 
                                                     (0x7000U 
                                                      & vlSelf->rv32e__DOT__IF_ID_inst)))
                                                  ? 1U
                                                  : 
                                                 (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h69b43165__0) 
                                                   & ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                           >> 0xcU))) 
                                                      | (IData)(
                                                                (3U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->rv32e__DOT__IF_ID_inst)))))
                                                   ? 4U
                                                   : 
                                                  ((IData)(
                                                           (0x5000U 
                                                            == 
                                                            (0x707cU 
                                                             & vlSelf->rv32e__DOT__IF_ID_inst)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0x4000U 
                                                             == 
                                                             (0x707cU 
                                                              & vlSelf->rv32e__DOT__IF_ID_inst)))
                                                     ? 0U
                                                     : 2U)))));
            vlSelf->rv32e__DOT__id_ex_csr = (0x73U 
                                             == (0x7fU 
                                                 & vlSelf->rv32e__DOT__IF_ID_inst));
            vlSelf->rv32e__DOT__id_ex_pc = vlSelf->rv32e__DOT__IF_ID_pc;
            vlSelf->rv32e__DOT__id_ex_MemRead = (IData)(
                                                        ((0U 
                                                          == 
                                                          (0x7cU 
                                                           & vlSelf->rv32e__DOT__IF_ID_inst)) 
                                                         & ((2U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                 >> 0xcU))) 
                                                            | ((1U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                    >> 0xcU))) 
                                                               | ((0U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                       >> 0xcU))) 
                                                                  | ((5U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                          >> 0xcU))) 
                                                                     | (4U 
                                                                        == 
                                                                        (7U 
                                                                         & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                            >> 0xcU)))))))));
            vlSelf->rv32e__DOT__id_ex_RegWrite = ((0xdU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                       >> 2U))) 
                                                  | ((5U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                          >> 2U))) 
                                                     | ((0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                             >> 2U))) 
                                                        | ((0x1bU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                >> 2U))) 
                                                           | ((0x19U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                   >> 2U))) 
                                                              | ((0xcU 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                      >> 2U))) 
                                                                 | ((4U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                         >> 2U))) 
                                                                    | ((~ 
                                                                        ((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall) 
                                                                         | (IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret))) 
                                                                       & (0x73U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->rv32e__DOT__IF_ID_inst))))))))));
            vlSelf->rv32e__DOT__id_ex_csr_op = (((0x73U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->rv32e__DOT__IF_ID_inst)) 
                                                 & ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                         >> 0xcU))) 
                                                    | (5U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                           >> 0xcU)))))
                                                 ? 1U
                                                 : 
                                                (((0x73U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->rv32e__DOT__IF_ID_inst)) 
                                                  & ((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                          >> 0xcU))) 
                                                     | (6U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                            >> 0xcU)))))
                                                  ? 2U
                                                  : 
                                                 (((0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->rv32e__DOT__IF_ID_inst)) 
                                                   & ((3U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                           >> 0xcU))) 
                                                      | (7U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                             >> 0xcU)))))
                                                   ? 3U
                                                   : 0U)));
            vlSelf->rv32e__DOT__id_ex_zimm = (0x1fU 
                                              & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                 >> 0xfU));
            vlSelf->rv32e__DOT__id_ex_csr_mret = vlSelf->rv32e__DOT__idu__DOT__csr_mret;
            vlSelf->rv32e__DOT__id_ex_csr_ecall = vlSelf->rv32e__DOT__idu__DOT__csr_ecall;
            vlSelf->rv32e__DOT__id_ex_func3 = (7U & 
                                               (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 0xcU));
            vlSelf->rv32e__DOT__id_ex_rd = (0x1fU & 
                                            (vlSelf->rv32e__DOT__IF_ID_inst 
                                             >> 7U));
            vlSelf->rv32e__DOT__id_ex_MemWrite = (8U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                      >> 2U)));
            vlSelf->rv32e__DOT__id_wb_rs1 = (0x1fU 
                                             & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 0xfU));
        }
        if (vlSelf->rv32e__DOT__ex_flush) {
            vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition = 0U;
        } else if (vlSelf->rv32e__DOT__id_ready) {
            vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition = 1U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__lsu__DOT__write_valid = 0U;
    } else if (((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                  & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                 & (~ (IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead))) 
                & (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite))) {
        if ((4U == (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__lsu__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__ex_lsu_process_result, vlSelf->rv32e__DOT__ex_lsu_src2, 1U);
        } else if ((1U == (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__lsu__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__ex_lsu_process_result, vlSelf->rv32e__DOT__ex_lsu_src2, 2U);
        } else if (VL_LIKELY((2U == (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen)))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__lsu__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__ex_lsu_process_result, vlSelf->rv32e__DOT__ex_lsu_src2, 4U);
        } else {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(2U, 0xdeadbeefU);
            VL_WRITEF("\033[32mError: Unsupported memory write length %b at address %x\033[0m\n",
                      3,vlSelf->rv32e__DOT__ex_lsu_MemLen,
                      32,vlSelf->rv32e__DOT__ex_lsu_process_result);
        }
        vlSelf->rv32e__DOT__lsu__DOT__write_valid = 1U;
    } else {
        vlSelf->rv32e__DOT__lsu__DOT__write_valid = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data = 0U;
        vlSelf->rv32e__DOT__lsu__DOT__read_valid = 0U;
    } else if ((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                 & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                & ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                   & (~ (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite))))) {
        if ((4U & (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))) {
            if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen)))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(2U, 0xdeadbeefU);
                VL_WRITEF("\033[32mError: Unsupported memory read length %b at address %x\033[0m\n",
                          3,vlSelf->rv32e__DOT__lsu__DOT__l_MemLen,
                          32,vlSelf->rv32e__DOT__ex_lsu_process_result);
            } else if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen)))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(2U, 0xdeadbeefU);
                VL_WRITEF("\033[32mError: Unsupported memory read length %b at address %x\033[0m\n",
                          3,vlSelf->rv32e__DOT__lsu__DOT__l_MemLen,
                          32,vlSelf->rv32e__DOT__ex_lsu_process_result);
            } else {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ifu__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__ex_lsu_process_result, 1U, __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__6__Vfuncout);
                vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                    = __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__6__Vfuncout;
            }
        } else if ((2U & (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))) {
            if ((1U & (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ifu__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__ex_lsu_process_result, 2U, __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__7__Vfuncout);
                vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                    = __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__7__Vfuncout;
            } else {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ifu__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__ex_lsu_process_result, 4U, __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__8__Vfuncout);
                vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                    = __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__8__Vfuncout;
            }
        } else if ((1U & (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ifu__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__ex_lsu_process_result, 2U, __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__9__Vfuncout);
            vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                = __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__9__Vfuncout;
        } else {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ifu__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__ex_lsu_process_result, 1U, __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__10__Vfuncout);
            vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                = __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__10__Vfuncout;
        }
        vlSelf->rv32e__DOT__lsu__DOT__read_valid = 1U;
    } else {
        vlSelf->rv32e__DOT__lsu__DOT__read_valid = 0U;
    }
    vlSelf->rv32e__DOT__wb_ex_csr_num1 = vlSelf->rv32e__DOT__wbu__DOT__CSR
        [vlSelf->rv32e__DOT__id_wb_csr_addr1];
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hadc13f7a__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hb53dc38f__0) 
           & ((IData)(vlSelf->rv32e__DOT__id_wb_rs2) 
              == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr)));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h0017749a__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hb53dc38f__0) 
           & ((IData)(vlSelf->rv32e__DOT__id_wb_rs1) 
              == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr)));
    vlSelf->rv32e__DOT__lsu__DOT__l_MemLen = __Vdly__rv32e__DOT__lsu__DOT__l_MemLen;
    vlSelf->rv32e__DOT__lsu_ex_ready = __Vdly__rv32e__DOT__lsu_ex_ready;
}

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__2(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2 = vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_addr2;
    vlSelf->rv32e__DOT__ex_lsu_csr_wen1 = vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wen1;
    vlSelf->rv32e__DOT__ex_lsu_csr_wen2 = vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wen2;
    vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1 = vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_addr1;
    vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1 = vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_data1;
    vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2 = vlSelf->__Vdly__rv32e__DOT__ex_lsu_csr_wr_data2;
    vlSelf->rv32e__DOT__ex_lsu_RegWrite = vlSelf->__Vdly__rv32e__DOT__ex_lsu_RegWrite;
    vlSelf->rv32e__DOT__ex_lsu_rd = vlSelf->__Vdly__rv32e__DOT__ex_lsu_rd;
    vlSelf->rv32e__DOT__IF_ID_pc = vlSelf->__Vdly__rv32e__DOT__IF_ID_pc;
    vlSelf->rv32e__DOT__ex_lsu_MemLen = vlSelf->__Vdly__rv32e__DOT__ex_lsu_MemLen;
    vlSelf->rv32e__DOT__ex_lsu_src2 = vlSelf->__Vdly__rv32e__DOT__ex_lsu_src2;
    vlSelf->rv32e__DOT__ex_lsu_MemWrite = vlSelf->__Vdly__rv32e__DOT__ex_lsu_MemWrite;
    vlSelf->rv32e__DOT__ex_lsu_MemRead = vlSelf->__Vdly__rv32e__DOT__ex_lsu_MemRead;
    vlSelf->rv32e__DOT__ex_lsu_process_result = vlSelf->__Vdly__rv32e__DOT__ex_lsu_process_result;
    vlSelf->rv32e__DOT__ex_lsu_valid = vlSelf->__Vdly__rv32e__DOT__ex_lsu_valid;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h69af1a50__0 
        = ((IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite) 
           & (0U != (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h804502ec__0 
        = ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
           & (IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite));
}

VL_INLINE_OPT void Vrv32e___024root___nba_comb__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0 
        = ((IData)(vlSelf->rv32e__DOT__ex_lsu_rd) == (IData)(vlSelf->rv32e__DOT__id_wb_rs2));
    vlSelf->rv32e__DOT__lsu__DOT__rd_data = ((IData)(vlSelf->rv32e__DOT__lsu__DOT__l_load)
                                              ? ((0U 
                                                  == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                                  ? 
                                                 (0xffU 
                                                  & vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                                    ? 
                                                   (0xffffU 
                                                    & vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                                                                     >> 0xfU)))) 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                                      ? vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data
                                                      : 0U)))))
                                              : ((IData)(vlSelf->rv32e__DOT__ex_lsu_forward_las)
                                                  ? vlSelf->rv32e__DOT__ex_lsu_src2
                                                  : 
                                                 ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite)
                                                   ? 0U
                                                   : 
                                                  ((((IData)(vlSelf->rv32e__DOT__ex_lsu_csr) 
                                                     & (~ (IData)(vlSelf->rv32e__DOT__ex_lsu_csr_ecall))) 
                                                    & (~ (IData)(vlSelf->rv32e__DOT__ex_lsu_csr_mret)))
                                                    ? vlSelf->rv32e__DOT__ex_lsu_csr_rdata
                                                    : vlSelf->rv32e__DOT__ex_lsu_process_result))));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hc613623f__0 
        = (((IData)(vlSelf->rv32e__DOT__ex_lsu_rd) 
            == (IData)(vlSelf->rv32e__DOT__id_wb_rs1)) 
           & (IData)(vlSelf->rv32e__DOT__ex_lsu_valid));
    vlSelf->rv32e__DOT__exu__DOT__src2 = (((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h69af1a50__0) 
                                           & ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0) 
                                              & (IData)(vlSelf->rv32e__DOT__ex_lsu_valid)))
                                           ? vlSelf->rv32e__DOT__ex_lsu_process_result
                                           : (((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h384f4e33__0) 
                                               & (((IData)(vlSelf->rv32e__DOT__id_wb_rs2) 
                                                   == (IData)(vlSelf->rv32e__DOT__lsu_wb_rd)) 
                                                  & (IData)(vlSelf->rv32e__DOT__lsu_wb_valid)))
                                               ? vlSelf->rv32e__DOT__lsu_wb_write_rd_data
                                               : ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hadc13f7a__0)
                                                   ? vlSelf->rv32e__DOT__lsu_wb_write_rd_data
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->rv32e__DOT__id_wb_rs2))
                                                    ? 0U
                                                    : 
                                                   vlSelf->rv32e__DOT__wbu__DOT__regs
                                                   [vlSelf->rv32e__DOT__id_wb_rs2]))));
    vlSelf->rv32e__DOT__exu__DOT__load_use_flag = (
                                                   ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h0017749a__0) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hadc13f7a__0) 
                                                       << 2U) 
                                                      | ((((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h804502ec__0) 
                                                           & ((0U 
                                                               != (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)) 
                                                              & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hc613623f__0))) 
                                                          << 1U) 
                                                         | ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h804502ec__0) 
                                                            & ((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                                               & ((0U 
                                                                   != (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)) 
                                                                  & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0)))))));
    vlSelf->rv32e__DOT__exu__DOT__src1 = (((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h69af1a50__0) 
                                           & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hc613623f__0))
                                           ? vlSelf->rv32e__DOT__ex_lsu_process_result
                                           : (((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h384f4e33__0) 
                                               & (((IData)(vlSelf->rv32e__DOT__id_wb_rs1) 
                                                   == (IData)(vlSelf->rv32e__DOT__lsu_wb_rd)) 
                                                  & (IData)(vlSelf->rv32e__DOT__lsu_wb_valid)))
                                               ? vlSelf->rv32e__DOT__lsu_wb_write_rd_data
                                               : ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h0017749a__0)
                                                   ? vlSelf->rv32e__DOT__lsu_wb_write_rd_data
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->rv32e__DOT__id_wb_rs1))
                                                    ? 0U
                                                    : 
                                                   vlSelf->rv32e__DOT__wbu__DOT__regs
                                                   [vlSelf->rv32e__DOT__id_wb_rs1]))));
    if (((IData)(vlSelf->rv32e__DOT__id_ex_MemRead) 
         | (IData)(vlSelf->rv32e__DOT__id_ex_MemWrite))) {
        vlSelf->rv32e__DOT__exu__DOT__ex_num2 = vlSelf->rv32e__DOT__id_ex_imm;
        vlSelf->rv32e__DOT__exu__DOT__ex_num1 = vlSelf->rv32e__DOT__exu__DOT__src1;
    } else if (((IData)(vlSelf->rv32e__DOT__id_ex_jal) 
                | (IData)(vlSelf->rv32e__DOT__id_ex_jalr))) {
        vlSelf->rv32e__DOT__exu__DOT__ex_num2 = 4U;
        vlSelf->rv32e__DOT__exu__DOT__ex_num1 = vlSelf->rv32e__DOT__id_ex_pc;
    } else if ((0x37U == (IData)(vlSelf->rv32e__DOT__id_ex_opcode))) {
        vlSelf->rv32e__DOT__exu__DOT__ex_num2 = 0U;
        vlSelf->rv32e__DOT__exu__DOT__ex_num1 = vlSelf->rv32e__DOT__id_ex_imm;
    } else if ((0x17U == (IData)(vlSelf->rv32e__DOT__id_ex_opcode))) {
        vlSelf->rv32e__DOT__exu__DOT__ex_num2 = vlSelf->rv32e__DOT__id_ex_imm;
        vlSelf->rv32e__DOT__exu__DOT__ex_num1 = vlSelf->rv32e__DOT__id_ex_pc;
    } else {
        vlSelf->rv32e__DOT__exu__DOT__ex_num2 = (((
                                                   (5U 
                                                    == (IData)(vlSelf->rv32e__DOT__id_ex_alu_op)) 
                                                   | (9U 
                                                      == (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))) 
                                                  | (8U 
                                                     == (IData)(vlSelf->rv32e__DOT__id_ex_alu_op)))
                                                  ? 
                                                 ((IData)(
                                                          ((0x10U 
                                                            == 
                                                            (0x7cU 
                                                             & (IData)(vlSelf->rv32e__DOT__id_ex_opcode))) 
                                                           & (~ 
                                                              ((IData)(vlSelf->rv32e__DOT__id_ex_shamt) 
                                                               >> 5U))))
                                                   ? 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->rv32e__DOT__id_ex_shamt))
                                                   : 
                                                  ((0xcU 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                        >> 2U)))
                                                    ? 
                                                   (0x1fU 
                                                    & vlSelf->rv32e__DOT__exu__DOT__src2)
                                                    : 0U))
                                                  : 
                                                 (((0xcU 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                        >> 2U))) 
                                                   | (0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                          >> 2U))))
                                                   ? vlSelf->rv32e__DOT__exu__DOT__src2
                                                   : vlSelf->rv32e__DOT__id_ex_imm));
        vlSelf->rv32e__DOT__exu__DOT__ex_num1 = vlSelf->rv32e__DOT__exu__DOT__src1;
    }
    vlSelf->rv32e__DOT__ex_ready = (((~ (IData)(vlSelf->rv32e__DOT__ex_lsu_valid)) 
                                     | (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                                    & (0U == (IData)(vlSelf->rv32e__DOT__exu__DOT__load_use_flag)));
    vlSelf->rv32e__DOT__exu__DOT__alu_less = ((7U == (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                                               ? VL_LTS_III(32, vlSelf->rv32e__DOT__exu__DOT__ex_num1, vlSelf->rv32e__DOT__exu__DOT__ex_num2)
                                               : ((6U 
                                                   == (IData)(vlSelf->rv32e__DOT__id_ex_alu_op)) 
                                                  & (vlSelf->rv32e__DOT__exu__DOT__ex_num1 
                                                     < vlSelf->rv32e__DOT__exu__DOT__ex_num2)));
    if ((8U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))) {
        if ((4U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))) {
            vlSelf->rv32e__DOT__exu__DOT__process_result = 0U;
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(2U, 0xdeadbeefU);
        } else if ((2U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(2U, 0xdeadbeefU);
            vlSelf->rv32e__DOT__exu__DOT__process_result = 0U;
        } else {
            vlSelf->rv32e__DOT__exu__DOT__process_result 
                = ((1U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                    ? (vlSelf->rv32e__DOT__exu__DOT__ex_num1 
                       >> (0x1fU & vlSelf->rv32e__DOT__exu__DOT__ex_num2))
                    : VL_SHIFTRS_III(32,32,5, vlSelf->rv32e__DOT__exu__DOT__ex_num1, 
                                     (0x1fU & vlSelf->rv32e__DOT__exu__DOT__ex_num2)));
        }
    } else {
        vlSelf->rv32e__DOT__exu__DOT__process_result 
            = ((4U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                ? ((2U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                    ? ((1U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                        ? (VL_LTS_III(32, vlSelf->rv32e__DOT__exu__DOT__ex_num1, vlSelf->rv32e__DOT__exu__DOT__ex_num2)
                            ? 1U : 0U) : ((vlSelf->rv32e__DOT__exu__DOT__ex_num1 
                                           < vlSelf->rv32e__DOT__exu__DOT__ex_num2)
                                           ? 1U : 0U))
                    : ((1U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                        ? (vlSelf->rv32e__DOT__exu__DOT__ex_num1 
                           << (0x1fU & vlSelf->rv32e__DOT__exu__DOT__ex_num2))
                        : (vlSelf->rv32e__DOT__exu__DOT__ex_num1 
                           ^ vlSelf->rv32e__DOT__exu__DOT__ex_num2)))
                : ((2U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                    ? ((1U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                        ? (vlSelf->rv32e__DOT__exu__DOT__ex_num1 
                           | vlSelf->rv32e__DOT__exu__DOT__ex_num2)
                        : (vlSelf->rv32e__DOT__exu__DOT__ex_num1 
                           & vlSelf->rv32e__DOT__exu__DOT__ex_num2))
                    : ((1U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                        ? (vlSelf->rv32e__DOT__exu__DOT__ex_num1 
                           - vlSelf->rv32e__DOT__exu__DOT__ex_num2)
                        : (vlSelf->rv32e__DOT__exu__DOT__ex_num1 
                           + vlSelf->rv32e__DOT__exu__DOT__ex_num2))));
    }
    vlSelf->rv32e__DOT__exu__DOT__alu_zero = (0U == vlSelf->rv32e__DOT__exu__DOT__process_result);
    vlSelf->rv32e__DOT__exu__DOT__jal_target = (vlSelf->rv32e__DOT__id_ex_pc 
                                                + vlSelf->rv32e__DOT__id_ex_imm);
    vlSelf->rv32e__DOT__exu__DOT__jalr_target = (0xfffffffeU 
                                                 & (vlSelf->rv32e__DOT__exu__DOT__src1 
                                                    + vlSelf->rv32e__DOT__id_ex_imm));
    vlSelf->rv32e__DOT__exu__DOT__take_branch = ((0x63U 
                                                  == (IData)(vlSelf->rv32e__DOT__id_ex_opcode)) 
                                                 & (((((((1U 
                                                          == (IData)(vlSelf->rv32e__DOT__id_ex_func3)) 
                                                         & (~ (IData)(vlSelf->rv32e__DOT__exu__DOT__alu_zero))) 
                                                        | ((0U 
                                                            == (IData)(vlSelf->rv32e__DOT__id_ex_func3)) 
                                                           & (IData)(vlSelf->rv32e__DOT__exu__DOT__alu_zero))) 
                                                       | ((4U 
                                                           == (IData)(vlSelf->rv32e__DOT__id_ex_func3)) 
                                                          & (IData)(vlSelf->rv32e__DOT__exu__DOT__alu_less))) 
                                                      | ((5U 
                                                          == (IData)(vlSelf->rv32e__DOT__id_ex_func3)) 
                                                         & (~ (IData)(vlSelf->rv32e__DOT__exu__DOT__alu_less)))) 
                                                     | ((6U 
                                                         == (IData)(vlSelf->rv32e__DOT__id_ex_func3)) 
                                                        & (IData)(vlSelf->rv32e__DOT__exu__DOT__alu_less))) 
                                                    | ((7U 
                                                        == (IData)(vlSelf->rv32e__DOT__id_ex_func3)) 
                                                       & (~ (IData)(vlSelf->rv32e__DOT__exu__DOT__alu_less)))));
    if (vlSelf->rv32e__DOT__id_ex_jal) {
        vlSelf->rv32e__DOT__ex_flush = ((IData)(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->rv32e__DOT__exu__DOT__load_use_flag)))));
        vlSelf->rv32e__DOT__ex_flush_pc = vlSelf->rv32e__DOT__exu__DOT__jal_target;
    } else if (vlSelf->rv32e__DOT__id_ex_jalr) {
        vlSelf->rv32e__DOT__ex_flush = ((IData)(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->rv32e__DOT__exu__DOT__load_use_flag)))));
        vlSelf->rv32e__DOT__ex_flush_pc = vlSelf->rv32e__DOT__exu__DOT__jalr_target;
    } else if (vlSelf->rv32e__DOT__exu__DOT__take_branch) {
        vlSelf->rv32e__DOT__ex_flush = ((IData)(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->rv32e__DOT__exu__DOT__load_use_flag)))));
        vlSelf->rv32e__DOT__ex_flush_pc = (vlSelf->rv32e__DOT__id_ex_pc 
                                           + vlSelf->rv32e__DOT__id_ex_imm);
    } else if (vlSelf->rv32e__DOT__id_ex_csr_ecall) {
        vlSelf->rv32e__DOT__ex_flush = ((IData)(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->rv32e__DOT__exu__DOT__load_use_flag)))));
        vlSelf->rv32e__DOT__ex_flush_pc = vlSelf->rv32e__DOT__wb_ex_csr_num1;
    } else if (vlSelf->rv32e__DOT__id_ex_csr_mret) {
        vlSelf->rv32e__DOT__ex_flush = ((IData)(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->rv32e__DOT__exu__DOT__load_use_flag)))));
        vlSelf->rv32e__DOT__ex_flush_pc = vlSelf->rv32e__DOT__wbu__DOT__CSR
            [vlSelf->rv32e__DOT__id_wb_csr_addr2];
    } else {
        vlSelf->rv32e__DOT__ex_flush = 0U;
        vlSelf->rv32e__DOT__ex_flush_pc = 0U;
    }
    vlSelf->rv32e__DOT__id_ready = (1U & ((~ (IData)(vlSelf->rv32e__DOT__ex_flush)) 
                                          & ((~ (IData)(vlSelf->rv32e__DOT__id_valid)) 
                                             | (IData)(vlSelf->rv32e__DOT__ex_ready))));
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->rv32e__DOT__ifu__DOT__check))) {
        vlSelf->rv32e__DOT__IF_valid = 0U;
        vlSelf->rv32e__DOT__IF_ID_inst = 0U;
    } else if (vlSelf->rv32e__DOT__ex_flush) {
        vlSelf->rv32e__DOT__IF_valid = vlSelf->rv32e__DOT__id_ready;
        vlSelf->rv32e__DOT__IF_ID_inst = 0U;
    } else {
        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ifu__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__IF_ID_pc, 4U, vlSelf->__Vfunc_rv32e__DOT__ifu__DOT__pmem_read__1__Vfuncout);
        vlSelf->rv32e__DOT__IF_valid = 1U;
        vlSelf->rv32e__DOT__IF_ID_inst = vlSelf->__Vfunc_rv32e__DOT__ifu__DOT__pmem_read__1__Vfuncout;
    }
    vlSelf->rv32e__DOT__idu__DOT__imm = (((5U == (0x1fU 
                                                  & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                     >> 2U))) 
                                          | (0xdU == 
                                             (0x1fU 
                                              & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                 >> 2U))))
                                          ? (0xfffff000U 
                                             & vlSelf->rv32e__DOT__IF_ID_inst)
                                          : ((0x1bU 
                                              == (0x1fU 
                                                  & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                     >> 2U)))
                                              ? (((- (IData)(
                                                             (vlSelf->rv32e__DOT__IF_ID_inst 
                                                              >> 0x1fU))) 
                                                  << 0x14U) 
                                                 | ((0xff000U 
                                                     & vlSelf->rv32e__DOT__IF_ID_inst) 
                                                    | ((0x800U 
                                                        & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                             >> 0x14U)))))
                                              : (((0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                       >> 2U))) 
                                                  | ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                          >> 2U))) 
                                                     | (4U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                            >> 2U)))))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->rv32e__DOT__IF_ID_inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelf->rv32e__DOT__IF_ID_inst 
                                                     >> 0x14U))
                                                  : 
                                                 ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                       >> 2U)))
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                        >> 2U)))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                             >> 7U))))
                                                    : 
                                                   ((0x18U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                         >> 2U)))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                 >> 7U)))))
                                                     : 
                                                    (((0x73U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->rv32e__DOT__IF_ID_inst)) 
                                                      & ((7U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                              >> 0xcU))) 
                                                         | ((6U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                 >> 0xcU))) 
                                                            | (5U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                   >> 0xcU))))))
                                                      ? 
                                                     (0x1fU 
                                                      & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                         >> 0xfU))
                                                      : 0U)))))));
    vlSelf->rv32e__DOT__idu__DOT__csr_ecall = (IData)(
                                                      (0x73U 
                                                       == vlSelf->rv32e__DOT__IF_ID_inst));
    vlSelf->rv32e__DOT__idu__DOT__csr_mret = (IData)(
                                                     (0x30200073U 
                                                      == vlSelf->rv32e__DOT__IF_ID_inst));
    vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h69b43165__0 
        = ((8U == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                            >> 2U))) | (0U == (0x1fU 
                                               & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 2U))));
    vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hf81b0dad__0 
        = ((0x73U == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst))
            ? (vlSelf->rv32e__DOT__IF_ID_inst >> 0x14U)
            : 0U);
    vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h4eb56789__0 
        = (IData)((0x30U == (0x707cU & vlSelf->rv32e__DOT__IF_ID_inst)));
    vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h05244652__0 
        = ((0xcU == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                              >> 2U))) | (4U == (0x1fU 
                                                 & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                    >> 2U))));
    vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hcf9d2862__0 
        = ((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h05244652__0) 
           & (0x5000U == (0x7000U & vlSelf->rv32e__DOT__IF_ID_inst)));
    vlSelf->rv32e__DOT__idu__DOT__alu_op = (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h4eb56789__0) 
                                             & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 0x1eU))
                                             ? 1U : 
                                            (((~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 0x1eU)) 
                                              & (IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h4eb56789__0))
                                              ? 0U : 
                                             ((IData)(
                                                      (0x10U 
                                                       == 
                                                       (0x707cU 
                                                        & vlSelf->rv32e__DOT__IF_ID_inst)))
                                               ? 0U
                                               : ((IData)(
                                                          (0x2010U 
                                                           == 
                                                           (0x707cU 
                                                            & vlSelf->rv32e__DOT__IF_ID_inst)))
                                                   ? 7U
                                                   : 
                                                  ((IData)(
                                                           ((0x60U 
                                                             == 
                                                             (0x7cU 
                                                              & vlSelf->rv32e__DOT__IF_ID_inst)) 
                                                            & ((0U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                    >> 0xcU))) 
                                                               | (1U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                      >> 0xcU))))))
                                                    ? 1U
                                                    : 
                                                   ((IData)(
                                                            ((0x60U 
                                                              == 
                                                              (0x7cU 
                                                               & vlSelf->rv32e__DOT__IF_ID_inst)) 
                                                             & ((4U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                     >> 0xcU))) 
                                                                | (5U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                       >> 0xcU))))))
                                                     ? 7U
                                                     : 
                                                    ((IData)(
                                                             ((0x60U 
                                                               == 
                                                               (0x7cU 
                                                                & vlSelf->rv32e__DOT__IF_ID_inst)) 
                                                              & ((6U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                      >> 0xcU))) 
                                                                 | (7U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                        >> 0xcU))))))
                                                      ? 6U
                                                      : 
                                                     (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h05244652__0) 
                                                       & (0x6000U 
                                                          == 
                                                          (0x7000U 
                                                           & vlSelf->rv32e__DOT__IF_ID_inst)))
                                                       ? 3U
                                                       : 
                                                      (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h05244652__0) 
                                                        & (0x4000U 
                                                           == 
                                                           (0x7000U 
                                                            & vlSelf->rv32e__DOT__IF_ID_inst)))
                                                        ? 4U
                                                        : 
                                                       (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h05244652__0) 
                                                         & (0x7000U 
                                                            == 
                                                            (0x7000U 
                                                             & vlSelf->rv32e__DOT__IF_ID_inst)))
                                                         ? 2U
                                                         : 
                                                        ((IData)(
                                                                 (0x3030U 
                                                                  == 
                                                                  (0xfe00707cU 
                                                                   & vlSelf->rv32e__DOT__IF_ID_inst)))
                                                          ? 6U
                                                          : 
                                                         ((IData)(
                                                                  (0x3010U 
                                                                   == 
                                                                   (0x707cU 
                                                                    & vlSelf->rv32e__DOT__IF_ID_inst)))
                                                           ? 6U
                                                           : 
                                                          (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hcf9d2862__0) 
                                                            & (0U 
                                                               == 
                                                               (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                >> 0x19U)))
                                                            ? 9U
                                                            : 
                                                           (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hcf9d2862__0) 
                                                             & (0x20U 
                                                                == 
                                                                (vlSelf->rv32e__DOT__IF_ID_inst 
                                                                 >> 0x19U)))
                                                             ? 8U
                                                             : 
                                                            (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h05244652__0) 
                                                              & (IData)(
                                                                        (0x1000U 
                                                                         == 
                                                                         (0xfe007000U 
                                                                          & vlSelf->rv32e__DOT__IF_ID_inst))))
                                                              ? 5U
                                                              : 
                                                             (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h05244652__0) 
                                                               & (IData)(
                                                                         (0x2000U 
                                                                          == 
                                                                          (0xfe007000U 
                                                                           & vlSelf->rv32e__DOT__IF_ID_inst))))
                                                               ? 7U
                                                               : 0U))))))))))))))));
}

void Vrv32e___024root___eval_nba(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrv32e___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vrv32e___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrv32e___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vrv32e___024root___nba_comb__TOP__0(vlSelf);
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
                VL_FATAL_MT("/home/furina/ysyx-workbench/npc/pipeline-vsrc/rv32e.v", 4, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/furina/ysyx-workbench/npc/pipeline-vsrc/rv32e.v", 4, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/furina/ysyx-workbench/npc/pipeline-vsrc/rv32e.v", 4, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
