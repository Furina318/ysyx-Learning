// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32e.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32e___024root.h"

VL_ATTR_COLD void Vrv32e___024root___eval_static(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vrv32e___024root___eval_initial(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
}

VL_ATTR_COLD void Vrv32e___024root___eval_final(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vrv32e___024root___eval_triggers__stl(Vrv32e___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__stl(Vrv32e___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___eval_stl(Vrv32e___024root* vlSelf);

VL_ATTR_COLD void Vrv32e___024root___eval_settle(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vrv32e___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vrv32e___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/furina/ysyx-workbench/npc/vsrc/rv32e.v", 27, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vrv32e___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__stl(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrv32e___024root___stl_sequent__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->rv32e__DOT__id_stage__DOT__immU = (0xfffff000U 
                                               & vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
    vlSelf->rv32e__DOT__id_stage__DOT__immJ = (((- (IData)(
                                                           (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                            >> 0x1fU))) 
                                                << 0x14U) 
                                               | ((0xff000U 
                                                   & vlSelf->rv32e__DOT__id_stage__DOT__instr_reg) 
                                                  | ((0x800U 
                                                      & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                           >> 0x14U)))));
    vlSelf->rv32e__DOT__id_stage__DOT__immI = (((- (IData)(
                                                           (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                  >> 0x14U));
    vlSelf->rv32e__DOT__id_stage__DOT__immS = (((- (IData)(
                                                           (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                        >> 7U))));
    vlSelf->rv32e__DOT__id_stage__DOT__immB = (((- (IData)(
                                                           (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0x800U 
                                                   & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                           >> 7U)))));
    vlSelf->rv32e__DOT__rs2_val = ((0U == (IData)(vlSelf->rv32e__DOT__rs2))
                                    ? 0U : vlSelf->rv32e__DOT__wb_stage__DOT__regs
                                   [vlSelf->rv32e__DOT__rs2]);
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__addr_valid 
        = (((0x80000000U <= vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr) 
            & (0x8fffffffU >= vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr)) 
           | ((0x80000000U <= vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr) 
              & (0x8fffffffU >= vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr)));
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
    vlSelf->rv32e__DOT__branch_target = ((IData)(vlSelf->rv32e__DOT__is_jalr)
                                          ? vlSelf->rv32e__DOT__jalr_target
                                          : vlSelf->rv32e__DOT__jal_target);
    vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src 
        = ((IData)(vlSelf->rv32e__DOT__is_jal) | ((IData)(vlSelf->rv32e__DOT__is_jalr) 
                                                  | (IData)(vlSelf->rv32e__DOT__take_branch)));
    vlSelf->rv32e__DOT__rs1_val = ((0U == (IData)(vlSelf->rv32e__DOT__rs1))
                                    ? 0U : vlSelf->rv32e__DOT__wb_stage__DOT__regs
                                   [vlSelf->rv32e__DOT__rs1]);
    vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr 
        = (vlSelf->rv32e__DOT__imm + vlSelf->rv32e__DOT__rs1_val);
}

VL_ATTR_COLD void Vrv32e___024root___eval_stl(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vrv32e___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__act(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__nba(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrv32e___024root___ctor_var_reset(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__if_ready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__wb_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__if_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__if_access_fault = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__if_fault_addr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->rv32e__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__func3 = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__func7 = VL_RAND_RESET_I(7);
    vlSelf->rv32e__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__MemRead = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__MemLen = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__id_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_ready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__rs1_val = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__rs2_val = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__alu_zero = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__alu_less = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__data_out = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__wb_ready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__load_access_fault = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__store_access_fault = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_fault_addr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__wb_data = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__jal_target = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__jalr_target = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__take_branch = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__branch_target = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__if_stage__DOT__state = 0;
    vlSelf->rv32e__DOT__if_stage__DOT__next_state = 0;
    vlSelf->rv32e__DOT__if_stage__DOT__delay_counter = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__if_stage__DOT__sram_arvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__if_stage__DOT__sram_arready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__if_stage__DOT__sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__if_stage__DOT__sram_rvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__if_stage__DOT__sram_rready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__if_stage__DOT__sram_rresp = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__sram_state = 0;
    vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state = 0;
    vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__id_stage__DOT__state = 0;
    vlSelf->rv32e__DOT__id_stage__DOT__next_state = 0;
    vlSelf->rv32e__DOT__id_stage__DOT__instr_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__id_stage__DOT__delay = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__id_stage__DOT__immI = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__id_stage__DOT__immU = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__id_stage__DOT__immS = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__id_stage__DOT__immB = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__id_stage__DOT__immJ = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__id_stage__DOT__get_opcode = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__ex_stage__DOT__state = 0;
    vlSelf->rv32e__DOT__ex_stage__DOT__next_state = 0;
    vlSelf->rv32e__DOT__ex_stage__DOT__delay = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__mem_stage__DOT__state = 0;
    vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 0;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_rresp = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_awready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_awvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_wdata = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_wstrb = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_bresp = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_bvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_bready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state = 0;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 0;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__addr_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__wb_stage__DOT__state = 0;
    vlSelf->rv32e__DOT__wb_stage__DOT__next_state = 0;
    vlSelf->rv32e__DOT__wb_stage__DOT__delay = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__wb_stage__DOT__RegWrite_wb = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb_pre = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__reset = VL_RAND_RESET_I(1);
}
