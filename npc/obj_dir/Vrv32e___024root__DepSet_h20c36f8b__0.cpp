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
extern const VlUnpacked<CData/*0:0*/, 256> Vrv32e__ConstPool__TABLE_hb5b1a589_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vrv32e__ConstPool__TABLE_h8e3c1913_0;
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ len);
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ifu__DOT__counter_TOP(IData/*31:0*/ inst_type, IData/*31:0*/ ifu_inc, IData/*31:0*/ lsu_inc, IData/*31:0*/ exu_inc);

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_rv32e__DOT__sram__DOT__pmem_read__1__Vfuncout;
    __Vfunc_rv32e__DOT__sram__DOT__pmem_read__1__Vfuncout = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__sram_arready;
    __Vdly__rv32e__DOT__sram_arready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__sram_rvalid;
    __Vdly__rv32e__DOT__sram_rvalid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__sram__DOT__read_pending;
    __Vdly__rv32e__DOT__sram__DOT__read_pending = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__sram__DOT__LFSR;
    __Vdly__rv32e__DOT__sram__DOT__LFSR = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__sram__DOT__read_addr;
    __Vdly__rv32e__DOT__sram__DOT__read_addr = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__sram_awready;
    __Vdly__rv32e__DOT__sram_awready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__sram_wready;
    __Vdly__rv32e__DOT__sram_wready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__sram_bvalid;
    __Vdly__rv32e__DOT__sram_bvalid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__sram__DOT__write_addr_valid;
    __Vdly__rv32e__DOT__sram__DOT__write_addr_valid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__sram__DOT__write_data_valid;
    __Vdly__rv32e__DOT__sram__DOT__write_data_valid = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__sram__DOT__write_addr;
    __Vdly__rv32e__DOT__sram__DOT__write_addr = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__sram__DOT__write_data;
    __Vdly__rv32e__DOT__sram__DOT__write_data = 0;
    CData/*3:0*/ __Vdly__rv32e__DOT__sram__DOT__write_strb;
    __Vdly__rv32e__DOT__sram__DOT__write_strb = 0;
    QData/*63:0*/ __Vdly__rv32e__DOT__clint__DOT__mtime;
    __Vdly__rv32e__DOT__clint__DOT__mtime = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__clint__DOT__clint_state;
    __Vdly__rv32e__DOT__clint__DOT__clint_state = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__clint_arready;
    __Vdly__rv32e__DOT__clint_arready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__clint_wready;
    __Vdly__rv32e__DOT__clint_wready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__clint_awready;
    __Vdly__rv32e__DOT__clint_awready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__clint_bvalid;
    __Vdly__rv32e__DOT__clint_bvalid = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__clint__DOT__LFSR;
    __Vdly__rv32e__DOT__clint__DOT__LFSR = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__clint__DOT__araddr_reg;
    __Vdly__rv32e__DOT__clint__DOT__araddr_reg = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__clint__DOT__rdata_reg;
    __Vdly__rv32e__DOT__clint__DOT__rdata_reg = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__clint__DOT__next_clint_state;
    __Vdly__rv32e__DOT__clint__DOT__next_clint_state = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__uart__DOT__uart_state;
    __Vdly__rv32e__DOT__uart__DOT__uart_state = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__uart_arready;
    __Vdly__rv32e__DOT__uart_arready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__uart_wready;
    __Vdly__rv32e__DOT__uart_wready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__uart_awready;
    __Vdly__rv32e__DOT__uart_awready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__uart_bvalid;
    __Vdly__rv32e__DOT__uart_bvalid = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__uart__DOT__LFSR;
    __Vdly__rv32e__DOT__uart__DOT__LFSR = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__uart__DOT__wdata_reg;
    __Vdly__rv32e__DOT__uart__DOT__wdata_reg = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__uart__DOT__rdata_reg;
    __Vdly__rv32e__DOT__uart__DOT__rdata_reg = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__uart__DOT__next_uart_state;
    __Vdly__rv32e__DOT__uart__DOT__next_uart_state = 0;
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
    CData/*0:0*/ __Vdly__rv32e__DOT__lsu_sram_arvalid;
    __Vdly__rv32e__DOT__lsu_sram_arvalid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__lsu_sram_rready;
    __Vdly__rv32e__DOT__lsu_sram_rready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__lsu__DOT__read_pending;
    __Vdly__rv32e__DOT__lsu__DOT__read_pending = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__lsu_sram_awvalid;
    __Vdly__rv32e__DOT__lsu_sram_awvalid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__lsu_sram_wvalid;
    __Vdly__rv32e__DOT__lsu_sram_wvalid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__lsu_sram_bready;
    __Vdly__rv32e__DOT__lsu_sram_bready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__lsu__DOT__write_pending;
    __Vdly__rv32e__DOT__lsu__DOT__write_pending = 0;
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
    __Vdly__rv32e__DOT__clint__DOT__mtime = vlSelf->rv32e__DOT__clint__DOT__mtime;
    vlSelf->__Vdly__rv32e__DOT__id_valid = vlSelf->rv32e__DOT__id_valid;
    __Vdly__rv32e__DOT__lsu__DOT__l_pc = vlSelf->rv32e__DOT__lsu__DOT__l_pc;
    vlSelf->__Vdly__rv32e__DOT__lsu_ex_ready = vlSelf->rv32e__DOT__lsu_ex_ready;
    __Vdly__rv32e__DOT__lsu__DOT__l_opcode = vlSelf->rv32e__DOT__lsu__DOT__l_opcode;
    __Vdly__rv32e__DOT__lsu__DOT__l_inst = vlSelf->rv32e__DOT__lsu__DOT__l_inst;
    __Vdly__rv32e__DOT__lsu__DOT__l_MemLen = vlSelf->rv32e__DOT__lsu__DOT__l_MemLen;
    __Vdly__rv32e__DOT__sram__DOT__write_strb = vlSelf->rv32e__DOT__sram__DOT__write_strb;
    __Vdly__rv32e__DOT__sram__DOT__write_data = vlSelf->rv32e__DOT__sram__DOT__write_data;
    __Vdly__rv32e__DOT__sram__DOT__write_addr = vlSelf->rv32e__DOT__sram__DOT__write_addr;
    __Vdly__rv32e__DOT__sram__DOT__write_data_valid 
        = vlSelf->rv32e__DOT__sram__DOT__write_data_valid;
    __Vdly__rv32e__DOT__sram__DOT__write_addr_valid 
        = vlSelf->rv32e__DOT__sram__DOT__write_addr_valid;
    __Vdly__rv32e__DOT__sram_wready = vlSelf->rv32e__DOT__sram_wready;
    __Vdly__rv32e__DOT__sram_awready = vlSelf->rv32e__DOT__sram_awready;
    __Vdly__rv32e__DOT__sram_bvalid = vlSelf->rv32e__DOT__sram_bvalid;
    __Vdly__rv32e__DOT__lsu__DOT__l_rd_en = vlSelf->rv32e__DOT__lsu__DOT__l_rd_en;
    __Vdly__rv32e__DOT__sram__DOT__read_addr = vlSelf->rv32e__DOT__sram__DOT__read_addr;
    __Vdly__rv32e__DOT__sram__DOT__read_pending = vlSelf->rv32e__DOT__sram__DOT__read_pending;
    __Vdly__rv32e__DOT__sram_arready = vlSelf->rv32e__DOT__sram_arready;
    __Vdly__rv32e__DOT__sram_rvalid = vlSelf->rv32e__DOT__sram_rvalid;
    if ((0x100073U == vlSelf->rv32e__DOT__IF_ID_inst)) {
        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(1U, vlSelf->rv32e__DOT__ex_lsu_inst);
    }
    __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr = vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr;
    __Vdly__rv32e__DOT__uart__DOT__next_uart_state 
        = vlSelf->rv32e__DOT__uart__DOT__next_uart_state;
    __Vdly__rv32e__DOT__uart__DOT__rdata_reg = vlSelf->rv32e__DOT__uart__DOT__rdata_reg;
    __Vdly__rv32e__DOT__uart__DOT__wdata_reg = vlSelf->rv32e__DOT__uart__DOT__wdata_reg;
    __Vdly__rv32e__DOT__uart__DOT__LFSR = vlSelf->rv32e__DOT__uart__DOT__LFSR;
    __Vdly__rv32e__DOT__uart__DOT__uart_state = vlSelf->rv32e__DOT__uart__DOT__uart_state;
    __Vdly__rv32e__DOT__clint__DOT__next_clint_state 
        = vlSelf->rv32e__DOT__clint__DOT__next_clint_state;
    __Vdly__rv32e__DOT__clint__DOT__rdata_reg = vlSelf->rv32e__DOT__clint__DOT__rdata_reg;
    __Vdly__rv32e__DOT__clint__DOT__araddr_reg = vlSelf->rv32e__DOT__clint__DOT__araddr_reg;
    __Vdly__rv32e__DOT__clint__DOT__LFSR = vlSelf->rv32e__DOT__clint__DOT__LFSR;
    __Vdly__rv32e__DOT__clint__DOT__clint_state = vlSelf->rv32e__DOT__clint__DOT__clint_state;
    __Vdly__rv32e__DOT__uart_awready = vlSelf->rv32e__DOT__uart_awready;
    __Vdly__rv32e__DOT__uart_wready = vlSelf->rv32e__DOT__uart_wready;
    __Vdly__rv32e__DOT__clint_awready = vlSelf->rv32e__DOT__clint_awready;
    __Vdly__rv32e__DOT__clint_wready = vlSelf->rv32e__DOT__clint_wready;
    __Vdly__rv32e__DOT__uart_arready = vlSelf->rv32e__DOT__uart_arready;
    __Vdly__rv32e__DOT__clint_arready = vlSelf->rv32e__DOT__clint_arready;
    __Vdly__rv32e__DOT__lsu__DOT__write_pending = vlSelf->rv32e__DOT__lsu__DOT__write_pending;
    __Vdly__rv32e__DOT__lsu_sram_wvalid = vlSelf->rv32e__DOT__lsu_sram_wvalid;
    __Vdly__rv32e__DOT__uart_bvalid = vlSelf->rv32e__DOT__uart_bvalid;
    __Vdly__rv32e__DOT__clint_bvalid = vlSelf->rv32e__DOT__clint_bvalid;
    __Vdly__rv32e__DOT__lsu_sram_bready = vlSelf->rv32e__DOT__lsu_sram_bready;
    __Vdly__rv32e__DOT__lsu_sram_awvalid = vlSelf->rv32e__DOT__lsu_sram_awvalid;
    __Vdly__rv32e__DOT__sram__DOT__LFSR = vlSelf->rv32e__DOT__sram__DOT__LFSR;
    __Vdly__rv32e__DOT__lsu__DOT__read_pending = vlSelf->rv32e__DOT__lsu__DOT__read_pending;
    __Vdly__rv32e__DOT__lsu_sram_rready = vlSelf->rv32e__DOT__lsu_sram_rready;
    __Vdly__rv32e__DOT__lsu_sram_arvalid = vlSelf->rv32e__DOT__lsu_sram_arvalid;
    __Vdly__rv32e__DOT__lsu_wb_valid = vlSelf->rv32e__DOT__lsu_wb_valid;
    vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type 
        = vlSelf->rv32e__DOT__idu__DOT__inst_type;
    __Vdlyvset__rv32e__DOT__wbu__DOT__regs__v0 = 0U;
    __Vdlyvset__rv32e__DOT__wbu__DOT__regs__v32 = 0U;
    __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v0 = 0U;
    __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v1 = 0U;
    __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v3 = 0U;
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
                                                 ((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                                    & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                                                   & (~ 
                                                      ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                                                       | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite))))
                                                   ? (IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite)
                                                   : (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_en)))));
    __Vtableidx1 = (((IData)(vlSelf->rv32e__DOT__lsu_wb_valid) 
                     << 7U) | (((IData)(vlSelf->rv32e__DOT__lsu__DOT__write_valid) 
                                << 6U) | (((IData)(vlSelf->rv32e__DOT__lsu__DOT__read_valid) 
                                           << 5U) | 
                                          (((IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite) 
                                            << 4U) 
                                           | (((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                                               << 3U) 
                                              | (((IData)(vlSelf->rv32e__DOT__lsu_ex_ready) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->reset))))))));
    if (Vrv32e__ConstPool__TABLE_hb5b1a589_0[__Vtableidx1]) {
        __Vdly__rv32e__DOT__lsu_wb_valid = Vrv32e__ConstPool__TABLE_h8e3c1913_0
            [__Vtableidx1];
    }
    vlSelf->rv32e__DOT__wb_valid = ((~ (IData)(vlSelf->reset)) 
                                    & (IData)(vlSelf->rv32e__DOT__lsu_wb_valid));
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__wbu__DOT__i = 0x20U;
        __Vdly__rv32e__DOT__clint__DOT__mtime = 0ULL;
        vlSelf->__Vdly__rv32e__DOT__id_valid = 0U;
        __Vdly__rv32e__DOT__lsu__DOT__l_pc = 0U;
        vlSelf->__Vdly__rv32e__DOT__lsu_ex_ready = 1U;
        __Vdly__rv32e__DOT__lsu__DOT__l_inst = 0U;
        __Vdly__rv32e__DOT__lsu__DOT__l_opcode = 0U;
        __Vdly__rv32e__DOT__lsu__DOT__l_MemLen = 0U;
        __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr = 0U;
        __Vdlyvset__rv32e__DOT__wbu__DOT__regs__v0 = 1U;
        __Vdlyvset__rv32e__DOT__wbu__DOT__CSR__v0 = 1U;
        vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition = 1U;
        vlSelf->rv32e__DOT__axi_arb__DOT__current_master = 0U;
    } else {
        __Vdly__rv32e__DOT__clint__DOT__mtime = (1ULL 
                                                 + vlSelf->rv32e__DOT__clint__DOT__mtime);
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
        if ((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
              & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
             & ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite)))) {
            __Vdly__rv32e__DOT__lsu__DOT__l_pc = vlSelf->rv32e__DOT__ex_lsu_pc;
            vlSelf->__Vdly__rv32e__DOT__lsu_ex_ready = 0U;
            __Vdly__rv32e__DOT__lsu__DOT__l_inst = vlSelf->rv32e__DOT__ex_lsu_inst;
            __Vdly__rv32e__DOT__lsu__DOT__l_opcode 
                = vlSelf->rv32e__DOT__ex_lsu_opcode;
            __Vdly__rv32e__DOT__lsu__DOT__l_MemLen 
                = vlSelf->rv32e__DOT__ex_lsu_MemLen;
            __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr 
                = vlSelf->rv32e__DOT__ex_lsu_rd;
        } else if (vlSelf->rv32e__DOT__lsu_wb_valid) {
            __Vdly__rv32e__DOT__lsu__DOT__l_pc = vlSelf->rv32e__DOT__ex_lsu_pc;
            vlSelf->__Vdly__rv32e__DOT__lsu_ex_ready = 1U;
            __Vdly__rv32e__DOT__lsu__DOT__l_opcode 
                = (0x7fU & vlSelf->rv32e__DOT__lsu__DOT__l_inst);
            __Vdly__rv32e__DOT__lsu__DOT__l_inst = vlSelf->rv32e__DOT__ex_lsu_inst;
            __Vdly__rv32e__DOT__lsu__DOT__l_MemLen 
                = vlSelf->rv32e__DOT__ex_lsu_MemLen;
            __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr 
                = vlSelf->rv32e__DOT__ex_lsu_rd;
        } else if ((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                     & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                    & (~ ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                          | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite))))) {
            __Vdly__rv32e__DOT__lsu__DOT__l_pc = vlSelf->rv32e__DOT__ex_lsu_pc;
            __Vdly__rv32e__DOT__lsu__DOT__l_opcode 
                = (0x7fU & vlSelf->rv32e__DOT__lsu__DOT__l_inst);
            __Vdly__rv32e__DOT__lsu__DOT__l_inst = vlSelf->rv32e__DOT__ex_lsu_inst;
            __Vdly__rv32e__DOT__lsu__DOT__l_MemLen 
                = vlSelf->rv32e__DOT__ex_lsu_MemLen;
            __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr 
                = vlSelf->rv32e__DOT__ex_lsu_rd;
        } else {
            __Vdly__rv32e__DOT__lsu__DOT__l_pc = vlSelf->rv32e__DOT__lsu__DOT__l_pc;
            __Vdly__rv32e__DOT__lsu__DOT__l_inst = vlSelf->rv32e__DOT__lsu__DOT__l_inst;
            __Vdly__rv32e__DOT__lsu__DOT__l_opcode 
                = vlSelf->rv32e__DOT__lsu__DOT__l_opcode;
            __Vdly__rv32e__DOT__lsu__DOT__l_MemLen 
                = vlSelf->rv32e__DOT__lsu__DOT__l_MemLen;
            __Vdly__rv32e__DOT__lsu__DOT__l_rd_addr 
                = vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr;
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
        if (vlSelf->rv32e__DOT__ex_flush) {
            vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition = 0U;
        } else if (vlSelf->rv32e__DOT__ex_lsu_valid) {
            vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition = 1U;
        }
        vlSelf->rv32e__DOT__axi_arb__DOT__current_master 
            = vlSelf->rv32e__DOT__axi_arb__DOT__next_master;
    }
    if (vlSelf->reset) {
        __Vdly__rv32e__DOT__sram_awready = 1U;
        __Vdly__rv32e__DOT__sram_wready = 1U;
        __Vdly__rv32e__DOT__sram_bvalid = 0U;
        vlSelf->rv32e__DOT__sram_bresp = 0U;
        __Vdly__rv32e__DOT__sram__DOT__write_addr_valid = 0U;
        __Vdly__rv32e__DOT__sram__DOT__write_data_valid = 0U;
    } else {
        if (((IData)(vlSelf->rv32e__DOT__sram_awvalid) 
             & (IData)(vlSelf->rv32e__DOT__sram_awready))) {
            __Vdly__rv32e__DOT__sram__DOT__write_addr 
                = vlSelf->rv32e__DOT__sram_awaddr;
            __Vdly__rv32e__DOT__sram__DOT__write_addr_valid = 1U;
            __Vdly__rv32e__DOT__sram_awready = 0U;
            __Vdly__rv32e__DOT__sram__DOT__LFSR = 1U;
        }
        if (((IData)(vlSelf->rv32e__DOT__sram_wvalid) 
             & (IData)(vlSelf->rv32e__DOT__sram_wready))) {
            __Vdly__rv32e__DOT__sram__DOT__write_data 
                = vlSelf->rv32e__DOT__sram_wdata;
            __Vdly__rv32e__DOT__sram__DOT__write_strb 
                = vlSelf->rv32e__DOT__sram_wstrb;
            __Vdly__rv32e__DOT__sram__DOT__write_data_valid = 1U;
            __Vdly__rv32e__DOT__sram_wready = 0U;
        }
        if (((IData)(vlSelf->rv32e__DOT__sram__DOT__write_addr_valid) 
             & (IData)(vlSelf->rv32e__DOT__sram__DOT__write_data_valid))) {
            if ((0U < vlSelf->rv32e__DOT__sram__DOT__LFSR)) {
                __Vdly__rv32e__DOT__sram__DOT__LFSR 
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
                __Vdly__rv32e__DOT__sram_bvalid = 1U;
                vlSelf->rv32e__DOT__sram_bresp = 0U;
                __Vdly__rv32e__DOT__sram__DOT__write_addr_valid = 0U;
                __Vdly__rv32e__DOT__sram__DOT__write_data_valid = 0U;
                __Vdly__rv32e__DOT__sram_awready = 1U;
                __Vdly__rv32e__DOT__sram_wready = 1U;
            }
        }
        if (((IData)(vlSelf->rv32e__DOT__sram_bvalid) 
             & (IData)(vlSelf->rv32e__DOT__sram_bready))) {
            __Vdly__rv32e__DOT__sram_bvalid = 0U;
        }
    }
    if (vlSelf->reset) {
        __Vdly__rv32e__DOT__sram_arready = 1U;
        __Vdly__rv32e__DOT__sram_rvalid = 0U;
        vlSelf->rv32e__DOT__sram_rdata = 0U;
        vlSelf->rv32e__DOT__sram_rresp = 0U;
        __Vdly__rv32e__DOT__sram__DOT__read_pending = 0U;
        __Vdly__rv32e__DOT__sram__DOT__LFSR = 1U;
    } else {
        if (((IData)(vlSelf->rv32e__DOT__sram_arvalid) 
             & (IData)(vlSelf->rv32e__DOT__sram_arready))) {
            __Vdly__rv32e__DOT__sram__DOT__read_addr 
                = vlSelf->rv32e__DOT__sram_araddr;
            __Vdly__rv32e__DOT__sram__DOT__read_pending = 1U;
            __Vdly__rv32e__DOT__sram_arready = 0U;
            __Vdly__rv32e__DOT__sram__DOT__LFSR = 1U;
        }
        if (vlSelf->rv32e__DOT__sram__DOT__read_pending) {
            if ((0U < vlSelf->rv32e__DOT__sram__DOT__LFSR)) {
                __Vdly__rv32e__DOT__sram__DOT__LFSR 
                    = (vlSelf->rv32e__DOT__sram__DOT__LFSR 
                       - (IData)(1U));
            } else {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__sram__DOT__read_addr, 4U, __Vfunc_rv32e__DOT__sram__DOT__pmem_read__1__Vfuncout);
                vlSelf->rv32e__DOT__sram_rdata = __Vfunc_rv32e__DOT__sram__DOT__pmem_read__1__Vfuncout;
                __Vdly__rv32e__DOT__sram_rvalid = 1U;
                vlSelf->rv32e__DOT__sram_rresp = 0U;
            }
        }
        if (((IData)(vlSelf->rv32e__DOT__sram_rvalid) 
             & (IData)(vlSelf->rv32e__DOT__sram_rready))) {
            __Vdly__rv32e__DOT__sram_rvalid = 0U;
            __Vdly__rv32e__DOT__sram__DOT__read_pending = 0U;
            __Vdly__rv32e__DOT__sram_arready = 1U;
        }
    }
    if (vlSelf->reset) {
        __Vdly__rv32e__DOT__uart__DOT__uart_state = 0U;
        __Vdly__rv32e__DOT__uart_arready = 0U;
        vlSelf->rv32e__DOT__uart_rvalid = 0U;
        __Vdly__rv32e__DOT__uart_wready = 0U;
        __Vdly__rv32e__DOT__uart_awready = 0U;
        __Vdly__rv32e__DOT__uart_bvalid = 0U;
        vlSelf->rv32e__DOT__uart_rdata = 0U;
        vlSelf->rv32e__DOT__uart_rresp = 0U;
        vlSelf->rv32e__DOT__uart_bresp = 0U;
        __Vdly__rv32e__DOT__uart__DOT__LFSR = 1U;
        vlSelf->rv32e__DOT__uart__DOT__araddr_reg = 0U;
        vlSelf->rv32e__DOT__uart__DOT__awaddr_reg = 0U;
        __Vdly__rv32e__DOT__uart__DOT__wdata_reg = 0U;
        __Vdly__rv32e__DOT__uart__DOT__rdata_reg = 0U;
        vlSelf->rv32e__DOT__uart__DOT__wstrb_reg = 0U;
    } else {
        if ((0U == vlSelf->rv32e__DOT__uart__DOT__uart_state)) {
            __Vdly__rv32e__DOT__uart_arready = 1U;
            __Vdly__rv32e__DOT__uart_awready = 1U;
            vlSelf->rv32e__DOT__uart_rvalid = 0U;
            __Vdly__rv32e__DOT__uart_bvalid = 0U;
            __Vdly__rv32e__DOT__uart__DOT__LFSR = VL_URANDOM_RANGE_I(1U, 0xaU);
            if (((IData)(vlSelf->rv32e__DOT__uart_arvalid) 
                 & (IData)(vlSelf->rv32e__DOT__uart_arready))) {
                vlSelf->rv32e__DOT__uart__DOT__araddr_reg 
                    = vlSelf->rv32e__DOT__uart_araddr;
                __Vdly__rv32e__DOT__uart_arready = 0U;
                __Vdly__rv32e__DOT__uart__DOT__next_uart_state = 1U;
            } else if (((IData)(vlSelf->rv32e__DOT__uart_awvalid) 
                        & (IData)(vlSelf->rv32e__DOT__uart_awready))) {
                vlSelf->rv32e__DOT__uart__DOT__awaddr_reg 
                    = vlSelf->rv32e__DOT__uart_awaddr;
                __Vdly__rv32e__DOT__uart__DOT__wdata_reg 
                    = vlSelf->rv32e__DOT__uart_wdata;
                vlSelf->rv32e__DOT__uart__DOT__wstrb_reg 
                    = vlSelf->rv32e__DOT__uart_wstrb;
                __Vdly__rv32e__DOT__uart_awready = 0U;
                __Vdly__rv32e__DOT__uart__DOT__next_uart_state = 3U;
            }
        } else if ((1U == vlSelf->rv32e__DOT__uart__DOT__uart_state)) {
            if ((0U < vlSelf->rv32e__DOT__uart__DOT__LFSR)) {
                __Vdly__rv32e__DOT__uart__DOT__LFSR 
                    = (vlSelf->rv32e__DOT__uart__DOT__LFSR 
                       - (IData)(1U));
                __Vdly__rv32e__DOT__uart__DOT__next_uart_state = 1U;
            } else {
                if (vlSelf->rv32e__DOT__uart__DOT__addr_valid) {
                    __Vdly__rv32e__DOT__uart__DOT__rdata_reg = 0U;
                    vlSelf->rv32e__DOT__uart_rresp = 0U;
                } else {
                    __Vdly__rv32e__DOT__uart__DOT__rdata_reg = 0U;
                    vlSelf->rv32e__DOT__uart_rresp = 2U;
                }
                __Vdly__rv32e__DOT__uart__DOT__next_uart_state = 2U;
            }
        } else if ((2U == vlSelf->rv32e__DOT__uart__DOT__uart_state)) {
            if (vlSelf->rv32e__DOT__uart_rready) {
                vlSelf->rv32e__DOT__uart_rdata = vlSelf->rv32e__DOT__uart__DOT__rdata_reg;
                vlSelf->rv32e__DOT__uart_rvalid = 1U;
                vlSelf->rv32e__DOT__uart__DOT__araddr_reg = 0U;
                __Vdly__rv32e__DOT__uart__DOT__next_uart_state = 0U;
            } else {
                __Vdly__rv32e__DOT__uart__DOT__next_uart_state = 2U;
            }
        } else if ((3U == vlSelf->rv32e__DOT__uart__DOT__uart_state)) {
            if ((0U < vlSelf->rv32e__DOT__uart__DOT__LFSR)) {
                __Vdly__rv32e__DOT__uart__DOT__LFSR 
                    = (vlSelf->rv32e__DOT__uart__DOT__LFSR 
                       - (IData)(1U));
                __Vdly__rv32e__DOT__uart__DOT__next_uart_state = 3U;
            } else {
                __Vdly__rv32e__DOT__uart__DOT__next_uart_state = 4U;
            }
        } else if ((4U == vlSelf->rv32e__DOT__uart__DOT__uart_state)) {
            __Vdly__rv32e__DOT__uart_wready = 1U;
            if (((IData)(vlSelf->rv32e__DOT__uart_wvalid) 
                 & (IData)(vlSelf->rv32e__DOT__uart_wready))) {
                if (VL_UNLIKELY(vlSelf->rv32e__DOT__uart__DOT__addr_valid)) {
                    VL_WRITEF("%c",8,(0xffU & vlSelf->rv32e__DOT__uart__DOT__wdata_reg));
                    vlSelf->rv32e__DOT__uart_bresp = 0U;
                } else {
                    vlSelf->rv32e__DOT__uart_bresp = 2U;
                }
                __Vdly__rv32e__DOT__uart_wready = 0U;
                __Vdly__rv32e__DOT__uart__DOT__next_uart_state = 5U;
            }
        } else if ((5U == vlSelf->rv32e__DOT__uart__DOT__uart_state)) {
            __Vdly__rv32e__DOT__uart_bvalid = 1U;
            __Vdly__rv32e__DOT__uart_wready = 0U;
            if (((IData)(vlSelf->rv32e__DOT__uart_bvalid) 
                 & (IData)(vlSelf->rv32e__DOT__uart_bready))) {
                __Vdly__rv32e__DOT__uart_awready = 1U;
                __Vdly__rv32e__DOT__uart_bvalid = 0U;
                __Vdly__rv32e__DOT__uart__DOT__next_uart_state = 0U;
            }
        } else {
            __Vdly__rv32e__DOT__uart__DOT__next_uart_state = 0U;
        }
        __Vdly__rv32e__DOT__uart__DOT__uart_state = vlSelf->rv32e__DOT__uart__DOT__next_uart_state;
    }
    if (vlSelf->reset) {
        __Vdly__rv32e__DOT__clint__DOT__clint_state = 0U;
        __Vdly__rv32e__DOT__clint_arready = 0U;
        vlSelf->rv32e__DOT__clint_rvalid = 0U;
        __Vdly__rv32e__DOT__clint_wready = 0U;
        __Vdly__rv32e__DOT__clint_awready = 0U;
        __Vdly__rv32e__DOT__clint_bvalid = 0U;
        vlSelf->rv32e__DOT__clint_rdata = 0U;
        vlSelf->rv32e__DOT__clint_rresp = 0U;
        vlSelf->rv32e__DOT__clint_bresp = 0U;
        __Vdly__rv32e__DOT__clint__DOT__LFSR = 1U;
        __Vdly__rv32e__DOT__clint__DOT__araddr_reg = 0U;
        vlSelf->rv32e__DOT__clint__DOT__awaddr_reg = 0U;
        vlSelf->rv32e__DOT__clint__DOT__wdata_reg = 0U;
        __Vdly__rv32e__DOT__clint__DOT__rdata_reg = 0U;
        vlSelf->rv32e__DOT__clint__DOT__wstrb_reg = 0U;
    } else {
        if ((0U == vlSelf->rv32e__DOT__clint__DOT__clint_state)) {
            __Vdly__rv32e__DOT__clint_arready = 1U;
            __Vdly__rv32e__DOT__clint_awready = 1U;
            vlSelf->rv32e__DOT__clint_rvalid = 0U;
            __Vdly__rv32e__DOT__clint_bvalid = 0U;
            __Vdly__rv32e__DOT__clint__DOT__LFSR = 
                VL_URANDOM_RANGE_I(1U, 0xaU);
            if (((IData)(vlSelf->rv32e__DOT__clint_arvalid) 
                 & (IData)(vlSelf->rv32e__DOT__clint_arready))) {
                __Vdly__rv32e__DOT__clint__DOT__araddr_reg 
                    = vlSelf->rv32e__DOT__clint_araddr;
                __Vdly__rv32e__DOT__clint_arready = 0U;
                __Vdly__rv32e__DOT__clint__DOT__next_clint_state = 1U;
            } else if (((IData)(vlSelf->rv32e__DOT__clint_awvalid) 
                        & (IData)(vlSelf->rv32e__DOT__clint_awready))) {
                vlSelf->rv32e__DOT__clint__DOT__awaddr_reg 
                    = vlSelf->rv32e__DOT__clint_awaddr;
                vlSelf->rv32e__DOT__clint__DOT__wdata_reg 
                    = vlSelf->rv32e__DOT__clint_wdata;
                vlSelf->rv32e__DOT__clint__DOT__wstrb_reg 
                    = vlSelf->rv32e__DOT__clint_wstrb;
                __Vdly__rv32e__DOT__clint_awready = 0U;
                __Vdly__rv32e__DOT__clint__DOT__next_clint_state = 3U;
            }
        } else if ((1U == vlSelf->rv32e__DOT__clint__DOT__clint_state)) {
            if ((0U < vlSelf->rv32e__DOT__clint__DOT__LFSR)) {
                __Vdly__rv32e__DOT__clint__DOT__LFSR 
                    = (vlSelf->rv32e__DOT__clint__DOT__LFSR 
                       - (IData)(1U));
                __Vdly__rv32e__DOT__clint__DOT__next_clint_state = 1U;
            } else {
                if (vlSelf->rv32e__DOT__clint__DOT__addr_valid) {
                    if ((0xa0002000U == vlSelf->rv32e__DOT__clint__DOT__araddr_reg)) {
                        __Vdly__rv32e__DOT__clint__DOT__rdata_reg 
                            = (IData)(vlSelf->rv32e__DOT__clint__DOT__mtime);
                    } else if (VL_LIKELY((0xa0002004U 
                                          == vlSelf->rv32e__DOT__clint__DOT__araddr_reg))) {
                        __Vdly__rv32e__DOT__clint__DOT__rdata_reg 
                            = (IData)((vlSelf->rv32e__DOT__clint__DOT__mtime 
                                       >> 0x20U));
                    } else {
                        VL_WRITEF("\033[31mCLINT: Invalid read address %x\033[0m\n",
                                  32,vlSelf->rv32e__DOT__clint__DOT__araddr_reg);
                        vlSelf->rv32e__DOT__clint_rdata = 0U;
                        vlSelf->rv32e__DOT__clint_rresp = 2U;
                    }
                    vlSelf->rv32e__DOT__clint_rresp = 0U;
                } else {
                    __Vdly__rv32e__DOT__clint__DOT__rdata_reg = 0U;
                    vlSelf->rv32e__DOT__clint_rresp = 2U;
                }
                __Vdly__rv32e__DOT__clint__DOT__next_clint_state = 2U;
            }
        } else if ((2U == vlSelf->rv32e__DOT__clint__DOT__clint_state)) {
            if (vlSelf->rv32e__DOT__clint_rready) {
                vlSelf->rv32e__DOT__clint_rdata = vlSelf->rv32e__DOT__clint__DOT__rdata_reg;
                vlSelf->rv32e__DOT__clint_rvalid = 1U;
                __Vdly__rv32e__DOT__clint__DOT__araddr_reg = 0U;
                __Vdly__rv32e__DOT__clint__DOT__next_clint_state = 0U;
            } else {
                __Vdly__rv32e__DOT__clint__DOT__next_clint_state = 2U;
            }
        } else if ((3U == vlSelf->rv32e__DOT__clint__DOT__clint_state)) {
            if ((0U < vlSelf->rv32e__DOT__clint__DOT__LFSR)) {
                __Vdly__rv32e__DOT__clint__DOT__LFSR 
                    = (vlSelf->rv32e__DOT__clint__DOT__LFSR 
                       - (IData)(1U));
                __Vdly__rv32e__DOT__clint__DOT__next_clint_state = 3U;
            } else {
                __Vdly__rv32e__DOT__clint__DOT__next_clint_state = 4U;
            }
        } else if ((4U == vlSelf->rv32e__DOT__clint__DOT__clint_state)) {
            __Vdly__rv32e__DOT__clint_wready = 1U;
            if (((IData)(vlSelf->rv32e__DOT__clint_wvalid) 
                 & (IData)(vlSelf->rv32e__DOT__clint_wready))) {
                vlSelf->rv32e__DOT__clint_bresp = ((IData)(vlSelf->rv32e__DOT__clint__DOT__addr_valid)
                                                    ? 0U
                                                    : 2U);
                __Vdly__rv32e__DOT__clint_wready = 0U;
                __Vdly__rv32e__DOT__clint__DOT__next_clint_state = 5U;
            }
        } else if ((5U == vlSelf->rv32e__DOT__clint__DOT__clint_state)) {
            __Vdly__rv32e__DOT__clint_bvalid = 1U;
            __Vdly__rv32e__DOT__clint_wready = 0U;
            if (((IData)(vlSelf->rv32e__DOT__clint_bready) 
                 & (IData)(vlSelf->rv32e__DOT__clint_bvalid))) {
                __Vdly__rv32e__DOT__clint_awready = 1U;
                __Vdly__rv32e__DOT__clint_bvalid = 0U;
                __Vdly__rv32e__DOT__clint__DOT__next_clint_state = 0U;
            }
        } else {
            __Vdly__rv32e__DOT__clint__DOT__next_clint_state = 0U;
        }
        __Vdly__rv32e__DOT__clint__DOT__clint_state 
            = vlSelf->rv32e__DOT__clint__DOT__next_clint_state;
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        vlSelf->rv32e__DOT__wbu__DOT__flush = vlSelf->rv32e__DOT__lsu_wb_flush;
    }
    vlSelf->rv32e__DOT__lsu__DOT__l_opcode = __Vdly__rv32e__DOT__lsu__DOT__l_opcode;
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
    vlSelf->rv32e__DOT__lsu_wb_valid = __Vdly__rv32e__DOT__lsu_wb_valid;
    vlSelf->rv32e__DOT__sram__DOT__write_addr_valid 
        = __Vdly__rv32e__DOT__sram__DOT__write_addr_valid;
    vlSelf->rv32e__DOT__sram__DOT__write_data_valid 
        = __Vdly__rv32e__DOT__sram__DOT__write_data_valid;
    vlSelf->rv32e__DOT__sram__DOT__write_addr = __Vdly__rv32e__DOT__sram__DOT__write_addr;
    vlSelf->rv32e__DOT__sram__DOT__write_data = __Vdly__rv32e__DOT__sram__DOT__write_data;
    vlSelf->rv32e__DOT__sram__DOT__write_strb = __Vdly__rv32e__DOT__sram__DOT__write_strb;
    vlSelf->rv32e__DOT__sram_awready = __Vdly__rv32e__DOT__sram_awready;
    vlSelf->rv32e__DOT__sram_wready = __Vdly__rv32e__DOT__sram_wready;
    vlSelf->rv32e__DOT__sram_bvalid = __Vdly__rv32e__DOT__sram_bvalid;
    vlSelf->rv32e__DOT__sram__DOT__read_pending = __Vdly__rv32e__DOT__sram__DOT__read_pending;
    vlSelf->rv32e__DOT__sram__DOT__read_addr = __Vdly__rv32e__DOT__sram__DOT__read_addr;
    vlSelf->rv32e__DOT__sram__DOT__LFSR = __Vdly__rv32e__DOT__sram__DOT__LFSR;
    vlSelf->rv32e__DOT__sram_arready = __Vdly__rv32e__DOT__sram_arready;
    vlSelf->rv32e__DOT__sram_rvalid = __Vdly__rv32e__DOT__sram_rvalid;
    vlSelf->rv32e__DOT__uart__DOT__uart_state = __Vdly__rv32e__DOT__uart__DOT__uart_state;
    vlSelf->rv32e__DOT__uart__DOT__LFSR = __Vdly__rv32e__DOT__uart__DOT__LFSR;
    vlSelf->rv32e__DOT__uart__DOT__wdata_reg = __Vdly__rv32e__DOT__uart__DOT__wdata_reg;
    vlSelf->rv32e__DOT__uart__DOT__rdata_reg = __Vdly__rv32e__DOT__uart__DOT__rdata_reg;
    vlSelf->rv32e__DOT__uart__DOT__next_uart_state 
        = __Vdly__rv32e__DOT__uart__DOT__next_uart_state;
    vlSelf->rv32e__DOT__uart_wready = __Vdly__rv32e__DOT__uart_wready;
    vlSelf->rv32e__DOT__uart_awready = __Vdly__rv32e__DOT__uart_awready;
    vlSelf->rv32e__DOT__uart_arready = __Vdly__rv32e__DOT__uart_arready;
    vlSelf->rv32e__DOT__uart_bvalid = __Vdly__rv32e__DOT__uart_bvalid;
    vlSelf->rv32e__DOT__clint__DOT__clint_state = __Vdly__rv32e__DOT__clint__DOT__clint_state;
    vlSelf->rv32e__DOT__clint__DOT__LFSR = __Vdly__rv32e__DOT__clint__DOT__LFSR;
    vlSelf->rv32e__DOT__clint__DOT__araddr_reg = __Vdly__rv32e__DOT__clint__DOT__araddr_reg;
    vlSelf->rv32e__DOT__clint__DOT__rdata_reg = __Vdly__rv32e__DOT__clint__DOT__rdata_reg;
    vlSelf->rv32e__DOT__clint__DOT__next_clint_state 
        = __Vdly__rv32e__DOT__clint__DOT__next_clint_state;
    vlSelf->rv32e__DOT__clint__DOT__mtime = __Vdly__rv32e__DOT__clint__DOT__mtime;
    vlSelf->rv32e__DOT__clint_wready = __Vdly__rv32e__DOT__clint_wready;
    vlSelf->rv32e__DOT__clint_awready = __Vdly__rv32e__DOT__clint_awready;
    vlSelf->rv32e__DOT__clint_arready = __Vdly__rv32e__DOT__clint_arready;
    vlSelf->rv32e__DOT__clint_bvalid = __Vdly__rv32e__DOT__clint_bvalid;
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__lsu_wb_pc = 0U;
        vlSelf->rv32e__DOT__lsu__DOT__l_pc = __Vdly__rv32e__DOT__lsu__DOT__l_pc;
        vlSelf->rv32e__DOT__lsu_wb_inst = 0U;
        vlSelf->rv32e__DOT__lsu__DOT__l_inst = __Vdly__rv32e__DOT__lsu__DOT__l_inst;
        vlSelf->rv32e__DOT__lsu_wb_write_rd_data = 0U;
        vlSelf->rv32e__DOT__lsu_wb_RegWrite = 0U;
        vlSelf->rv32e__DOT__lsu__DOT__l_rd_en = __Vdly__rv32e__DOT__lsu__DOT__l_rd_en;
        vlSelf->rv32e__DOT__lsu_wb_rd = 0U;
    } else {
        if (((IData)(vlSelf->rv32e__DOT__lsu__DOT__write_valid) 
             | (IData)(vlSelf->rv32e__DOT__lsu__DOT__read_valid))) {
            vlSelf->rv32e__DOT__lsu_wb_pc = vlSelf->rv32e__DOT__lsu__DOT__l_pc;
            vlSelf->rv32e__DOT__lsu_wb_inst = vlSelf->rv32e__DOT__lsu__DOT__l_inst;
            vlSelf->rv32e__DOT__lsu_wb_write_rd_data 
                = vlSelf->rv32e__DOT__lsu__DOT__rd_data;
            vlSelf->rv32e__DOT__lsu_wb_RegWrite = vlSelf->rv32e__DOT__lsu__DOT__l_rd_en;
            vlSelf->rv32e__DOT__lsu_wb_rd = vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr;
        } else if ((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                     & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                    & (~ ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                          | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite))))) {
            vlSelf->rv32e__DOT__lsu_wb_pc = vlSelf->rv32e__DOT__ex_lsu_pc;
            vlSelf->rv32e__DOT__lsu_wb_inst = vlSelf->rv32e__DOT__ex_lsu_inst;
            vlSelf->rv32e__DOT__lsu_wb_write_rd_data 
                = vlSelf->rv32e__DOT__lsu__DOT__rd_data;
            vlSelf->rv32e__DOT__lsu_wb_RegWrite = vlSelf->rv32e__DOT__ex_lsu_RegWrite;
            vlSelf->rv32e__DOT__lsu_wb_rd = vlSelf->rv32e__DOT__ex_lsu_rd;
        }
        vlSelf->rv32e__DOT__lsu__DOT__l_pc = __Vdly__rv32e__DOT__lsu__DOT__l_pc;
        vlSelf->rv32e__DOT__lsu__DOT__l_inst = __Vdly__rv32e__DOT__lsu__DOT__l_inst;
        vlSelf->rv32e__DOT__lsu__DOT__l_rd_en = __Vdly__rv32e__DOT__lsu__DOT__l_rd_en;
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
        vlSelf->rv32e__DOT__lsu_wb_csr_wen1 = 0U;
        vlSelf->rv32e__DOT__lsu_wb_csr_wen2 = 0U;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1 = 0U;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1 = 0U;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2 = 0U;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2 = 0U;
        vlSelf->rv32e__DOT__lsu_wb_flush = 0U;
    } else if (((IData)(vlSelf->rv32e__DOT__lsu__DOT__write_valid) 
                | (IData)(vlSelf->rv32e__DOT__lsu__DOT__read_valid))) {
        vlSelf->rv32e__DOT__lsu_wb_csr_wen1 = vlSelf->rv32e__DOT__ex_lsu_csr_wen1;
        vlSelf->rv32e__DOT__lsu_wb_csr_wen2 = vlSelf->rv32e__DOT__ex_lsu_csr_wen2;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1 = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1 = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2 = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2 = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2;
        vlSelf->rv32e__DOT__lsu_wb_flush = vlSelf->rv32e__DOT__ex_flush;
    } else if ((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                 & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                & (~ ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                      | (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite))))) {
        vlSelf->rv32e__DOT__lsu_wb_csr_wen1 = vlSelf->rv32e__DOT__ex_lsu_csr_wen1;
        vlSelf->rv32e__DOT__lsu_wb_csr_wen2 = vlSelf->rv32e__DOT__ex_lsu_csr_wen2;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1 = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1 = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2 = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2;
        vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2 = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2;
        vlSelf->rv32e__DOT__lsu_wb_flush = vlSelf->rv32e__DOT__ex_flush;
    }
    if (vlSelf->reset) {
        __Vdly__rv32e__DOT__lsu_sram_awvalid = 0U;
        vlSelf->rv32e__DOT__lsu_sram_awaddr = 0U;
        __Vdly__rv32e__DOT__lsu_sram_wvalid = 0U;
        vlSelf->rv32e__DOT__lsu_sram_wdata = 0U;
        vlSelf->rv32e__DOT__lsu_sram_wstrb = 0U;
        __Vdly__rv32e__DOT__lsu_sram_bready = 0U;
        __Vdly__rv32e__DOT__lsu__DOT__write_pending = 0U;
        vlSelf->rv32e__DOT__lsu__DOT__write_valid = 0U;
    } else {
        if ((((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
               & (~ (IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead))) 
              & (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite)) 
             & (~ (IData)(vlSelf->rv32e__DOT__lsu__DOT__write_pending)))) {
            __Vdly__rv32e__DOT__lsu_sram_awvalid = 1U;
            vlSelf->rv32e__DOT__lsu_sram_awaddr = vlSelf->rv32e__DOT__ex_lsu_process_result;
            __Vdly__rv32e__DOT__lsu_sram_wvalid = 1U;
            vlSelf->rv32e__DOT__lsu_sram_wdata = vlSelf->rv32e__DOT__ex_lsu_src2;
            __Vdly__rv32e__DOT__lsu_sram_bready = 1U;
            if ((4U == (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen))) {
                vlSelf->rv32e__DOT__lsu_sram_wstrb = 1U;
            } else if ((1U == (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen))) {
                vlSelf->rv32e__DOT__lsu_sram_wstrb = 3U;
            } else if (VL_LIKELY((2U == (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen)))) {
                vlSelf->rv32e__DOT__lsu_sram_wstrb = 0xfU;
            } else {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(2U, 0xdeadbeefU);
                vlSelf->rv32e__DOT__lsu_sram_wstrb = 0xfU;
                VL_WRITEF("\033[31mLSU_AXI: Unsupported memory write length %b at address %x\033[0m\n",
                          3,vlSelf->rv32e__DOT__ex_lsu_MemLen,
                          32,vlSelf->rv32e__DOT__ex_lsu_process_result);
            }
            __Vdly__rv32e__DOT__lsu__DOT__write_pending = 1U;
            vlSelf->rv32e__DOT__lsu__DOT__write_valid = 0U;
        }
        if (((IData)(vlSelf->rv32e__DOT__lsu_sram_awvalid) 
             & (IData)(vlSelf->rv32e__DOT__sram_lsu_awready))) {
            __Vdly__rv32e__DOT__lsu_sram_awvalid = 0U;
        }
        if (((IData)(vlSelf->rv32e__DOT__lsu_sram_wvalid) 
             & (IData)(vlSelf->rv32e__DOT__sram_lsu_wready))) {
            __Vdly__rv32e__DOT__lsu_sram_wvalid = 0U;
        }
        if (((IData)(vlSelf->rv32e__DOT__sram_lsu_bvalid) 
             & (IData)(vlSelf->rv32e__DOT__lsu_sram_bready))) {
            if (VL_UNLIKELY((0U != (IData)(vlSelf->rv32e__DOT__sram_lsu_bresp)))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(2U, 0xdeadbeefU);
                VL_WRITEF("\033[31mLSU_AXI: Write access fault at address %x, bresp %b\033[0m\n",
                          32,vlSelf->rv32e__DOT__ex_lsu_process_result,
                          2,(IData)(vlSelf->rv32e__DOT__sram_lsu_bresp));
            }
            __Vdly__rv32e__DOT__lsu_sram_bready = 0U;
            __Vdly__rv32e__DOT__lsu__DOT__write_pending = 0U;
            vlSelf->rv32e__DOT__lsu__DOT__write_valid = 1U;
        } else {
            vlSelf->rv32e__DOT__lsu__DOT__write_valid = 0U;
        }
    }
    if (vlSelf->reset) {
        __Vdly__rv32e__DOT__lsu_sram_arvalid = 0U;
        vlSelf->rv32e__DOT__lsu_sram_araddr = 0U;
        __Vdly__rv32e__DOT__lsu_sram_rready = 0U;
        __Vdly__rv32e__DOT__lsu__DOT__read_pending = 0U;
        vlSelf->rv32e__DOT__lsu__DOT__read_valid = 0U;
        vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data = 0U;
    } else {
        if ((((((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
               & (IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead)) 
              & (~ (IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite))) 
             & (~ (IData)(vlSelf->rv32e__DOT__lsu__DOT__read_pending)))) {
            __Vdly__rv32e__DOT__lsu_sram_arvalid = 1U;
            vlSelf->rv32e__DOT__lsu_sram_araddr = vlSelf->rv32e__DOT__ex_lsu_process_result;
            __Vdly__rv32e__DOT__lsu_sram_rready = 1U;
            __Vdly__rv32e__DOT__lsu__DOT__read_pending = 1U;
            vlSelf->rv32e__DOT__lsu__DOT__read_valid = 0U;
        }
        if (((IData)(vlSelf->rv32e__DOT__lsu_sram_arvalid) 
             & (IData)(vlSelf->rv32e__DOT__sram_lsu_arready))) {
            __Vdly__rv32e__DOT__lsu_sram_arvalid = 0U;
        }
        if (((IData)(vlSelf->rv32e__DOT__sram_lsu_rvalid) 
             & (IData)(vlSelf->rv32e__DOT__lsu_sram_rready))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ifu__DOT__counter_TOP(7U, 0U, 1U, 0U);
            __Vdly__rv32e__DOT__lsu_sram_rready = 0U;
            __Vdly__rv32e__DOT__lsu__DOT__read_pending = 0U;
            vlSelf->rv32e__DOT__lsu__DOT__read_valid = 1U;
            if ((4U & (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))) {
                if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(2U, 0xdeadbeefU);
                    vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data = 0U;
                    VL_WRITEF("\033[31mLSU_AXI: Unsupported memory read length %b at address %x\033[0m\n",
                              3,vlSelf->rv32e__DOT__lsu__DOT__l_MemLen,
                              32,vlSelf->rv32e__DOT__ex_lsu_process_result);
                } else if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(2U, 0xdeadbeefU);
                    vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data = 0U;
                    VL_WRITEF("\033[31mLSU_AXI: Unsupported memory read length %b at address %x\033[0m\n",
                              3,vlSelf->rv32e__DOT__lsu__DOT__l_MemLen,
                              32,vlSelf->rv32e__DOT__ex_lsu_process_result);
                } else {
                    vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                        = (((- (IData)((1U & (vlSelf->rv32e__DOT__sram_lsu_rdata 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelf->rv32e__DOT__sram_lsu_rdata));
                }
            } else {
                vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                    = ((2U & (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                        ? ((1U & (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                            ? (0xffffU & vlSelf->rv32e__DOT__sram_lsu_rdata)
                            : vlSelf->rv32e__DOT__sram_lsu_rdata)
                        : ((1U & (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                            ? (((- (IData)((1U & (vlSelf->rv32e__DOT__sram_lsu_rdata 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->rv32e__DOT__sram_lsu_rdata))
                            : (0xffU & vlSelf->rv32e__DOT__sram_lsu_rdata)));
            }
            if (VL_UNLIKELY((0U != (IData)(vlSelf->rv32e__DOT__sram_lsu_rresp)))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(2U, 0xdeadbeefU);
                VL_WRITEF("\033[31mLSU_AXI: Read access fault at address %x, rresp %b\033[0m\n",
                          32,vlSelf->rv32e__DOT__ex_lsu_process_result,
                          2,(IData)(vlSelf->rv32e__DOT__sram_lsu_rresp));
            }
        } else {
            vlSelf->rv32e__DOT__lsu__DOT__read_valid = 0U;
        }
    }
    vlSelf->rv32e__DOT__lsu__DOT__write_pending = __Vdly__rv32e__DOT__lsu__DOT__write_pending;
    vlSelf->rv32e__DOT__lsu_sram_wvalid = __Vdly__rv32e__DOT__lsu_sram_wvalid;
    vlSelf->rv32e__DOT__lsu_sram_bready = __Vdly__rv32e__DOT__lsu_sram_bready;
    vlSelf->rv32e__DOT__lsu_sram_awvalid = __Vdly__rv32e__DOT__lsu_sram_awvalid;
    vlSelf->rv32e__DOT__lsu__DOT__read_pending = __Vdly__rv32e__DOT__lsu__DOT__read_pending;
    vlSelf->rv32e__DOT__lsu__DOT__l_MemLen = __Vdly__rv32e__DOT__lsu__DOT__l_MemLen;
    vlSelf->rv32e__DOT__lsu_sram_rready = __Vdly__rv32e__DOT__lsu_sram_rready;
    vlSelf->rv32e__DOT__lsu_sram_arvalid = __Vdly__rv32e__DOT__lsu_sram_arvalid;
    vlSelf->rv32e__DOT__sram_awaddr = 0U;
    vlSelf->rv32e__DOT__sram_awvalid = 0U;
    vlSelf->rv32e__DOT__uart_awaddr = 0U;
    vlSelf->rv32e__DOT__uart_awvalid = 0U;
    vlSelf->rv32e__DOT__clint_awaddr = 0U;
    vlSelf->rv32e__DOT__clint_awvalid = 0U;
    vlSelf->rv32e__DOT__sram_lsu_awready = 0U;
    if ((3U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__addr 
            = vlSelf->rv32e__DOT__lsu_sram_awaddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__addr))
                                  ? 3U : 0U)));
        if ((2U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__Vfuncout))) {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__addr 
                = vlSelf->rv32e__DOT__lsu_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__Vfuncout))) {
                vlSelf->rv32e__DOT__clint_awaddr = vlSelf->rv32e__DOT__lsu_sram_awaddr;
                vlSelf->rv32e__DOT__clint_awvalid = vlSelf->rv32e__DOT__lsu_sram_awvalid;
                vlSelf->rv32e__DOT__sram_lsu_awready 
                    = vlSelf->rv32e__DOT__clint_awready;
                vlSelf->rv32e__DOT__sram_awaddr = 0U;
                vlSelf->rv32e__DOT__sram_awvalid = 0U;
                vlSelf->rv32e__DOT__uart_awaddr = 0U;
                vlSelf->rv32e__DOT__uart_awvalid = 0U;
            } else {
                vlSelf->rv32e__DOT__uart_awaddr = vlSelf->rv32e__DOT__lsu_sram_awaddr;
                vlSelf->rv32e__DOT__uart_awvalid = vlSelf->rv32e__DOT__lsu_sram_awvalid;
                vlSelf->rv32e__DOT__sram_lsu_awready 
                    = vlSelf->rv32e__DOT__uart_awready;
                vlSelf->rv32e__DOT__sram_awaddr = 0U;
                vlSelf->rv32e__DOT__sram_awvalid = 0U;
                vlSelf->rv32e__DOT__clint_awaddr = 0U;
                vlSelf->rv32e__DOT__clint_awvalid = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__addr 
                = vlSelf->rv32e__DOT__lsu_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__addr))
                                      ? 3U : 0U)));
            if (VL_LIKELY((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__Vfuncout)))) {
                vlSelf->rv32e__DOT__sram_awaddr = vlSelf->rv32e__DOT__lsu_sram_awaddr;
                vlSelf->rv32e__DOT__sram_awvalid = vlSelf->rv32e__DOT__lsu_sram_awvalid;
                vlSelf->rv32e__DOT__sram_lsu_awready 
                    = vlSelf->rv32e__DOT__sram_awready;
                vlSelf->rv32e__DOT__uart_awaddr = 0U;
                vlSelf->rv32e__DOT__uart_awvalid = 0U;
                vlSelf->rv32e__DOT__clint_awaddr = 0U;
                vlSelf->rv32e__DOT__clint_awvalid = 0U;
            } else {
                vlSelf->rv32e__DOT__sram_awaddr = 0U;
                vlSelf->rv32e__DOT__sram_awvalid = 0U;
                vlSelf->rv32e__DOT__uart_awaddr = 0U;
                vlSelf->rv32e__DOT__uart_awvalid = 0U;
                vlSelf->rv32e__DOT__clint_awaddr = 0U;
                vlSelf->rv32e__DOT__clint_awvalid = 0U;
                vlSelf->rv32e__DOT__sram_lsu_awready = 1U;
                VL_WRITEF("\033[31m[ARB][LSU][AW] \345\234\260\345\235\200\350\247\243\347\240\201\351\224\231\350\257\257\357\274\201\345\234\260\345\235\200: %x\033[0m\n",
                          32,vlSelf->rv32e__DOT__lsu_sram_awaddr);
            }
        }
    } else if ((4U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->rv32e__DOT__sram_lsu_awready = vlSelf->rv32e__DOT__lsu_sram_awvalid;
        vlSelf->rv32e__DOT__sram_awaddr = 0U;
        vlSelf->rv32e__DOT__sram_awvalid = 0U;
        vlSelf->rv32e__DOT__uart_awaddr = 0U;
        vlSelf->rv32e__DOT__uart_awvalid = 0U;
        vlSelf->rv32e__DOT__clint_awaddr = 0U;
        vlSelf->rv32e__DOT__clint_awvalid = 0U;
    } else {
        vlSelf->rv32e__DOT__sram_awaddr = 0U;
        vlSelf->rv32e__DOT__sram_awvalid = 0U;
        vlSelf->rv32e__DOT__uart_awaddr = 0U;
        vlSelf->rv32e__DOT__uart_awvalid = 0U;
        vlSelf->rv32e__DOT__clint_awaddr = 0U;
        vlSelf->rv32e__DOT__clint_awvalid = 0U;
        vlSelf->rv32e__DOT__sram_lsu_awready = 0U;
    }
    vlSelf->rv32e__DOT__sram_wdata = 0U;
    vlSelf->rv32e__DOT__sram_wstrb = 0U;
    vlSelf->rv32e__DOT__sram_wvalid = 0U;
    vlSelf->rv32e__DOT__uart_wdata = 0U;
    vlSelf->rv32e__DOT__uart_wstrb = 0U;
    vlSelf->rv32e__DOT__uart_wvalid = 0U;
    vlSelf->rv32e__DOT__clint_wdata = 0U;
    vlSelf->rv32e__DOT__clint_wstrb = 0U;
    vlSelf->rv32e__DOT__clint_wvalid = 0U;
    vlSelf->rv32e__DOT__sram_lsu_wready = 0U;
    vlSelf->rv32e__DOT__sram_bready = 0U;
    vlSelf->rv32e__DOT__uart_bready = 0U;
    vlSelf->rv32e__DOT__clint_bready = 0U;
    vlSelf->rv32e__DOT__sram_lsu_bresp = 0U;
    vlSelf->rv32e__DOT__sram_lsu_bvalid = 0U;
    if ((3U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr 
            = vlSelf->rv32e__DOT__lsu_sram_awaddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr))
                                  ? 3U : 0U)));
        if ((2U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__Vfuncout))) {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr 
                = vlSelf->rv32e__DOT__lsu_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__Vfuncout))) {
                vlSelf->rv32e__DOT__clint_wdata = vlSelf->rv32e__DOT__lsu_sram_wdata;
                vlSelf->rv32e__DOT__clint_wstrb = vlSelf->rv32e__DOT__lsu_sram_wstrb;
                vlSelf->rv32e__DOT__clint_wvalid = vlSelf->rv32e__DOT__lsu_sram_wvalid;
                vlSelf->rv32e__DOT__sram_lsu_wready 
                    = vlSelf->rv32e__DOT__clint_wready;
                vlSelf->rv32e__DOT__sram_wdata = 0U;
                vlSelf->rv32e__DOT__sram_wstrb = 0U;
                vlSelf->rv32e__DOT__sram_wvalid = 0U;
                vlSelf->rv32e__DOT__uart_wdata = 0U;
                vlSelf->rv32e__DOT__uart_wstrb = 0U;
                vlSelf->rv32e__DOT__uart_wvalid = 0U;
            } else {
                vlSelf->rv32e__DOT__uart_wdata = vlSelf->rv32e__DOT__lsu_sram_wdata;
                vlSelf->rv32e__DOT__uart_wstrb = vlSelf->rv32e__DOT__lsu_sram_wstrb;
                vlSelf->rv32e__DOT__uart_wvalid = vlSelf->rv32e__DOT__lsu_sram_wvalid;
                vlSelf->rv32e__DOT__sram_lsu_wready 
                    = vlSelf->rv32e__DOT__uart_wready;
                vlSelf->rv32e__DOT__sram_wdata = 0U;
                vlSelf->rv32e__DOT__sram_wstrb = 0U;
                vlSelf->rv32e__DOT__sram_wvalid = 0U;
                vlSelf->rv32e__DOT__clint_wdata = 0U;
                vlSelf->rv32e__DOT__clint_wstrb = 0U;
                vlSelf->rv32e__DOT__clint_wvalid = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr 
                = vlSelf->rv32e__DOT__lsu_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__Vfuncout))) {
                vlSelf->rv32e__DOT__sram_wdata = vlSelf->rv32e__DOT__lsu_sram_wdata;
                vlSelf->rv32e__DOT__sram_wstrb = vlSelf->rv32e__DOT__lsu_sram_wstrb;
                vlSelf->rv32e__DOT__sram_wvalid = vlSelf->rv32e__DOT__lsu_sram_wvalid;
                vlSelf->rv32e__DOT__sram_lsu_wready 
                    = vlSelf->rv32e__DOT__sram_wready;
                vlSelf->rv32e__DOT__uart_wdata = 0U;
                vlSelf->rv32e__DOT__uart_wstrb = 0U;
                vlSelf->rv32e__DOT__uart_wvalid = 0U;
                vlSelf->rv32e__DOT__clint_wdata = 0U;
                vlSelf->rv32e__DOT__clint_wstrb = 0U;
                vlSelf->rv32e__DOT__clint_wvalid = 0U;
            } else {
                vlSelf->rv32e__DOT__sram_wdata = 0U;
                vlSelf->rv32e__DOT__sram_wstrb = 0U;
                vlSelf->rv32e__DOT__sram_wvalid = 0U;
                vlSelf->rv32e__DOT__uart_wdata = 0U;
                vlSelf->rv32e__DOT__uart_wstrb = 0U;
                vlSelf->rv32e__DOT__uart_wvalid = 0U;
                vlSelf->rv32e__DOT__clint_wdata = 0U;
                vlSelf->rv32e__DOT__clint_wstrb = 0U;
                vlSelf->rv32e__DOT__clint_wvalid = 0U;
                vlSelf->rv32e__DOT__sram_lsu_wready 
                    = vlSelf->rv32e__DOT__lsu_sram_wvalid;
            }
        }
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__addr 
            = vlSelf->rv32e__DOT__lsu_sram_awaddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__addr))
                                  ? 3U : 0U)));
        if ((2U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__Vfuncout))) {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__addr 
                = vlSelf->rv32e__DOT__lsu_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__Vfuncout))) {
                vlSelf->rv32e__DOT__sram_lsu_bresp 
                    = vlSelf->rv32e__DOT__clint_bresp;
                vlSelf->rv32e__DOT__sram_lsu_bvalid 
                    = vlSelf->rv32e__DOT__clint_bvalid;
                vlSelf->rv32e__DOT__clint_bready = vlSelf->rv32e__DOT__lsu_sram_bready;
                vlSelf->rv32e__DOT__sram_bready = 0U;
                vlSelf->rv32e__DOT__uart_bready = 0U;
            } else {
                vlSelf->rv32e__DOT__sram_lsu_bresp 
                    = vlSelf->rv32e__DOT__uart_bresp;
                vlSelf->rv32e__DOT__sram_lsu_bvalid 
                    = vlSelf->rv32e__DOT__uart_bvalid;
                vlSelf->rv32e__DOT__uart_bready = vlSelf->rv32e__DOT__lsu_sram_bready;
                vlSelf->rv32e__DOT__sram_bready = 0U;
                vlSelf->rv32e__DOT__clint_bready = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__addr 
                = vlSelf->rv32e__DOT__lsu_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__Vfuncout))) {
                vlSelf->rv32e__DOT__sram_lsu_bresp 
                    = vlSelf->rv32e__DOT__sram_bresp;
                vlSelf->rv32e__DOT__sram_lsu_bvalid 
                    = vlSelf->rv32e__DOT__sram_bvalid;
                vlSelf->rv32e__DOT__sram_bready = vlSelf->rv32e__DOT__lsu_sram_bready;
                vlSelf->rv32e__DOT__uart_bready = 0U;
                vlSelf->rv32e__DOT__clint_bready = 0U;
            } else {
                vlSelf->rv32e__DOT__sram_lsu_bresp = 3U;
                vlSelf->rv32e__DOT__sram_lsu_bvalid 
                    = vlSelf->rv32e__DOT__lsu_sram_awvalid;
                vlSelf->rv32e__DOT__sram_bready = 0U;
                vlSelf->rv32e__DOT__uart_bready = 0U;
                vlSelf->rv32e__DOT__clint_bready = 0U;
            }
        }
    } else {
        vlSelf->rv32e__DOT__sram_wdata = 0U;
        vlSelf->rv32e__DOT__sram_wstrb = 0U;
        vlSelf->rv32e__DOT__sram_wvalid = 0U;
        vlSelf->rv32e__DOT__uart_wdata = 0U;
        vlSelf->rv32e__DOT__uart_wstrb = 0U;
        vlSelf->rv32e__DOT__uart_wvalid = 0U;
        vlSelf->rv32e__DOT__clint_wdata = 0U;
        vlSelf->rv32e__DOT__clint_wstrb = 0U;
        vlSelf->rv32e__DOT__clint_wvalid = 0U;
        vlSelf->rv32e__DOT__sram_lsu_wready = 0U;
        if ((4U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
            if (vlSelf->rv32e__DOT__lsu_sram_awvalid) {
                vlSelf->rv32e__DOT__sram_lsu_bresp = 3U;
                vlSelf->rv32e__DOT__sram_lsu_bvalid = 1U;
            }
            vlSelf->rv32e__DOT__sram_bready = 0U;
            vlSelf->rv32e__DOT__uart_bready = 0U;
            vlSelf->rv32e__DOT__clint_bready = 0U;
        } else {
            vlSelf->rv32e__DOT__sram_bready = 0U;
            vlSelf->rv32e__DOT__uart_bready = 0U;
            vlSelf->rv32e__DOT__clint_bready = 0U;
            vlSelf->rv32e__DOT__sram_lsu_bresp = 0U;
            vlSelf->rv32e__DOT__sram_lsu_bvalid = 0U;
        }
    }
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
    __Vdly__rv32e__DOT__ex_lsu_valid = vlSelf->rv32e__DOT__ex_lsu_valid;
    vlSelf->__Vdly__rv32e__DOT__ifu__DOT__once = vlSelf->rv32e__DOT__ifu__DOT__once;
    vlSelf->__Vdly__rv32e__DOT__ifu__DOT__state = vlSelf->rv32e__DOT__ifu__DOT__state;
    vlSelf->__Vdly__rv32e__DOT__IF_valid = vlSelf->rv32e__DOT__IF_valid;
    vlSelf->__Vdly__rv32e__DOT__ifu__DOT__next_pc = vlSelf->rv32e__DOT__ifu__DOT__next_pc;
    vlSelf->__Vdly__rv32e__DOT__if_sram_rready = vlSelf->rv32e__DOT__if_sram_rready;
    vlSelf->__Vdly__rv32e__DOT__if_sram_arvalid = vlSelf->rv32e__DOT__if_sram_arvalid;
    __Vdly__rv32e__DOT__ex_lsu_MemRead = vlSelf->rv32e__DOT__ex_lsu_MemRead;
    __Vdly__rv32e__DOT__ex_lsu_RegWrite = vlSelf->rv32e__DOT__ex_lsu_RegWrite;
    __Vdly__rv32e__DOT__ex_lsu_rd = vlSelf->rv32e__DOT__ex_lsu_rd;
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__ex_lsu_csr_rdata = 0U;
        vlSelf->rv32e__DOT__ex_lsu_src2 = 0U;
        vlSelf->rv32e__DOT__ex_lsu_process_result = 0U;
    } else if (((IData)(vlSelf->rv32e__DOT__id_valid) 
                & (IData)(vlSelf->rv32e__DOT__ex_ready))) {
        vlSelf->rv32e__DOT__ex_lsu_csr_rdata = vlSelf->rv32e__DOT__wb_ex_csr_num1;
        vlSelf->rv32e__DOT__ex_lsu_src2 = vlSelf->rv32e__DOT__exu__DOT__src2;
        vlSelf->rv32e__DOT__ex_lsu_process_result = vlSelf->rv32e__DOT__exu__DOT__process_result;
    } else {
        vlSelf->rv32e__DOT__ex_lsu_csr_rdata = vlSelf->rv32e__DOT__ex_lsu_csr_rdata;
        vlSelf->rv32e__DOT__ex_lsu_src2 = vlSelf->rv32e__DOT__ex_lsu_src2;
        vlSelf->rv32e__DOT__ex_lsu_process_result = vlSelf->rv32e__DOT__ex_lsu_process_result;
    }
    if (vlSelf->reset) {
        __Vdly__rv32e__DOT__ex_lsu_valid = 0U;
    } else if ((((IData)(vlSelf->rv32e__DOT__id_valid) 
                 & (IData)(vlSelf->rv32e__DOT__ex_ready)) 
                & ((IData)(vlSelf->rv32e__DOT__lsu_ex_ready) 
                   | (~ (IData)(vlSelf->rv32e__DOT__ex_lsu_valid))))) {
        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ifu__DOT__counter_TOP(7U, 0U, 0U, 1U);
        __Vdly__rv32e__DOT__ex_lsu_valid = 1U;
    } else if (((~ ((IData)(vlSelf->rv32e__DOT__id_valid) 
                    & (IData)(vlSelf->rv32e__DOT__ex_ready))) 
                & (IData)(vlSelf->rv32e__DOT__lsu_ex_ready))) {
        __Vdly__rv32e__DOT__ex_lsu_valid = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2 = 0U;
        vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1 = 0U;
        vlSelf->rv32e__DOT__ex_lsu_MemLen = 0U;
        vlSelf->rv32e__DOT__ex_lsu_inst = 0U;
        vlSelf->rv32e__DOT__ex_lsu_pc = 0U;
        vlSelf->rv32e__DOT__ex_lsu_imm = 0U;
        vlSelf->rv32e__DOT__ex_lsu_opcode = 0U;
        __Vdly__rv32e__DOT__ex_lsu_rd = 0U;
        vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2 = 0U;
        __Vtemp_heb90a236__0 = 0U;
    } else if (((IData)(vlSelf->rv32e__DOT__id_valid) 
                & (IData)(vlSelf->rv32e__DOT__ex_ready))) {
        vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2 = vlSelf->rv32e__DOT__id_ex_csr_wr_addr2;
        vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1 = vlSelf->rv32e__DOT__id_ex_csr_wr_addr1;
        vlSelf->rv32e__DOT__ex_lsu_MemLen = vlSelf->rv32e__DOT__id_ex_MemLen;
        vlSelf->rv32e__DOT__ex_lsu_inst = vlSelf->rv32e__DOT__id_ex_inst;
        vlSelf->rv32e__DOT__ex_lsu_pc = vlSelf->rv32e__DOT__id_ex_pc;
        vlSelf->rv32e__DOT__ex_lsu_imm = vlSelf->rv32e__DOT__id_ex_imm;
        vlSelf->rv32e__DOT__ex_lsu_opcode = vlSelf->rv32e__DOT__id_ex_opcode;
        __Vdly__rv32e__DOT__ex_lsu_rd = vlSelf->rv32e__DOT__id_ex_rd;
        vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2 = ((IData)(vlSelf->rv32e__DOT__id_ex_csr_ecall)
                                                    ? vlSelf->rv32e__DOT__id_ex_pc
                                                    : 0U);
        __Vtemp_heb90a236__0 = (((1U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
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
                                             & (5U 
                                                == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
                                             ? (IData)(vlSelf->rv32e__DOT__id_ex_zimm)
                                             : (((3U 
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
        vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2 = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2;
        vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1 = vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1;
        vlSelf->rv32e__DOT__ex_lsu_MemLen = vlSelf->rv32e__DOT__ex_lsu_MemLen;
        vlSelf->rv32e__DOT__ex_lsu_inst = vlSelf->rv32e__DOT__ex_lsu_inst;
        vlSelf->rv32e__DOT__ex_lsu_pc = vlSelf->rv32e__DOT__ex_lsu_pc;
        vlSelf->rv32e__DOT__ex_lsu_imm = vlSelf->rv32e__DOT__ex_lsu_imm;
        vlSelf->rv32e__DOT__ex_lsu_opcode = vlSelf->rv32e__DOT__ex_lsu_opcode;
        __Vdly__rv32e__DOT__ex_lsu_rd = vlSelf->rv32e__DOT__ex_lsu_rd;
        vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2 = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2;
        __Vtemp_heb90a236__0 = vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1;
    }
    vlSelf->rv32e__DOT__ex_lsu_csr_wen2 = ((~ (IData)(vlSelf->reset)) 
                                           & (((IData)(vlSelf->rv32e__DOT__id_valid) 
                                               & (IData)(vlSelf->rv32e__DOT__ex_ready))
                                               ? (IData)(vlSelf->rv32e__DOT__id_ex_csr_wen2)
                                               : (IData)(vlSelf->rv32e__DOT__ex_lsu_csr_wen2)));
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
    if (vlSelf->reset) {
        vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 7U;
        vlSelf->rv32e__DOT__id_ex_RegWrite = 0U;
        vlSelf->rv32e__DOT__id_ex_MemWrite = 0U;
        vlSelf->rv32e__DOT__id_ex_MemRead = 0U;
        vlSelf->rv32e__DOT__id_ex_jal = 0U;
        vlSelf->rv32e__DOT__id_ex_jalr = 0U;
        vlSelf->rv32e__DOT__id_ex_csr = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_wen1 = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_wen2 = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_ecall = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_mret = 0U;
        vlSelf->rv32e__DOT__id_ex_rd = 0U;
        vlSelf->rv32e__DOT__id_wb_rs1 = 0U;
        vlSelf->rv32e__DOT__id_wb_rs2 = 0U;
        vlSelf->rv32e__DOT__id_ex_zimm = 0U;
        vlSelf->rv32e__DOT__id_ex_imm = 0U;
        vlSelf->rv32e__DOT__id_ex_shamt = 0U;
        vlSelf->rv32e__DOT__id_ex_pc = 0U;
        vlSelf->rv32e__DOT__id_ex_inst = 0U;
        vlSelf->rv32e__DOT__id_ex_alu_op = 0U;
        vlSelf->rv32e__DOT__id_ex_MemLen = 0U;
        vlSelf->rv32e__DOT__id_ex_opcode = 0U;
        vlSelf->rv32e__DOT__id_ex_func3 = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_op = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_wr_addr1 = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_wr_addr2 = 0U;
        vlSelf->rv32e__DOT__id_wb_csr_addr1 = 0U;
        vlSelf->rv32e__DOT__id_wb_csr_addr2 = 0U;
    } else if (((IData)(vlSelf->rv32e__DOT__IF_valid) 
                & (IData)(vlSelf->rv32e__DOT__id_ready))) {
        if ((7U != vlSelf->rv32e__DOT__idu__DOT__inst_type)) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ifu__DOT__counter_TOP(vlSelf->rv32e__DOT__idu__DOT__inst_type, 0U, 0U, 0U);
        }
        vlSelf->rv32e__DOT__id_ex_pc = vlSelf->rv32e__DOT__IF_ID_pc;
        vlSelf->rv32e__DOT__id_ex_inst = vlSelf->rv32e__DOT__IF_ID_inst;
        vlSelf->rv32e__DOT__id_ex_rd = (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                 >> 7U));
        vlSelf->rv32e__DOT__id_wb_rs1 = (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 0xfU));
        vlSelf->rv32e__DOT__id_wb_rs2 = (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 0x14U));
        vlSelf->rv32e__DOT__id_ex_zimm = (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                   >> 0xfU));
        vlSelf->rv32e__DOT__id_ex_shamt = (0x3fU & 
                                           (vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 0x14U));
        vlSelf->rv32e__DOT__id_ex_opcode = (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst);
        vlSelf->rv32e__DOT__id_ex_func3 = (7U & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                 >> 0xcU));
        vlSelf->rv32e__DOT__id_ex_imm = 0U;
        vlSelf->rv32e__DOT__id_ex_RegWrite = 0U;
        vlSelf->rv32e__DOT__id_ex_MemWrite = 0U;
        vlSelf->rv32e__DOT__id_ex_MemRead = 0U;
        vlSelf->rv32e__DOT__id_ex_alu_op = 0U;
        vlSelf->rv32e__DOT__id_ex_MemLen = 2U;
        vlSelf->rv32e__DOT__id_ex_csr_op = 0U;
        vlSelf->rv32e__DOT__id_ex_csr = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_wen1 = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_wen2 = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_ecall = 0U;
        vlSelf->rv32e__DOT__id_ex_csr_mret = 0U;
        vlSelf->rv32e__DOT__id_ex_jal = 0U;
        vlSelf->rv32e__DOT__id_ex_jalr = 0U;
        if ((0x40U & vlSelf->rv32e__DOT__IF_ID_inst)) {
            if ((0x20U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                if ((0x10U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                    if ((8U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                        vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 7U;
                    } else if ((4U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                        vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 7U;
                    } else if ((0x73U == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst))) {
                        vlSelf->rv32e__DOT__id_ex_csr = 1U;
                        vlSelf->rv32e__DOT__id_ex_csr_wen1 = 1U;
                        if ((0x4000U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                            if ((0x2000U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                                if ((0x1000U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                                    vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                                    vlSelf->rv32e__DOT__id_ex_csr_op = 3U;
                                    vlSelf->rv32e__DOT__id_ex_imm 
                                        = (0x1fU & 
                                           (vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 0xfU));
                                } else {
                                    vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                                    vlSelf->rv32e__DOT__id_ex_csr_op = 2U;
                                    vlSelf->rv32e__DOT__id_ex_imm 
                                        = (0x1fU & 
                                           (vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 0xfU));
                                }
                            } else if ((0x1000U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                                vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                                vlSelf->rv32e__DOT__id_ex_csr_op = 1U;
                                vlSelf->rv32e__DOT__id_ex_imm 
                                    = (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 0xfU));
                            }
                        } else if ((0x2000U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                            if ((0x1000U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                                vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                                vlSelf->rv32e__DOT__id_ex_csr_op = 3U;
                            } else {
                                vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                                vlSelf->rv32e__DOT__id_ex_csr_op = 2U;
                            }
                        } else if ((0x1000U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                            vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                            vlSelf->rv32e__DOT__id_ex_csr_op = 1U;
                        } else if ((0x73U == vlSelf->rv32e__DOT__IF_ID_inst)) {
                            vlSelf->rv32e__DOT__id_ex_csr_ecall = 1U;
                            vlSelf->rv32e__DOT__id_ex_csr_wen2 = 1U;
                            vlSelf->rv32e__DOT__id_ex_imm = 0U;
                        } else if ((0x30200073U == vlSelf->rv32e__DOT__IF_ID_inst)) {
                            vlSelf->rv32e__DOT__id_ex_csr_mret = 1U;
                            vlSelf->rv32e__DOT__id_ex_imm = 0U;
                        }
                        if ((0x73U == vlSelf->rv32e__DOT__IF_ID_inst)) {
                            vlSelf->rv32e__DOT__id_ex_csr_wr_addr1 = 0x342U;
                            vlSelf->rv32e__DOT__id_ex_csr_wr_addr2 = 0x341U;
                        } else {
                            vlSelf->rv32e__DOT__id_ex_csr_wr_addr1 
                                = ((0x30200073U == vlSelf->rv32e__DOT__IF_ID_inst)
                                    ? 0x300U : (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 0x14U));
                            vlSelf->rv32e__DOT__id_ex_csr_wr_addr2 = 0U;
                        }
                        if ((0x30200073U == vlSelf->rv32e__DOT__IF_ID_inst)) {
                            vlSelf->rv32e__DOT__id_wb_csr_addr1 = 0x300U;
                            vlSelf->rv32e__DOT__id_wb_csr_addr2 = 0x341U;
                        } else {
                            vlSelf->rv32e__DOT__id_wb_csr_addr1 
                                = ((0x73U == vlSelf->rv32e__DOT__IF_ID_inst)
                                    ? 0x305U : (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 0x14U));
                            vlSelf->rv32e__DOT__id_wb_csr_addr2 = 0U;
                        }
                        vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 6U;
                    }
                } else if ((8U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                    if ((4U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                        vlSelf->rv32e__DOT__id_ex_imm 
                            = (((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->rv32e__DOT__IF_ID_inst) 
                                             | ((0x800U 
                                                 & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                      >> 0x14U)))));
                        vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                        vlSelf->rv32e__DOT__id_ex_jal = 1U;
                        vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 2U;
                    } else {
                        vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 7U;
                    }
                } else if ((4U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                    if ((0U == (7U & (vlSelf->rv32e__DOT__IF_ID_inst 
                                      >> 0xcU)))) {
                        vlSelf->rv32e__DOT__id_ex_imm 
                            = vlSelf->rv32e__DOT__idu__DOT__immI;
                        vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                        vlSelf->rv32e__DOT__id_ex_jalr = 1U;
                        vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 2U;
                    }
                } else {
                    vlSelf->rv32e__DOT__id_ex_imm = 
                        (((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                      >> 0x1fU))) << 0xcU) 
                         | ((0x800U & (vlSelf->rv32e__DOT__IF_ID_inst 
                                       << 4U)) | ((0x7e0U 
                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                        >> 7U)))));
                    if ((0x4000U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                        vlSelf->rv32e__DOT__id_ex_alu_op 
                            = ((0x2000U & vlSelf->rv32e__DOT__IF_ID_inst)
                                ? 6U : 7U);
                    } else if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                                         >> 0xdU)))) {
                        vlSelf->rv32e__DOT__id_ex_alu_op = 1U;
                    }
                    vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 4U;
                }
            } else {
                vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 7U;
            }
        } else if ((0x20U & vlSelf->rv32e__DOT__IF_ID_inst)) {
            if ((0x10U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                if ((8U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                    vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 7U;
                } else if ((4U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                    vlSelf->rv32e__DOT__id_ex_imm = 
                        (0xfffff000U & vlSelf->rv32e__DOT__IF_ID_inst);
                    vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                    vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 1U;
                } else {
                    vlSelf->rv32e__DOT__id_ex_imm = 0U;
                    vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                    vlSelf->rv32e__DOT__id_ex_alu_op 
                        = ((0x4000U & vlSelf->rv32e__DOT__IF_ID_inst)
                            ? ((0x2000U & vlSelf->rv32e__DOT__IF_ID_inst)
                                ? ((0x1000U & vlSelf->rv32e__DOT__IF_ID_inst)
                                    ? 2U : 3U) : ((0x1000U 
                                                   & vlSelf->rv32e__DOT__IF_ID_inst)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->rv32e__DOT__IF_ID_inst)
                                                    ? 8U
                                                    : 9U)
                                                   : 4U))
                            : ((0x2000U & vlSelf->rv32e__DOT__IF_ID_inst)
                                ? ((0x1000U & vlSelf->rv32e__DOT__IF_ID_inst)
                                    ? 6U : 7U) : ((0x1000U 
                                                   & vlSelf->rv32e__DOT__IF_ID_inst)
                                                   ? 5U
                                                   : 
                                                  ((0x40000000U 
                                                    & vlSelf->rv32e__DOT__IF_ID_inst)
                                                    ? 1U
                                                    : 0U))));
                    vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 0U;
                }
            } else if ((8U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 7U;
            } else if ((4U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 7U;
            } else {
                vlSelf->rv32e__DOT__id_ex_imm = (((- (IData)(
                                                             (vlSelf->rv32e__DOT__IF_ID_inst 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0xfe0U 
                                                     & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                          >> 7U))));
                vlSelf->rv32e__DOT__id_ex_MemWrite = 1U;
                if ((2U == (7U & (vlSelf->rv32e__DOT__IF_ID_inst 
                                  >> 0xcU)))) {
                    vlSelf->rv32e__DOT__id_ex_MemLen = 2U;
                } else if ((1U == (7U & (vlSelf->rv32e__DOT__IF_ID_inst 
                                         >> 0xcU)))) {
                    vlSelf->rv32e__DOT__id_ex_MemLen = 1U;
                } else if ((0U == (7U & (vlSelf->rv32e__DOT__IF_ID_inst 
                                         >> 0xcU)))) {
                    vlSelf->rv32e__DOT__id_ex_MemLen = 4U;
                }
                vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 5U;
            }
        } else if ((0x10U & vlSelf->rv32e__DOT__IF_ID_inst)) {
            if ((8U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 7U;
            } else if ((4U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                vlSelf->rv32e__DOT__id_ex_imm = (0xfffff000U 
                                                 & vlSelf->rv32e__DOT__IF_ID_inst);
                vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                vlSelf->rv32e__DOT__id_ex_alu_op = 0U;
                vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 1U;
            } else {
                vlSelf->rv32e__DOT__id_ex_imm = vlSelf->rv32e__DOT__idu__DOT__immI;
                vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
                vlSelf->rv32e__DOT__id_ex_alu_op = 
                    ((0x4000U & vlSelf->rv32e__DOT__IF_ID_inst)
                      ? ((0x2000U & vlSelf->rv32e__DOT__IF_ID_inst)
                          ? ((0x1000U & vlSelf->rv32e__DOT__IF_ID_inst)
                              ? 2U : 3U) : ((0x1000U 
                                             & vlSelf->rv32e__DOT__IF_ID_inst)
                                             ? ((0x40000000U 
                                                 & vlSelf->rv32e__DOT__IF_ID_inst)
                                                 ? 8U
                                                 : 9U)
                                             : 4U))
                      : ((0x2000U & vlSelf->rv32e__DOT__IF_ID_inst)
                          ? ((0x1000U & vlSelf->rv32e__DOT__IF_ID_inst)
                              ? 6U : 7U) : ((0x1000U 
                                             & vlSelf->rv32e__DOT__IF_ID_inst)
                                             ? 5U : 0U)));
                vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 1U;
            }
        } else if ((8U & vlSelf->rv32e__DOT__IF_ID_inst)) {
            vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 7U;
        } else if ((4U & vlSelf->rv32e__DOT__IF_ID_inst)) {
            vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 7U;
        } else {
            vlSelf->rv32e__DOT__id_ex_imm = vlSelf->rv32e__DOT__idu__DOT__immI;
            vlSelf->rv32e__DOT__id_ex_RegWrite = 1U;
            vlSelf->rv32e__DOT__id_ex_MemRead = 1U;
            vlSelf->rv32e__DOT__id_ex_alu_op = 0U;
            if ((0x4000U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                              >> 0xdU)))) {
                    vlSelf->rv32e__DOT__id_ex_MemLen 
                        = ((0x1000U & vlSelf->rv32e__DOT__IF_ID_inst)
                            ? 3U : 0U);
                }
            } else if ((0x2000U & vlSelf->rv32e__DOT__IF_ID_inst)) {
                if ((1U & (~ (vlSelf->rv32e__DOT__IF_ID_inst 
                              >> 0xcU)))) {
                    vlSelf->rv32e__DOT__id_ex_MemLen = 2U;
                }
            } else {
                vlSelf->rv32e__DOT__id_ex_MemLen = 
                    ((0x1000U & vlSelf->rv32e__DOT__IF_ID_inst)
                      ? 1U : 4U);
            }
            vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = 3U;
        }
    }
    vlSelf->rv32e__DOT__idu__DOT__inst_type = vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type;
    vlSelf->rv32e__DOT__wb_ex_csr_num1 = vlSelf->rv32e__DOT__wbu__DOT__CSR
        [vlSelf->rv32e__DOT__id_wb_csr_addr1];
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h3556a05f__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h384f4e33__0) 
           & (((IData)(vlSelf->rv32e__DOT__id_wb_rs2) 
               == (IData)(vlSelf->rv32e__DOT__lsu_wb_rd)) 
              & (IData)(vlSelf->rv32e__DOT__lsu_wb_valid)));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hadc13f7a__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hb53dc38f__0) 
           & ((IData)(vlSelf->rv32e__DOT__id_wb_rs2) 
              == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr)));
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
        vlSelf->rv32e__DOT__IF_ID_pc = 0x80000000U;
        vlSelf->__Vdly__rv32e__DOT__ifu__DOT__next_pc = 0x80000000U;
        vlSelf->__Vdly__rv32e__DOT__if_sram_arvalid = 0U;
        vlSelf->rv32e__DOT__if_sram_araddr = 0U;
        vlSelf->__Vdly__rv32e__DOT__if_sram_rready = 0U;
        vlSelf->rv32e__DOT__IF_ID_inst = 0U;
        vlSelf->__Vdly__rv32e__DOT__IF_valid = 0U;
        vlSelf->__Vdly__rv32e__DOT__ifu__DOT__state = 0U;
        vlSelf->__Vdly__rv32e__DOT__ifu__DOT__once = 1U;
    } else {
        if (vlSelf->rv32e__DOT__ex_flush) {
            vlSelf->__Vdly__rv32e__DOT__IF_valid = 0U;
            vlSelf->__Vdly__rv32e__DOT__ifu__DOT__next_pc 
                = vlSelf->rv32e__DOT__ex_flush_pc;
            vlSelf->__Vdly__rv32e__DOT__if_sram_arvalid = 1U;
            vlSelf->rv32e__DOT__if_sram_araddr = vlSelf->rv32e__DOT__ex_flush_pc;
            vlSelf->__Vdly__rv32e__DOT__if_sram_rready = 1U;
            vlSelf->__Vdly__rv32e__DOT__ifu__DOT__state = 1U;
        }
        if ((0U == (IData)(vlSelf->rv32e__DOT__ifu__DOT__state))) {
            if ((((IData)(vlSelf->rv32e__DOT__IF_valid) 
                  & (IData)(vlSelf->rv32e__DOT__id_ready)) 
                 | (IData)(vlSelf->rv32e__DOT__ifu__DOT__once))) {
                vlSelf->__Vdly__rv32e__DOT__ifu__DOT__once = 0U;
                vlSelf->__Vdly__rv32e__DOT__IF_valid = 0U;
                vlSelf->__Vdly__rv32e__DOT__if_sram_arvalid = 1U;
                vlSelf->rv32e__DOT__if_sram_araddr 
                    = vlSelf->rv32e__DOT__ifu__DOT__next_pc;
                vlSelf->__Vdly__rv32e__DOT__ifu__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->rv32e__DOT__ifu__DOT__state))) {
            if (((IData)(vlSelf->rv32e__DOT__sram_if_arready) 
                 & (IData)(vlSelf->rv32e__DOT__if_sram_arvalid))) {
                vlSelf->__Vdly__rv32e__DOT__if_sram_arvalid = 0U;
                vlSelf->__Vdly__rv32e__DOT__if_sram_rready = 1U;
                vlSelf->__Vdly__rv32e__DOT__IF_valid = 0U;
                vlSelf->__Vdly__rv32e__DOT__ifu__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->rv32e__DOT__ifu__DOT__state))) {
            if (((IData)(vlSelf->rv32e__DOT__sram_if_rvalid) 
                 & (IData)(vlSelf->rv32e__DOT__if_sram_rready))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ifu__DOT__counter_TOP(7U, 1U, 0U, 0U);
                vlSelf->__Vdly__rv32e__DOT__if_sram_rready = 0U;
                vlSelf->rv32e__DOT__IF_ID_inst = vlSelf->rv32e__DOT__sram_if_rdata;
                vlSelf->rv32e__DOT__IF_ID_pc = vlSelf->rv32e__DOT__ifu__DOT__next_pc;
                if (vlSelf->rv32e__DOT__ex_flush) {
                    vlSelf->__Vdly__rv32e__DOT__IF_valid = 0U;
                    vlSelf->__Vdly__rv32e__DOT__ifu__DOT__next_pc 
                        = vlSelf->rv32e__DOT__ex_flush_pc;
                } else {
                    vlSelf->__Vdly__rv32e__DOT__IF_valid = 1U;
                    vlSelf->__Vdly__rv32e__DOT__ifu__DOT__next_pc 
                        = ((IData)(4U) + vlSelf->rv32e__DOT__ifu__DOT__next_pc);
                }
                vlSelf->__Vdly__rv32e__DOT__ifu__DOT__state = 0U;
            }
        } else {
            vlSelf->__Vdly__rv32e__DOT__ifu__DOT__state = 0U;
        }
    }
    vlSelf->rv32e__DOT__ifu__DOT__next_pc = vlSelf->__Vdly__rv32e__DOT__ifu__DOT__next_pc;
    vlSelf->rv32e__DOT__ifu__DOT__state = vlSelf->__Vdly__rv32e__DOT__ifu__DOT__state;
    vlSelf->rv32e__DOT__ifu__DOT__once = vlSelf->__Vdly__rv32e__DOT__ifu__DOT__once;
    vlSelf->rv32e__DOT__IF_valid = vlSelf->__Vdly__rv32e__DOT__IF_valid;
    vlSelf->rv32e__DOT__if_sram_rready = vlSelf->__Vdly__rv32e__DOT__if_sram_rready;
    vlSelf->rv32e__DOT__if_sram_arvalid = vlSelf->__Vdly__rv32e__DOT__if_sram_arvalid;
    vlSelf->rv32e__DOT__idu__DOT__immI = (((- (IData)(
                                                      (vlSelf->rv32e__DOT__IF_ID_inst 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSelf->rv32e__DOT__IF_ID_inst 
                                             >> 0x14U));
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
    vlSelf->rv32e__DOT__sram_araddr = 0U;
    vlSelf->rv32e__DOT__sram_arvalid = 0U;
    vlSelf->rv32e__DOT__uart_araddr = 0U;
    vlSelf->rv32e__DOT__uart_arvalid = 0U;
    vlSelf->rv32e__DOT__clint_araddr = 0U;
    vlSelf->rv32e__DOT__clint_arvalid = 0U;
    vlSelf->rv32e__DOT__sram_if_arready = 0U;
    vlSelf->rv32e__DOT__sram_lsu_arready = 0U;
    if ((1U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__addr 
            = vlSelf->rv32e__DOT__if_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__addr))
                                  ? 3U : 0U)));
        if ((2U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__Vfuncout))) {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__addr 
                = vlSelf->rv32e__DOT__if_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__Vfuncout))) {
                vlSelf->rv32e__DOT__clint_araddr = vlSelf->rv32e__DOT__if_sram_araddr;
                vlSelf->rv32e__DOT__clint_arvalid = vlSelf->rv32e__DOT__if_sram_arvalid;
                vlSelf->rv32e__DOT__sram_if_arready 
                    = vlSelf->rv32e__DOT__clint_arready;
                vlSelf->rv32e__DOT__sram_lsu_arready = 0U;
                vlSelf->rv32e__DOT__sram_araddr = 0U;
                vlSelf->rv32e__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__uart_araddr = 0U;
                vlSelf->rv32e__DOT__uart_arvalid = 0U;
            } else {
                vlSelf->rv32e__DOT__uart_araddr = vlSelf->rv32e__DOT__if_sram_araddr;
                vlSelf->rv32e__DOT__uart_arvalid = vlSelf->rv32e__DOT__if_sram_arvalid;
                vlSelf->rv32e__DOT__sram_if_arready 
                    = vlSelf->rv32e__DOT__uart_arready;
                vlSelf->rv32e__DOT__sram_lsu_arready = 0U;
                vlSelf->rv32e__DOT__sram_araddr = 0U;
                vlSelf->rv32e__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__clint_araddr = 0U;
                vlSelf->rv32e__DOT__clint_arvalid = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__addr 
                = vlSelf->rv32e__DOT__if_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__addr))
                                      ? 3U : 0U)));
            if (VL_LIKELY((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__Vfuncout)))) {
                vlSelf->rv32e__DOT__sram_araddr = vlSelf->rv32e__DOT__if_sram_araddr;
                vlSelf->rv32e__DOT__sram_arvalid = vlSelf->rv32e__DOT__if_sram_arvalid;
                vlSelf->rv32e__DOT__sram_if_arready 
                    = vlSelf->rv32e__DOT__sram_arready;
                vlSelf->rv32e__DOT__sram_lsu_arready = 0U;
                vlSelf->rv32e__DOT__uart_araddr = 0U;
                vlSelf->rv32e__DOT__uart_arvalid = 0U;
                vlSelf->rv32e__DOT__clint_araddr = 0U;
                vlSelf->rv32e__DOT__clint_arvalid = 0U;
            } else {
                vlSelf->rv32e__DOT__sram_araddr = 0U;
                vlSelf->rv32e__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__uart_araddr = 0U;
                vlSelf->rv32e__DOT__uart_arvalid = 0U;
                vlSelf->rv32e__DOT__clint_araddr = 0U;
                vlSelf->rv32e__DOT__clint_arvalid = 0U;
                vlSelf->rv32e__DOT__sram_if_arready = 1U;
                vlSelf->rv32e__DOT__sram_lsu_arready = 0U;
                VL_WRITEF("\033[31m[ARB][IFU][AR] \345\234\260\345\235\200\350\247\243\347\240\201\351\224\231\350\257\257\357\274\201\345\234\260\345\235\200: %x\033[0m\n",
                          32,vlSelf->rv32e__DOT__if_sram_araddr);
            }
        }
    } else if ((2U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr 
            = vlSelf->rv32e__DOT__lsu_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr))
                                  ? 3U : 0U)));
        if ((2U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__Vfuncout))) {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr 
                = vlSelf->rv32e__DOT__lsu_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__Vfuncout))) {
                vlSelf->rv32e__DOT__clint_araddr = vlSelf->rv32e__DOT__lsu_sram_araddr;
                vlSelf->rv32e__DOT__clint_arvalid = vlSelf->rv32e__DOT__lsu_sram_arvalid;
                vlSelf->rv32e__DOT__sram_lsu_arready 
                    = vlSelf->rv32e__DOT__clint_arready;
                vlSelf->rv32e__DOT__sram_if_arready = 0U;
                vlSelf->rv32e__DOT__sram_araddr = 0U;
                vlSelf->rv32e__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__uart_araddr = 0U;
                vlSelf->rv32e__DOT__uart_arvalid = 0U;
            } else {
                vlSelf->rv32e__DOT__uart_araddr = vlSelf->rv32e__DOT__lsu_sram_araddr;
                vlSelf->rv32e__DOT__uart_arvalid = vlSelf->rv32e__DOT__lsu_sram_arvalid;
                vlSelf->rv32e__DOT__sram_lsu_arready 
                    = vlSelf->rv32e__DOT__uart_arready;
                vlSelf->rv32e__DOT__sram_if_arready = 0U;
                vlSelf->rv32e__DOT__sram_araddr = 0U;
                vlSelf->rv32e__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__clint_araddr = 0U;
                vlSelf->rv32e__DOT__clint_arvalid = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr 
                = vlSelf->rv32e__DOT__lsu_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr))
                                      ? 3U : 0U)));
            if (VL_LIKELY((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__Vfuncout)))) {
                vlSelf->rv32e__DOT__sram_araddr = vlSelf->rv32e__DOT__lsu_sram_araddr;
                vlSelf->rv32e__DOT__sram_arvalid = vlSelf->rv32e__DOT__lsu_sram_arvalid;
                vlSelf->rv32e__DOT__sram_lsu_arready 
                    = vlSelf->rv32e__DOT__sram_arready;
                vlSelf->rv32e__DOT__sram_if_arready = 0U;
                vlSelf->rv32e__DOT__uart_araddr = 0U;
                vlSelf->rv32e__DOT__uart_arvalid = 0U;
                vlSelf->rv32e__DOT__clint_araddr = 0U;
                vlSelf->rv32e__DOT__clint_arvalid = 0U;
            } else {
                VL_WRITEF("\033[31m[ARB][LSU][AR] \345\234\260\345\235\200\350\247\243\347\240\201\351\224\231\350\257\257\357\274\201\345\234\260\345\235\200: %x\033[0m\n",
                          32,vlSelf->rv32e__DOT__lsu_sram_araddr);
                vlSelf->rv32e__DOT__sram_araddr = 0U;
                vlSelf->rv32e__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__uart_araddr = 0U;
                vlSelf->rv32e__DOT__uart_arvalid = 0U;
                vlSelf->rv32e__DOT__clint_araddr = 0U;
                vlSelf->rv32e__DOT__clint_arvalid = 0U;
                vlSelf->rv32e__DOT__sram_lsu_arready = 1U;
                vlSelf->rv32e__DOT__sram_if_arready = 0U;
            }
        }
    } else if ((4U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->rv32e__DOT__sram_if_arready = vlSelf->rv32e__DOT__if_sram_arvalid;
        vlSelf->rv32e__DOT__sram_lsu_arready = vlSelf->rv32e__DOT__lsu_sram_arvalid;
        vlSelf->rv32e__DOT__sram_araddr = 0U;
        vlSelf->rv32e__DOT__sram_arvalid = 0U;
        vlSelf->rv32e__DOT__uart_araddr = 0U;
        vlSelf->rv32e__DOT__uart_arvalid = 0U;
        vlSelf->rv32e__DOT__clint_araddr = 0U;
        vlSelf->rv32e__DOT__clint_arvalid = 0U;
    } else {
        vlSelf->rv32e__DOT__sram_araddr = 0U;
        vlSelf->rv32e__DOT__sram_arvalid = 0U;
        vlSelf->rv32e__DOT__uart_araddr = 0U;
        vlSelf->rv32e__DOT__uart_arvalid = 0U;
        vlSelf->rv32e__DOT__clint_araddr = 0U;
        vlSelf->rv32e__DOT__clint_arvalid = 0U;
        vlSelf->rv32e__DOT__sram_if_arready = 0U;
        vlSelf->rv32e__DOT__sram_lsu_arready = 0U;
    }
    vlSelf->rv32e__DOT__sram_rready = 0U;
    vlSelf->rv32e__DOT__uart_rready = 0U;
    vlSelf->rv32e__DOT__clint_rready = 0U;
    vlSelf->rv32e__DOT__sram_if_rdata = 0U;
    vlSelf->rv32e__DOT__sram_if_rvalid = 0U;
    vlSelf->rv32e__DOT__sram_if_rresp = 0U;
    vlSelf->rv32e__DOT__sram_lsu_rdata = 0U;
    vlSelf->rv32e__DOT__sram_lsu_rvalid = 0U;
    vlSelf->rv32e__DOT__sram_lsu_rresp = 0U;
    if ((1U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__addr 
            = vlSelf->rv32e__DOT__if_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__addr))
                                  ? 3U : 0U)));
        if ((2U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__Vfuncout))) {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__addr 
                = vlSelf->rv32e__DOT__if_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__Vfuncout))) {
                vlSelf->rv32e__DOT__sram_if_rdata = vlSelf->rv32e__DOT__clint_rdata;
                vlSelf->rv32e__DOT__sram_if_rvalid 
                    = vlSelf->rv32e__DOT__clint_rvalid;
                vlSelf->rv32e__DOT__sram_if_rresp = vlSelf->rv32e__DOT__clint_rresp;
                vlSelf->rv32e__DOT__clint_rready = vlSelf->rv32e__DOT__if_sram_rready;
                vlSelf->rv32e__DOT__sram_rready = 0U;
                vlSelf->rv32e__DOT__uart_rready = 0U;
            } else {
                vlSelf->rv32e__DOT__sram_if_rdata = vlSelf->rv32e__DOT__uart_rdata;
                vlSelf->rv32e__DOT__sram_if_rvalid 
                    = vlSelf->rv32e__DOT__uart_rvalid;
                vlSelf->rv32e__DOT__sram_if_rresp = vlSelf->rv32e__DOT__uart_rresp;
                vlSelf->rv32e__DOT__uart_rready = vlSelf->rv32e__DOT__if_sram_rready;
                vlSelf->rv32e__DOT__sram_rready = 0U;
                vlSelf->rv32e__DOT__clint_rready = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__addr 
                = vlSelf->rv32e__DOT__if_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__Vfuncout))) {
                vlSelf->rv32e__DOT__sram_if_rdata = vlSelf->rv32e__DOT__sram_rdata;
                vlSelf->rv32e__DOT__sram_if_rvalid 
                    = vlSelf->rv32e__DOT__sram_rvalid;
                vlSelf->rv32e__DOT__sram_if_rresp = vlSelf->rv32e__DOT__sram_rresp;
                vlSelf->rv32e__DOT__sram_rready = vlSelf->rv32e__DOT__if_sram_rready;
                vlSelf->rv32e__DOT__uart_rready = 0U;
                vlSelf->rv32e__DOT__clint_rready = 0U;
            } else {
                vlSelf->rv32e__DOT__sram_if_rdata = 0U;
                vlSelf->rv32e__DOT__sram_if_rvalid 
                    = vlSelf->rv32e__DOT__if_sram_arvalid;
                vlSelf->rv32e__DOT__sram_if_rresp = 3U;
                vlSelf->rv32e__DOT__sram_rready = 0U;
                vlSelf->rv32e__DOT__uart_rready = 0U;
                vlSelf->rv32e__DOT__clint_rready = 0U;
            }
        }
    } else if ((2U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr 
            = vlSelf->rv32e__DOT__lsu_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr))
                                  ? 3U : 0U)));
        if ((2U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__Vfuncout))) {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr 
                = vlSelf->rv32e__DOT__lsu_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__Vfuncout))) {
                vlSelf->rv32e__DOT__sram_lsu_rdata 
                    = vlSelf->rv32e__DOT__clint_rdata;
                vlSelf->rv32e__DOT__sram_lsu_rvalid 
                    = vlSelf->rv32e__DOT__clint_rvalid;
                vlSelf->rv32e__DOT__sram_lsu_rresp 
                    = vlSelf->rv32e__DOT__clint_rresp;
                vlSelf->rv32e__DOT__clint_rready = vlSelf->rv32e__DOT__lsu_sram_rready;
                vlSelf->rv32e__DOT__sram_rready = 0U;
                vlSelf->rv32e__DOT__uart_rready = 0U;
            } else {
                vlSelf->rv32e__DOT__sram_lsu_rdata 
                    = vlSelf->rv32e__DOT__uart_rdata;
                vlSelf->rv32e__DOT__sram_lsu_rvalid 
                    = vlSelf->rv32e__DOT__uart_rvalid;
                vlSelf->rv32e__DOT__sram_lsu_rresp 
                    = vlSelf->rv32e__DOT__uart_rresp;
                vlSelf->rv32e__DOT__uart_rready = vlSelf->rv32e__DOT__lsu_sram_rready;
                vlSelf->rv32e__DOT__sram_rready = 0U;
                vlSelf->rv32e__DOT__clint_rready = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr 
                = vlSelf->rv32e__DOT__lsu_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__Vfuncout))) {
                vlSelf->rv32e__DOT__sram_lsu_rdata 
                    = vlSelf->rv32e__DOT__sram_rdata;
                vlSelf->rv32e__DOT__sram_lsu_rvalid 
                    = vlSelf->rv32e__DOT__sram_rvalid;
                vlSelf->rv32e__DOT__sram_lsu_rresp 
                    = vlSelf->rv32e__DOT__sram_rresp;
                vlSelf->rv32e__DOT__sram_rready = vlSelf->rv32e__DOT__lsu_sram_rready;
                vlSelf->rv32e__DOT__uart_rready = 0U;
                vlSelf->rv32e__DOT__clint_rready = 0U;
            } else {
                vlSelf->rv32e__DOT__sram_lsu_rdata = 0U;
                vlSelf->rv32e__DOT__sram_lsu_rvalid 
                    = vlSelf->rv32e__DOT__lsu_sram_arvalid;
                vlSelf->rv32e__DOT__sram_lsu_rresp = 3U;
                vlSelf->rv32e__DOT__sram_rready = 0U;
                vlSelf->rv32e__DOT__uart_rready = 0U;
                vlSelf->rv32e__DOT__clint_rready = 0U;
            }
        }
    } else if ((4U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        if (vlSelf->rv32e__DOT__if_sram_arvalid) {
            vlSelf->rv32e__DOT__sram_if_rdata = 0U;
            vlSelf->rv32e__DOT__sram_if_rvalid = 1U;
            vlSelf->rv32e__DOT__sram_if_rresp = 3U;
        } else if (vlSelf->rv32e__DOT__lsu_sram_arvalid) {
            vlSelf->rv32e__DOT__sram_lsu_rdata = 0U;
            vlSelf->rv32e__DOT__sram_lsu_rvalid = 1U;
            vlSelf->rv32e__DOT__sram_lsu_rresp = 3U;
        }
        vlSelf->rv32e__DOT__sram_rready = 0U;
        vlSelf->rv32e__DOT__uart_rready = 0U;
        vlSelf->rv32e__DOT__clint_rready = 0U;
    } else {
        vlSelf->rv32e__DOT__sram_rready = 0U;
        vlSelf->rv32e__DOT__uart_rready = 0U;
        vlSelf->rv32e__DOT__clint_rready = 0U;
        vlSelf->rv32e__DOT__sram_if_rdata = 0U;
        vlSelf->rv32e__DOT__sram_if_rvalid = 0U;
        vlSelf->rv32e__DOT__sram_if_rresp = 0U;
        vlSelf->rv32e__DOT__sram_lsu_rdata = 0U;
        vlSelf->rv32e__DOT__sram_lsu_rvalid = 0U;
        vlSelf->rv32e__DOT__sram_lsu_rresp = 0U;
    }
    vlSelf->rv32e__DOT__id_ready = (1U & ((~ (IData)(vlSelf->rv32e__DOT__ex_flush)) 
                                          & ((~ (IData)(vlSelf->rv32e__DOT__id_valid)) 
                                             | (IData)(vlSelf->rv32e__DOT__ex_ready))));
    vlSelf->rv32e__DOT__uart__DOT__addr_valid = (((0xa0000000U 
                                                   <= vlSelf->rv32e__DOT__uart_araddr) 
                                                  & (0xa0000007U 
                                                     >= vlSelf->rv32e__DOT__uart_araddr)) 
                                                 | ((0xa0000000U 
                                                     <= vlSelf->rv32e__DOT__uart_awaddr) 
                                                    & (0xa0000007U 
                                                       >= vlSelf->rv32e__DOT__uart_awaddr)));
    vlSelf->rv32e__DOT__clint__DOT__addr_valid = ((
                                                   (0xa0002000U 
                                                    <= vlSelf->rv32e__DOT__clint_araddr) 
                                                   & (0xa0002007U 
                                                      >= vlSelf->rv32e__DOT__clint_araddr)) 
                                                  | ((0xa0002000U 
                                                      <= vlSelf->rv32e__DOT__clint_awaddr) 
                                                     & (0xa0002007U 
                                                        >= vlSelf->rv32e__DOT__clint_awaddr)));
    if ((4U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
            = ((2U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))
                ? 0U : ((1U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))
                         ? 0U : (((((IData)(vlSelf->rv32e__DOT__sram_if_rvalid) 
                                    & (IData)(vlSelf->rv32e__DOT__if_sram_rready)) 
                                   | ((IData)(vlSelf->rv32e__DOT__sram_lsu_rvalid) 
                                      & (IData)(vlSelf->rv32e__DOT__lsu_sram_rready))) 
                                  | ((IData)(vlSelf->rv32e__DOT__sram_lsu_bvalid) 
                                     & (IData)(vlSelf->rv32e__DOT__lsu_sram_bready)))
                                  ? 0U : 4U)));
    } else if ((2U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
            = ((1U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))
                ? (((((IData)(vlSelf->rv32e__DOT__sram_bvalid) 
                      & (IData)(vlSelf->rv32e__DOT__sram_bready)) 
                     | ((IData)(vlSelf->rv32e__DOT__uart_bvalid) 
                        & (IData)(vlSelf->rv32e__DOT__uart_bready))) 
                    | ((IData)(vlSelf->rv32e__DOT__clint_bvalid) 
                       & (IData)(vlSelf->rv32e__DOT__clint_bready)))
                    ? 0U : 3U) : (((((IData)(vlSelf->rv32e__DOT__sram_rvalid) 
                                     & (IData)(vlSelf->rv32e__DOT__sram_rready)) 
                                    | ((IData)(vlSelf->rv32e__DOT__uart_rvalid) 
                                       & (IData)(vlSelf->rv32e__DOT__uart_rready))) 
                                   | ((IData)(vlSelf->rv32e__DOT__clint_rvalid) 
                                      & (IData)(vlSelf->rv32e__DOT__clint_rready)))
                                   ? 0U : 2U));
    } else if ((1U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
            = (((((IData)(vlSelf->rv32e__DOT__sram_rvalid) 
                  & (IData)(vlSelf->rv32e__DOT__sram_rready)) 
                 | ((IData)(vlSelf->rv32e__DOT__uart_rvalid) 
                    & (IData)(vlSelf->rv32e__DOT__uart_rready))) 
                | ((IData)(vlSelf->rv32e__DOT__clint_rvalid) 
                   & (IData)(vlSelf->rv32e__DOT__clint_rready)))
                ? 0U : 1U);
    } else if (vlSelf->rv32e__DOT__lsu_sram_awvalid) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr 
            = vlSelf->rv32e__DOT__lsu_sram_awaddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr))
                                  ? 3U : 0U)));
        if ((1U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__Vfuncout))) {
            vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 3U;
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr 
                = vlSelf->rv32e__DOT__lsu_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr))
                                      ? 3U : 0U)));
            if ((2U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__Vfuncout))) {
                vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 3U;
            } else {
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr 
                    = vlSelf->rv32e__DOT__lsu_sram_awaddr;
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__Vfuncout 
                    = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr) 
                        & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr))
                        ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr) 
                                 & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr))
                                 ? 2U : (((0xa0002000U 
                                           <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr) 
                                          & (0xa0002007U 
                                             >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr))
                                          ? 3U : 0U)));
                vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
                    = ((3U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__Vfuncout))
                        ? 3U : 4U);
            }
        }
    } else if (vlSelf->rv32e__DOT__lsu_sram_arvalid) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr 
            = vlSelf->rv32e__DOT__lsu_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr))
                                  ? 3U : 0U)));
        if ((1U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__Vfuncout))) {
            vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 2U;
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr 
                = vlSelf->rv32e__DOT__lsu_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr))
                                      ? 3U : 0U)));
            if ((2U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__Vfuncout))) {
                vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 2U;
            } else {
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr 
                    = vlSelf->rv32e__DOT__lsu_sram_araddr;
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__Vfuncout 
                    = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr) 
                        & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr))
                        ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr) 
                                 & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr))
                                 ? 2U : (((0xa0002000U 
                                           <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr) 
                                          & (0xa0002007U 
                                             >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr))
                                          ? 3U : 0U)));
                vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
                    = ((3U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__Vfuncout))
                        ? 2U : 4U);
            }
        }
    } else if (vlSelf->rv32e__DOT__if_sram_arvalid) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr 
            = vlSelf->rv32e__DOT__if_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr))
                                  ? 3U : 0U)));
        if ((1U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__Vfuncout))) {
            vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 1U;
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr 
                = vlSelf->rv32e__DOT__if_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr))
                                      ? 3U : 0U)));
            if ((2U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__Vfuncout))) {
                vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 1U;
            } else {
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr 
                    = vlSelf->rv32e__DOT__if_sram_araddr;
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__Vfuncout 
                    = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr) 
                        & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr))
                        ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr) 
                                 & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr))
                                 ? 2U : (((0xa0002000U 
                                           <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr) 
                                          & (0xa0002007U 
                                             >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr))
                                          ? 3U : 0U)));
                vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
                    = ((3U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__Vfuncout))
                        ? 1U : 4U);
            }
        }
    } else {
        vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 0U;
    }
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
