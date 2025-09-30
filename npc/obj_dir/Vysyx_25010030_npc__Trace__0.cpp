// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25010030_npc__Syms.h"


void Vysyx_25010030_npc___024root__trace_chg_0_sub_0(Vysyx_25010030_npc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_25010030_npc___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root__trace_chg_0\n"); );
    // Init
    Vysyx_25010030_npc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25010030_npc___024root*>(voidSelf);
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25010030_npc___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25010030_npc___024root__trace_chg_0_sub_0(Vysyx_25010030_npc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+0,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready));
        bufp->chgBit(oldp+1,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready));
        bufp->chgBit(oldp+2,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush));
        bufp->chgIData(oldp+3,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush_pc),32);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__fencei_target),32);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__jalr_target),32);
        bufp->chgBit(oldp+6,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__take_branch));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+7,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awready));
        bufp->chgBit(oldp+8,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready));
        bufp->chgBit(oldp+9,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid));
        bufp->chgCData(oldp+10,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bresp),2);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bid),4);
        bufp->chgBit(oldp+12,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arready));
        bufp->chgBit(oldp+13,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid));
        bufp->chgCData(oldp+14,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rresp),2);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rdata),32);
        bufp->chgBit(oldp+16,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rlast));
        bufp->chgCData(oldp+17,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rid),4);
        bufp->chgBit(oldp+18,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state));
        bufp->chgIData(oldp+19,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__read_addr),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__write_addr),32);
        bufp->chgBit(oldp+21,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req));
        bufp->chgBit(oldp+22,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req));
        bufp->chgCData(oldp+23,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__read_id),4);
        bufp->chgCData(oldp+24,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__write_id),4);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst),32);
        bufp->chgBit(oldp+27,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid));
        bufp->chgIData(oldp+28,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_pc),32);
        bufp->chgBit(oldp+29,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite));
        bufp->chgCData(oldp+30,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_rd),4);
        bufp->chgCData(oldp+31,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1),4);
        bufp->chgCData(oldp+32,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2),4);
        bufp->chgCData(oldp+33,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_zimm),5);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm),32);
        bufp->chgCData(oldp+35,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_shamt),6);
        bufp->chgCData(oldp+36,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op),4);
        bufp->chgCData(oldp+37,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemLen),5);
        bufp->chgBit(oldp+38,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemWrite));
        bufp->chgBit(oldp+39,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemRead));
        bufp->chgCData(oldp+40,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode),7);
        bufp->chgCData(oldp+41,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3),3);
        bufp->chgBit(oldp+42,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jal));
        bufp->chgBit(oldp+43,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jalr));
        bufp->chgBit(oldp+44,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_fencei));
        bufp->chgBit(oldp+45,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wen1));
        bufp->chgBit(oldp+46,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_ecall));
        bufp->chgBit(oldp+47,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_mret));
        bufp->chgCData(oldp+48,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op),2);
        bufp->chgSData(oldp+49,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wr_addr1),12);
        bufp->chgSData(oldp+50,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr1),12);
        bufp->chgSData(oldp+51,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr2),12);
        bufp->chgBit(oldp+52,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid));
        bufp->chgBit(oldp+53,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready));
        bufp->chgIData(oldp+54,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2),32);
        bufp->chgBit(oldp+55,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite));
        bufp->chgCData(oldp+56,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd),4);
        bufp->chgBit(oldp+57,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead));
        bufp->chgBit(oldp+58,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite));
        bufp->chgCData(oldp+59,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen),5);
        bufp->chgBit(oldp+60,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr));
        bufp->chgBit(oldp+61,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wen1));
        bufp->chgSData(oldp+62,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_addr1),12);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data1),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data2),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_rdata),32);
        bufp->chgBit(oldp+66,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_ecall));
        bufp->chgBit(oldp+67,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_mret));
        bufp->chgBit(oldp+68,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid));
        bufp->chgBit(oldp+69,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_RegWrite));
        bufp->chgCData(oldp+70,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd),4);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data1),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data2),32);
        bufp->chgSData(oldp+74,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_addr1),12);
        bufp->chgBit(oldp+75,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wen1));
        bufp->chgBit(oldp+76,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_ecall));
        bufp->chgIData(oldp+77,(((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1))
                                  ? 0U : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs
                                 [vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1])),32);
        bufp->chgIData(oldp+78,(((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2))
                                  ? 0U : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs
                                 [vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2])),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num2),32);
        bufp->chgCData(oldp+81,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr),4);
        bufp->chgBit(oldp+82,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_en));
        bufp->chgBit(oldp+83,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_load));
        bufp->chgBit(oldp+84,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_forward_las));
        bufp->chgCData(oldp+85,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arsize),3);
        bufp->chgBit(oldp+86,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready));
        bufp->chgCData(oldp+87,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awsize),3);
        bufp->chgBit(oldp+88,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid));
        bufp->chgIData(oldp+89,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wdata),32);
        bufp->chgCData(oldp+90,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb),4);
        bufp->chgBit(oldp+91,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid));
        bufp->chgBit(oldp+92,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast));
        bufp->chgBit(oldp+93,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid));
        bufp->chgIData(oldp+94,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_araddr),32);
        bufp->chgBit(oldp+95,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready));
        bufp->chgBit(oldp+96,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arready));
        bufp->chgCData(oldp+97,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rresp),2);
        bufp->chgIData(oldp+98,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rdata),32);
        bufp->chgBit(oldp+99,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rvalid));
        bufp->chgBit(oldp+100,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rlast));
        bufp->chgIData(oldp+101,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimel),32);
        bufp->chgIData(oldp+102,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimeh),32);
        bufp->chgBit(oldp+103,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__state));
        bufp->chgCData(oldp+104,((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h2e2f6104__0) 
                                   << 1U) | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h4fd1cab5__0))),2);
        bufp->chgCData(oldp+105,((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h28a054cc__0) 
                                   << 1U) | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h28b47f47__0))),2);
        bufp->chgBit(oldp+106,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemWrite) 
                                & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                                   & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite) 
                                      & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
                                         & ((0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd)) 
                                            & (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd) 
                                                != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1)) 
                                               & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he5bf05a1__0)))))))));
        bufp->chgCData(oldp+107,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__load_use_flag),4);
        bufp->chgBit(oldp+108,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_flush_condition));
        bufp->chgIData(oldp+109,((1U & VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1, 7U))),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_zimm),32);
        bufp->chgBit(oldp+111,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__forward_flag1));
        bufp->chgBit(oldp+112,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__forward_flag2));
        bufp->chgBit(oldp+113,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__use_flag1));
        bufp->chgBit(oldp+114,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__use_flag2));
        bufp->chgCData(oldp+115,((0x7fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)),7);
        bufp->chgCData(oldp+116,((0xfU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+117,((0xfU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+118,((0xfU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                          >> 7U))),4);
        bufp->chgCData(oldp+119,((7U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+120,((1U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+121,((0x3fU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                           >> 0x14U))),6);
        bufp->chgCData(oldp+122,((0x1fU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+123,((0x1fU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                           >> 2U))),5);
        bufp->chgIData(oldp+124,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__idu__DOT__immI),32);
        bufp->chgIData(oldp+125,((0xfffff000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)),32);
        bufp->chgIData(oldp+126,((((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+127,((((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0x800U 
                                                & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+128,((((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                         >> 0x14U)))))),32);
        bufp->chgIData(oldp+129,((0x1fU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                           >> 0xfU))),32);
        bufp->chgCData(oldp+130,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__ifu_state),2);
        bufp->chgIData(oldp+131,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc),32);
        bufp->chgBit(oldp+132,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once));
        bufp->chgBit(oldp+133,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once));
        bufp->chgIData(oldp+134,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst),32);
        bufp->chgBit(oldp+135,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_valid));
        bufp->chgBit(oldp+136,((0x6fU == (0x7fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst))));
        bufp->chgIData(oldp+137,((((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                         >> 0x14U)))))),32);
        bufp->chgIData(oldp+138,((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once)
                                    ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc
                                    : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc) 
                                  + (((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                  >> 0x1fU))) 
                                      << 0x14U) | (
                                                   (0xff000U 
                                                    & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst) 
                                                   | ((0x800U 
                                                       & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                            >> 0x14U))))))),32);
        bufp->chgIData(oldp+139,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram[0]),27);
        bufp->chgIData(oldp+140,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram[1]),27);
        bufp->chgIData(oldp+141,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                                 [0U][0U]),32);
        bufp->chgIData(oldp+142,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                                 [0U][1U]),32);
        bufp->chgIData(oldp+143,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                                 [0U][2U]),32);
        bufp->chgIData(oldp+144,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                                 [0U][3U]),32);
        bufp->chgIData(oldp+145,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                                 [1U][0U]),32);
        bufp->chgIData(oldp+146,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                                 [1U][1U]),32);
        bufp->chgIData(oldp+147,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                                 [1U][2U]),32);
        bufp->chgIData(oldp+148,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                                 [1U][3U]),32);
        bufp->chgBit(oldp+149,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[0]));
        bufp->chgBit(oldp+150,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[1]));
        bufp->chgIData(oldp+151,((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                                  >> 5U)),27);
        bufp->chgBit(oldp+152,((1U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                                      >> 4U))));
        bufp->chgCData(oldp+153,((3U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                                        >> 2U))),2);
        bufp->chgIData(oldp+154,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_tag),27);
        bufp->chgBit(oldp+155,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_index));
        bufp->chgCData(oldp+156,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_beat_idx),2);
        bufp->chgCData(oldp+157,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state),2);
        bufp->chgCData(oldp+158,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__beat_cnt),2);
        bufp->chgBit(oldp+159,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__ar_done));
        bufp->chgIData(oldp+160,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__idx),32);
        bufp->chgIData(oldp+161,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__b),32);
        bufp->chgCData(oldp+162,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_word_offset),2);
        bufp->chgCData(oldp+163,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt),4);
        bufp->chgCData(oldp+164,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__addr_off),2);
        bufp->chgIData(oldp+165,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata),32);
        bufp->chgBit(oldp+166,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__valid));
        bufp->chgBit(oldp+167,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__aw_done));
        bufp->chgBit(oldp+168,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__w_done));
        bufp->chgBit(oldp+169,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__b_done));
        bufp->chgBit(oldp+170,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__ar_done));
        bufp->chgBit(oldp+171,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19f14__0) 
                                & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite))));
        bufp->chgCData(oldp+172,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen),5);
        bufp->chgIData(oldp+173,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1),32);
        bufp->chgCData(oldp+174,((0xffU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1)),8);
        bufp->chgSData(oldp+175,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__half_data),16);
        bufp->chgIData(oldp+176,(((0x11U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen))
                                   ? (((- (IData)((1U 
                                                   & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1 
                                                      >> 7U)))) 
                                       << 8U) | (0xffU 
                                                 & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1))
                                   : ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen))
                                       ? (0xffU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1)
                                       : ((0x13U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__half_data) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__half_data))
                                           : ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen))
                                               ? (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__half_data)
                                               : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata))))),32);
        bufp->chgIData(oldp+177,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mtvec),32);
        bufp->chgIData(oldp+178,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mepc),32);
        bufp->chgIData(oldp+179,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0]),32);
        bufp->chgIData(oldp+180,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[1]),32);
        bufp->chgIData(oldp+181,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[2]),32);
        bufp->chgIData(oldp+182,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[3]),32);
        bufp->chgIData(oldp+183,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[4]),32);
        bufp->chgIData(oldp+184,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[5]),32);
        bufp->chgIData(oldp+185,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[6]),32);
        bufp->chgIData(oldp+186,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[7]),32);
        bufp->chgIData(oldp+187,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[8]),32);
        bufp->chgIData(oldp+188,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[9]),32);
        bufp->chgIData(oldp+189,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[10]),32);
        bufp->chgIData(oldp+190,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[11]),32);
        bufp->chgIData(oldp+191,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[12]),32);
        bufp->chgIData(oldp+192,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[13]),32);
        bufp->chgIData(oldp+193,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[14]),32);
        bufp->chgIData(oldp+194,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[15]),32);
        bufp->chgIData(oldp+195,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+196,(vlSelf->ysyx_25010030_npc__DOT__io_master_awid),4);
        bufp->chgCData(oldp+197,(vlSelf->ysyx_25010030_npc__DOT__io_master_awlen),8);
        bufp->chgCData(oldp+198,(vlSelf->ysyx_25010030_npc__DOT__io_master_awburst),2);
        bufp->chgBit(oldp+199,(vlSelf->ysyx_25010030_npc__DOT__io_master_bready));
        bufp->chgCData(oldp+200,(vlSelf->ysyx_25010030_npc__DOT__io_master_arid),4);
        bufp->chgCData(oldp+201,(vlSelf->ysyx_25010030_npc__DOT__io_master_arlen),8);
        bufp->chgCData(oldp+202,(vlSelf->ysyx_25010030_npc__DOT__io_master_arburst),2);
        bufp->chgBit(oldp+203,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awready));
        bufp->chgBit(oldp+204,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready));
        bufp->chgBit(oldp+205,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid));
        bufp->chgCData(oldp+206,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bresp),2);
        bufp->chgCData(oldp+207,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bid),4);
        bufp->chgBit(oldp+208,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arready));
        bufp->chgBit(oldp+209,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid));
        bufp->chgCData(oldp+210,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rresp),2);
        bufp->chgIData(oldp+211,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rdata),32);
        bufp->chgBit(oldp+212,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rlast));
        bufp->chgCData(oldp+213,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rid),4);
        bufp->chgBit(oldp+214,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state));
        bufp->chgIData(oldp+215,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_addr),32);
        bufp->chgIData(oldp+216,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr),32);
        bufp->chgIData(oldp+217,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_data),32);
        bufp->chgCData(oldp+218,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_strb),4);
        bufp->chgBit(oldp+219,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req));
        bufp->chgBit(oldp+220,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req));
        bufp->chgCData(oldp+221,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_id),4);
        bufp->chgCData(oldp+222,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_id),4);
        bufp->chgBit(oldp+223,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__is_clint_addr));
        bufp->chgCData(oldp+224,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+225,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid));
        bufp->chgIData(oldp+226,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result),32);
        bufp->chgBit(oldp+227,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid));
        bufp->chgIData(oldp+228,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_addr),32);
        bufp->chgIData(oldp+229,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src1),32);
        bufp->chgIData(oldp+230,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src2),32);
        bufp->chgIData(oldp+231,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1),32);
        bufp->chgIData(oldp+232,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2),32);
        bufp->chgIData(oldp+233,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__process_result),32);
        bufp->chgBit(oldp+234,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_zero));
        bufp->chgBit(oldp+235,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_less));
        bufp->chgBit(oldp+236,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__sign1));
        bufp->chgBit(oldp+237,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__sign2));
        bufp->chgIData(oldp+238,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__sub_result),32);
        bufp->chgCData(oldp+239,((3U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result 
                                        >> 2U))),2);
        bufp->chgCData(oldp+240,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state),2);
        bufp->chgBit(oldp+241,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid));
        bufp->chgIData(oldp+242,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rd_data),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+243,(vlSelf->ysyx_25010030_npc__DOT__io_master_awvalid));
        bufp->chgIData(oldp+244,(vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr),32);
        bufp->chgCData(oldp+245,(vlSelf->ysyx_25010030_npc__DOT__io_master_awsize),3);
        bufp->chgBit(oldp+246,(vlSelf->ysyx_25010030_npc__DOT__io_master_wvalid));
        bufp->chgIData(oldp+247,(vlSelf->ysyx_25010030_npc__DOT__io_master_wdata),32);
        bufp->chgCData(oldp+248,(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb),4);
        bufp->chgBit(oldp+249,(vlSelf->ysyx_25010030_npc__DOT__io_master_wlast));
        bufp->chgBit(oldp+250,(vlSelf->ysyx_25010030_npc__DOT__io_master_bvalid));
        bufp->chgBit(oldp+251,(vlSelf->ysyx_25010030_npc__DOT__io_master_arready));
        bufp->chgBit(oldp+252,(vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid));
        bufp->chgIData(oldp+253,(vlSelf->ysyx_25010030_npc__DOT__io_master_araddr),32);
        bufp->chgCData(oldp+254,(vlSelf->ysyx_25010030_npc__DOT__io_master_arsize),3);
        bufp->chgBit(oldp+255,(vlSelf->ysyx_25010030_npc__DOT__io_master_rready));
        bufp->chgBit(oldp+256,(vlSelf->ysyx_25010030_npc__DOT__io_master_rvalid));
        bufp->chgCData(oldp+257,(vlSelf->ysyx_25010030_npc__DOT__io_master_rresp),2);
        bufp->chgIData(oldp+258,(vlSelf->ysyx_25010030_npc__DOT__io_master_rdata),32);
        bufp->chgBit(oldp+259,(vlSelf->ysyx_25010030_npc__DOT__io_master_rlast));
        bufp->chgCData(oldp+260,(vlSelf->ysyx_25010030_npc__DOT__io_master_rid),4);
        bufp->chgBit(oldp+261,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr));
        bufp->chgBit(oldp+262,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr));
        bufp->chgBit(oldp+263,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awvalid));
        bufp->chgBit(oldp+264,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wvalid));
        bufp->chgBit(oldp+265,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bready));
        bufp->chgBit(oldp+266,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arvalid));
        bufp->chgBit(oldp+267,(((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
                                & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rready))));
        bufp->chgBit(oldp+268,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awvalid));
        bufp->chgBit(oldp+269,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wvalid));
        bufp->chgBit(oldp+270,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bready));
        bufp->chgBit(oldp+271,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arvalid));
        bufp->chgBit(oldp+272,(((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
                                & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rready))));
        bufp->chgIData(oldp+273,((3U & vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr)),32);
        bufp->chgBit(oldp+274,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_arready));
        bufp->chgIData(oldp+275,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rdata),32);
        bufp->chgBit(oldp+276,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid));
        bufp->chgCData(oldp+277,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rid),4);
        bufp->chgBit(oldp+278,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast));
        bufp->chgCData(oldp+279,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rresp),2);
        bufp->chgBit(oldp+280,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_awready));
        bufp->chgBit(oldp+281,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_wready));
        bufp->chgCData(oldp+282,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bresp),2);
        bufp->chgCData(oldp+283,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bid),4);
        bufp->chgBit(oldp+284,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bvalid));
        bufp->chgBit(oldp+285,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_arready));
        bufp->chgIData(oldp+286,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rdata),32);
        bufp->chgBit(oldp+287,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid));
        bufp->chgCData(oldp+288,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rid),4);
        bufp->chgBit(oldp+289,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rlast));
        bufp->chgCData(oldp+290,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rresp),2);
        bufp->chgIData(oldp+291,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr),32);
        bufp->chgBit(oldp+292,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid));
        bufp->chgBit(oldp+293,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready));
        bufp->chgCData(oldp+294,((0xfU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr)),4);
    }
    bufp->chgBit(oldp+295,(vlSelf->clock));
    bufp->chgBit(oldp+296,(vlSelf->reset));
    bufp->chgBit(oldp+297,((((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
                             & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awready)) 
                            | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
                               & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awready)))));
    bufp->chgBit(oldp+298,((((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
                             & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready)) 
                            | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
                               & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready)))));
    bufp->chgCData(oldp+299,(((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr)
                               ? (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bresp)
                               : (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bresp))),2);
    bufp->chgCData(oldp+300,(((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr)
                               ? (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bid)
                               : (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bid))),4);
    bufp->chgBit(oldp+301,(((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state) 
                                && (1U & (~ ((((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req) 
                                               & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rlast)) 
                                              & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid)) 
                                             | (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req) 
                                                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bready)) 
                                                & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid))))))
                             : ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arvalid) 
                                | (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awvalid)))));
    bufp->chgBit(oldp+302,(((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state) 
                                && (1U & (~ ((((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req) 
                                               & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rlast)) 
                                              & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid)) 
                                             | (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req) 
                                                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid)) 
                                                & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bready))))))
                             : ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arvalid) 
                                | (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awvalid)))));
    bufp->chgCData(oldp+303,(((2U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))
                               ? ((1U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))
                                   ? (((IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_bvalid) 
                                       & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_bready))
                                       ? 0U : 3U) : 
                                  (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast) 
                                    | ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rvalid) 
                                       & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready)))
                                    ? 0U : 2U)) : (
                                                   (1U 
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
                                                       : 0U)))))),2);
    bufp->chgBit(oldp+304,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__state) 
                                && (1U & (~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready) 
                                             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rlast)))))
                             : (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid))));
    bufp->chgIData(oldp+305,((((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op)) 
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
                                               ? 0xbU
                                               : 0U)))))),32);
    bufp->chgCData(oldp+306,(((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))
                               ? 3U : ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))
                                        ? ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid) 
                                             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready)) 
                                            & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rlast))
                                            ? 0U : 3U)
                                        : 0U))),2);
    bufp->chgCData(oldp+307,(((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state))
                               ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid)
                                   ? (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19f14__0) 
                                       & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite))
                                       ? 1U : 2U) : 0U)
                               : ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state))
                                   ? ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid) 
                                        & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready)) 
                                       & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast))
                                       ? 0U : 2U) : 
                                  ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state))
                                    ? ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__aw_done) 
                                         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__w_done)) 
                                        & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__b_done))
                                        ? 0U : 1U) : 0U)))),2);
}

void Vysyx_25010030_npc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root__trace_cleanup\n"); );
    // Init
    Vysyx_25010030_npc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25010030_npc___024root*>(voidSelf);
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
