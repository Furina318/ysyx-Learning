// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25010030_npc.h for the primary calling header

#include "Vysyx_25010030_npc__pch.h"
#include "Vysyx_25010030_npc___024root.h"

VL_INLINE_OPT void Vysyx_25010030_npc___024root___ico_sequent__TOP__0(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready 
        = ((~ (IData)(vlSelf->reset)) & (((~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid)) 
                                          | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
                                         & (0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__load_use_flag))));
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

void Vysyx_25010030_npc___024root___eval_ico(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vysyx_25010030_npc___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_25010030_npc___024root___eval_triggers__ico(Vysyx_25010030_npc___024root* vlSelf);

bool Vysyx_25010030_npc___024root___eval_phase__ico(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vysyx_25010030_npc___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vysyx_25010030_npc___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vysyx_25010030_npc___024root___eval_act(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval_act\n"); );
}

void Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__cpu__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);
extern const VlUnpacked<CData/*2:0*/, 32> Vysyx_25010030_npc__ConstPool__TABLE_haf594aab_0;

VL_INLINE_OPT void Vysyx_25010030_npc___024root___nba_sequent__TOP__0(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint_arready;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint_arready = 0;
    IData/*31:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimel;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimel = 0;
    IData/*31:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimeh;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimeh = 0;
    IData/*31:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_valid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_valid = 0;
    CData/*1:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__ifu_state;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__ifu_state = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v0;
    __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v0 = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid = 0;
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__ar_done;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__ar_done = 0;
    CData/*0:0*/ __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v2;
    __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v2 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v2;
    __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v2 = 0;
    CData/*0:0*/ __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0;
    __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0 = 0;
    IData/*26:0*/ __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0;
    __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0;
    __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0;
    __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v1;
    __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v1 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v1;
    __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v2;
    __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v2 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v2;
    __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v2 = 0;
    CData/*0:0*/ __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v3;
    __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v3 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v3;
    __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v3 = 0;
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
    CData/*0:0*/ __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs__v0;
    __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs__v16;
    __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs__v16 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs__v16;
    __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs__v16 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs__v16;
    __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs__v16 = 0;
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
    vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__id_valid 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimeh 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimeh;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimel 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimel;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint_arready 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arready;
    vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__ar_done 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__ar_done;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__ifu_state 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__ifu_state;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_valid 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc;
    if ((0x100073U == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
        Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__cpu__DOT__ebreak_TOP(1U, vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst);
    }
    __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v2 = 0U;
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
    __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v0 = 0U;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid;
    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid 
        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid;
    __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs__v0 = 0U;
    __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs__v16 = 0U;
    if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_fencei) 
         | (IData)(vlSelf->reset))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__idx = 2U;
        __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v0 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__i = 0x10U;
        vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__id_valid = 0U;
        vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid = 0U;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid = 0U;
    } else if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready)) 
                & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready) 
                   | (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid))))) {
        vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__id_valid = 1U;
    } else if (((~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
                    & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready))) 
                & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready))) {
        vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__id_valid = 0U;
    }
    if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state))) {
        if ((1U & ((~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid)) 
                   & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__w_done))))) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid = 1U;
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast = 1U;
        } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_wready) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid = 0U;
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast = 0U;
        }
    }
    if (vlSelf->reset) {
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid = 0U;
    }
    if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state))) {
        if ((1U & ((~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid)) 
                   & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__aw_done))))) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid = 1U;
        } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_awready) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid = 0U;
        }
    }
    if (((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state)) 
         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_word_offset 
            = (3U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result 
                     >> 2U));
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__addr_off 
            = (3U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))) {
            if ((3U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))) {
                if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))) {
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__b = 4U;
                    __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v2 = 1U;
                    __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v2 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_index;
                    __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_tag;
                    __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_index;
                    __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data
                        [0U];
                    __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_index;
                    __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v1 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data
                        [1U];
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
            }
        }
        if ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__beat_cnt = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_beat_idx 
                = (3U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                         >> 2U));
        }
    }
    if (vlSelf->reset) {
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid = 0U;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid = 0U;
        __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs__v0 = 1U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_flush_condition = 1U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_rdata = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready = 0U;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint_arready = 1U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rvalid = 0U;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimel = 0U;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimeh = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata = 0U;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__sim_end = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr2 = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr1 = 0U;
    } else {
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
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready))) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid 
                = (1U & (~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                            | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite))));
        } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__valid) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid = 1U;
        } else if (((~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
                        & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready))) 
                    & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid))) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid = 0U;
        }
        if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_RegWrite)) 
             & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)))) {
            __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs__v16 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data;
            __Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs__v16 = 1U;
            __Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs__v16 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd;
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
        if ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready = 0U;
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__ar_done = 0U;
        } else if ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready = 1U;
            if ((1U & ((~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid)) 
                       & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__ar_done))))) {
                __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid = 1U;
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_araddr 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc;
            } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_arready) {
                __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid = 0U;
                __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__ar_done = 1U;
            }
        } else if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready = 0U;
        }
        if ((0xffffffffU == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimel)) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimeh 
                = ((IData)(1U) + vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimeh);
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimel = 0U;
        } else {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimel 
                = ((IData)(1U) + vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimel);
        }
        if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__state) {
            if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__state) {
                __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint_arready = 1U;
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rdata 
                    = ((0U == (0xfU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr))
                        ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimel
                        : ((4U == (0xfU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr))
                            ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimeh
                            : 0U));
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rvalid = 1U;
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rlast = 1U;
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rresp = 0U;
            }
        } else {
            if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid) 
                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arready))) {
                __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint_arready = 0U;
            }
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rvalid = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rlast = 0U;
        }
        if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready)) 
             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rdata;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__sim_end 
                = (0x100073U == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst);
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr2 = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr1 = 0U;
            if ((0x40U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                if ((0x20U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                    if ((0x10U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                        if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                          >> 2U)))) {
                                if ((0x73U == (0x7fU 
                                               & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst))) {
                                    if ((0x30200073U 
                                         == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr2 = 0x341U;
                                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr1 = 0x300U;
                                    } else {
                                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr2 = 0U;
                                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr1 
                                            = ((0x73U 
                                                == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                                ? 0x305U
                                                : (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                   >> 0x14U));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state))) {
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt = 0U;
    } else if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid) 
                & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready))) {
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt)));
    }
    if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state))) {
        if ((1U & ((~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__ar_done)) 
                   & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid))))) {
            vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid = 1U;
        } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_arready) {
            vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__ar_done = 1U;
        }
    } else {
        vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__ar_done = 0U;
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
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_index 
                = (1U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                         >> 4U));
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_tag 
                = (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                   >> 5U);
        }
    }
    if (((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state)) 
         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb 
            = (0xfU & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen) 
                       << (3U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result)));
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wdata 
            = ((1U == (0xfU & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen)))
                ? VL_SHIFTL_III(32,32,32, (0xffU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2), 
                                VL_SHIFTL_III(32,32,32, 
                                              (3U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result), 3U))
                : ((3U == (0xfU & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen)))
                    ? ((0U == (3U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result))
                        ? (0xffffU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2)
                        : ((2U == (3U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result))
                            ? (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2 
                               << 0x10U) : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2))
                    : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2));
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt;
    if (__Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v0) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[0U] = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[1U] = 0U;
    }
    if (__Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v2) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram[__Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0] 
            = __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram__v0;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram[__Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0][0U] 
            = __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v0;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram[__Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v1][1U] 
            = __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v1;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram[__Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v2][2U] 
            = __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v2;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram[__Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v3][3U] 
            = __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram__v3;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[__Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram__v2] = 1U;
    }
    if (__Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs__v0) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0U] = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[1U] = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[2U] = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[3U] = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[4U] = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[5U] = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[6U] = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[7U] = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[8U] = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[9U] = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0xaU] = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0xbU] = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0xcU] = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0xdU] = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0xeU] = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0xfU] = 0U;
    }
    if (__Vdlyvset__ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs__v16) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[__Vdlyvdim0__ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs__v16] 
            = __Vdlyvval__ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs__v16;
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimel 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimel;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimeh 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimeh;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arready 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__clint_arready;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__ar_done 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__ar_done;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid;
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
    if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__valid) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rd_data;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_RegWrite 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_en;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr;
    } else if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
                & (~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                      | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite))))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rd_data;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_RegWrite 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd;
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_shamt = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jal = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_mret = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jalr = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2 = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_load = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_forward_las = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mtvec = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mepc = 0U;
    } else {
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_shamt 
                = (0x3fU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                            >> 0x14U));
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jal = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode 
                = (0x7fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst);
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jalr = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm = 0U;
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
                                        = ((0x2000U 
                                            & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                            ? 6U : 7U);
                                } else if ((1U & (~ 
                                                  (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
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
                                if ((0x73U == (0x7fU 
                                               & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst))) {
                                    if ((0x4000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                        if ((0x2000U 
                                             & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                     >> 0xcU)))) {
                                                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm 
                                                    = 
                                                    (0x1fU 
                                                     & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                        >> 0xfU));
                                            }
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm 
                                                = (0x1fU 
                                                   & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                      >> 0xfU));
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                    >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
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
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
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
                                        ? ((0x1000U 
                                            & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                            ? 2U : 3U)
                                        : ((0x1000U 
                                            & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                            ? ((0x40000000U 
                                                & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                                ? 8U
                                                : 9U)
                                            : 4U)) : 
                                   ((0x2000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                     ? ((0x1000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                         ? 6U : 7U)
                                     : ((0x1000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
                                         ? 5U : ((0x40000000U 
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
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
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
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2 
                = (0xfU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                           >> 0x14U));
        }
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
                                  & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he5bf05a1__0)))))));
        }
        if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid) {
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
        if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid) {
            if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wen1) {
                if ((0x305U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_addr1))) {
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mtvec 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data1;
                }
                if ((0x305U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_addr1))) {
                    if ((0x341U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_addr1))) {
                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mepc 
                            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data1;
                    }
                }
            }
            if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_ecall) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mepc 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data2;
            }
        }
    }
    if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__valid) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_addr1 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_addr1;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wen1 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wen1;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_ecall 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_ecall;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data2 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data2;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data1 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data1;
    } else if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
                & (~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                      | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite))))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_addr1 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_addr1;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wen1 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wen1;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_ecall 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_ecall;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data2 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data2;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data1 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data1;
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_fencei = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2 = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_mret = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1 = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_en = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemLen = 0x1fU;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_addr1 = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wen1 = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_ecall = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data2 = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__valid = 0U;
    } else {
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid) 
             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src2;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemLen;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_addr1 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wr_addr1;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wen1 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wen1;
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
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_fencei 
                = (0x100fU == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst);
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_mret = 0U;
            if ((0x40U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                if ((0x20U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                    if ((0x10U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                        if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                          >> 2U)))) {
                                if ((0x73U == (0x7fU 
                                               & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst))) {
                                    if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                     >> 0xcU)))) {
                                                if (
                                                    (0x73U 
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
                    }
                }
            }
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1 
                = (0xfU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                           >> 0xfU));
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
                                } else if ((1U == (7U 
                                                   & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                      >> 0xcU)))) {
                                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemLen = 0x13U;
                                } else if ((0U == (7U 
                                                   & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
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
                                        = ((0x1000U 
                                            & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)
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
        if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_en 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd;
        } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_en 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd;
        } else if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
                     & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
                    & (~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                          | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite))))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_en 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd;
        }
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__valid = 0U;
        if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready)) 
             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__valid = 1U;
        }
        if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__aw_done) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__w_done)) 
             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__b_done))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__valid = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready = 1U;
    }
    if ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__b_done = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__w_done = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__aw_done = 0U;
    } else {
        if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bvalid) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__b_done = 1U;
        }
        if ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_wready)) 
             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__w_done = 1U;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid) 
             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_awready))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__aw_done = 1U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data1 = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready = 1U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wr_addr1 = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wen1 = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_pc = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_zimm = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3 = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_ecall = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemWrite = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemRead = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_rd = 0U;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc = 0x80000000U;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc = 0x80000000U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst = 0U;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_valid = 0U;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__ifu_state = 0U;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once = 0U;
        __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once = 1U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_valid = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state = 0U;
    } else {
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid) 
             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data1 
                = (((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op)) 
                    & (1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)))
                    ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src1
                    : (((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op)) 
                        & (2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)))
                        ? (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1 
                           | vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src1)
                        : (((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op)) 
                            & (5U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)))
                            ? (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_zimm)
                            : (((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op)) 
                                & (6U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3)))
                                ? (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1 
                                   | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_zimm))
                                : ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_ecall)
                                    ? 0xbU : 0U)))));
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemWrite;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemRead;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_rd;
        }
        if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready = 0U;
        } else if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready = 1U;
        }
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wr_addr1 = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wen1 = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_pc 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_zimm 
                = (0x1fU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                            >> 0xfU));
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3 
                = (7U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                         >> 0xcU));
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_ecall = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite = 0U;
            if ((0x40U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                if ((0x20U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                    if ((0x10U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                        if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                          >> 2U)))) {
                                if ((0x73U == (0x7fU 
                                               & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst))) {
                                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wr_addr1 
                                        = (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                           >> 0x14U);
                                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wen1 = 1U;
                                    if ((0x4000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                        if ((0x2000U 
                                             & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                     >> 0xcU)))) {
                                                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op = 2U;
                                                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite = 1U;
                                            }
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op = 1U;
                                            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite = 1U;
                                        }
                                    } else if ((0x2000U 
                                                & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                        if ((1U & (~ 
                                                   (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                    >> 0xcU)))) {
                                            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op = 2U;
                                            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite = 1U;
                                        }
                                    } else if ((0x1000U 
                                                & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op = 1U;
                                        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite = 1U;
                                    }
                                    if ((1U & (~ (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                     >> 0xcU)))) {
                                                if (
                                                    (0x73U 
                                                     == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)) {
                                                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_ecall = 1U;
                                                }
                                            }
                                        }
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
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemWrite = 0U;
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemRead = 0U;
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
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_rd 
                = (0xfU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                           >> 7U));
        }
        if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_valid = 0U;
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush_pc;
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once = 1U;
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__ifu_state = 3U;
        } else if ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__ifu_state))) {
            if (((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid) 
                   & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready)) 
                  | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once)) 
                 | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once))) {
                __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once = 0U;
                __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once = 0U;
                __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_valid = 0U;
                __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__ifu_state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__ifu_state))) {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__ifu_state = 3U;
        } else if ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__ifu_state))) {
            if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_valid) {
                if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once) {
                    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc;
                    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_valid = 0U;
                    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc;
                } else {
                    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc;
                    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_valid = 1U;
                    __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                        = ((0x6fU == (0x7fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst))
                            ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__jal_target
                            : ((IData)(4U) + vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc));
                }
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst;
                __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__ifu_state = 0U;
            }
        } else {
            __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__ifu_state = 0U;
        }
        if ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_valid = 0U;
        } else if ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_valid = 0U;
            if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_valid = 1U;
            }
        } else if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_valid = 1U;
        }
        if ((0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))) {
            if ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))) {
                if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid) {
                    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                        = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rdata;
                }
            } else if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data
                    [0U];
            }
        }
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__next_state;
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__state 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__next_state));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1 
        = VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata, 
                        VL_SHIFTL_III(32,32,32, (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__addr_off), 3U));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__half_data 
        = (0xffffU & ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__addr_off))
                       ? (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata 
                          >> 0x10U) : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata));
    vlSelf->__Vtableidx1 = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awsize 
        = Vysyx_25010030_npc__ConstPool__TABLE_haf594aab_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arsize 
        = Vysyx_25010030_npc__ConstPool__TABLE_haf594aab_0
        [vlSelf->__Vtableidx1];
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
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid;
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
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__use_flag1 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_load) 
           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_en) 
              & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr))));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hafc1b80d__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__use_flag1) 
           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2) 
              == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h023705ff__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__use_flag1) 
           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1) 
              == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19f14__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__forward_flag2 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_RegWrite) 
           & ((0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid)));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he5bf05a1__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd) 
           == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he039f9d9__0 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd) 
           == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__forward_flag1 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite) 
           & ((0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd)) 
              & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid)));
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
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__load_use_flag 
        = (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h023705ff__0) 
            << 3U) | (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hafc1b80d__0) 
                       << 2U) | ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__use_flag2) 
                                   & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he039f9d9__0)) 
                                  << 1U) | ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__use_flag2) 
                                            & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he5bf05a1__0)))));
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__ifu_state 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__ifu_state;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid 
        = __Vdly__ysyx_25010030_npc__DOT__cpu__DOT__IF_valid;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__idu__DOT__immI 
        = (((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                >> 0x14U));
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
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__is_clint_addr 
            = ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))
                ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid) 
                   & ((0x2000000U <= vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_addr) 
                      & (0x200ffffU >= vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_addr)))
                : (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__is_clint_addr));
    }
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
                    __Vdly__ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid = 1U;
                    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rresp = 0U;
                    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rdata 
                        = VL_SHIFTL_III(32,32,32, ([&]() {
                                Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_read_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_addr, 4U, __Vfunc_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_read__3__Vfuncout);
                            }(), __Vfunc_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_read__3__Vfuncout), 
                                        (0x18U & VL_SHIFTL_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_addr, 3U)));
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
                                                                                VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_wdata, 
                                                                                (0x18U 
                                                                                & VL_SHIFTL_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr, 3U))), 4U);
                                } else if ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                                    Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_wdata, 
                                                                                (0x18U 
                                                                                & VL_SHIFTL_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr, 3U))), 4U);
                                } else {
                                    Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_wdata, 
                                                                                (0x18U 
                                                                                & VL_SHIFTL_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr, 3U))), 2U);
                                }
                            } else if ((2U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                                Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_wdata, 
                                                                                (0x18U 
                                                                                & VL_SHIFTL_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr, 3U))), 4U);
                            } else if ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                                Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_wdata, 
                                                                                (0x18U 
                                                                                & VL_SHIFTL_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr, 3U))), 4U);
                            } else {
                                Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_wdata, 
                                                                                (0x18U 
                                                                                & VL_SHIFTL_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr, 3U))), 1U);
                            }
                        } else if ((4U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                            if ((2U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                                Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_wdata, 
                                                                                (0x18U 
                                                                                & VL_SHIFTL_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr, 3U))), 4U);
                            } else if ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                                Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_wdata, 
                                                                                (0x18U 
                                                                                & VL_SHIFTL_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr, 3U))), 4U);
                            } else {
                                Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_wdata, 
                                                                                (0x18U 
                                                                                & VL_SHIFTL_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr, 3U))), 1U);
                            }
                        } else if ((2U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                            if ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                                Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_wdata, 
                                                                                (0x18U 
                                                                                & VL_SHIFTL_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr, 3U))), 2U);
                            } else {
                                Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_wdata, 
                                                                                (0x18U 
                                                                                & VL_SHIFTL_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr, 3U))), 1U);
                            }
                        } else if ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb))) {
                            Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_wdata, 
                                                                                (0x18U 
                                                                                & VL_SHIFTL_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr, 3U))), 1U);
                        } else {
                            Vysyx_25010030_npc___024root____Vdpiimwrap_ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr, 
                                                                                VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_wdata, 
                                                                                (0x18U 
                                                                                & VL_SHIFTL_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr, 3U))), 4U);
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
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__next_master));
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
    vlSelf->ysyx_25010030_npc__DOT__io_master_awlen = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_awid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_awburst = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_arid = 0U;
    if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 0U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 0U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_arid = 0U;
    } else if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__is_clint_addr)))) {
            vlSelf->ysyx_25010030_npc__DOT__io_master_arburst = 0U;
            vlSelf->ysyx_25010030_npc__DOT__io_master_arlen = 0U;
            vlSelf->ysyx_25010030_npc__DOT__io_master_arid = 0U;
        }
    }
    vlSelf->ysyx_25010030_npc__DOT__io_master_bready = 0U;
    if ((1U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        if ((2U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
                vlSelf->ysyx_25010030_npc__DOT__io_master_awlen = 0U;
                vlSelf->ysyx_25010030_npc__DOT__io_master_awid = 0U;
                vlSelf->ysyx_25010030_npc__DOT__io_master_awburst = 0U;
                vlSelf->ysyx_25010030_npc__DOT__io_master_bready = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vysyx_25010030_npc___024root___nba_sequent__TOP__2(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid 
        = vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid;
    if (((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state)) 
         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid))) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_addr 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result;
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19f14__0) 
           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
              | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite)));
    if (vlSelf->reset) {
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result = 0U;
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state = 0U;
    } else {
        if (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid) 
             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready))) {
            vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__process_result;
        }
        vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_next_state;
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid 
        = vlSelf->__Vdly__ysyx_25010030_npc__DOT__cpu__DOT__id_valid;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready 
        = ((~ (IData)(vlSelf->reset)) & (((~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid)) 
                                          | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready)) 
                                         & (0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__load_use_flag))));
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

VL_INLINE_OPT void Vysyx_25010030_npc___024root___nba_comb__TOP__0(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyx_25010030_npc__DOT__io_master_awsize = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_wdata = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_arsize = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_wlast = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_rready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_wvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_awvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr = 0U;
    vlSelf->ysyx_25010030_npc__DOT__io_master_araddr = 0U;
    if ((1U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        if ((2U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
                vlSelf->ysyx_25010030_npc__DOT__io_master_awsize 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awsize;
                vlSelf->ysyx_25010030_npc__DOT__io_master_wdata 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wdata;
                vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb;
                vlSelf->ysyx_25010030_npc__DOT__io_master_wlast 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast;
                vlSelf->ysyx_25010030_npc__DOT__io_master_wvalid 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid;
                vlSelf->ysyx_25010030_npc__DOT__io_master_awvalid 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid;
            }
        }
        if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__is_clint_addr) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready;
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid;
            }
        }
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__state)
            ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__state) 
               && (1U & (~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready) 
                            & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rlast)))))
            : (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid));
    if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        vlSelf->ysyx_25010030_npc__DOT__io_master_arsize = 2U;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rready 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready;
        vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid;
        vlSelf->ysyx_25010030_npc__DOT__io_master_araddr 
            = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_araddr;
    } else if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__is_clint_addr)))) {
            vlSelf->ysyx_25010030_npc__DOT__io_master_arsize 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arsize;
            vlSelf->ysyx_25010030_npc__DOT__io_master_rready 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready;
            vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid;
            vlSelf->ysyx_25010030_npc__DOT__io_master_araddr 
                = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_addr;
        }
    }
    if ((1U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        if ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__is_clint_addr) {
                vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr 
                    = vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_addr;
            }
        }
        if ((2U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
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
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bresp = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bid = 0U;
    if (vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) {
        vlSelf->ysyx_25010030_npc__DOT__io_master_rid 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rid;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rresp 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rresp;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rdata 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rdata;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rlast 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rlast;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bready 
            = vlSelf->ysyx_25010030_npc__DOT__io_master_bready;
        vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arvalid 
            = vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid;
    } else {
        vlSelf->ysyx_25010030_npc__DOT__io_master_rid 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rid;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rresp 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rresp;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rdata 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rdata;
        vlSelf->ysyx_25010030_npc__DOT__io_master_rlast 
            = vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rlast;
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
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_awready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_wready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wvalid 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_wvalid));
    vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awvalid 
        = ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
           & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_awvalid));
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
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rdata = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rdata = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_arready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_arready = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid = 0U;
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rlast = 0U;
    if ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
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
    }
    vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast = 0U;
    if ((1U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
        if ((2U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
            if ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))) {
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
}

void Vysyx_25010030_npc___024root___eval_nba(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vysyx_25010030_npc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vysyx_25010030_npc___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vysyx_25010030_npc___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vysyx_25010030_npc___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void Vysyx_25010030_npc___024root___eval_triggers__act(Vysyx_25010030_npc___024root* vlSelf);

bool Vysyx_25010030_npc___024root___eval_phase__act(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vysyx_25010030_npc___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vysyx_25010030_npc___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vysyx_25010030_npc___024root___eval_phase__nba(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vysyx_25010030_npc___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25010030_npc___024root___dump_triggers__ico(Vysyx_25010030_npc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25010030_npc___024root___dump_triggers__nba(Vysyx_25010030_npc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25010030_npc___024root___dump_triggers__act(Vysyx_25010030_npc___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25010030_npc___024root___eval(Vysyx_25010030_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vysyx_25010030_npc___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/furina/ysyx-workbench/npc/simple-SoC/ysyx_25010030_npc.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vysyx_25010030_npc___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vysyx_25010030_npc___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/furina/ysyx-workbench/npc/simple-SoC/ysyx_25010030_npc.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25010030_npc___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/furina/ysyx-workbench/npc/simple-SoC/ysyx_25010030_npc.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vysyx_25010030_npc___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vysyx_25010030_npc___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
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
