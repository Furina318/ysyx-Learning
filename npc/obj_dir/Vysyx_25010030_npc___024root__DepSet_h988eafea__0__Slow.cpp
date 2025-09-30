// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25010030_npc.h for the primary calling header

#include "Vysyx_25010030_npc__pch.h"
#include "Vysyx_25010030_npc___024root.h"

VL_ATTR_COLD void Vysyx_25010030_npc___024root___eval_static(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_25010030_npc___024root___eval_initial(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void Vysyx_25010030_npc___024root___eval_final(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25010030_npc___024root___dump_triggers__stl(Vysyx_25010030_npc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vysyx_25010030_npc___024root___eval_phase__stl(Vysyx_25010030_npc___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25010030_npc___024root___eval_settle(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vysyx_25010030_npc___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/furina/ysyx-workbench/npc/simple-SoC/ysyx_25010030_npc.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vysyx_25010030_npc___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25010030_npc___024root___dump_triggers__stl(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*2:0*/, 32> Vysyx_25010030_npc__ConstPool__TABLE_haf594aab_0;

VL_ATTR_COLD void Vysyx_25010030_npc___024root___stl_sequent__TOP__0(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_25010030_npc__DOT__io_master_awlen = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_awid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_awburst = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__idu__DOT__immI 
        = (((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                >> 0x14U));
    vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_arid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_wdata = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_wlast = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_rready = 0U;
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
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_wvalid = 0U;
    vlSelf->__Vtableidx1 = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awsize 
        = Vysyx_25010030_npc__ConstPool__TABLE_haf594aab_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arsize 
        = Vysyx_25010030_npc__ConstPool__TABLE_haf594aab_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1 
        = VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata, 
                        VL_SHIFTL_III(32,32,32, (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__addr_off), 3U));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__half_data 
        = (0xffffU & ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__addr_off))
                       ? (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata 
                          >> 0x10U) : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19f14__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready));
    vlSelf->ysyx_25010030_npc__DOT__io_master_awvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid = 0U;
    vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__1__addr 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr1;
    vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__1__Vfuncout 
        = ((0x300U == (IData)(vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__1__addr))
            ? 0x1800U : ((0x305U == (IData)(vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__1__addr))
                          ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mtvec
                          : ((0x341U == (IData)(vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__1__addr))
                              ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mepc
                              : ((0x342U == (IData)(vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__1__addr))
                                  ? 0xbU : 0U))));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1 
        = vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__1__Vfuncout;
    vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__2__addr 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr2;
    vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__2__Vfuncout 
        = ((0x300U == (IData)(vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__2__addr))
            ? 0x1800U : ((0x305U == (IData)(vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__2__addr))
                          ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mtvec
                          : ((0x341U == (IData)(vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__2__addr))
                              ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mepc
                              : ((0x342U == (IData)(vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__2__addr))
                                  ? 0xbU : 0U))));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num2 
        = vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__2__Vfuncout;
    vlSelf->ysyx_25010030_npc__DOT__io_master_bready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he5bf05a1__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd) 
           == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he039f9d9__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd) 
           == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__forward_flag2 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_RegWrite) 
           & ((0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__forward_flag1 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite) 
           & ((0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd)) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid)));
    if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_load) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__use_flag1 
            = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_en) 
               & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr)));
        vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr = 0U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_araddr = 0U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_awsize = 0U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_arsize = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rd_data 
            = ((0x11U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen))
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
                            : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata))));
    } else {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__use_flag1 = 0U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr = 0U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_araddr = 0U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_awsize = 0U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_arsize = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rd_data 
            = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_forward_las)
                ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2
                : ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite)
                    ? 0U : ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr) 
                              & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_ecall))) 
                             & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_mret)))
                             ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_rdata
                             : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result)));
    }
    if ((1U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        if ((2U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
                vlSelf->ysyx_25010030_npc__DOT__io_master_awlen = 0U;
                vlSelf->ysyx_25010030_npc__DOT__io_master_awid = 0U;
                vlSelf->ysyx_25010030_npc__DOT__io_master_awburst = 0U;
                vlSelf->ysyx_25010030_npc__DOT__io_master_wdata 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wdata;
                vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb;
                vlSelf->ysyx_25010030_npc__DOT__io_master_wlast 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast;
                vlSelf->ysyx_25010030_npc__DOT__io_master_wvalid 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid;
            }
        }
        if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__is_clint_addr) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_addr;
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid;
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready;
            }
        }
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__state)
            ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__state) 
               && (1U & (~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready) 
                            & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rlast)))))
            : (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19f14__0) 
           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
              | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h28b47f47__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__forward_flag2) 
           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2) 
              == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h4fd1cab5__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__forward_flag2) 
           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1) 
              == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__use_flag2 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__forward_flag1));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h28a054cc__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__forward_flag1) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he5bf05a1__0));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h2e2f6104__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__forward_flag1) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he039f9d9__0));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hafc1b80d__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__use_flag1) 
           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2) 
              == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h023705ff__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__use_flag1) 
           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1) 
              == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr)));
    if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 0U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 0U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_arid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rready 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready;
        vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid;
        vlSelf->ysyx_25010030_npc__DOT__io_master_araddr 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_araddr;
    } else if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__is_clint_addr)))) {
            vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 0U;
            vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 0U;
            vlSelf->ysyx_25010030_npc__DOT__io_master_arid = 0U;
            vlSelf->ysyx_25010030_npc__DOT__io_master_rready 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready;
            vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid;
            vlSelf->ysyx_25010030_npc__DOT__io_master_araddr 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_addr;
        }
    }
    if ((1U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        if ((2U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
                vlSelf->ysyx_25010030_npc__DOT__io_master_awvalid 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid;
                vlSelf->ysyx_25010030_npc__DOT__io_master_bready = 1U;
                vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_addr;
            }
        }
    }
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr 
        = (((0xa0000000U <= vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr) 
            & (0xa0000007U >= vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr)) 
           | ((0xa0000000U <= vlSelf->ysyx_25010030_npc__DOT__io_master_araddr) 
              & (0xa0000007U >= vlSelf->ysyx_25010030_npc__DOT__io_master_araddr)));
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr 
        = ((((0x80000000U <= vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr) 
             & (0x8fffffffU >= vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr)) 
            | ((0x80000000U <= vlSelf->ysyx_25010030_npc__DOT__io_master_araddr) 
               & (0x8fffffffU >= vlSelf->ysyx_25010030_npc__DOT__io_master_araddr))) 
           | ((0x30000000U <= vlSelf->ysyx_25010030_npc__DOT__io_master_araddr) 
              & (0x3000000cU >= vlSelf->ysyx_25010030_npc__DOT__io_master_araddr)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src2 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h28a054cc__0)
            ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result
            : ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h28b47f47__0)
                ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data
                : ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hafc1b80d__0)
                    ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data
                    : ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2))
                        ? 0U : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs
                       [vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2]))));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__load_use_flag 
        = (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h023705ff__0) 
            << 3U) | (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hafc1b80d__0) 
                       << 2U) | ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__use_flag2) 
                                   & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he039f9d9__0)) 
                                  << 1U) | ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__use_flag2) 
                                            & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he5bf05a1__0)))));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src1 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h2e2f6104__0)
            ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result
            : ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h4fd1cab5__0)
                ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data
                : ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h023705ff__0)
                    ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data
                    : ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1))
                        ? 0U : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs
                       [vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1]))));
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
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_awready = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_wready = 0U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rid 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rid;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rresp 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rresp;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rdata 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rdata;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rlast 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rlast;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awvalid 
            = vlSelf->ysyx_25010030_npc__DOT__io_master_awvalid;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bready 
            = vlSelf->ysyx_25010030_npc__DOT__io_master_bready;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arvalid 
            = vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid;
    } else {
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wvalid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bresp = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_awready = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_wready = 0U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rid 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rid;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rresp 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rresp;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rdata 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rdata;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rlast 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rlast;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awvalid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bready = 0U;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arvalid = 0U;
    }
    vlSelf->ysyx_25010030_npc__DOT__io_master_arready 
        = (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
            & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arready)) 
           | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arready)));
    vlSelf->ysyx_25010030_npc__DOT__io_master_bvalid 
        = (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
            & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid)) 
           | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid)));
    vlSelf->ysyx_25010030_npc__DOT__io_master_rvalid 
        = (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
            & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid)) 
           | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2 
        = (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemRead) 
            | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemWrite))
            ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm
            : (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jal) 
                | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jalr))
                ? 4U : ((0x37U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode))
                         ? 0U : ((0x17U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode))
                                  ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm
                                  : ((((5U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op)) 
                                       | (9U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))) 
                                      | (8U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op)))
                                      ? ((IData)(((0x10U 
                                                   == 
                                                   (0x7cU 
                                                    & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_shamt) 
                                                      >> 5U))))
                                          ? (0x1fU 
                                             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_shamt))
                                          : ((0xcU 
                                              == (0x1fU 
                                                  & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode) 
                                                     >> 2U)))
                                              ? (0x1fU 
                                                 & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src2)
                                              : 0U))
                                      : (((0xcU == 
                                           (0x1fU & 
                                            ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode) 
                                             >> 2U))) 
                                          | (0x18U 
                                             == (0x1fU 
                                                 & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode) 
                                                    >> 2U))))
                                          ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src2
                                          : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm))))));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready 
        = ((~ (IData)(vlSelf->reset)) & (((~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid)) 
                                          | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
                                         & (0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__load_use_flag))));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src1;
    if ((1U & (~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemRead) 
                  | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemWrite))))) {
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jal) 
             | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jalr))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_pc;
        } else if ((0x37U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm;
        } else if ((0x17U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_pc;
        }
    }
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state)
            ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state) 
               && (1U & (~ ((((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req) 
                              & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rlast)) 
                             & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid)) 
                            | (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req) 
                                & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid)) 
                               & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bready))))))
            : ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arvalid) 
               | (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awvalid)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rresp = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rresp = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rdata = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rdata = 0U;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state)
            ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state) 
               && (1U & (~ ((((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req) 
                              & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rlast)) 
                             & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid)) 
                            | (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req) 
                                & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bready)) 
                               & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid))))))
            : ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arvalid) 
               | (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awvalid)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_arready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_arready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rlast = 0U;
    if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        vlSelf->ysyx_25010030_npc__DOT__io_master_arsize = 2U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rid 
            = vlSelf->ysyx_25010030_npc__DOT__io_master_rid;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rresp 
            = vlSelf->ysyx_25010030_npc__DOT__io_master_rresp;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rdata 
            = vlSelf->ysyx_25010030_npc__DOT__io_master_rdata;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_arready 
            = vlSelf->ysyx_25010030_npc__DOT__io_master_arready;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid 
            = vlSelf->ysyx_25010030_npc__DOT__io_master_rvalid;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rlast 
            = vlSelf->ysyx_25010030_npc__DOT__io_master_rlast;
    } else if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__is_clint_addr)))) {
            vlSelf->ysyx_25010030_npc__DOT__io_master_arsize 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arsize;
        }
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast = 0U;
    if ((1U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        if ((2U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
                vlSelf->ysyx_25010030_npc__DOT__io_master_awsize 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awsize;
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
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_awready 
                    = (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
                        & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awready)) 
                       | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
                          & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awready)));
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_wready 
                    = (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
                        & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready)) 
                       | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
                          & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready)));
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bvalid 
                    = vlSelf->ysyx_25010030_npc__DOT__io_master_bvalid;
            }
        }
        if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__is_clint_addr)))) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rid 
                    = vlSelf->ysyx_25010030_npc__DOT__io_master_rid;
            }
            if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__is_clint_addr) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rresp 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rresp;
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rdata 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rdata;
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_arready 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arready;
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rvalid;
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rlast;
            } else {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rresp 
                    = vlSelf->ysyx_25010030_npc__DOT__io_master_rresp;
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rdata 
                    = vlSelf->ysyx_25010030_npc__DOT__io_master_rdata;
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_arready 
                    = vlSelf->ysyx_25010030_npc__DOT__io_master_arready;
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid 
                    = vlSelf->ysyx_25010030_npc__DOT__io_master_rvalid;
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast 
                    = vlSelf->ysyx_25010030_npc__DOT__io_master_rlast;
            }
        }
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__sign1 
        = (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
           >> 0x1fU);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__sign2 
        = (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2 
           >> 0x1fU);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__sub_result 
        = (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
           - vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__process_result 
        = ((8U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))
            ? ((4U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))
                ? 0U : ((2U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))
                         ? 0U : ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))
                                  ? (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
                                     >> (0x1fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2))
                                  : VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1, 
                                                   (0x1fU 
                                                    & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2)))))
            : ((4U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))
                ? ((2U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))
                    ? ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))
                        ? (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__sign1) 
                            != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__sign2))
                            ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__sign1)
                                ? 1U : 0U) : ((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__sub_result 
                                               >> 0x1fU)
                                               ? 1U
                                               : 0U))
                        : ((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
                            < vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2)
                            ? 1U : 0U)) : ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))
                                            ? (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
                                               << (0x1fU 
                                                   & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2))
                                            : (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
                                               ^ vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2)))
                : ((2U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))
                    ? ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))
                        ? (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
                           | vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2)
                        : (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
                           & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2))
                    : ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op))
                        ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__sub_result
                        : (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 
                           + vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2)))));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_zero 
        = (0U == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__process_result);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_less 
        = (1U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__process_result);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__next_state 
        = ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))
            ? 3U : ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))
                     ? ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid) 
                          & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready)) 
                         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rlast))
                         ? 0U : 3U) : 0U));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__next_master 
        = ((2U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))
            ? ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))
                ? (((IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_bvalid) 
                    & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_bready))
                    ? 0U : 3U) : (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast) 
                                   | ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rvalid) 
                                      & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready)))
                                   ? 0U : 2U)) : ((1U 
                                                   & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rlast)
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid)
                                                     ? 3U
                                                     : 
                                                    ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid)
                                                      ? 1U
                                                      : 0U)))));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_next_state 
        = ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state))
            ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid)
                ? (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19f14__0) 
                    & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite))
                    ? 1U : 2U) : 0U) : ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state))
                                         ? ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid) 
                                              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready)) 
                                             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast))
                                             ? 0U : 2U)
                                         : ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state))
                                             ? ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__aw_done) 
                                                  & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__w_done)) 
                                                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__b_done))
                                                 ? 0U
                                                 : 1U)
                                             : 0U)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_flush_condition) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__load_use_flag))))));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__fencei_target 
        = ((IData)(4U) + vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_pc);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__jalr_target 
        = (0xfffffffeU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src1 
                          + vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__take_branch 
        = ((0x63U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode)) 
           & (((((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)) 
                 & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_zero))) 
                | ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)) 
                   & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_zero))) 
               | ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_less) 
                  & ((4U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)) 
                     | (6U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3))))) 
              | ((~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_less)) 
                 & ((5U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)) 
                    | (7U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3))))));
    if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_fencei) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush_pc 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__fencei_target;
    } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jalr) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush_pc 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__jalr_target;
    } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_ecall) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush_pc 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1;
    } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_mret) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush_pc 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num2;
    } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__take_branch) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush_pc 
            = (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_pc 
               + vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm);
    } else {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush_pc = 0U;
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush)) 
                                               & ((~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid)) 
                                                  | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready)))));
}

VL_ATTR_COLD void Vysyx_25010030_npc___024root___eval_stl(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vysyx_25010030_npc___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vysyx_25010030_npc___024root___eval_triggers__stl(Vysyx_25010030_npc___024root* vlSelf);

VL_ATTR_COLD bool Vysyx_25010030_npc___024root___eval_phase__stl(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vysyx_25010030_npc___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vysyx_25010030_npc___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25010030_npc___024root___dump_triggers__ico(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25010030_npc___024root___dump_triggers__act(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clock or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25010030_npc___024root___dump_triggers__nba(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clock or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25010030_npc___024root___ctor_var_reset(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__io_master_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__io_master_awid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__io_master_awlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25010030_npc__DOT__io_master_awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25010030_npc__DOT__io_master_awburst = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__io_master_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__io_master_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__io_master_wlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__io_master_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__io_master_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__io_master_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__io_master_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__io_master_arid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25010030_npc__DOT__io_master_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__io_master_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__io_master_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__io_master_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__io_master_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__io_master_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__io_master_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_rd = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1 = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2 = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_zimm = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_shamt = VL_RAND_RESET_I(6);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemLen = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemWrite = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemRead = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode = VL_RAND_RESET_I(7);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3 = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jal = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_fencei = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wen1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_mret = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wr_addr1 = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr1 = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr2 = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__sim_end = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wen1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_addr1 = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_mret = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_addr1 = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wen1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_forward_las = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimel = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimeh = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__is_clint_addr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__next_master = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__ifu_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__jal_target = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram[__Vi0] = VL_RAND_RESET_I(27);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_tag = VL_RAND_RESET_I(27);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_index = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_beat_idx = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__beat_cnt = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__ar_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__idx = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__idu__DOT__immI = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__load_use_flag = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__process_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_zero = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_less = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__sign1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__sign2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__sub_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__fencei_target = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__jalr_target = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__take_branch = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_flush_condition = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__forward_flag1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__forward_flag2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__use_flag1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__use_flag2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h2e2f6104__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h4fd1cab5__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h023705ff__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hafc1b80d__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he039f9d9__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he5bf05a1__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h28a054cc__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h28b47f47__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_word_offset = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__addr_off = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_next_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__aw_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__w_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__b_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__ar_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__block_data);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_load = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__half_data = VL_RAND_RESET_I(16);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19f14__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mepc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_strb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_id = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_id = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__read_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__write_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__read_id = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__write_id = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__1__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__1__addr = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__2__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__csr_read__2__addr = VL_RAND_RESET_I(12);
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__id_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
