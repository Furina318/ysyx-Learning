// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___ico_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
}

void VysyxSoCFull___024root___eval_ico(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VysyxSoCFull___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VysyxSoCFull___024root___eval_act(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_act\n"); );
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__2(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__data_in 
        = vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_in;
    vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__bit_cnt 
        = vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt;
    vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__receiving 
        = vlSelf->ysyxSoCFull__DOT__bitrev__DOT__receiving;
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psram_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ mask);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__3(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__3\n"); );
    // Body
    if ((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psram_write_TOP(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr, 
                                                                                ((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                                                << 0x18U) 
                                                                                | ((0xff0000U 
                                                                                & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                                                << 8U)) 
                                                                                | ((0xff00U 
                                                                                & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                                                >> 8U)) 
                                                                                | (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                                                >> 0x18U)))), (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt));
    }
    if ((0x35U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))) {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE = 1U;
    }
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__4(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__4\n"); );
    // Init
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__psram__DOT__data;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__data = 0;
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__addr;
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd;
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cnt 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__data = vlSelf->ysyxSoCFull__DOT__psram__DOT__data;
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__state;
    if (vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd = 0U;
        __Vdly__ysyxSoCFull__DOT__psram__DOT__data = 0U;
    } else {
        if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
             & (6U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr 
                = ((0xfffff0U & (vlSelf->ysyxSoCFull__DOT__psram__DOT__addr 
                                 << 4U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din));
        }
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE)
                    ? ((0xf0U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd) 
                                 << 4U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din))
                    : ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd) 
                                 << 1U)) | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din))));
        }
        if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
             & (0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)))) {
            __Vdly__ysyxSoCFull__DOT__psram__DOT__data 
                = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt))
                     ? vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap
                     : vlSelf->ysyxSoCFull__DOT__psram__DOT__data) 
                   << 4U);
        } else if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
                    & (0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)))) {
            __Vdly__ysyxSoCFull__DOT__psram__DOT__data 
                = ((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                    << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din));
        }
    }
    if (vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cnt = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state = 0U;
    } else if (VL_UNLIKELY((4U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__psram__DOT__state;
        VL_WRITEF("What's wrong with you ??? why %x ???\n",
                  8,vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd);
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cnt 
                = ((6U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt))
                    ? (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt)))
                    : 0U);
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
                = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt))
                    ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
        } else {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cnt 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt)));
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
                = vlSelf->ysyxSoCFull__DOT__psram__DOT__state;
        }
    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cnt 
            = ((5U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt)))
                : 0U);
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt))
                ? ((0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))
                    ? 3U : ((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))
                             ? 2U : 4U)) : (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
    } else if (vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cnt 
            = ((1U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt)))
                : 0U);
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
    } else {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cnt 
            = ((7U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt)))
                : 0U);
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
    }
    vlSelf->ysyxSoCFull__DOT__psram__DOT__data = __Vdly__ysyxSoCFull__DOT__psram__DOT__data;
}

extern const VlUnpacked<CData/*0:0*/, 2048> VysyxSoCFull__ConstPool__TABLE_h10c88e1c_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_h4abec798_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_h05f4911a_0;
extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0;
extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hccb3c341_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_he38796ec_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__5(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__5\n"); );
    // Init
    SData/*10:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r = 0;
    SData/*15:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0;
    CData/*6:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*2:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*2:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready = 0;
    SData/*13:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0;
    SData/*15:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT___asic_spi_sck;
    __Vdly__ysyxSoCFull__DOT___asic_spi_sck = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0;
    VlWide<4>/*127:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data;
    VL_ZERO_W(128, __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data);
    IData/*16:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 0;
    SData/*12:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q = 0;
    SData/*15:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__ysyxSoCFull__DOT___asic_spi_sck = vlSelf->ysyxSoCFull__DOT___asic_spi_sck;
    vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi 
        = vlSelf->ysyxSoCFull__DOT___asic_spi_mosi;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__ysyxSoCFull__DOT___asic_spi_sck = (1U & 
                                               ((~ (IData)(vlSelf->reset)) 
                                                & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                     & (0U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                                    & ((0U 
                                                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)))
                                                    ? 
                                                   (~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))));
    vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk) 
                                                   | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))
                                                ? (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & (((0x800U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                         ? 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                                         - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                         : 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                         - (IData)(1U))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((0x800U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                                        - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                        : 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                        - (IData)(1U)))))
                                                : (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_penable) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_psel)) 
                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r 
        = (1U & ((IData)(vlSelf->reset) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d)))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = (1U & ((IData)(vlSelf->reset) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                      | (((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                          >> 2U) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                      | ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                      | (((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                          >> 1U) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((((1U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
                                                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse))) 
                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset))
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d)))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 3U))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 2U))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read))
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                                   & (2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir))))
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    __Vtableidx3 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) 
                     << 0xaU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                  << 9U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                             << 8U) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                << 7U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->reset)))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt 
        = VysyxSoCFull__ConstPool__TABLE_h10c88e1c_0
        [__Vtableidx3];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)) 
                                          & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                         | (((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                             & (~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((7U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q) 
                                                  >> 3U))));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx = 4U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = 0x2774U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0xffffU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0x9fU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0x27fU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr = 3U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
    } else {
        if ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = 0x30cU;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 1U;
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
                = (0x1ffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
                               - (IData)(1U)));
            if ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 0U;
            }
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        }
        if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
        } else if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 1U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
        } else if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 2U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
        } else if ((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                             >> 3U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[(3U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos)))) 
                    & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                    (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                           >> 5U))]) | ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk)
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                                      | ((((2U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                                           & (0U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                                           ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                                           : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                                         >> 0x1fU)))
                                                : (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))))) 
                                        << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
            = ((0xeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q) 
                        << 1U)) | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
            = (0xffffU & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)))
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                           : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt) 
                              - (IData)(1U))));
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        }
        if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                    >> 8U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 1U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)
                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                - (IData)(1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                         : ((0U != (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))
                             ? (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                             : 0x80U)));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)));
        }
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x3f00U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0xffU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x3f00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                = (0x3effU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)));
        }
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 
                            = (0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU));
                        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 1U;
                        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 
                            = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU));
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        if ((0x32U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q = 1U;
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q 
                        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q)
                                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i))));
                } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q = 0U;
                }
            }
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xf0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset)
                   ? 0U : (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr) 
                                   | (0xeU ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals))))));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xfU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | (((IData)((0x18U == (0x18U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                   << 7U) | (((IData)((0x14U == (0x14U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                              << 6U) | (((IData)((0x11U 
                                                  == 
                                                  (0x11U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                         << 5U) | ((IData)(
                                                           (0x10U 
                                                            != 
                                                            (0x12U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                                   << 4U)))));
        if ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q 
                = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                   >> 0x10U);
        } else if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
                     & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                    & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 1U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                            >> 2U));
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b) 
                            - (IData)(1U)));
        }
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t) 
                             - (IData)(1U)));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt) 
                            - (IData)(1U)));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
            = (0xffffU & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc) 
                                 | (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))))
                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                              - (IData)(1U)) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc) 
                                                - (IData)(1U))));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
        } else if ((2U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)));
                __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
                __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                - (IData)(1U)));
                __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 1U;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r;
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss 
                    = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata);
            }
        }
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 2U;
                if ((9U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                 >> 0xaU));
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = ((0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q)) 
                       | ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r)) 
                          << 0xaU));
            }
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        if ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q = 0U;
                        } else {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q 
                                = ((~ ((IData)(1U) 
                                       << (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                 >> 0xaU)))) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q));
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                            = (0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                    } else {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 4U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                            = (0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                            = (0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                    }
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                            = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU));
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 5U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                 >> 0xaU));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 1U));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 3U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                 >> 0xaU));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 0xcU));
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
            } else if ((0x32U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                if ((0x28U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 2U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x400U | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q 
                        = (((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                            | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))
                            ? 1U : ((0xaU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)
                                     ? 0U : 7U));
                    if ((1U & (~ ((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                                  | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                            = ((0xaU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)
                                ? 0x21U : 0U);
                    }
                }
                if ((0x28U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                    if ((1U & (~ ((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                                  | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))))) {
                        if ((0xaU != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q 
                            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                               >> 0xaU)))));
                    }
                }
            }
        }
        if (((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
             & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr 
                = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                         >> 6U));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (7U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
        }
        if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                = (0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w);
        }
        if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                = (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w);
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 1U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if ((2U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if (VL_UNLIKELY((0x10U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
            VL_WRITEF("%c",8,vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
    } else if ((1U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count) 
                            - (IData)(1U)));
        }
    } else if (VL_UNLIKELY((3U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop))))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
        VL_WRITEF("%c",8,vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat;
        if ((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
              & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = 1U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = 0U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                         >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                               >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n 
        = (1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n 
        = (1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    __Vtableidx4 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                     << 5U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int) 
                                            << 2U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                               << 1U) 
                                              | (IData)(vlSelf->reset))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir 
        = VysyxSoCFull__ConstPool__TABLE_h4abec798_0
        [__Vtableidx4];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (0U == 
                                             (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                            >> 7U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->externalPins_uart_rx));
    vlSelf->__Vtableidx1 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_h05f4911a_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (2U == 
                                             (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                                            >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (0U == 
                                             (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                         & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                               >> 7U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))) 
                                                 & (1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                                | ((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))) 
                                               | (((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                      >> 8U)) 
                                                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))));
    vlSelf->__VdfgTmp_ha17ae98a__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0xeU;
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (4U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr 
                = (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q;
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier 
                    = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
            }
        }
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q 
                            = (3U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i) 
                                        >> 2U)));
                    }
                }
            }
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))
                                ? 4U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error))));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                           << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
                        = (1U & (VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 5U;
                }
            } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter))) {
                            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 3U;
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
                            }
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter) 
                                         - (IData)(1U)));
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                        }
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                            = ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? 7U : 6U) : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                   ? 5U
                                                   : 4U));
                        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 6U;
                        }
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
                        = (1U & ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor))
                                  : ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity))
                                      : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor)))));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 9U;
                } else {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
                            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)));
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0xaU;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 8U;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                } else {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                        << 7U) | (0x7fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = ((0x80U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 6U) | 
                                          (0x3fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))));
                            }
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? ((0xc0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 5U) | 
                                          (0x1fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))))
                                    : ((0xe0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 4U) | 
                                          (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                   >> 1U)))));
                        }
                    }
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 7U;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)
                            ? 0U : 6U);
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                }
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 1U;
                    if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 7U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 6U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x7fU 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                        }
                    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 5U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x3fU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 4U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x1fU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    }
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                        = (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out) 
                                    >> 1U));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 1U;
                } else {
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = ((0U == (4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                ? 0xdU : ((4U == (7U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                           ? 0x15U : 0x1dU));
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
                                    = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter) 
                                             - (IData)(1U)));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                                    = ((0x40U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out)) 
                                       | (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out) 
                                                   >> 1U)));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                            } else if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & ((0x10U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                              ? ((~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                   >> 5U)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor))
                                              : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                  >> 5U) 
                                                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor)))));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 3U;
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                            }
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                        - (IData)(1U)));
                    }
                } else {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 0U;
            } else if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 5U;
            } else {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    vlSelf->ysyxSoCFull__DOT___asic_spi_sck = __Vdly__ysyxSoCFull__DOT___asic_spi_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable 
        = ((~ (IData)(vlSelf->reset)) & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr = 3U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q 
            = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                  ? 0U : 0xffffU) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                        ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                          ? 0U : 0xffffU)) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                         ? 0U : 0xffffU))) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                   ? 0U : 0xffffU));
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop))) 
                    & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 1U;
        }
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
        }
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            }
        } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 0U;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q 
                        = (0xffffU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q)
                                       : vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
                }
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                          << 8U));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
            }
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q 
            = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r));
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (3U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
           & ((0x400U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk 
        = (((0x200U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0 
        = ((0x80U & ((~ (IData)((0U != (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))))) 
                     << 7U)) | (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
        = (0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                        - ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                           + (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U)))) : ((0x200U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                  - (IData)(1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [1U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [2U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [3U] | (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [4U] 
                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [5U] 
                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [6U] 
                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [7U] 
                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [8U] 
                                                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [9U] 
                                                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [0xaU] 
                                                                     | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [0xbU] 
                                                                        | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0xcU] 
                                                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0xdU] 
                                                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU])))))))))))))))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (2U == 
                                             (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                                            >> 1U)));
    vlSelf->ysyxSoCFull__DOT___asic_spi_ss = (0xffU 
                                              & (~ 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                                                  & ((- (IData)(
                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                                    >> 0xdU)))) 
                                                     | (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                                       >> 0xdU)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q;
    vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss 
        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss));
    vlSelf->__Vtableidx7 = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[0U] 
        = VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0
        [vlSelf->__Vtableidx7][0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[1U] 
        = VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0
        [vlSelf->__Vtableidx7][1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[2U] 
        = VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0
        [vlSelf->__Vtableidx7][2U];
    vlSelf->__Vtableidx2 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = VysyxSoCFull__ConstPool__TABLE_hccb3c341_0
        [vlSelf->__Vtableidx2];
    vlSelf->__Vtableidx5 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VysyxSoCFull__ConstPool__TABLE_he38796ec_0
        [vlSelf->__Vtableidx5];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelf->externalPins_uart_tx = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                             >> 4U) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__6(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__6\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__mem_len;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__mem_len = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__addr_low;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__addr_low = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__data_in;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__data_in = 0;
    CData/*3:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__mem_len;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__mem_len = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__addr_low;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__addr_low = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__mem_len;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__mem_len = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__addr_low;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__addr_low = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_araddr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_araddr = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rready = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rready = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wvalid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wvalid = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_araddr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_araddr = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awaddr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awaddr = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bready = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs__v32;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs__v32;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs__v32;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs__v32 = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_araddr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wvalid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_araddr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awaddr;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs__v32 = 0U;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__i = 0x20U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_stage__DOT__state = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_zero = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_less = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_stage__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_stage__DOT__next_state;
        if ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_stage__DOT__state)) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ready = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid = 0U;
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result 
                    = ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op))
                        ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op))
                            ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op))
                                     ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op))
                                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_val 
                                                 >> 
                                                 (0x1fU 
                                                  & (((0xcU 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                           >> 2U))) 
                                                      | (0x18U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                             >> 2U))))
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_val
                                                      : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm)))
                                              : VL_SHIFTRS_III(32,32,5, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_val, 
                                                               (0x1fU 
                                                                & (((0xcU 
                                                                     == 
                                                                     (0x1fU 
                                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                                         >> 2U))) 
                                                                    | (0x18U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                                           >> 2U))))
                                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_val
                                                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm))))))
                        : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op))
                            ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op))
                                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op))
                                    ? (VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_val, 
                                                  (((0xcU 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                         >> 2U))) 
                                                    | (0x18U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                           >> 2U))))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_val
                                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm))
                                        ? 1U : 0U) : 
                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_val 
                                     < (((0xcU == (0x1fU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                      >> 2U))) 
                                         | (0x18U == 
                                            (0x1fU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                >> 2U))))
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_val
                                         : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm))
                                     ? 1U : 0U)) : 
                               ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op))
                                 ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_val 
                                    << (0x1fU & (((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                       >> 2U))) 
                                                  | (0x18U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                         >> 2U))))
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_val
                                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm)))
                                 : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_val 
                                    ^ (((0xcU == (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                     >> 2U))) 
                                        | (0x18U == 
                                           (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                             >> 2U))))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_val
                                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm))))
                            : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op))
                                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op))
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_val 
                                       | (((0xcU == 
                                            (0x1fU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                >> 2U))) 
                                           | (0x18U 
                                              == (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                     >> 2U))))
                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_val
                                           : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm))
                                    : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_val 
                                       & (((0xcU == 
                                            (0x1fU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                >> 2U))) 
                                           | (0x18U 
                                              == (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                     >> 2U))))
                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_val
                                           : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm)))
                                : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op))
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_val 
                                       - (((0xcU == 
                                            (0x1fU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                >> 2U))) 
                                           | (0x18U 
                                              == (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                     >> 2U))))
                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_val
                                           : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm))
                                    : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_val 
                                       + (((0xcU == 
                                            (0x1fU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                >> 2U))) 
                                           | (0x18U 
                                              == (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                     >> 2U))))
                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_val
                                           : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm))))));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ready = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_zero 
                    = (0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_less 
                    = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op))
                        ? VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_val, 
                                     (((0xcU == (0x1fU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                    >> 2U))) 
                                       | (0x18U == 
                                          (0x1fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                            >> 2U))))
                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_val
                                       : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm))
                        : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op))
                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_val 
                               < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_val)
                            : VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_val, 
                                         (((0xcU == 
                                            (0x1fU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                >> 2U))) 
                                           | (0x18U 
                                              == (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                                     >> 2U))))
                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_val
                                           : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm))));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_stage__DOT__next_state 
                    = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready)
                        ? 1U : 0U);
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_stage__DOT__next_state = 0U;
            }
        } else if ((1U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_stage__DOT__state)) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_stage__DOT__next_state 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready)
                    ? 0U : 1U);
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_stage__DOT__next_state = 0U;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func7 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemLen = 2U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__next_state;
        if ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__state)) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid = 0U;
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode 
                    = (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1 
                    = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                >> 0xfU));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2 
                    = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                >> 0x14U));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd 
                    = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                >> 7U));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3 
                    = (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                             >> 0xcU));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__next_state 
                    = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ready)
                        ? 1U : 0U);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func7 
                    = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                       >> 0x19U);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemLen = 2U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode 
                    = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode) 
                                >> 2U));
                if ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode))) {
                    if (VL_LIKELY((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode)))) {
                        if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode))) {
                            if (VL_UNLIKELY((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode)))) {
                                VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__ebreak_TOP(2U, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                                VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                          32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                            } else if (VL_UNLIKELY(
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode)))) {
                                VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__ebreak_TOP(2U, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                                VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                          32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                            } else if ((0x100073U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)) {
                                VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__ebreak_TOP(1U, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                            }
                        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode))) {
                            if (VL_LIKELY((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode)))) {
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm 
                                    = (((- (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0x14U) | 
                                       ((0xff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr) 
                                        | ((0x800U 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                 >> 0x14U)))));
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite = 1U;
                            } else {
                                VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__ebreak_TOP(2U, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                                VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                          32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                            }
                        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode))) {
                            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))) {
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm 
                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__immI;
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite = 1U;
                            }
                        } else {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm 
                                = (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                         >> 7U)))));
                            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))) {
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op 
                                    = ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))
                                        ? 6U : 7U);
                            } else if (VL_UNLIKELY(
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3)))) {
                                VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__ebreak_TOP(2U, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                                VL_WRITEF("\033[32m[ID] : Unknown B instruction with func3 = %b\033[0m\n",
                                          3,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3);
                            } else {
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 1U;
                            }
                        }
                    } else {
                        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__ebreak_TOP(2U, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                        VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                  32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                    }
                } else if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode))) {
                    if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode))) {
                        if (VL_UNLIKELY((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode)))) {
                            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__ebreak_TOP(2U, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                            VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                      32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm 
                                = (0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite = 1U;
                        } else {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite = 1U;
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm = 0U;
                            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))) {
                                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))) {
                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op 
                                        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))
                                            ? 2U : 3U);
                                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))) {
                                    if ((0x20U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func7))) {
                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 8U;
                                    } else if ((0U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func7))) {
                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 9U;
                                    }
                                } else {
                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 4U;
                                }
                            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))) {
                                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))) {
                                    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func7))) {
                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 6U;
                                    } else if ((0U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func7))) {
                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 9U;
                                    }
                                } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func7))) {
                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 7U;
                                }
                            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))) {
                                if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func7))) {
                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 5U;
                                }
                            } else {
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op 
                                    = ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func7))
                                        ? 1U : 0U);
                            }
                        }
                    } else if (VL_UNLIKELY((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode)))) {
                        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__ebreak_TOP(2U, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                        VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                  32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                    } else if (VL_UNLIKELY((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode)))) {
                        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__ebreak_TOP(2U, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                        VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                  32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                    } else {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm 
                            = (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                  >> 7U))));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite = 1U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 0U;
                        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemLen = 2U;
                        } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemLen = 1U;
                        } else if (VL_LIKELY((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3)))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemLen = 4U;
                        } else {
                            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__ebreak_TOP(2U, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                            VL_WRITEF("\033[32m[ID] : Unknown S instruction with func3 = %b\033[0m\n",
                                      3,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3);
                        }
                    }
                } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode))) {
                    if (VL_UNLIKELY((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode)))) {
                        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__ebreak_TOP(2U, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                        VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                  32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm 
                            = (0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite = 1U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 0U;
                    } else {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__immI;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite = 1U;
                        if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))) {
                            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))) {
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op 
                                    = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))
                                        ? 2U : 3U);
                            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))) {
                                if ((0x20U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func7))) {
                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 8U;
                                } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func7))) {
                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 9U;
                                }
                            } else {
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 4U;
                            }
                        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op 
                                = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))
                                    ? 6U : 7U);
                        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))) {
                            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func7))) {
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 5U;
                            }
                        } else {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 0U;
                        }
                    }
                } else if (VL_UNLIKELY((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode)))) {
                    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__ebreak_TOP(2U, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                    VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                              32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                } else if (VL_UNLIKELY((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode)))) {
                    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__ebreak_TOP(2U, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                    VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                              32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__immI;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemLen = 2U;
                } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__immI;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemLen = 0U;
                } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__immI;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemLen = 1U;
                } else if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__immI;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemLen = 3U;
                } else if (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3)) 
                            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__immI;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemLen = 4U;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__next_state = 0U;
            }
        } else if ((1U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__state)) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__next_state 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ready)
                    ? 0U : 1U);
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__next_state = 0U;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__state = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_valid = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jal_target = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jalr_target = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_jal = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_jalr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__take_branch = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_data = 0U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs__v0 = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__delay = 3U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc = 0x30000000U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_araddr = 0x30000000U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_ready = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_access_fault = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_fault_addr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__state = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_out = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rready = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wvalid = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_araddr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awaddr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wstrb = 0xfU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__load_access_fault = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__store_access_fault = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fault_addr = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__next_state;
        if ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__state)) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ready = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_valid = 0U;
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_data 
                    = ((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm
                        : ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode))
                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm)
                            : (((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode)) 
                                | (0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode)))
                                ? ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)
                                : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_out
                                    : (((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode)) 
                                        | (0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode)))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result
                                        : 0U)))));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ready = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_valid = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jal_target 
                    = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                       + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jalr_target 
                    = (0xfffffffeU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_val 
                                      + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_jal 
                    = (0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_jalr 
                    = ((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode)) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3)));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__take_branch 
                    = ((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode)) 
                       & (((((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3)) 
                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_zero))) 
                              | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_zero))) 
                             | ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_less))) 
                            | ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3)) 
                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_less)))) 
                           | ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_less))) 
                          | ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3)) 
                             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_less)))));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__rd_wb 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__next_state 
                    = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_ready)
                        ? 1U : 0U);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__rd_wb_pre 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__rd_wb;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__RegWrite_wb 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite;
                if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__RegWrite_wb) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__rd_wb_pre)))) {
                    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs__v32 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_data;
                    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs__v32 = 1U;
                    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs__v32 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__rd_wb_pre;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__next_state = 0U;
            }
        } else if ((1U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__state)) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_valid = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__next_state 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_ready)
                    ? 0U : 1U);
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_valid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__next_state = 0U;
        }
        if ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state)) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_ready = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rready = 0U;
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_valid) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__if_stage__pc_src) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__branch_target;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_araddr 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__branch_target;
                } else {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                        = ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc);
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_araddr 
                        = ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc);
                }
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid = 1U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state = 1U;
            } else {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state = 0U;
            }
        } else if ((1U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state)) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_ready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid = 0U;
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid = 0U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rready = 1U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state = 2U;
            } else {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state = 1U;
            }
        } else if ((2U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state)) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_ready = 0U;
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rvalid) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rready))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rready = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rdata;
                if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rresp))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_access_fault = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_fault_addr 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_araddr;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_access_fault = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_fault_addr = 0U;
                }
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state = 3U;
            } else {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state = 2U;
            }
        } else if ((3U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state)) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_ready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready)
                    ? 0U : 3U);
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_ready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rready = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state;
        if ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__state)) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rready = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__load_access_fault = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__store_access_fault = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid = 0U;
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready))) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state = 1U;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_araddr 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__mem_stage__addr;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid = 1U;
                } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite) {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__data_in 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_val;
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__addr_low 
                        = (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__mem_stage__addr);
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__addr_low 
                        = (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__mem_stage__addr);
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__mem_len 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemLen;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state = 3U;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awaddr 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__mem_stage__addr;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid = 1U;
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__mem_len 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemLen;
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__Vfuncout 
                        = ((4U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__mem_len))
                            ? ((2U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__mem_len))
                                ? 0xfU : ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__mem_len))
                                           ? 0xfU : 
                                          ((2U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__addr_low))
                                            ? ((1U 
                                                & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__addr_low))
                                                ? 8U
                                                : 4U)
                                            : ((1U 
                                                & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__addr_low))
                                                ? 2U
                                                : 1U))))
                            : ((2U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__mem_len))
                                ? ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__mem_len))
                                    ? ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__addr_low))
                                        ? 3U : ((2U 
                                                 == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__addr_low))
                                                 ? 0xcU
                                                 : 0U))
                                    : ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__addr_low))
                                        ? 0xfU : 0U))
                                : ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__mem_len))
                                    ? ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__addr_low))
                                        ? 3U : ((2U 
                                                 == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__addr_low))
                                                 ? 0xcU
                                                 : 0U))
                                    : 0xfU)));
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__Vfuncout 
                        = ((4U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__mem_len))
                            ? ((2U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__mem_len))
                                ? __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__data_in
                                : ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__mem_len))
                                    ? __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__data_in
                                    : ((2U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__addr_low))
                                        ? ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__addr_low))
                                            ? (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__data_in 
                                               << 0x18U)
                                            : (0xff0000U 
                                               & (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__data_in 
                                                  << 0x10U)))
                                        : ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__addr_low))
                                            ? (0xff00U 
                                               & (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__data_in 
                                                  << 8U))
                                            : (0xffU 
                                               & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__data_in)))))
                            : ((2U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__mem_len))
                                ? ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__mem_len))
                                    ? ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__addr_low))
                                        ? (0xffffU 
                                           & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__data_in)
                                        : ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__addr_low))
                                            ? (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__data_in 
                                               << 0x10U)
                                            : __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__data_in))
                                    : __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__data_in)
                                : ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__mem_len))
                                    ? ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__addr_low))
                                        ? (0xffffU 
                                           & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__data_in)
                                        : ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__addr_low))
                                            ? (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__data_in 
                                               << 0x10U)
                                            : __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__data_in))
                                    : __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__data_in)));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wstrb 
                        = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__generate_aligned_wstrb__34__Vfuncout;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wdata 
                        = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__align_write_data__33__Vfuncout;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state = 6U;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state = 0U;
            }
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready = 1U;
        } else if ((1U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__state)) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid = 0U;
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state = 2U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid = 0U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rready = 1U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state = 1U;
            }
        } else if ((2U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__state)) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid = 0U;
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rvalid) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rready))) {
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rdata;
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__addr_low 
                    = (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__mem_stage__addr);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state = 6U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rready = 0U;
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__mem_len 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemLen;
                if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rresp))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__load_access_fault = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fault_addr 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_araddr;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__load_access_fault = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fault_addr = 0U;
                }
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__Vfuncout 
                    = ((4U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__mem_len))
                        ? ((2U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__mem_len))
                            ? __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata
                            : ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__mem_len))
                                ? __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata
                                : ((2U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__addr_low))
                                    ? ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__addr_low))
                                        ? (((- (IData)(
                                                       (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata 
                                                        >> 0x1fU))) 
                                            << 8U) 
                                           | (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata 
                                              >> 0x18U))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata 
                                                           >> 0x17U)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata 
                                                 >> 0x10U))))
                                    : ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__addr_low))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata 
                                                           >> 0xfU)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata 
                                                 >> 8U)))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata))))))
                        : ((2U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__mem_len))
                            ? ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__mem_len))
                                ? ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__addr_low))
                                    ? (0xffffU & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata)
                                    : ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__addr_low))
                                        ? (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata 
                                           >> 0x10U)
                                        : (0xffffU 
                                           & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata)))
                                : __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata)
                            : ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__mem_len))
                                ? ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__addr_low))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata 
                                                       >> 0xfU)))) 
                                        << 0x10U) | 
                                       (0xffffU & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata))
                                    : ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__addr_low))
                                        ? (((- (IData)(
                                                       (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata 
                                                        >> 0x1fU))) 
                                            << 0x10U) 
                                           | (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata 
                                              >> 0x10U))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata))))
                                : ((2U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__addr_low))
                                    ? ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__addr_low))
                                        ? (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata 
                                           >> 0x18U)
                                        : (0xffU & 
                                           (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata 
                                            >> 0x10U)))
                                    : ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__addr_low))
                                        ? (0xffU & 
                                           (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata 
                                            >> 8U))
                                        : (0xffU & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__rdata))))));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_out 
                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__extract_read_data__35__Vfuncout;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state = 2U;
            }
        } else if ((3U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__state)) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid = 0U;
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state = 4U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid = 0U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wvalid = 1U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state = 3U;
            }
        } else if ((4U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__state)) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid = 0U;
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wvalid))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state = 5U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wvalid = 0U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bready = 1U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state = 4U;
            }
        } else if ((5U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__state)) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid = 0U;
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bvalid) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bready))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state = 6U;
                if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bresp))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__store_access_fault = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fault_addr 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awaddr;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__store_access_fault = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fault_addr = 0U;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state = 5U;
            }
        } else if ((6U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__state)) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ready)
                    ? 0U : 6U);
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wvalid = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rready = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bready = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid = 0U;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid = 0U;
        }
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[7U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[8U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[9U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0xaU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0xbU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0xcU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0xdU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0xeU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0xfU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0x10U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0x11U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0x12U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0x13U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0x14U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0x15U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0x16U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0x17U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0x18U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0x19U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0x1aU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0x1bU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0x1cU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0x1dU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0x1eU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs__v32) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs__v32] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs__v32;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_val 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1))
            ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__if_stage__pc_src 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_jal) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_jalr) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__take_branch)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__branch_target 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_jalr)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jalr_target
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jal_target);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rready 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_araddr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__mem_stage__addr 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm 
           + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_val);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_val 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))
            ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wvalid 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rready 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bready 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_araddr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awaddr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__immI 
        = (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                >> 0x14U));
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_access_fault)) {
        VL_WRITEF("\033[31m[IF]:IF access fault at address: %x\033[0m\n",
                  32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_fault_addr);
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__load_access_fault)) {
        VL_WRITEF("\033[31m[MEM]:Load access fault at address: %x\033[0m\n",
                  32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fault_addr);
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__store_access_fault)) {
        VL_WRITEF("\033[31m[MEM]:Store access fault at address: %x\033[0m\n",
                  32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fault_addr);
    }
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psram_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &data);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__8(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__8\n"); );
    // Init
    IData/*31:0*/ __Vtask_ysyxSoCFull__DOT__psram__DOT__psram_read__38__data;
    __Vtask_ysyxSoCFull__DOT__psram__DOT__psram_read__38__data = 0;
    // Body
    if ((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt))) 
         & (0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)))) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psram_read_TOP(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr, __Vtask_ysyxSoCFull__DOT__psram__DOT__psram_read__38__data);
        vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
            = __Vtask_ysyxSoCFull__DOT__psram__DOT__psram_read__38__data;
    }
    vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap 
        = ((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
            << 0x18U) | ((0xff0000U & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                       << 8U)) | ((0xff00U 
                                                   & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                      >> 8U)) 
                                                  | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 0x18U))));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__9(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__data;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__addr = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__addr;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__counter = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__state = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__10(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__10\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT___bitrev_miso = (1U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__receiving) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_out) 
                                                     >> 
                                                     (7U 
                                                      & ((IData)(7U) 
                                                         - (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt)))))));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__0(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (0xffU & ((IData)(0xdU) 
                                       + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                          << 1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ctrl_go 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__11(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__11\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                       >> 4U)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r);
    vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0)
                     ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                        >> 8U) : (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                  >> 0x18U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
                     & (IData)(vlSelf->__VdfgTmp_h7fb30c92__0))
                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w
                     : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0) 
                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                            >> 8U) : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0) 
                                       & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                       ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                          >> 0x10U)
                                       : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
                                           & (((IData)(vlSelf->__VdfgTmp_h7fb30c92__0) 
                                               >> 3U) 
                                              & (1U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size))))
                                           ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                              >> 0x18U)
                                           : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0) 
                                               & (2U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                               ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                  >> 0x10U)
                                               : vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
                ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                           >> 0xbU)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r)
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)
                ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                           >> 0xbU)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w 
        = (0xffU & ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                     ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                            >> 0x18U) : (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                         >> 0x10U))
                     : ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                            >> 8U) : vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3 
        = (0U == ((0x20U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                            >> 0x1aU)) | ((0x10U & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                            >> 0x19U)) 
                                          | ((8U & 
                                              (8U ^ 
                                               (0x78U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0x19U)))) 
                                             | ((4U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                    >> 0xeU)) 
                                                | (3U 
                                                   & (2U 
                                                      ^ 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                       >> 0xcU))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4 
        = (0U == ((0x20U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                            >> 0x1aU)) | ((0x10U & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                            >> 0x19U)) 
                                          | ((8U & 
                                              (8U ^ 
                                               (0x78U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0x19U)))) 
                                             | ((4U 
                                                 & (0x4004U 
                                                    ^ 
                                                    (0x3fffcU 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                        >> 0xeU)))) 
                                                | (3U 
                                                   & (1U 
                                                      ^ 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                       >> 0xcU))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5 
        = (0U == ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                         >> 0x1dU)) | (3U & (2U ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0x1cU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6 
        = (0U == ((4U & (4U ^ (4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0x1dU)))) | 
                  (3U & (2U ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                               >> 0x1cU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1 
        = (0U == ((0x20U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                            >> 0x1aU)) | ((0x10U & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                            >> 0x19U)) 
                                          | ((8U & 
                                              ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0x1cU)) 
                                               << 3U)) 
                                             | ((4U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                    >> 0xeU)) 
                                                | (3U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                      >> 0xcU)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2 
        = (0U == ((4U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                             >> 0x1fU)) << 2U)) | (3U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                      >> 0x1cU))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0 
        = ((0U == ((0x20U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                             >> 0x1aU)) | ((0x10U & 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                             >> 0x19U)) 
                                           | ((8U & 
                                               (8U 
                                                ^ (0x78U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                      >> 0x19U)))) 
                                              | ((4U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                     >> 0xeU)) 
                                                 | (3U 
                                                    & (1U 
                                                       ^ 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                        >> 0xcU)))))))) 
           | (0U == ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                            >> 0x1dU)) | (3U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0x1cU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____VdfgTmp_hfb738304__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))) 
           | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____VdfgTmp_hfb738304__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____VdfgTmp_hfb738304__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel 
        = (IData)(((0x30000000U == (0x30000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel 
        = (IData)(((0x10001000U == (0x3ffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_penable 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr 
            = (0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb));
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pwdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_penable 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_paddr;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pwrite));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb 
            = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_psel) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite))
                        ? 0xfU : 0U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_penable 
            = (1U & 0U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite 
            = (1U & 0U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb 
            = (0xfU & 0U);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                         ? 0U : 0U))) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_penable) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
               << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch 
        = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
              & (0xcU == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
             << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                         & (8U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
                        << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                    & (4U == (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
                                   << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (0U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))))) 
           & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite))));
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__1(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arready = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arready = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rdata = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rvalid = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rresp = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rdata = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rvalid = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rresp = 0U;
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__1__addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_araddr;
        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__1__Vfuncout 
            = (((0xa0002000U <= vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__1__addr) 
                & (0xa0002007U >= vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__1__addr))
                ? 1U : 2U);
        if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__1__Vfuncout))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_araddr;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arready 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid = 0U;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_araddr;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arready 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arready = 0U;
        }
        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__9__addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_araddr;
        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__9__Vfuncout 
            = (((0xa0002000U <= vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__9__addr) 
                & (0xa0002007U >= vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__9__addr))
                ? 1U : 2U);
        if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__9__Vfuncout))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rdata 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rvalid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rresp 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rready;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready = 0U;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rdata 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rvalid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rresp 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rready;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready = 0U;
        }
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__3__addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_araddr;
        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__3__Vfuncout 
            = (((0xa0002000U <= vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__3__addr) 
                & (0xa0002007U >= vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__3__addr))
                ? 1U : 2U);
        if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__3__Vfuncout))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_araddr;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arready 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid = 0U;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_araddr;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arready 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arready = 0U;
        }
        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__11__addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_araddr;
        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__11__Vfuncout 
            = (((0xa0002000U <= vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__11__addr) 
                & (0xa0002007U >= vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__11__addr))
                ? 1U : 2U);
        if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__11__Vfuncout))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rdata 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rvalid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rresp 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rready;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready = 0U;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rdata 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rvalid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rresp 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rready;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready = 0U;
        }
    } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arready = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arready 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rdata = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rvalid = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rresp = 3U;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arready = 0U;
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arready = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rdata = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rvalid = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rresp = 3U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arready = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid = 0U;
            }
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rvalid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rresp = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rvalid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rresp = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wready = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awready = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bresp = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bvalid = 0U;
    if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__7__addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awaddr;
        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__7__Vfuncout 
            = (((0xa0002000U <= vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__7__addr) 
                & (0xa0002007U >= vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__7__addr))
                ? 1U : 2U);
        if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__7__Vfuncout))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wdata;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wstrb;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wvalid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wready 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid = 0U;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wdata;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wstrb;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wvalid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wready 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid = 0U;
        }
        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__5__addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awaddr;
        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__5__Vfuncout 
            = (((0xa0002000U <= vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__5__addr) 
                & (0xa0002007U >= vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__5__addr))
                ? 1U : 2U);
        if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__5__Vfuncout))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awaddr;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awready 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid = 0U;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awaddr;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awready 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid = 0U;
        }
        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__13__addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awaddr;
        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__13__Vfuncout 
            = (((0xa0002000U <= vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__13__addr) 
                & (0xa0002007U >= vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__13__addr))
                ? 1U : 2U);
        if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__decode_address__13__Vfuncout))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bresp 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bvalid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bready;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready = 0U;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bresp 
                = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                         | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                              << 0x1eU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                  << 0x18U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                     << 0x16U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                        << 0x14U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                           << 0x12U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                              << 0x10U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                 << 0xeU) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                       << 0xaU) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                          << 8U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                             << 6U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                            >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                         << 1U)))));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bvalid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bready;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready = 0U;
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wready = 0U;
        if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awready = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bresp = 3U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bvalid = 1U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awready = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid = 0U;
            }
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready = 0U;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bresp = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bvalid = 0U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 0xdU)) : vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                       >> 5U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb 
            = (0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                               >> 1U)));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__addr_valid 
        = (((0xa0002000U <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr) 
            & (0xa0002007U >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr)) 
           | ((0xa0002000U <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr) 
              & (0xa0002007U >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)
            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 0xdU)) : vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__next_master 
        = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))
            ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))
                ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))
                         ? 0U : (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rvalid) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rready)) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rvalid) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rready))) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bvalid) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bready)))
                                  ? 0U : 4U))) : ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))
                                                    ? 
                                                   ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready)) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid) 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready)))
                                                     ? 0U
                                                     : 3U)
                                                    : 
                                                   ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready)) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid) 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready)))
                                                     ? 0U
                                                     : 2U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))
                                                    ? 
                                                   ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready)) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid) 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready)))
                                                     ? 0U
                                                     : 1U)
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid)
                                                     ? 3U
                                                     : 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid)
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid)
                                                       ? 1U
                                                       : 0U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa1639__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
        = (~ (((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))) 
                                           | (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac8__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
        = (~ (((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))) 
                                           | (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0 
        = ((0U == ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                          >> 0x1cU)) | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                               >> 0x1bU)) 
                                        | ((2U & ((~ 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                    >> 0x1cU)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                               >> 0x18U)))))) 
           | ((0U == ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                             >> 0x1cU)) | ((6U & (4U 
                                                  ^ 
                                                  (0x1eU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                      >> 0x1bU)))) 
                                           | (1U & 
                                              (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                  >> 0x18U)))))) 
              | ((0U == ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                >> 0x1dU)) | (3U & 
                                              (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                  >> 0x1cU))))) 
                 | ((0U == ((8U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                       >> 0x1fU)) << 3U)) 
                            | ((6U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                      >> 0x1bU)) | 
                               (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                      >> 0x18U))))) 
                    | (0U == ((4U & (4U ^ (4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                 >> 0x1dU)))) 
                              | (3U & (2U ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                             >> 0x1cU)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2 
        = (0U == ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                         >> 0x1cU)) | ((6U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                              >> 0x1bU)) 
                                       | (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                   >> 0x18U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1 
        = (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                            >> 0x1bU)) | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                   >> 0xcU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0 
        = ((0U == ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                          >> 0x1cU)) | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x1bU)) 
                                        | ((2U & ((~ 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0x1cU)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x18U)))))) 
           | ((0U == ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                             >> 0x1cU)) | ((6U & (4U 
                                                  ^ 
                                                  (0x1eU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1bU)))) 
                                           | (1U & 
                                              (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x18U)))))) 
              | ((0U == ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                >> 0x1dU)) | (3U & 
                                              (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x1cU))))) 
                 | ((0U == ((8U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                       >> 0x1fU)) << 3U)) 
                            | ((6U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                      >> 0x1bU)) | 
                               (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                      >> 0x18U))))) 
                    | (0U == ((4U & (4U ^ (4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1dU)))) 
                              | (3U & (2U ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                             >> 0x1cU)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2 
        = (0U == ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                         >> 0x1cU)) | ((6U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                       | (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x18U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0)) 
           | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
            << 2U) | (((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 0x1bU)) 
                               | ((0xcU & (8U ^ (0x3cU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0x1aU)))) 
                                  | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                            >> 0x17U)) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0xcU)))))) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(
                                                                                (0x3fffffffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr), vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__36__rdata);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata 
            = vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__36__rdata;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa1639__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits)) 
                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                     >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
               >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid) 
           & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN) 
           & (0xf000000U == (0xfffe000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac8__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__12(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__12\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__psram__DOT__addr = vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt = vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cnt;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd = vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__state = vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state;
    vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0 
        = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
            | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) 
           & (0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__13(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__13\n"); );
    // Body
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__receiving = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__bit_cnt = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__bitrev__DOT__receiving) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__data_in 
            = (((~ ((IData)(1U) << (7U & ((IData)(7U) 
                                          - (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt))))) 
                & (IData)(vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__data_in)) 
               | (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi) 
                           << (7U & ((IData)(7U) - (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt))))));
        vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__bit_cnt 
            = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt)));
        if ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__receiving = 0U;
            vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_out 
                = ((0x80U & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_in) 
                             << 7U)) | ((0x40U & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_in) 
                                                  << 5U)) 
                                        | ((0x20U & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_in) 
                                             << 3U)) 
                                           | ((0x10U 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_in) 
                                                  << 1U)) 
                                              | ((8U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_in) 
                                                     >> 1U)) 
                                                 | ((4U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_in) 
                                                        >> 3U)) 
                                                    | ((2U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_in) 
                                                           >> 5U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_in) 
                                                             >> 7U)))))))));
        }
    } else {
        vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__receiving = 1U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__bit_cnt = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__receiving 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__receiving;
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_in 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__data_in;
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__bit_cnt;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__2(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 7U)) & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r 
        = (0xffU & ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                     ? ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                         ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                         : ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                             ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                               << 5U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))
                             : 0U)) : ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                                        ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                            : (0xc0U 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                        : ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                                            ? ((0x80U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                   >> 8U)
                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                            : ((0x80U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout 
        = (0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                    ? (1U & (0x38U >> (7U & ((IData)(7U) 
                                             - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)))))
                    : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                        ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                           >> 0x14U) : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                            >> 0x10U)
                                         : ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                             ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                >> 0xcU)
                                             : ((0xbU 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                 ? 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 8U)
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                  >> 4U)
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0) 
                                                    >> 4U)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                                      >> 4U)
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1)
                                                       : 
                                                      ((0x12U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                        >> 0x14U)
                                                        : 
                                                       ((0x13U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? 
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                         >> 0x10U)
                                                         : 
                                                        ((0x14U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                          >> 0x1cU)
                                                          : 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                          >> 0x18U))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelf->ysyxSoCFull__DOT___asic_psram_sck = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
        vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
            = (0xfU & (- (IData)((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout));
    } else {
        vlSelf->ysyxSoCFull__DOT___asic_psram_sck = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
        vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
            = (0xfU & (- (IData)((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
            = (0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                        ? (1U & (0xebU >> (7U & ((IData)(7U) 
                                                 - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                        : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                               >> 0x14U) : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                             ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                >> 0x10U)
                                             : ((0xaU 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                 ? 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0xcU)
                                                 : 
                                                ((0xbU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 8U)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 4U)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                    : 0U))))))));
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
                = (1U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                            | ((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re)))));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready 
        = (1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready)
                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pready)
                              : 0U))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
                    | (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)) 
                       | (((~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                 : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)) 
                          | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)) 
                             | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)) 
                                | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)) 
                                   | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat 
        = ((0U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr 
                         >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
            : ((1U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr 
                             >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                : ((2U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr 
                                 >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                    : ((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr 
                                     >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                        : ((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr 
                                         >> 2U))) ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                            : ((5U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr 
                                             >> 2U)))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                : ((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr 
                                                 >> 2U)))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                    : 0U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q;
    if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                         ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                                  ? 6U : 2U)));
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 1U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                    = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                        ? 2U : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))
                                 ? 9U : 3U));
            }
        }
    } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
                if ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w)) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i)))) {
                    if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                          >> (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                    >> 0xaU))) & ((0x1fffU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                      >> 0xcU)) 
                                                  == 
                                                  vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                                                  [
                                                  (3U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                      >> 0xaU))]))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 6U;
                    }
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 7U;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 2U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
            if ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read))) {
                if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                      >> (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                >> 0xaU))) & ((0x1fffU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                  >> 0xcU)) 
                                              == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                                              [(3U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0xaU))]))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 4U;
                }
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 5U;
        }
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
                = (0xfU & 2U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
                = (0xfU & 0U);
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                    = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q))
                        ? 8U : 9U);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r = 9U;
            } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w) {
                if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                      >> (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                >> 0xaU))) & ((0x1fffU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                  >> 0xcU)) 
                                              == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                                              [(3U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0xaU))]))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read)
                            ? 4U : 6U);
                } else if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                                  >> (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                            >> 0xaU))))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 8U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read)
                            ? 4U : 6U);
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 3U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read)
                            ? 4U : 6U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q) 
                       - (IData)(1U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = (0xfU & 0U);
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata
                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_prdata
                     : 0U)) : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                       ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                           ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                               << 0x18U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                           : 0U) : 0U) 
                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)
                                          ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                              [3U] 
                                              << 0x18U) 
                                             | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                 [2U] 
                                                 << 0x10U) 
                                                | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [0U])))
                                          : 0U) | (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata
                                                     : 0U) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata
                                                        : 0U) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)
                                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                           : 0U) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6)
                                                             ? 
                                                            (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))
                                                             : 0U)))))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
                = (0x1cU != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0 
        = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) 
           | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 
        = ((0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0)) 
           | (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 
        = ((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1)) 
           | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__3(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h2a2074af__0 
        = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt)))
            ? vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap
            : vlSelf->ysyxSoCFull__DOT__psram__DOT__data);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out0 
        = ((0xeU & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0) 
              & (vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h2a2074af__0 
                 >> 0x1cU)));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out1 
        = ((0xdU & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out1)) 
           | (0xeU & (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0) 
                       << 1U) & (vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h2a2074af__0 
                                 >> 0x1cU))));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out2 
        = ((0xbU & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out2)) 
           | (0xcU & (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0) 
                       << 2U) & (vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h2a2074af__0 
                                 >> 0x1cU))));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out3 
        = ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out3)) 
           | (8U & (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0) 
                     << 3U) & (vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h2a2074af__0 
                               >> 0x1cU))));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__14(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__14\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                 >> 7U));
    vlSelf->ysyxSoCFull__DOT___asic_spi_mosi = vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__4(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din 
        = ((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
               | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out0) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0)) 
               | (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out1) 
                   & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0) 
                      << 1U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out2) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0) 
                                     << 2U)) | (8U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out3) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0)
                                                       ? 0xfU
                                                       : 0U)))))) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0) 
                 | (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0) 
                     << 1U) | (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0) 
                                << 2U) | ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0)
                                           ? 8U : 0U))))));
}

void VysyxSoCFull___024root___nba_sequent__TOP__0(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__1(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__7(VysyxSoCFull___024root* vlSelf);

void VysyxSoCFull___024root___eval_nba(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__7(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__8(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U))) {
        VysyxSoCFull___024root___nba_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VysyxSoCFull___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U))) {
        VysyxSoCFull___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(8U) | vlSelf->__VnbaTriggered.at(9U))) {
        VysyxSoCFull___024root___nba_comb__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U)) 
          | vlSelf->__VnbaTriggered.at(8U)) | vlSelf->__VnbaTriggered.at(9U))) {
        VysyxSoCFull___024root___nba_comb__TOP__4(vlSelf);
    }
}

void VysyxSoCFull___024root___eval_triggers__ico(VysyxSoCFull___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
void VysyxSoCFull___024root___eval_triggers__act(VysyxSoCFull___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__nba(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG

void VysyxSoCFull___024root___eval(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<10> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VysyxSoCFull___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VysyxSoCFull___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("../ysyxSoC/build/ysyxSoCFull.v", 5248, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VysyxSoCFull___024root___eval_ico(vlSelf);
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
            VysyxSoCFull___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VysyxSoCFull___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../ysyxSoC/build/ysyxSoCFull.v", 5248, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VysyxSoCFull___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VysyxSoCFull___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../ysyxSoC/build/ysyxSoCFull.v", 5248, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VysyxSoCFull___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VysyxSoCFull___024root___eval_debug_assertions(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->externalPins_ps2_clk & 0xfeU))) {
        Verilated::overWidthError("externalPins_ps2_clk");}
    if (VL_UNLIKELY((vlSelf->externalPins_ps2_data 
                     & 0xfeU))) {
        Verilated::overWidthError("externalPins_ps2_data");}
    if (VL_UNLIKELY((vlSelf->externalPins_uart_rx & 0xfeU))) {
        Verilated::overWidthError("externalPins_uart_rx");}
}
#endif  // VL_DEBUG
