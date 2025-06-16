// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrv32e__Syms.h"


void Vrv32e___024root__trace_chg_sub_0(Vrv32e___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vrv32e___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root__trace_chg_top_0\n"); );
    // Init
    Vrv32e___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrv32e___024root*>(voidSelf);
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vrv32e___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vrv32e___024root__trace_chg_sub_0(Vrv32e___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->rv32e__DOT__wbu__DOT__k),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgIData(oldp+1,(vlSelf->rv32e__DOT__IF_ID_inst),32);
        bufp->chgBit(oldp+2,(vlSelf->rv32e__DOT__IF_valid));
        bufp->chgIData(oldp+3,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelf->rv32e__DOT__IF_ID_inst 
                                             >> 0x14U))),32);
        bufp->chgIData(oldp+4,((0xfffff000U & vlSelf->rv32e__DOT__IF_ID_inst)),32);
        bufp->chgIData(oldp+5,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                   >> 7U))))),32);
        bufp->chgIData(oldp+6,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0x800U 
                                              & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                      >> 7U)))))),32);
        bufp->chgIData(oldp+7,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->rv32e__DOT__IF_ID_inst) 
                                              | ((0x800U 
                                                  & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                       >> 0x14U)))))),32);
        bufp->chgIData(oldp+8,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                         >> 0xfU))),32);
        bufp->chgCData(oldp+9,((0x7fU & vlSelf->rv32e__DOT__IF_ID_inst)),7);
        bufp->chgCData(oldp+10,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+11,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+12,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                          >> 7U))),5);
        bufp->chgCData(oldp+13,((7U & (vlSelf->rv32e__DOT__IF_ID_inst 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+14,((vlSelf->rv32e__DOT__IF_ID_inst 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+15,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                          >> 2U))),5);
        bufp->chgIData(oldp+16,(vlSelf->rv32e__DOT__idu__DOT__imm),32);
        bufp->chgCData(oldp+17,(vlSelf->rv32e__DOT__idu__DOT__alu_op),4);
        bufp->chgBit(oldp+18,((0U == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                               >> 2U)))));
        bufp->chgBit(oldp+19,((8U == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                               >> 2U)))));
        bufp->chgCData(oldp+20,((((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h69b43165__0) 
                                  & (0x2000U == (0x7000U 
                                                 & vlSelf->rv32e__DOT__IF_ID_inst)))
                                  ? 2U : (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h69b43165__0) 
                                           & (0x1000U 
                                              == (0x7000U 
                                                  & vlSelf->rv32e__DOT__IF_ID_inst)))
                                           ? 1U : (
                                                   ((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h69b43165__0) 
                                                    & ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                            >> 0xcU))) 
                                                       | (IData)(
                                                                 (3U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->rv32e__DOT__IF_ID_inst)))))
                                                    ? 4U
                                                    : 
                                                   ((IData)(
                                                            (0x5000U 
                                                             == 
                                                             (0x707cU 
                                                              & vlSelf->rv32e__DOT__IF_ID_inst)))
                                                     ? 3U
                                                     : 
                                                    ((IData)(
                                                             (0x4000U 
                                                              == 
                                                              (0x707cU 
                                                               & vlSelf->rv32e__DOT__IF_ID_inst)))
                                                      ? 0U
                                                      : 2U)))))),3);
        bufp->chgBit(oldp+21,((0x1bU == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 2U)))));
        bufp->chgBit(oldp+22,((0x19U == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 2U)))));
        bufp->chgBit(oldp+23,((0x73U == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst))));
        bufp->chgBit(oldp+24,(((~ ((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall) 
                                   | (IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret))) 
                               & (0x73U == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst)))));
        bufp->chgBit(oldp+25,(vlSelf->rv32e__DOT__idu__DOT__csr_ecall));
        bufp->chgBit(oldp+26,(vlSelf->rv32e__DOT__idu__DOT__csr_mret));
        bufp->chgBit(oldp+27,((IData)((0x1073U == (0x707fU 
                                                   & vlSelf->rv32e__DOT__IF_ID_inst)))));
        bufp->chgBit(oldp+28,((IData)((0x2073U == (0x707fU 
                                                   & vlSelf->rv32e__DOT__IF_ID_inst)))));
        bufp->chgBit(oldp+29,((IData)((0x3073U == (0x707fU 
                                                   & vlSelf->rv32e__DOT__IF_ID_inst)))));
        bufp->chgBit(oldp+30,((IData)((0x5073U == (0x707fU 
                                                   & vlSelf->rv32e__DOT__IF_ID_inst)))));
        bufp->chgBit(oldp+31,((IData)((0x6073U == (0x707fU 
                                                   & vlSelf->rv32e__DOT__IF_ID_inst)))));
        bufp->chgBit(oldp+32,((IData)((0x7073U == (0x707fU 
                                                   & vlSelf->rv32e__DOT__IF_ID_inst)))));
        bufp->chgSData(oldp+33,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall)
                                  ? 0x342U : ((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret)
                                               ? 0x300U
                                               : (IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hf81b0dad__0)))),12);
        bufp->chgSData(oldp+34,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall)
                                  ? 0x341U : 0U)),12);
        bufp->chgSData(oldp+35,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret)
                                  ? 0x300U : ((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall)
                                               ? 0x305U
                                               : (IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hf81b0dad__0)))),12);
        bufp->chgSData(oldp+36,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret)
                                  ? 0x341U : 0U)),12);
        bufp->chgBit(oldp+37,(((0xdU == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 2U))) 
                               | ((5U == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                   >> 2U))) 
                                  | ((0U == (0x1fU 
                                             & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 2U))) 
                                     | ((0x1bU == (0x1fU 
                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                      >> 2U))) 
                                        | ((0x19U == 
                                            (0x1fU 
                                             & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 2U))) 
                                           | ((0xcU 
                                               == (0x1fU 
                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                      >> 2U))) 
                                              | ((4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                      >> 2U))) 
                                                 | ((~ 
                                                     ((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall) 
                                                      | (IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret))) 
                                                    & (0x73U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->rv32e__DOT__IF_ID_inst))))))))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+38,(vlSelf->rv32e__DOT__id_wb_rs2),5);
        bufp->chgCData(oldp+39,(vlSelf->rv32e__DOT__id_ex_alu_op),4);
        bufp->chgCData(oldp+40,(vlSelf->rv32e__DOT__id_ex_func3),3);
        bufp->chgBit(oldp+41,(vlSelf->rv32e__DOT__id_ex_jal));
        bufp->chgBit(oldp+42,(vlSelf->rv32e__DOT__id_ex_jalr));
        bufp->chgSData(oldp+43,(vlSelf->rv32e__DOT__id_wb_csr_addr1),12);
        bufp->chgSData(oldp+44,(vlSelf->rv32e__DOT__id_wb_csr_addr2),12);
        bufp->chgIData(oldp+45,(vlSelf->rv32e__DOT__lsu_wb_pc),32);
        bufp->chgIData(oldp+46,(vlSelf->rv32e__DOT__lsu_wb_inst),32);
        bufp->chgBit(oldp+47,(vlSelf->rv32e__DOT__lsu_wb_valid));
        bufp->chgBit(oldp+48,(vlSelf->rv32e__DOT__lsu_wb_RegWrite));
        bufp->chgCData(oldp+49,(vlSelf->rv32e__DOT__lsu_wb_rd),5);
        bufp->chgIData(oldp+50,(vlSelf->rv32e__DOT__lsu_wb_write_rd_data),32);
        bufp->chgIData(oldp+51,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1),32);
        bufp->chgIData(oldp+52,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2),32);
        bufp->chgSData(oldp+53,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1),12);
        bufp->chgSData(oldp+54,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2),12);
        bufp->chgBit(oldp+55,(vlSelf->rv32e__DOT__lsu_wb_csr_wen1));
        bufp->chgBit(oldp+56,(vlSelf->rv32e__DOT__lsu_wb_csr_wen2));
        bufp->chgBit(oldp+57,(vlSelf->rv32e__DOT__lsu_wb_flush));
        bufp->chgBit(oldp+58,(vlSelf->rv32e__DOT__wb_valid));
        bufp->chgIData(oldp+59,(((0U == (IData)(vlSelf->rv32e__DOT__id_wb_rs2))
                                  ? 0U : vlSelf->rv32e__DOT__wbu__DOT__regs
                                 [vlSelf->rv32e__DOT__id_wb_rs2])),32);
        bufp->chgIData(oldp+60,(vlSelf->rv32e__DOT__wbu__DOT__CSR
                                [vlSelf->rv32e__DOT__id_wb_csr_addr2]),32);
        bufp->chgCData(oldp+61,(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr),5);
        bufp->chgBit(oldp+62,(vlSelf->rv32e__DOT__lsu__DOT__l_rd_en));
        bufp->chgBit(oldp+63,(vlSelf->rv32e__DOT__lsu__DOT__l_load));
        bufp->chgBit(oldp+64,(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition));
        bufp->chgIData(oldp+65,(vlSelf->rv32e__DOT__lsu__DOT__l_inst),32);
        bufp->chgIData(oldp+66,(vlSelf->rv32e__DOT__lsu__DOT__l_pc),32);
        bufp->chgCData(oldp+67,(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen),3);
        bufp->chgCData(oldp+68,(vlSelf->rv32e__DOT__lsu__DOT__l_opcode),7);
        bufp->chgBit(oldp+69,(vlSelf->rv32e__DOT__lsu__DOT__read_valid));
        bufp->chgBit(oldp+70,(vlSelf->rv32e__DOT__lsu__DOT__write_valid));
        bufp->chgIData(oldp+71,(vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data),32);
        bufp->chgIData(oldp+72,(((0U == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                  ? (0xffU & vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data)
                                  : ((4U == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                      ? (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                                                         >> 7U)))) 
                                          << 8U) | 
                                         (0xffU & vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data))
                                      : ((3U == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                          ? (0xffffU 
                                             & vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data)
                                          : ((1U == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                                                                 >> 0xfU)))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data))
                                              : ((2U 
                                                  == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                                  ? vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data
                                                  : 0U)))))),32);
        bufp->chgIData(oldp+73,(vlSelf->rv32e__DOT__wbu__DOT__regs[0]),32);
        bufp->chgIData(oldp+74,(vlSelf->rv32e__DOT__wbu__DOT__regs[1]),32);
        bufp->chgIData(oldp+75,(vlSelf->rv32e__DOT__wbu__DOT__regs[2]),32);
        bufp->chgIData(oldp+76,(vlSelf->rv32e__DOT__wbu__DOT__regs[3]),32);
        bufp->chgIData(oldp+77,(vlSelf->rv32e__DOT__wbu__DOT__regs[4]),32);
        bufp->chgIData(oldp+78,(vlSelf->rv32e__DOT__wbu__DOT__regs[5]),32);
        bufp->chgIData(oldp+79,(vlSelf->rv32e__DOT__wbu__DOT__regs[6]),32);
        bufp->chgIData(oldp+80,(vlSelf->rv32e__DOT__wbu__DOT__regs[7]),32);
        bufp->chgIData(oldp+81,(vlSelf->rv32e__DOT__wbu__DOT__regs[8]),32);
        bufp->chgIData(oldp+82,(vlSelf->rv32e__DOT__wbu__DOT__regs[9]),32);
        bufp->chgIData(oldp+83,(vlSelf->rv32e__DOT__wbu__DOT__regs[10]),32);
        bufp->chgIData(oldp+84,(vlSelf->rv32e__DOT__wbu__DOT__regs[11]),32);
        bufp->chgIData(oldp+85,(vlSelf->rv32e__DOT__wbu__DOT__regs[12]),32);
        bufp->chgIData(oldp+86,(vlSelf->rv32e__DOT__wbu__DOT__regs[13]),32);
        bufp->chgIData(oldp+87,(vlSelf->rv32e__DOT__wbu__DOT__regs[14]),32);
        bufp->chgIData(oldp+88,(vlSelf->rv32e__DOT__wbu__DOT__regs[15]),32);
        bufp->chgIData(oldp+89,(vlSelf->rv32e__DOT__wbu__DOT__regs[16]),32);
        bufp->chgIData(oldp+90,(vlSelf->rv32e__DOT__wbu__DOT__regs[17]),32);
        bufp->chgIData(oldp+91,(vlSelf->rv32e__DOT__wbu__DOT__regs[18]),32);
        bufp->chgIData(oldp+92,(vlSelf->rv32e__DOT__wbu__DOT__regs[19]),32);
        bufp->chgIData(oldp+93,(vlSelf->rv32e__DOT__wbu__DOT__regs[20]),32);
        bufp->chgIData(oldp+94,(vlSelf->rv32e__DOT__wbu__DOT__regs[21]),32);
        bufp->chgIData(oldp+95,(vlSelf->rv32e__DOT__wbu__DOT__regs[22]),32);
        bufp->chgIData(oldp+96,(vlSelf->rv32e__DOT__wbu__DOT__regs[23]),32);
        bufp->chgIData(oldp+97,(vlSelf->rv32e__DOT__wbu__DOT__regs[24]),32);
        bufp->chgIData(oldp+98,(vlSelf->rv32e__DOT__wbu__DOT__regs[25]),32);
        bufp->chgIData(oldp+99,(vlSelf->rv32e__DOT__wbu__DOT__regs[26]),32);
        bufp->chgIData(oldp+100,(vlSelf->rv32e__DOT__wbu__DOT__regs[27]),32);
        bufp->chgIData(oldp+101,(vlSelf->rv32e__DOT__wbu__DOT__regs[28]),32);
        bufp->chgIData(oldp+102,(vlSelf->rv32e__DOT__wbu__DOT__regs[29]),32);
        bufp->chgIData(oldp+103,(vlSelf->rv32e__DOT__wbu__DOT__regs[30]),32);
        bufp->chgIData(oldp+104,(vlSelf->rv32e__DOT__wbu__DOT__regs[31]),32);
        bufp->chgBit(oldp+105,(vlSelf->rv32e__DOT__wbu__DOT__flush));
        bufp->chgIData(oldp+106,(vlSelf->rv32e__DOT__wbu__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+107,(vlSelf->rv32e__DOT__ex_lsu_pc),32);
        bufp->chgIData(oldp+108,(vlSelf->rv32e__DOT__ex_lsu_inst),32);
        bufp->chgBit(oldp+109,(vlSelf->rv32e__DOT__ex_lsu_valid));
        bufp->chgIData(oldp+110,(vlSelf->rv32e__DOT__ex_lsu_src2),32);
        bufp->chgBit(oldp+111,(vlSelf->rv32e__DOT__ex_lsu_RegWrite));
        bufp->chgCData(oldp+112,(vlSelf->rv32e__DOT__ex_lsu_rd),5);
        bufp->chgBit(oldp+113,(vlSelf->rv32e__DOT__ex_lsu_MemRead));
        bufp->chgBit(oldp+114,(vlSelf->rv32e__DOT__ex_lsu_MemWrite));
        bufp->chgCData(oldp+115,(vlSelf->rv32e__DOT__ex_lsu_MemLen),3);
        bufp->chgIData(oldp+116,(vlSelf->rv32e__DOT__ex_lsu_process_result),32);
        bufp->chgBit(oldp+117,(vlSelf->rv32e__DOT__ex_lsu_csr));
        bufp->chgBit(oldp+118,(vlSelf->rv32e__DOT__ex_lsu_csr_wen1));
        bufp->chgBit(oldp+119,(vlSelf->rv32e__DOT__ex_lsu_csr_wen2));
        bufp->chgSData(oldp+120,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1),12);
        bufp->chgSData(oldp+121,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2),12);
        bufp->chgIData(oldp+122,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1),32);
        bufp->chgIData(oldp+123,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2),32);
        bufp->chgIData(oldp+124,(vlSelf->rv32e__DOT__ex_lsu_csr_rdata),32);
        bufp->chgBit(oldp+125,(vlSelf->rv32e__DOT__ex_lsu_csr_ecall));
        bufp->chgBit(oldp+126,(vlSelf->rv32e__DOT__ex_lsu_csr_mret));
        bufp->chgIData(oldp+127,(vlSelf->rv32e__DOT__ex_lsu_imm),32);
        bufp->chgCData(oldp+128,(vlSelf->rv32e__DOT__ex_lsu_opcode),7);
        bufp->chgBit(oldp+129,(vlSelf->rv32e__DOT__ex_lsu_forward_las));
        bufp->chgCData(oldp+130,(((1U == (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen))
                                   ? 0U : ((2U == (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen))
                                            ? 1U : 
                                           ((4U == (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen))
                                             ? 3U : 0U)))),2);
        bufp->chgBit(oldp+131,(vlSelf->rv32e__DOT__ifu__DOT__check));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+132,(vlSelf->rv32e__DOT__id_ex_pc),32);
        bufp->chgIData(oldp+133,(vlSelf->rv32e__DOT__id_ex_inst),32);
        bufp->chgBit(oldp+134,(vlSelf->rv32e__DOT__id_valid));
        bufp->chgBit(oldp+135,(vlSelf->rv32e__DOT__id_ex_RegWrite));
        bufp->chgCData(oldp+136,(vlSelf->rv32e__DOT__id_ex_rd),5);
        bufp->chgCData(oldp+137,(vlSelf->rv32e__DOT__id_wb_rs1),5);
        bufp->chgCData(oldp+138,(vlSelf->rv32e__DOT__id_ex_zimm),5);
        bufp->chgIData(oldp+139,(vlSelf->rv32e__DOT__id_ex_imm),32);
        bufp->chgCData(oldp+140,(vlSelf->rv32e__DOT__id_ex_MemLen),3);
        bufp->chgBit(oldp+141,(vlSelf->rv32e__DOT__id_ex_MemWrite));
        bufp->chgBit(oldp+142,(vlSelf->rv32e__DOT__id_ex_MemRead));
        bufp->chgCData(oldp+143,(vlSelf->rv32e__DOT__id_ex_opcode),7);
        bufp->chgBit(oldp+144,(vlSelf->rv32e__DOT__id_ex_csr));
        bufp->chgBit(oldp+145,(vlSelf->rv32e__DOT__id_ex_csr_wen1));
        bufp->chgBit(oldp+146,(vlSelf->rv32e__DOT__id_ex_csr_wen2));
        bufp->chgBit(oldp+147,(vlSelf->rv32e__DOT__id_ex_csr_ecall));
        bufp->chgBit(oldp+148,(vlSelf->rv32e__DOT__id_ex_csr_mret));
        bufp->chgBit(oldp+149,(vlSelf->rv32e__DOT__id_ex_csrrw));
        bufp->chgBit(oldp+150,(vlSelf->rv32e__DOT__id_ex_csrrs));
        bufp->chgBit(oldp+151,(vlSelf->rv32e__DOT__id_ex_csrrc));
        bufp->chgBit(oldp+152,(vlSelf->rv32e__DOT__id_ex_csrrwi));
        bufp->chgBit(oldp+153,(vlSelf->rv32e__DOT__id_ex_csrrsi));
        bufp->chgBit(oldp+154,(vlSelf->rv32e__DOT__id_ex_csrrci));
        bufp->chgSData(oldp+155,(vlSelf->rv32e__DOT__id_ex_csr_wr_addr1),12);
        bufp->chgSData(oldp+156,(vlSelf->rv32e__DOT__id_ex_csr_wr_addr2),12);
        bufp->chgBit(oldp+157,(vlSelf->rv32e__DOT__lsu_ex_ready));
        bufp->chgIData(oldp+158,(vlSelf->rv32e__DOT__wb_ex_csr_num1),32);
        bufp->chgIData(oldp+159,(((IData)(vlSelf->rv32e__DOT__id_ex_csr_ecall)
                                   ? vlSelf->rv32e__DOT__id_ex_pc
                                   : 0U)),32);
        bufp->chgIData(oldp+160,((0x80U | ((0xffffe7f7U 
                                            & vlSelf->rv32e__DOT__wb_ex_csr_num1) 
                                           | (8U & 
                                              (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+161,((1U & (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                        >> 7U))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+162,(vlSelf->rv32e__DOT__id_ready));
        bufp->chgBit(oldp+163,(vlSelf->rv32e__DOT__ex_ready));
        bufp->chgBit(oldp+164,(vlSelf->rv32e__DOT__ex_flush));
        bufp->chgIData(oldp+165,(vlSelf->rv32e__DOT__ex_flush_pc),32);
        bufp->chgIData(oldp+166,(vlSelf->rv32e__DOT__exu__DOT__src1),32);
        bufp->chgIData(oldp+167,(vlSelf->rv32e__DOT__exu__DOT__src2),32);
        bufp->chgIData(oldp+168,(vlSelf->rv32e__DOT__exu__DOT__ex_num1),32);
        bufp->chgIData(oldp+169,(vlSelf->rv32e__DOT__exu__DOT__ex_num2),32);
        bufp->chgIData(oldp+170,(vlSelf->rv32e__DOT__exu__DOT__process_result),32);
        bufp->chgBit(oldp+171,(vlSelf->rv32e__DOT__exu__DOT__alu_zero));
        bufp->chgBit(oldp+172,(vlSelf->rv32e__DOT__exu__DOT__alu_less));
        bufp->chgIData(oldp+173,(vlSelf->rv32e__DOT__exu__DOT__jal_target),32);
        bufp->chgIData(oldp+174,(vlSelf->rv32e__DOT__exu__DOT__jalr_target),32);
        bufp->chgBit(oldp+175,(vlSelf->rv32e__DOT__exu__DOT__take_branch));
        bufp->chgCData(oldp+176,(vlSelf->rv32e__DOT__exu__DOT__load_use_flag),4);
        bufp->chgIData(oldp+177,(vlSelf->rv32e__DOT__lsu__DOT__rd_data),32);
    }
    bufp->chgBit(oldp+178,(vlSelf->clk));
    bufp->chgBit(oldp+179,(vlSelf->reset));
    bufp->chgIData(oldp+180,(vlSelf->rv32e__DOT__IF_ID_pc),32);
    bufp->chgIData(oldp+181,(((0U == (IData)(vlSelf->rv32e__DOT__id_wb_rs1))
                               ? 0U : vlSelf->rv32e__DOT__wbu__DOT__regs
                              [vlSelf->rv32e__DOT__id_wb_rs1])),32);
    bufp->chgIData(oldp+182,(((IData)(vlSelf->rv32e__DOT__id_ex_csrrw)
                               ? vlSelf->rv32e__DOT__exu__DOT__src1
                               : ((IData)(vlSelf->rv32e__DOT__id_ex_csrrc)
                                   ? (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                      & (~ vlSelf->rv32e__DOT__exu__DOT__src1))
                                   : ((IData)(vlSelf->rv32e__DOT__id_ex_csrrs)
                                       ? (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                          | vlSelf->rv32e__DOT__exu__DOT__src1)
                                       : ((IData)(vlSelf->rv32e__DOT__id_ex_csrrwi)
                                           ? (IData)(vlSelf->rv32e__DOT__id_ex_zimm)
                                           : ((IData)(vlSelf->rv32e__DOT__id_ex_csrrci)
                                               ? (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                                  & (~ (IData)(vlSelf->rv32e__DOT__id_ex_zimm)))
                                               : ((IData)(vlSelf->rv32e__DOT__id_ex_csrrsi)
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
                                                     : 0U))))))))),32);
    bufp->chgCData(oldp+183,((((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h9653a62d__0) 
                               << 1U) | (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h666fa1ae__0))),2);
    bufp->chgCData(oldp+184,((((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0) 
                               << 1U) | (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h3556a05f__0))),2);
    bufp->chgBit(oldp+185,(((IData)(vlSelf->rv32e__DOT__id_ex_MemWrite) 
                            & ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                               & ((IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite) 
                                  & ((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                     & ((0U != (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)) 
                                        & (((IData)(vlSelf->rv32e__DOT__ex_lsu_rd) 
                                            != (IData)(vlSelf->rv32e__DOT__id_wb_rs1)) 
                                           & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0)))))))));
}

void Vrv32e___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root__trace_cleanup\n"); );
    // Init
    Vrv32e___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrv32e___024root*>(voidSelf);
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
