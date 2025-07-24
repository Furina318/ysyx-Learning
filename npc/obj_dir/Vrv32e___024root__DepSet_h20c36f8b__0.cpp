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

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ len);
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__11__Vfuncout;
    __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__12__Vfuncout;
    __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__13__Vfuncout;
    __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__14__Vfuncout;
    __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__15__Vfuncout;
    __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__15__Vfuncout = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__inst_cnt;
    __Vdly__rv32e__DOT__inst_cnt = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__sram__DOT__write_addr_valid;
    __Vdly__rv32e__DOT__sram__DOT__write_addr_valid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__sram__DOT__write_data_valid;
    __Vdly__rv32e__DOT__sram__DOT__write_data_valid = 0;
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
    __Vdly__rv32e__DOT__sram__DOT__write_data_valid 
        = vlSelf->rv32e__DOT__sram__DOT__write_data_valid;
    __Vdly__rv32e__DOT__sram__DOT__write_addr_valid 
        = vlSelf->rv32e__DOT__sram__DOT__write_addr_valid;
    vlSelf->__Vdly__rv32e__DOT__sram__DOT__read_addr 
        = vlSelf->rv32e__DOT__sram__DOT__read_addr;
    vlSelf->__Vdly__rv32e__DOT__sram__DOT__read_pending 
        = vlSelf->rv32e__DOT__sram__DOT__read_pending;
    vlSelf->__Vdly__rv32e__DOT__sram_if_rvalid = vlSelf->rv32e__DOT__sram_if_rvalid;
    vlSelf->__Vdly__rv32e__DOT__sram_if_arready = vlSelf->rv32e__DOT__sram_if_arready;
    vlSelf->__Vdly__rv32e__DOT__sram__DOT__LFSR = vlSelf->rv32e__DOT__sram__DOT__LFSR;
    __Vdly__rv32e__DOT__inst_cnt = vlSelf->rv32e__DOT__inst_cnt;
    __Vdly__rv32e__DOT__lsu__DOT__l_pc = vlSelf->rv32e__DOT__lsu__DOT__l_pc;
    vlSelf->__Vdly__rv32e__DOT__lsu_ex_ready = vlSelf->rv32e__DOT__lsu_ex_ready;
    __Vdly__rv32e__DOT__lsu__DOT__l_opcode = vlSelf->rv32e__DOT__lsu__DOT__l_opcode;
    __Vdly__rv32e__DOT__lsu__DOT__l_inst = vlSelf->rv32e__DOT__lsu__DOT__l_inst;
    __Vdly__rv32e__DOT__lsu__DOT__l_MemLen = vlSelf->rv32e__DOT__lsu__DOT__l_MemLen;
    __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v0 = 0U;
    __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v1 = 0U;
    __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v3 = 0U;
    vlSelf->__Vdly__rv32e__DOT__id_valid = vlSelf->rv32e__DOT__id_valid;
    __Vdly__rv32e__DOT__lsu__DOT__l_rd_en = vlSelf->rv32e__DOT__lsu__DOT__l_rd_en;
    __Vdlyvset__rv32e__DOT__wbu__DOT__regs__v0 = 0U;
    __Vdlyvset__rv32e__DOT__wbu__DOT__regs__v32 = 0U;
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
        VL_WRITEF("\033[33mIPC = %f\033[0m\n",64,vlSelf->rv32e__DOT__unnamedblk1__DOT__IPC);
        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(1U, vlSelf->rv32e__DOT__ex_lsu_inst);
    }
    vlSelf->__Vdly__rv32e__DOT__lsu_ex_ready = ((IData)(vlSelf->reset) 
                                                | ((~ 
                                                    (((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
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
        __Vdly__rv32e__DOT__inst_cnt = 0U;
        __Vdly__rv32e__DOT__lsu__DOT__l_pc = 0U;
        __Vdly__rv32e__DOT__lsu__DOT__l_inst = 0U;
        __Vdly__rv32e__DOT__lsu__DOT__l_opcode = 0U;
        __Vdly__rv32e__DOT__lsu__DOT__l_MemLen = 0U;
        __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v0 = 1U;
    } else {
        vlSelf->rv32e__DOT__cycle_cnt = ((IData)(1U) 
                                         + vlSelf->rv32e__DOT__cycle_cnt);
        if (vlSelf->rv32e__DOT__wb_valid) {
            __Vdly__rv32e__DOT__inst_cnt = ((IData)(1U) 
                                            + vlSelf->rv32e__DOT__inst_cnt);
        }
        if ((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
              & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
             & ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite)))) {
            __Vdly__rv32e__DOT__lsu__DOT__l_pc = vlSelf->rv32e__DOT__ex_lsu_pc;
            __Vdly__rv32e__DOT__lsu__DOT__l_inst = vlSelf->rv32e__DOT__ex_lsu_inst;
            __Vdly__rv32e__DOT__lsu__DOT__l_opcode 
                = vlSelf->rv32e__DOT__ex_lsu_opcode;
            __Vdly__rv32e__DOT__lsu__DOT__l_MemLen 
                = vlSelf->rv32e__DOT__ex_lsu_MemLen;
        } else if (vlSelf->rv32e__DOT__lsu_wb_valid) {
            __Vdly__rv32e__DOT__lsu__DOT__l_pc = vlSelf->rv32e__DOT__ex_lsu_pc;
            __Vdly__rv32e__DOT__lsu__DOT__l_opcode 
                = (0x7fU & vlSelf->rv32e__DOT__lsu__DOT__l_inst);
            __Vdly__rv32e__DOT__lsu__DOT__l_inst = vlSelf->rv32e__DOT__ex_lsu_inst;
            __Vdly__rv32e__DOT__lsu__DOT__l_MemLen 
                = vlSelf->rv32e__DOT__ex_lsu_MemLen;
        } else if (((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                    & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready))) {
            __Vdly__rv32e__DOT__lsu__DOT__l_pc = vlSelf->rv32e__DOT__ex_lsu_pc;
            __Vdly__rv32e__DOT__lsu__DOT__l_opcode 
                = (0x7fU & vlSelf->rv32e__DOT__lsu__DOT__l_inst);
            __Vdly__rv32e__DOT__lsu__DOT__l_inst = vlSelf->rv32e__DOT__ex_lsu_inst;
            __Vdly__rv32e__DOT__lsu__DOT__l_MemLen 
                = vlSelf->rv32e__DOT__ex_lsu_MemLen;
        } else {
            __Vdly__rv32e__DOT__lsu__DOT__l_pc = vlSelf->rv32e__DOT__lsu__DOT__l_pc;
            __Vdly__rv32e__DOT__lsu__DOT__l_inst = vlSelf->rv32e__DOT__lsu__DOT__l_inst;
            __Vdly__rv32e__DOT__lsu__DOT__l_opcode 
                = vlSelf->rv32e__DOT__lsu__DOT__l_opcode;
            __Vdly__rv32e__DOT__lsu__DOT__l_MemLen 
                = vlSelf->rv32e__DOT__lsu__DOT__l_MemLen;
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
        vlSelf->__Vdly__rv32e__DOT__id_valid = 0U;
        __Vdlyvset__rv32e__DOT__wbu__DOT__regs__v0 = 1U;
    } else {
        if ((((IData)(vlSelf->rv32e__DOT__IF_valid) 
              & (IData)(vlSelf->rv32e__DOT__id_ready)) 
             & ((IData)(vlSelf->rv32e__DOT__ex_ready) 
                | (~ (IData)(vlSelf->rv32e__DOT__id_valid))))) {
            vlSelf->__Vdly__rv32e__DOT__id_valid = 1U;
        } else if (((~ ((IData)(vlSelf->rv32e__DOT__IF_valid) 
                        & (IData)(vlSelf->rv32e__DOT__id_ready))) 
                    & (IData)(vlSelf->rv32e__DOT__ex_ready))) {
            vlSelf->__Vdly__rv32e__DOT__id_valid = 0U;
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
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2 = 0U;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1 = 0U;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1 = 0U;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2 = 0U;
        vlSelf->rv32e__DOT__lsu_wb_pc = 0U;
        vlSelf->rv32e__DOT__lsu_wb_inst = 0U;
        __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr = 0U;
        vlSelf->rv32e__DOT__lsu_wb_write_rd_data = 0U;
        vlSelf->rv32e__DOT__lsu_wb_rd = 0U;
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
            vlSelf->rv32e__DOT__lsu_wb_pc = vlSelf->rv32e__DOT__lsu__DOT__l_pc;
            vlSelf->rv32e__DOT__lsu_wb_inst = vlSelf->rv32e__DOT__lsu__DOT__l_inst;
            vlSelf->rv32e__DOT__lsu_wb_write_rd_data 
                = vlSelf->rv32e__DOT__lsu__DOT__rd_data;
            vlSelf->rv32e__DOT__lsu_wb_rd = vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr;
        } else if (vlSelf->rv32e__DOT__lsu__DOT__read_valid) {
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2;
            vlSelf->rv32e__DOT__lsu_wb_pc = vlSelf->rv32e__DOT__lsu__DOT__l_pc;
            vlSelf->rv32e__DOT__lsu_wb_inst = vlSelf->rv32e__DOT__lsu__DOT__l_inst;
            vlSelf->rv32e__DOT__lsu_wb_write_rd_data 
                = vlSelf->rv32e__DOT__lsu__DOT__rd_data;
            vlSelf->rv32e__DOT__lsu_wb_rd = vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr;
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
            vlSelf->rv32e__DOT__lsu_wb_pc = vlSelf->rv32e__DOT__ex_lsu_pc;
            vlSelf->rv32e__DOT__lsu_wb_inst = vlSelf->rv32e__DOT__ex_lsu_inst;
            vlSelf->rv32e__DOT__lsu_wb_write_rd_data 
                = vlSelf->rv32e__DOT__lsu__DOT__rd_data;
            vlSelf->rv32e__DOT__lsu_wb_rd = vlSelf->rv32e__DOT__ex_lsu_rd;
        } else {
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2 
                = vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1 
                = vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1 
                = vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1;
            vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2 
                = vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2;
            vlSelf->rv32e__DOT__lsu_wb_pc = vlSelf->rv32e__DOT__lsu_wb_pc;
            vlSelf->rv32e__DOT__lsu_wb_inst = vlSelf->rv32e__DOT__lsu_wb_inst;
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
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__sram__DOT__sram_awready = 1U;
        vlSelf->rv32e__DOT__sram__DOT__sram_wready = 1U;
        vlSelf->rv32e__DOT__sram__DOT__sram_bvalid = 0U;
        vlSelf->rv32e__DOT__sram__DOT__sram_bresp = 0U;
        __Vdly__rv32e__DOT__sram__DOT__write_addr_valid = 0U;
        __Vdly__rv32e__DOT__sram__DOT__write_data_valid = 0U;
    } else if (((IData)(vlSelf->rv32e__DOT__sram__DOT__write_addr_valid) 
                & (IData)(vlSelf->rv32e__DOT__sram__DOT__write_data_valid))) {
        if ((0U < vlSelf->rv32e__DOT__sram__DOT__LFSR)) {
            vlSelf->__Vdly__rv32e__DOT__sram__DOT__LFSR 
                = (vlSelf->rv32e__DOT__sram__DOT__LFSR 
                   - (IData)(1U));
        } else {
            if ((1U == (IData)(vlSelf->rv32e__DOT__sram__DOT__write_strb))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__sram__DOT__write_addr, vlSelf->rv32e__DOT__sram__DOT__write_data, 1U);
            } else if ((3U == (IData)(vlSelf->rv32e__DOT__sram__DOT__write_strb))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__sram__DOT__write_addr, vlSelf->rv32e__DOT__sram__DOT__write_data, 2U);
            } else if ((0xfU == (IData)(vlSelf->rv32e__DOT__sram__DOT__write_strb))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__sram__DOT__write_addr, vlSelf->rv32e__DOT__sram__DOT__write_data, 4U);
            } else {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__sram__DOT__write_addr, vlSelf->rv32e__DOT__sram__DOT__write_data, 4U);
            }
            vlSelf->rv32e__DOT__sram__DOT__sram_bvalid = 1U;
            vlSelf->rv32e__DOT__sram__DOT__sram_bresp = 0U;
            __Vdly__rv32e__DOT__sram__DOT__write_addr_valid = 0U;
            __Vdly__rv32e__DOT__sram__DOT__write_data_valid = 0U;
            vlSelf->rv32e__DOT__sram__DOT__sram_awready = 1U;
            vlSelf->rv32e__DOT__sram__DOT__sram_wready = 1U;
        }
    }
    vlSelf->rv32e__DOT__inst_cnt = __Vdly__rv32e__DOT__inst_cnt;
    vlSelf->rv32e__DOT__lsu__DOT__l_opcode = __Vdly__rv32e__DOT__lsu__DOT__l_opcode;
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
    vlSelf->rv32e__DOT__lsu__DOT__l_pc = __Vdly__rv32e__DOT__lsu__DOT__l_pc;
    vlSelf->rv32e__DOT__lsu__DOT__l_inst = __Vdly__rv32e__DOT__lsu__DOT__l_inst;
    vlSelf->rv32e__DOT__lsu__DOT__l_rd_en = __Vdly__rv32e__DOT__lsu__DOT__l_rd_en;
    vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr = __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr;
    vlSelf->rv32e__DOT__sram__DOT__write_addr_valid 
        = __Vdly__rv32e__DOT__sram__DOT__write_addr_valid;
    vlSelf->rv32e__DOT__sram__DOT__write_data_valid 
        = __Vdly__rv32e__DOT__sram__DOT__write_data_valid;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h384f4e33__0 
        = ((IData)(vlSelf->rv32e__DOT__lsu_wb_RegWrite) 
           & (0U != (IData)(vlSelf->rv32e__DOT__lsu_wb_rd)));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hb53dc38f__0 
        = ((IData)(vlSelf->rv32e__DOT__lsu__DOT__l_load) 
           & ((IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_en) 
              & (0U != (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr))));
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition = 1U;
        vlSelf->rv32e__DOT__id_wb_csr_addr2 = 0U;
        vlSelf->rv32e__DOT__id_wb_csr_addr1 = 0U;
        vlSelf->rv32e__DOT__id_ex_alu_op = 0U;
        vlSelf->rv32e__DOT__id_ex_shamt = 0U;
        vlSelf->rv32e__DOT__id_ex_jalr = 0U;
        vlSelf->rv32e__DOT__id_ex_jal = 0U;
        vlSelf->rv32e__DOT__id_wb_rs2 = 0U;
        vlSelf->rv32e__DOT__wb_valid = 0U;
    } else {
        if (vlSelf->rv32e__DOT__ex_flush) {
            vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition = 0U;
        } else if (vlSelf->rv32e__DOT__id_ready) {
            vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition = 1U;
        }
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
            vlSelf->rv32e__DOT__id_ex_alu_op = vlSelf->rv32e__DOT__idu__DOT__alu_op;
            vlSelf->rv32e__DOT__id_ex_shamt = (0x3fU 
                                               & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 0x14U));
            vlSelf->rv32e__DOT__id_ex_jalr = (IData)(
                                                     (0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->rv32e__DOT__IF_ID_inst)));
            vlSelf->rv32e__DOT__id_ex_jal = (0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->rv32e__DOT__IF_ID_inst));
            vlSelf->rv32e__DOT__id_wb_rs2 = (0x1fU 
                                             & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 0x14U));
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
        vlSelf->rv32e__DOT__lsu__DOT__write_valid = 0U;
    } else if (((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                  & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                 & (~ (IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead))) 
                & (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite))) {
        if ((4U == (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__ex_lsu_process_result, vlSelf->rv32e__DOT__ex_lsu_src2, 1U);
        } else if ((1U == (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__ex_lsu_process_result, vlSelf->rv32e__DOT__ex_lsu_src2, 2U);
        } else if (VL_LIKELY((2U == (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen)))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__ex_lsu_process_result, vlSelf->rv32e__DOT__ex_lsu_src2, 4U);
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
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__ex_lsu_process_result, 1U, __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__11__Vfuncout);
                vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                    = __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__11__Vfuncout;
            }
        } else if ((2U & (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))) {
            if ((1U & (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__ex_lsu_process_result, 2U, __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__12__Vfuncout);
                vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                    = __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__12__Vfuncout;
            } else {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__ex_lsu_process_result, 4U, __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__13__Vfuncout);
                vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                    = __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__13__Vfuncout;
            }
        } else if ((1U & (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__ex_lsu_process_result, 2U, __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__14__Vfuncout);
            vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                = __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__14__Vfuncout;
        } else {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__ex_lsu_process_result, 1U, __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__15__Vfuncout);
            vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                = __Vfunc_rv32e__DOT__lsu__DOT__pmem_read__15__Vfuncout;
        }
        vlSelf->rv32e__DOT__lsu__DOT__read_valid = 1U;
    } else {
        vlSelf->rv32e__DOT__lsu__DOT__read_valid = 0U;
    }
    vlSelf->rv32e__DOT__lsu_wb_valid = __Vdly__rv32e__DOT__lsu_wb_valid;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hadc13f7a__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hb53dc38f__0) 
           & ((IData)(vlSelf->rv32e__DOT__id_wb_rs2) 
              == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr)));
    vlSelf->rv32e__DOT__lsu__DOT__l_MemLen = __Vdly__rv32e__DOT__lsu__DOT__l_MemLen;
    vlSelf->rv32e__DOT__lsu_wb_flush = ((~ (IData)(vlSelf->reset)) 
                                        & (IData)(vlSelf->rv32e__DOT__ex_flush));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h3556a05f__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h384f4e33__0) 
           & (((IData)(vlSelf->rv32e__DOT__id_wb_rs2) 
               == (IData)(vlSelf->rv32e__DOT__lsu_wb_rd)) 
              & (IData)(vlSelf->rv32e__DOT__lsu_wb_valid)));
}

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__1(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdly__rv32e__DOT__ex_lsu_valid;
    __Vdly__rv32e__DOT__ex_lsu_valid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__ex_lsu_MemRead;
    __Vdly__rv32e__DOT__ex_lsu_MemRead = 0;
    CData/*4:0*/ __Vdly__rv32e__DOT__ex_lsu_rd;
    __Vdly__rv32e__DOT__ex_lsu_rd = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__ex_lsu_RegWrite;
    __Vdly__rv32e__DOT__ex_lsu_RegWrite = 0;
    IData/*31:0*/ __Vtemp_heb90a236__0;
    // Body
    vlSelf->__Vdly__rv32e__DOT__ifu__DOT__next_pc = vlSelf->rv32e__DOT__ifu__DOT__next_pc;
    vlSelf->__Vdly__rv32e__DOT__IF_ID_pc = vlSelf->rv32e__DOT__IF_ID_pc;
    vlSelf->__Vdly__rv32e__DOT__ifu__DOT__read_valid 
        = vlSelf->rv32e__DOT__ifu__DOT__read_valid;
    vlSelf->__Vdly__rv32e__DOT__ifu__DOT__read_pending 
        = vlSelf->rv32e__DOT__ifu__DOT__read_pending;
    vlSelf->__Vdly__rv32e__DOT__if_sram_rready = vlSelf->rv32e__DOT__if_sram_rready;
    vlSelf->__Vdly__rv32e__DOT__if_sram_araddr = vlSelf->rv32e__DOT__if_sram_araddr;
    vlSelf->__Vdly__rv32e__DOT__if_sram_arvalid = vlSelf->rv32e__DOT__if_sram_arvalid;
    __Vdly__rv32e__DOT__ex_lsu_valid = vlSelf->rv32e__DOT__ex_lsu_valid;
    __Vdly__rv32e__DOT__ex_lsu_MemRead = vlSelf->rv32e__DOT__ex_lsu_MemRead;
    __Vdly__rv32e__DOT__ex_lsu_RegWrite = vlSelf->rv32e__DOT__ex_lsu_RegWrite;
    __Vdly__rv32e__DOT__ex_lsu_rd = vlSelf->rv32e__DOT__ex_lsu_rd;
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__ex_lsu_csr_rdata = 0U;
        vlSelf->rv32e__DOT__ex_lsu_src2 = 0U;
        vlSelf->rv32e__DOT__ex_lsu_process_result = 0U;
        __Vdly__rv32e__DOT__ex_lsu_valid = 0U;
        vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2 = 0U;
        vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1 = 0U;
        vlSelf->rv32e__DOT__ex_lsu_pc = 0U;
        vlSelf->rv32e__DOT__ex_lsu_imm = 0U;
        vlSelf->rv32e__DOT__ex_lsu_inst = 0U;
        vlSelf->rv32e__DOT__ex_lsu_MemLen = 0U;
        vlSelf->rv32e__DOT__ex_lsu_opcode = 0U;
        vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2 = 0U;
        __Vdly__rv32e__DOT__ex_lsu_rd = 0U;
        __Vtemp_heb90a236__0 = 0U;
    } else {
        if (((IData)(vlSelf->rv32e__DOT__id_valid) 
             & (IData)(vlSelf->rv32e__DOT__ex_ready))) {
            vlSelf->rv32e__DOT__ex_lsu_csr_rdata = vlSelf->rv32e__DOT__wb_ex_csr_num1;
            vlSelf->rv32e__DOT__ex_lsu_src2 = vlSelf->rv32e__DOT__exu__DOT__src2;
            vlSelf->rv32e__DOT__ex_lsu_process_result 
                = vlSelf->rv32e__DOT__exu__DOT__process_result;
            vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2 
                = vlSelf->rv32e__DOT__id_ex_csr_wr_addr2;
            vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1 
                = vlSelf->rv32e__DOT__id_ex_csr_wr_addr1;
            vlSelf->rv32e__DOT__ex_lsu_pc = vlSelf->rv32e__DOT__id_ex_pc;
            vlSelf->rv32e__DOT__ex_lsu_imm = vlSelf->rv32e__DOT__id_ex_imm;
            vlSelf->rv32e__DOT__ex_lsu_inst = vlSelf->rv32e__DOT__id_ex_inst;
            vlSelf->rv32e__DOT__ex_lsu_MemLen = vlSelf->rv32e__DOT__id_ex_MemLen;
            vlSelf->rv32e__DOT__ex_lsu_opcode = vlSelf->rv32e__DOT__id_ex_opcode;
            vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2 
                = ((IData)(vlSelf->rv32e__DOT__id_ex_csr_ecall)
                    ? vlSelf->rv32e__DOT__id_ex_pc : 0U);
            __Vdly__rv32e__DOT__ex_lsu_rd = vlSelf->rv32e__DOT__id_ex_rd;
            __Vtemp_heb90a236__0 = (((1U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                                     & (1U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
                                     ? vlSelf->rv32e__DOT__exu__DOT__src1
                                     : (((3U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                                         & (3U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
                                         ? (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                            & (~ vlSelf->rv32e__DOT__exu__DOT__src1))
                                         : (((2U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                                             & (2U 
                                                == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
                                             ? (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                                | vlSelf->rv32e__DOT__exu__DOT__src1)
                                             : (((1U 
                                                  == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                                                 & (5U 
                                                    == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
                                                 ? (IData)(vlSelf->rv32e__DOT__id_ex_zimm)
                                                 : 
                                                (((3U 
                                                   == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                                                  & (7U 
                                                     == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
                                                  ? 
                                                 (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                                  & (~ (IData)(vlSelf->rv32e__DOT__id_ex_zimm)))
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                                                   & (6U 
                                                      == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
                                                   ? 
                                                  (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                                   | (IData)(vlSelf->rv32e__DOT__id_ex_zimm))
                                                   : 
                                                  ((IData)(vlSelf->rv32e__DOT__id_ex_csr_ecall)
                                                    ? 0xbU
                                                    : 
                                                   ((IData)(vlSelf->rv32e__DOT__id_ex_csr_mret)
                                                     ? 
                                                    (0x80U 
                                                     | ((0xffffe7f7U 
                                                         & vlSelf->rv32e__DOT__wb_ex_csr_num1) 
                                                        | (8U 
                                                           & (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                                              >> 4U))))
                                                     : 0U))))))));
        } else {
            vlSelf->rv32e__DOT__ex_lsu_csr_rdata = vlSelf->rv32e__DOT__ex_lsu_csr_rdata;
            vlSelf->rv32e__DOT__ex_lsu_src2 = vlSelf->rv32e__DOT__ex_lsu_src2;
            vlSelf->rv32e__DOT__ex_lsu_process_result 
                = vlSelf->rv32e__DOT__ex_lsu_process_result;
            vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2;
            vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1;
            vlSelf->rv32e__DOT__ex_lsu_pc = vlSelf->rv32e__DOT__ex_lsu_pc;
            vlSelf->rv32e__DOT__ex_lsu_imm = vlSelf->rv32e__DOT__ex_lsu_imm;
            vlSelf->rv32e__DOT__ex_lsu_inst = vlSelf->rv32e__DOT__ex_lsu_inst;
            vlSelf->rv32e__DOT__ex_lsu_MemLen = vlSelf->rv32e__DOT__ex_lsu_MemLen;
            vlSelf->rv32e__DOT__ex_lsu_opcode = vlSelf->rv32e__DOT__ex_lsu_opcode;
            vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2 
                = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2;
            __Vdly__rv32e__DOT__ex_lsu_rd = vlSelf->rv32e__DOT__ex_lsu_rd;
            __Vtemp_heb90a236__0 = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1;
        }
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
    }
    vlSelf->rv32e__DOT__ex_lsu_csr_wen2 = ((~ (IData)(vlSelf->reset)) 
                                           & (((IData)(vlSelf->rv32e__DOT__id_valid) 
                                               & (IData)(vlSelf->rv32e__DOT__ex_ready))
                                               ? (IData)(vlSelf->rv32e__DOT__id_ex_csr_wen2)
                                               : (IData)(vlSelf->rv32e__DOT__ex_lsu_csr_wen2)));
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
    vlSelf->rv32e__DOT__ex_lsu_csr_wen1 = ((~ (IData)(vlSelf->reset)) 
                                           & (((IData)(vlSelf->rv32e__DOT__id_valid) 
                                               & (IData)(vlSelf->rv32e__DOT__ex_ready))
                                               ? (IData)(vlSelf->rv32e__DOT__id_ex_csr_wen1)
                                               : (IData)(vlSelf->rv32e__DOT__ex_lsu_csr_wen1)));
    vlSelf->rv32e__DOT__ex_lsu_csr = ((~ (IData)(vlSelf->reset)) 
                                      & (((IData)(vlSelf->rv32e__DOT__id_valid) 
                                          & (IData)(vlSelf->rv32e__DOT__ex_ready))
                                          ? (IData)(vlSelf->rv32e__DOT__id_ex_csr)
                                          : (IData)(vlSelf->rv32e__DOT__ex_lsu_csr)));
    vlSelf->rv32e__DOT__ex_lsu_MemWrite = ((~ (IData)(vlSelf->reset)) 
                                           & (((IData)(vlSelf->rv32e__DOT__id_valid) 
                                               & (IData)(vlSelf->rv32e__DOT__ex_ready))
                                               ? (IData)(vlSelf->rv32e__DOT__id_ex_MemWrite)
                                               : (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite)));
    __Vdly__rv32e__DOT__ex_lsu_MemRead = ((~ (IData)(vlSelf->reset)) 
                                          & (((IData)(vlSelf->rv32e__DOT__id_valid) 
                                              & (IData)(vlSelf->rv32e__DOT__ex_ready))
                                              ? (IData)(vlSelf->rv32e__DOT__id_ex_MemRead)
                                              : (IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead)));
    __Vdly__rv32e__DOT__ex_lsu_RegWrite = ((~ (IData)(vlSelf->reset)) 
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
    vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1 = __Vtemp_heb90a236__0;
    vlSelf->rv32e__DOT__ex_lsu_RegWrite = __Vdly__rv32e__DOT__ex_lsu_RegWrite;
    vlSelf->rv32e__DOT__ex_lsu_rd = __Vdly__rv32e__DOT__ex_lsu_rd;
    vlSelf->rv32e__DOT__ex_lsu_MemRead = __Vdly__rv32e__DOT__ex_lsu_MemRead;
    vlSelf->rv32e__DOT__ex_lsu_valid = __Vdly__rv32e__DOT__ex_lsu_valid;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h69af1a50__0 
        = ((IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite) 
           & (0U != (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h804502ec__0 
        = ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
           & (IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite));
}

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__2(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->rv32e__DOT__lsu_ex_ready = vlSelf->__Vdly__rv32e__DOT__lsu_ex_ready;
    vlSelf->rv32e__DOT__id_valid = vlSelf->__Vdly__rv32e__DOT__id_valid;
    vlSelf->rv32e__DOT__wb_ex_csr_num1 = vlSelf->rv32e__DOT__wbu__DOT__CSR
        [vlSelf->rv32e__DOT__id_wb_csr_addr1];
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__id_ex_csr_wr_addr2 = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_wen2 = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_wr_addr1 = 0U;
        vlSelf->rv32e__DOT__id_ex_imm = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_wen1 = 0U;
        vlSelf->rv32e__DOT__id_ex_inst = 0U;
        vlSelf->rv32e__DOT__id_ex_MemLen = 0U;
        vlSelf->rv32e__DOT__id_ex_csr = 0U;
        vlSelf->rv32e__DOT__id_ex_opcode = 0U;
        vlSelf->rv32e__DOT__id_ex_pc = 0U;
        vlSelf->rv32e__DOT__id_ex_MemRead = 0U;
        vlSelf->rv32e__DOT__id_ex_RegWrite = 0U;
        vlSelf->rv32e__DOT__id_ex_rd = 0U;
        vlSelf->rv32e__DOT__id_ex_MemWrite = 0U;
        vlSelf->rv32e__DOT__id_wb_rs1 = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_mret = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_ecall = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_op = 0U;
        vlSelf->rv32e__DOT__id_ex_zimm = 0U;
        vlSelf->rv32e__DOT__id_ex_func3 = 0U;
    } else if (((IData)(vlSelf->rv32e__DOT__IF_valid) 
                & (IData)(vlSelf->rv32e__DOT__id_ready))) {
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
        vlSelf->rv32e__DOT__id_ex_imm = vlSelf->rv32e__DOT__idu__DOT__imm;
        vlSelf->rv32e__DOT__id_ex_csr_wen1 = (0x73U 
                                              == (0x7fU 
                                                  & vlSelf->rv32e__DOT__IF_ID_inst));
        vlSelf->rv32e__DOT__id_ex_inst = vlSelf->rv32e__DOT__IF_ID_inst;
        vlSelf->rv32e__DOT__id_ex_MemLen = (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h69b43165__0) 
                                             & (0x2000U 
                                                == 
                                                (0x7000U 
                                                 & vlSelf->rv32e__DOT__IF_ID_inst)))
                                             ? 2U : 
                                            (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h69b43165__0) 
                                              & (0x1000U 
                                                 == 
                                                 (0x7000U 
                                                  & vlSelf->rv32e__DOT__IF_ID_inst)))
                                              ? 1U : 
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
                                               : ((IData)(
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
        vlSelf->rv32e__DOT__id_ex_csr = (0x73U == (0x7fU 
                                                   & vlSelf->rv32e__DOT__IF_ID_inst));
        vlSelf->rv32e__DOT__id_ex_opcode = (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst);
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
                                               == (0x1fU 
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
        vlSelf->rv32e__DOT__id_ex_rd = (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                 >> 7U));
        vlSelf->rv32e__DOT__id_ex_MemWrite = (8U == 
                                              (0x1fU 
                                               & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 2U)));
        vlSelf->rv32e__DOT__id_wb_rs1 = (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 0xfU));
        vlSelf->rv32e__DOT__id_ex_csr_mret = vlSelf->rv32e__DOT__idu__DOT__csr_mret;
        vlSelf->rv32e__DOT__id_ex_csr_ecall = vlSelf->rv32e__DOT__idu__DOT__csr_ecall;
        vlSelf->rv32e__DOT__id_ex_csr_op = (((0x73U 
                                              == (0x7fU 
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
                                             ? 1U : 
                                            (((0x73U 
                                               == (0x7fU 
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
                                              ? 2U : 
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
        vlSelf->rv32e__DOT__id_ex_zimm = (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                   >> 0xfU));
        vlSelf->rv32e__DOT__id_ex_func3 = (7U & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                 >> 0xcU));
    }
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h666fa1ae__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h384f4e33__0) 
           & (((IData)(vlSelf->rv32e__DOT__id_wb_rs1) 
               == (IData)(vlSelf->rv32e__DOT__lsu_wb_rd)) 
              & (IData)(vlSelf->rv32e__DOT__lsu_wb_valid)));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h0017749a__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hb53dc38f__0) 
           & ((IData)(vlSelf->rv32e__DOT__id_wb_rs1) 
              == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr)));
}

VL_INLINE_OPT void Vrv32e___024root___nba_comb__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_comb__TOP__0\n"); );
    // Body
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
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0 
        = ((IData)(vlSelf->rv32e__DOT__ex_lsu_rd) == (IData)(vlSelf->rv32e__DOT__id_wb_rs2));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hc613623f__0 
        = (((IData)(vlSelf->rv32e__DOT__ex_lsu_rd) 
            == (IData)(vlSelf->rv32e__DOT__id_wb_rs1)) 
           & (IData)(vlSelf->rv32e__DOT__ex_lsu_valid));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h69af1a50__0) 
           & ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0) 
              & (IData)(vlSelf->rv32e__DOT__ex_lsu_valid)));
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
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h9653a62d__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h69af1a50__0) 
           & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hc613623f__0));
    vlSelf->rv32e__DOT__exu__DOT__src2 = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0)
                                           ? vlSelf->rv32e__DOT__ex_lsu_process_result
                                           : ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h3556a05f__0)
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
    vlSelf->rv32e__DOT__ex_ready = (((~ (IData)(vlSelf->rv32e__DOT__ex_lsu_valid)) 
                                     | (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                                    & (0U == (IData)(vlSelf->rv32e__DOT__exu__DOT__load_use_flag)));
    vlSelf->rv32e__DOT__exu__DOT__src1 = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h9653a62d__0)
                                           ? vlSelf->rv32e__DOT__ex_lsu_process_result
                                           : ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h666fa1ae__0)
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

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__3(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__rv32e__DOT__if_sram_arvalid = 0U;
        vlSelf->__Vdly__rv32e__DOT__if_sram_araddr = 0U;
        vlSelf->__Vdly__rv32e__DOT__if_sram_rready = 0U;
        vlSelf->rv32e__DOT__IF_ID_inst = 0U;
        vlSelf->rv32e__DOT__IF_valid = 0U;
        vlSelf->__Vdly__rv32e__DOT__ifu__DOT__read_pending = 0U;
        vlSelf->__Vdly__rv32e__DOT__ifu__DOT__read_valid = 0U;
        vlSelf->__Vdly__rv32e__DOT__IF_ID_pc = 0x80000000U;
        vlSelf->__Vdly__rv32e__DOT__ifu__DOT__next_pc = 0x80000000U;
    } else {
        if (vlSelf->rv32e__DOT__ex_flush) {
            vlSelf->__Vdly__rv32e__DOT__if_sram_araddr 
                = vlSelf->rv32e__DOT__ex_flush_pc;
            vlSelf->__Vdly__rv32e__DOT__if_sram_arvalid = 1U;
            vlSelf->__Vdly__rv32e__DOT__ifu__DOT__read_pending = 1U;
            vlSelf->__Vdly__rv32e__DOT__ifu__DOT__read_valid = 0U;
            vlSelf->__Vdly__rv32e__DOT__ifu__DOT__next_pc 
                = vlSelf->rv32e__DOT__ex_flush_pc;
        }
        if ((1U & ((~ (IData)(vlSelf->rv32e__DOT__ex_flush)) 
                   & (~ (IData)(vlSelf->rv32e__DOT__ifu__DOT__read_pending))))) {
            vlSelf->__Vdly__rv32e__DOT__if_sram_arvalid = 1U;
            vlSelf->__Vdly__rv32e__DOT__if_sram_araddr 
                = vlSelf->rv32e__DOT__ifu__DOT__next_pc;
            vlSelf->__Vdly__rv32e__DOT__if_sram_rready = 0U;
            vlSelf->__Vdly__rv32e__DOT__ifu__DOT__read_pending = 1U;
            vlSelf->__Vdly__rv32e__DOT__ifu__DOT__read_valid = 0U;
            vlSelf->rv32e__DOT__IF_valid = 0U;
        }
        if (((IData)(vlSelf->rv32e__DOT__if_sram_arvalid) 
             & (IData)(vlSelf->rv32e__DOT__sram_if_arready))) {
            vlSelf->__Vdly__rv32e__DOT__if_sram_arvalid = 0U;
            vlSelf->__Vdly__rv32e__DOT__if_sram_rready = 1U;
        }
        if (((IData)(vlSelf->rv32e__DOT__sram_if_rvalid) 
             & (IData)(vlSelf->rv32e__DOT__if_sram_rready))) {
            vlSelf->__Vdly__rv32e__DOT__ifu__DOT__next_pc 
                = ((IData)(4U) + vlSelf->rv32e__DOT__ifu__DOT__next_pc);
            if (VL_UNLIKELY((0U != (IData)(vlSelf->rv32e__DOT__sram_if_rresp)))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(2U, 0xdeadbeefU);
                VL_WRITEF("\033[31mIF_AXI: Read access fault at address %x, rresp %b\033[0m\n",
                          32,vlSelf->rv32e__DOT__IF_ID_pc,
                          2,(IData)(vlSelf->rv32e__DOT__sram_if_rresp));
            }
            vlSelf->__Vdly__rv32e__DOT__if_sram_rready = 0U;
            vlSelf->__Vdly__rv32e__DOT__ifu__DOT__read_pending = 0U;
            vlSelf->__Vdly__rv32e__DOT__ifu__DOT__read_valid = 1U;
            vlSelf->rv32e__DOT__IF_ID_inst = vlSelf->rv32e__DOT__sram_if_rdata;
            vlSelf->rv32e__DOT__IF_valid = 1U;
            vlSelf->__Vdly__rv32e__DOT__IF_ID_pc = vlSelf->rv32e__DOT__ifu__DOT__next_pc;
        } else if ((1U & ((~ (IData)(vlSelf->rv32e__DOT__ifu__DOT__read_valid)) 
                          & (~ (IData)(vlSelf->rv32e__DOT__ex_flush))))) {
            vlSelf->rv32e__DOT__IF_valid = 0U;
        }
    }
    vlSelf->rv32e__DOT__ifu__DOT__read_pending = vlSelf->__Vdly__rv32e__DOT__ifu__DOT__read_pending;
    vlSelf->rv32e__DOT__ifu__DOT__read_valid = vlSelf->__Vdly__rv32e__DOT__ifu__DOT__read_valid;
    vlSelf->rv32e__DOT__ifu__DOT__next_pc = vlSelf->__Vdly__rv32e__DOT__ifu__DOT__next_pc;
    vlSelf->rv32e__DOT__IF_ID_pc = vlSelf->__Vdly__rv32e__DOT__IF_ID_pc;
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

VL_INLINE_OPT void Vrv32e___024root___nba_comb__TOP__1(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_comb__TOP__1\n"); );
    // Body
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
}

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__4(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__4\n"); );
    // Init
    IData/*31:0*/ __Vfunc_rv32e__DOT__sram__DOT__pmem_read__1__Vfuncout;
    __Vfunc_rv32e__DOT__sram__DOT__pmem_read__1__Vfuncout = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__rv32e__DOT__sram_if_arready = 1U;
        vlSelf->__Vdly__rv32e__DOT__sram_if_rvalid = 0U;
        vlSelf->rv32e__DOT__sram_if_rdata = 0U;
        vlSelf->rv32e__DOT__sram_if_rresp = 0U;
        vlSelf->__Vdly__rv32e__DOT__sram__DOT__read_pending = 0U;
        vlSelf->__Vdly__rv32e__DOT__sram__DOT__LFSR = 1U;
    } else {
        if (((IData)(vlSelf->rv32e__DOT__if_sram_arvalid) 
             & (IData)(vlSelf->rv32e__DOT__sram_if_arready))) {
            vlSelf->__Vdly__rv32e__DOT__sram__DOT__read_addr 
                = vlSelf->rv32e__DOT__if_sram_araddr;
            vlSelf->__Vdly__rv32e__DOT__sram__DOT__read_pending = 1U;
            vlSelf->__Vdly__rv32e__DOT__sram_if_arready = 0U;
            vlSelf->__Vdly__rv32e__DOT__sram__DOT__LFSR = 1U;
        }
        if (vlSelf->rv32e__DOT__sram__DOT__read_pending) {
            if ((0U < vlSelf->rv32e__DOT__sram__DOT__LFSR)) {
                vlSelf->__Vdly__rv32e__DOT__sram__DOT__LFSR 
                    = (vlSelf->rv32e__DOT__sram__DOT__LFSR 
                       - (IData)(1U));
            } else {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__sram__DOT__read_addr, 4U, __Vfunc_rv32e__DOT__sram__DOT__pmem_read__1__Vfuncout);
                vlSelf->rv32e__DOT__sram_if_rdata = __Vfunc_rv32e__DOT__sram__DOT__pmem_read__1__Vfuncout;
                vlSelf->__Vdly__rv32e__DOT__sram_if_rvalid = 1U;
                vlSelf->rv32e__DOT__sram_if_rresp = 0U;
            }
        }
        if (((IData)(vlSelf->rv32e__DOT__sram_if_rvalid) 
             & (IData)(vlSelf->rv32e__DOT__if_sram_rready))) {
            vlSelf->__Vdly__rv32e__DOT__sram_if_rvalid = 0U;
            vlSelf->__Vdly__rv32e__DOT__sram__DOT__read_pending = 0U;
            vlSelf->__Vdly__rv32e__DOT__sram_if_arready = 1U;
        }
    }
    vlSelf->rv32e__DOT__sram__DOT__read_pending = vlSelf->__Vdly__rv32e__DOT__sram__DOT__read_pending;
    vlSelf->rv32e__DOT__sram_if_arready = vlSelf->__Vdly__rv32e__DOT__sram_if_arready;
    vlSelf->rv32e__DOT__sram__DOT__read_addr = vlSelf->__Vdly__rv32e__DOT__sram__DOT__read_addr;
    vlSelf->rv32e__DOT__sram_if_rvalid = vlSelf->__Vdly__rv32e__DOT__sram_if_rvalid;
    vlSelf->rv32e__DOT__sram__DOT__LFSR = vlSelf->__Vdly__rv32e__DOT__sram__DOT__LFSR;
}

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__5(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->rv32e__DOT__if_sram_araddr = vlSelf->__Vdly__rv32e__DOT__if_sram_araddr;
    vlSelf->rv32e__DOT__if_sram_arvalid = vlSelf->__Vdly__rv32e__DOT__if_sram_arvalid;
    vlSelf->rv32e__DOT__if_sram_rready = vlSelf->__Vdly__rv32e__DOT__if_sram_rready;
}

void Vrv32e___024root___eval_nba(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrv32e___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vrv32e___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrv32e___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vrv32e___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vrv32e___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vrv32e___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrv32e___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vrv32e___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
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
                    VL_FATAL_MT("/home/furina/ysyx-workbench/npc/Npipeline-vsrc/rv32e.v", 4, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/furina/ysyx-workbench/npc/Npipeline-vsrc/rv32e.v", 4, "", "NBA region did not converge.");
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
