// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25010030_npc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25010030_npc___024root.h"

extern const VlUnpacked<CData/*1:0*/, 512> Vysyx_25010030_npc__ConstPool__TABLE_h03de9fe6_0;

VL_INLINE_OPT void Vysyx_25010030_npc___024root___ico_sequent__TOP__0(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___ico_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->ysyx_25010030_npc__DOT__io_master_awburst = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_awlen = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_awid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_wlast = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_wdata = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_awsize = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arlen = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arsize = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arburst = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_arid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_arsize = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_wvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_rready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_awvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_bready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_araddr = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
                if ((0x200U == (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr 
                                >> 0x10U))) {
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arid = 1U;
                    if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__in_sdram) {
                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arlen = 3U;
                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arburst = 1U;
                    } else {
                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arlen = 0U;
                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arburst = 0U;
                    }
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arsize 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arsize;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready;
                }
            }
        }
        if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
                 | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready))) {
                vlSelf->ysyx_25010030_npc__DOT__io_master_arid = 1U;
                vlSelf->ysyx_25010030_npc__DOT__io_master_arsize = 2U;
                if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram) {
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 3U;
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 1U;
                } else {
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 0U;
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 0U;
                }
            } else {
                vlSelf->ysyx_25010030_npc__DOT__io_master_arid = 0U;
                vlSelf->ysyx_25010030_npc__DOT__io_master_arsize = 0U;
                vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 0U;
                vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 0U;
            }
            vlSelf->ysyx_25010030_npc__DOT__io_master_rready 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_rready;
        } else if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((0x200U != (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr 
                            >> 0x10U))) {
                vlSelf->ysyx_25010030_npc__DOT__io_master_arid = 1U;
                vlSelf->ysyx_25010030_npc__DOT__io_master_arsize 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arsize;
                if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__in_sdram) {
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 3U;
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 1U;
                } else {
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 0U;
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 0U;
                }
                vlSelf->ysyx_25010030_npc__DOT__io_master_rready 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready;
            }
        }
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__next_clint_state 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__clint_state)
            ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__clint_state) 
               & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready)))
            : (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid));
    if (((~ (IData)(vlSelf->reset)) & (2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master)))) {
        vlSelf->ysyx_25010030_npc__DOT__io_master_awburst = 0U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_awlen = 0U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_awid = 1U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_wlast 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast;
        vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wstrb;
        vlSelf->ysyx_25010030_npc__DOT__io_master_wdata 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wdata;
        vlSelf->ysyx_25010030_npc__DOT__io_master_awsize 
            = (((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                | ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                   | ((4U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                      | (8U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)))))
                ? 0U : (((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                         | (0xcU == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)))
                         ? 1U : 2U));
        vlSelf->ysyx_25010030_npc__DOT__io_master_wvalid 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid;
        vlSelf->ysyx_25010030_npc__DOT__io_master_awvalid 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid;
        vlSelf->ysyx_25010030_npc__DOT__io_master_bready = 1U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awaddr;
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_arvalid;
            vlSelf->ysyx_25010030_npc__DOT__io_master_araddr 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_araddr;
        } else if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((0x200U != (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr 
                            >> 0x10U))) {
                vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid;
                vlSelf->ysyx_25010030_npc__DOT__io_master_araddr 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr;
            }
        }
    }
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr 
        = ((0xa0000000U == vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr) 
           | (0xa0000000U == vlSelf->ysyx_25010030_npc__DOT__io_master_araddr));
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr 
        = (((0x80000000U <= vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr) 
            & (0x8fffffffU >= vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr)) 
           | ((0x80000000U <= vlSelf->ysyx_25010030_npc__DOT__io_master_araddr) 
              & (0x8fffffffU >= vlSelf->ysyx_25010030_npc__DOT__io_master_araddr)));
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wvalid 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wvalid));
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awvalid 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_awvalid));
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bready 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_bready));
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arvalid 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid));
    if (vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) {
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wvalid 
            = vlSelf->ysyx_25010030_npc__DOT__io_master_wvalid;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bresp = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_wready = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_awready = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awvalid 
            = vlSelf->ysyx_25010030_npc__DOT__io_master_awvalid;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bready 
            = vlSelf->ysyx_25010030_npc__DOT__io_master_bready;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arvalid 
            = vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rresp 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rresp;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rdata 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rdata;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rid 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rid;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rlast 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rlast;
    } else {
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wvalid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bresp = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_wready = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_awready = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awvalid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bready = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arvalid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rresp 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rresp;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rdata 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rdata;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rid 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rid;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rlast 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rlast;
    }
    vlSelf->ysyx_25010030_npc__DOT__io_master_bvalid 
        = (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
            & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid)) 
           | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid)));
    vlSelf->ysyx_25010030_npc__DOT__io_master_arready 
        = (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
            & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arready)) 
           | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arready)));
    vlSelf->ysyx_25010030_npc__DOT__io_master_rvalid 
        = (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
            & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid)) 
           | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid)));
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state)
            ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state) 
               & (~ ((((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req) 
                       & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rlast)) 
                      & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid)) 
                     | (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req) 
                         & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid)) 
                        & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bready)))))
            : ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arvalid) 
               | (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awvalid)));
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state)
            ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state) 
               & (~ ((((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req) 
                       & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rlast)) 
                      & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid)) 
                     | (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req) 
                         & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bready)) 
                        & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid)))))
            : ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arvalid) 
               | (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awvalid)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rresp = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rresp = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rdata = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rdata = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bvalid = 0U;
    if (((~ (IData)(vlSelf->reset)) & (2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master)))) {
        if (vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bresp 
                = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bresp;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bid 
                = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bid;
        } else {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bresp 
                = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bresp;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bid 
                = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bid;
        }
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_wready 
            = (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
                & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready)) 
               | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
                  & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready)));
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_awready 
            = (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
                & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awready)) 
               | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
                  & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awready)));
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bvalid 
            = vlSelf->ysyx_25010030_npc__DOT__io_master_bvalid;
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_arready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_arready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rlast = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__next_master 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master;
    if ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid) 
             | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__next_master = 2U;
        } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_arvalid) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__next_master = 1U;
        }
    } else if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        if (((((IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rvalid) 
               & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rready)) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rlast)) 
             | ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rvalid) 
                & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready)))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__next_master = 0U;
        }
    } else if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        if ((((((IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rvalid) 
                & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rready)) 
               & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rlast)) 
              | ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rvalid) 
                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready))) 
             | ((IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_bvalid) 
                & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_bready)))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__next_master = 0U;
        }
    } else {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__next_master = 0U;
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rresp 
                = vlSelf->ysyx_25010030_npc__DOT__io_master_rresp;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rdata 
                = vlSelf->ysyx_25010030_npc__DOT__io_master_rdata;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rid 
                = vlSelf->ysyx_25010030_npc__DOT__io_master_rid;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_arready 
                = vlSelf->ysyx_25010030_npc__DOT__io_master_arready;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rlast 
                = vlSelf->ysyx_25010030_npc__DOT__io_master_rlast;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid 
                = vlSelf->ysyx_25010030_npc__DOT__io_master_rvalid;
        }
        if ((1U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
                if ((0x200U == (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr 
                                >> 0x10U))) {
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rresp = 0U;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rdata 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rdata;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rid 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rid;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_arready 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arready;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rlast;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rvalid;
                } else {
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rresp 
                        = vlSelf->ysyx_25010030_npc__DOT__io_master_rresp;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rdata 
                        = vlSelf->ysyx_25010030_npc__DOT__io_master_rdata;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rid 
                        = vlSelf->ysyx_25010030_npc__DOT__io_master_rid;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_arready 
                        = vlSelf->ysyx_25010030_npc__DOT__io_master_arready;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast 
                        = vlSelf->ysyx_25010030_npc__DOT__io_master_rlast;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid 
                        = vlSelf->ysyx_25010030_npc__DOT__io_master_rvalid;
                }
            }
        }
    }
    __Vtableidx1 = ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__hit)
                       ? 0U : 1U) << 7U) | (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_arready) 
                                             << 6U) 
                                            | (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
                                                << 5U) 
                                               | (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rlast) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid) 
                                                         << 2U) 
                                                        | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state)))))));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__next_state 
        = Vysyx_25010030_npc__ConstPool__TABLE_h03de9fe6_0
        [__Vtableidx1];
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__next_state 
        = ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state))
            ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid)
                ? (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19ed6__0) 
                    & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite))
                    ? 1U : 2U) : 0U) : ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state))
                                         ? ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid) 
                                              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready)) 
                                             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast))
                                             ? 0U : 2U)
                                         : ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state))
                                             ? ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__aw_done) 
                                                  & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__w_done)) 
                                                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__b_done))
                                                 ? 0U
                                                 : 1U)
                                             : 0U)));
}

void Vysyx_25010030_npc___024root___eval_ico(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_25010030_npc___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_25010030_npc___024root___eval_act(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval_act\n"); );
}

void Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__cpu__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_25010030_npc__ConstPool__TABLE_hd876204c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_25010030_npc__ConstPool__TABLE_h72501999_0;

VL_INLINE_OPT void Vysyx_25010030_npc___024root___nba_sequent__TOP__0(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    QData/*63:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtime;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtime = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v0;
    __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v4;
    __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v4 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v4;
    __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0;
    __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0 = 0;
    IData/*25:0*/ __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0;
    __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0;
    __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0 = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__id_valid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__id_valid = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid = 0;
    CData/*3:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req = 0;
    CData/*3:0*/ __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__read_id;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__read_id = 0;
    CData/*3:0*/ __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__write_id;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__write_id = 0;
    // Body
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtime 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtime;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__id_valid 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid;
    vlSelf->__Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data__v0 = 0U;
    __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v4 = 0U;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt;
    __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0 = 0U;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid;
    vlSelf->__Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v1 = 0U;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__write_id 
        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__write_id;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__read_id 
        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__read_id;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready 
        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req 
        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req 
        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state 
        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid 
        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid 
        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid;
    if ((0x100073U == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
        Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__cpu__DOT__ebreak_TOP(1U, vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst);
    }
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid;
    __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v0 = 0U;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid;
    if (((0x100fU == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst) 
         | (IData)(vlSelf->reset))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__idx = 4U;
        __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v0 = 1U;
    }
    __Vtableidx2 = (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid) 
                     << 6U) | (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__op_complete) 
                                << 5U) | (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite) 
                                           << 4U) | 
                                          (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                                            << 3U) 
                                           | (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->reset)))))));
    if (Vysyx_25010030_npc__ConstPool__TABLE_hd876204c_0
        [__Vtableidx2]) {
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid 
            = Vysyx_25010030_npc__ConstPool__TABLE_h72501999_0
            [__Vtableidx2];
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state)));
    if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state))) {
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid) 
             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__in_sdram))) {
            VL_ASSIGNSEL_WI(128,32,(0x7fU & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt) 
                                             << 5U)), vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__block_data, vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rdata);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((2U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state)))) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__b = 4U;
                __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v4 = 1U;
                __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v4 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_index;
                __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_tag;
                __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0 = 1U;
                __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_index;
            }
            if ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))) {
                if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid) {
                    vlSelf->__Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data__v0 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rdata;
                    vlSelf->__Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data__v0 = 1U;
                    vlSelf->__Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data__v0 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__beat_cnt;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__beat_cnt 
                        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram)
                            ? (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__beat_cnt)))
                            : 0U);
                }
            } else {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__beat_cnt = 0U;
            }
        } else if ((1U & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state)))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__beat_cnt = 0U;
        }
        if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__clint_state) {
            if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__clint_state) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rlast = 1U;
                if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready) {
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rdata 
                        = ((0U == (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr 
                                   - (IData)(0x2000000U)))
                            ? (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtime)
                            : ((4U == (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr 
                                       - (IData)(0x2000000U)))
                                ? (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtime 
                                           >> 0x20U))
                                : 0U));
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rvalid = 1U;
                }
            }
        } else {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arready = 1U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rvalid = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rlast = 0U;
            if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arready = 0U;
            }
        }
    }
    if (vlSelf->reset) {
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtime = 0ULL;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__id_valid = 0U;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid = 0U;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready = 1U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_flush_condition = 1U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_rdata = 0U;
    } else {
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtime 
            = (1ULL + vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtime);
        if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready)) 
             & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready) 
                | (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid))))) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__id_valid = 1U;
        } else if (((~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
                        & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready))) 
                    & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready))) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__id_valid = 0U;
        }
        if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready)) 
             & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready) 
                | (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid))))) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid = 1U;
        } else if (((~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid) 
                        & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready))) 
                    & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready))) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid = 0U;
        }
        if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
             & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite)))) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready = 0U;
        } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready = 1U;
        }
        if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_flush_condition = 0U;
        } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_flush_condition = 1U;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid) 
             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_rdata 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1;
        }
    }
    if (vlSelf->reset) {
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arready = 1U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rdata = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rresp = 0U;
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rlast = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awready = 1U;
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bresp = 0U;
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bid = 0U;
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req = 0U;
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__read_addr = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__write_addr = 0U;
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__read_id = 0U;
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__write_id = 0U;
    } else {
        if (vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state) {
            if (vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state) {
                if (vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req) {
                    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid = 1U;
                    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rresp = 0U;
                    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rlast = 1U;
                    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rid 
                        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__read_id;
                    if (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid) 
                         & ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
                            & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rready)))) {
                        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid = 0U;
                        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rlast = 0U;
                    }
                } else if (vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req) {
                    if (VL_UNLIKELY(((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wvalid) 
                                     & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready)))) {
                        VL_WRITEF("%c",8,(0xffU & vlSelf->ysyx_25010030_npc__DOT__io_master_wdata));
                        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready = 0U;
                        Verilated::runFlushCallbacks();
                        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid = 1U;
                        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bresp = 0U;
                        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bid 
                            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__write_id;
                    }
                    if (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid) 
                         & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bready))) {
                        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awready = 0U;
                        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid = 0U;
                    }
                }
            }
        } else {
            __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid = 0U;
            __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid = 0U;
            vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rlast = 0U;
            __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req = 0U;
            __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req = 0U;
            __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready = 0U;
            if (vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arvalid) {
                vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__read_addr 
                    = vlSelf->ysyx_25010030_npc__DOT__io_master_araddr;
                __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__read_id 
                    = vlSelf->ysyx_25010030_npc__DOT__io_master_arid;
                vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arready = 1U;
                __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req = 1U;
            } else if (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awvalid) 
                        & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wvalid))) {
                vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__write_addr 
                    = vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr;
                __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__write_id 
                    = vlSelf->ysyx_25010030_npc__DOT__io_master_awid;
                vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awready = 1U;
                __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready = 1U;
                __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req = 1U;
            }
        }
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__next_state;
    }
    if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state))) {
        if ((1U & ((~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid)) 
                   & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__aw_done))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awaddr 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__addr_reg;
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid = 1U;
        } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_awready) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid)) 
                   & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__w_done))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wdata 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wdata;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wstrb 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb;
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid = 1U;
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast = 1U;
        } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_wready) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid = 0U;
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast = 0U;
        }
    }
    if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
          & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
         & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
            | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite)))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__cache_addr 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result;
    }
    if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__op_complete) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_RegWrite 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_en;
    } else if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
                & (~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                      | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite))))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_RegWrite 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite;
    }
    if (vlSelf->reset) {
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_araddr = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_mret = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_load = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_forward_las = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mtvec = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mstatus = 0x1800U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__15__KET____DOT__reg_inst__dout = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__14__KET____DOT__reg_inst__dout = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__13__KET____DOT__reg_inst__dout = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__12__KET____DOT__reg_inst__dout = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__11__KET____DOT__reg_inst__dout = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__10__KET____DOT__reg_inst__dout = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__9__KET____DOT__reg_inst__dout = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__8__KET____DOT__reg_inst__dout = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__7__KET____DOT__reg_inst__dout = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__6__KET____DOT__reg_inst__dout = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__5__KET____DOT__reg_inst__dout = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__4__KET____DOT__reg_inst__dout = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__3__KET____DOT__reg_inst__dout = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__2__KET____DOT__reg_inst__dout = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__1__KET____DOT__reg_inst__dout = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__0__KET____DOT__reg_inst__dout = 0U;
    } else {
        if (((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state)) 
             & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid)))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_araddr 
                = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram)
                    ? (0xfffffff0U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc)
                    : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc);
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid = 1U;
        } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_arready) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid = 0U;
        }
        if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state))) {
            if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid) 
                  & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready)) 
                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast))) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata 
                    = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__in_sdram)
                        ? (((0U == (0x1fU & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_word_offset) 
                                             << 5U)))
                             ? 0U : (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__block_data[
                                     (((IData)(0x1fU) 
                                       + (0x7fU & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_word_offset) 
                                                   << 5U))) 
                                      >> 5U)] << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_word_offset) 
                                                      << 5U))))) 
                           | (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__block_data[
                              (3U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_word_offset))] 
                              >> (0x1fU & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_word_offset) 
                                           << 5U))))
                        : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rdata);
            }
        }
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__next_master;
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid) 
             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_mret 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_mret;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr 
                = (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wen1) 
                    | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_ecall)) 
                   | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_mret));
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_forward_las 
                = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemWrite) 
                   & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                      & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite) 
                         & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
                            & ((0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd)) 
                               & (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd) 
                                   != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1)) 
                                  & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he5bf04e5__0)))))));
        }
        if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
             & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite)))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_load 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen;
        } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_load = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen;
        } else if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
                     & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
                    & (~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                          | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_load = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hcf6a53ee__0) 
             & (0x305U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_addr1)))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mtvec 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data1;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hcf6a53ee__0) 
             & (0x300U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_addr1)))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mstatus 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data1;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
             & ((0xfU == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__15__KET____DOT__reg_inst__dout 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
             & ((0xeU == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__14__KET____DOT__reg_inst__dout 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
             & ((0xdU == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__13__KET____DOT__reg_inst__dout 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
             & ((0xcU == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__12__KET____DOT__reg_inst__dout 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
             & ((0xbU == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__11__KET____DOT__reg_inst__dout 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
             & ((0xaU == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__10__KET____DOT__reg_inst__dout 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
             & ((9U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__9__KET____DOT__reg_inst__dout 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
             & ((8U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__8__KET____DOT__reg_inst__dout 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
             & ((7U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__7__KET____DOT__reg_inst__dout 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
             & ((6U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__6__KET____DOT__reg_inst__dout 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
             & ((5U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__5__KET____DOT__reg_inst__dout 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
             & ((4U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__4__KET____DOT__reg_inst__dout 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
             & ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__3__KET____DOT__reg_inst__dout 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
             & ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__2__KET____DOT__reg_inst__dout 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
             & ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__1__KET____DOT__reg_inst__dout 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
             & ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__0__KET____DOT__reg_inst__dout 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data;
        }
    }
    if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__op_complete) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rd_data;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr;
    } else if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
                & (~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                      | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite))))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rd_data;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd;
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mepc = 0U;
    } else if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid) 
                & (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wen1) 
                    & (0x341U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_addr1))) 
                   | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_ecall)))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mepc 
            = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_ecall)
                ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data2
                : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data1);
    }
    if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__op_complete) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data1 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data1;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_addr1 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_addr1;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wen1 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wen1;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_ecall 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_ecall;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data2 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data2;
    } else if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
                & (~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                      | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite))))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data1 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data1;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_addr1 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_addr1;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wen1 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wen1;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_ecall 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_ecall;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data2 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data2;
    }
    if (__Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram[__Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0] 
            = __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0;
    }
    if (__Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v0) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[0U] = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[1U] = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[2U] = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[3U] = 0U;
    }
    if (__Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v4) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[__Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v4] = 1U;
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtime 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtime;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__read_id 
        = __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__read_id;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__write_id 
        = __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__write_id;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready 
        = __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state 
        = __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req 
        = __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req 
        = __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid 
        = __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid 
        = __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__clint_state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__next_clint_state));
    if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
         | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_rready 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_arvalid 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_araddr 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_araddr;
    } else {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_rready = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_arvalid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_araddr = 0U;
    }
    if (((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state)) 
         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_word_offset 
            = (3U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result 
                     >> 2U));
    }
    if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state))) {
        if ((1U & ((~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__ar_done)) 
                   & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr 
                = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__in_sdram)
                    ? (0xfffffff0U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__addr_reg)
                    : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__addr_reg);
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid = 1U;
        } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_arready) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__ar_done = 1U;
        }
    } else {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__ar_done = 0U;
    }
    if (((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state)) 
         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__addr_reg 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb 
            = (0xfU & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen) 
                       << (3U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result)));
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wdata 
            = ((0x11U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen))
                ? ((0x1fU >= (0x18U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result 
                                       << 3U))) ? (
                                                   (0xffU 
                                                    & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2) 
                                                   << 
                                                   (0x18U 
                                                    & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result 
                                                       << 3U)))
                    : 0U) : ((3U == (0xfU & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen)))
                              ? ((0U == (3U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result))
                                  ? (0xffffU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2)
                                  : ((2U == (3U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result))
                                      ? (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2 
                                         << 0x10U) : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2))
                              : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2));
    }
    vlSelf->ysyx_25010030_npc__DOT__io_master_awburst = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_awlen = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_bready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1 
        = ((0x1fU >= (0x18U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__cache_addr 
                               << 3U))) ? (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata 
                                           >> (0x18U 
                                               & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__cache_addr 
                                                  << 3U)))
            : 0U);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__half_data 
        = (0xffffU & ((0U == (3U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__cache_addr))
                       ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata
                       : ((2U == (3U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__cache_addr))
                           ? (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata 
                              >> 0x10U) : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0xfU] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__15__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0xeU] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__14__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0xdU] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__13__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0xcU] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__12__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0xbU] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__11__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0xaU] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__10__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[9U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__9__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[8U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__8__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[7U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__7__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[6U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__6__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[5U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__5__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[4U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__4__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[3U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__3__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[2U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__2__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[1U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__1__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__0__KET____DOT__reg_inst__dout;
    if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_zimm 
            = (0x1fU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                        >> 0xfU));
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3 
            = (7U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                     >> 0xcU));
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr2 = 0U;
        if ((0x40U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
            if ((0x20U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                if ((0x10U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                    if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                      >> 2U)))) {
                            if ((0x73U == (0x7fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst))) {
                                if ((0x4000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                    if ((0x2000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op 
                                            = ((0x1000U 
                                                & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                                ? 3U
                                                : 2U);
                                    } else if ((0x1000U 
                                                & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op = 1U;
                                    }
                                } else if ((0x2000U 
                                            & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op 
                                        = ((0x1000U 
                                            & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                            ? 3U : 2U);
                                } else if ((0x1000U 
                                            & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op = 1U;
                                }
                                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr2 
                                    = ((0x30200073U 
                                        == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                        ? 0x341U : 0U);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__2__addr 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr2;
    vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__2__Vfuncout 
        = ((0x300U == (IData)(vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__2__addr))
            ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mstatus
            : ((0x305U == (IData)(vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__2__addr))
                ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mtvec
                : ((0x341U == (IData)(vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__2__addr))
                    ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mepc
                    : ((0x342U == (IData)(vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__2__addr))
                        ? 0xbU : 0U))));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num2 
        = vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__2__Vfuncout;
    if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr1 = 0U;
        if ((0x40U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
            if ((0x20U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                if ((0x10U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                    if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                      >> 2U)))) {
                            if ((0x73U == (0x7fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst))) {
                                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr1 
                                    = ((0x30200073U 
                                        == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                        ? 0x300U : 
                                       ((0x73U == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                         ? 0x305U : 
                                        (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                         >> 0x14U)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__1__addr 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr1;
    vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__1__Vfuncout 
        = ((0x300U == (IData)(vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__1__addr))
            ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mstatus
            : ((0x305U == (IData)(vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__1__addr))
                ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mtvec
                : ((0x341U == (IData)(vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__1__addr))
                    ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mepc
                    : ((0x342U == (IData)(vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__1__addr))
                        ? 0xbU : 0U))));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1 
        = vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__1__Vfuncout;
    vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__in_sdram 
        = ((0xa0000000U <= vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__addr_reg) 
           & (0xbfffffffU >= vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__addr_reg));
    vlSelf->ysyx_25010030_npc__DOT__io_master_awsize = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h384f4e33__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_RegWrite) 
           & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__op_complete = 0U;
    if ((1U & (~ (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
                   & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
                  & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                     | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite)))))) {
        if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__valid) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__op_complete = 1U;
        }
    }
    if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_shamt 
            = (0x3fU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                        >> 0x14U));
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jal = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jalr = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode 
            = (0x7fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst);
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2 
            = (0xfU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                       >> 0x14U));
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_mret = 0U;
        if ((0x40U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
            if ((0x20U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                      >> 2U)))) {
                            if ((0x4000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op 
                                    = ((0x2000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                        ? 6U : 7U);
                            } else if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                 >> 0xdU)))) {
                                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op = 1U;
                            }
                        }
                        if ((4U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                            if ((0U == (7U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                              >> 0xcU)))) {
                                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jalr = 1U;
                            }
                        }
                    }
                    if ((8U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                        if ((4U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jal = 1U;
                        }
                    }
                }
                if ((0x10U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                    if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                      >> 2U)))) {
                            if ((0x73U == (0x7fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst))) {
                                if ((0x4000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                    if ((0x2000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm 
                                            = ((0x1000U 
                                                & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                                ? (0x1fU 
                                                   & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                      >> 0xfU))
                                                : (0x1fU 
                                                   & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                      >> 0xfU)));
                                    } else if ((0x1000U 
                                                & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm 
                                            = (0x1fU 
                                               & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                  >> 0xfU));
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                  >> 0xcU)))) {
                                        if ((0x73U 
                                             == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm = 0U;
                                        } else if (
                                                   (0x30200073U 
                                                    == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm = 0U;
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                              >> 0xeU)))) {
                                    if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                    >> 0xcU)))) {
                                            if ((0x73U 
                                                 != vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                                if (
                                                    (0x30200073U 
                                                     == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_mret = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                    if ((4U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm 
                            = (((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                      >> 0x14U)))));
                    }
                } else if ((4U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                    if ((0U == (7U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                      >> 0xcU)))) {
                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm 
                            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__idu__DOT__immI;
                    }
                } else {
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm 
                        = (((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0x800U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                 >> 7U)))));
                }
            }
        } else if ((0x20U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
            if ((0x10U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                  >> 2U)))) {
                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op 
                            = ((0x4000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                ? ((0x2000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                    ? ((0x1000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                        ? 2U : 3U) : 
                                   ((0x1000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                     ? ((0x40000000U 
                                         & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                         ? 8U : 9U)
                                     : 4U)) : ((0x2000U 
                                                & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                                    ? 6U
                                                    : 7U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                                    ? 5U
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                                     ? 1U
                                                     : 0U))));
                    }
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm 
                        = ((4U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                            ? (0xfffff000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                            : 0U);
                }
            } else if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                              >> 2U)))) {
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm 
                        = (((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                            >> 7U))));
                }
            }
        } else if ((0x10U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
            if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                          >> 3U)))) {
                if ((4U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op = 0U;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm 
                        = (0xfffff000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst);
                } else {
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op 
                        = ((0x4000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                            ? ((0x2000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                ? ((0x1000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                    ? 2U : 3U) : ((0x1000U 
                                                   & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                                    ? 8U
                                                    : 9U)
                                                   : 4U))
                            : ((0x2000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                ? ((0x1000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                    ? 6U : 7U) : ((0x1000U 
                                                   & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                                   ? 5U
                                                   : 0U)));
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__idu__DOT__immI;
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                          >> 2U)))) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op = 0U;
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__idu__DOT__immI;
            }
        }
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1 
            = (0xfU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                       >> 0xfU));
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_tag = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_en = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2 = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen = 0U;
    } else {
        if ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_tag 
                = (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                   >> 6U);
        }
        if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
             & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite)))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_en 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite;
        } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_en 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite;
        } else if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
                     & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
                    & (~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                          | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_en 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid) 
             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src2;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__process_result;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemLen;
        }
    }
    if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemLen = 0x1fU;
        if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                      >> 6U)))) {
            if ((0x20U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                      >> 2U)))) {
                            if ((2U == (7U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                              >> 0xcU)))) {
                                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemLen = 0x1fU;
                            } else if ((1U == (7U & 
                                               (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                >> 0xcU)))) {
                                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemLen = 0x13U;
                            } else if ((0U == (7U & 
                                               (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                >> 0xcU)))) {
                                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemLen = 0x11U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                 >> 4U)))) {
                if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                  >> 2U)))) {
                        if ((0x4000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                            if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                          >> 0xdU)))) {
                                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemLen 
                                    = ((0x1000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                        ? 3U : 1U);
                            }
                        } else if ((0x2000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                            if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                          >> 0xcU)))) {
                                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemLen = 0x1fU;
                            }
                        } else {
                            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemLen 
                                = ((0x1000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                    ? 0x13U : 0x11U);
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite = 0U;
    } else if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid) 
                & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite;
    }
    if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite = 0U;
        if ((0x40U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
            if ((0x20U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                if ((0x10U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                    if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                      >> 2U)))) {
                            if ((0x73U == (0x7fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst))) {
                                if ((0x4000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                    if ((0x2000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite = 1U;
                                    } else if ((0x1000U 
                                                & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite = 1U;
                                    }
                                } else if ((0x2000U 
                                            & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite = 1U;
                                } else if ((0x1000U 
                                            & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                    if ((4U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite = 1U;
                    }
                } else if ((4U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                    if ((0U == (7U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                      >> 0xcU)))) {
                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite = 1U;
                    }
                }
            }
        } else if ((0x20U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
            if ((0x10U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                              >> 3U)))) {
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite = 1U;
                }
            }
        } else if ((0x10U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
            if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                          >> 3U)))) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite = 1U;
            }
        } else if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                          >> 2U)))) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite = 1U;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data1 = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_addr1 = 0U;
    } else {
        if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
             & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite)))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd;
        } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd;
        } else if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
                     & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
                    & (~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                          | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid) 
             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data1 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__csr_write_data;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_addr1 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wr_addr1;
        }
    }
    if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wr_addr1 = 0U;
        if ((0x40U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
            if ((0x20U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                if ((0x10U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                    if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                      >> 2U)))) {
                            if ((0x73U == (0x7fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst))) {
                                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wr_addr1 
                                    = ((0x73U == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                        ? 0x342U : 
                                       ((0x30200073U 
                                         == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                         ? 0x300U : 
                                        (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                         >> 0x14U)));
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wen1 = 0U;
    } else if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid) 
                & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wen1 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wen1;
    }
    if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wen1 = 0U;
        if ((0x40U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
            if ((0x20U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                if ((0x10U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                    if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                      >> 2U)))) {
                            if ((0x73U == (0x7fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst))) {
                                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wen1 = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_ecall = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data2 = 0U;
    } else if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid) 
                & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready))) {
        if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_ecall) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_ecall = 1U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data2 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_pc;
        } else {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_ecall = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data2 = 0U;
        }
    }
    if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_pc 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_ecall = 0U;
        if ((0x40U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
            if ((0x20U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                if ((0x10U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                    if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                      >> 2U)))) {
                            if ((0x73U == (0x7fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst))) {
                                if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                              >> 0xeU)))) {
                                    if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                    >> 0xcU)))) {
                                            if ((0x73U 
                                                 == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_ecall = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd = 0U;
    } else if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid) 
                & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_rd;
    }
    if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_rd 
            = (0xfU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                       >> 7U));
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite = 0U;
    } else if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid) 
                & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemWrite;
    }
    if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemWrite = 0U;
        if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                      >> 6U)))) {
            if ((0x20U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                      >> 2U)))) {
                            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemWrite = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead = 0U;
    } else if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid) 
                & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemRead;
    }
    if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemRead = 0U;
        if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                      >> 6U)))) {
            if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                          >> 5U)))) {
                if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                      >> 2U)))) {
                            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemRead = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arlen = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arburst = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arsize 
        = ((1U == (0xfU & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen)))
            ? 0U : ((3U == (0xfU & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen)))
                     ? 1U : 2U));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hcf6a53ee__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wen1) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_RegWrite) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h3556a05f__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h384f4e33__0) 
           & (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2) 
               == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h666fa1ae__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h384f4e33__0) 
           & (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1) 
               == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hb53dc38f__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_load) 
           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_en) 
              & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr))));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19ed6__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arsize = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_arsize = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
                if ((0x200U == (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr 
                                >> 0x10U))) {
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arid = 1U;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid;
                    if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__in_sdram) {
                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arlen = 3U;
                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arburst = 1U;
                    } else {
                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arlen = 0U;
                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arburst = 0U;
                    }
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arsize 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arsize;
                }
            }
        }
        if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_arvalid;
            vlSelf->ysyx_25010030_npc__DOT__io_master_arsize 
                = (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
                    | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready))
                    ? 2U : 0U);
        } else if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((0x200U != (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr 
                            >> 0x10U))) {
                vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid;
                vlSelf->ysyx_25010030_npc__DOT__io_master_arsize 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arsize;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__valid = 0U;
    } else {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__valid = 0U;
        if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state))) {
            if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid) 
                  & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready)) 
                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast))) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__valid = 1U;
            }
        } else if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state))) {
            if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__aw_done) 
                  & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__w_done)) 
                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__b_done))) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__valid = 1U;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__aw_done = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__w_done = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__b_done = 0U;
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt = 0U;
        } else if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state))) {
            if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid) 
                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready))) {
                __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt)));
            }
        } else if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state))) {
            if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid) 
                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_awready))) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__aw_done = 1U;
            }
            if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid) 
                  & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_wready)) 
                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast))) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__w_done = 1U;
            }
            if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bvalid) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__b_done = 1U;
            }
        }
    }
    if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready = 1U;
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hadc13f7a__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hb53dc38f__0) 
           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2) 
              == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h0017749a__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hb53dc38f__0) 
           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1) 
              == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__id_valid;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he5bf04e5__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd) 
           == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hc613623f__0 
        = (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd) 
            == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1)) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h69af1a50__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite) 
           & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rd_data 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_load)
            ? ((0x11U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen))
                ? (((- (IData)((1U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1 
                                      >> 7U)))) << 8U) 
                   | (0xffU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1))
                : ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen))
                    ? (0xffU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1)
                    : ((0x13U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen))
                        ? (((- (IData)((1U & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__half_data) 
                                              >> 0xfU)))) 
                            << 0x10U) | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__half_data))
                        : ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen))
                            ? (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__half_data)
                            : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata))))
            : ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_forward_las)
                ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2
                : ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite)
                    ? 0U : ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr) 
                              & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_ecall))) 
                             & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_mret)))
                             ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_rdata
                             : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result))));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19ed6__0) 
           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
              | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h804502ec__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h69af1a50__0) 
           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he5bf04e5__0) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h9653a62d__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h69af1a50__0) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hc613623f__0));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__load_use_flag 
        = (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h0017749a__0) 
            << 3U) | (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hadc13f7a__0) 
                       << 2U) | ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h804502ec__0) 
                                   & ((0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd)) 
                                      & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hc613623f__0))) 
                                  << 1U) | ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h804502ec__0) 
                                            & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
                                               & ((0U 
                                                   != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd)) 
                                                  & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he5bf04e5__0)))))));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src2 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0)
            ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result
            : ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h3556a05f__0)
                ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data
                : ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hadc13f7a__0)
                    ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data
                    : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs
                   [vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2])));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src1 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h9653a62d__0)
            ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result
            : ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h666fa1ae__0)
                ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data
                : ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h0017749a__0)
                    ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data
                    : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs
                   [vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1])));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready 
        = (((~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid)) 
            | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
           & (0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__load_use_flag)));
    vlSelf->ysyx_25010030_npc__DOT__io_master_wlast = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_wvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_awvalid = 0U;
    if (((~ (IData)(vlSelf->reset)) & (2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master)))) {
        vlSelf->ysyx_25010030_npc__DOT__io_master_awburst = 0U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_awlen = 0U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_bready = 1U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_awsize 
            = (((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                | ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                   | ((4U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                      | (8U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)))))
                ? 0U : (((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                         | (0xcU == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)))
                         ? 1U : 2U));
        vlSelf->ysyx_25010030_npc__DOT__io_master_wlast 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast;
        vlSelf->ysyx_25010030_npc__DOT__io_master_wvalid 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid;
        vlSelf->ysyx_25010030_npc__DOT__io_master_awvalid 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid;
    }
    if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemRead) 
         | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemWrite))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src1;
    } else if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jal) 
                | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jalr))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2 = 4U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_pc;
    } else if ((0x37U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2 = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm;
    } else if ((0x17U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_pc;
    } else {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2 
            = ((((5U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op)) 
                 | (9U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))) 
                | (8U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op)))
                ? ((IData)(((0x10U == (0x7cU & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode))) 
                            & (~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_shamt) 
                                  >> 5U)))) ? (0x1fU 
                                               & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_shamt))
                    : ((0xcU == (0x1fU & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode) 
                                          >> 2U))) ? 
                       (0x1fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src2)
                        : 0U)) : (((0xcU == (0x1fU 
                                             & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode) 
                                                >> 2U))) 
                                   | (0x18U == (0x1fU 
                                                & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode) 
                                                   >> 2U))))
                                   ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src2
                                   : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm));
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src1;
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__csr_write_data 
        = ((((((((((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op)) 
                   & (1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3))) 
                  | ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op)) 
                     & (3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)))) 
                 | ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op)) 
                    & (2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)))) 
                | ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op)) 
                   & (5U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)))) 
               | ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op)) 
                  & (7U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)))) 
              | ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op)) 
                 & (6U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)))) 
             | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_ecall)) 
            | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_mret))
            ? (((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op)) 
                & (1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)))
                ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src1
                : (((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op)) 
                    & (3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)))
                    ? (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1 
                       & (~ vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src1))
                    : (((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op)) 
                        & (2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)))
                        ? (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1 
                           | vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src1)
                        : (((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op)) 
                            & (5U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)))
                            ? (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_zimm)
                            : (((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op)) 
                                & (7U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)))
                                ? (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1 
                                   & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_zimm)))
                                : (((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op)) 
                                    & (6U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)))
                                    ? (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1 
                                       | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_zimm))
                                    : ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_ecall)
                                        ? 0xbU : (0x80U 
                                                  | ((0xffffe7f7U 
                                                      & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1) 
                                                     | (8U 
                                                        & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1 
                                                           >> 4U)))))))))))
            : 0U);
    if ((8U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))) {
        if (VL_UNLIKELY((4U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op)))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__process_result = 0U;
            VL_WRITEF("Unkonw alu_op\n");
        } else if (VL_UNLIKELY((2U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op)))) {
            VL_WRITEF("Unkonw alu_op\n");
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__process_result = 0U;
        } else {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__process_result 
                = ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))
                    ? (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
                       >> (0x1fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2))
                    : VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1, 
                                     (0x1fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2)));
        }
    } else {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__process_result 
            = ((4U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))
                ? ((2U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))
                    ? ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))
                        ? (VL_LTS_III(32, vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1, vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2)
                            ? 1U : 0U) : ((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
                                           < vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2)
                                           ? 1U : 0U))
                    : ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))
                        ? (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
                           << (0x1fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2))
                        : (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
                           ^ vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2)))
                : ((2U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))
                    ? ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))
                        ? (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
                           | vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2)
                        : (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
                           & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2))
                    : ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))
                        ? (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
                           - vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2)
                        : (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
                           + vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2))));
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state = 0U;
    } else {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__next_state;
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_zero 
        = (0U == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__process_result);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_less 
        = (1U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__process_result);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
                if ((0x200U == (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr 
                                >> 0x10U))) {
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready;
                }
            }
        }
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__next_clint_state 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__clint_state)
            ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__clint_state) 
               & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready)))
            : (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid));
}

void Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ len);

VL_INLINE_OPT void Vysyx_25010030_npc___024root___nba_sequent__TOP__1(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_read__3__Vfuncout;
    __Vfunc_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_read__3__Vfuncout = 0;
    IData/*31:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_valid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_valid = 0;
    CData/*1:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__state;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__state = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req = 0;
    IData/*31:0*/ __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_addr;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_addr = 0;
    IData/*31:0*/ __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr = 0;
    CData/*3:0*/ __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_id;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_id = 0;
    CData/*3:0*/ __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_id;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_id = 0;
    // Body
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_id 
        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_id;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_id 
        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_id;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr 
        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_addr 
        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_addr;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready 
        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req 
        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req 
        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state 
        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid 
        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid;
    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid 
        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__state 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__state;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_valid 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc;
    vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc;
    if (vlSelf->reset) {
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arready = 1U;
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rresp = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rdata = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rlast = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awready = 0U;
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready = 0U;
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bresp = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bid = 0U;
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req = 0U;
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req = 0U;
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_addr = 0U;
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_data = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_strb = 0U;
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_id = 0U;
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_id = 0U;
    } else {
        if (vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state) {
            if (vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state) {
                if (vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req) {
                    Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_read_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_addr, 4U, __Vfunc_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_read__3__Vfuncout);
                    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid = 1U;
                    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rresp = 0U;
                    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rdata 
                        = ((0x1fU >= (0x18U & (vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_addr 
                                               << 3U)))
                            ? (__Vfunc_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_read__3__Vfuncout 
                               << (0x18U & (vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_addr 
                                            << 3U)))
                            : 0U);
                    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rlast = 1U;
                    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rid 
                        = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_id;
                    if (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid) 
                         & ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
                            & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rready)))) {
                        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid = 0U;
                        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rlast = 0U;
                    }
                } else if (vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req) {
                    if (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wvalid) 
                         & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready))) {
                        if ((8U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                            if ((4U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                                if ((2U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                                    Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                ((0x1fU 
                                                                                >= 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 ? 
                                                                                (vlSelf->ysyx_25010030_npc__DOT__io_master_wdata 
                                                                                >> 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 : 0U), 4U);
                                } else if ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                                    Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                ((0x1fU 
                                                                                >= 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 ? 
                                                                                (vlSelf->ysyx_25010030_npc__DOT__io_master_wdata 
                                                                                >> 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 : 0U), 4U);
                                } else {
                                    Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                ((0x1fU 
                                                                                >= 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 ? 
                                                                                (vlSelf->ysyx_25010030_npc__DOT__io_master_wdata 
                                                                                >> 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 : 0U), 2U);
                                }
                            } else if ((2U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                                Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                ((0x1fU 
                                                                                >= 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 ? 
                                                                                (vlSelf->ysyx_25010030_npc__DOT__io_master_wdata 
                                                                                >> 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 : 0U), 4U);
                            } else if ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                                Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                ((0x1fU 
                                                                                >= 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 ? 
                                                                                (vlSelf->ysyx_25010030_npc__DOT__io_master_wdata 
                                                                                >> 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 : 0U), 4U);
                            } else {
                                Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                ((0x1fU 
                                                                                >= 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 ? 
                                                                                (vlSelf->ysyx_25010030_npc__DOT__io_master_wdata 
                                                                                >> 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 : 0U), 1U);
                            }
                        } else if ((4U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                            if ((2U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                                Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                ((0x1fU 
                                                                                >= 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 ? 
                                                                                (vlSelf->ysyx_25010030_npc__DOT__io_master_wdata 
                                                                                >> 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 : 0U), 4U);
                            } else if ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                                Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                ((0x1fU 
                                                                                >= 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 ? 
                                                                                (vlSelf->ysyx_25010030_npc__DOT__io_master_wdata 
                                                                                >> 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 : 0U), 4U);
                            } else {
                                Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                ((0x1fU 
                                                                                >= 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 ? 
                                                                                (vlSelf->ysyx_25010030_npc__DOT__io_master_wdata 
                                                                                >> 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 : 0U), 1U);
                            }
                        } else if ((2U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                            if ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                                Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                ((0x1fU 
                                                                                >= 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 ? 
                                                                                (vlSelf->ysyx_25010030_npc__DOT__io_master_wdata 
                                                                                >> 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 : 0U), 2U);
                            } else {
                                Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                ((0x1fU 
                                                                                >= 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 ? 
                                                                                (vlSelf->ysyx_25010030_npc__DOT__io_master_wdata 
                                                                                >> 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 : 0U), 1U);
                            }
                        } else if ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                            Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                ((0x1fU 
                                                                                >= 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 ? 
                                                                                (vlSelf->ysyx_25010030_npc__DOT__io_master_wdata 
                                                                                >> 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 : 0U), 1U);
                        } else {
                            Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                ((0x1fU 
                                                                                >= 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 ? 
                                                                                (vlSelf->ysyx_25010030_npc__DOT__io_master_wdata 
                                                                                >> 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                                                                                << 3U)))
                                                                                 : 0U), 4U);
                        }
                        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready = 0U;
                        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid = 1U;
                        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bresp = 0U;
                        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bid 
                            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_id;
                    }
                    if (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid) 
                         & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bready))) {
                        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awready = 0U;
                        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid = 0U;
                    }
                }
            }
        } else {
            __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid = 0U;
            __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid = 0U;
            vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rlast = 0U;
            __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req = 0U;
            __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req = 0U;
            __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready = 0U;
            if (vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arvalid) {
                __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_addr 
                    = vlSelf->ysyx_25010030_npc__DOT__io_master_araddr;
                __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_id 
                    = vlSelf->ysyx_25010030_npc__DOT__io_master_arid;
                vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arready = 1U;
                __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req = 1U;
            } else if (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awvalid) 
                        & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wvalid))) {
                __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr 
                    = vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr;
                __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_id 
                    = vlSelf->ysyx_25010030_npc__DOT__io_master_awid;
                vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awready = 1U;
                __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready = 1U;
                __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req = 1U;
            }
        }
        __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__next_state;
    }
    if (vlSelf->reset) {
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc = 0x30000000U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst = 0U;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_valid = 0U;
        vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc = 0x30000000U;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__state = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_req = 0U;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once = 0U;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once = 1U;
    } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush) {
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_valid = 0U;
        vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush_pc;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once = 1U;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__state = 3U;
    } else if ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__state))) {
        if (((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
               & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready)) 
              | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once)) 
             | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once))) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once = 0U;
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_req = 1U;
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_valid = 0U;
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__state))) {
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__state = 3U;
    } else if ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__state))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_req = 0U;
        if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_valid) {
            if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once) {
                __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc;
                __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_valid = 0U;
                vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc;
            } else {
                __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc;
                __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_valid = 1U;
                vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                    = ((0x6fU == (0x7fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst))
                        ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__jal_target
                        : ((IData)(4U) + vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc));
            }
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst;
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__state = 0U;
        }
    } else {
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__state = 0U;
    }
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_addr 
        = __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_addr;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr 
        = __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_id 
        = __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_id;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_id 
        = __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_id;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready 
        = __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state 
        = __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req 
        = __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req 
        = __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid 
        = __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid 
        = __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__state 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__state;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_valid;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__idu__DOT__immI 
        = (((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                >> 0x14U));
}

VL_INLINE_OPT void Vysyx_25010030_npc___024root___nba_sequent__TOP__2(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*1:0*/ __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0;
    __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0;
    __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v1;
    __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v1 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v1;
    __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v1 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v2;
    __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v2 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v2;
    __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v2 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v3;
    __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v3 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v3;
    __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v3 = 0;
    // Body
    vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_awid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_wdata = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_arid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_rready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr = 0U;
    if (((~ (IData)(vlSelf->reset)) & (2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master)))) {
        vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wstrb;
        vlSelf->ysyx_25010030_npc__DOT__io_master_awid = 1U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_wdata 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wdata;
        vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awaddr;
    }
    vlSelf->ysyx_25010030_npc__DOT__io_master_araddr = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            vlSelf->ysyx_25010030_npc__DOT__io_master_arid 
                = (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
                    | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready))
                    ? 1U : 0U);
            vlSelf->ysyx_25010030_npc__DOT__io_master_rready 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_rready;
            vlSelf->ysyx_25010030_npc__DOT__io_master_araddr 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_araddr;
        } else if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((0x200U != (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr 
                            >> 0x10U))) {
                vlSelf->ysyx_25010030_npc__DOT__io_master_arid = 1U;
                vlSelf->ysyx_25010030_npc__DOT__io_master_rready 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready;
                vlSelf->ysyx_25010030_npc__DOT__io_master_araddr 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr;
            }
        }
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__jalr_target 
        = (0xfffffffeU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src1 
                          + vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__take_branch 
        = ((0x63U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode)) 
           & (((((((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)) 
                   & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_zero))) 
                  | ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)) 
                     & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_zero))) 
                 | ((4U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)) 
                    & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_less))) 
                | ((5U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)) 
                   & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_less)))) 
               | ((6U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)) 
                  & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_less))) 
              | ((7U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)) 
                 & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_less)))));
    if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jalr) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush 
            = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_flush_condition) 
               & (~ (IData)((0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__load_use_flag)))));
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush_pc 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__jalr_target;
    } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_ecall) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush 
            = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_flush_condition) 
               & (~ (IData)((0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__load_use_flag)))));
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush_pc 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1;
    } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_mret) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush 
            = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_flush_condition) 
               & (~ (IData)((0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__load_use_flag)))));
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush_pc 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num2;
    } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__take_branch) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush 
            = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_flush_condition) 
               & (~ (IData)((0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__load_use_flag)))));
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush_pc 
            = (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_pc 
               + vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm);
    } else {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush_pc = 0U;
    }
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr 
        = ((0xa0000000U == vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr) 
           | (0xa0000000U == vlSelf->ysyx_25010030_npc__DOT__io_master_araddr));
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr 
        = (((0x80000000U <= vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr) 
            & (0x8fffffffU >= vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr)) 
           | ((0x80000000U <= vlSelf->ysyx_25010030_npc__DOT__io_master_araddr) 
              & (0x8fffffffU >= vlSelf->ysyx_25010030_npc__DOT__io_master_araddr)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready 
        = (1U & ((~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush)) 
                 & ((~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid)) 
                    | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready))));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_valid 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((2U 
                                                & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))
                                                ? (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))
                                                : (
                                                   (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state)) 
                                                   & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__hit)))));
    if (vlSelf->reset) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_beat_idx = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_index = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state = 0U;
    } else {
        if ((2U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state)))) {
                __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data
                    [0U];
                vlSelf->__Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0 = 1U;
                __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_index;
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                    = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram)
                        ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data
                       [vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_beat_idx]
                        : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data
                       [0U]);
                __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v1 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data
                    [1U];
                vlSelf->__Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v1 = 1U;
                __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v1 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_index;
                __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v2 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data
                    [2U];
                __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v2 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_index;
                __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v3 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data
                    [3U];
                __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v3 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_index;
            }
        } else if ((1U & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state)))) {
            if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__hit) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                    [(3U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                            >> 4U))][(3U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                                            >> 2U))];
            }
        }
        if ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_beat_idx 
                = (3U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                         >> 2U));
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_index 
                = (3U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                         >> 4U));
        }
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__next_state;
    }
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bready 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_bready));
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arvalid 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid));
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wvalid 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wvalid));
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awvalid 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_awvalid));
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bready 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_bready));
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arvalid 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid));
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wvalid 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wvalid));
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awvalid 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_awvalid));
    if (vlSelf->__Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data__v0) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data[vlSelf->__Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data__v0] 
            = vlSelf->__Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram[__Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0][0U] 
            = __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0;
    }
    if (vlSelf->__Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v1) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram[__Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v1][1U] 
            = __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v1;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram[__Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v2][2U] 
            = __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v2;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram[__Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v3][3U] 
            = __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v3;
    }
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state)
            ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state) 
               & (~ ((((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req) 
                       & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rlast)) 
                      & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid)) 
                     | (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req) 
                         & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid)) 
                        & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bready)))))
            : ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arvalid) 
               | (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awvalid)));
}

VL_INLINE_OPT void Vysyx_25010030_npc___024root___nba_comb__TOP__0(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bresp = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bid = 0U;
    if (vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) {
        vlSelf->ysyx_25010030_npc__DOT__io_master_rresp 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rresp;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rdata 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rdata;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rid 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rid;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rlast 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rlast;
    } else {
        vlSelf->ysyx_25010030_npc__DOT__io_master_rresp 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rresp;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rdata 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rdata;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rid 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rid;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rlast 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rlast;
    }
    vlSelf->ysyx_25010030_npc__DOT__io_master_bvalid 
        = (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
            & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid)) 
           | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid)));
    vlSelf->ysyx_25010030_npc__DOT__io_master_arready 
        = (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
            & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arready)) 
           | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arready)));
    vlSelf->ysyx_25010030_npc__DOT__io_master_rvalid 
        = (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
            & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid)) 
           | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_wready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_awready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state)
            ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state) 
               & (~ ((((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req) 
                       & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rlast)) 
                      & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid)) 
                     | (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req) 
                         & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bready)) 
                        & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid)))))
            : ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arvalid) 
               | (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awvalid)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rresp = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rresp = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rdata = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rdata = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bvalid = 0U;
    if (((~ (IData)(vlSelf->reset)) & (2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master)))) {
        if (vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bresp 
                = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bresp;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bid 
                = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bid;
        } else {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bresp 
                = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bresp;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bid 
                = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bid;
        }
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_wready 
            = (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
                & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready)) 
               | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
                  & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready)));
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_awready 
            = (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
                & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awready)) 
               | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
                  & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awready)));
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bvalid 
            = vlSelf->ysyx_25010030_npc__DOT__io_master_bvalid;
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_arready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_arready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rlast = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rresp 
                = vlSelf->ysyx_25010030_npc__DOT__io_master_rresp;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rdata 
                = vlSelf->ysyx_25010030_npc__DOT__io_master_rdata;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rid 
                = vlSelf->ysyx_25010030_npc__DOT__io_master_rid;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_arready 
                = vlSelf->ysyx_25010030_npc__DOT__io_master_arready;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rlast 
                = vlSelf->ysyx_25010030_npc__DOT__io_master_rlast;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid 
                = vlSelf->ysyx_25010030_npc__DOT__io_master_rvalid;
        }
        if ((1U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
                if ((0x200U == (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr 
                                >> 0x10U))) {
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rresp = 0U;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rdata 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rdata;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rid 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rid;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_arready 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arready;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rlast;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rvalid;
                } else {
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rresp 
                        = vlSelf->ysyx_25010030_npc__DOT__io_master_rresp;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rdata 
                        = vlSelf->ysyx_25010030_npc__DOT__io_master_rdata;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rid 
                        = vlSelf->ysyx_25010030_npc__DOT__io_master_rid;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_arready 
                        = vlSelf->ysyx_25010030_npc__DOT__io_master_arready;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast 
                        = vlSelf->ysyx_25010030_npc__DOT__io_master_rlast;
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid 
                        = vlSelf->ysyx_25010030_npc__DOT__io_master_rvalid;
                }
            }
        }
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__next_master 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master;
    if ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid) 
             | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__next_master = 2U;
        } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_arvalid) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__next_master = 1U;
        }
    } else if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        if (((((IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rvalid) 
               & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rready)) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rlast)) 
             | ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rvalid) 
                & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready)))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__next_master = 0U;
        }
    } else if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        if ((((((IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rvalid) 
                & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rready)) 
               & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rlast)) 
              | ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rvalid) 
                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready))) 
             | ((IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_bvalid) 
                & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_bready)))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__next_master = 0U;
        }
    } else {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__next_master = 0U;
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__next_state 
        = ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state))
            ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid)
                ? (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19ed6__0) 
                    & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite))
                    ? 1U : 2U) : 0U) : ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state))
                                         ? ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid) 
                                              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready)) 
                                             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast))
                                             ? 0U : 2U)
                                         : ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state))
                                             ? ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__aw_done) 
                                                  & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__w_done)) 
                                                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__b_done))
                                                 ? 0U
                                                 : 1U)
                                             : 0U)));
}

VL_INLINE_OPT void Vysyx_25010030_npc___024root___nba_sequent__TOP__3(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
        = vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram 
        = ((0xa0000000U <= vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc) 
           & (0xbfffffffU >= vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc));
}

VL_INLINE_OPT void Vysyx_25010030_npc___024root___nba_comb__TOP__1(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___nba_comb__TOP__1\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__jal_target 
        = (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once)
             ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc
             : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc) 
           + (((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                           >> 0x1fU))) << 0x14U) | 
              ((0xff000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst) 
               | ((0x800U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                             >> 9U)) | (0x7feU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                  >> 0x14U))))));
    vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
                 | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready))) {
                if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram) {
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 3U;
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 1U;
                } else {
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 0U;
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 0U;
                }
            } else {
                vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 0U;
                vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 0U;
            }
        } else if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((0x200U != (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr 
                            >> 0x10U))) {
                if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__in_sdram) {
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 3U;
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 1U;
                } else {
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 0U;
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 0U;
                }
            }
        }
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__hit 
        = (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram
           [(3U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                   >> 4U))] & ((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram
                                [(3U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                                        >> 4U))] == 
                                (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                                 >> 6U)) & ((0x100fU 
                                             != vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst) 
                                            & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram))));
    __Vtableidx1 = ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__hit)
                       ? 0U : 1U) << 7U) | (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_arready) 
                                             << 6U) 
                                            | (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
                                                << 5U) 
                                               | (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rlast) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid) 
                                                         << 2U) 
                                                        | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state)))))));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__next_state 
        = Vysyx_25010030_npc__ConstPool__TABLE_h03de9fe6_0
        [__Vtableidx1];
}

void Vysyx_25010030_npc___024root___eval_nba(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_25010030_npc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_25010030_npc___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_25010030_npc___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vysyx_25010030_npc___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_25010030_npc___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vysyx_25010030_npc___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vysyx_25010030_npc___024root___eval_triggers__ico(Vysyx_25010030_npc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25010030_npc___024root___dump_triggers__ico(Vysyx_25010030_npc___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_25010030_npc___024root___eval_triggers__act(Vysyx_25010030_npc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25010030_npc___024root___dump_triggers__act(Vysyx_25010030_npc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25010030_npc___024root___dump_triggers__nba(Vysyx_25010030_npc___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25010030_npc___024root___eval(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval\n"); );
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
        Vysyx_25010030_npc___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25010030_npc___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/furina/ysyx-workbench/npc/simple-SoC/ysyx_25020030_npc.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_25010030_npc___024root___eval_ico(vlSelf);
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
            Vysyx_25010030_npc___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_25010030_npc___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/furina/ysyx-workbench/npc/simple-SoC/ysyx_25020030_npc.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_25010030_npc___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25010030_npc___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/furina/ysyx-workbench/npc/simple-SoC/ysyx_25020030_npc.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_25010030_npc___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_25010030_npc___024root___eval_debug_assertions(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
