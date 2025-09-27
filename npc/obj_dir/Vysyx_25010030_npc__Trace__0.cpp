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
        bufp->chgIData(oldp+4,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__jalr_target),32);
        bufp->chgBit(oldp+5,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__take_branch));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+6,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awready));
        bufp->chgBit(oldp+7,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready));
        bufp->chgBit(oldp+8,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid));
        bufp->chgCData(oldp+9,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bresp),2);
        bufp->chgCData(oldp+10,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bid),4);
        bufp->chgBit(oldp+11,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arready));
        bufp->chgBit(oldp+12,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid));
        bufp->chgCData(oldp+13,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rresp),2);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rdata),32);
        bufp->chgBit(oldp+15,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rlast));
        bufp->chgCData(oldp+16,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rid),4);
        bufp->chgBit(oldp+17,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state));
        bufp->chgIData(oldp+18,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__read_addr),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__write_addr),32);
        bufp->chgBit(oldp+20,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req));
        bufp->chgBit(oldp+21,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req));
        bufp->chgCData(oldp+22,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__read_id),4);
        bufp->chgCData(oldp+23,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__write_id),4);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst),32);
        bufp->chgBit(oldp+26,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid));
        bufp->chgIData(oldp+27,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_pc),32);
        bufp->chgBit(oldp+28,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite));
        bufp->chgCData(oldp+29,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_rd),4);
        bufp->chgCData(oldp+30,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1),4);
        bufp->chgCData(oldp+31,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2),4);
        bufp->chgCData(oldp+32,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_zimm),5);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm),32);
        bufp->chgCData(oldp+34,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_shamt),6);
        bufp->chgCData(oldp+35,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op),4);
        bufp->chgCData(oldp+36,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemLen),5);
        bufp->chgBit(oldp+37,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemWrite));
        bufp->chgBit(oldp+38,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemRead));
        bufp->chgCData(oldp+39,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode),7);
        bufp->chgCData(oldp+40,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3),3);
        bufp->chgBit(oldp+41,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jal));
        bufp->chgBit(oldp+42,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jalr));
        bufp->chgBit(oldp+43,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wen1));
        bufp->chgBit(oldp+44,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_ecall));
        bufp->chgBit(oldp+45,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_mret));
        bufp->chgCData(oldp+46,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op),2);
        bufp->chgSData(oldp+47,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wr_addr1),12);
        bufp->chgSData(oldp+48,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr1),12);
        bufp->chgSData(oldp+49,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr2),12);
        bufp->chgBit(oldp+50,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid));
        bufp->chgBit(oldp+51,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready));
        bufp->chgIData(oldp+52,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2),32);
        bufp->chgBit(oldp+53,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite));
        bufp->chgCData(oldp+54,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd),4);
        bufp->chgBit(oldp+55,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead));
        bufp->chgBit(oldp+56,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite));
        bufp->chgCData(oldp+57,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen),5);
        bufp->chgBit(oldp+58,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr));
        bufp->chgBit(oldp+59,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wen1));
        bufp->chgSData(oldp+60,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_addr1),12);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data1),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data2),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_rdata),32);
        bufp->chgBit(oldp+64,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_ecall));
        bufp->chgBit(oldp+65,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_mret));
        bufp->chgBit(oldp+66,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid));
        bufp->chgBit(oldp+67,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_RegWrite));
        bufp->chgCData(oldp+68,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd),4);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data1),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data2),32);
        bufp->chgSData(oldp+72,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_addr1),12);
        bufp->chgBit(oldp+73,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wen1));
        bufp->chgBit(oldp+74,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_ecall));
        bufp->chgIData(oldp+75,(((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1))
                                  ? 0U : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs
                                 [vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1])),32);
        bufp->chgIData(oldp+76,(((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2))
                                  ? 0U : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs
                                 [vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2])),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num2),32);
        bufp->chgCData(oldp+79,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr),4);
        bufp->chgBit(oldp+80,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_en));
        bufp->chgBit(oldp+81,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_load));
        bufp->chgBit(oldp+82,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_forward_las));
        bufp->chgCData(oldp+83,(((1U == (0xfU & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen)))
                                  ? 0U : ((3U == (0xfU 
                                                  & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen)))
                                           ? 1U : 2U))),3);
        bufp->chgBit(oldp+84,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready));
        bufp->chgCData(oldp+85,((((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                                  | ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                                     | ((4U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                                        | (8U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)))))
                                  ? 0U : (((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                                           | (0xcU 
                                              == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)))
                                           ? 1U : 2U))),3);
        bufp->chgBit(oldp+86,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid));
        bufp->chgIData(oldp+87,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wdata),32);
        bufp->chgCData(oldp+88,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb),4);
        bufp->chgBit(oldp+89,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid));
        bufp->chgBit(oldp+90,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast));
        bufp->chgBit(oldp+91,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid));
        bufp->chgIData(oldp+92,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_araddr),32);
        bufp->chgBit(oldp+93,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready));
        bufp->chgBit(oldp+94,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arready));
        bufp->chgCData(oldp+95,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rresp),2);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rdata),32);
        bufp->chgBit(oldp+97,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rvalid));
        bufp->chgBit(oldp+98,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rlast));
        bufp->chgIData(oldp+99,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimel),32);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtimeh),32);
        bufp->chgBit(oldp+101,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__state));
        bufp->chgBit(oldp+102,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_flush_condition));
        bufp->chgIData(oldp+103,((0x80U | ((0xffffe7f7U 
                                            & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1) 
                                           | (8U & 
                                              VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1, 4U))))),32);
        bufp->chgIData(oldp+104,((1U & VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1, 7U))),32);
        bufp->chgIData(oldp+105,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_zimm),32);
        bufp->chgCData(oldp+106,((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h9407181f__0) 
                                   << 1U) | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h66549bda__0))),2);
        bufp->chgCData(oldp+107,((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hcdb233c1__0) 
                                   << 1U) | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h355ce664__0))),2);
        bufp->chgBit(oldp+108,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemWrite) 
                                & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                                   & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite) 
                                      & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
                                         & ((0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd)) 
                                            & (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd) 
                                                != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1)) 
                                               & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he5bf05a1__0)))))))));
        bufp->chgCData(oldp+109,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__load_use_flag),4);
        bufp->chgCData(oldp+110,((0x7fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)),7);
        bufp->chgCData(oldp+111,((0xfU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+112,((0xfU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+113,((0xfU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                          >> 7U))),4);
        bufp->chgCData(oldp+114,((7U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+115,((1U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+116,((0x3fU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                           >> 0x14U))),6);
        bufp->chgCData(oldp+117,((0x1fU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+118,((0x1fU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                           >> 2U))),5);
        bufp->chgIData(oldp+119,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__idu__DOT__immI),32);
        bufp->chgIData(oldp+120,((0xfffff000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)),32);
        bufp->chgIData(oldp+121,((((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+122,((((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
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
        bufp->chgIData(oldp+123,((((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                         >> 0x14U)))))),32);
        bufp->chgIData(oldp+124,((0x1fU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                           >> 0xfU))),32);
        bufp->chgCData(oldp+125,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__ifu_state),2);
        bufp->chgIData(oldp+126,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc),32);
        bufp->chgBit(oldp+127,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once));
        bufp->chgBit(oldp+128,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once));
        bufp->chgIData(oldp+129,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst),32);
        bufp->chgBit(oldp+130,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_valid));
        bufp->chgBit(oldp+131,((0x100fU == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)));
        bufp->chgBit(oldp+132,((0x6fU == (0x7fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst))));
        bufp->chgIData(oldp+133,((((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                         >> 0x14U)))))),32);
        bufp->chgIData(oldp+134,((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once)
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
        bufp->chgIData(oldp+135,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram),28);
        bufp->chgIData(oldp+136,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram[0]),32);
        bufp->chgIData(oldp+137,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram[1]),32);
        bufp->chgIData(oldp+138,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram[2]),32);
        bufp->chgIData(oldp+139,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram[3]),32);
        bufp->chgCData(oldp+140,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram),4);
        bufp->chgIData(oldp+141,((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                                  >> 4U)),28);
        bufp->chgCData(oldp+142,((3U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                                        >> 2U))),2);
        bufp->chgIData(oldp+143,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_tag),28);
        bufp->chgCData(oldp+144,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_beat_idx),2);
        bufp->chgCData(oldp+145,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state),2);
        bufp->chgCData(oldp+146,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__beat_cnt),2);
        bufp->chgBit(oldp+147,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__ar_done));
        bufp->chgIData(oldp+148,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__b),32);
        bufp->chgCData(oldp+149,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_word_offset),2);
        bufp->chgCData(oldp+150,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt),4);
        bufp->chgCData(oldp+151,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__addr_off),2);
        bufp->chgIData(oldp+152,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata),32);
        bufp->chgBit(oldp+153,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__valid));
        bufp->chgBit(oldp+154,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__aw_done));
        bufp->chgBit(oldp+155,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__w_done));
        bufp->chgBit(oldp+156,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__b_done));
        bufp->chgBit(oldp+157,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__ar_done));
        bufp->chgBit(oldp+158,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19f14__0) 
                                & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite))));
        bufp->chgCData(oldp+159,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen),5);
        bufp->chgIData(oldp+160,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1),32);
        bufp->chgCData(oldp+161,((0xffU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1)),8);
        bufp->chgSData(oldp+162,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__half_data),16);
        bufp->chgIData(oldp+163,(((0x11U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen))
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
        bufp->chgIData(oldp+164,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mstatus),32);
        bufp->chgIData(oldp+165,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mtvec),32);
        bufp->chgIData(oldp+166,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mepc),32);
        bufp->chgIData(oldp+167,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0]),32);
        bufp->chgIData(oldp+168,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[1]),32);
        bufp->chgIData(oldp+169,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[2]),32);
        bufp->chgIData(oldp+170,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[3]),32);
        bufp->chgIData(oldp+171,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[4]),32);
        bufp->chgIData(oldp+172,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[5]),32);
        bufp->chgIData(oldp+173,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[6]),32);
        bufp->chgIData(oldp+174,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[7]),32);
        bufp->chgIData(oldp+175,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[8]),32);
        bufp->chgIData(oldp+176,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[9]),32);
        bufp->chgIData(oldp+177,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[10]),32);
        bufp->chgIData(oldp+178,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[11]),32);
        bufp->chgIData(oldp+179,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[12]),32);
        bufp->chgIData(oldp+180,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[13]),32);
        bufp->chgIData(oldp+181,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[14]),32);
        bufp->chgIData(oldp+182,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[15]),32);
        bufp->chgIData(oldp+183,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+184,(vlSelf->ysyx_25010030_npc__DOT__io_master_awid),4);
        bufp->chgCData(oldp+185,(vlSelf->ysyx_25010030_npc__DOT__io_master_awlen),8);
        bufp->chgCData(oldp+186,(vlSelf->ysyx_25010030_npc__DOT__io_master_awburst),2);
        bufp->chgBit(oldp+187,(vlSelf->ysyx_25010030_npc__DOT__io_master_bready));
        bufp->chgCData(oldp+188,(vlSelf->ysyx_25010030_npc__DOT__io_master_arid),4);
        bufp->chgCData(oldp+189,(vlSelf->ysyx_25010030_npc__DOT__io_master_arlen),8);
        bufp->chgCData(oldp+190,(vlSelf->ysyx_25010030_npc__DOT__io_master_arburst),2);
        bufp->chgBit(oldp+191,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awready));
        bufp->chgBit(oldp+192,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready));
        bufp->chgBit(oldp+193,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid));
        bufp->chgCData(oldp+194,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bresp),2);
        bufp->chgCData(oldp+195,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bid),4);
        bufp->chgBit(oldp+196,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arready));
        bufp->chgBit(oldp+197,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid));
        bufp->chgCData(oldp+198,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rresp),2);
        bufp->chgIData(oldp+199,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rdata),32);
        bufp->chgBit(oldp+200,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rlast));
        bufp->chgCData(oldp+201,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rid),4);
        bufp->chgBit(oldp+202,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state));
        bufp->chgIData(oldp+203,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_addr),32);
        bufp->chgIData(oldp+204,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr),32);
        bufp->chgIData(oldp+205,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_data),32);
        bufp->chgCData(oldp+206,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_strb),4);
        bufp->chgBit(oldp+207,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req));
        bufp->chgBit(oldp+208,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req));
        bufp->chgCData(oldp+209,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_id),4);
        bufp->chgCData(oldp+210,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_id),4);
        bufp->chgBit(oldp+211,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__is_clint_addr));
        bufp->chgCData(oldp+212,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+213,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid));
        bufp->chgIData(oldp+214,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result),32);
        bufp->chgBit(oldp+215,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid));
        bufp->chgIData(oldp+216,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_addr),32);
        bufp->chgIData(oldp+217,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src1),32);
        bufp->chgIData(oldp+218,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src2),32);
        bufp->chgIData(oldp+219,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1),32);
        bufp->chgIData(oldp+220,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2),32);
        bufp->chgIData(oldp+221,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__process_result),32);
        bufp->chgBit(oldp+222,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_zero));
        bufp->chgBit(oldp+223,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_less));
        bufp->chgIData(oldp+224,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__csr_write_data),32);
        bufp->chgCData(oldp+225,((3U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result 
                                        >> 2U))),2);
        bufp->chgCData(oldp+226,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state),2);
        bufp->chgBit(oldp+227,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid));
        bufp->chgIData(oldp+228,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rd_data),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+229,(vlSelf->ysyx_25010030_npc__DOT__io_master_awvalid));
        bufp->chgIData(oldp+230,(vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr),32);
        bufp->chgCData(oldp+231,(vlSelf->ysyx_25010030_npc__DOT__io_master_awsize),3);
        bufp->chgBit(oldp+232,(vlSelf->ysyx_25010030_npc__DOT__io_master_wvalid));
        bufp->chgIData(oldp+233,(vlSelf->ysyx_25010030_npc__DOT__io_master_wdata),32);
        bufp->chgCData(oldp+234,(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb),4);
        bufp->chgBit(oldp+235,(vlSelf->ysyx_25010030_npc__DOT__io_master_wlast));
        bufp->chgBit(oldp+236,(vlSelf->ysyx_25010030_npc__DOT__io_master_bvalid));
        bufp->chgBit(oldp+237,(vlSelf->ysyx_25010030_npc__DOT__io_master_arready));
        bufp->chgBit(oldp+238,(vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid));
        bufp->chgIData(oldp+239,(vlSelf->ysyx_25010030_npc__DOT__io_master_araddr),32);
        bufp->chgCData(oldp+240,(vlSelf->ysyx_25010030_npc__DOT__io_master_arsize),3);
        bufp->chgBit(oldp+241,(vlSelf->ysyx_25010030_npc__DOT__io_master_rready));
        bufp->chgBit(oldp+242,(vlSelf->ysyx_25010030_npc__DOT__io_master_rvalid));
        bufp->chgCData(oldp+243,(vlSelf->ysyx_25010030_npc__DOT__io_master_rresp),2);
        bufp->chgIData(oldp+244,(vlSelf->ysyx_25010030_npc__DOT__io_master_rdata),32);
        bufp->chgBit(oldp+245,(vlSelf->ysyx_25010030_npc__DOT__io_master_rlast));
        bufp->chgCData(oldp+246,(vlSelf->ysyx_25010030_npc__DOT__io_master_rid),4);
        bufp->chgBit(oldp+247,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr));
        bufp->chgBit(oldp+248,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr));
        bufp->chgBit(oldp+249,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awvalid));
        bufp->chgBit(oldp+250,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wvalid));
        bufp->chgBit(oldp+251,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bready));
        bufp->chgBit(oldp+252,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arvalid));
        bufp->chgBit(oldp+253,(((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
                                & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rready))));
        bufp->chgBit(oldp+254,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awvalid));
        bufp->chgBit(oldp+255,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wvalid));
        bufp->chgBit(oldp+256,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bready));
        bufp->chgBit(oldp+257,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arvalid));
        bufp->chgBit(oldp+258,(((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
                                & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rready))));
        bufp->chgIData(oldp+259,((3U & vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr)),32);
        bufp->chgBit(oldp+260,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_arready));
        bufp->chgIData(oldp+261,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rdata),32);
        bufp->chgBit(oldp+262,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid));
        bufp->chgCData(oldp+263,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rid),4);
        bufp->chgBit(oldp+264,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast));
        bufp->chgCData(oldp+265,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rresp),2);
        bufp->chgBit(oldp+266,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_awready));
        bufp->chgBit(oldp+267,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_wready));
        bufp->chgCData(oldp+268,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bresp),2);
        bufp->chgCData(oldp+269,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bid),4);
        bufp->chgBit(oldp+270,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bvalid));
        bufp->chgBit(oldp+271,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_arready));
        bufp->chgIData(oldp+272,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rdata),32);
        bufp->chgBit(oldp+273,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid));
        bufp->chgCData(oldp+274,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rid),4);
        bufp->chgBit(oldp+275,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rlast));
        bufp->chgCData(oldp+276,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rresp),2);
        bufp->chgIData(oldp+277,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr),32);
        bufp->chgBit(oldp+278,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid));
        bufp->chgBit(oldp+279,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready));
        bufp->chgCData(oldp+280,((0xfU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr)),4);
    }
    bufp->chgBit(oldp+281,(vlSelf->clock));
    bufp->chgBit(oldp+282,(vlSelf->reset));
    bufp->chgBit(oldp+283,((((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
                             & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awready)) 
                            | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
                               & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awready)))));
    bufp->chgBit(oldp+284,((((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
                             & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready)) 
                            | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
                               & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready)))));
    bufp->chgCData(oldp+285,(((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr)
                               ? (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bresp)
                               : (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bresp))),2);
    bufp->chgCData(oldp+286,(((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr)
                               ? (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bid)
                               : (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bid))),4);
    bufp->chgBit(oldp+287,(((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state) 
                                && (1U & (~ ((((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req) 
                                               & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rlast)) 
                                              & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid)) 
                                             | (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req) 
                                                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bready)) 
                                                & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid))))))
                             : ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arvalid) 
                                | (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awvalid)))));
    bufp->chgBit(oldp+288,(((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state) 
                                && (1U & (~ ((((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req) 
                                               & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rlast)) 
                                              & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid)) 
                                             | (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req) 
                                                 & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid)) 
                                                & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bready))))))
                             : ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arvalid) 
                                | (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awvalid)))));
    bufp->chgCData(oldp+289,(((2U & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master))
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
    bufp->chgBit(oldp+290,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__state) 
                                && (1U & (~ ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready) 
                                             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rlast)))))
                             : (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid))));
    bufp->chgCData(oldp+291,(((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))
                               ? 3U : ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))
                                        ? ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid) 
                                             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready)) 
                                            & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rlast))
                                            ? 0U : 3U)
                                        : 0U))),2);
    bufp->chgCData(oldp+292,(((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__lsu_state))
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
