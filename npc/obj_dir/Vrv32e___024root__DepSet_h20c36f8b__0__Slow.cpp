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

VL_ATTR_COLD void Vrv32e___024root___eval_initial__TOP(Vrv32e___024root* vlSelf);

VL_ATTR_COLD void Vrv32e___024root___eval_initial(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_initial\n"); );
    // Body
    Vrv32e___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
}

VL_ATTR_COLD void Vrv32e___024root___eval_initial__TOP(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ rv32e__DOT__wbu__DOT__k;
    rv32e__DOT__wbu__DOT__k = 0;
    // Body
    rv32e__DOT__wbu__DOT__k = 0U;
    while (VL_GTS_III(32, 0x1000U, rv32e__DOT__wbu__DOT__k)) {
        vlSelf->rv32e__DOT__wbu__DOT__CSR[(0xfffU & rv32e__DOT__wbu__DOT__k)] 
            = ((0x300U == rv32e__DOT__wbu__DOT__k) ? 0x1800U
                : 0U);
        rv32e__DOT__wbu__DOT__k = ((IData)(1U) + rv32e__DOT__wbu__DOT__k);
    }
    vlSelf->rv32e__DOT__bpu__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelf->rv32e__DOT__bpu__DOT__i)) {
        vlSelf->rv32e__DOT__bpu__DOT__cpht[(0x3ffU 
                                            & vlSelf->rv32e__DOT__bpu__DOT__i)] = 1U;
        vlSelf->rv32e__DOT__bpu__DOT__local_bht[(0x3ffU 
                                                 & vlSelf->rv32e__DOT__bpu__DOT__i)] = 0U;
        vlSelf->rv32e__DOT__bpu__DOT__btb[(0x3ffU & vlSelf->rv32e__DOT__bpu__DOT__i)] 
            = ((IData)(0x80000000U) + (vlSelf->rv32e__DOT__bpu__DOT__i 
                                       << 2U));
        vlSelf->rv32e__DOT__bpu__DOT__valid[(0x3ffU 
                                             & vlSelf->rv32e__DOT__bpu__DOT__i)] = 0U;
        vlSelf->rv32e__DOT__bpu__DOT__i = ((IData)(1U) 
                                           + vlSelf->rv32e__DOT__bpu__DOT__i);
    }
    vlSelf->rv32e__DOT__bpu__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelf->rv32e__DOT__bpu__DOT__i)) {
        vlSelf->rv32e__DOT__bpu__DOT__local_pht[(0x3ffU 
                                                 & vlSelf->rv32e__DOT__bpu__DOT__i)] = 2U;
        vlSelf->rv32e__DOT__bpu__DOT__global_pht[(0x3ffU 
                                                  & vlSelf->rv32e__DOT__bpu__DOT__i)] = 2U;
        vlSelf->rv32e__DOT__bpu__DOT__i = ((IData)(1U) 
                                           + vlSelf->rv32e__DOT__bpu__DOT__i);
    }
    vlSelf->rv32e__DOT__bpu__DOT__global_bhr = 0U;
    vlSelf->rv32e__DOT__correct_predictions = 0U;
    vlSelf->rv32e__DOT__total_predictions = 0U;
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
                VL_FATAL_MT("/home/furina/ysyx-workbench/npc/pipeline-vsrc/rv32e.v", 4, "", "Settle region did not converge.");
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

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ifu__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_ATTR_COLD void Vrv32e___024root___stl_sequent__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->rv32e__DOT__ex_bpu_update = 0U;
    vlSelf->rv32e__DOT__ex_bpu_pc = 0U;
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
    vlSelf->rv32e__DOT__bpu__DOT__bht_index = (0x3ffU 
                                               & (vlSelf->rv32e__DOT__IF_ID_pc 
                                                  >> 2U));
    vlSelf->rv32e__DOT__bpu__DOT__local_pht_index = 
        (0x3ffU & (vlSelf->rv32e__DOT__bpu__DOT__local_bht
                   [vlSelf->rv32e__DOT__bpu__DOT__bht_index] 
                   ^ (vlSelf->rv32e__DOT__IF_ID_pc 
                      >> 2U)));
    vlSelf->rv32e__DOT__bpu__DOT__global_pht_index 
        = (0x3ffU & ((IData)(vlSelf->rv32e__DOT__bpu__DOT__global_bhr) 
                     ^ (vlSelf->rv32e__DOT__IF_ID_pc 
                        >> 2U)));
    vlSelf->rv32e__DOT__bpu__DOT__local_predict = (1U 
                                                   & (vlSelf->rv32e__DOT__bpu__DOT__local_pht
                                                      [vlSelf->rv32e__DOT__bpu__DOT__local_pht_index] 
                                                      >> 1U));
    vlSelf->rv32e__DOT__bpu__DOT__global_predict = 
        (1U & (vlSelf->rv32e__DOT__bpu__DOT__global_pht
               [vlSelf->rv32e__DOT__bpu__DOT__global_pht_index] 
               >> 1U));
    vlSelf->rv32e__DOT__predict_taken = ((2U > vlSelf->rv32e__DOT__bpu__DOT__cpht
                                          [vlSelf->rv32e__DOT__bpu__DOT__bht_index])
                                          ? ((IData)(vlSelf->rv32e__DOT__bpu__DOT__local_predict) 
                                             & vlSelf->rv32e__DOT__bpu__DOT__valid
                                             [vlSelf->rv32e__DOT__bpu__DOT__bht_index])
                                          : ((IData)(vlSelf->rv32e__DOT__bpu__DOT__global_predict) 
                                             & vlSelf->rv32e__DOT__bpu__DOT__valid
                                             [vlSelf->rv32e__DOT__bpu__DOT__bht_index]));
    vlSelf->rv32e__DOT__predict_target = (vlSelf->rv32e__DOT__bpu__DOT__valid
                                          [vlSelf->rv32e__DOT__bpu__DOT__bht_index]
                                           ? vlSelf->rv32e__DOT__bpu__DOT__btb
                                          [vlSelf->rv32e__DOT__bpu__DOT__bht_index]
                                           : ((IData)(4U) 
                                              + vlSelf->rv32e__DOT__IF_ID_pc));
    vlSelf->rv32e__DOT__wb_ex_csr_num1 = vlSelf->rv32e__DOT__wbu__DOT__CSR
        [vlSelf->rv32e__DOT__id_wb_csr_addr1];
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h804502ec__0 
        = ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
           & (IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0 
        = ((IData)(vlSelf->rv32e__DOT__ex_lsu_rd) == (IData)(vlSelf->rv32e__DOT__id_wb_rs2));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hc613623f__0 
        = (((IData)(vlSelf->rv32e__DOT__ex_lsu_rd) 
            == (IData)(vlSelf->rv32e__DOT__id_wb_rs1)) 
           & (IData)(vlSelf->rv32e__DOT__ex_lsu_valid));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h69af1a50__0 
        = ((IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite) 
           & (0U != (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h384f4e33__0 
        = ((IData)(vlSelf->rv32e__DOT__lsu_wb_RegWrite) 
           & (0U != (IData)(vlSelf->rv32e__DOT__lsu_wb_rd)));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hb53dc38f__0 
        = ((IData)(vlSelf->rv32e__DOT__lsu__DOT__l_load) 
           & ((IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_en) 
              & (0U != (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr))));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hadc13f7a__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hb53dc38f__0) 
           & ((IData)(vlSelf->rv32e__DOT__id_wb_rs2) 
              == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr)));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h0017749a__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hb53dc38f__0) 
           & ((IData)(vlSelf->rv32e__DOT__id_wb_rs1) 
              == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr)));
    vlSelf->rv32e__DOT__exu__DOT__src2 = (((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h69af1a50__0) 
                                           & ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0) 
                                              & (IData)(vlSelf->rv32e__DOT__ex_lsu_valid)))
                                           ? vlSelf->rv32e__DOT__ex_lsu_process_result
                                           : (((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h384f4e33__0) 
                                               & (((IData)(vlSelf->rv32e__DOT__id_wb_rs2) 
                                                   == (IData)(vlSelf->rv32e__DOT__lsu_wb_rd)) 
                                                  & (IData)(vlSelf->rv32e__DOT__lsu_wb_valid)))
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
    vlSelf->rv32e__DOT__exu__DOT__src1 = (((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h69af1a50__0) 
                                           & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hc613623f__0))
                                           ? vlSelf->rv32e__DOT__ex_lsu_process_result
                                           : (((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h384f4e33__0) 
                                               & (((IData)(vlSelf->rv32e__DOT__id_wb_rs1) 
                                                   == (IData)(vlSelf->rv32e__DOT__lsu_wb_rd)) 
                                                  & (IData)(vlSelf->rv32e__DOT__lsu_wb_valid)))
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
    vlSelf->rv32e__DOT__ex_ready = (((~ (IData)(vlSelf->rv32e__DOT__ex_lsu_valid)) 
                                     | (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                                    & (0U == (IData)(vlSelf->rv32e__DOT__exu__DOT__load_use_flag)));
    vlSelf->rv32e__DOT__exu__DOT__alu_less = ((7U == (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                                               ? VL_LTS_III(32, vlSelf->rv32e__DOT__exu__DOT__ex_num1, vlSelf->rv32e__DOT__exu__DOT__ex_num2)
                                               : ((6U 
                                                   == (IData)(vlSelf->rv32e__DOT__id_ex_alu_op)) 
                                                  & (vlSelf->rv32e__DOT__exu__DOT__ex_num1 
                                                     < vlSelf->rv32e__DOT__exu__DOT__ex_num2)));
    if (vlSelf->rv32e__DOT__id_ex_jal) {
        vlSelf->rv32e__DOT__ex_bpu_update = 1U;
        vlSelf->rv32e__DOT__ex_bpu_pc = vlSelf->rv32e__DOT__id_ex_pc;
    } else if (vlSelf->rv32e__DOT__id_ex_jalr) {
        vlSelf->rv32e__DOT__ex_bpu_update = 1U;
        vlSelf->rv32e__DOT__ex_bpu_pc = vlSelf->rv32e__DOT__id_ex_pc;
    } else if ((1U & (~ (IData)(vlSelf->rv32e__DOT__id_ex_csr_ecall)))) {
        if ((1U & (~ (IData)(vlSelf->rv32e__DOT__id_ex_csr_mret)))) {
            if ((0x63U == (IData)(vlSelf->rv32e__DOT__id_ex_opcode))) {
                vlSelf->rv32e__DOT__ex_bpu_update = 1U;
                vlSelf->rv32e__DOT__ex_bpu_pc = vlSelf->rv32e__DOT__id_ex_pc;
            } else {
                vlSelf->rv32e__DOT__ex_bpu_update = 0U;
                vlSelf->rv32e__DOT__ex_bpu_pc = 0U;
            }
        }
    }
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
    vlSelf->rv32e__DOT__ex_flush = 0U;
    vlSelf->rv32e__DOT__ex_flush_pc = 0U;
    vlSelf->rv32e__DOT__ex_bpu_taken = 0U;
    vlSelf->rv32e__DOT__ex_bpu_target = 0U;
    vlSelf->rv32e__DOT__ex_bpu_correct = 0U;
    vlSelf->rv32e__DOT__exu__DOT__actual_target = 0U;
    if (vlSelf->rv32e__DOT__id_ex_jal) {
        vlSelf->rv32e__DOT__ex_bpu_correct = ((IData)(vlSelf->rv32e__DOT__id_ex_predict_taken) 
                                              & (vlSelf->rv32e__DOT__id_ex_predict_target 
                                                 == 
                                                 (vlSelf->rv32e__DOT__id_ex_pc 
                                                  + vlSelf->rv32e__DOT__id_ex_imm)));
        vlSelf->rv32e__DOT__ex_bpu_taken = 1U;
        vlSelf->rv32e__DOT__ex_bpu_target = (vlSelf->rv32e__DOT__id_ex_pc 
                                             + vlSelf->rv32e__DOT__id_ex_imm);
        vlSelf->rv32e__DOT__ex_flush = (((~ (IData)(vlSelf->rv32e__DOT__ex_bpu_correct)) 
                                         & (IData)(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->rv32e__DOT__exu__DOT__load_use_flag)))));
        vlSelf->rv32e__DOT__ex_flush_pc = (vlSelf->rv32e__DOT__id_ex_pc 
                                           + vlSelf->rv32e__DOT__id_ex_imm);
    } else if (vlSelf->rv32e__DOT__id_ex_jalr) {
        vlSelf->rv32e__DOT__ex_bpu_correct = ((IData)(vlSelf->rv32e__DOT__id_ex_predict_taken) 
                                              & (vlSelf->rv32e__DOT__id_ex_predict_target 
                                                 == 
                                                 (0xfffffffeU 
                                                  & (vlSelf->rv32e__DOT__exu__DOT__src1 
                                                     + vlSelf->rv32e__DOT__id_ex_imm))));
        vlSelf->rv32e__DOT__ex_bpu_taken = 1U;
        vlSelf->rv32e__DOT__ex_bpu_target = (0xfffffffeU 
                                             & (vlSelf->rv32e__DOT__exu__DOT__src1 
                                                + vlSelf->rv32e__DOT__id_ex_imm));
        vlSelf->rv32e__DOT__ex_flush = (((~ (IData)(vlSelf->rv32e__DOT__ex_bpu_correct)) 
                                         & (IData)(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->rv32e__DOT__exu__DOT__load_use_flag)))));
        vlSelf->rv32e__DOT__ex_flush_pc = (0xfffffffeU 
                                           & (vlSelf->rv32e__DOT__exu__DOT__src1 
                                              + vlSelf->rv32e__DOT__id_ex_imm));
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
    } else if ((0x63U == (IData)(vlSelf->rv32e__DOT__id_ex_opcode))) {
        if (vlSelf->rv32e__DOT__exu__DOT__take_branch) {
            vlSelf->rv32e__DOT__exu__DOT__actual_target 
                = (vlSelf->rv32e__DOT__id_ex_pc + vlSelf->rv32e__DOT__id_ex_imm);
            vlSelf->rv32e__DOT__ex_bpu_taken = 1U;
        } else {
            vlSelf->rv32e__DOT__exu__DOT__actual_target 
                = vlSelf->rv32e__DOT__id_ex_pc2;
            vlSelf->rv32e__DOT__ex_bpu_taken = 0U;
        }
        vlSelf->rv32e__DOT__ex_bpu_target = (vlSelf->rv32e__DOT__id_ex_pc 
                                             + vlSelf->rv32e__DOT__id_ex_imm);
        vlSelf->rv32e__DOT__ex_bpu_correct = (((IData)(vlSelf->rv32e__DOT__exu__DOT__take_branch) 
                                               == (IData)(vlSelf->rv32e__DOT__id_ex_predict_taken)) 
                                              & (vlSelf->rv32e__DOT__exu__DOT__actual_target 
                                                 == vlSelf->rv32e__DOT__id_ex_predict_target));
        if ((1U & (~ (IData)(vlSelf->rv32e__DOT__ex_bpu_correct)))) {
            vlSelf->rv32e__DOT__ex_flush = ((IData)(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->rv32e__DOT__exu__DOT__load_use_flag)))));
            vlSelf->rv32e__DOT__ex_flush_pc = ((IData)(vlSelf->rv32e__DOT__exu__DOT__take_branch)
                                                ? vlSelf->rv32e__DOT__ex_bpu_target
                                                : ((IData)(4U) 
                                                   + vlSelf->rv32e__DOT__id_ex_pc));
        }
    } else {
        vlSelf->rv32e__DOT__ex_bpu_taken = 0U;
        vlSelf->rv32e__DOT__ex_bpu_target = 0U;
        vlSelf->rv32e__DOT__ex_bpu_correct = 0U;
        vlSelf->rv32e__DOT__ex_flush = 0U;
        vlSelf->rv32e__DOT__ex_flush_pc = 0U;
    }
    vlSelf->rv32e__DOT__id_ready = (1U & ((~ (IData)(vlSelf->rv32e__DOT__ex_flush)) 
                                          & ((~ (IData)(vlSelf->rv32e__DOT__id_valid)) 
                                             | (IData)(vlSelf->rv32e__DOT__ex_ready))));
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->rv32e__DOT__ifu__DOT__check))) {
        vlSelf->rv32e__DOT__IF_valid = 0U;
        vlSelf->rv32e__DOT__IF_ID_inst = 0U;
    } else if (vlSelf->rv32e__DOT__ex_flush) {
        vlSelf->rv32e__DOT__IF_valid = vlSelf->rv32e__DOT__id_ready;
        vlSelf->rv32e__DOT__IF_ID_inst = 0U;
    } else {
        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ifu__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__IF_ID_pc, 4U, vlSelf->__Vfunc_rv32e__DOT__ifu__DOT__pmem_read__1__Vfuncout);
        vlSelf->rv32e__DOT__IF_valid = 1U;
        vlSelf->rv32e__DOT__IF_ID_inst = vlSelf->__Vfunc_rv32e__DOT__ifu__DOT__pmem_read__1__Vfuncout;
    }
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
    vlSelf->rv32e__DOT__idu__DOT__jalr = (IData)((0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->rv32e__DOT__IF_ID_inst)));
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
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__ico(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__act(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge reset)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge reset)\n");
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
    vlSelf->rv32e__DOT__IF_ID_pc = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__IF_ID_inst = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__IF_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__IF_ID_pc2 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__id_ex_pc = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__id_ex_pc2 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__id_ex_inst = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__id_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_ready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_rd = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__id_wb_rs1 = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__id_wb_rs2 = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__id_ex_zimm = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__id_ex_imm = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__id_ex_shamt = VL_RAND_RESET_I(6);
    vlSelf->rv32e__DOT__id_ex_alu_op = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__id_ex_MemLen = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__id_ex_MemWrite = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_MemRead = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_opcode = VL_RAND_RESET_I(7);
    vlSelf->rv32e__DOT__id_ex_func3 = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__id_ex_jal = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_jalr = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_csr = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_csr_wen1 = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_csr_wen2 = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_csr_ecall = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_csr_mret = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_csr_op = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__id_ex_csr_wr_addr1 = VL_RAND_RESET_I(12);
    vlSelf->rv32e__DOT__id_ex_csr_wr_addr2 = VL_RAND_RESET_I(12);
    vlSelf->rv32e__DOT__id_wb_csr_addr1 = VL_RAND_RESET_I(12);
    vlSelf->rv32e__DOT__id_wb_csr_addr2 = VL_RAND_RESET_I(12);
    vlSelf->rv32e__DOT__ex_lsu_inst = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_lsu_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu_ex_ready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_lsu_src2 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_lsu_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_lsu_rd = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__ex_lsu_MemRead = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_lsu_MemWrite = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_lsu_MemLen = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__ex_lsu_process_result = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_flush = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_flush_pc = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_lsu_csr = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_lsu_csr_wen1 = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_lsu_csr_wen2 = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1 = VL_RAND_RESET_I(12);
    vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2 = VL_RAND_RESET_I(12);
    vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_lsu_csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_lsu_csr_ecall = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_lsu_csr_mret = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu_wb_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu_wb_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu_wb_rd = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__lsu_wb_write_rd_data = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1 = VL_RAND_RESET_I(12);
    vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2 = VL_RAND_RESET_I(12);
    vlSelf->rv32e__DOT__lsu_wb_csr_wen1 = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu_wb_csr_wen2 = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__wb_ex_csr_num1 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_lsu_forward_las = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__predict_taken = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__predict_target = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_bpu_update = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_bpu_pc = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_bpu_taken = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_bpu_target = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_bpu_correct = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__correct_predictions = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__total_predictions = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__id_ex_predict_taken = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_predict_target = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ifu__DOT__check = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__idu__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__idu__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__idu__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__idu__DOT__csr_ecall = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__idu__DOT__csr_mret = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h4eb56789__0 = 0;
    vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h05244652__0 = 0;
    vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hcf9d2862__0 = 0;
    vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h69b43165__0 = 0;
    vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hf81b0dad__0 = 0;
    vlSelf->rv32e__DOT__exu__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__exu__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__exu__DOT__ex_num1 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__exu__DOT__ex_num2 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__exu__DOT__process_result = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__exu__DOT__alu_zero = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__exu__DOT__alu_less = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__exu__DOT__take_branch = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__exu__DOT__actual_target = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__exu__DOT__load_use_flag = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h0017749a__0 = 0;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hadc13f7a__0 = 0;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h804502ec__0 = 0;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hc613623f__0 = 0;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0 = 0;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h69af1a50__0 = 0;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h384f4e33__0 = 0;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hb53dc38f__0 = 0;
    vlSelf->rv32e__DOT__lsu__DOT__l_load = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu__DOT__l_rd_en = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__lsu__DOT__l_MemLen = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__lsu__DOT__read_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu__DOT__write_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__lsu__DOT__rd_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->rv32e__DOT__wbu__DOT__CSR[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->rv32e__DOT__wbu__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->rv32e__DOT__bpu__DOT__cpht[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->rv32e__DOT__bpu__DOT__local_bht[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->rv32e__DOT__bpu__DOT__local_pht[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->rv32e__DOT__bpu__DOT__global_bhr = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->rv32e__DOT__bpu__DOT__global_pht[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->rv32e__DOT__bpu__DOT__btb[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->rv32e__DOT__bpu__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->rv32e__DOT__bpu__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__bpu__DOT__bht_index = VL_RAND_RESET_I(10);
    vlSelf->rv32e__DOT__bpu__DOT__local_pht_index = VL_RAND_RESET_I(10);
    vlSelf->rv32e__DOT__bpu__DOT__global_pht_index = VL_RAND_RESET_I(10);
    vlSelf->rv32e__DOT__bpu__DOT__local_predict = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__bpu__DOT__global_predict = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__bpu__DOT__ex_bht_index = VL_RAND_RESET_I(10);
    vlSelf->rv32e__DOT__bpu__DOT__ex_local_pht_index = VL_RAND_RESET_I(10);
    vlSelf->rv32e__DOT__bpu__DOT__ex_global_pht_index = VL_RAND_RESET_I(10);
    vlSelf->rv32e__DOT__bpu__DOT__local_correct = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__bpu__DOT__global_correct = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_rv32e__DOT__ifu__DOT__pmem_read__1__Vfuncout = 0;
    vlSelf->__Vdly__rv32e__DOT__id_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rv32e__DOT__lsu_ex_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rv32e__DOT__IF_ID_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__reset = VL_RAND_RESET_I(1);
}
