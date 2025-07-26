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

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ len);

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_rv32e__DOT__sram__DOT__pmem_read__54__Vfuncout;
    __Vfunc_rv32e__DOT__sram__DOT__pmem_read__54__Vfuncout = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__uart__DOT__uart_state;
    __Vdly__rv32e__DOT__uart__DOT__uart_state = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__uart_arready;
    __Vdly__rv32e__DOT__uart_arready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__uart_wready;
    __Vdly__rv32e__DOT__uart_wready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__uart_awready;
    __Vdly__rv32e__DOT__uart_awready = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__uart__DOT__LFSR;
    __Vdly__rv32e__DOT__uart__DOT__LFSR = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__uart__DOT__wdata_reg;
    __Vdly__rv32e__DOT__uart__DOT__wdata_reg = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__uart__DOT__rdata_reg;
    __Vdly__rv32e__DOT__uart__DOT__rdata_reg = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__uart__DOT__next_uart_state;
    __Vdly__rv32e__DOT__uart__DOT__next_uart_state = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__sram__DOT__sram_state;
    __Vdly__rv32e__DOT__sram__DOT__sram_state = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__sram_arready;
    __Vdly__rv32e__DOT__sram_arready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__sram_wready;
    __Vdly__rv32e__DOT__sram_wready = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__sram__DOT__LFSR;
    __Vdly__rv32e__DOT__sram__DOT__LFSR = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__sram__DOT__araddr_reg;
    __Vdly__rv32e__DOT__sram__DOT__araddr_reg = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__sram__DOT__rdata_reg;
    __Vdly__rv32e__DOT__sram__DOT__rdata_reg = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__sram__DOT__awaddr_reg;
    __Vdly__rv32e__DOT__sram__DOT__awaddr_reg = 0;
    CData/*3:0*/ __Vdly__rv32e__DOT__sram__DOT__wstrb_reg;
    __Vdly__rv32e__DOT__sram__DOT__wstrb_reg = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__sram__DOT__wdata_reg;
    __Vdly__rv32e__DOT__sram__DOT__wdata_reg = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__sram_awready;
    __Vdly__rv32e__DOT__sram_awready = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__sram__DOT__next_sram_state;
    __Vdly__rv32e__DOT__sram__DOT__next_sram_state = 0;
    // Body
    __Vdly__rv32e__DOT__uart__DOT__next_uart_state 
        = vlSelf->rv32e__DOT__uart__DOT__next_uart_state;
    __Vdly__rv32e__DOT__uart__DOT__rdata_reg = vlSelf->rv32e__DOT__uart__DOT__rdata_reg;
    __Vdly__rv32e__DOT__uart__DOT__wdata_reg = vlSelf->rv32e__DOT__uart__DOT__wdata_reg;
    __Vdly__rv32e__DOT__uart__DOT__LFSR = vlSelf->rv32e__DOT__uart__DOT__LFSR;
    __Vdly__rv32e__DOT__uart__DOT__uart_state = vlSelf->rv32e__DOT__uart__DOT__uart_state;
    __Vdly__rv32e__DOT__sram__DOT__next_sram_state 
        = vlSelf->rv32e__DOT__sram__DOT__next_sram_state;
    __Vdly__rv32e__DOT__sram__DOT__wdata_reg = vlSelf->rv32e__DOT__sram__DOT__wdata_reg;
    __Vdly__rv32e__DOT__sram__DOT__wstrb_reg = vlSelf->rv32e__DOT__sram__DOT__wstrb_reg;
    __Vdly__rv32e__DOT__sram__DOT__awaddr_reg = vlSelf->rv32e__DOT__sram__DOT__awaddr_reg;
    __Vdly__rv32e__DOT__sram__DOT__rdata_reg = vlSelf->rv32e__DOT__sram__DOT__rdata_reg;
    __Vdly__rv32e__DOT__sram__DOT__araddr_reg = vlSelf->rv32e__DOT__sram__DOT__araddr_reg;
    __Vdly__rv32e__DOT__sram__DOT__LFSR = vlSelf->rv32e__DOT__sram__DOT__LFSR;
    __Vdly__rv32e__DOT__sram__DOT__sram_state = vlSelf->rv32e__DOT__sram__DOT__sram_state;
    __Vdly__rv32e__DOT__uart_wready = vlSelf->rv32e__DOT__uart_wready;
    __Vdly__rv32e__DOT__uart_awready = vlSelf->rv32e__DOT__uart_awready;
    __Vdly__rv32e__DOT__uart_arready = vlSelf->rv32e__DOT__uart_arready;
    __Vdly__rv32e__DOT__sram_wready = vlSelf->rv32e__DOT__sram_wready;
    __Vdly__rv32e__DOT__sram_awready = vlSelf->rv32e__DOT__sram_awready;
    __Vdly__rv32e__DOT__sram_arready = vlSelf->rv32e__DOT__sram_arready;
    vlSelf->rv32e__DOT__ifu_sram_bready = 0U;
    vlSelf->rv32e__DOT__ifu_sram_wvalid = 0U;
    vlSelf->rv32e__DOT__ifu_sram_wstrb = 0U;
    vlSelf->rv32e__DOT__ifu_sram_wdata = 0U;
    vlSelf->rv32e__DOT__ifu_sram_awvalid = 0U;
    vlSelf->rv32e__DOT__ifu_sram_awaddr = 0U;
    vlSelf->rv32e__DOT__axi_arb__DOT__current_master 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__next_master));
    if (vlSelf->reset) {
        __Vdly__rv32e__DOT__uart__DOT__uart_state = 0U;
        __Vdly__rv32e__DOT__uart_arready = 0U;
        vlSelf->rv32e__DOT__uart_rvalid = 0U;
        __Vdly__rv32e__DOT__uart_wready = 0U;
        __Vdly__rv32e__DOT__uart_awready = 0U;
        vlSelf->rv32e__DOT__uart_bvalid = 0U;
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
            vlSelf->rv32e__DOT__uart_bvalid = 0U;
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
                __Vdly__rv32e__DOT__uart_wready = 1U;
                __Vdly__rv32e__DOT__uart__DOT__next_uart_state = 4U;
            }
        } else if ((4U == vlSelf->rv32e__DOT__uart__DOT__uart_state)) {
            if (((IData)(vlSelf->rv32e__DOT__uart_wvalid) 
                 & (IData)(vlSelf->rv32e__DOT__uart_wready))) {
                if (VL_UNLIKELY(vlSelf->rv32e__DOT__uart__DOT__addr_valid)) {
                    VL_WRITEF("%c",8,(0xffU & vlSelf->rv32e__DOT__uart__DOT__wdata_reg));
                    vlSelf->rv32e__DOT__uart_bresp = 0U;
                    __Vdly__rv32e__DOT__uart_wready = 0U;
                } else {
                    vlSelf->rv32e__DOT__uart_bresp = 2U;
                }
                vlSelf->rv32e__DOT__uart_bvalid = 1U;
                __Vdly__rv32e__DOT__uart__DOT__next_uart_state = 5U;
            }
        } else if ((5U == vlSelf->rv32e__DOT__uart__DOT__uart_state)) {
            __Vdly__rv32e__DOT__uart_awready = 1U;
            vlSelf->rv32e__DOT__uart_bvalid = 0U;
            __Vdly__rv32e__DOT__uart__DOT__next_uart_state = 0U;
        } else {
            __Vdly__rv32e__DOT__uart__DOT__next_uart_state = 0U;
        }
        __Vdly__rv32e__DOT__uart__DOT__uart_state = vlSelf->rv32e__DOT__uart__DOT__next_uart_state;
    }
    if (vlSelf->reset) {
        __Vdly__rv32e__DOT__sram__DOT__sram_state = 0U;
        __Vdly__rv32e__DOT__sram_arready = 0U;
        vlSelf->rv32e__DOT__sram_rvalid = 0U;
        __Vdly__rv32e__DOT__sram_wready = 0U;
        vlSelf->rv32e__DOT__sram_rdata = 0U;
        __Vdly__rv32e__DOT__sram__DOT__LFSR = 1U;
        __Vdly__rv32e__DOT__sram__DOT__araddr_reg = 0U;
        __Vdly__rv32e__DOT__sram__DOT__rdata_reg = 0U;
        vlSelf->rv32e__DOT__sram_rresp = 0U;
        vlSelf->rv32e__DOT__sram_bresp = 0U;
        vlSelf->rv32e__DOT__sram_bvalid = 0U;
        __Vdly__rv32e__DOT__sram__DOT__awaddr_reg = 0U;
        __Vdly__rv32e__DOT__sram__DOT__wstrb_reg = 0U;
        __Vdly__rv32e__DOT__sram__DOT__wdata_reg = 0U;
    } else {
        if ((0U == vlSelf->rv32e__DOT__sram__DOT__sram_state)) {
            __Vdly__rv32e__DOT__sram_arready = 1U;
            __Vdly__rv32e__DOT__sram_awready = 1U;
            vlSelf->rv32e__DOT__sram_rvalid = 0U;
            vlSelf->rv32e__DOT__sram_bvalid = 0U;
            __Vdly__rv32e__DOT__sram__DOT__LFSR = VL_URANDOM_RANGE_I(1U, 0xaU);
            if (((IData)(vlSelf->rv32e__DOT__sram_arvalid) 
                 & (IData)(vlSelf->rv32e__DOT__sram_arready))) {
                __Vdly__rv32e__DOT__sram__DOT__araddr_reg 
                    = vlSelf->rv32e__DOT__sram_araddr;
                __Vdly__rv32e__DOT__sram_arready = 0U;
                __Vdly__rv32e__DOT__sram__DOT__next_sram_state = 1U;
            } else if (((IData)(vlSelf->rv32e__DOT__sram_awvalid) 
                        & (IData)(vlSelf->rv32e__DOT__sram_awready))) {
                __Vdly__rv32e__DOT__sram__DOT__wdata_reg 
                    = vlSelf->rv32e__DOT__sram_wdata;
                __Vdly__rv32e__DOT__sram__DOT__wstrb_reg 
                    = vlSelf->rv32e__DOT__sram_wstrb;
                __Vdly__rv32e__DOT__sram__DOT__awaddr_reg 
                    = vlSelf->rv32e__DOT__sram_awaddr;
                __Vdly__rv32e__DOT__sram_awready = 0U;
                __Vdly__rv32e__DOT__sram__DOT__next_sram_state = 3U;
            }
        } else if ((1U == vlSelf->rv32e__DOT__sram__DOT__sram_state)) {
            if ((0U < vlSelf->rv32e__DOT__sram__DOT__LFSR)) {
                __Vdly__rv32e__DOT__sram__DOT__LFSR 
                    = (vlSelf->rv32e__DOT__sram__DOT__LFSR 
                       - (IData)(1U));
                __Vdly__rv32e__DOT__sram__DOT__next_sram_state = 1U;
            } else {
                if (vlSelf->rv32e__DOT__sram__DOT__addr_valid) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__sram__DOT__araddr_reg, 4U, __Vfunc_rv32e__DOT__sram__DOT__pmem_read__54__Vfuncout);
                    __Vdly__rv32e__DOT__sram__DOT__rdata_reg 
                        = __Vfunc_rv32e__DOT__sram__DOT__pmem_read__54__Vfuncout;
                    vlSelf->rv32e__DOT__sram_rresp = 0U;
                } else {
                    __Vdly__rv32e__DOT__sram__DOT__rdata_reg = 0U;
                    vlSelf->rv32e__DOT__sram_rresp = 2U;
                }
                __Vdly__rv32e__DOT__sram__DOT__next_sram_state = 2U;
            }
        } else if ((2U == vlSelf->rv32e__DOT__sram__DOT__sram_state)) {
            if (vlSelf->rv32e__DOT__sram_rready) {
                vlSelf->rv32e__DOT__sram_rdata = vlSelf->rv32e__DOT__sram__DOT__rdata_reg;
                vlSelf->rv32e__DOT__sram_rvalid = 1U;
                __Vdly__rv32e__DOT__sram__DOT__araddr_reg = 0U;
                __Vdly__rv32e__DOT__sram__DOT__next_sram_state = 0U;
            } else {
                __Vdly__rv32e__DOT__sram__DOT__next_sram_state = 2U;
            }
        } else if ((3U == vlSelf->rv32e__DOT__sram__DOT__sram_state)) {
            if ((0U < vlSelf->rv32e__DOT__sram__DOT__LFSR)) {
                __Vdly__rv32e__DOT__sram__DOT__LFSR 
                    = (vlSelf->rv32e__DOT__sram__DOT__LFSR 
                       - (IData)(1U));
                __Vdly__rv32e__DOT__sram__DOT__next_sram_state = 3U;
            } else {
                __Vdly__rv32e__DOT__sram_wready = 1U;
                __Vdly__rv32e__DOT__sram__DOT__next_sram_state = 4U;
            }
        } else if ((4U == vlSelf->rv32e__DOT__sram__DOT__sram_state)) {
            if (((IData)(vlSelf->rv32e__DOT__sram_wvalid) 
                 & (IData)(vlSelf->rv32e__DOT__sram_wready))) {
                if (vlSelf->rv32e__DOT__sram__DOT__addr_valid) {
                    if ((1U == (IData)(vlSelf->rv32e__DOT__sram__DOT__wstrb_reg))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__sram__DOT__awaddr_reg, vlSelf->rv32e__DOT__sram__DOT__wdata_reg, 1U);
                    } else if ((3U == (IData)(vlSelf->rv32e__DOT__sram__DOT__wstrb_reg))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__sram__DOT__awaddr_reg, vlSelf->rv32e__DOT__sram__DOT__wdata_reg, 2U);
                    } else if ((0xfU == (IData)(vlSelf->rv32e__DOT__sram__DOT__wstrb_reg))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__sram__DOT__awaddr_reg, vlSelf->rv32e__DOT__sram__DOT__wdata_reg, 4U);
                    } else {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__sram__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__sram__DOT__awaddr_reg, vlSelf->rv32e__DOT__sram__DOT__wdata_reg, 4U);
                    }
                    vlSelf->rv32e__DOT__sram_bresp = 0U;
                    __Vdly__rv32e__DOT__sram_wready = 0U;
                } else {
                    vlSelf->rv32e__DOT__sram_bresp = 2U;
                }
                vlSelf->rv32e__DOT__sram_bvalid = 1U;
                __Vdly__rv32e__DOT__sram__DOT__next_sram_state = 5U;
            }
        } else if ((5U == vlSelf->rv32e__DOT__sram__DOT__sram_state)) {
            __Vdly__rv32e__DOT__sram_awready = 1U;
            vlSelf->rv32e__DOT__sram_bvalid = 0U;
            __Vdly__rv32e__DOT__sram__DOT__next_sram_state = 0U;
        } else {
            __Vdly__rv32e__DOT__sram__DOT__next_sram_state = 0U;
        }
        __Vdly__rv32e__DOT__sram__DOT__sram_state = vlSelf->rv32e__DOT__sram__DOT__next_sram_state;
    }
    vlSelf->rv32e__DOT__uart__DOT__uart_state = __Vdly__rv32e__DOT__uart__DOT__uart_state;
    vlSelf->rv32e__DOT__uart__DOT__LFSR = __Vdly__rv32e__DOT__uart__DOT__LFSR;
    vlSelf->rv32e__DOT__uart__DOT__wdata_reg = __Vdly__rv32e__DOT__uart__DOT__wdata_reg;
    vlSelf->rv32e__DOT__uart__DOT__rdata_reg = __Vdly__rv32e__DOT__uart__DOT__rdata_reg;
    vlSelf->rv32e__DOT__uart__DOT__next_uart_state 
        = __Vdly__rv32e__DOT__uart__DOT__next_uart_state;
    vlSelf->rv32e__DOT__uart_wready = __Vdly__rv32e__DOT__uart_wready;
    vlSelf->rv32e__DOT__uart_awready = __Vdly__rv32e__DOT__uart_awready;
    vlSelf->rv32e__DOT__uart_arready = __Vdly__rv32e__DOT__uart_arready;
    vlSelf->rv32e__DOT__sram__DOT__sram_state = __Vdly__rv32e__DOT__sram__DOT__sram_state;
    vlSelf->rv32e__DOT__sram__DOT__LFSR = __Vdly__rv32e__DOT__sram__DOT__LFSR;
    vlSelf->rv32e__DOT__sram__DOT__araddr_reg = __Vdly__rv32e__DOT__sram__DOT__araddr_reg;
    vlSelf->rv32e__DOT__sram__DOT__rdata_reg = __Vdly__rv32e__DOT__sram__DOT__rdata_reg;
    vlSelf->rv32e__DOT__sram__DOT__awaddr_reg = __Vdly__rv32e__DOT__sram__DOT__awaddr_reg;
    vlSelf->rv32e__DOT__sram__DOT__wstrb_reg = __Vdly__rv32e__DOT__sram__DOT__wstrb_reg;
    vlSelf->rv32e__DOT__sram__DOT__wdata_reg = __Vdly__rv32e__DOT__sram__DOT__wdata_reg;
    vlSelf->rv32e__DOT__sram__DOT__next_sram_state 
        = __Vdly__rv32e__DOT__sram__DOT__next_sram_state;
    vlSelf->rv32e__DOT__sram_wready = __Vdly__rv32e__DOT__sram_wready;
    vlSelf->rv32e__DOT__sram_awready = __Vdly__rv32e__DOT__sram_awready;
    vlSelf->rv32e__DOT__sram_arready = __Vdly__rv32e__DOT__sram_arready;
}

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__1(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vdly__rv32e__DOT__pc;
    __Vdly__rv32e__DOT__pc = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__ifu_sram_araddr;
    __Vdly__rv32e__DOT__ifu_sram_araddr = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__ifu_sram_arvalid;
    __Vdly__rv32e__DOT__ifu_sram_arvalid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__ifu_sram_rready;
    __Vdly__rv32e__DOT__ifu_sram_rready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_ready;
    __Vdly__rv32e__DOT__mem_ready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_sram_arvalid;
    __Vdly__rv32e__DOT__mem_sram_arvalid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_sram_rready;
    __Vdly__rv32e__DOT__mem_sram_rready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_sram_wvalid;
    __Vdly__rv32e__DOT__mem_sram_wvalid = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_sram_araddr;
    __Vdly__rv32e__DOT__mem_sram_araddr = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_sram_awaddr;
    __Vdly__rv32e__DOT__mem_sram_awaddr = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_sram_awvalid;
    __Vdly__rv32e__DOT__mem_sram_awvalid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_sram_bready;
    __Vdly__rv32e__DOT__mem_sram_bready = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v0;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__rv32e__DOT__wb_stage__DOT__regs__v32;
    __Vdlyvdim0__rv32e__DOT__wb_stage__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__rv32e__DOT__wb_stage__DOT__regs__v32;
    __Vdlyvval__rv32e__DOT__wb_stage__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v32;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v32 = 0;
    // Body
    __Vdly__rv32e__DOT__pc = vlSelf->rv32e__DOT__pc;
    __Vdly__rv32e__DOT__ifu_sram_rready = vlSelf->rv32e__DOT__ifu_sram_rready;
    __Vdly__rv32e__DOT__ifu_sram_arvalid = vlSelf->rv32e__DOT__ifu_sram_arvalid;
    __Vdly__rv32e__DOT__ifu_sram_araddr = vlSelf->rv32e__DOT__ifu_sram_araddr;
    __Vdly__rv32e__DOT__mem_ready = vlSelf->rv32e__DOT__mem_ready;
    __Vdly__rv32e__DOT__mem_sram_wvalid = vlSelf->rv32e__DOT__mem_sram_wvalid;
    __Vdly__rv32e__DOT__mem_sram_bready = vlSelf->rv32e__DOT__mem_sram_bready;
    __Vdly__rv32e__DOT__mem_sram_awvalid = vlSelf->rv32e__DOT__mem_sram_awvalid;
    __Vdly__rv32e__DOT__mem_sram_awaddr = vlSelf->rv32e__DOT__mem_sram_awaddr;
    __Vdly__rv32e__DOT__mem_sram_rready = vlSelf->rv32e__DOT__mem_sram_rready;
    __Vdly__rv32e__DOT__mem_sram_araddr = vlSelf->rv32e__DOT__mem_sram_araddr;
    __Vdly__rv32e__DOT__mem_sram_arvalid = vlSelf->rv32e__DOT__mem_sram_arvalid;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v0 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v32 = 0U;
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__wb_stage__DOT__i = 0x20U;
        vlSelf->rv32e__DOT__ex_stage__DOT__state = 0U;
        vlSelf->rv32e__DOT__ex_ready = 1U;
        vlSelf->rv32e__DOT__ex_valid = 0U;
        vlSelf->rv32e__DOT__alu_result = 0U;
        vlSelf->rv32e__DOT__alu_zero = 0U;
        vlSelf->rv32e__DOT__alu_less = 0U;
    } else {
        vlSelf->rv32e__DOT__ex_stage__DOT__state = vlSelf->rv32e__DOT__ex_stage__DOT__next_state;
        if ((0U == vlSelf->rv32e__DOT__ex_stage__DOT__state)) {
            vlSelf->rv32e__DOT__ex_ready = 1U;
            vlSelf->rv32e__DOT__ex_valid = 0U;
            if (vlSelf->rv32e__DOT__id_valid) {
                vlSelf->rv32e__DOT__alu_result = ((8U 
                                                   & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                      ? 
                                                     (vlSelf->rv32e__DOT__rs1_val 
                                                      >> 
                                                      (0x1fU 
                                                       & (((0xcU 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                >> 2U))) 
                                                           | (0x18U 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                  >> 2U))))
                                                           ? vlSelf->rv32e__DOT__rs2_val
                                                           : vlSelf->rv32e__DOT__imm)))
                                                      : 
                                                     VL_SHIFTRS_III(32,32,5, vlSelf->rv32e__DOT__rs1_val, 
                                                                    (0x1fU 
                                                                     & (((0xcU 
                                                                          == 
                                                                          (0x1fU 
                                                                           & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                              >> 2U))) 
                                                                         | (0x18U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                                >> 2U))))
                                                                         ? vlSelf->rv32e__DOT__rs2_val
                                                                         : vlSelf->rv32e__DOT__imm))))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                      ? 
                                                     (VL_LTS_III(32, vlSelf->rv32e__DOT__rs1_val, 
                                                                 (((0xcU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                        >> 2U))) 
                                                                   | (0x18U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                          >> 2U))))
                                                                   ? vlSelf->rv32e__DOT__rs2_val
                                                                   : vlSelf->rv32e__DOT__imm))
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     ((vlSelf->rv32e__DOT__rs1_val 
                                                       < 
                                                       (((0xcU 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                              >> 2U))) 
                                                         | (0x18U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                >> 2U))))
                                                         ? vlSelf->rv32e__DOT__rs2_val
                                                         : vlSelf->rv32e__DOT__imm))
                                                       ? 1U
                                                       : 0U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                      ? 
                                                     (vlSelf->rv32e__DOT__rs1_val 
                                                      << 
                                                      (0x1fU 
                                                       & (((0xcU 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                >> 2U))) 
                                                           | (0x18U 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                  >> 2U))))
                                                           ? vlSelf->rv32e__DOT__rs2_val
                                                           : vlSelf->rv32e__DOT__imm)))
                                                      : 
                                                     (vlSelf->rv32e__DOT__rs1_val 
                                                      ^ 
                                                      (((0xcU 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                             >> 2U))) 
                                                        | (0x18U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                               >> 2U))))
                                                        ? vlSelf->rv32e__DOT__rs2_val
                                                        : vlSelf->rv32e__DOT__imm))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                      ? 
                                                     (vlSelf->rv32e__DOT__rs1_val 
                                                      | (((0xcU 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                               >> 2U))) 
                                                          | (0x18U 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                 >> 2U))))
                                                          ? vlSelf->rv32e__DOT__rs2_val
                                                          : vlSelf->rv32e__DOT__imm))
                                                      : 
                                                     (vlSelf->rv32e__DOT__rs1_val 
                                                      & (((0xcU 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                               >> 2U))) 
                                                          | (0x18U 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                 >> 2U))))
                                                          ? vlSelf->rv32e__DOT__rs2_val
                                                          : vlSelf->rv32e__DOT__imm)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                      ? 
                                                     (vlSelf->rv32e__DOT__rs1_val 
                                                      - 
                                                      (((0xcU 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                             >> 2U))) 
                                                        | (0x18U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                               >> 2U))))
                                                        ? vlSelf->rv32e__DOT__rs2_val
                                                        : vlSelf->rv32e__DOT__imm))
                                                      : 
                                                     (vlSelf->rv32e__DOT__rs1_val 
                                                      + 
                                                      (((0xcU 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                             >> 2U))) 
                                                        | (0x18U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                               >> 2U))))
                                                        ? vlSelf->rv32e__DOT__rs2_val
                                                        : vlSelf->rv32e__DOT__imm))))));
                vlSelf->rv32e__DOT__ex_ready = 0U;
                vlSelf->rv32e__DOT__ex_valid = 0U;
                vlSelf->rv32e__DOT__alu_zero = (0U 
                                                == vlSelf->rv32e__DOT__alu_result);
                vlSelf->rv32e__DOT__alu_less = ((7U 
                                                 == (IData)(vlSelf->rv32e__DOT__alu_op))
                                                 ? 
                                                VL_LTS_III(32, vlSelf->rv32e__DOT__rs1_val, 
                                                           (((0xcU 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                  >> 2U))) 
                                                             | (0x18U 
                                                                == 
                                                                (0x1fU 
                                                                 & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                    >> 2U))))
                                                             ? vlSelf->rv32e__DOT__rs2_val
                                                             : vlSelf->rv32e__DOT__imm))
                                                 : 
                                                ((6U 
                                                  == (IData)(vlSelf->rv32e__DOT__alu_op))
                                                  ? 
                                                 (vlSelf->rv32e__DOT__rs1_val 
                                                  < vlSelf->rv32e__DOT__rs2_val)
                                                  : 
                                                 VL_LTS_III(32, vlSelf->rv32e__DOT__rs1_val, 
                                                            (((0xcU 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                   >> 2U))) 
                                                              | (0x18U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                     >> 2U))))
                                                              ? vlSelf->rv32e__DOT__rs2_val
                                                              : vlSelf->rv32e__DOT__imm))));
                vlSelf->rv32e__DOT__ex_stage__DOT__next_state 
                    = ((IData)(vlSelf->rv32e__DOT__mem_ready)
                        ? 1U : 0U);
            } else {
                vlSelf->rv32e__DOT__ex_stage__DOT__next_state = 0U;
            }
        } else if ((1U == vlSelf->rv32e__DOT__ex_stage__DOT__state)) {
            vlSelf->rv32e__DOT__ex_ready = 0U;
            vlSelf->rv32e__DOT__ex_valid = 1U;
            vlSelf->rv32e__DOT__ex_stage__DOT__next_state 
                = ((IData)(vlSelf->rv32e__DOT__mem_ready)
                    ? 0U : 1U);
        } else {
            vlSelf->rv32e__DOT__ex_ready = 0U;
            vlSelf->rv32e__DOT__ex_valid = 0U;
            vlSelf->rv32e__DOT__ex_stage__DOT__next_state = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__opcode = 0U;
        vlSelf->rv32e__DOT__rs1 = 0U;
        vlSelf->rv32e__DOT__rs2 = 0U;
        vlSelf->rv32e__DOT__rd = 0U;
        vlSelf->rv32e__DOT__imm = 0U;
        vlSelf->rv32e__DOT__func3 = 0U;
        vlSelf->rv32e__DOT__func7 = 0U;
        vlSelf->rv32e__DOT__RegWrite = 0U;
        vlSelf->rv32e__DOT__MemWrite = 0U;
        vlSelf->rv32e__DOT__MemRead = 0U;
        vlSelf->rv32e__DOT__alu_op = 0U;
        vlSelf->rv32e__DOT__MemLen = 2U;
    } else {
        vlSelf->rv32e__DOT__id_stage__DOT__state = vlSelf->rv32e__DOT__id_stage__DOT__next_state;
        if ((0U == vlSelf->rv32e__DOT__id_stage__DOT__state)) {
            vlSelf->rv32e__DOT__id_ready = 1U;
            vlSelf->rv32e__DOT__id_valid = 0U;
            if (vlSelf->rv32e__DOT__if_valid) {
                vlSelf->rv32e__DOT__opcode = (0x7fU 
                                              & vlSelf->rv32e__DOT__instr);
                vlSelf->rv32e__DOT__id_ready = 0U;
                vlSelf->rv32e__DOT__id_valid = 0U;
                vlSelf->rv32e__DOT__rs1 = (0x1fU & 
                                           (vlSelf->rv32e__DOT__instr 
                                            >> 0xfU));
                vlSelf->rv32e__DOT__rs2 = (0x1fU & 
                                           (vlSelf->rv32e__DOT__instr 
                                            >> 0x14U));
                vlSelf->rv32e__DOT__rd = (0x1fU & (vlSelf->rv32e__DOT__instr 
                                                   >> 7U));
                vlSelf->rv32e__DOT__func3 = (7U & (vlSelf->rv32e__DOT__instr 
                                                   >> 0xcU));
                vlSelf->rv32e__DOT__id_stage__DOT__next_state 
                    = ((IData)(vlSelf->rv32e__DOT__ex_ready)
                        ? 1U : 0U);
                vlSelf->rv32e__DOT__func7 = (vlSelf->rv32e__DOT__instr 
                                             >> 0x19U);
                vlSelf->rv32e__DOT__imm = 0U;
                vlSelf->rv32e__DOT__RegWrite = 0U;
                vlSelf->rv32e__DOT__MemWrite = 0U;
                vlSelf->rv32e__DOT__MemRead = 0U;
                vlSelf->rv32e__DOT__alu_op = 0U;
                vlSelf->rv32e__DOT__MemLen = 2U;
                vlSelf->rv32e__DOT__id_stage__DOT__get_opcode 
                    = (0x1fU & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                >> 2U));
                if ((0x10U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                    if (VL_LIKELY((8U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                        if ((4U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                            if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                                VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                          32,vlSelf->rv32e__DOT__instr);
                            } else if (VL_UNLIKELY(
                                                   (1U 
                                                    & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                                VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                          32,vlSelf->rv32e__DOT__instr);
                            } else if ((0x100073U == vlSelf->rv32e__DOT__instr)) {
                                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(1U, vlSelf->rv32e__DOT__instr);
                            }
                        } else if ((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                            if (VL_LIKELY((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                                vlSelf->rv32e__DOT__imm 
                                    = (((- (IData)(
                                                   (vlSelf->rv32e__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0x14U) | 
                                       ((0xff000U & vlSelf->rv32e__DOT__instr) 
                                        | ((0x800U 
                                            & (vlSelf->rv32e__DOT__instr 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->rv32e__DOT__instr 
                                                 >> 0x14U)))));
                                vlSelf->rv32e__DOT__RegWrite = 1U;
                            } else {
                                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                                VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                          32,vlSelf->rv32e__DOT__instr);
                            }
                        } else if ((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                            if ((0U == (IData)(vlSelf->rv32e__DOT__func3))) {
                                vlSelf->rv32e__DOT__imm 
                                    = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                                vlSelf->rv32e__DOT__RegWrite = 1U;
                            }
                        } else {
                            vlSelf->rv32e__DOT__imm 
                                = (((- (IData)((vlSelf->rv32e__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->rv32e__DOT__instr 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->rv32e__DOT__instr 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->rv32e__DOT__instr 
                                                         >> 7U)))));
                            if ((4U & (IData)(vlSelf->rv32e__DOT__func3))) {
                                vlSelf->rv32e__DOT__alu_op 
                                    = ((2U & (IData)(vlSelf->rv32e__DOT__func3))
                                        ? 6U : 7U);
                            } else if (VL_UNLIKELY(
                                                   (2U 
                                                    & (IData)(vlSelf->rv32e__DOT__func3)))) {
                                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                                VL_WRITEF("\033[32m[ID] : Unknown B instruction with func3 = %b\033[0m\n",
                                          3,vlSelf->rv32e__DOT__func3);
                            } else {
                                vlSelf->rv32e__DOT__alu_op = 1U;
                            }
                        }
                    } else {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                        VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                  32,vlSelf->rv32e__DOT__instr);
                    }
                } else if ((8U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                    if ((4U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                        if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                            VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                      32,vlSelf->rv32e__DOT__instr);
                        } else if ((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                            vlSelf->rv32e__DOT__imm 
                                = (0xfffff000U & vlSelf->rv32e__DOT__instr);
                            vlSelf->rv32e__DOT__RegWrite = 1U;
                        } else {
                            vlSelf->rv32e__DOT__RegWrite = 1U;
                            vlSelf->rv32e__DOT__imm = 0U;
                            if ((4U & (IData)(vlSelf->rv32e__DOT__func3))) {
                                if ((2U & (IData)(vlSelf->rv32e__DOT__func3))) {
                                    vlSelf->rv32e__DOT__alu_op 
                                        = ((1U & (IData)(vlSelf->rv32e__DOT__func3))
                                            ? 2U : 3U);
                                } else if ((1U & (IData)(vlSelf->rv32e__DOT__func3))) {
                                    if ((0x20U == (IData)(vlSelf->rv32e__DOT__func7))) {
                                        vlSelf->rv32e__DOT__alu_op = 8U;
                                    } else if ((0U 
                                                == (IData)(vlSelf->rv32e__DOT__func7))) {
                                        vlSelf->rv32e__DOT__alu_op = 9U;
                                    }
                                } else {
                                    vlSelf->rv32e__DOT__alu_op = 4U;
                                }
                            } else if ((2U & (IData)(vlSelf->rv32e__DOT__func3))) {
                                if ((1U & (IData)(vlSelf->rv32e__DOT__func3))) {
                                    if ((0U == (IData)(vlSelf->rv32e__DOT__func7))) {
                                        vlSelf->rv32e__DOT__alu_op = 6U;
                                    } else if ((0U 
                                                == (IData)(vlSelf->rv32e__DOT__func7))) {
                                        vlSelf->rv32e__DOT__alu_op = 9U;
                                    }
                                } else if ((0U == (IData)(vlSelf->rv32e__DOT__func7))) {
                                    vlSelf->rv32e__DOT__alu_op = 7U;
                                }
                            } else if ((1U & (IData)(vlSelf->rv32e__DOT__func3))) {
                                if ((0U == (IData)(vlSelf->rv32e__DOT__func7))) {
                                    vlSelf->rv32e__DOT__alu_op = 5U;
                                }
                            } else {
                                vlSelf->rv32e__DOT__alu_op 
                                    = ((0x20U & (IData)(vlSelf->rv32e__DOT__func7))
                                        ? 1U : 0U);
                            }
                        }
                    } else if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                        VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                  32,vlSelf->rv32e__DOT__instr);
                    } else if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                        VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                  32,vlSelf->rv32e__DOT__instr);
                    } else {
                        vlSelf->rv32e__DOT__imm = (
                                                   ((- (IData)(
                                                               (vlSelf->rv32e__DOT__instr 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (vlSelf->rv32e__DOT__instr 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelf->rv32e__DOT__instr 
                                                            >> 7U))));
                        vlSelf->rv32e__DOT__MemWrite = 1U;
                        vlSelf->rv32e__DOT__alu_op = 0U;
                        if ((2U == (IData)(vlSelf->rv32e__DOT__func3))) {
                            vlSelf->rv32e__DOT__MemLen = 2U;
                        } else if ((1U == (IData)(vlSelf->rv32e__DOT__func3))) {
                            vlSelf->rv32e__DOT__MemLen = 1U;
                        } else if (VL_LIKELY((0U == (IData)(vlSelf->rv32e__DOT__func3)))) {
                            vlSelf->rv32e__DOT__MemLen = 4U;
                        } else {
                            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                            VL_WRITEF("\033[32m[ID] : Unknown S instruction with func3 = %b\033[0m\n",
                                      3,vlSelf->rv32e__DOT__func3);
                        }
                    }
                } else if ((4U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                    if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                        VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                  32,vlSelf->rv32e__DOT__instr);
                    } else if ((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                        vlSelf->rv32e__DOT__imm = (0xfffff000U 
                                                   & vlSelf->rv32e__DOT__instr);
                        vlSelf->rv32e__DOT__RegWrite = 1U;
                        vlSelf->rv32e__DOT__alu_op = 0U;
                    } else {
                        vlSelf->rv32e__DOT__imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                        vlSelf->rv32e__DOT__RegWrite = 1U;
                        if ((4U & (IData)(vlSelf->rv32e__DOT__func3))) {
                            if ((2U & (IData)(vlSelf->rv32e__DOT__func3))) {
                                vlSelf->rv32e__DOT__alu_op 
                                    = ((1U & (IData)(vlSelf->rv32e__DOT__func3))
                                        ? 2U : 3U);
                            } else if ((1U & (IData)(vlSelf->rv32e__DOT__func3))) {
                                if ((0x20U == (IData)(vlSelf->rv32e__DOT__func7))) {
                                    vlSelf->rv32e__DOT__alu_op = 8U;
                                } else if ((0U == (IData)(vlSelf->rv32e__DOT__func7))) {
                                    vlSelf->rv32e__DOT__alu_op = 9U;
                                }
                            } else {
                                vlSelf->rv32e__DOT__alu_op = 4U;
                            }
                        } else if ((2U & (IData)(vlSelf->rv32e__DOT__func3))) {
                            vlSelf->rv32e__DOT__alu_op 
                                = ((1U & (IData)(vlSelf->rv32e__DOT__func3))
                                    ? 6U : 7U);
                        } else if ((1U & (IData)(vlSelf->rv32e__DOT__func3))) {
                            if ((0U == (IData)(vlSelf->rv32e__DOT__func7))) {
                                vlSelf->rv32e__DOT__alu_op = 5U;
                            }
                        } else {
                            vlSelf->rv32e__DOT__alu_op = 0U;
                        }
                    }
                } else if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                    VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                              32,vlSelf->rv32e__DOT__instr);
                } else if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                    VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                              32,vlSelf->rv32e__DOT__instr);
                } else if ((2U == (IData)(vlSelf->rv32e__DOT__func3))) {
                    vlSelf->rv32e__DOT__imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                    vlSelf->rv32e__DOT__RegWrite = 1U;
                    vlSelf->rv32e__DOT__MemRead = 1U;
                    vlSelf->rv32e__DOT__alu_op = 0U;
                    vlSelf->rv32e__DOT__MemLen = 2U;
                } else if ((4U == (IData)(vlSelf->rv32e__DOT__func3))) {
                    vlSelf->rv32e__DOT__imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                    vlSelf->rv32e__DOT__RegWrite = 1U;
                    vlSelf->rv32e__DOT__MemRead = 1U;
                    vlSelf->rv32e__DOT__alu_op = 0U;
                    vlSelf->rv32e__DOT__MemLen = 0U;
                } else if ((1U == (IData)(vlSelf->rv32e__DOT__func3))) {
                    vlSelf->rv32e__DOT__imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                    vlSelf->rv32e__DOT__RegWrite = 1U;
                    vlSelf->rv32e__DOT__MemRead = 1U;
                    vlSelf->rv32e__DOT__alu_op = 0U;
                    vlSelf->rv32e__DOT__MemLen = 1U;
                } else if ((5U == (IData)(vlSelf->rv32e__DOT__func3))) {
                    vlSelf->rv32e__DOT__imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                    vlSelf->rv32e__DOT__RegWrite = 1U;
                    vlSelf->rv32e__DOT__MemRead = 1U;
                    vlSelf->rv32e__DOT__alu_op = 0U;
                    vlSelf->rv32e__DOT__MemLen = 3U;
                } else if (((0U == (IData)(vlSelf->rv32e__DOT__func3)) 
                            & (3U == (IData)(vlSelf->rv32e__DOT__opcode)))) {
                    vlSelf->rv32e__DOT__imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                    vlSelf->rv32e__DOT__RegWrite = 1U;
                    vlSelf->rv32e__DOT__MemRead = 1U;
                    vlSelf->rv32e__DOT__alu_op = 0U;
                    vlSelf->rv32e__DOT__MemLen = 4U;
                }
            } else {
                vlSelf->rv32e__DOT__id_stage__DOT__next_state = 0U;
            }
        } else if ((1U == vlSelf->rv32e__DOT__id_stage__DOT__state)) {
            vlSelf->rv32e__DOT__id_ready = 0U;
            vlSelf->rv32e__DOT__id_valid = 1U;
            vlSelf->rv32e__DOT__id_stage__DOT__next_state 
                = ((IData)(vlSelf->rv32e__DOT__ex_ready)
                    ? 0U : 1U);
        } else {
            vlSelf->rv32e__DOT__id_valid = 0U;
            vlSelf->rv32e__DOT__id_ready = 0U;
            vlSelf->rv32e__DOT__id_stage__DOT__next_state = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__wb_stage__DOT__state = 1U;
        vlSelf->rv32e__DOT__wb_ready = 1U;
        vlSelf->rv32e__DOT__wb_valid = 1U;
        vlSelf->rv32e__DOT__jal_target = 0U;
        vlSelf->rv32e__DOT__jalr_target = 0U;
        vlSelf->rv32e__DOT__is_jal = 0U;
        vlSelf->rv32e__DOT__is_jalr = 0U;
        vlSelf->rv32e__DOT__take_branch = 0U;
        vlSelf->rv32e__DOT__wb_data = 0U;
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v0 = 1U;
        vlSelf->rv32e__DOT__mem_stage__DOT__delay = 3U;
        vlSelf->rv32e__DOT__if_stage__DOT__state = 1U;
        vlSelf->rv32e__DOT__if_stage__DOT__next_state = 1U;
        __Vdly__rv32e__DOT__pc = 0x80000000U;
        __Vdly__rv32e__DOT__ifu_sram_araddr = 0x80000000U;
        vlSelf->rv32e__DOT__if_valid = 0U;
        vlSelf->rv32e__DOT__if_ready = 1U;
        __Vdly__rv32e__DOT__ifu_sram_arvalid = 1U;
        __Vdly__rv32e__DOT__ifu_sram_rready = 1U;
        vlSelf->rv32e__DOT__if_access_fault = 0U;
        vlSelf->rv32e__DOT__if_fault_addr = 0U;
        vlSelf->rv32e__DOT__mem_stage__DOT__state = 0U;
        vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 0U;
        __Vdly__rv32e__DOT__mem_ready = 1U;
        vlSelf->rv32e__DOT__mem_valid = 0U;
        vlSelf->rv32e__DOT__data_out = 0U;
        __Vdly__rv32e__DOT__mem_sram_arvalid = 0U;
        __Vdly__rv32e__DOT__mem_sram_rready = 0U;
        __Vdly__rv32e__DOT__mem_sram_wvalid = 0U;
        __Vdly__rv32e__DOT__mem_sram_araddr = 0U;
        __Vdly__rv32e__DOT__mem_sram_awaddr = 0U;
        __Vdly__rv32e__DOT__mem_sram_awvalid = 0U;
        vlSelf->rv32e__DOT__mem_sram_wdata = 0U;
        vlSelf->rv32e__DOT__mem_sram_wstrb = 0xfU;
        __Vdly__rv32e__DOT__mem_sram_bready = 0U;
        vlSelf->rv32e__DOT__load_access_fault = 0U;
        vlSelf->rv32e__DOT__store_access_fault = 0U;
        vlSelf->rv32e__DOT__mem_fault_addr = 0U;
    } else {
        vlSelf->rv32e__DOT__wb_stage__DOT__state = vlSelf->rv32e__DOT__wb_stage__DOT__next_state;
        if ((0U == vlSelf->rv32e__DOT__wb_stage__DOT__state)) {
            vlSelf->rv32e__DOT__wb_ready = 1U;
            vlSelf->rv32e__DOT__wb_valid = 0U;
            if (vlSelf->rv32e__DOT__mem_valid) {
                vlSelf->rv32e__DOT__wb_data = ((0x37U 
                                                == (IData)(vlSelf->rv32e__DOT__opcode))
                                                ? vlSelf->rv32e__DOT__imm
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelf->rv32e__DOT__opcode))
                                                    ? 
                                                   (vlSelf->rv32e__DOT__pc 
                                                    + vlSelf->rv32e__DOT__imm)
                                                    : 
                                                   (((0x6fU 
                                                      == (IData)(vlSelf->rv32e__DOT__opcode)) 
                                                     | (0x67U 
                                                        == (IData)(vlSelf->rv32e__DOT__opcode)))
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSelf->rv32e__DOT__pc)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->rv32e__DOT__opcode))
                                                      ? vlSelf->rv32e__DOT__data_out
                                                      : 
                                                     (((0x33U 
                                                        == (IData)(vlSelf->rv32e__DOT__opcode)) 
                                                       | (0x13U 
                                                          == (IData)(vlSelf->rv32e__DOT__opcode)))
                                                       ? vlSelf->rv32e__DOT__alu_result
                                                       : 0U)))));
                vlSelf->rv32e__DOT__wb_ready = 0U;
                vlSelf->rv32e__DOT__wb_valid = 0U;
                vlSelf->rv32e__DOT__jal_target = (vlSelf->rv32e__DOT__pc 
                                                  + vlSelf->rv32e__DOT__imm);
                vlSelf->rv32e__DOT__jalr_target = (0xfffffffeU 
                                                   & (vlSelf->rv32e__DOT__rs1_val 
                                                      + vlSelf->rv32e__DOT__imm));
                vlSelf->rv32e__DOT__is_jal = (0x6fU 
                                              == (IData)(vlSelf->rv32e__DOT__opcode));
                vlSelf->rv32e__DOT__is_jalr = ((0x67U 
                                                == (IData)(vlSelf->rv32e__DOT__opcode)) 
                                               & (0U 
                                                  == (IData)(vlSelf->rv32e__DOT__func3)));
                vlSelf->rv32e__DOT__take_branch = (
                                                   (0x63U 
                                                    == (IData)(vlSelf->rv32e__DOT__opcode)) 
                                                   & (((((((1U 
                                                            == (IData)(vlSelf->rv32e__DOT__func3)) 
                                                           & (~ (IData)(vlSelf->rv32e__DOT__alu_zero))) 
                                                          | ((0U 
                                                              == (IData)(vlSelf->rv32e__DOT__func3)) 
                                                             & (IData)(vlSelf->rv32e__DOT__alu_zero))) 
                                                         | ((4U 
                                                             == (IData)(vlSelf->rv32e__DOT__func3)) 
                                                            & (IData)(vlSelf->rv32e__DOT__alu_less))) 
                                                        | ((5U 
                                                            == (IData)(vlSelf->rv32e__DOT__func3)) 
                                                           & (~ (IData)(vlSelf->rv32e__DOT__alu_less)))) 
                                                       | ((6U 
                                                           == (IData)(vlSelf->rv32e__DOT__func3)) 
                                                          & (IData)(vlSelf->rv32e__DOT__alu_less))) 
                                                      | ((7U 
                                                          == (IData)(vlSelf->rv32e__DOT__func3)) 
                                                         & (~ (IData)(vlSelf->rv32e__DOT__alu_less)))));
                vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb 
                    = vlSelf->rv32e__DOT__rd;
                vlSelf->rv32e__DOT__wb_stage__DOT__next_state 
                    = ((IData)(vlSelf->rv32e__DOT__if_ready)
                        ? 1U : 0U);
                vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb_pre 
                    = vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb;
                vlSelf->rv32e__DOT__wb_stage__DOT__RegWrite_wb 
                    = vlSelf->rv32e__DOT__RegWrite;
                if (((IData)(vlSelf->rv32e__DOT__wb_stage__DOT__RegWrite_wb) 
                     & (0U != (IData)(vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb_pre)))) {
                    __Vdlyvval__rv32e__DOT__wb_stage__DOT__regs__v32 
                        = vlSelf->rv32e__DOT__wb_data;
                    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v32 = 1U;
                    __Vdlyvdim0__rv32e__DOT__wb_stage__DOT__regs__v32 
                        = vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb_pre;
                }
            } else {
                vlSelf->rv32e__DOT__wb_stage__DOT__next_state = 0U;
            }
        } else if ((1U == vlSelf->rv32e__DOT__wb_stage__DOT__state)) {
            vlSelf->rv32e__DOT__wb_ready = 0U;
            vlSelf->rv32e__DOT__wb_valid = 1U;
            vlSelf->rv32e__DOT__wb_stage__DOT__next_state 
                = ((IData)(vlSelf->rv32e__DOT__if_ready)
                    ? 0U : 1U);
        } else {
            vlSelf->rv32e__DOT__wb_ready = 0U;
            vlSelf->rv32e__DOT__wb_valid = 0U;
            vlSelf->rv32e__DOT__wb_stage__DOT__next_state = 0U;
        }
        vlSelf->rv32e__DOT__if_stage__DOT__state = vlSelf->rv32e__DOT__if_stage__DOT__next_state;
        if ((0U == vlSelf->rv32e__DOT__if_stage__DOT__state)) {
            vlSelf->rv32e__DOT__if_ready = 1U;
            vlSelf->rv32e__DOT__if_valid = 0U;
            __Vdly__rv32e__DOT__ifu_sram_arvalid = 0U;
            __Vdly__rv32e__DOT__ifu_sram_rready = 0U;
            if (vlSelf->rv32e__DOT__wb_valid) {
                if (vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src) {
                    __Vdly__rv32e__DOT__pc = vlSelf->rv32e__DOT__branch_target;
                    __Vdly__rv32e__DOT__ifu_sram_araddr 
                        = vlSelf->rv32e__DOT__branch_target;
                } else {
                    __Vdly__rv32e__DOT__pc = ((IData)(4U) 
                                              + vlSelf->rv32e__DOT__pc);
                    __Vdly__rv32e__DOT__ifu_sram_araddr 
                        = ((IData)(4U) + vlSelf->rv32e__DOT__pc);
                }
                vlSelf->rv32e__DOT__if_stage__DOT__next_state = 1U;
                __Vdly__rv32e__DOT__ifu_sram_arvalid = 1U;
            } else {
                vlSelf->rv32e__DOT__if_stage__DOT__next_state = 0U;
            }
        } else if ((1U == vlSelf->rv32e__DOT__if_stage__DOT__state)) {
            vlSelf->rv32e__DOT__if_ready = 0U;
            vlSelf->rv32e__DOT__if_valid = 0U;
            if (((IData)(vlSelf->rv32e__DOT__ifu_sram_arready) 
                 & (IData)(vlSelf->rv32e__DOT__ifu_sram_arvalid))) {
                vlSelf->rv32e__DOT__if_stage__DOT__next_state = 2U;
                __Vdly__rv32e__DOT__ifu_sram_rready = 1U;
            } else {
                vlSelf->rv32e__DOT__if_stage__DOT__next_state = 1U;
            }
        } else if ((2U == vlSelf->rv32e__DOT__if_stage__DOT__state)) {
            vlSelf->rv32e__DOT__if_valid = 0U;
            vlSelf->rv32e__DOT__if_ready = 0U;
            if (((IData)(vlSelf->rv32e__DOT__ifu_sram_rvalid) 
                 & (IData)(vlSelf->rv32e__DOT__ifu_sram_rready))) {
                vlSelf->rv32e__DOT__if_stage__DOT__next_state = 3U;
                __Vdly__rv32e__DOT__ifu_sram_arvalid = 0U;
                vlSelf->rv32e__DOT__instr = vlSelf->rv32e__DOT__ifu_sram_rdata;
                if ((0U != (IData)(vlSelf->rv32e__DOT__ifu_sram_rresp))) {
                    vlSelf->rv32e__DOT__if_access_fault = 1U;
                    vlSelf->rv32e__DOT__if_fault_addr 
                        = vlSelf->rv32e__DOT__ifu_sram_araddr;
                } else {
                    vlSelf->rv32e__DOT__if_access_fault = 0U;
                    vlSelf->rv32e__DOT__if_fault_addr = 0U;
                }
            } else {
                vlSelf->rv32e__DOT__if_stage__DOT__next_state = 2U;
            }
        } else if ((3U == vlSelf->rv32e__DOT__if_stage__DOT__state)) {
            vlSelf->rv32e__DOT__if_stage__DOT__next_state 
                = ((IData)(vlSelf->rv32e__DOT__id_ready)
                    ? 0U : 3U);
            vlSelf->rv32e__DOT__if_ready = 0U;
            vlSelf->rv32e__DOT__if_valid = 1U;
            __Vdly__rv32e__DOT__ifu_sram_arvalid = 0U;
        } else {
            vlSelf->rv32e__DOT__if_stage__DOT__next_state = 0U;
            vlSelf->rv32e__DOT__if_ready = 0U;
            vlSelf->rv32e__DOT__if_valid = 0U;
            __Vdly__rv32e__DOT__ifu_sram_arvalid = 0U;
            __Vdly__rv32e__DOT__ifu_sram_rready = 0U;
        }
        vlSelf->rv32e__DOT__mem_stage__DOT__state = vlSelf->rv32e__DOT__mem_stage__DOT__next_state;
        if ((0U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            vlSelf->rv32e__DOT__mem_valid = 0U;
            __Vdly__rv32e__DOT__mem_sram_arvalid = 0U;
            __Vdly__rv32e__DOT__mem_sram_rready = 0U;
            __Vdly__rv32e__DOT__mem_sram_bready = 0U;
            vlSelf->rv32e__DOT__load_access_fault = 0U;
            vlSelf->rv32e__DOT__store_access_fault = 0U;
            __Vdly__rv32e__DOT__mem_sram_awvalid = 0U;
            if (((IData)(vlSelf->rv32e__DOT__ex_valid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_ready))) {
                if (vlSelf->rv32e__DOT__MemRead) {
                    vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 1U;
                    __Vdly__rv32e__DOT__mem_sram_araddr 
                        = vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr;
                    __Vdly__rv32e__DOT__mem_sram_arvalid = 1U;
                } else if (vlSelf->rv32e__DOT__MemWrite) {
                    vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 3U;
                    __Vdly__rv32e__DOT__mem_sram_awaddr 
                        = vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr;
                    __Vdly__rv32e__DOT__mem_sram_awvalid = 1U;
                    vlSelf->rv32e__DOT__mem_sram_wdata 
                        = vlSelf->rv32e__DOT__rs2_val;
                    vlSelf->rv32e__DOT__mem_sram_wstrb 
                        = ((4U == (IData)(vlSelf->rv32e__DOT__MemLen))
                            ? 1U : ((1U == (IData)(vlSelf->rv32e__DOT__MemLen))
                                     ? 3U : 0xfU));
                } else {
                    vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 6U;
                }
            } else {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 0U;
            }
            __Vdly__rv32e__DOT__mem_ready = 1U;
        } else if ((1U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            vlSelf->rv32e__DOT__mem_stage__DOT__next_state 
                = (((IData)(vlSelf->rv32e__DOT__mem_sram_arready) 
                    & (IData)(vlSelf->rv32e__DOT__mem_sram_arvalid))
                    ? 2U : 1U);
            __Vdly__rv32e__DOT__mem_ready = 0U;
            vlSelf->rv32e__DOT__mem_valid = 0U;
        } else if ((2U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            __Vdly__rv32e__DOT__mem_ready = 0U;
            vlSelf->rv32e__DOT__mem_valid = 0U;
            if (((IData)(vlSelf->rv32e__DOT__mem_sram_rvalid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_sram_rready))) {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 6U;
                __Vdly__rv32e__DOT__mem_sram_arvalid = 0U;
                vlSelf->rv32e__DOT__data_out = ((4U 
                                                 & (IData)(vlSelf->rv32e__DOT__MemLen))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->rv32e__DOT__MemLen))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->rv32e__DOT__MemLen))
                                                   ? 0U
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->rv32e__DOT__mem_sram_rdata 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->rv32e__DOT__mem_sram_rdata))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->rv32e__DOT__MemLen))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->rv32e__DOT__MemLen))
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelf->rv32e__DOT__mem_sram_rdata)
                                                   : vlSelf->rv32e__DOT__mem_sram_rdata)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->rv32e__DOT__MemLen))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->rv32e__DOT__mem_sram_rdata 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->rv32e__DOT__mem_sram_rdata))
                                                   : 
                                                  (0xffU 
                                                   & vlSelf->rv32e__DOT__mem_sram_rdata))));
                if ((0U != (IData)(vlSelf->rv32e__DOT__mem_sram_rresp))) {
                    vlSelf->rv32e__DOT__load_access_fault = 1U;
                    vlSelf->rv32e__DOT__mem_fault_addr 
                        = vlSelf->rv32e__DOT__mem_sram_araddr;
                } else {
                    vlSelf->rv32e__DOT__load_access_fault = 0U;
                    vlSelf->rv32e__DOT__mem_fault_addr = 0U;
                }
            } else {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 2U;
            }
            __Vdly__rv32e__DOT__mem_sram_rready = 1U;
        } else if ((3U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            __Vdly__rv32e__DOT__mem_ready = 0U;
            vlSelf->rv32e__DOT__mem_valid = 0U;
            if (((IData)(vlSelf->rv32e__DOT__mem_sram_awready) 
                 & (IData)(vlSelf->rv32e__DOT__mem_sram_awvalid))) {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 4U;
                __Vdly__rv32e__DOT__mem_sram_wvalid = 1U;
            } else {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 3U;
            }
        } else if ((4U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            __Vdly__rv32e__DOT__mem_ready = 0U;
            vlSelf->rv32e__DOT__mem_valid = 0U;
            if (((IData)(vlSelf->rv32e__DOT__mem_sram_wready) 
                 & (IData)(vlSelf->rv32e__DOT__mem_sram_wvalid))) {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 5U;
                __Vdly__rv32e__DOT__mem_sram_awvalid = 0U;
                __Vdly__rv32e__DOT__mem_sram_bready = 1U;
            } else {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 4U;
            }
        } else if ((5U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            __Vdly__rv32e__DOT__mem_ready = 0U;
            vlSelf->rv32e__DOT__mem_valid = 0U;
            if (((IData)(vlSelf->rv32e__DOT__mem_sram_bvalid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_sram_bready))) {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 6U;
                if ((0U != (IData)(vlSelf->rv32e__DOT__mem_sram_bresp))) {
                    vlSelf->rv32e__DOT__store_access_fault = 1U;
                    vlSelf->rv32e__DOT__mem_fault_addr 
                        = vlSelf->rv32e__DOT__mem_sram_awaddr;
                } else {
                    vlSelf->rv32e__DOT__store_access_fault = 0U;
                    vlSelf->rv32e__DOT__mem_fault_addr = 0U;
                }
            } else {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 5U;
            }
        } else if ((6U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            vlSelf->rv32e__DOT__mem_stage__DOT__next_state 
                = ((IData)(vlSelf->rv32e__DOT__wb_ready)
                    ? 0U : 6U);
            __Vdly__rv32e__DOT__mem_ready = 0U;
            vlSelf->rv32e__DOT__mem_valid = 1U;
            __Vdly__rv32e__DOT__mem_sram_wvalid = 0U;
            __Vdly__rv32e__DOT__mem_sram_rready = 0U;
            __Vdly__rv32e__DOT__mem_sram_arvalid = 0U;
            __Vdly__rv32e__DOT__mem_sram_bready = 0U;
            __Vdly__rv32e__DOT__mem_sram_awvalid = 0U;
        } else {
            vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 0U;
            __Vdly__rv32e__DOT__mem_ready = 0U;
            vlSelf->rv32e__DOT__mem_valid = 0U;
        }
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v0) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[4U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[5U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[6U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[7U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[8U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[9U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0xaU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0xbU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0xcU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0xdU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0xeU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0xfU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x10U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x11U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x12U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x13U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x14U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x15U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x16U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x17U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x18U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x19U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x1aU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x1bU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x1cU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x1dU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x1eU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v32) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[__Vdlyvdim0__rv32e__DOT__wb_stage__DOT__regs__v32] 
            = __Vdlyvval__rv32e__DOT__wb_stage__DOT__regs__v32;
    }
    vlSelf->rv32e__DOT__rs1_val = ((0U == (IData)(vlSelf->rv32e__DOT__rs1))
                                    ? 0U : vlSelf->rv32e__DOT__wb_stage__DOT__regs
                                   [vlSelf->rv32e__DOT__rs1]);
    vlSelf->rv32e__DOT__pc = __Vdly__rv32e__DOT__pc;
    vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src 
        = ((IData)(vlSelf->rv32e__DOT__is_jal) | ((IData)(vlSelf->rv32e__DOT__is_jalr) 
                                                  | (IData)(vlSelf->rv32e__DOT__take_branch)));
    vlSelf->rv32e__DOT__branch_target = ((IData)(vlSelf->rv32e__DOT__is_jalr)
                                          ? vlSelf->rv32e__DOT__jalr_target
                                          : vlSelf->rv32e__DOT__jal_target);
    vlSelf->rv32e__DOT__ifu_sram_rready = __Vdly__rv32e__DOT__ifu_sram_rready;
    vlSelf->rv32e__DOT__ifu_sram_araddr = __Vdly__rv32e__DOT__ifu_sram_araddr;
    vlSelf->rv32e__DOT__ifu_sram_arvalid = __Vdly__rv32e__DOT__ifu_sram_arvalid;
    vlSelf->rv32e__DOT__mem_ready = __Vdly__rv32e__DOT__mem_ready;
    vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr 
        = (vlSelf->rv32e__DOT__imm + vlSelf->rv32e__DOT__rs1_val);
    vlSelf->rv32e__DOT__rs2_val = ((0U == (IData)(vlSelf->rv32e__DOT__rs2))
                                    ? 0U : vlSelf->rv32e__DOT__wb_stage__DOT__regs
                                   [vlSelf->rv32e__DOT__rs2]);
    vlSelf->rv32e__DOT__mem_sram_wvalid = __Vdly__rv32e__DOT__mem_sram_wvalid;
    vlSelf->rv32e__DOT__mem_sram_bready = __Vdly__rv32e__DOT__mem_sram_bready;
    vlSelf->rv32e__DOT__mem_sram_awvalid = __Vdly__rv32e__DOT__mem_sram_awvalid;
    vlSelf->rv32e__DOT__mem_sram_awaddr = __Vdly__rv32e__DOT__mem_sram_awaddr;
    vlSelf->rv32e__DOT__mem_sram_rready = __Vdly__rv32e__DOT__mem_sram_rready;
    vlSelf->rv32e__DOT__mem_sram_arvalid = __Vdly__rv32e__DOT__mem_sram_arvalid;
    vlSelf->rv32e__DOT__mem_sram_araddr = __Vdly__rv32e__DOT__mem_sram_araddr;
    vlSelf->rv32e__DOT__id_stage__DOT__immI = (((- (IData)(
                                                           (vlSelf->rv32e__DOT__instr 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->rv32e__DOT__instr 
                                                  >> 0x14U));
    if (VL_UNLIKELY(vlSelf->rv32e__DOT__if_access_fault)) {
        VL_WRITEF("\033[31m[IF]:IF access fault at address: %x\033[0m\n",
                  32,vlSelf->rv32e__DOT__if_fault_addr);
    }
    if (VL_UNLIKELY(vlSelf->rv32e__DOT__load_access_fault)) {
        VL_WRITEF("\033[31m[MEM]:Load access fault at address: %x\033[0m\n",
                  32,vlSelf->rv32e__DOT__mem_fault_addr);
    }
    if (VL_UNLIKELY(vlSelf->rv32e__DOT__store_access_fault)) {
        VL_WRITEF("\033[31m[MEM]:Store access fault at address: %x\033[0m\n",
                  32,vlSelf->rv32e__DOT__mem_fault_addr);
    }
}

VL_INLINE_OPT void Vrv32e___024root___nba_comb__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->rv32e__DOT__sram_wdata = 0U;
    vlSelf->rv32e__DOT__sram_wstrb = 0U;
    vlSelf->rv32e__DOT__sram_wvalid = 0U;
    vlSelf->rv32e__DOT__uart_wdata = 0U;
    vlSelf->rv32e__DOT__uart_wstrb = 0U;
    vlSelf->rv32e__DOT__uart_wvalid = 0U;
    vlSelf->rv32e__DOT__mem_sram_wready = 0U;
    vlSelf->rv32e__DOT__sram_awaddr = 0U;
    vlSelf->rv32e__DOT__sram_awvalid = 0U;
    vlSelf->rv32e__DOT__uart_awaddr = 0U;
    vlSelf->rv32e__DOT__uart_awvalid = 0U;
    vlSelf->rv32e__DOT__mem_sram_awready = 0U;
    if ((3U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr 
            = vlSelf->rv32e__DOT__mem_sram_awaddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr))
                         ? 2U : 0U));
        if ((1U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__Vfuncout))) {
            vlSelf->rv32e__DOT__sram_wdata = vlSelf->rv32e__DOT__mem_sram_wdata;
            vlSelf->rv32e__DOT__sram_wstrb = vlSelf->rv32e__DOT__mem_sram_wstrb;
            vlSelf->rv32e__DOT__sram_wvalid = vlSelf->rv32e__DOT__mem_sram_wvalid;
            vlSelf->rv32e__DOT__mem_sram_wready = vlSelf->rv32e__DOT__sram_wready;
            vlSelf->rv32e__DOT__uart_wdata = 0U;
            vlSelf->rv32e__DOT__uart_wstrb = 0U;
            vlSelf->rv32e__DOT__uart_wvalid = 0U;
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr 
                = vlSelf->rv32e__DOT__mem_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr))
                             ? 2U : 0U));
            if ((2U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__Vfuncout))) {
                vlSelf->rv32e__DOT__uart_wdata = vlSelf->rv32e__DOT__mem_sram_wdata;
                vlSelf->rv32e__DOT__uart_wstrb = vlSelf->rv32e__DOT__mem_sram_wstrb;
                vlSelf->rv32e__DOT__uart_wvalid = vlSelf->rv32e__DOT__mem_sram_wvalid;
                vlSelf->rv32e__DOT__mem_sram_wready 
                    = vlSelf->rv32e__DOT__uart_wready;
                vlSelf->rv32e__DOT__sram_wdata = 0U;
                vlSelf->rv32e__DOT__sram_wstrb = 0U;
                vlSelf->rv32e__DOT__sram_wvalid = 0U;
            } else {
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr 
                    = vlSelf->rv32e__DOT__mem_sram_awaddr;
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__Vfuncout 
                    = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr) 
                        & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr))
                        ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr) 
                                 & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr))
                                 ? 2U : 0U));
                if ((0U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__Vfuncout))) {
                    vlSelf->rv32e__DOT__sram_wdata = 0U;
                    vlSelf->rv32e__DOT__sram_wstrb = 0U;
                    vlSelf->rv32e__DOT__sram_wvalid = 0U;
                    vlSelf->rv32e__DOT__uart_wdata = 0U;
                    vlSelf->rv32e__DOT__uart_wstrb = 0U;
                    vlSelf->rv32e__DOT__uart_wvalid = 0U;
                    vlSelf->rv32e__DOT__mem_sram_wready 
                        = vlSelf->rv32e__DOT__mem_sram_wvalid;
                } else {
                    vlSelf->rv32e__DOT__sram_wdata = 0U;
                    vlSelf->rv32e__DOT__sram_wstrb = 0U;
                    vlSelf->rv32e__DOT__sram_wvalid = 0U;
                    vlSelf->rv32e__DOT__uart_wdata = 0U;
                    vlSelf->rv32e__DOT__uart_wstrb = 0U;
                    vlSelf->rv32e__DOT__uart_wvalid = 0U;
                    vlSelf->rv32e__DOT__mem_sram_wready = 0U;
                }
            }
        }
    } else {
        vlSelf->rv32e__DOT__sram_wdata = 0U;
        vlSelf->rv32e__DOT__sram_wstrb = 0U;
        vlSelf->rv32e__DOT__sram_wvalid = 0U;
        vlSelf->rv32e__DOT__uart_wdata = 0U;
        vlSelf->rv32e__DOT__uart_wstrb = 0U;
        vlSelf->rv32e__DOT__uart_wvalid = 0U;
        vlSelf->rv32e__DOT__mem_sram_wready = 0U;
    }
    if ((3U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr 
            = vlSelf->rv32e__DOT__mem_sram_awaddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr))
                         ? 2U : 0U));
        if ((1U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__Vfuncout))) {
            vlSelf->rv32e__DOT__sram_awaddr = vlSelf->rv32e__DOT__mem_sram_awaddr;
            vlSelf->rv32e__DOT__sram_awvalid = vlSelf->rv32e__DOT__mem_sram_awvalid;
            vlSelf->rv32e__DOT__mem_sram_awready = vlSelf->rv32e__DOT__sram_awready;
            vlSelf->rv32e__DOT__uart_awaddr = 0U;
            vlSelf->rv32e__DOT__uart_awvalid = 0U;
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr 
                = vlSelf->rv32e__DOT__mem_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr))
                             ? 2U : 0U));
            if ((2U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__Vfuncout))) {
                vlSelf->rv32e__DOT__uart_awaddr = vlSelf->rv32e__DOT__mem_sram_awaddr;
                vlSelf->rv32e__DOT__uart_awvalid = vlSelf->rv32e__DOT__mem_sram_awvalid;
                vlSelf->rv32e__DOT__mem_sram_awready 
                    = vlSelf->rv32e__DOT__uart_awready;
                vlSelf->rv32e__DOT__sram_awaddr = 0U;
                vlSelf->rv32e__DOT__sram_awvalid = 0U;
            } else {
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr 
                    = vlSelf->rv32e__DOT__mem_sram_awaddr;
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__Vfuncout 
                    = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr) 
                        & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr))
                        ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr) 
                                 & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr))
                                 ? 2U : 0U));
                if (VL_UNLIKELY((0U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__Vfuncout)))) {
                    vlSelf->rv32e__DOT__sram_awaddr = 0U;
                    vlSelf->rv32e__DOT__sram_awvalid = 0U;
                    vlSelf->rv32e__DOT__uart_awaddr = 0U;
                    vlSelf->rv32e__DOT__uart_awvalid = 0U;
                    vlSelf->rv32e__DOT__mem_sram_awready = 1U;
                    VL_WRITEF("\033[31m[ARB][MEM][AW] \345\234\260\345\235\200\350\247\243\347\240\201\351\224\231\350\257\257\357\274\201\345\234\260\345\235\200: %x\033[0m\n",
                              32,vlSelf->rv32e__DOT__mem_sram_awaddr);
                } else {
                    vlSelf->rv32e__DOT__sram_awaddr = 0U;
                    vlSelf->rv32e__DOT__sram_awvalid = 0U;
                    vlSelf->rv32e__DOT__uart_awaddr = 0U;
                    vlSelf->rv32e__DOT__uart_awvalid = 0U;
                    vlSelf->rv32e__DOT__mem_sram_awready = 0U;
                }
            }
        }
    } else if ((4U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->rv32e__DOT__mem_sram_awready = vlSelf->rv32e__DOT__mem_sram_awvalid;
    } else {
        vlSelf->rv32e__DOT__sram_awaddr = 0U;
        vlSelf->rv32e__DOT__sram_awvalid = 0U;
        vlSelf->rv32e__DOT__uart_awaddr = 0U;
        vlSelf->rv32e__DOT__uart_awvalid = 0U;
        vlSelf->rv32e__DOT__mem_sram_awready = 0U;
    }
    vlSelf->rv32e__DOT__sram_bready = 0U;
    vlSelf->rv32e__DOT__uart_bready = 0U;
    vlSelf->rv32e__DOT__mem_sram_bresp = 0U;
    vlSelf->rv32e__DOT__mem_sram_bvalid = 0U;
    if ((3U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__51__addr 
            = vlSelf->rv32e__DOT__mem_sram_awaddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__51__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__51__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__51__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__51__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__51__addr))
                         ? 2U : 0U));
        if ((1U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__51__Vfuncout))) {
            vlSelf->rv32e__DOT__mem_sram_bresp = vlSelf->rv32e__DOT__sram_bresp;
            vlSelf->rv32e__DOT__mem_sram_bvalid = vlSelf->rv32e__DOT__sram_bvalid;
            vlSelf->rv32e__DOT__sram_bready = vlSelf->rv32e__DOT__mem_sram_bready;
            vlSelf->rv32e__DOT__uart_bready = 0U;
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__52__addr 
                = vlSelf->rv32e__DOT__mem_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__52__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__52__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__52__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__52__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__52__addr))
                             ? 2U : 0U));
            if ((2U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__52__Vfuncout))) {
                vlSelf->rv32e__DOT__mem_sram_bresp 
                    = vlSelf->rv32e__DOT__uart_bresp;
                vlSelf->rv32e__DOT__mem_sram_bvalid 
                    = vlSelf->rv32e__DOT__uart_bvalid;
                vlSelf->rv32e__DOT__uart_bready = vlSelf->rv32e__DOT__mem_sram_bready;
                vlSelf->rv32e__DOT__sram_bready = 0U;
            } else {
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__53__addr 
                    = vlSelf->rv32e__DOT__mem_sram_awaddr;
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__53__Vfuncout 
                    = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__53__addr) 
                        & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__53__addr))
                        ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__53__addr) 
                                 & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__53__addr))
                                 ? 2U : 0U));
                if ((0U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__53__Vfuncout))) {
                    vlSelf->rv32e__DOT__mem_sram_bresp = 3U;
                    vlSelf->rv32e__DOT__mem_sram_bvalid 
                        = vlSelf->rv32e__DOT__mem_sram_awvalid;
                    vlSelf->rv32e__DOT__sram_bready = 0U;
                    vlSelf->rv32e__DOT__uart_bready = 0U;
                } else {
                    vlSelf->rv32e__DOT__mem_sram_bresp = 0U;
                    vlSelf->rv32e__DOT__mem_sram_bvalid = 0U;
                    vlSelf->rv32e__DOT__sram_bready = 0U;
                    vlSelf->rv32e__DOT__uart_bready = 0U;
                }
            }
        }
    } else if ((4U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        if (vlSelf->rv32e__DOT__mem_sram_awvalid) {
            vlSelf->rv32e__DOT__mem_sram_bresp = 3U;
            vlSelf->rv32e__DOT__mem_sram_bvalid = 1U;
        }
        vlSelf->rv32e__DOT__sram_bready = 0U;
        vlSelf->rv32e__DOT__uart_bready = 0U;
    } else {
        vlSelf->rv32e__DOT__sram_bready = 0U;
        vlSelf->rv32e__DOT__uart_bready = 0U;
        vlSelf->rv32e__DOT__mem_sram_bresp = 0U;
        vlSelf->rv32e__DOT__mem_sram_bvalid = 0U;
    }
    vlSelf->rv32e__DOT__sram_araddr = 0U;
    vlSelf->rv32e__DOT__sram_arvalid = 0U;
    vlSelf->rv32e__DOT__uart_araddr = 0U;
    vlSelf->rv32e__DOT__uart_arvalid = 0U;
    vlSelf->rv32e__DOT__ifu_sram_arready = 0U;
    vlSelf->rv32e__DOT__mem_sram_arready = 0U;
    if ((1U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr 
            = vlSelf->rv32e__DOT__ifu_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr))
                         ? 2U : 0U));
        if ((1U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__Vfuncout))) {
            vlSelf->rv32e__DOT__sram_araddr = vlSelf->rv32e__DOT__ifu_sram_araddr;
            vlSelf->rv32e__DOT__sram_arvalid = vlSelf->rv32e__DOT__ifu_sram_arvalid;
            vlSelf->rv32e__DOT__ifu_sram_arready = vlSelf->rv32e__DOT__sram_arready;
            vlSelf->rv32e__DOT__mem_sram_arready = 0U;
            vlSelf->rv32e__DOT__uart_araddr = 0U;
            vlSelf->rv32e__DOT__uart_arvalid = 0U;
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr 
                = vlSelf->rv32e__DOT__ifu_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr))
                             ? 2U : 0U));
            if ((2U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__Vfuncout))) {
                vlSelf->rv32e__DOT__uart_araddr = vlSelf->rv32e__DOT__ifu_sram_araddr;
                vlSelf->rv32e__DOT__uart_arvalid = vlSelf->rv32e__DOT__ifu_sram_arvalid;
                vlSelf->rv32e__DOT__ifu_sram_arready 
                    = vlSelf->rv32e__DOT__uart_arready;
                vlSelf->rv32e__DOT__mem_sram_arready = 0U;
                vlSelf->rv32e__DOT__sram_araddr = 0U;
                vlSelf->rv32e__DOT__sram_arvalid = 0U;
            } else {
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr 
                    = vlSelf->rv32e__DOT__ifu_sram_araddr;
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__Vfuncout 
                    = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr) 
                        & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr))
                        ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr) 
                                 & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr))
                                 ? 2U : 0U));
                if (VL_UNLIKELY((0U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__Vfuncout)))) {
                    vlSelf->rv32e__DOT__sram_araddr = 0U;
                    vlSelf->rv32e__DOT__sram_arvalid = 0U;
                    vlSelf->rv32e__DOT__uart_araddr = 0U;
                    vlSelf->rv32e__DOT__uart_arvalid = 0U;
                    vlSelf->rv32e__DOT__ifu_sram_arready = 1U;
                    vlSelf->rv32e__DOT__mem_sram_arready = 0U;
                    VL_WRITEF("\033[31m[ARB][IFU][AR] \345\234\260\345\235\200\350\247\243\347\240\201\351\224\231\350\257\257\357\274\201\345\234\260\345\235\200: %x\033[0m\n",
                              32,vlSelf->rv32e__DOT__ifu_sram_araddr);
                } else {
                    vlSelf->rv32e__DOT__sram_araddr = 0U;
                    vlSelf->rv32e__DOT__sram_arvalid = 0U;
                    vlSelf->rv32e__DOT__uart_araddr = 0U;
                    vlSelf->rv32e__DOT__uart_arvalid = 0U;
                    vlSelf->rv32e__DOT__ifu_sram_arready = 0U;
                    vlSelf->rv32e__DOT__mem_sram_arready = 0U;
                }
            }
        }
    } else if ((2U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr 
            = vlSelf->rv32e__DOT__mem_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr))
                         ? 2U : 0U));
        if ((1U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__Vfuncout))) {
            vlSelf->rv32e__DOT__sram_araddr = vlSelf->rv32e__DOT__mem_sram_araddr;
            vlSelf->rv32e__DOT__sram_arvalid = vlSelf->rv32e__DOT__mem_sram_arvalid;
            vlSelf->rv32e__DOT__mem_sram_arready = vlSelf->rv32e__DOT__sram_arready;
            vlSelf->rv32e__DOT__ifu_sram_arready = 0U;
            vlSelf->rv32e__DOT__uart_araddr = 0U;
            vlSelf->rv32e__DOT__uart_arvalid = 0U;
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr 
                = vlSelf->rv32e__DOT__mem_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr))
                             ? 2U : 0U));
            if ((2U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__Vfuncout))) {
                vlSelf->rv32e__DOT__uart_araddr = vlSelf->rv32e__DOT__mem_sram_araddr;
                vlSelf->rv32e__DOT__uart_arvalid = vlSelf->rv32e__DOT__mem_sram_arvalid;
                vlSelf->rv32e__DOT__mem_sram_arready 
                    = vlSelf->rv32e__DOT__uart_arready;
                vlSelf->rv32e__DOT__ifu_sram_arready = 0U;
                vlSelf->rv32e__DOT__sram_araddr = 0U;
                vlSelf->rv32e__DOT__sram_arvalid = 0U;
            } else {
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr 
                    = vlSelf->rv32e__DOT__mem_sram_araddr;
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__Vfuncout 
                    = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr) 
                        & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr))
                        ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr) 
                                 & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr))
                                 ? 2U : 0U));
                if (VL_UNLIKELY((0U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__Vfuncout)))) {
                    VL_WRITEF("\033[31m[ARB][MEM][AR] \345\234\260\345\235\200\350\247\243\347\240\201\351\224\231\350\257\257\357\274\201\345\234\260\345\235\200: %x\033[0m\n",
                              32,vlSelf->rv32e__DOT__mem_sram_araddr);
                    vlSelf->rv32e__DOT__sram_araddr = 0U;
                    vlSelf->rv32e__DOT__sram_arvalid = 0U;
                    vlSelf->rv32e__DOT__uart_araddr = 0U;
                    vlSelf->rv32e__DOT__uart_arvalid = 0U;
                    vlSelf->rv32e__DOT__mem_sram_arready = 1U;
                    vlSelf->rv32e__DOT__ifu_sram_arready = 0U;
                } else {
                    vlSelf->rv32e__DOT__sram_araddr = 0U;
                    vlSelf->rv32e__DOT__sram_arvalid = 0U;
                    vlSelf->rv32e__DOT__uart_araddr = 0U;
                    vlSelf->rv32e__DOT__uart_arvalid = 0U;
                    vlSelf->rv32e__DOT__ifu_sram_arready = 0U;
                    vlSelf->rv32e__DOT__mem_sram_arready = 0U;
                }
            }
        }
    } else if ((4U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->rv32e__DOT__ifu_sram_arready = vlSelf->rv32e__DOT__ifu_sram_arvalid;
        vlSelf->rv32e__DOT__mem_sram_arready = vlSelf->rv32e__DOT__mem_sram_arvalid;
    } else {
        vlSelf->rv32e__DOT__sram_araddr = 0U;
        vlSelf->rv32e__DOT__sram_arvalid = 0U;
        vlSelf->rv32e__DOT__uart_araddr = 0U;
        vlSelf->rv32e__DOT__uart_arvalid = 0U;
        vlSelf->rv32e__DOT__ifu_sram_arready = 0U;
        vlSelf->rv32e__DOT__mem_sram_arready = 0U;
    }
    vlSelf->rv32e__DOT__sram_rready = 0U;
    vlSelf->rv32e__DOT__uart_rready = 0U;
    vlSelf->rv32e__DOT__ifu_sram_rdata = 0U;
    vlSelf->rv32e__DOT__ifu_sram_rvalid = 0U;
    vlSelf->rv32e__DOT__ifu_sram_rresp = 0U;
    vlSelf->rv32e__DOT__mem_sram_rdata = 0U;
    vlSelf->rv32e__DOT__mem_sram_rvalid = 0U;
    vlSelf->rv32e__DOT__mem_sram_rresp = 0U;
    if ((1U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr 
            = vlSelf->rv32e__DOT__ifu_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr))
                         ? 2U : 0U));
        if ((1U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__Vfuncout))) {
            vlSelf->rv32e__DOT__ifu_sram_rdata = vlSelf->rv32e__DOT__sram_rdata;
            vlSelf->rv32e__DOT__ifu_sram_rvalid = vlSelf->rv32e__DOT__sram_rvalid;
            vlSelf->rv32e__DOT__ifu_sram_rresp = vlSelf->rv32e__DOT__sram_rresp;
            vlSelf->rv32e__DOT__sram_rready = vlSelf->rv32e__DOT__ifu_sram_rready;
            vlSelf->rv32e__DOT__uart_rready = 0U;
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr 
                = vlSelf->rv32e__DOT__ifu_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr))
                             ? 2U : 0U));
            if ((2U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__Vfuncout))) {
                vlSelf->rv32e__DOT__ifu_sram_rdata 
                    = vlSelf->rv32e__DOT__uart_rdata;
                vlSelf->rv32e__DOT__ifu_sram_rvalid 
                    = vlSelf->rv32e__DOT__uart_rvalid;
                vlSelf->rv32e__DOT__ifu_sram_rresp 
                    = vlSelf->rv32e__DOT__uart_rresp;
                vlSelf->rv32e__DOT__uart_rready = vlSelf->rv32e__DOT__ifu_sram_rready;
                vlSelf->rv32e__DOT__sram_rready = 0U;
            } else {
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr 
                    = vlSelf->rv32e__DOT__ifu_sram_araddr;
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__Vfuncout 
                    = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr) 
                        & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr))
                        ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr) 
                                 & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr))
                                 ? 2U : 0U));
                if ((0U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__Vfuncout))) {
                    vlSelf->rv32e__DOT__ifu_sram_rdata = 0U;
                    vlSelf->rv32e__DOT__ifu_sram_rvalid 
                        = vlSelf->rv32e__DOT__ifu_sram_arvalid;
                    vlSelf->rv32e__DOT__ifu_sram_rresp = 3U;
                    vlSelf->rv32e__DOT__sram_rready = 0U;
                    vlSelf->rv32e__DOT__uart_rready = 0U;
                } else {
                    vlSelf->rv32e__DOT__ifu_sram_rdata = 0U;
                    vlSelf->rv32e__DOT__ifu_sram_rvalid = 0U;
                    vlSelf->rv32e__DOT__ifu_sram_rresp = 0U;
                    vlSelf->rv32e__DOT__sram_rready = 0U;
                    vlSelf->rv32e__DOT__uart_rready = 0U;
                }
            }
        }
    } else if ((2U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__45__addr 
            = vlSelf->rv32e__DOT__mem_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__45__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__45__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__45__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__45__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__45__addr))
                         ? 2U : 0U));
        if ((1U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__45__Vfuncout))) {
            vlSelf->rv32e__DOT__mem_sram_rdata = vlSelf->rv32e__DOT__sram_rdata;
            vlSelf->rv32e__DOT__mem_sram_rvalid = vlSelf->rv32e__DOT__sram_rvalid;
            vlSelf->rv32e__DOT__mem_sram_rresp = vlSelf->rv32e__DOT__sram_rresp;
            vlSelf->rv32e__DOT__sram_rready = vlSelf->rv32e__DOT__mem_sram_rready;
            vlSelf->rv32e__DOT__uart_rready = 0U;
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__46__addr 
                = vlSelf->rv32e__DOT__mem_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__46__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__46__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__46__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__46__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__46__addr))
                             ? 2U : 0U));
            if ((2U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__46__Vfuncout))) {
                vlSelf->rv32e__DOT__mem_sram_rdata 
                    = vlSelf->rv32e__DOT__uart_rdata;
                vlSelf->rv32e__DOT__mem_sram_rvalid 
                    = vlSelf->rv32e__DOT__uart_rvalid;
                vlSelf->rv32e__DOT__mem_sram_rresp 
                    = vlSelf->rv32e__DOT__uart_rresp;
                vlSelf->rv32e__DOT__uart_rready = vlSelf->rv32e__DOT__mem_sram_rready;
                vlSelf->rv32e__DOT__sram_rready = 0U;
            } else {
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__47__addr 
                    = vlSelf->rv32e__DOT__mem_sram_araddr;
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__47__Vfuncout 
                    = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__47__addr) 
                        & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__47__addr))
                        ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__47__addr) 
                                 & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__47__addr))
                                 ? 2U : 0U));
                if ((0U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__47__Vfuncout))) {
                    vlSelf->rv32e__DOT__mem_sram_rdata = 0U;
                    vlSelf->rv32e__DOT__mem_sram_rvalid 
                        = vlSelf->rv32e__DOT__mem_sram_arvalid;
                    vlSelf->rv32e__DOT__mem_sram_rresp = 3U;
                    vlSelf->rv32e__DOT__sram_rready = 0U;
                    vlSelf->rv32e__DOT__uart_rready = 0U;
                } else {
                    vlSelf->rv32e__DOT__mem_sram_rdata = 0U;
                    vlSelf->rv32e__DOT__mem_sram_rvalid = 0U;
                    vlSelf->rv32e__DOT__mem_sram_rresp = 0U;
                    vlSelf->rv32e__DOT__sram_rready = 0U;
                    vlSelf->rv32e__DOT__uart_rready = 0U;
                }
            }
        }
    } else if ((4U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        if (vlSelf->rv32e__DOT__ifu_sram_arvalid) {
            vlSelf->rv32e__DOT__ifu_sram_rdata = 0U;
            vlSelf->rv32e__DOT__ifu_sram_rvalid = 1U;
            vlSelf->rv32e__DOT__ifu_sram_rresp = 3U;
        } else if (vlSelf->rv32e__DOT__mem_sram_arvalid) {
            vlSelf->rv32e__DOT__mem_sram_rdata = 0U;
            vlSelf->rv32e__DOT__mem_sram_rvalid = 1U;
            vlSelf->rv32e__DOT__mem_sram_rresp = 3U;
        }
        vlSelf->rv32e__DOT__sram_rready = 0U;
        vlSelf->rv32e__DOT__uart_rready = 0U;
    } else {
        vlSelf->rv32e__DOT__sram_rready = 0U;
        vlSelf->rv32e__DOT__uart_rready = 0U;
        vlSelf->rv32e__DOT__ifu_sram_rdata = 0U;
        vlSelf->rv32e__DOT__ifu_sram_rvalid = 0U;
        vlSelf->rv32e__DOT__ifu_sram_rresp = 0U;
        vlSelf->rv32e__DOT__mem_sram_rdata = 0U;
        vlSelf->rv32e__DOT__mem_sram_rvalid = 0U;
        vlSelf->rv32e__DOT__mem_sram_rresp = 0U;
    }
    vlSelf->rv32e__DOT__sram__DOT__addr_valid = (((0x80000000U 
                                                   <= vlSelf->rv32e__DOT__sram_araddr) 
                                                  & (0x8fffffffU 
                                                     >= vlSelf->rv32e__DOT__sram_araddr)) 
                                                 | (((0x80000000U 
                                                      <= vlSelf->rv32e__DOT__sram_awaddr) 
                                                     & (0x8fffffffU 
                                                        >= vlSelf->rv32e__DOT__sram_awaddr)) 
                                                    | (((0xa0000000U 
                                                         <= vlSelf->rv32e__DOT__sram_araddr) 
                                                        & (0xa0000007U 
                                                           >= vlSelf->rv32e__DOT__sram_araddr)) 
                                                       | (((0xa0001000U 
                                                            <= vlSelf->rv32e__DOT__sram_awaddr) 
                                                           & (0xa0001003U 
                                                              >= vlSelf->rv32e__DOT__sram_awaddr)) 
                                                          | ((0xa0002000U 
                                                              <= vlSelf->rv32e__DOT__sram_awaddr) 
                                                             & (0xa0002007U 
                                                                >= vlSelf->rv32e__DOT__sram_awaddr))))));
    vlSelf->rv32e__DOT__uart__DOT__addr_valid = (((0xa0000000U 
                                                   <= vlSelf->rv32e__DOT__uart_araddr) 
                                                  & (0xa0000007U 
                                                     >= vlSelf->rv32e__DOT__uart_araddr)) 
                                                 | ((0xa0000000U 
                                                     <= vlSelf->rv32e__DOT__uart_awaddr) 
                                                    & (0xa0000007U 
                                                       >= vlSelf->rv32e__DOT__uart_awaddr)));
    if ((4U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
            = ((2U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))
                ? 0U : ((1U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))
                         ? 0U : (((((IData)(vlSelf->rv32e__DOT__ifu_sram_rvalid) 
                                    & (IData)(vlSelf->rv32e__DOT__ifu_sram_rready)) 
                                   | ((IData)(vlSelf->rv32e__DOT__mem_sram_rvalid) 
                                      & (IData)(vlSelf->rv32e__DOT__mem_sram_rready))) 
                                  | ((IData)(vlSelf->rv32e__DOT__mem_sram_bvalid) 
                                     & (IData)(vlSelf->rv32e__DOT__mem_sram_bready)))
                                  ? 0U : 4U)));
    } else if ((2U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
            = ((1U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))
                ? ((((IData)(vlSelf->rv32e__DOT__sram_bvalid) 
                     & (IData)(vlSelf->rv32e__DOT__sram_bready)) 
                    | ((IData)(vlSelf->rv32e__DOT__uart_bvalid) 
                       & (IData)(vlSelf->rv32e__DOT__uart_bready)))
                    ? 0U : 3U) : ((((IData)(vlSelf->rv32e__DOT__sram_rvalid) 
                                    & (IData)(vlSelf->rv32e__DOT__sram_rready)) 
                                   | ((IData)(vlSelf->rv32e__DOT__uart_rvalid) 
                                      & (IData)(vlSelf->rv32e__DOT__uart_rready)))
                                   ? 0U : 2U));
    } else if ((1U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
            = ((((IData)(vlSelf->rv32e__DOT__sram_rvalid) 
                 & (IData)(vlSelf->rv32e__DOT__sram_rready)) 
                | ((IData)(vlSelf->rv32e__DOT__uart_rvalid) 
                   & (IData)(vlSelf->rv32e__DOT__uart_rready)))
                ? 0U : 1U);
    } else if (vlSelf->rv32e__DOT__mem_sram_awvalid) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__2__addr 
            = vlSelf->rv32e__DOT__mem_sram_awaddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__2__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__2__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__2__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__2__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__2__addr))
                         ? 2U : 0U));
        if ((1U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__2__Vfuncout))) {
            vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 3U;
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__addr 
                = vlSelf->rv32e__DOT__mem_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__addr))
                             ? 2U : 0U));
            vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
                = ((2U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__Vfuncout))
                    ? 3U : 4U);
        }
    } else if (vlSelf->rv32e__DOT__mem_sram_arvalid) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__6__addr 
            = vlSelf->rv32e__DOT__mem_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__6__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__6__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__6__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__6__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__6__addr))
                         ? 2U : 0U));
        if ((1U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__6__Vfuncout))) {
            vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 2U;
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__7__addr 
                = vlSelf->rv32e__DOT__mem_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__7__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__7__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__7__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__7__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__7__addr))
                             ? 2U : 0U));
            vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
                = ((2U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__7__Vfuncout))
                    ? 2U : 4U);
        }
    } else if (vlSelf->rv32e__DOT__ifu_sram_arvalid) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr 
            = vlSelf->rv32e__DOT__ifu_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr))
                         ? 2U : 0U));
        if ((1U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__Vfuncout))) {
            vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 1U;
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr 
                = vlSelf->rv32e__DOT__ifu_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr))
                             ? 2U : 0U));
            vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
                = ((2U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__Vfuncout))
                    ? 1U : 4U);
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
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vrv32e___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
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
                    VL_FATAL_MT("/home/furina/ysyx-workbench/npc/mul-vsrc/rv32e.v", 27, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/furina/ysyx-workbench/npc/mul-vsrc/rv32e.v", 27, "", "NBA region did not converge.");
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
