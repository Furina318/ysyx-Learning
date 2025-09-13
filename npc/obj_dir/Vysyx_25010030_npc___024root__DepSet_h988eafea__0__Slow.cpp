// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25010030_npc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

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
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
}

VL_ATTR_COLD void Vysyx_25010030_npc___024root___eval_final(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_25010030_npc___024root___eval_triggers__stl(Vysyx_25010030_npc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25010030_npc___024root___dump_triggers__stl(Vysyx_25010030_npc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_25010030_npc___024root___eval_stl(Vysyx_25010030_npc___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25010030_npc___024root___eval_settle(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_25010030_npc___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25010030_npc___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/furina/ysyx-workbench/npc/simple-SoC/ysyx_25020030_npc.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_25010030_npc___024root___eval_stl(vlSelf);
        }
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
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*1:0*/, 512> Vysyx_25010030_npc__ConstPool__TABLE_h03de9fe6_0;

VL_ATTR_COLD void Vysyx_25010030_npc___024root___stl_sequent__TOP__0(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__idu__DOT__immI 
        = (((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                >> 0x14U));
    vlSelf->ysyx_25010030_npc__DOT__io_master_awburst = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_awlen = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_awid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hcf6a53ee__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wen1) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_RegWrite) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_wlast = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_wdata = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_awsize = 0U;
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
    vlSelf->ysyx_25010030_npc__DOT__io_master_arid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_wvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arsize 
        = ((1U == (0xfU & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen)))
            ? 0U : ((3U == (0xfU & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen)))
                     ? 1U : 2U));
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
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_rready 
        = (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
            | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready)) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__in_sdram 
        = ((0xa0000000U <= vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__addr_reg) 
           & (0xbfffffffU >= vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__addr_reg));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19ed6__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready));
    vlSelf->ysyx_25010030_npc__DOT__io_master_awvalid = 0U;
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
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram 
        = ((0xa0000000U <= vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc) 
           & (0xbfffffffU >= vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc));
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
    vlSelf->ysyx_25010030_npc__DOT__io_master_bready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h804502ec__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_arvalid 
        = (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
            | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready)) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid));
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
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h384f4e33__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_RegWrite) 
           & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__0__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[1U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__1__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[2U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__2__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[3U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__3__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[4U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__4__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[5U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__5__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[6U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__6__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[7U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__7__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[8U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__8__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[9U] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__9__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0xaU] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__10__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0xbU] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__11__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0xcU] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__12__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0xdU] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__13__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0xeU] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__14__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0xfU] 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__15__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hb53dc38f__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_load) 
           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_en) 
              & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr))));
    vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_araddr 
        = (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
            | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready))
            ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_araddr
            : 0U);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arsize = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_arsize = 0U;
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
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready;
                }
            }
        }
        if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            vlSelf->ysyx_25010030_npc__DOT__io_master_arid 
                = (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
                    | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready))
                    ? 1U : 0U);
        } else if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((0x200U != (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr 
                            >> 0x10U))) {
                vlSelf->ysyx_25010030_npc__DOT__io_master_arid = 1U;
            }
        }
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__next_clint_state 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__clint_state)
            ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__clint_state) 
               & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready)))
            : (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid));
    vlSelf->ysyx_25010030_npc__DOT__io_master_rready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arlen = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arburst = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19ed6__0) 
           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
              | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite)));
    vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 0U;
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
    vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h69af1a50__0) 
           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he5bf04e5__0) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h9653a62d__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h69af1a50__0) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hc613623f__0));
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
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hadc13f7a__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hb53dc38f__0) 
           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2) 
              == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h0017749a__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hb53dc38f__0) 
           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1) 
              == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr)));
    vlSelf->ysyx_25010030_npc__DOT__io_master_araddr = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src2 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0)
            ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result
            : ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h3556a05f__0)
                ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data
                : ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hadc13f7a__0)
                    ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data
                    : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs
                   [vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2])));
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
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src1 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h9653a62d__0)
            ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result
            : ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h666fa1ae__0)
                ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data
                : ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h0017749a__0)
                    ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data
                    : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs
                   [vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1])));
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
        if ((1U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
                if ((0x200U == (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr 
                                >> 0x10U))) {
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arsize 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arsize;
                    if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__in_sdram) {
                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arlen = 3U;
                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arburst = 1U;
                    } else {
                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arlen = 0U;
                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arburst = 0U;
                    }
                }
            }
        }
        if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
                 | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready))) {
                vlSelf->ysyx_25010030_npc__DOT__io_master_arsize = 2U;
                if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram) {
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 3U;
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 1U;
                } else {
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 0U;
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 0U;
                }
            } else {
                vlSelf->ysyx_25010030_npc__DOT__io_master_arsize = 0U;
                vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 0U;
                vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 0U;
            }
            vlSelf->ysyx_25010030_npc__DOT__io_master_rready 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_rready;
            vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_arvalid;
            vlSelf->ysyx_25010030_npc__DOT__io_master_araddr 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_araddr;
        } else if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((0x200U != (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr 
                            >> 0x10U))) {
                vlSelf->ysyx_25010030_npc__DOT__io_master_arsize 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arsize;
                vlSelf->ysyx_25010030_npc__DOT__io_master_rready 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready;
                if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__in_sdram) {
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 3U;
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 1U;
                } else {
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 0U;
                    vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 0U;
                }
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
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready 
        = (((~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid)) 
            | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
           & (0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__load_use_flag)));
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
    }
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
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_zero 
        = (0U == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__process_result);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_less 
        = (1U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__process_result);
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
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready 
        = (1U & ((~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush)) 
                 & ((~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid)) 
                    | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready))));
}

VL_ATTR_COLD void Vysyx_25010030_npc___024root___eval_stl(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_25010030_npc___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
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
    if (vlSelf->__VicoTriggered.at(0U)) {
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
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
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
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
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
    vlSelf->ysyx_25010030_npc__DOT__io_slave_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__io_slave_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__io_slave_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__io_slave_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__io_slave_bid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__io_slave_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__io_slave_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__io_slave_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__io_slave_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__io_slave_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__io_slave_rid = VL_RAND_RESET_I(4);
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
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wen1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_mret = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wr_addr1 = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr1 = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr2 = VL_RAND_RESET_I(12);
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
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arburst = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__clint_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__next_clint_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__next_master = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_req = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__jal_target = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram[__Vi0] = VL_RAND_RESET_I(26);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_tag = VL_RAND_RESET_I(26);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_index = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_beat_idx = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__beat_cnt = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__idx = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__idu__DOT__immI = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__process_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_zero = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_less = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__jalr_target = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__take_branch = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_flush_condition = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__csr_write_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__load_use_flag = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h9653a62d__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h666fa1ae__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h0017749a__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hadc13f7a__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h804502ec__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hc613623f__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he5bf04e5__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h3556a05f__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h69af1a50__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h384f4e33__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hb53dc38f__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__in_sdram = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_word_offset = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__cache_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__addr_reg = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__aw_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__w_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__b_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__ar_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__block_data);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_load = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__op_complete = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__half_data = VL_RAND_RESET_I(16);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19ed6__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mepc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__0__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__1__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__2__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__3__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__4__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__5__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__6__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__7__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__8__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__9__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__10__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__11__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__12__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__13__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__14__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__15__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hcf6a53ee__0 = 0;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0 = 0;
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
    vlSelf->__Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0 = 0;
    vlSelf->__Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v1 = 0;
    vlSelf->__Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data__v0 = 0;
    vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
