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

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ len);

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__0\n"); );
    // Init
    VlUnpacked<IData/*31:0*/, 64> rv32e__DOT__wb_stage__DOT__btb_pc;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        rv32e__DOT__wb_stage__DOT__btb_pc[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 64> rv32e__DOT__wb_stage__DOT__btb_target;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        rv32e__DOT__wb_stage__DOT__btb_target[__Vi0] = 0;
    }
    QData/*63:0*/ rv32e__DOT__wb_stage__DOT__btb_valid;
    rv32e__DOT__wb_stage__DOT__btb_valid = 0;
    IData/*31:0*/ __Vfunc_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read__0__Vfuncout;
    __Vfunc_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_read__14__Vfuncout;
    __Vfunc_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_read__14__Vfuncout = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__pc;
    __Vdly__rv32e__DOT__pc = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__if_stage__DOT__sram_araddr;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_araddr = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__if_ready;
    __Vdly__rv32e__DOT__if_ready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__if_stage__DOT__sram_rready;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_rready = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__if_stage__DOT__btb_pc__v0;
    __Vdlyvset__rv32e__DOT__if_stage__DOT__btb_pc__v0 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__if_stage__DOT__btb_target__v0;
    __Vdlyvset__rv32e__DOT__if_stage__DOT__btb_target__v0 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__if_stage__DOT__pht_counters__v0;
    __Vdlyvset__rv32e__DOT__if_stage__DOT__pht_counters__v0 = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__if_stage__DOT__sram_arready;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_arready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__if_stage__DOT__sram_rvalid;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_rvalid = 0;
    CData/*1:0*/ __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter;
    __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg;
    __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg;
    __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_ready;
    __Vdly__rv32e__DOT__mem_ready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_araddr;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_araddr = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_awaddr;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_awaddr = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_awvalid;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_awvalid = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_wdata;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wdata = 0;
    CData/*3:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_wstrb;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wstrb = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_bready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_bready = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready = 0;
    CData/*1:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_bvalid;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_bvalid = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg = 0;
    CData/*3:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_awready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_awready = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__branch_total;
    __Vdly__rv32e__DOT__branch_total = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__branch_correct;
    __Vdly__rv32e__DOT__branch_correct = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v0;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v0;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v0 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v2;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v2 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v3;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v3 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v4;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v4 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v5;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v5 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v6;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v6 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v7;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v7 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v8;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v8 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v9;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v9 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v10;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v10 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v11;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v11 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v12;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v12 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v13;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v13 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v14;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v14 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v15;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v15 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v16;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v16 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v17;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v17 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v18;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v18 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v19;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v19 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v20;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v20 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v21;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v21 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v22;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v22 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v23;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v23 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v24;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v24 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v25;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v25 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v26;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v26 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v27;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v27 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v28;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v28 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v29;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v29 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v30;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v30 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v31;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v31 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v32;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v32 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v33;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v33 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v34;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v34 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v35;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v35 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v36;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v36 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v37;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v37 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v38;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v38 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v39;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v39 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v40;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v40 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v41;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v41 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v42;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v42 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v43;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v43 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v44;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v44 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v45;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v45 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v46;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v46 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v47;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v47 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v48;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v48 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v49;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v49 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v50;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v50 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v51;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v51 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v52;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v52 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v53;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v53 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v54;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v54 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v55;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v55 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v56;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v56 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v57;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v57 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v58;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v58 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v59;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v59 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v60;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v60 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v61;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v61 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v62;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v62 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v63;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v63 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v64;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v64 = 0;
    CData/*5:0*/ __Vdlyvdim0__rv32e__DOT__wb_stage__DOT__btb_state__v64;
    __Vdlyvdim0__rv32e__DOT__wb_stage__DOT__btb_state__v64 = 0;
    CData/*1:0*/ __Vdlyvval__rv32e__DOT__wb_stage__DOT__btb_state__v64;
    __Vdlyvval__rv32e__DOT__wb_stage__DOT__btb_state__v64 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__btb_state__v64;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__btb_state__v64 = 0;
    CData/*5:0*/ __Vdlyvdim0__rv32e__DOT__wb_stage__DOT__pht_counters__v256;
    __Vdlyvdim0__rv32e__DOT__wb_stage__DOT__pht_counters__v256 = 0;
    CData/*1:0*/ __Vdlyvdim1__rv32e__DOT__wb_stage__DOT__pht_counters__v256;
    __Vdlyvdim1__rv32e__DOT__wb_stage__DOT__pht_counters__v256 = 0;
    CData/*1:0*/ __Vdlyvval__rv32e__DOT__wb_stage__DOT__pht_counters__v256;
    __Vdlyvval__rv32e__DOT__wb_stage__DOT__pht_counters__v256 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v256;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v256 = 0;
    CData/*5:0*/ __Vdlyvdim0__rv32e__DOT__wb_stage__DOT__btb_pc__v64;
    __Vdlyvdim0__rv32e__DOT__wb_stage__DOT__btb_pc__v64 = 0;
    IData/*31:0*/ __Vdlyvval__rv32e__DOT__wb_stage__DOT__btb_pc__v64;
    __Vdlyvval__rv32e__DOT__wb_stage__DOT__btb_pc__v64 = 0;
    CData/*5:0*/ __Vdlyvdim0__rv32e__DOT__wb_stage__DOT__btb_target__v64;
    __Vdlyvdim0__rv32e__DOT__wb_stage__DOT__btb_target__v64 = 0;
    IData/*31:0*/ __Vdlyvval__rv32e__DOT__wb_stage__DOT__btb_target__v64;
    __Vdlyvval__rv32e__DOT__wb_stage__DOT__btb_target__v64 = 0;
    CData/*1:0*/ __Vdly__rv32e__DOT__ghr_update;
    __Vdly__rv32e__DOT__ghr_update = 0;
    CData/*4:0*/ __Vdlyvdim0__rv32e__DOT__wb_stage__DOT__regs__v32;
    __Vdlyvdim0__rv32e__DOT__wb_stage__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__rv32e__DOT__wb_stage__DOT__regs__v32;
    __Vdlyvval__rv32e__DOT__wb_stage__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v32;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vilp;
    // Body
    __Vdlyvset__rv32e__DOT__if_stage__DOT__btb_target__v0 = 0U;
    __Vdlyvset__rv32e__DOT__if_stage__DOT__pht_counters__v0 = 0U;
    __Vdlyvset__rv32e__DOT__if_stage__DOT__btb_pc__v0 = 0U;
    __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg 
        = vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg;
    __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg 
        = vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg;
    __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter 
        = vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_rvalid 
        = vlSelf->rv32e__DOT__if_stage__DOT__sram_rvalid;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_arready 
        = vlSelf->rv32e__DOT__if_stage__DOT__sram_arready;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_awready 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_awready;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_bvalid 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_bvalid;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_bready 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_bready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wstrb 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_wstrb;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wdata 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_wdata;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_awvalid 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_awvalid;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid;
    __Vdly__rv32e__DOT__mem_ready = vlSelf->rv32e__DOT__mem_ready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_awaddr 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_araddr 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr;
    __Vdly__rv32e__DOT__ghr_update = vlSelf->rv32e__DOT__ghr_update;
    __Vdly__rv32e__DOT__branch_correct = vlSelf->rv32e__DOT__branch_correct;
    __Vdly__rv32e__DOT__branch_total = vlSelf->rv32e__DOT__branch_total;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v32 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__btb_state__v64 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v64 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v256 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v0 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v32 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v33 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v34 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v35 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v36 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v37 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v38 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v39 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v40 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v41 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v42 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v43 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v44 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v45 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v46 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v47 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v48 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v49 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v50 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v51 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v52 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v53 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v54 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v55 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v56 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v57 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v58 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v59 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v60 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v61 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v62 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v63 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v0 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v2 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v3 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v4 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v5 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v6 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v7 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v8 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v9 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v10 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v11 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v12 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v13 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v14 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v15 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v16 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v17 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v18 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v19 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v20 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v21 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v22 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v23 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v24 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v25 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v26 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v27 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v28 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v29 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v30 = 0U;
    __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v31 = 0U;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_rready 
        = vlSelf->rv32e__DOT__if_stage__DOT__sram_rready;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid 
        = vlSelf->rv32e__DOT__if_stage__DOT__sram_arvalid;
    __Vdly__rv32e__DOT__if_ready = vlSelf->rv32e__DOT__if_ready;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_araddr 
        = vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr;
    __Vdly__rv32e__DOT__pc = vlSelf->rv32e__DOT__pc;
    if (vlSelf->reset) {
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
                                if ((0U == vlSelf->rv32e__DOT__branch_total)) {
                                    VL_WRITEF("\033[32m[npc] Branch Predictor Hit Rate: N/A (no branches)\033[0m\n");
                                } else {
                                    VL_WRITEF("\033[32m[npc] Total Branch Predictor Hit Rate: %.2f%% (Correct: %0#, Total: %0#)\033[0m\n",
                                              64,(100.0 
                                                  * 
                                                  (VL_ITOR_D_I(32, vlSelf->rv32e__DOT__branch_correct) 
                                                   / 
                                                   VL_ITOR_D_I(32, vlSelf->rv32e__DOT__branch_total))),
                                              32,vlSelf->rv32e__DOT__branch_correct,
                                              32,vlSelf->rv32e__DOT__branch_total);
                                }
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
        __Vdlyvset__rv32e__DOT__if_stage__DOT__btb_target__v0 = 1U;
    }
    if (__Vdlyvset__rv32e__DOT__if_stage__DOT__btb_target__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->rv32e__DOT__if_stage__DOT__btb_target[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->reset) {
        __Vdlyvset__rv32e__DOT__if_stage__DOT__pht_counters__v0 = 1U;
    }
    if (__Vdlyvset__rv32e__DOT__if_stage__DOT__pht_counters__v0) {
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[1U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[1U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[1U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[1U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[2U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[2U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[2U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[2U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[3U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[3U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[3U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[3U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[4U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[4U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[4U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[4U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[5U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[5U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[5U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[5U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[6U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[6U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[6U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[6U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[7U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[7U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[7U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[7U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[8U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[8U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[8U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[8U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[9U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[9U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[9U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[9U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xaU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xaU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xaU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xaU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xbU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xbU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xbU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xbU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xcU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xcU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xcU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xcU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xdU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xdU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xdU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xdU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xeU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xeU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xeU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xeU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xfU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xfU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xfU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0xfU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x10U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x10U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x10U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x10U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x11U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x11U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x11U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x11U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x12U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x12U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x12U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x12U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x13U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x13U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x13U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x13U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x14U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x14U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x14U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x14U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x15U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x15U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x15U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x15U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x16U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x16U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x16U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x16U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x17U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x17U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x17U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x17U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x18U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x18U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x18U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x18U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x19U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x19U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x19U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x19U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1aU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1aU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1aU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1aU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1bU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1bU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1bU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1bU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1cU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1cU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1cU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1cU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1dU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1dU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1dU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1dU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1eU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1eU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1eU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1eU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1fU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1fU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1fU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x1fU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x20U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x20U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x20U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x20U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x21U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x21U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x21U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x21U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x22U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x22U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x22U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x22U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x23U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x23U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x23U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x23U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x24U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x24U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x24U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x24U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x25U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x25U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x25U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x25U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x26U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x26U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x26U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x26U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x27U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x27U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x27U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x27U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x28U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x28U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x28U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x28U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x29U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x29U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x29U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x29U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2aU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2aU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2aU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2aU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2bU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2bU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2bU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2bU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2cU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2cU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2cU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2cU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2dU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2dU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2dU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2dU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2eU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2eU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2eU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2eU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2fU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2fU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2fU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x2fU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x30U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x30U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x30U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x30U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x31U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x31U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x31U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x31U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x32U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x32U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x32U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x32U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x33U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x33U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x33U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x33U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x34U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x34U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x34U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x34U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x35U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x35U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x35U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x35U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x36U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x36U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x36U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x36U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x37U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x37U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x37U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x37U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x38U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x38U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x38U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x38U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x39U][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x39U][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x39U][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x39U][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3aU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3aU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3aU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3aU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3bU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3bU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3bU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3bU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3cU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3cU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3cU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3cU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3dU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3dU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3dU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3dU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3eU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3eU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3eU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3eU][3U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3fU][0U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3fU][1U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3fU][2U] = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__pht_counters[0x3fU][3U] = 0U;
    }
    if (vlSelf->reset) {
        __Vdlyvset__rv32e__DOT__if_stage__DOT__btb_pc__v0 = 1U;
    }
    if (__Vdlyvset__rv32e__DOT__if_stage__DOT__btb_pc__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->rv32e__DOT__if_stage__DOT__btb_pc[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__if_stage__DOT__btb_valid = 0ULL;
        vlSelf->rv32e__DOT__if_stage__DOT__state = 1U;
        vlSelf->rv32e__DOT__if_stage__DOT__next_state = 1U;
        vlSelf->rv32e__DOT__predict_taken = 0U;
        vlSelf->rv32e__DOT__predict_target = 0x80000000U;
        __Vdly__rv32e__DOT__pc = 0x80000000U;
        __Vdly__rv32e__DOT__if_stage__DOT__sram_araddr = 0x80000000U;
        vlSelf->rv32e__DOT__if_valid = 0U;
        __Vdly__rv32e__DOT__if_ready = 1U;
        __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid = 1U;
        __Vdly__rv32e__DOT__if_stage__DOT__sram_rready = 1U;
        vlSelf->rv32e__DOT__if_access_fault = 0U;
        vlSelf->rv32e__DOT__if_fault_addr = 0U;
    } else {
        vlSelf->rv32e__DOT__if_stage__DOT__state = vlSelf->rv32e__DOT__if_stage__DOT__next_state;
        if ((0U == vlSelf->rv32e__DOT__if_stage__DOT__state)) {
            __Vdly__rv32e__DOT__if_ready = 1U;
            vlSelf->rv32e__DOT__if_valid = 0U;
            __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid = 0U;
            __Vdly__rv32e__DOT__if_stage__DOT__sram_rready = 0U;
            if (vlSelf->rv32e__DOT__wb_valid) {
                vlSelf->rv32e__DOT__if_stage__DOT__next_state = 1U;
                if (vlSelf->rv32e__DOT__flush) {
                    __Vdly__rv32e__DOT__pc = vlSelf->rv32e__DOT__actual_target;
                    __Vdly__rv32e__DOT__if_stage__DOT__sram_araddr 
                        = vlSelf->rv32e__DOT__actual_target;
                } else if (vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src) {
                    __Vdly__rv32e__DOT__pc = vlSelf->rv32e__DOT__branch_target;
                    __Vdly__rv32e__DOT__if_stage__DOT__sram_araddr 
                        = vlSelf->rv32e__DOT__branch_target;
                } else if (vlSelf->rv32e__DOT__predict_taken) {
                    __Vdly__rv32e__DOT__pc = vlSelf->rv32e__DOT__predict_target;
                    __Vdly__rv32e__DOT__if_stage__DOT__sram_araddr 
                        = vlSelf->rv32e__DOT__predict_target;
                } else {
                    __Vdly__rv32e__DOT__pc = ((IData)(4U) 
                                              + vlSelf->rv32e__DOT__pc);
                    __Vdly__rv32e__DOT__if_stage__DOT__sram_araddr 
                        = ((IData)(4U) + vlSelf->rv32e__DOT__pc);
                }
                __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid = 1U;
            } else {
                vlSelf->rv32e__DOT__if_stage__DOT__next_state = 0U;
            }
        } else if ((1U == vlSelf->rv32e__DOT__if_stage__DOT__state)) {
            __Vdly__rv32e__DOT__if_ready = 0U;
            vlSelf->rv32e__DOT__if_valid = 0U;
            if (((IData)(vlSelf->rv32e__DOT__if_stage__DOT__sram_arready) 
                 & (IData)(vlSelf->rv32e__DOT__if_stage__DOT__sram_arvalid))) {
                vlSelf->rv32e__DOT__if_stage__DOT__next_state = 2U;
                __Vdly__rv32e__DOT__if_stage__DOT__sram_rready = 1U;
            } else {
                vlSelf->rv32e__DOT__if_stage__DOT__next_state = 1U;
            }
        } else if ((2U == vlSelf->rv32e__DOT__if_stage__DOT__state)) {
            vlSelf->rv32e__DOT__if_valid = 0U;
            __Vdly__rv32e__DOT__if_ready = 0U;
            if (((IData)(vlSelf->rv32e__DOT__if_stage__DOT__sram_rvalid) 
                 & (IData)(vlSelf->rv32e__DOT__if_stage__DOT__sram_rready))) {
                vlSelf->rv32e__DOT__if_stage__DOT__next_state = 3U;
                __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__instr = vlSelf->rv32e__DOT__if_stage__DOT__sram_rdata;
                if ((0U != (IData)(vlSelf->rv32e__DOT__if_stage__DOT__sram_rresp))) {
                    vlSelf->rv32e__DOT__if_access_fault = 1U;
                    vlSelf->rv32e__DOT__if_fault_addr 
                        = vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr;
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
            __Vdly__rv32e__DOT__if_ready = 0U;
            vlSelf->rv32e__DOT__if_valid = (1U & (~ (IData)(vlSelf->rv32e__DOT__flush)));
            __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid = 0U;
        } else {
            vlSelf->rv32e__DOT__if_stage__DOT__next_state = 0U;
            __Vdly__rv32e__DOT__if_ready = 0U;
            vlSelf->rv32e__DOT__if_valid = 0U;
            __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid = 0U;
            __Vdly__rv32e__DOT__if_stage__DOT__sram_rready = 0U;
        }
    }
    vlSelf->rv32e__DOT__id_stage__DOT__immI = (((- (IData)(
                                                           (vlSelf->rv32e__DOT__instr 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->rv32e__DOT__instr 
                                                  >> 0x14U));
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__sram_state = 0U;
        __Vdly__rv32e__DOT__if_stage__DOT__sram_arready = 1U;
        __Vdly__rv32e__DOT__if_stage__DOT__sram_rvalid = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__sram_rdata = 0U;
        __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter = 0U;
        __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg = 0U;
        __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__sram_rresp = 0U;
    } else {
        vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__sram_state 
            = vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state;
        if ((0U == vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__sram_state)) {
            __Vdly__rv32e__DOT__if_stage__DOT__sram_rvalid = 0U;
            __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter = 2U;
            if (((IData)(vlSelf->rv32e__DOT__if_stage__DOT__sram_arvalid) 
                 & (IData)(vlSelf->rv32e__DOT__if_stage__DOT__sram_arready))) {
                vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state = 1U;
                __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg 
                    = vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr;
            } else {
                vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state = 0U;
            }
            __Vdly__rv32e__DOT__if_stage__DOT__sram_arready = 1U;
        } else if ((1U == vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__sram_state)) {
            if ((0U < (IData)(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter))) {
                __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter 
                    = (3U & ((IData)(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter) 
                             - (IData)(1U)));
                vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state = 1U;
            } else {
                vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state = 2U;
                if (((0x80000000U <= vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr) 
                     & (0x8fffffffU >= vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg, 4U, __Vfunc_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read__0__Vfuncout);
                    __Vdly__rv32e__DOT__if_stage__DOT__sram_arready = 0U;
                    __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg 
                        = __Vfunc_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read__0__Vfuncout;
                    vlSelf->rv32e__DOT__if_stage__DOT__sram_rresp = 0U;
                } else {
                    __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg = 0U;
                    vlSelf->rv32e__DOT__if_stage__DOT__sram_rresp = 2U;
                }
            }
        } else if ((2U == vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__sram_state)) {
            __Vdly__rv32e__DOT__if_stage__DOT__sram_arready = 0U;
            vlSelf->rv32e__DOT__if_stage__DOT__sram_rdata 
                = vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg;
            if (((IData)(vlSelf->rv32e__DOT__if_stage__DOT__sram_rready) 
                 & (IData)(vlSelf->rv32e__DOT__if_stage__DOT__sram_rvalid))) {
                vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state = 0U;
                vlSelf->rv32e__DOT__if_stage__DOT__sram_rresp = 0U;
            } else {
                vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state = 2U;
            }
            __Vdly__rv32e__DOT__if_stage__DOT__sram_rvalid = 1U;
        } else {
            vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state = 0U;
            __Vdly__rv32e__DOT__if_stage__DOT__sram_arready = 1U;
            __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg = 0U;
            __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg = 0U;
        }
    }
    vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter 
        = __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter;
    vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg 
        = __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg;
    vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg 
        = __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg;
    vlSelf->rv32e__DOT__if_stage__DOT__sram_arvalid 
        = __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid;
    vlSelf->rv32e__DOT__if_stage__DOT__sram_arready 
        = __Vdly__rv32e__DOT__if_stage__DOT__sram_arready;
    vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr 
        = __Vdly__rv32e__DOT__if_stage__DOT__sram_araddr;
    vlSelf->rv32e__DOT__if_stage__DOT__sram_rready 
        = __Vdly__rv32e__DOT__if_stage__DOT__sram_rready;
    vlSelf->rv32e__DOT__if_stage__DOT__sram_rvalid 
        = __Vdly__rv32e__DOT__if_stage__DOT__sram_rvalid;
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
        vlSelf->rv32e__DOT__flush = 0U;
        vlSelf->rv32e__DOT__actual_target = 0U;
        __Vdly__rv32e__DOT__branch_total = 0U;
        __Vdly__rv32e__DOT__branch_correct = 0U;
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v0 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffffffffffffeULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v0 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffffffffffffdULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v2 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffffffffffffbULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v3 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffffffffffff7ULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v4 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffffffffffffefULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v5 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffffffffffffdfULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v6 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffffffffffffbfULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v7 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffffffffffff7fULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v8 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffffffffffeffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v9 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffffffffffdffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v10 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffffffffffbffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v11 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffffffffff7ffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v12 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffffffffffefffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v13 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffffffffffdfffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v14 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffffffffffbfffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v15 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffffffffff7fffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v16 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffffffffeffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v17 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffffffffdffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v18 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffffffffbffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v19 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffffffff7ffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v20 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffffffffefffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v21 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffffffffdfffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v22 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffffffffbfffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v23 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffffffff7fffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v24 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffffffeffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v25 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffffffdffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v26 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffffffbffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v27 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffffff7ffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v28 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffffffefffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v29 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffffffdfffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v30 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffffffbfffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v31 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffffff7fffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v32 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffffeffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v33 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffffdffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v34 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffffbffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v35 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffff7ffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v36 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffffefffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v37 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffffdfffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v38 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffffbfffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v39 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffff7fffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v40 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffeffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v41 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffdffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v42 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffffbffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v43 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffff7ffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v44 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffefffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v45 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffdfffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v46 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffffbfffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v47 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffff7fffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v48 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffeffffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v49 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffdffffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v50 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfffbffffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v51 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfff7ffffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v52 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffefffffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v53 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffdfffffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v54 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xffbfffffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v55 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xff7fffffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v56 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfeffffffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v57 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfdffffffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v58 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xfbffffffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v59 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xf7ffffffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v60 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xefffffffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v61 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xdfffffffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v62 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0xbfffffffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v63 = 1U;
        rv32e__DOT__wb_stage__DOT__btb_valid = (0x7fffffffffffffffULL 
                                                & rv32e__DOT__wb_stage__DOT__btb_valid);
        __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v64 = 1U;
    } else {
        vlSelf->rv32e__DOT__wb_stage__DOT__state = vlSelf->rv32e__DOT__wb_stage__DOT__next_state;
        if ((0U == vlSelf->rv32e__DOT__wb_stage__DOT__state)) {
            vlSelf->rv32e__DOT__wb_ready = 1U;
            vlSelf->rv32e__DOT__wb_valid = 0U;
            if (vlSelf->rv32e__DOT__mem_valid) {
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
                vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb 
                    = vlSelf->rv32e__DOT__rd;
                vlSelf->rv32e__DOT__wb_stage__DOT__next_state 
                    = ((IData)(vlSelf->rv32e__DOT__if_ready)
                        ? 1U : 0U);
                vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb_pre 
                    = vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb;
                if ((0x63U == (IData)(vlSelf->rv32e__DOT__opcode))) {
                    if (vlSelf->rv32e__DOT__take_branch) {
                        __Vdlyvval__rv32e__DOT__wb_stage__DOT__btb_state__v64 
                            = (3U & ((3U == vlSelf->rv32e__DOT__wb_stage__DOT__btb_state
                                      [(0x3fU & (vlSelf->rv32e__DOT__pc 
                                                 >> 2U))])
                                      ? 3U : ((IData)(1U) 
                                              + vlSelf->rv32e__DOT__wb_stage__DOT__btb_state
                                              [(0x3fU 
                                                & (vlSelf->rv32e__DOT__pc 
                                                   >> 2U))])));
                        __Vdlyvval__rv32e__DOT__wb_stage__DOT__pht_counters__v256 
                            = (3U & ((3U == vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters
                                      [(0x3fU & (vlSelf->rv32e__DOT__pc 
                                                 >> 2U))]
                                      [vlSelf->rv32e__DOT__ghr_reg])
                                      ? 3U : ((IData)(1U) 
                                              + vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters
                                              [(0x3fU 
                                                & (vlSelf->rv32e__DOT__pc 
                                                   >> 2U))]
                                              [vlSelf->rv32e__DOT__ghr_reg])));
                        vlSelf->rv32e__DOT__actual_target 
                            = (vlSelf->rv32e__DOT__pc 
                               + vlSelf->rv32e__DOT__imm);
                    } else {
                        __Vdlyvval__rv32e__DOT__wb_stage__DOT__btb_state__v64 
                            = (3U & ((0U == vlSelf->rv32e__DOT__wb_stage__DOT__btb_state
                                      [(0x3fU & (vlSelf->rv32e__DOT__pc 
                                                 >> 2U))])
                                      ? 0U : (vlSelf->rv32e__DOT__wb_stage__DOT__btb_state
                                              [(0x3fU 
                                                & (vlSelf->rv32e__DOT__pc 
                                                   >> 2U))] 
                                              - (IData)(1U))));
                        __Vdlyvval__rv32e__DOT__wb_stage__DOT__pht_counters__v256 
                            = (3U & ((0U == vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters
                                      [(0x3fU & (vlSelf->rv32e__DOT__pc 
                                                 >> 2U))]
                                      [vlSelf->rv32e__DOT__ghr_reg])
                                      ? 0U : (vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters
                                              [(0x3fU 
                                                & (vlSelf->rv32e__DOT__pc 
                                                   >> 2U))]
                                              [vlSelf->rv32e__DOT__ghr_reg] 
                                              - (IData)(1U))));
                        vlSelf->rv32e__DOT__actual_target 
                            = ((IData)(4U) + vlSelf->rv32e__DOT__pc);
                    }
                    __Vdlyvset__rv32e__DOT__wb_stage__DOT__btb_state__v64 = 1U;
                    __Vdlyvdim0__rv32e__DOT__wb_stage__DOT__btb_state__v64 
                        = (0x3fU & (vlSelf->rv32e__DOT__pc 
                                    >> 2U));
                    __Vdly__rv32e__DOT__branch_total 
                        = ((IData)(1U) + vlSelf->rv32e__DOT__branch_total);
                    __Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v256 = 1U;
                    __Vdlyvdim1__rv32e__DOT__wb_stage__DOT__pht_counters__v256 
                        = vlSelf->rv32e__DOT__ghr_reg;
                    __Vdlyvdim0__rv32e__DOT__wb_stage__DOT__pht_counters__v256 
                        = (0x3fU & (vlSelf->rv32e__DOT__pc 
                                    >> 2U));
                    __Vdlyvval__rv32e__DOT__wb_stage__DOT__btb_pc__v64 
                        = vlSelf->rv32e__DOT__pc;
                    __Vdlyvdim0__rv32e__DOT__wb_stage__DOT__btb_pc__v64 
                        = (0x3fU & (vlSelf->rv32e__DOT__pc 
                                    >> 2U));
                    __Vdlyvval__rv32e__DOT__wb_stage__DOT__btb_target__v64 
                        = (vlSelf->rv32e__DOT__pc + vlSelf->rv32e__DOT__imm);
                    __Vdlyvdim0__rv32e__DOT__wb_stage__DOT__btb_target__v64 
                        = (0x3fU & (vlSelf->rv32e__DOT__pc 
                                    >> 2U));
                    rv32e__DOT__wb_stage__DOT__btb_valid 
                        = (rv32e__DOT__wb_stage__DOT__btb_valid 
                           | ((QData)((IData)(1U)) 
                              << (0x3fU & (vlSelf->rv32e__DOT__pc 
                                           >> 2U))));
                    if (((IData)(vlSelf->rv32e__DOT__take_branch) 
                         == (IData)(vlSelf->rv32e__DOT__predict_taken))) {
                        __Vdly__rv32e__DOT__branch_correct 
                            = ((IData)(1U) + vlSelf->rv32e__DOT__branch_correct);
                    }
                    vlSelf->rv32e__DOT__flush = ((IData)(vlSelf->rv32e__DOT__take_branch) 
                                                 != (IData)(vlSelf->rv32e__DOT__predict_taken));
                    __Vdly__rv32e__DOT__ghr_update 
                        = ((2U & ((IData)(vlSelf->rv32e__DOT__ghr_reg) 
                                  << 1U)) | (IData)(vlSelf->rv32e__DOT__take_branch));
                } else if ((0x6fU == (IData)(vlSelf->rv32e__DOT__opcode))) {
                    vlSelf->rv32e__DOT__flush = 1U;
                    vlSelf->rv32e__DOT__actual_target 
                        = (vlSelf->rv32e__DOT__pc + vlSelf->rv32e__DOT__imm);
                    __Vdly__rv32e__DOT__ghr_update 
                        = vlSelf->rv32e__DOT__ghr_reg;
                } else if (((0x67U == (IData)(vlSelf->rv32e__DOT__opcode)) 
                            & (0U == (IData)(vlSelf->rv32e__DOT__func3)))) {
                    vlSelf->rv32e__DOT__flush = 1U;
                    vlSelf->rv32e__DOT__actual_target 
                        = (0xfffffffeU & (vlSelf->rv32e__DOT__rs1_val 
                                          + vlSelf->rv32e__DOT__imm));
                    __Vdly__rv32e__DOT__ghr_update 
                        = vlSelf->rv32e__DOT__ghr_reg;
                } else {
                    vlSelf->rv32e__DOT__flush = 0U;
                    vlSelf->rv32e__DOT__actual_target 
                        = ((IData)(4U) + vlSelf->rv32e__DOT__pc);
                    __Vdly__rv32e__DOT__ghr_update 
                        = vlSelf->rv32e__DOT__ghr_reg;
                }
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
                vlSelf->rv32e__DOT__flush = 0U;
                vlSelf->rv32e__DOT__actual_target = 
                    ((IData)(4U) + vlSelf->rv32e__DOT__pc);
                __Vdly__rv32e__DOT__ghr_update = vlSelf->rv32e__DOT__ghr_reg;
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
            vlSelf->rv32e__DOT__flush = 0U;
            vlSelf->rv32e__DOT__actual_target = 0U;
        }
    }
    vlSelf->rv32e__DOT__if_ready = __Vdly__rv32e__DOT__if_ready;
    vlSelf->rv32e__DOT__branch_total = __Vdly__rv32e__DOT__branch_total;
    vlSelf->rv32e__DOT__branch_correct = __Vdly__rv32e__DOT__branch_correct;
    vlSelf->rv32e__DOT__branch_target = ((IData)(vlSelf->rv32e__DOT__is_jalr)
                                          ? vlSelf->rv32e__DOT__jalr_target
                                          : vlSelf->rv32e__DOT__jal_target);
    vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src 
        = ((IData)(vlSelf->rv32e__DOT__is_jal) | ((IData)(vlSelf->rv32e__DOT__is_jalr) 
                                                  | (IData)(vlSelf->rv32e__DOT__take_branch)));
    vlSelf->rv32e__DOT__pc = __Vdly__rv32e__DOT__pc;
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v0) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v0) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[1U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[1U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0U][1U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v2) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[2U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[2U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0U][2U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v3) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[3U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[3U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0U][3U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v4) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[4U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[4U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[4U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[4U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[1U][0U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v5) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[5U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[5U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[5U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[5U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[1U][1U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v6) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[6U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[6U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[6U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[6U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[1U][2U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v7) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[7U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[7U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[7U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[7U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[1U][3U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v8) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[8U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[8U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[8U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[8U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[2U][0U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v9) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[9U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[9U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[9U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[9U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[2U][1U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v10) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0xaU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0xaU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0xaU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0xaU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[2U][2U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v11) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0xbU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0xbU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0xbU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0xbU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[2U][3U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v12) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0xcU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0xcU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0xcU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0xcU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[3U][0U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v13) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0xdU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0xdU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0xdU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0xdU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[3U][1U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v14) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0xeU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0xeU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0xeU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0xeU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[3U][2U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v15) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0xfU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0xfU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0xfU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0xfU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[3U][3U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v16) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x10U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x10U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x10U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x10U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[4U][0U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v17) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x11U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x11U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x11U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x11U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[4U][1U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v18) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x12U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x12U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x12U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x12U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[4U][2U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v19) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x13U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x13U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x13U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x13U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[4U][3U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v20) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x14U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x14U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x14U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x14U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[5U][0U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v21) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x15U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x15U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x15U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x15U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[5U][1U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v22) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x16U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x16U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x16U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x16U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[5U][2U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v23) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x17U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x17U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x17U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x17U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[5U][3U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v24) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x18U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x18U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x18U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x18U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[6U][0U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v25) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x19U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x19U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x19U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x19U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[6U][1U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v26) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x1aU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x1aU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x1aU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x1aU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[6U][2U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v27) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x1bU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x1bU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x1bU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x1bU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[6U][3U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v28) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x1cU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x1cU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x1cU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x1cU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[7U][0U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v29) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x1dU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x1dU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x1dU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x1dU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[7U][1U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v30) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x1eU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x1eU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x1eU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x1eU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[7U][2U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v31) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[0x1fU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x1fU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x1fU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x1fU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[7U][3U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__regs__v32) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[__Vdlyvdim0__rv32e__DOT__wb_stage__DOT__regs__v32] 
            = __Vdlyvval__rv32e__DOT__wb_stage__DOT__regs__v32;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v32) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x20U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x20U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x20U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[8U][0U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v33) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x21U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x21U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x21U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[8U][1U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v34) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x22U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x22U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x22U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[8U][2U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v35) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x23U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x23U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x23U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[8U][3U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v36) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x24U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x24U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x24U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[9U][0U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v37) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x25U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x25U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x25U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[9U][1U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v38) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x26U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x26U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x26U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[9U][2U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v39) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x27U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x27U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x27U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[9U][3U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v40) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x28U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x28U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x28U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xaU][0U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v41) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x29U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x29U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x29U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xaU][1U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v42) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x2aU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x2aU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x2aU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xaU][2U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v43) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x2bU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x2bU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x2bU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xaU][3U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v44) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x2cU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x2cU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x2cU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xbU][0U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v45) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x2dU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x2dU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x2dU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xbU][1U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v46) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x2eU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x2eU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x2eU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xbU][2U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v47) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x2fU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x2fU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x2fU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xbU][3U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v48) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x30U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x30U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x30U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xcU][0U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v49) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x31U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x31U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x31U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xcU][1U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v50) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x32U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x32U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x32U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xcU][2U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v51) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x33U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x33U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x33U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xcU][3U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v52) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x34U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x34U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x34U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xdU][0U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v53) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x35U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x35U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x35U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xdU][1U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v54) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x36U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x36U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x36U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xdU][2U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v55) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x37U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x37U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x37U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xdU][3U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v56) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x38U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x38U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x38U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xeU][0U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v57) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x39U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x39U] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x39U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xeU][1U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v58) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x3aU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x3aU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x3aU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xeU][2U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v59) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x3bU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x3bU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x3bU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xeU][3U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v60) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x3cU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x3cU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x3cU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xfU][0U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v61) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x3dU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x3dU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x3dU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xfU][1U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v62) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x3eU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x3eU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x3eU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xfU][2U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v63) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[0x3fU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_target[0x3fU] = 0U;
        rv32e__DOT__wb_stage__DOT__btb_pc[0x3fU] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0xfU][3U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__btb_state__v64) {
        vlSelf->rv32e__DOT__wb_stage__DOT__btb_state[__Vdlyvdim0__rv32e__DOT__wb_stage__DOT__btb_state__v64] 
            = __Vdlyvval__rv32e__DOT__wb_stage__DOT__btb_state__v64;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v64) {
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x10U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x10U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x10U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x10U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x11U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x11U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x11U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x11U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x12U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x12U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x12U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x12U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x13U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x13U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x13U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x13U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x14U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x14U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x14U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x14U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x15U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x15U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x15U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x15U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x16U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x16U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x16U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x16U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x17U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x17U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x17U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x17U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x18U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x18U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x18U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x18U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x19U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x19U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x19U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x19U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1aU][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1aU][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1aU][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1aU][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1bU][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1bU][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1bU][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1bU][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1cU][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1cU][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1cU][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1cU][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1dU][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1dU][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1dU][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1dU][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1eU][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1eU][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1eU][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1eU][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1fU][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1fU][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1fU][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x1fU][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x20U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x20U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x20U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x20U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x21U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x21U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x21U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x21U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x22U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x22U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x22U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x22U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x23U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x23U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x23U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x23U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x24U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x24U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x24U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x24U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x25U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x25U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x25U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x25U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x26U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x26U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x26U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x26U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x27U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x27U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x27U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x27U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x28U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x28U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x28U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x28U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x29U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x29U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x29U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x29U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2aU][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2aU][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2aU][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2aU][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2bU][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2bU][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2bU][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2bU][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2cU][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2cU][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2cU][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2cU][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2dU][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2dU][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2dU][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2dU][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2eU][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2eU][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2eU][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2eU][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2fU][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2fU][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2fU][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x2fU][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x30U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x30U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x30U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x30U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x31U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x31U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x31U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x31U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x32U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x32U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x32U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x32U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x33U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x33U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x33U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x33U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x34U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x34U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x34U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x34U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x35U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x35U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x35U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x35U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x36U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x36U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x36U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x36U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x37U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x37U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x37U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x37U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x38U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x38U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x38U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x38U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x39U][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x39U][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x39U][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x39U][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3aU][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3aU][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3aU][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3aU][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3bU][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3bU][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3bU][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3bU][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3cU][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3cU][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3cU][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3cU][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3dU][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3dU][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3dU][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3dU][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3eU][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3eU][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3eU][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3eU][3U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3fU][0U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3fU][1U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3fU][2U] = 0U;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[0x3fU][3U] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__wb_stage__DOT__pht_counters__v256) {
        rv32e__DOT__wb_stage__DOT__btb_target[__Vdlyvdim0__rv32e__DOT__wb_stage__DOT__btb_target__v64] 
            = __Vdlyvval__rv32e__DOT__wb_stage__DOT__btb_target__v64;
        rv32e__DOT__wb_stage__DOT__btb_pc[__Vdlyvdim0__rv32e__DOT__wb_stage__DOT__btb_pc__v64] 
            = __Vdlyvval__rv32e__DOT__wb_stage__DOT__btb_pc__v64;
        vlSelf->rv32e__DOT__wb_stage__DOT__pht_counters[__Vdlyvdim0__rv32e__DOT__wb_stage__DOT__pht_counters__v256][__Vdlyvdim1__rv32e__DOT__wb_stage__DOT__pht_counters__v256] 
            = __Vdlyvval__rv32e__DOT__wb_stage__DOT__pht_counters__v256;
    }
    vlSelf->rv32e__DOT__predict_target = ((((IData)(
                                                    (vlSelf->rv32e__DOT__if_stage__DOT__btb_valid 
                                                     >> 
                                                     (0x3fU 
                                                      & (vlSelf->rv32e__DOT__pc 
                                                         >> 2U)))) 
                                            & (vlSelf->rv32e__DOT__if_stage__DOT__btb_pc
                                               [(0x3fU 
                                                 & (vlSelf->rv32e__DOT__pc 
                                                    >> 2U))] 
                                               == vlSelf->rv32e__DOT__pc)) 
                                           & (1U == vlSelf->rv32e__DOT__if_stage__DOT__state))
                                           ? vlSelf->rv32e__DOT__if_stage__DOT__btb_target
                                          [(0x3fU & 
                                            (vlSelf->rv32e__DOT__pc 
                                             >> 2U))]
                                           : ((IData)(4U) 
                                              + vlSelf->rv32e__DOT__pc));
    vlSelf->rv32e__DOT__rs1_val = ((0U == (IData)(vlSelf->rv32e__DOT__rs1))
                                    ? 0U : vlSelf->rv32e__DOT__wb_stage__DOT__regs
                                   [vlSelf->rv32e__DOT__rs1]);
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__ghr_reg = 0U;
        vlSelf->rv32e__DOT__ghr_update = __Vdly__rv32e__DOT__ghr_update;
        vlSelf->rv32e__DOT__mem_stage__DOT__state = 0U;
        vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 0U;
        __Vdly__rv32e__DOT__mem_ready = 1U;
        vlSelf->rv32e__DOT__mem_valid = 0U;
        vlSelf->rv32e__DOT__data_out = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_araddr = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_awaddr = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_awvalid = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_wdata = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_wstrb = 0xfU;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_bready = 0U;
        vlSelf->rv32e__DOT__load_access_fault = 0U;
        vlSelf->rv32e__DOT__store_access_fault = 0U;
        vlSelf->rv32e__DOT__mem_fault_addr = 0U;
    } else {
        if (vlSelf->rv32e__DOT__wb_valid) {
            vlSelf->rv32e__DOT__ghr_reg = vlSelf->rv32e__DOT__ghr_update;
        }
        vlSelf->rv32e__DOT__ghr_update = __Vdly__rv32e__DOT__ghr_update;
        vlSelf->rv32e__DOT__mem_stage__DOT__state = vlSelf->rv32e__DOT__mem_stage__DOT__next_state;
        if ((0U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            vlSelf->rv32e__DOT__mem_valid = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_bready = 0U;
            vlSelf->rv32e__DOT__load_access_fault = 0U;
            vlSelf->rv32e__DOT__store_access_fault = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_awvalid = 0U;
            if (((IData)(vlSelf->rv32e__DOT__ex_valid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_ready))) {
                if (vlSelf->rv32e__DOT__MemRead) {
                    vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 1U;
                    __Vdly__rv32e__DOT__mem_stage__DOT__sram_araddr 
                        = vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr;
                    __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid = 1U;
                } else if (vlSelf->rv32e__DOT__MemWrite) {
                    vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 3U;
                    __Vdly__rv32e__DOT__mem_stage__DOT__sram_awaddr 
                        = vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr;
                    __Vdly__rv32e__DOT__mem_stage__DOT__sram_awvalid = 1U;
                    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wdata 
                        = vlSelf->rv32e__DOT__rs2_val;
                    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wstrb 
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
                = (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready) 
                    & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid))
                    ? 2U : 1U);
            __Vdly__rv32e__DOT__mem_ready = 0U;
            vlSelf->rv32e__DOT__mem_valid = 0U;
        } else if ((2U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            __Vdly__rv32e__DOT__mem_ready = 0U;
            vlSelf->rv32e__DOT__mem_valid = 0U;
            if (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready))) {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 6U;
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid = 0U;
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
                                                                & (vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->rv32e__DOT__MemLen))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->rv32e__DOT__MemLen))
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata)
                                                   : vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->rv32e__DOT__MemLen))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata))
                                                   : 
                                                  (0xffU 
                                                   & vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata))));
                if ((0U != (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rresp))) {
                    vlSelf->rv32e__DOT__load_access_fault = 1U;
                    vlSelf->rv32e__DOT__mem_fault_addr 
                        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr;
                } else {
                    vlSelf->rv32e__DOT__load_access_fault = 0U;
                    vlSelf->rv32e__DOT__mem_fault_addr = 0U;
                }
            } else {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 2U;
            }
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready = 1U;
        } else if ((3U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            __Vdly__rv32e__DOT__mem_ready = 0U;
            vlSelf->rv32e__DOT__mem_valid = 0U;
            if (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awready) 
                 & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awvalid))) {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 4U;
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid = 1U;
            } else {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 3U;
            }
        } else if ((4U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            __Vdly__rv32e__DOT__mem_ready = 0U;
            vlSelf->rv32e__DOT__mem_valid = 0U;
            if (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready) 
                 & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid))) {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 5U;
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_awvalid = 0U;
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_bready = 1U;
            } else {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 4U;
            }
        } else if ((5U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            __Vdly__rv32e__DOT__mem_ready = 0U;
            vlSelf->rv32e__DOT__mem_valid = 0U;
            if (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bvalid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bready))) {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 6U;
                if ((0U != (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bresp))) {
                    vlSelf->rv32e__DOT__store_access_fault = 1U;
                    vlSelf->rv32e__DOT__mem_fault_addr 
                        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr;
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
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_bready = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_awvalid = 0U;
        } else {
            vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 0U;
            __Vdly__rv32e__DOT__mem_ready = 0U;
            vlSelf->rv32e__DOT__mem_valid = 0U;
        }
    }
    vlSelf->rv32e__DOT__mem_ready = __Vdly__rv32e__DOT__mem_ready;
    vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr 
        = (vlSelf->rv32e__DOT__imm + vlSelf->rv32e__DOT__rs1_val);
    vlSelf->rv32e__DOT__rs2_val = ((0U == (IData)(vlSelf->rv32e__DOT__rs2))
                                    ? 0U : vlSelf->rv32e__DOT__wb_stage__DOT__regs
                                   [vlSelf->rv32e__DOT__rs2]);
    vlSelf->rv32e__DOT__predict_taken = ((((IData)(
                                                   (vlSelf->rv32e__DOT__if_stage__DOT__btb_valid 
                                                    >> 
                                                    (0x3fU 
                                                     & (vlSelf->rv32e__DOT__pc 
                                                        >> 2U)))) 
                                           & (vlSelf->rv32e__DOT__if_stage__DOT__btb_pc
                                              [(0x3fU 
                                                & (vlSelf->rv32e__DOT__pc 
                                                   >> 2U))] 
                                              == vlSelf->rv32e__DOT__pc)) 
                                          & (1U == vlSelf->rv32e__DOT__if_stage__DOT__state)) 
                                         & (vlSelf->rv32e__DOT__if_stage__DOT__pht_counters
                                            [(0x3fU 
                                              & (vlSelf->rv32e__DOT__pc 
                                                 >> 2U))]
                                            [vlSelf->rv32e__DOT__ghr_reg] 
                                            >> 1U));
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
    if (vlSelf->reset) {
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready = 0U;
        vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready = 0U;
        vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg = 0U;
        vlSelf->rv32e__DOT__mem_stage__DOT__sram_rresp = 0U;
        vlSelf->rv32e__DOT__mem_stage__DOT__sram_bresp = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_bvalid = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg = 0U;
    } else {
        if ((0U == vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state)) {
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready = 1U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_awready = 1U;
            vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_bvalid = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter = 2U;
            if (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready))) {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg 
                    = vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr;
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready = 0U;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 1U;
            } else if (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awvalid) 
                        & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awready))) {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg 
                    = vlSelf->rv32e__DOT__mem_stage__DOT__sram_wdata;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg 
                    = vlSelf->rv32e__DOT__mem_stage__DOT__sram_wstrb;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg 
                    = vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr;
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_awready = 0U;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 3U;
            } else {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 0U;
            }
        } else if ((1U == vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state)) {
            if ((0U < (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter))) {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter 
                    = (3U & ((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter) 
                             - (IData)(1U)));
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 1U;
            } else {
                if (vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__addr_valid) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg, 4U, __Vfunc_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_read__14__Vfuncout);
                    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg 
                        = __Vfunc_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_read__14__Vfuncout;
                    vlSelf->rv32e__DOT__mem_stage__DOT__sram_rresp = 0U;
                } else {
                    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg = 0U;
                    vlSelf->rv32e__DOT__mem_stage__DOT__sram_rresp = 2U;
                }
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 2U;
            }
        } else if ((2U == vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state)) {
            if (vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready) {
                vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata 
                    = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg;
                vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid = 1U;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg = 0U;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 0U;
            } else {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 2U;
            }
        } else if ((3U == vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state)) {
            if ((0U < (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter))) {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter 
                    = (3U & ((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter) 
                             - (IData)(1U)));
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 3U;
            } else {
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready = 1U;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 4U;
            }
        } else if ((4U == vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state)) {
            if (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready))) {
                if (vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__addr_valid) {
                    if ((1U == (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg, vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg, 1U);
                    } else if ((3U == (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg, vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg, 2U);
                    } else if ((0xfU == (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg, vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg, 4U);
                    } else {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg, vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg, 4U);
                    }
                    vlSelf->rv32e__DOT__mem_stage__DOT__sram_bresp = 0U;
                } else {
                    vlSelf->rv32e__DOT__mem_stage__DOT__sram_bresp = 2U;
                }
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_bvalid = 1U;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 5U;
            } else {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 4U;
            }
        } else if ((5U == vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state)) {
            if (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bvalid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bready))) {
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_awready = 1U;
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_bvalid = 0U;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 0U;
            } else {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 5U;
            }
        } else {
            __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 0U;
        }
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state 
            = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state;
    }
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_wdata 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_wdata;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_wstrb 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_wstrb;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_awvalid 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_awvalid;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_awready 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_awready;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_bvalid 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_bvalid;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_bready 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_bready;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_araddr;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_awaddr;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__addr_valid 
        = (((0x80000000U <= vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr) 
            & (0x8fffffffU >= vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr)) 
           | (((0x80000000U <= vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr) 
               & (0x8fffffffU >= vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr)) 
              | (((0x10000000U <= vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr) 
                  & (0x10000007U >= vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr)) 
                 | (((0x10000000U <= vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr) 
                     & (0x10000007U >= vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr)) 
                    | ((0x10002000U <= vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr) 
                       & (0x10002007U >= vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr))))));
}

void Vrv32e___024root___eval_nba(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrv32e___024root___nba_sequent__TOP__0(vlSelf);
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
    VlTriggerVec<1> __VpreTriggered;
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
