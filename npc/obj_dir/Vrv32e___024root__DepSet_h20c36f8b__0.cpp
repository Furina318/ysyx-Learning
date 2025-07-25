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
    vlSelf->rv32e__DOT__idu__DOT__immJ = (((- (IData)(
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
                                                      >> 0x14U)))));
    vlSelf->rv32e__DOT__idu__DOT__immI = (((- (IData)(
                                                      (vlSelf->rv32e__DOT__IF_ID_inst 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSelf->rv32e__DOT__IF_ID_inst 
                                             >> 0x14U));
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

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__lsu__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ len);

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__0\n"); );
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
    IData/*31:0*/ __Vdly__rv32e__DOT__inst_cnt;
    __Vdly__rv32e__DOT__inst_cnt = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__id_valid;
    __Vdly__rv32e__DOT__id_valid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__ex_lsu_valid;
    __Vdly__rv32e__DOT__ex_lsu_valid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__lsu__DOT__l_rd_en;
    __Vdly__rv32e__DOT__lsu__DOT__l_rd_en = 0;
    CData/*4:0*/ __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr;
    __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__lsu__DOT__l_inst;
    __Vdly__rv32e__DOT__lsu__DOT__l_inst = 0;
    CData/*6:0*/ __Vdly__rv32e__DOT__lsu__DOT__l_opcode;
    __Vdly__rv32e__DOT__lsu__DOT__l_opcode = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__lsu__DOT__l_pc;
    __Vdly__rv32e__DOT__lsu__DOT__l_pc = 0;
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
    __Vdly__rv32e__DOT__inst_cnt = vlSelf->rv32e__DOT__inst_cnt;
    __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v0 = 0U;
    __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v1 = 0U;
    __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v3 = 0U;
    __Vdly__rv32e__DOT__ex_lsu_valid = vlSelf->rv32e__DOT__ex_lsu_valid;
    __Vdlyvset__rv32e__DOT__wbu__DOT__regs__v0 = 0U;
    __Vdlyvset__rv32e__DOT__wbu__DOT__regs__v32 = 0U;
    __Vdly__rv32e__DOT__lsu_ex_ready = vlSelf->rv32e__DOT__lsu_ex_ready;
    __Vdly__rv32e__DOT__lsu__DOT__l_MemLen = vlSelf->rv32e__DOT__lsu__DOT__l_MemLen;
    __Vdly__rv32e__DOT__lsu__DOT__l_pc = vlSelf->rv32e__DOT__lsu__DOT__l_pc;
    __Vdly__rv32e__DOT__lsu__DOT__l_opcode = vlSelf->rv32e__DOT__lsu__DOT__l_opcode;
    __Vdly__rv32e__DOT__lsu__DOT__l_inst = vlSelf->rv32e__DOT__lsu__DOT__l_inst;
    __Vdly__rv32e__DOT__lsu__DOT__l_rd_en = vlSelf->rv32e__DOT__lsu__DOT__l_rd_en;
    __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr = vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr;
    __Vdly__rv32e__DOT__lsu_wb_valid = vlSelf->rv32e__DOT__lsu_wb_valid;
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__wbu__DOT__i = 0x20U;
    }
    if (VL_UNLIKELY((0x100073U == vlSelf->rv32e__DOT__IF_ID_inst))) {
        vlSelf->rv32e__DOT__unnamedblk1__DOT__IPC = 
            ((0U == vlSelf->rv32e__DOT__cycle_cnt) ? 0.0
              : (VL_ITOR_D_I(32, vlSelf->rv32e__DOT__inst_cnt) 
                 / VL_ITOR_D_I(32, vlSelf->rv32e__DOT__cycle_cnt)));
        VL_WRITEF("\033[33mIPC = %f\033[0m\n+-------------------+---------------------+---------------------+\n| Total predictions | Correct predictions | Prediction accuracy |\n| %10#        | %10#          | %10.2f%%         |\n+-------------------+---------------------+---------------------+\n",
                  64,vlSelf->rv32e__DOT__unnamedblk1__DOT__IPC,
                  32,vlSelf->rv32e__DOT__total_predictions,
                  32,vlSelf->rv32e__DOT__correct_predictions,
                  64,((0U == vlSelf->rv32e__DOT__total_predictions)
                       ? 0.0 : (100.0 * (VL_ITOR_D_I(32, vlSelf->rv32e__DOT__correct_predictions) 
                                         / VL_ITOR_D_I(32, vlSelf->rv32e__DOT__total_predictions)))));
        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(1U, vlSelf->rv32e__DOT__ex_lsu_inst);
    }
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
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__cycle_cnt = 0U;
        __Vdly__rv32e__DOT__id_valid = 0U;
        __Vdly__rv32e__DOT__inst_cnt = 0U;
        __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v0 = 1U;
    } else {
        vlSelf->rv32e__DOT__cycle_cnt = ((IData)(1U) 
                                         + vlSelf->rv32e__DOT__cycle_cnt);
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
        if (vlSelf->rv32e__DOT__wb_valid) {
            __Vdly__rv32e__DOT__inst_cnt = ((IData)(1U) 
                                            + vlSelf->rv32e__DOT__inst_cnt);
        }
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
        __Vdly__rv32e__DOT__ex_lsu_valid = 0U;
        __Vdlyvset__rv32e__DOT__wbu__DOT__regs__v0 = 1U;
    } else {
        if ((((IData)(vlSelf->rv32e__DOT__id_valid) 
              & (IData)(vlSelf->rv32e__DOT__ex_ready)) 
             & ((IData)(vlSelf->rv32e__DOT__lsu_ex_ready) 
                | (~ (IData)(vlSelf->rv32e__DOT__ex_lsu_valid))))) {
            __Vdly__rv32e__DOT__ex_lsu_valid = 1U;
        } else if (((~ ((IData)(vlSelf->rv32e__DOT__id_valid) 
                        & (IData)(vlSelf->rv32e__DOT__ex_ready))) 
                    & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready))) {
            __Vdly__rv32e__DOT__ex_lsu_valid = 0U;
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
    vlSelf->rv32e__DOT__inst_cnt = __Vdly__rv32e__DOT__inst_cnt;
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
    if (vlSelf->reset) {
        __Vdly__rv32e__DOT__lsu__DOT__l_MemLen = 0U;
        __Vdly__rv32e__DOT__lsu__DOT__l_pc = 0U;
        __Vdly__rv32e__DOT__lsu__DOT__l_inst = 0U;
        __Vdly__rv32e__DOT__lsu__DOT__l_opcode = 0U;
        vlSelf->rv32e__DOT__lsu__DOT__l_opcode = __Vdly__rv32e__DOT__lsu__DOT__l_opcode;
        __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr = 0U;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1 = 0U;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2 = 0U;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1 = 0U;
        vlSelf->rv32e__DOT__lsu_wb_inst = 0U;
        vlSelf->rv32e__DOT__lsu__DOT__l_inst = __Vdly__rv32e__DOT__lsu__DOT__l_inst;
        vlSelf->rv32e__DOT__lsu_wb_write_rd_data = 0U;
        vlSelf->rv32e__DOT__lsu_wb_pc = 0U;
        vlSelf->rv32e__DOT__lsu__DOT__l_pc = __Vdly__rv32e__DOT__lsu__DOT__l_pc;
        vlSelf->rv32e__DOT__lsu__DOT__l_rd_en = __Vdly__rv32e__DOT__lsu__DOT__l_rd_en;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2 = 0U;
        vlSelf->rv32e__DOT__lsu_wb_rd = 0U;
    } else {
        if ((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
              & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
             & ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite)))) {
            __Vdly__rv32e__DOT__lsu__DOT__l_MemLen 
                = vlSelf->rv32e__DOT__ex_lsu_MemLen;
            __Vdly__rv32e__DOT__lsu__DOT__l_pc = vlSelf->rv32e__DOT__ex_lsu_pc;
            __Vdly__rv32e__DOT__lsu__DOT__l_inst = vlSelf->rv32e__DOT__ex_lsu_inst;
            __Vdly__rv32e__DOT__lsu__DOT__l_opcode 
                = vlSelf->rv32e__DOT__ex_lsu_opcode;
            __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr 
                = vlSelf->rv32e__DOT__ex_lsu_rd;
        } else if (vlSelf->rv32e__DOT__lsu_wb_valid) {
            __Vdly__rv32e__DOT__lsu__DOT__l_MemLen 
                = vlSelf->rv32e__DOT__ex_lsu_MemLen;
            __Vdly__rv32e__DOT__lsu__DOT__l_pc = vlSelf->rv32e__DOT__ex_lsu_pc;
            __Vdly__rv32e__DOT__lsu__DOT__l_opcode 
                = (0x7fU & vlSelf->rv32e__DOT__lsu__DOT__l_inst);
            __Vdly__rv32e__DOT__lsu__DOT__l_inst = vlSelf->rv32e__DOT__ex_lsu_inst;
            __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr 
                = vlSelf->rv32e__DOT__ex_lsu_rd;
        } else if (((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                    & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready))) {
            __Vdly__rv32e__DOT__lsu__DOT__l_MemLen 
                = vlSelf->rv32e__DOT__ex_lsu_MemLen;
            __Vdly__rv32e__DOT__lsu__DOT__l_pc = vlSelf->rv32e__DOT__ex_lsu_pc;
            __Vdly__rv32e__DOT__lsu__DOT__l_opcode 
                = (0x7fU & vlSelf->rv32e__DOT__lsu__DOT__l_inst);
            __Vdly__rv32e__DOT__lsu__DOT__l_inst = vlSelf->rv32e__DOT__ex_lsu_inst;
            __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr 
                = vlSelf->rv32e__DOT__ex_lsu_rd;
        } else {
            __Vdly__rv32e__DOT__lsu__DOT__l_MemLen 
                = vlSelf->rv32e__DOT__lsu__DOT__l_MemLen;
            __Vdly__rv32e__DOT__lsu__DOT__l_pc = vlSelf->rv32e__DOT__lsu__DOT__l_pc;
            __Vdly__rv32e__DOT__lsu__DOT__l_inst = vlSelf->rv32e__DOT__lsu__DOT__l_inst;
            __Vdly__rv32e__DOT__lsu__DOT__l_opcode 
                = vlSelf->rv32e__DOT__lsu__DOT__l_opcode;
            __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr 
                = vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr;
        }
        vlSelf->rv32e__DOT__lsu__DOT__l_opcode = __Vdly__rv32e__DOT__lsu__DOT__l_opcode;
        if (vlSelf->rv32e__DOT__lsu__DOT__write_valid) {
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1;
            vlSelf->rv32e__DOT__lsu_wb_inst = vlSelf->rv32e__DOT__lsu__DOT__l_inst;
            vlSelf->rv32e__DOT__lsu_wb_write_rd_data 
                = vlSelf->rv32e__DOT__lsu__DOT__rd_data;
            vlSelf->rv32e__DOT__lsu_wb_pc = vlSelf->rv32e__DOT__lsu__DOT__l_pc;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2;
            vlSelf->rv32e__DOT__lsu_wb_rd = vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr;
        } else if (vlSelf->rv32e__DOT__lsu__DOT__read_valid) {
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1;
            vlSelf->rv32e__DOT__lsu_wb_inst = vlSelf->rv32e__DOT__lsu__DOT__l_inst;
            vlSelf->rv32e__DOT__lsu_wb_write_rd_data 
                = vlSelf->rv32e__DOT__lsu__DOT__rd_data;
            vlSelf->rv32e__DOT__lsu_wb_pc = vlSelf->rv32e__DOT__lsu__DOT__l_pc;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2;
            vlSelf->rv32e__DOT__lsu_wb_rd = vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr;
        } else if ((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                     & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                    & (~ ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                          | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite))))) {
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1;
            vlSelf->rv32e__DOT__lsu_wb_inst = vlSelf->rv32e__DOT__ex_lsu_inst;
            vlSelf->rv32e__DOT__lsu_wb_write_rd_data 
                = vlSelf->rv32e__DOT__lsu__DOT__rd_data;
            vlSelf->rv32e__DOT__lsu_wb_pc = vlSelf->rv32e__DOT__ex_lsu_pc;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2;
            vlSelf->rv32e__DOT__lsu_wb_rd = vlSelf->rv32e__DOT__ex_lsu_rd;
        } else {
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1 
                = vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2 
                = vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1 
                = vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1;
            vlSelf->rv32e__DOT__lsu_wb_inst = vlSelf->rv32e__DOT__lsu_wb_inst;
            vlSelf->rv32e__DOT__lsu_wb_write_rd_data 
                = vlSelf->rv32e__DOT__lsu_wb_write_rd_data;
            vlSelf->rv32e__DOT__lsu_wb_pc = vlSelf->rv32e__DOT__lsu_wb_pc;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2 
                = vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2;
            vlSelf->rv32e__DOT__lsu_wb_rd = vlSelf->rv32e__DOT__lsu_wb_rd;
        }
        vlSelf->rv32e__DOT__lsu__DOT__l_inst = __Vdly__rv32e__DOT__lsu__DOT__l_inst;
        vlSelf->rv32e__DOT__lsu__DOT__l_pc = __Vdly__rv32e__DOT__lsu__DOT__l_pc;
        vlSelf->rv32e__DOT__lsu__DOT__l_rd_en = __Vdly__rv32e__DOT__lsu__DOT__l_rd_en;
    }
    vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr = __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hb53dc38f__0 
        = ((IData)(vlSelf->rv32e__DOT__lsu__DOT__l_load) 
           & ((IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_en) 
              & (0U != (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr))));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h384f4e33__0 
        = ((IData)(vlSelf->rv32e__DOT__lsu_wb_RegWrite) 
           & (0U != (IData)(vlSelf->rv32e__DOT__lsu_wb_rd)));
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__id_ex_csr_op = 0U;
        vlSelf->rv32e__DOT__id_ex_zimm = 0U;
        vlSelf->rv32e__DOT__ex_lsu_csr_rdata = 0U;
        vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition = 1U;
        vlSelf->rv32e__DOT__id_ex_pc2 = 0U;
        vlSelf->rv32e__DOT__id_ex_predict_target = 0U;
        vlSelf->rv32e__DOT__id_wb_csr_addr2 = 0U;
        vlSelf->rv32e__DOT__id_ex_predict_taken = 0U;
        vlSelf->rv32e__DOT__id_ex_func3 = 0U;
        vlSelf->rv32e__DOT__id_wb_csr_addr1 = 0U;
        vlSelf->rv32e__DOT__id_ex_shamt = 0U;
        vlSelf->rv32e__DOT__ex_lsu_csr = 0U;
        vlSelf->rv32e__DOT__ex_lsu_csr_mret = 0U;
        vlSelf->rv32e__DOT__ex_lsu_csr_ecall = 0U;
        vlSelf->rv32e__DOT__id_ex_alu_op = 0U;
        vlSelf->rv32e__DOT__id_ex_jal = 0U;
        vlSelf->rv32e__DOT__id_ex_jalr = 0U;
        vlSelf->rv32e__DOT__ex_lsu_imm = 0U;
        vlSelf->rv32e__DOT__id_wb_rs2 = 0U;
        vlSelf->rv32e__DOT__ex_lsu_forward_las = 0U;
        vlSelf->rv32e__DOT__wb_valid = 0U;
        vlSelf->rv32e__DOT__ex_lsu_opcode = 0U;
        vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1 = 0U;
        vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2 = 0U;
        vlSelf->rv32e__DOT__ex_lsu_csr_wen1 = 0U;
        vlSelf->rv32e__DOT__ex_lsu_csr_wen2 = 0U;
        vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1 = 0U;
        vlSelf->rv32e__DOT__ex_lsu_inst = 0U;
        vlSelf->rv32e__DOT__ex_lsu_pc = 0U;
        vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2 = 0U;
    } else {
        if (((IData)(vlSelf->rv32e__DOT__IF_valid) 
             & (IData)(vlSelf->rv32e__DOT__id_ready))) {
            vlSelf->rv32e__DOT__id_ex_csr_op = 0U;
            vlSelf->rv32e__DOT__id_ex_zimm = (0x1fU 
                                              & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                 >> 0xfU));
            vlSelf->rv32e__DOT__id_ex_pc2 = vlSelf->rv32e__DOT__IF_ID_pc2;
            vlSelf->rv32e__DOT__id_ex_predict_target 
                = vlSelf->rv32e__DOT__predict_target;
            vlSelf->rv32e__DOT__id_ex_predict_taken 
                = ((IData)(vlSelf->rv32e__DOT__predict_taken) 
                   & (((0x18U == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                           >> 2U))) 
                       | (IData)((0x67U == (0x707fU 
                                            & vlSelf->rv32e__DOT__IF_ID_inst)))) 
                      | (0x6fU == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst))));
            vlSelf->rv32e__DOT__id_ex_func3 = (7U & 
                                               (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 0xcU));
            vlSelf->rv32e__DOT__id_ex_shamt = (0x3fU 
                                               & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 0x14U));
            vlSelf->rv32e__DOT__id_ex_alu_op = 0U;
            vlSelf->rv32e__DOT__id_ex_jal = 0U;
            vlSelf->rv32e__DOT__id_ex_jalr = 0U;
            if ((0x40U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                if ((0x20U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                    if ((0x10U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                        if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                          >> 2U)))) {
                                if ((0x73U == (0x7fU 
                                               & vlSelf->rv32e__DOT__IF_ID_inst))) {
                                    if ((0x4000U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                                        if ((0x2000U 
                                             & vlSelf->rv32e__DOT__IF_ID_inst)) {
                                            vlSelf->rv32e__DOT__id_ex_csr_op 
                                                = (
                                                   (0x1000U 
                                                    & vlSelf->rv32e__DOT__IF_ID_inst)
                                                    ? 3U
                                                    : 2U);
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->rv32e__DOT__IF_ID_inst)) {
                                            vlSelf->rv32e__DOT__id_ex_csr_op = 1U;
                                        }
                                    } else if ((0x2000U 
                                                & vlSelf->rv32e__DOT__IF_ID_inst)) {
                                        vlSelf->rv32e__DOT__id_ex_csr_op 
                                            = ((0x1000U 
                                                & vlSelf->rv32e__DOT__IF_ID_inst)
                                                ? 3U
                                                : 2U);
                                    } else if ((0x1000U 
                                                & vlSelf->rv32e__DOT__IF_ID_inst)) {
                                        vlSelf->rv32e__DOT__id_ex_csr_op = 1U;
                                    }
                                    if ((0x30200073U 
                                         == vlSelf->rv32e__DOT__IF_ID_inst)) {
                                        vlSelf->rv32e__DOT__id_wb_csr_addr2 = 0x341U;
                                        vlSelf->rv32e__DOT__id_wb_csr_addr1 = 0x300U;
                                    } else {
                                        vlSelf->rv32e__DOT__id_wb_csr_addr2 = 0U;
                                        vlSelf->rv32e__DOT__id_wb_csr_addr1 
                                            = ((0x73U 
                                                == vlSelf->rv32e__DOT__IF_ID_inst)
                                                ? 0x305U
                                                : (vlSelf->rv32e__DOT__IF_ID_inst 
                                                   >> 0x14U));
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                  >> 4U)))) {
                        if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                          >> 2U)))) {
                                if ((0x4000U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                                    vlSelf->rv32e__DOT__id_ex_alu_op 
                                        = ((0x2000U 
                                            & vlSelf->rv32e__DOT__IF_ID_inst)
                                            ? 6U : 7U);
                                } else if ((1U & (~ 
                                                  (vlSelf->rv32e__DOT__IF_ID_inst 
                                                   >> 0xdU)))) {
                                    vlSelf->rv32e__DOT__id_ex_alu_op = 1U;
                                }
                            }
                            if ((4U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                                if ((0U == (7U & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 0xcU)))) {
                                    vlSelf->rv32e__DOT__id_ex_jalr = 1U;
                                }
                            }
                        }
                        if ((8U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                            if ((4U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                                vlSelf->rv32e__DOT__id_ex_jal = 1U;
                            }
                        }
                    }
                }
            } else if ((0x20U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                if ((0x10U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                    if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                      >> 2U)))) {
                            vlSelf->rv32e__DOT__id_ex_alu_op 
                                = ((0x4000U & vlSelf->rv32e__DOT__IF_ID_inst)
                                    ? ((0x2000U & vlSelf->rv32e__DOT__IF_ID_inst)
                                        ? ((0x1000U 
                                            & vlSelf->rv32e__DOT__IF_ID_inst)
                                            ? 2U : 3U)
                                        : ((0x1000U 
                                            & vlSelf->rv32e__DOT__IF_ID_inst)
                                            ? ((0x40000000U 
                                                & vlSelf->rv32e__DOT__IF_ID_inst)
                                                ? 8U
                                                : 9U)
                                            : 4U)) : 
                                   ((0x2000U & vlSelf->rv32e__DOT__IF_ID_inst)
                                     ? ((0x1000U & vlSelf->rv32e__DOT__IF_ID_inst)
                                         ? 6U : 7U)
                                     : ((0x1000U & vlSelf->rv32e__DOT__IF_ID_inst)
                                         ? 5U : ((0x40000000U 
                                                  & vlSelf->rv32e__DOT__IF_ID_inst)
                                                  ? 1U
                                                  : 0U))));
                        }
                    }
                }
            } else if ((0x10U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                              >> 3U)))) {
                    vlSelf->rv32e__DOT__id_ex_alu_op 
                        = ((4U & vlSelf->rv32e__DOT__IF_ID_inst)
                            ? 0U : ((0x4000U & vlSelf->rv32e__DOT__IF_ID_inst)
                                     ? ((0x2000U & vlSelf->rv32e__DOT__IF_ID_inst)
                                         ? ((0x1000U 
                                             & vlSelf->rv32e__DOT__IF_ID_inst)
                                             ? 2U : 3U)
                                         : ((0x1000U 
                                             & vlSelf->rv32e__DOT__IF_ID_inst)
                                             ? ((0x40000000U 
                                                 & vlSelf->rv32e__DOT__IF_ID_inst)
                                                 ? 8U
                                                 : 9U)
                                             : 4U))
                                     : ((0x2000U & vlSelf->rv32e__DOT__IF_ID_inst)
                                         ? ((0x1000U 
                                             & vlSelf->rv32e__DOT__IF_ID_inst)
                                             ? 6U : 7U)
                                         : ((0x1000U 
                                             & vlSelf->rv32e__DOT__IF_ID_inst)
                                             ? 5U : 0U))));
                }
            } else if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                              >> 2U)))) {
                    vlSelf->rv32e__DOT__id_ex_alu_op = 0U;
                }
            }
            vlSelf->rv32e__DOT__id_wb_rs2 = (0x1fU 
                                             & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 0x14U));
        }
        if (((IData)(vlSelf->rv32e__DOT__id_valid) 
             & (IData)(vlSelf->rv32e__DOT__ex_ready))) {
            vlSelf->rv32e__DOT__ex_lsu_csr_rdata = vlSelf->rv32e__DOT__wb_ex_csr_num1;
            vlSelf->rv32e__DOT__ex_lsu_csr = vlSelf->rv32e__DOT__id_ex_csr;
            vlSelf->rv32e__DOT__ex_lsu_csr_mret = vlSelf->rv32e__DOT__id_ex_csr_mret;
            vlSelf->rv32e__DOT__ex_lsu_csr_ecall = vlSelf->rv32e__DOT__id_ex_csr_ecall;
            vlSelf->rv32e__DOT__ex_lsu_imm = vlSelf->rv32e__DOT__id_ex_imm;
            vlSelf->rv32e__DOT__ex_lsu_forward_las 
                = ((IData)(vlSelf->rv32e__DOT__id_ex_MemWrite) 
                   & ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                      & ((IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite) 
                         & ((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                            & ((0U != (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)) 
                               & (((IData)(vlSelf->rv32e__DOT__ex_lsu_rd) 
                                   != (IData)(vlSelf->rv32e__DOT__id_wb_rs1)) 
                                  & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0)))))));
            vlSelf->rv32e__DOT__ex_lsu_opcode = vlSelf->rv32e__DOT__id_ex_opcode;
            vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1 
                = vlSelf->rv32e__DOT__exu__DOT__csr_write_data;
            vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2 
                = vlSelf->rv32e__DOT__id_ex_csr_wr_addr2;
            vlSelf->rv32e__DOT__ex_lsu_csr_wen1 = vlSelf->rv32e__DOT__id_ex_csr_wen1;
            vlSelf->rv32e__DOT__ex_lsu_csr_wen2 = vlSelf->rv32e__DOT__id_ex_csr_wen2;
            vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1 
                = vlSelf->rv32e__DOT__id_ex_csr_wr_addr1;
            vlSelf->rv32e__DOT__ex_lsu_inst = vlSelf->rv32e__DOT__id_ex_inst;
            vlSelf->rv32e__DOT__ex_lsu_pc = vlSelf->rv32e__DOT__id_ex_pc;
            vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2 
                = ((IData)(vlSelf->rv32e__DOT__id_ex_csr_ecall)
                    ? vlSelf->rv32e__DOT__id_ex_pc : 0U);
        }
        if (vlSelf->rv32e__DOT__ex_flush) {
            vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition = 0U;
        } else if (vlSelf->rv32e__DOT__id_ready) {
            vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition = 1U;
        }
        if (((IData)(vlSelf->rv32e__DOT__lsu_wb_valid) 
             & (~ (IData)(vlSelf->rv32e__DOT__wbu__DOT__flush)))) {
            vlSelf->rv32e__DOT__wb_valid = 1U;
            vlSelf->rv32e__DOT__wbu__DOT__flush = vlSelf->rv32e__DOT__lsu_wb_flush;
        } else {
            vlSelf->rv32e__DOT__wb_valid = 0U;
            vlSelf->rv32e__DOT__wbu__DOT__flush = vlSelf->rv32e__DOT__lsu_wb_flush;
        }
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
        vlSelf->rv32e__DOT__id_ex_csr = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_mret = 0U;
        vlSelf->rv32e__DOT__id_ex_imm = 0U;
        vlSelf->rv32e__DOT__id_wb_rs1 = 0U;
        vlSelf->rv32e__DOT__ex_lsu_RegWrite = 0U;
        vlSelf->rv32e__DOT__ex_lsu_rd = 0U;
        vlSelf->rv32e__DOT__id_ex_opcode = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_wr_addr2 = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_wen1 = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_wen2 = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_wr_addr1 = 0U;
        vlSelf->rv32e__DOT__id_ex_inst = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_ecall = 0U;
        vlSelf->rv32e__DOT__id_ex_pc = 0U;
        vlSelf->rv32e__DOT__ex_lsu_src2 = 0U;
        vlSelf->rv32e__DOT__ex_lsu_MemLen = 0U;
        vlSelf->rv32e__DOT__ex_lsu_process_result = 0U;
        vlSelf->rv32e__DOT__ex_lsu_MemWrite = 0U;
        vlSelf->rv32e__DOT__ex_lsu_MemRead = 0U;
        vlSelf->rv32e__DOT__id_ex_RegWrite = 0U;
        vlSelf->rv32e__DOT__id_ex_rd = 0U;
        vlSelf->rv32e__DOT__id_ex_MemLen = 0U;
        vlSelf->rv32e__DOT__id_ex_MemWrite = 0U;
        vlSelf->rv32e__DOT__id_ex_MemRead = 0U;
    } else {
        if (((IData)(vlSelf->rv32e__DOT__id_valid) 
             & (IData)(vlSelf->rv32e__DOT__ex_ready))) {
            vlSelf->rv32e__DOT__ex_lsu_RegWrite = vlSelf->rv32e__DOT__id_ex_RegWrite;
            vlSelf->rv32e__DOT__ex_lsu_rd = vlSelf->rv32e__DOT__id_ex_rd;
            vlSelf->rv32e__DOT__ex_lsu_src2 = vlSelf->rv32e__DOT__exu__DOT__src2;
            vlSelf->rv32e__DOT__ex_lsu_MemLen = vlSelf->rv32e__DOT__id_ex_MemLen;
            vlSelf->rv32e__DOT__ex_lsu_process_result 
                = vlSelf->rv32e__DOT__exu__DOT__process_result;
            vlSelf->rv32e__DOT__ex_lsu_MemWrite = vlSelf->rv32e__DOT__id_ex_MemWrite;
            vlSelf->rv32e__DOT__ex_lsu_MemRead = vlSelf->rv32e__DOT__id_ex_MemRead;
        }
        if (((IData)(vlSelf->rv32e__DOT__IF_valid) 
             & (IData)(vlSelf->rv32e__DOT__id_ready))) {
            vlSelf->rv32e__DOT__id_ex_csr = 0U;
            vlSelf->rv32e__DOT__id_ex_csr_mret = 0U;
            vlSelf->rv32e__DOT__id_ex_imm = 0U;
            vlSelf->rv32e__DOT__id_wb_rs1 = (0x1fU 
                                             & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 0xfU));
            vlSelf->rv32e__DOT__id_ex_opcode = (0x7fU 
                                                & vlSelf->rv32e__DOT__IF_ID_inst);
            vlSelf->rv32e__DOT__id_ex_csr_wen1 = 0U;
            vlSelf->rv32e__DOT__id_ex_csr_wen2 = 0U;
            vlSelf->rv32e__DOT__id_ex_inst = vlSelf->rv32e__DOT__IF_ID_inst;
            vlSelf->rv32e__DOT__id_ex_csr_ecall = 0U;
            vlSelf->rv32e__DOT__id_ex_pc = vlSelf->rv32e__DOT__IF_ID_pc;
            vlSelf->rv32e__DOT__id_ex_RegWrite = 0U;
            if ((0x40U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                if ((0x20U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                    if ((0x10U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                        if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                          >> 2U)))) {
                                if ((0x73U == (0x7fU 
                                               & vlSelf->rv32e__DOT__IF_ID_inst))) {
                                    vlSelf->rv32e__DOT__id_ex_csr = 1U;
                                    if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->rv32e__DOT__IF_ID_inst 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->rv32e__DOT__IF_ID_inst 
                                                     >> 0xcU)))) {
                                                if (
                                                    (0x73U 
                                                     != vlSelf->rv32e__DOT__IF_ID_inst)) {
                                                    if (
                                                        (0x30200073U 
                                                         == vlSelf->rv32e__DOT__IF_ID_inst)) {
                                                        vlSelf->rv32e__DOT__id_ex_csr_mret = 1U;
                                                    }
                                                }
                                                if (
                                                    (0x73U 
                                                     == vlSelf->rv32e__DOT__IF_ID_inst)) {
                                                    vlSelf->rv32e__DOT__id_ex_csr_wen2 = 1U;
                                                    vlSelf->rv32e__DOT__id_ex_csr_ecall = 1U;
                                                }
                                            }
                                        }
                                    }
                                    if ((0x4000U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                                        if ((0x2000U 
                                             & vlSelf->rv32e__DOT__IF_ID_inst)) {
                                            vlSelf->rv32e__DOT__id_ex_imm 
                                                = (
                                                   (0x1000U 
                                                    & vlSelf->rv32e__DOT__IF_ID_inst)
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                       >> 0xfU))
                                                    : 
                                                   (0x1fU 
                                                    & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                       >> 0xfU)));
                                            vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->rv32e__DOT__IF_ID_inst)) {
                                            vlSelf->rv32e__DOT__id_ex_imm 
                                                = (0x1fU 
                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                      >> 0xfU));
                                            vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                                        }
                                    } else {
                                        if ((1U & (~ 
                                                   (vlSelf->rv32e__DOT__IF_ID_inst 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->rv32e__DOT__IF_ID_inst 
                                                     >> 0xcU)))) {
                                                if (
                                                    (0x73U 
                                                     == vlSelf->rv32e__DOT__IF_ID_inst)) {
                                                    vlSelf->rv32e__DOT__id_ex_imm = 0U;
                                                } else if (
                                                           (0x30200073U 
                                                            == vlSelf->rv32e__DOT__IF_ID_inst)) {
                                                    vlSelf->rv32e__DOT__id_ex_imm = 0U;
                                                }
                                            }
                                        }
                                        if ((0x2000U 
                                             & vlSelf->rv32e__DOT__IF_ID_inst)) {
                                            vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->rv32e__DOT__IF_ID_inst)) {
                                            vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                                        }
                                    }
                                    if ((0x73U == vlSelf->rv32e__DOT__IF_ID_inst)) {
                                        vlSelf->rv32e__DOT__id_ex_csr_wr_addr2 = 0x341U;
                                        vlSelf->rv32e__DOT__id_ex_csr_wr_addr1 = 0x342U;
                                    } else {
                                        vlSelf->rv32e__DOT__id_ex_csr_wr_addr2 = 0U;
                                        vlSelf->rv32e__DOT__id_ex_csr_wr_addr1 
                                            = ((0x30200073U 
                                                == vlSelf->rv32e__DOT__IF_ID_inst)
                                                ? 0x300U
                                                : (vlSelf->rv32e__DOT__IF_ID_inst 
                                                   >> 0x14U));
                                    }
                                    vlSelf->rv32e__DOT__id_ex_csr_wen1 = 1U;
                                }
                            }
                        }
                    } else if ((8U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                        if ((4U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                            vlSelf->rv32e__DOT__id_ex_imm 
                                = vlSelf->rv32e__DOT__idu__DOT__immJ;
                            vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                        }
                    } else if ((4U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                        if ((0U == (7U & (vlSelf->rv32e__DOT__IF_ID_inst 
                                          >> 0xcU)))) {
                            vlSelf->rv32e__DOT__id_ex_imm 
                                = vlSelf->rv32e__DOT__idu__DOT__immI;
                            vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                        }
                    } else {
                        vlSelf->rv32e__DOT__id_ex_imm 
                            = (((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                     >> 7U)))));
                    }
                }
            } else if ((0x20U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                if ((0x10U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                    if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                  >> 3U)))) {
                        vlSelf->rv32e__DOT__id_ex_imm 
                            = ((4U & vlSelf->rv32e__DOT__IF_ID_inst)
                                ? (0xfffff000U & vlSelf->rv32e__DOT__IF_ID_inst)
                                : 0U);
                        vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                    }
                } else if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                     >> 3U)))) {
                    if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                  >> 2U)))) {
                        vlSelf->rv32e__DOT__id_ex_imm 
                            = (((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 7U))));
                    }
                }
            } else if ((0x10U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                              >> 3U)))) {
                    vlSelf->rv32e__DOT__id_ex_imm = 
                        ((4U & vlSelf->rv32e__DOT__IF_ID_inst)
                          ? (0xfffff000U & vlSelf->rv32e__DOT__IF_ID_inst)
                          : vlSelf->rv32e__DOT__idu__DOT__immI);
                    vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                }
            } else if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                              >> 2U)))) {
                    vlSelf->rv32e__DOT__id_ex_imm = vlSelf->rv32e__DOT__idu__DOT__immI;
                    vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                }
            }
            vlSelf->rv32e__DOT__id_ex_rd = (0x1fU & 
                                            (vlSelf->rv32e__DOT__IF_ID_inst 
                                             >> 7U));
            vlSelf->rv32e__DOT__id_ex_MemLen = 2U;
            vlSelf->rv32e__DOT__id_ex_MemWrite = 0U;
            vlSelf->rv32e__DOT__id_ex_MemRead = 0U;
            if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                          >> 6U)))) {
                if ((0x20U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                    if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                  >> 4U)))) {
                        if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                          >> 2U)))) {
                                if ((2U == (7U & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 0xcU)))) {
                                    vlSelf->rv32e__DOT__id_ex_MemLen = 2U;
                                } else if ((1U == (7U 
                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                      >> 0xcU)))) {
                                    vlSelf->rv32e__DOT__id_ex_MemLen = 1U;
                                } else if ((0U == (7U 
                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                      >> 0xcU)))) {
                                    vlSelf->rv32e__DOT__id_ex_MemLen = 4U;
                                }
                                vlSelf->rv32e__DOT__id_ex_MemWrite = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                     >> 4U)))) {
                    if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                      >> 2U)))) {
                            if ((0x4000U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                                if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                              >> 0xdU)))) {
                                    vlSelf->rv32e__DOT__id_ex_MemLen 
                                        = ((0x1000U 
                                            & vlSelf->rv32e__DOT__IF_ID_inst)
                                            ? 3U : 0U);
                                }
                            } else if ((0x2000U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                                if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                              >> 0xcU)))) {
                                    vlSelf->rv32e__DOT__id_ex_MemLen = 2U;
                                }
                            } else {
                                vlSelf->rv32e__DOT__id_ex_MemLen 
                                    = ((0x1000U & vlSelf->rv32e__DOT__IF_ID_inst)
                                        ? 1U : 4U);
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                              >> 5U)))) {
                    if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                  >> 4U)))) {
                        if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                          >> 2U)))) {
                                vlSelf->rv32e__DOT__id_ex_MemRead = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->rv32e__DOT__wb_ex_csr_num1 = vlSelf->rv32e__DOT__wbu__DOT__CSR
        [vlSelf->rv32e__DOT__id_wb_csr_addr1];
    vlSelf->rv32e__DOT__lsu_wb_valid = __Vdly__rv32e__DOT__lsu_wb_valid;
    vlSelf->rv32e__DOT__lsu__DOT__l_MemLen = __Vdly__rv32e__DOT__lsu__DOT__l_MemLen;
    vlSelf->rv32e__DOT__lsu_ex_ready = __Vdly__rv32e__DOT__lsu_ex_ready;
    vlSelf->rv32e__DOT__ex_lsu_valid = __Vdly__rv32e__DOT__ex_lsu_valid;
    vlSelf->rv32e__DOT__lsu_wb_flush = ((~ (IData)(vlSelf->reset)) 
                                        & (IData)(vlSelf->rv32e__DOT__ex_flush));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h3556a05f__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h384f4e33__0) 
           & (((IData)(vlSelf->rv32e__DOT__id_wb_rs2) 
               == (IData)(vlSelf->rv32e__DOT__lsu_wb_rd)) 
              & (IData)(vlSelf->rv32e__DOT__lsu_wb_valid)));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h666fa1ae__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h384f4e33__0) 
           & (((IData)(vlSelf->rv32e__DOT__id_wb_rs1) 
               == (IData)(vlSelf->rv32e__DOT__lsu_wb_rd)) 
              & (IData)(vlSelf->rv32e__DOT__lsu_wb_valid)));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0 
        = ((IData)(vlSelf->rv32e__DOT__ex_lsu_rd) == (IData)(vlSelf->rv32e__DOT__id_wb_rs2));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hc613623f__0 
        = (((IData)(vlSelf->rv32e__DOT__ex_lsu_rd) 
            == (IData)(vlSelf->rv32e__DOT__id_wb_rs1)) 
           & (IData)(vlSelf->rv32e__DOT__ex_lsu_valid));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h69af1a50__0 
        = ((IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite) 
           & (0U != (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)));
    vlSelf->rv32e__DOT__id_valid = __Vdly__rv32e__DOT__id_valid;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h6c7e3f9b__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0) 
           & (IData)(vlSelf->rv32e__DOT__ex_lsu_valid));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h9653a62d__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h69af1a50__0) 
           & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hc613623f__0));
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
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hea419643__0 
        = ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
           & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h69af1a50__0));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h69af1a50__0) 
           & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h6c7e3f9b__0));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h80abf685__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hea419643__0) 
           & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h6c7e3f9b__0));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h295e95e1__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hea419643__0) 
           & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hc613623f__0));
    vlSelf->rv32e__DOT__exu__DOT__src2 = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0)
                                           ? vlSelf->rv32e__DOT__ex_lsu_process_result
                                           : (((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h3556a05f__0) 
                                               | (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h80abf685__0))
                                               ? vlSelf->rv32e__DOT__lsu_wb_write_rd_data
                                               : ((0U 
                                                   == (IData)(vlSelf->rv32e__DOT__id_wb_rs2))
                                                   ? 0U
                                                   : 
                                                  vlSelf->rv32e__DOT__wbu__DOT__regs
                                                  [vlSelf->rv32e__DOT__id_wb_rs2])));
    vlSelf->rv32e__DOT__exu__DOT__load_use_flag = (
                                                   (((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hb53dc38f__0) 
                                                     & ((IData)(vlSelf->rv32e__DOT__id_wb_rs1) 
                                                        == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr))) 
                                                    << 3U) 
                                                   | ((((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hb53dc38f__0) 
                                                        & ((IData)(vlSelf->rv32e__DOT__id_wb_rs2) 
                                                           == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr))) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h295e95e1__0) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h80abf685__0))));
    vlSelf->rv32e__DOT__exu__DOT__src1 = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h9653a62d__0)
                                           ? vlSelf->rv32e__DOT__ex_lsu_process_result
                                           : (((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h666fa1ae__0) 
                                               | (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h295e95e1__0))
                                               ? vlSelf->rv32e__DOT__lsu_wb_write_rd_data
                                               : ((0U 
                                                   == (IData)(vlSelf->rv32e__DOT__id_wb_rs1))
                                                   ? 0U
                                                   : 
                                                  vlSelf->rv32e__DOT__wbu__DOT__regs
                                                  [vlSelf->rv32e__DOT__id_wb_rs1])));
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
    vlSelf->rv32e__DOT__exu__DOT__csr_write_data = 
        ((((((((((1U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                 & (1U == (IData)(vlSelf->rv32e__DOT__id_ex_func3))) 
                | ((3U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                   & (3U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))) 
               | ((2U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                  & (2U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))) 
              | ((1U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                 & (5U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))) 
             | ((3U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                & (7U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))) 
            | ((2U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
               & (6U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))) 
           | (IData)(vlSelf->rv32e__DOT__id_ex_csr_ecall)) 
          | (IData)(vlSelf->rv32e__DOT__id_ex_csr_mret))
          ? (((1U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
              & (1U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
              ? vlSelf->rv32e__DOT__exu__DOT__src1 : 
             (((3U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
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
                                   ? 0xbU : (0x80U 
                                             | ((0xffffe7f7U 
                                                 & vlSelf->rv32e__DOT__wb_ex_csr_num1) 
                                                | (8U 
                                                   & (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                                      >> 4U)))))))))))
          : 0U);
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
}

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__1(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vdly__rv32e__DOT__IF_ID_pc;
    __Vdly__rv32e__DOT__IF_ID_pc = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__IF_ID_pc2;
    __Vdly__rv32e__DOT__IF_ID_pc2 = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__ifu__DOT__check;
    __Vdly__rv32e__DOT__ifu__DOT__check = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__correct_predictions;
    __Vdly__rv32e__DOT__correct_predictions = 0;
    CData/*3:0*/ __Vdly__rv32e__DOT__lbpu__DOT__ghr;
    __Vdly__rv32e__DOT__lbpu__DOT__ghr = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__total_predictions;
    __Vdly__rv32e__DOT__total_predictions = 0;
    CData/*7:0*/ __Vdlyvdim0__rv32e__DOT__lbpu__DOT__pht__v0;
    __Vdlyvdim0__rv32e__DOT__lbpu__DOT__pht__v0 = 0;
    CData/*1:0*/ __Vdlyvval__rv32e__DOT__lbpu__DOT__pht__v0;
    __Vdlyvval__rv32e__DOT__lbpu__DOT__pht__v0 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__lbpu__DOT__pht__v0;
    __Vdlyvset__rv32e__DOT__lbpu__DOT__pht__v0 = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__lbpu__DOT__ras_ptr;
    __Vdly__rv32e__DOT__lbpu__DOT__ras_ptr = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__lbpu__DOT__ras__v0;
    __Vdlyvset__rv32e__DOT__lbpu__DOT__ras__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_valid__v0;
    __Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_valid__v0 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__lbpu__DOT__btb_valid__v0;
    __Vdlyvset__rv32e__DOT__lbpu__DOT__btb_valid__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_tag__v0;
    __Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_tag__v0 = 0;
    IData/*21:0*/ __Vdlyvval__rv32e__DOT__lbpu__DOT__btb_tag__v0;
    __Vdlyvval__rv32e__DOT__lbpu__DOT__btb_tag__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_target__v0;
    __Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_target__v0 = 0;
    IData/*31:0*/ __Vdlyvval__rv32e__DOT__lbpu__DOT__btb_target__v0;
    __Vdlyvval__rv32e__DOT__lbpu__DOT__btb_target__v0 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__lbpu__DOT__btb_target__v0;
    __Vdlyvset__rv32e__DOT__lbpu__DOT__btb_target__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__rv32e__DOT__lbpu__DOT__recursion_depth__v8;
    __Vdlyvdim0__rv32e__DOT__lbpu__DOT__recursion_depth__v8 = 0;
    CData/*3:0*/ __Vdlyvval__rv32e__DOT__lbpu__DOT__recursion_depth__v8;
    __Vdlyvval__rv32e__DOT__lbpu__DOT__recursion_depth__v8 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__lbpu__DOT__recursion_depth__v8;
    __Vdlyvset__rv32e__DOT__lbpu__DOT__recursion_depth__v8 = 0;
    CData/*2:0*/ __Vdlyvdim0__rv32e__DOT__lbpu__DOT__ras__v8;
    __Vdlyvdim0__rv32e__DOT__lbpu__DOT__ras__v8 = 0;
    IData/*31:0*/ __Vdlyvval__rv32e__DOT__lbpu__DOT__ras__v8;
    __Vdlyvval__rv32e__DOT__lbpu__DOT__ras__v8 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__lbpu__DOT__ras__v8;
    __Vdlyvset__rv32e__DOT__lbpu__DOT__ras__v8 = 0;
    CData/*2:0*/ __Vdlyvdim0__rv32e__DOT__lbpu__DOT__ras_call_pc__v8;
    __Vdlyvdim0__rv32e__DOT__lbpu__DOT__ras_call_pc__v8 = 0;
    IData/*31:0*/ __Vdlyvval__rv32e__DOT__lbpu__DOT__ras_call_pc__v8;
    __Vdlyvval__rv32e__DOT__lbpu__DOT__ras_call_pc__v8 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__lbpu__DOT__ras_call_pc__v8;
    __Vdlyvset__rv32e__DOT__lbpu__DOT__ras_call_pc__v8 = 0;
    CData/*2:0*/ __Vdlyvdim0__rv32e__DOT__lbpu__DOT__recursion_depth__v9;
    __Vdlyvdim0__rv32e__DOT__lbpu__DOT__recursion_depth__v9 = 0;
    CData/*2:0*/ __Vdlyvdim0__rv32e__DOT__lbpu__DOT__recursion_depth__v10;
    __Vdlyvdim0__rv32e__DOT__lbpu__DOT__recursion_depth__v10 = 0;
    CData/*3:0*/ __Vdlyvval__rv32e__DOT__lbpu__DOT__recursion_depth__v10;
    __Vdlyvval__rv32e__DOT__lbpu__DOT__recursion_depth__v10 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__lbpu__DOT__recursion_depth__v10;
    __Vdlyvset__rv32e__DOT__lbpu__DOT__recursion_depth__v10 = 0;
    CData/*7:0*/ __Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_valid__v1;
    __Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_valid__v1 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__lbpu__DOT__btb_valid__v1;
    __Vdlyvset__rv32e__DOT__lbpu__DOT__btb_valid__v1 = 0;
    CData/*7:0*/ __Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_tag__v1;
    __Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_tag__v1 = 0;
    IData/*21:0*/ __Vdlyvval__rv32e__DOT__lbpu__DOT__btb_tag__v1;
    __Vdlyvval__rv32e__DOT__lbpu__DOT__btb_tag__v1 = 0;
    CData/*7:0*/ __Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_target__v1;
    __Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_target__v1 = 0;
    IData/*31:0*/ __Vdlyvval__rv32e__DOT__lbpu__DOT__btb_target__v1;
    __Vdlyvval__rv32e__DOT__lbpu__DOT__btb_target__v1 = 0;
    // Body
    __Vdly__rv32e__DOT__total_predictions = vlSelf->rv32e__DOT__total_predictions;
    __Vdly__rv32e__DOT__correct_predictions = vlSelf->rv32e__DOT__correct_predictions;
    __Vdly__rv32e__DOT__lbpu__DOT__ghr = vlSelf->rv32e__DOT__lbpu__DOT__ghr;
    __Vdlyvset__rv32e__DOT__lbpu__DOT__pht__v0 = 0U;
    __Vdly__rv32e__DOT__IF_ID_pc2 = vlSelf->rv32e__DOT__IF_ID_pc2;
    __Vdly__rv32e__DOT__ifu__DOT__check = vlSelf->rv32e__DOT__ifu__DOT__check;
    __Vdly__rv32e__DOT__IF_ID_pc = vlSelf->rv32e__DOT__IF_ID_pc;
    __Vdlyvset__rv32e__DOT__lbpu__DOT__recursion_depth__v8 = 0U;
    __Vdlyvset__rv32e__DOT__lbpu__DOT__recursion_depth__v10 = 0U;
    __Vdlyvset__rv32e__DOT__lbpu__DOT__btb_target__v0 = 0U;
    __Vdlyvset__rv32e__DOT__lbpu__DOT__ras__v8 = 0U;
    __Vdlyvset__rv32e__DOT__lbpu__DOT__ras_call_pc__v8 = 0U;
    __Vdly__rv32e__DOT__lbpu__DOT__ras_ptr = vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr;
    __Vdlyvset__rv32e__DOT__lbpu__DOT__ras__v0 = 0U;
    __Vdlyvset__rv32e__DOT__lbpu__DOT__btb_valid__v0 = 0U;
    __Vdlyvset__rv32e__DOT__lbpu__DOT__btb_valid__v1 = 0U;
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__lbpu__DOT__unnamedblk3__DOT__i = 8U;
        vlSelf->rv32e__DOT__lbpu__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelf->rv32e__DOT__lbpu__DOT__unnamedblk1__DOT__i)) {
            vlSelf->rv32e__DOT__lbpu__DOT__btb_valid[(0xffU 
                                                      & vlSelf->rv32e__DOT__lbpu__DOT__unnamedblk1__DOT__i)] = 0U;
            vlSelf->rv32e__DOT__lbpu__DOT__btb_tag[(0xffU 
                                                    & vlSelf->rv32e__DOT__lbpu__DOT__unnamedblk1__DOT__i)] = 0U;
            vlSelf->rv32e__DOT__lbpu__DOT__btb_target[(0xffU 
                                                       & vlSelf->rv32e__DOT__lbpu__DOT__unnamedblk1__DOT__i)] = 0U;
            vlSelf->rv32e__DOT__lbpu__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelf->rv32e__DOT__lbpu__DOT__unnamedblk1__DOT__i);
        }
        __Vdly__rv32e__DOT__total_predictions = 0U;
        __Vdly__rv32e__DOT__correct_predictions = 0U;
        __Vdly__rv32e__DOT__lbpu__DOT__ghr = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelf->rv32e__DOT__lbpu__DOT__unnamedblk2__DOT__i)) {
            vlSelf->rv32e__DOT__lbpu__DOT__pht[(0xffU 
                                                & vlSelf->rv32e__DOT__lbpu__DOT__unnamedblk2__DOT__i)] = 1U;
            vlSelf->rv32e__DOT__lbpu__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelf->rv32e__DOT__lbpu__DOT__unnamedblk2__DOT__i);
        }
        __Vdly__rv32e__DOT__IF_ID_pc = 0x80000000U;
        __Vdly__rv32e__DOT__IF_ID_pc2 = 0x80000000U;
        __Vdly__rv32e__DOT__ifu__DOT__check = 1U;
        __Vdly__rv32e__DOT__lbpu__DOT__ras_ptr = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__ras_overflow = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__ras_underflow = 0U;
        __Vdlyvset__rv32e__DOT__lbpu__DOT__ras__v0 = 1U;
    } else {
        if (vlSelf->rv32e__DOT__ex_bpu_update) {
            __Vdly__rv32e__DOT__total_predictions = 
                ((IData)(1U) + vlSelf->rv32e__DOT__total_predictions);
            if (vlSelf->rv32e__DOT__ex_bpu_correct) {
                __Vdly__rv32e__DOT__correct_predictions 
                    = ((IData)(1U) + vlSelf->rv32e__DOT__correct_predictions);
            }
            __Vdly__rv32e__DOT__lbpu__DOT__ghr = ((0xeU 
                                                   & ((IData)(vlSelf->rv32e__DOT__lbpu__DOT__ghr) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->rv32e__DOT__ex_bpu_taken));
            __Vdlyvval__rv32e__DOT__lbpu__DOT__pht__v0 
                = ((IData)(vlSelf->rv32e__DOT__ex_bpu_taken)
                    ? ((2U & vlSelf->rv32e__DOT__lbpu__DOT__pht
                        [vlSelf->rv32e__DOT__lbpu__DOT__pht_index_ex])
                        ? 3U : ((1U & vlSelf->rv32e__DOT__lbpu__DOT__pht
                                 [vlSelf->rv32e__DOT__lbpu__DOT__pht_index_ex])
                                 ? 2U : 1U)) : ((2U 
                                                 & vlSelf->rv32e__DOT__lbpu__DOT__pht
                                                 [vlSelf->rv32e__DOT__lbpu__DOT__pht_index_ex])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->rv32e__DOT__lbpu__DOT__pht
                                                  [vlSelf->rv32e__DOT__lbpu__DOT__pht_index_ex])
                                                  ? 2U
                                                  : 1U)
                                                 : 0U));
            __Vdlyvset__rv32e__DOT__lbpu__DOT__pht__v0 = 1U;
            __Vdlyvdim0__rv32e__DOT__lbpu__DOT__pht__v0 
                = vlSelf->rv32e__DOT__lbpu__DOT__pht_index_ex;
            if ((1U & (~ (IData)(vlSelf->rv32e__DOT__lbpu__DOT__btb_hit_ex)))) {
                __Vdlyvset__rv32e__DOT__lbpu__DOT__btb_valid__v0 = 1U;
                __Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_valid__v0 
                    = (0xffU & (vlSelf->rv32e__DOT__ex_bpu_pc 
                                >> 2U));
                __Vdlyvval__rv32e__DOT__lbpu__DOT__btb_tag__v0 
                    = (vlSelf->rv32e__DOT__ex_bpu_pc 
                       >> 0xaU);
                __Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_tag__v0 
                    = (0xffU & (vlSelf->rv32e__DOT__ex_bpu_pc 
                                >> 2U));
            }
            __Vdlyvval__rv32e__DOT__lbpu__DOT__btb_target__v0 
                = vlSelf->rv32e__DOT__ex_bpu_target;
            __Vdlyvset__rv32e__DOT__lbpu__DOT__btb_target__v0 = 1U;
            __Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_target__v0 
                = (0xffU & (vlSelf->rv32e__DOT__ex_bpu_pc 
                            >> 2U));
            if ((0x6fU == (0x7fU & vlSelf->rv32e__DOT__ex_bpu_pc))) {
                if (vlSelf->rv32e__DOT__lbpu__DOT__is_recursive_call) {
                    if (((0U < vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr) 
                         & (8U >= vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr))) {
                        __Vdlyvval__rv32e__DOT__lbpu__DOT__recursion_depth__v8 
                            = (0xfU & ((IData)(1U) 
                                       + vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth
                                       [(7U & (vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr 
                                               - (IData)(1U)))]));
                        __Vdlyvset__rv32e__DOT__lbpu__DOT__recursion_depth__v8 = 1U;
                        __Vdlyvdim0__rv32e__DOT__lbpu__DOT__recursion_depth__v8 
                            = (7U & (vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr 
                                     - (IData)(1U)));
                    }
                    vlSelf->rv32e__DOT__lbpu__DOT__ras_overflow = 0U;
                } else if ((8U > vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr)) {
                    __Vdlyvval__rv32e__DOT__lbpu__DOT__ras__v8 
                        = ((IData)(4U) + vlSelf->rv32e__DOT__ex_bpu_pc);
                    __Vdlyvset__rv32e__DOT__lbpu__DOT__ras__v8 = 1U;
                    __Vdlyvdim0__rv32e__DOT__lbpu__DOT__ras__v8 
                        = (7U & vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr);
                    vlSelf->rv32e__DOT__lbpu__DOT__ras_overflow = 0U;
                    __Vdlyvval__rv32e__DOT__lbpu__DOT__ras_call_pc__v8 
                        = vlSelf->rv32e__DOT__ex_bpu_pc;
                    __Vdlyvset__rv32e__DOT__lbpu__DOT__ras_call_pc__v8 = 1U;
                    __Vdlyvdim0__rv32e__DOT__lbpu__DOT__ras_call_pc__v8 
                        = (7U & vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr);
                    __Vdlyvdim0__rv32e__DOT__lbpu__DOT__recursion_depth__v9 
                        = (7U & vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr);
                    __Vdly__rv32e__DOT__lbpu__DOT__ras_ptr 
                        = ((IData)(1U) + vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr);
                } else {
                    vlSelf->rv32e__DOT__lbpu__DOT__ras_overflow = 1U;
                }
            } else if (((IData)((0x67U == (0x707fU 
                                           & vlSelf->rv32e__DOT__ex_bpu_pc))) 
                        & (IData)(vlSelf->rv32e__DOT__ex_bpu_taken))) {
                if ((0U < vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr)) {
                    if (vlSelf->rv32e__DOT__lbpu__DOT__is_recursive_call) {
                        __Vdlyvval__rv32e__DOT__lbpu__DOT__recursion_depth__v10 
                            = (0xfU & (vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth
                                       [(7U & (vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr 
                                               - (IData)(1U)))] 
                                       - (IData)(1U)));
                        __Vdlyvset__rv32e__DOT__lbpu__DOT__recursion_depth__v10 = 1U;
                        __Vdlyvdim0__rv32e__DOT__lbpu__DOT__recursion_depth__v10 
                            = (7U & (vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr 
                                     - (IData)(1U)));
                        if ((1U == vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth
                             [(7U & (vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr 
                                     - (IData)(1U)))])) {
                            __Vdly__rv32e__DOT__lbpu__DOT__ras_ptr 
                                = (vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr 
                                   - (IData)(1U));
                        }
                    } else {
                        __Vdly__rv32e__DOT__lbpu__DOT__ras_ptr 
                            = (vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr 
                               - (IData)(1U));
                    }
                    vlSelf->rv32e__DOT__lbpu__DOT__ras_underflow = 0U;
                } else {
                    __Vdlyvset__rv32e__DOT__lbpu__DOT__btb_valid__v1 = 1U;
                    __Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_valid__v1 
                        = (0xffU & (vlSelf->rv32e__DOT__ex_bpu_pc 
                                    >> 2U));
                    __Vdlyvval__rv32e__DOT__lbpu__DOT__btb_tag__v1 
                        = (vlSelf->rv32e__DOT__ex_bpu_pc 
                           >> 0xaU);
                    __Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_tag__v1 
                        = (0xffU & (vlSelf->rv32e__DOT__ex_bpu_pc 
                                    >> 2U));
                    __Vdlyvval__rv32e__DOT__lbpu__DOT__btb_target__v1 
                        = vlSelf->rv32e__DOT__ex_bpu_target;
                    __Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_target__v1 
                        = (0xffU & (vlSelf->rv32e__DOT__ex_bpu_pc 
                                    >> 2U));
                    vlSelf->rv32e__DOT__lbpu__DOT__ras_underflow = 1U;
                }
            } else {
                vlSelf->rv32e__DOT__lbpu__DOT__ras_overflow = 0U;
                vlSelf->rv32e__DOT__lbpu__DOT__ras_underflow = 0U;
            }
        }
        if (vlSelf->rv32e__DOT__ifu__DOT__check) {
            __Vdly__rv32e__DOT__IF_ID_pc = vlSelf->rv32e__DOT__IF_ID_pc;
            __Vdly__rv32e__DOT__IF_ID_pc2 = vlSelf->rv32e__DOT__IF_ID_pc2;
            __Vdly__rv32e__DOT__ifu__DOT__check = 0U;
        } else if (((IData)(vlSelf->rv32e__DOT__ex_flush) 
                    & (~ (IData)(vlSelf->rv32e__DOT__ifu__DOT__check)))) {
            __Vdly__rv32e__DOT__IF_ID_pc = vlSelf->rv32e__DOT__ex_flush_pc;
            __Vdly__rv32e__DOT__IF_ID_pc2 = vlSelf->rv32e__DOT__ex_flush_pc;
        } else if (((IData)(vlSelf->rv32e__DOT__IF_valid) 
                    & (IData)(vlSelf->rv32e__DOT__id_ready))) {
            __Vdly__rv32e__DOT__IF_ID_pc = ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->rv32e__DOT__IF_ID_inst))
                                             ? (vlSelf->rv32e__DOT__IF_ID_pc 
                                                + vlSelf->rv32e__DOT__idu__DOT__immJ)
                                             : (((IData)(vlSelf->rv32e__DOT__predict_taken) 
                                                 & ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->rv32e__DOT__IF_ID_inst)) 
                                                    | (IData)(
                                                              (0x67U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->rv32e__DOT__IF_ID_inst)))))
                                                 ? vlSelf->rv32e__DOT__predict_target
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->rv32e__DOT__IF_ID_pc)));
            __Vdly__rv32e__DOT__IF_ID_pc2 = ((IData)(4U) 
                                             + vlSelf->rv32e__DOT__IF_ID_pc2);
        }
    }
    vlSelf->rv32e__DOT__total_predictions = __Vdly__rv32e__DOT__total_predictions;
    vlSelf->rv32e__DOT__correct_predictions = __Vdly__rv32e__DOT__correct_predictions;
    vlSelf->rv32e__DOT__lbpu__DOT__ghr = __Vdly__rv32e__DOT__lbpu__DOT__ghr;
    if (__Vdlyvset__rv32e__DOT__lbpu__DOT__pht__v0) {
        vlSelf->rv32e__DOT__lbpu__DOT__pht[__Vdlyvdim0__rv32e__DOT__lbpu__DOT__pht__v0] 
            = __Vdlyvval__rv32e__DOT__lbpu__DOT__pht__v0;
    }
    vlSelf->rv32e__DOT__ifu__DOT__check = __Vdly__rv32e__DOT__ifu__DOT__check;
    vlSelf->rv32e__DOT__IF_ID_pc2 = __Vdly__rv32e__DOT__IF_ID_pc2;
    vlSelf->rv32e__DOT__IF_ID_pc = __Vdly__rv32e__DOT__IF_ID_pc;
    vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr = __Vdly__rv32e__DOT__lbpu__DOT__ras_ptr;
    if (__Vdlyvset__rv32e__DOT__lbpu__DOT__ras__v0) {
        vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth[0U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth[1U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth[2U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth[3U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth[4U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth[5U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth[6U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth[7U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__ras_call_pc[0U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__ras_call_pc[1U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__ras_call_pc[2U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__ras_call_pc[3U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__ras_call_pc[4U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__ras_call_pc[5U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__ras_call_pc[6U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__ras_call_pc[7U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__ras[0U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__ras[1U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__ras[2U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__ras[3U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__ras[4U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__ras[5U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__ras[6U] = 0U;
        vlSelf->rv32e__DOT__lbpu__DOT__ras[7U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__lbpu__DOT__recursion_depth__v8) {
        vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth[__Vdlyvdim0__rv32e__DOT__lbpu__DOT__recursion_depth__v8] 
            = __Vdlyvval__rv32e__DOT__lbpu__DOT__recursion_depth__v8;
    }
    if (__Vdlyvset__rv32e__DOT__lbpu__DOT__ras_call_pc__v8) {
        vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth[__Vdlyvdim0__rv32e__DOT__lbpu__DOT__recursion_depth__v9] = 1U;
        vlSelf->rv32e__DOT__lbpu__DOT__ras_call_pc[__Vdlyvdim0__rv32e__DOT__lbpu__DOT__ras_call_pc__v8] 
            = __Vdlyvval__rv32e__DOT__lbpu__DOT__ras_call_pc__v8;
    }
    if (__Vdlyvset__rv32e__DOT__lbpu__DOT__recursion_depth__v10) {
        vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth[__Vdlyvdim0__rv32e__DOT__lbpu__DOT__recursion_depth__v10] 
            = __Vdlyvval__rv32e__DOT__lbpu__DOT__recursion_depth__v10;
    }
    if (__Vdlyvset__rv32e__DOT__lbpu__DOT__ras__v8) {
        vlSelf->rv32e__DOT__lbpu__DOT__ras[__Vdlyvdim0__rv32e__DOT__lbpu__DOT__ras__v8] 
            = __Vdlyvval__rv32e__DOT__lbpu__DOT__ras__v8;
    }
    if (__Vdlyvset__rv32e__DOT__lbpu__DOT__btb_target__v0) {
        vlSelf->rv32e__DOT__lbpu__DOT__btb_target[__Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_target__v0] 
            = __Vdlyvval__rv32e__DOT__lbpu__DOT__btb_target__v0;
    }
    if (__Vdlyvset__rv32e__DOT__lbpu__DOT__btb_valid__v0) {
        vlSelf->rv32e__DOT__lbpu__DOT__btb_valid[__Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_valid__v0] = 1U;
        vlSelf->rv32e__DOT__lbpu__DOT__btb_tag[__Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_tag__v0] 
            = __Vdlyvval__rv32e__DOT__lbpu__DOT__btb_tag__v0;
    }
    if (__Vdlyvset__rv32e__DOT__lbpu__DOT__btb_valid__v1) {
        vlSelf->rv32e__DOT__lbpu__DOT__btb_target[__Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_target__v1] 
            = __Vdlyvval__rv32e__DOT__lbpu__DOT__btb_target__v1;
        vlSelf->rv32e__DOT__lbpu__DOT__btb_valid[__Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_valid__v1] = 1U;
        vlSelf->rv32e__DOT__lbpu__DOT__btb_tag[__Vdlyvdim0__rv32e__DOT__lbpu__DOT__btb_tag__v1] 
            = __Vdlyvval__rv32e__DOT__lbpu__DOT__btb_tag__v1;
    }
    vlSelf->rv32e__DOT__lbpu__DOT__pht_index_if = (0xffU 
                                                   & (vlSelf->rv32e__DOT__IF_ID_pc 
                                                      ^ 
                                                      ((IData)(vlSelf->rv32e__DOT__lbpu__DOT__ghr) 
                                                       << 4U)));
    vlSelf->rv32e__DOT__lbpu__DOT__btb_hit_if = (vlSelf->rv32e__DOT__lbpu__DOT__btb_valid
                                                 [(0xffU 
                                                   & (vlSelf->rv32e__DOT__IF_ID_pc 
                                                      >> 2U))] 
                                                 & (vlSelf->rv32e__DOT__lbpu__DOT__btb_tag
                                                    [
                                                    (0xffU 
                                                     & (vlSelf->rv32e__DOT__IF_ID_pc 
                                                        >> 2U))] 
                                                    == 
                                                    (vlSelf->rv32e__DOT__IF_ID_pc 
                                                     >> 0xaU)));
    vlSelf->rv32e__DOT__predict_taken = 0U;
    vlSelf->rv32e__DOT__predict_target = ((IData)(4U) 
                                          + vlSelf->rv32e__DOT__IF_ID_pc);
    if ((IData)((0x67U == (0x707fU & vlSelf->rv32e__DOT__IF_ID_pc)))) {
        if ((0U != vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr)) {
            vlSelf->rv32e__DOT__predict_taken = 1U;
            vlSelf->rv32e__DOT__predict_target = vlSelf->rv32e__DOT__lbpu__DOT__ras
                [(7U & (vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr 
                        - (IData)(1U)))];
        } else if (vlSelf->rv32e__DOT__lbpu__DOT__btb_hit_if) {
            vlSelf->rv32e__DOT__predict_taken = 1U;
            vlSelf->rv32e__DOT__predict_target = vlSelf->rv32e__DOT__lbpu__DOT__btb_target
                [(0xffU & (vlSelf->rv32e__DOT__IF_ID_pc 
                           >> 2U))];
        }
    } else if (vlSelf->rv32e__DOT__lbpu__DOT__btb_hit_if) {
        vlSelf->rv32e__DOT__predict_taken = (1U & (
                                                   vlSelf->rv32e__DOT__lbpu__DOT__pht
                                                   [vlSelf->rv32e__DOT__lbpu__DOT__pht_index_if] 
                                                   >> 1U));
        if ((2U & vlSelf->rv32e__DOT__lbpu__DOT__pht
             [vlSelf->rv32e__DOT__lbpu__DOT__pht_index_if])) {
            vlSelf->rv32e__DOT__predict_target = vlSelf->rv32e__DOT__lbpu__DOT__btb_target
                [(0xffU & (vlSelf->rv32e__DOT__IF_ID_pc 
                           >> 2U))];
        }
    }
}

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__2(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__2\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->rv32e__DOT__id_ex_jal)))) {
        if (vlSelf->rv32e__DOT__id_ex_jalr) {
            vlSelf->rv32e__DOT__ex_bpu_pc = vlSelf->rv32e__DOT__id_ex_pc;
        } else if ((1U & (~ (IData)(vlSelf->rv32e__DOT__id_ex_csr_ecall)))) {
            if ((1U & (~ (IData)(vlSelf->rv32e__DOT__id_ex_csr_mret)))) {
                vlSelf->rv32e__DOT__ex_bpu_pc = ((0x63U 
                                                  == (IData)(vlSelf->rv32e__DOT__id_ex_opcode))
                                                  ? vlSelf->rv32e__DOT__id_ex_pc
                                                  : 0U);
            }
        }
    }
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
        vlSelf->rv32e__DOT__ex_flush = 0U;
        vlSelf->rv32e__DOT__ex_flush_pc = 0U;
        vlSelf->rv32e__DOT__ex_bpu_update = 0U;
    } else if (vlSelf->rv32e__DOT__id_ex_jalr) {
        vlSelf->rv32e__DOT__ex_bpu_correct = ((IData)(vlSelf->rv32e__DOT__id_ex_predict_taken) 
                                              & (vlSelf->rv32e__DOT__id_ex_predict_target 
                                                 == 
                                                 (0xfffffffeU 
                                                  & (vlSelf->rv32e__DOT__exu__DOT__src1 
                                                     + vlSelf->rv32e__DOT__id_ex_imm))));
        vlSelf->rv32e__DOT__ex_bpu_update = 1U;
        vlSelf->rv32e__DOT__ex_bpu_taken = 1U;
        vlSelf->rv32e__DOT__ex_bpu_target = (0xfffffffeU 
                                             & (vlSelf->rv32e__DOT__exu__DOT__src1 
                                                + vlSelf->rv32e__DOT__id_ex_imm));
        vlSelf->rv32e__DOT__ex_flush = (((~ (IData)(vlSelf->rv32e__DOT__ex_bpu_correct)) 
                                         & (IData)(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->rv32e__DOT__exu__DOT__load_use_flag)))));
        vlSelf->rv32e__DOT__ex_flush_pc = (0xfffffffeU 
                                           & (vlSelf->rv32e__DOT__exu__DOT__src1 
                                              + vlSelf->rv32e__DOT__id_ex_imm));
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
    } else if ((0x63U == (IData)(vlSelf->rv32e__DOT__id_ex_opcode))) {
        if (vlSelf->rv32e__DOT__exu__DOT__take_branch) {
            vlSelf->rv32e__DOT__exu__DOT__actual_target 
                = (vlSelf->rv32e__DOT__id_ex_pc + vlSelf->rv32e__DOT__id_ex_imm);
            vlSelf->rv32e__DOT__ex_bpu_update = 1U;
            vlSelf->rv32e__DOT__ex_bpu_taken = 1U;
        } else {
            vlSelf->rv32e__DOT__exu__DOT__actual_target 
                = vlSelf->rv32e__DOT__id_ex_pc2;
            vlSelf->rv32e__DOT__ex_bpu_update = 0U;
            vlSelf->rv32e__DOT__ex_bpu_taken = 0U;
        }
        vlSelf->rv32e__DOT__ex_bpu_target = (vlSelf->rv32e__DOT__id_ex_pc 
                                             + vlSelf->rv32e__DOT__id_ex_imm);
        vlSelf->rv32e__DOT__ex_bpu_correct = (((IData)(vlSelf->rv32e__DOT__exu__DOT__take_branch) 
                                               == (IData)(vlSelf->rv32e__DOT__id_ex_predict_taken)) 
                                              & (vlSelf->rv32e__DOT__exu__DOT__actual_target 
                                                 == vlSelf->rv32e__DOT__id_ex_predict_target));
        if ((1U & (~ (IData)(vlSelf->rv32e__DOT__ex_bpu_correct)))) {
            vlSelf->rv32e__DOT__ex_flush = ((IData)(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->rv32e__DOT__exu__DOT__load_use_flag)))));
            vlSelf->rv32e__DOT__ex_flush_pc = ((IData)(vlSelf->rv32e__DOT__exu__DOT__take_branch)
                                                ? vlSelf->rv32e__DOT__ex_bpu_target
                                                : ((IData)(4U) 
                                                   + vlSelf->rv32e__DOT__id_ex_pc));
        }
    } else {
        vlSelf->rv32e__DOT__ex_bpu_update = 0U;
        vlSelf->rv32e__DOT__ex_bpu_taken = 0U;
        vlSelf->rv32e__DOT__ex_bpu_target = 0U;
        vlSelf->rv32e__DOT__ex_bpu_correct = 0U;
        vlSelf->rv32e__DOT__ex_flush = 0U;
        vlSelf->rv32e__DOT__ex_flush_pc = 0U;
    }
    vlSelf->rv32e__DOT__id_ready = (1U & ((~ (IData)(vlSelf->rv32e__DOT__ex_flush)) 
                                          & ((~ (IData)(vlSelf->rv32e__DOT__id_valid)) 
                                             | (IData)(vlSelf->rv32e__DOT__ex_ready))));
}

VL_INLINE_OPT void Vrv32e___024root___nba_comb__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->rv32e__DOT__lbpu__DOT__pht_index_ex = (0xffU 
                                                   & (vlSelf->rv32e__DOT__ex_bpu_pc 
                                                      ^ 
                                                      ((IData)(vlSelf->rv32e__DOT__lbpu__DOT__ghr) 
                                                       << 4U)));
    vlSelf->rv32e__DOT__lbpu__DOT__btb_hit_ex = (vlSelf->rv32e__DOT__lbpu__DOT__btb_valid
                                                 [(0xffU 
                                                   & (vlSelf->rv32e__DOT__ex_bpu_pc 
                                                      >> 2U))] 
                                                 & (vlSelf->rv32e__DOT__lbpu__DOT__btb_tag
                                                    [
                                                    (0xffU 
                                                     & (vlSelf->rv32e__DOT__ex_bpu_pc 
                                                        >> 2U))] 
                                                    == 
                                                    (vlSelf->rv32e__DOT__ex_bpu_pc 
                                                     >> 0xaU)));
    vlSelf->rv32e__DOT__lbpu__DOT__is_recursive_call 
        = ((vlSelf->rv32e__DOT__ex_bpu_pc == vlSelf->rv32e__DOT__lbpu__DOT__ras_call_pc
            [(7U & (vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr 
                    - (IData)(1U)))]) & ((vlSelf->rv32e__DOT__ex_bpu_target 
                                          == vlSelf->rv32e__DOT__lbpu__DOT__ras
                                          [(7U & (vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr 
                                                  - (IData)(1U)))]) 
                                         & (0U < vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr)));
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
    vlSelf->rv32e__DOT__idu__DOT__immJ = (((- (IData)(
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
                                                      >> 0x14U)))));
    vlSelf->rv32e__DOT__idu__DOT__immI = (((- (IData)(
                                                      (vlSelf->rv32e__DOT__IF_ID_inst 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSelf->rv32e__DOT__IF_ID_inst 
                                             >> 0x14U));
}

void Vrv32e___024root___eval_nba(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrv32e___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vrv32e___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrv32e___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vrv32e___024root___nba_comb__TOP__0(vlSelf);
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
