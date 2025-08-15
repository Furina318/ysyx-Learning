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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+1,(vlSelf->rv32e__DOT__lsu_wb_pc),32);
        bufp->chgIData(oldp+2,(vlSelf->rv32e__DOT__lsu_wb_inst),32);
        bufp->chgBit(oldp+3,(vlSelf->rv32e__DOT__lsu_wb_valid));
        bufp->chgBit(oldp+4,(vlSelf->rv32e__DOT__lsu_wb_RegWrite));
        bufp->chgCData(oldp+5,(vlSelf->rv32e__DOT__lsu_wb_rd),5);
        bufp->chgIData(oldp+6,(vlSelf->rv32e__DOT__lsu_wb_write_rd_data),32);
        bufp->chgIData(oldp+7,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1),32);
        bufp->chgIData(oldp+8,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2),32);
        bufp->chgSData(oldp+9,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1),12);
        bufp->chgSData(oldp+10,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2),12);
        bufp->chgBit(oldp+11,(vlSelf->rv32e__DOT__lsu_wb_csr_wen1));
        bufp->chgBit(oldp+12,(vlSelf->rv32e__DOT__lsu_wb_csr_wen2));
        bufp->chgBit(oldp+13,(vlSelf->rv32e__DOT__lsu_wb_flush));
        bufp->chgBit(oldp+14,(vlSelf->rv32e__DOT__wb_valid));
        bufp->chgCData(oldp+15,(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr),5);
        bufp->chgBit(oldp+16,(vlSelf->rv32e__DOT__lsu__DOT__l_rd_en));
        bufp->chgBit(oldp+17,(vlSelf->rv32e__DOT__lsu__DOT__l_load));
        bufp->chgBit(oldp+18,(vlSelf->rv32e__DOT__lsu_sram_arvalid));
        bufp->chgIData(oldp+19,(vlSelf->rv32e__DOT__lsu_sram_araddr),32);
        bufp->chgBit(oldp+20,(vlSelf->rv32e__DOT__lsu_sram_rready));
        bufp->chgIData(oldp+21,(vlSelf->rv32e__DOT__lsu_sram_awaddr),32);
        bufp->chgBit(oldp+22,(vlSelf->rv32e__DOT__lsu_sram_awvalid));
        bufp->chgBit(oldp+23,(vlSelf->rv32e__DOT__sram_lsu_awready));
        bufp->chgIData(oldp+24,(vlSelf->rv32e__DOT__lsu_sram_wdata),32);
        bufp->chgCData(oldp+25,(vlSelf->rv32e__DOT__lsu_sram_wstrb),4);
        bufp->chgBit(oldp+26,(vlSelf->rv32e__DOT__lsu_sram_wvalid));
        bufp->chgBit(oldp+27,(vlSelf->rv32e__DOT__sram_lsu_wready));
        bufp->chgCData(oldp+28,(vlSelf->rv32e__DOT__sram_lsu_bresp),2);
        bufp->chgBit(oldp+29,(vlSelf->rv32e__DOT__sram_lsu_bvalid));
        bufp->chgBit(oldp+30,(vlSelf->rv32e__DOT__lsu_sram_bready));
        bufp->chgBit(oldp+31,(vlSelf->rv32e__DOT__sram_arready));
        bufp->chgIData(oldp+32,(vlSelf->rv32e__DOT__sram_rdata),32);
        bufp->chgBit(oldp+33,(vlSelf->rv32e__DOT__sram_rvalid));
        bufp->chgCData(oldp+34,(vlSelf->rv32e__DOT__sram_rresp),2);
        bufp->chgIData(oldp+35,(vlSelf->rv32e__DOT__sram_awaddr),32);
        bufp->chgBit(oldp+36,(vlSelf->rv32e__DOT__sram_awvalid));
        bufp->chgBit(oldp+37,(vlSelf->rv32e__DOT__sram_awready));
        bufp->chgIData(oldp+38,(vlSelf->rv32e__DOT__sram_wdata),32);
        bufp->chgCData(oldp+39,(vlSelf->rv32e__DOT__sram_wstrb),4);
        bufp->chgBit(oldp+40,(vlSelf->rv32e__DOT__sram_wvalid));
        bufp->chgBit(oldp+41,(vlSelf->rv32e__DOT__sram_wready));
        bufp->chgCData(oldp+42,(vlSelf->rv32e__DOT__sram_bresp),2);
        bufp->chgBit(oldp+43,(vlSelf->rv32e__DOT__sram_bvalid));
        bufp->chgBit(oldp+44,(vlSelf->rv32e__DOT__sram_bready));
        bufp->chgBit(oldp+45,(vlSelf->rv32e__DOT__uart_arready));
        bufp->chgCData(oldp+46,(vlSelf->rv32e__DOT__uart_rresp),2);
        bufp->chgIData(oldp+47,(vlSelf->rv32e__DOT__uart_rdata),32);
        bufp->chgBit(oldp+48,(vlSelf->rv32e__DOT__uart_rvalid));
        bufp->chgIData(oldp+49,(vlSelf->rv32e__DOT__uart_awaddr),32);
        bufp->chgBit(oldp+50,(vlSelf->rv32e__DOT__uart_awready));
        bufp->chgBit(oldp+51,(vlSelf->rv32e__DOT__uart_awvalid));
        bufp->chgIData(oldp+52,(vlSelf->rv32e__DOT__uart_wdata),32);
        bufp->chgCData(oldp+53,(vlSelf->rv32e__DOT__uart_wstrb),4);
        bufp->chgBit(oldp+54,(vlSelf->rv32e__DOT__uart_wvalid));
        bufp->chgBit(oldp+55,(vlSelf->rv32e__DOT__uart_wready));
        bufp->chgCData(oldp+56,(vlSelf->rv32e__DOT__uart_bresp),2);
        bufp->chgBit(oldp+57,(vlSelf->rv32e__DOT__uart_bvalid));
        bufp->chgBit(oldp+58,(vlSelf->rv32e__DOT__uart_bready));
        bufp->chgBit(oldp+59,(vlSelf->rv32e__DOT__clint_arready));
        bufp->chgCData(oldp+60,(vlSelf->rv32e__DOT__clint_rresp),2);
        bufp->chgIData(oldp+61,(vlSelf->rv32e__DOT__clint_rdata),32);
        bufp->chgBit(oldp+62,(vlSelf->rv32e__DOT__clint_rvalid));
        bufp->chgIData(oldp+63,(vlSelf->rv32e__DOT__clint_awaddr),32);
        bufp->chgBit(oldp+64,(vlSelf->rv32e__DOT__clint_awready));
        bufp->chgBit(oldp+65,(vlSelf->rv32e__DOT__clint_awvalid));
        bufp->chgIData(oldp+66,(vlSelf->rv32e__DOT__clint_wdata),32);
        bufp->chgCData(oldp+67,(vlSelf->rv32e__DOT__clint_wstrb),4);
        bufp->chgBit(oldp+68,(vlSelf->rv32e__DOT__clint_wvalid));
        bufp->chgBit(oldp+69,(vlSelf->rv32e__DOT__clint_wready));
        bufp->chgCData(oldp+70,(vlSelf->rv32e__DOT__clint_bresp),2);
        bufp->chgBit(oldp+71,(vlSelf->rv32e__DOT__clint_bvalid));
        bufp->chgBit(oldp+72,(vlSelf->rv32e__DOT__clint_bready));
        bufp->chgCData(oldp+73,(vlSelf->rv32e__DOT__axi_arb__DOT__current_master),3);
        bufp->chgIData(oldp+74,(vlSelf->rv32e__DOT__clint__DOT__clint_state),32);
        bufp->chgIData(oldp+75,(vlSelf->rv32e__DOT__clint__DOT__next_clint_state),32);
        bufp->chgIData(oldp+76,(vlSelf->rv32e__DOT__clint__DOT__LFSR),32);
        bufp->chgIData(oldp+77,(vlSelf->rv32e__DOT__clint__DOT__araddr_reg),32);
        bufp->chgIData(oldp+78,(vlSelf->rv32e__DOT__clint__DOT__awaddr_reg),32);
        bufp->chgIData(oldp+79,(vlSelf->rv32e__DOT__clint__DOT__wdata_reg),32);
        bufp->chgIData(oldp+80,(vlSelf->rv32e__DOT__clint__DOT__rdata_reg),32);
        bufp->chgCData(oldp+81,(vlSelf->rv32e__DOT__clint__DOT__wstrb_reg),4);
        bufp->chgQData(oldp+82,(vlSelf->rv32e__DOT__clint__DOT__mtime),64);
        bufp->chgIData(oldp+84,((IData)(vlSelf->rv32e__DOT__clint__DOT__mtime)),32);
        bufp->chgIData(oldp+85,((IData)((vlSelf->rv32e__DOT__clint__DOT__mtime 
                                         >> 0x20U))),32);
        bufp->chgBit(oldp+86,(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition));
        bufp->chgIData(oldp+87,(vlSelf->rv32e__DOT__lsu__DOT__l_inst),32);
        bufp->chgIData(oldp+88,(vlSelf->rv32e__DOT__lsu__DOT__l_pc),32);
        bufp->chgCData(oldp+89,(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen),3);
        bufp->chgCData(oldp+90,(vlSelf->rv32e__DOT__lsu__DOT__l_opcode),7);
        bufp->chgBit(oldp+91,(vlSelf->rv32e__DOT__lsu__DOT__read_pending));
        bufp->chgBit(oldp+92,(vlSelf->rv32e__DOT__lsu__DOT__write_pending));
        bufp->chgBit(oldp+93,(vlSelf->rv32e__DOT__lsu__DOT__read_valid));
        bufp->chgBit(oldp+94,(vlSelf->rv32e__DOT__lsu__DOT__write_valid));
        bufp->chgIData(oldp+95,(vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data),32);
        bufp->chgIData(oldp+96,(((0U == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
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
        bufp->chgIData(oldp+97,(vlSelf->rv32e__DOT__sram__DOT__read_addr),32);
        bufp->chgIData(oldp+98,(vlSelf->rv32e__DOT__sram__DOT__LFSR),32);
        bufp->chgBit(oldp+99,(vlSelf->rv32e__DOT__sram__DOT__read_pending));
        bufp->chgIData(oldp+100,(vlSelf->rv32e__DOT__sram__DOT__write_addr),32);
        bufp->chgBit(oldp+101,(vlSelf->rv32e__DOT__sram__DOT__write_addr_valid));
        bufp->chgIData(oldp+102,(vlSelf->rv32e__DOT__sram__DOT__write_data),32);
        bufp->chgCData(oldp+103,(vlSelf->rv32e__DOT__sram__DOT__write_strb),4);
        bufp->chgBit(oldp+104,(vlSelf->rv32e__DOT__sram__DOT__write_data_valid));
        bufp->chgIData(oldp+105,(vlSelf->rv32e__DOT__uart__DOT__uart_state),32);
        bufp->chgIData(oldp+106,(vlSelf->rv32e__DOT__uart__DOT__next_uart_state),32);
        bufp->chgIData(oldp+107,(vlSelf->rv32e__DOT__uart__DOT__LFSR),32);
        bufp->chgIData(oldp+108,(vlSelf->rv32e__DOT__uart__DOT__araddr_reg),32);
        bufp->chgIData(oldp+109,(vlSelf->rv32e__DOT__uart__DOT__awaddr_reg),32);
        bufp->chgIData(oldp+110,(vlSelf->rv32e__DOT__uart__DOT__wdata_reg),32);
        bufp->chgIData(oldp+111,(vlSelf->rv32e__DOT__uart__DOT__rdata_reg),32);
        bufp->chgCData(oldp+112,(vlSelf->rv32e__DOT__uart__DOT__wstrb_reg),4);
        bufp->chgIData(oldp+113,(vlSelf->rv32e__DOT__wbu__DOT__regs[0]),32);
        bufp->chgIData(oldp+114,(vlSelf->rv32e__DOT__wbu__DOT__regs[1]),32);
        bufp->chgIData(oldp+115,(vlSelf->rv32e__DOT__wbu__DOT__regs[2]),32);
        bufp->chgIData(oldp+116,(vlSelf->rv32e__DOT__wbu__DOT__regs[3]),32);
        bufp->chgIData(oldp+117,(vlSelf->rv32e__DOT__wbu__DOT__regs[4]),32);
        bufp->chgIData(oldp+118,(vlSelf->rv32e__DOT__wbu__DOT__regs[5]),32);
        bufp->chgIData(oldp+119,(vlSelf->rv32e__DOT__wbu__DOT__regs[6]),32);
        bufp->chgIData(oldp+120,(vlSelf->rv32e__DOT__wbu__DOT__regs[7]),32);
        bufp->chgIData(oldp+121,(vlSelf->rv32e__DOT__wbu__DOT__regs[8]),32);
        bufp->chgIData(oldp+122,(vlSelf->rv32e__DOT__wbu__DOT__regs[9]),32);
        bufp->chgIData(oldp+123,(vlSelf->rv32e__DOT__wbu__DOT__regs[10]),32);
        bufp->chgIData(oldp+124,(vlSelf->rv32e__DOT__wbu__DOT__regs[11]),32);
        bufp->chgIData(oldp+125,(vlSelf->rv32e__DOT__wbu__DOT__regs[12]),32);
        bufp->chgIData(oldp+126,(vlSelf->rv32e__DOT__wbu__DOT__regs[13]),32);
        bufp->chgIData(oldp+127,(vlSelf->rv32e__DOT__wbu__DOT__regs[14]),32);
        bufp->chgIData(oldp+128,(vlSelf->rv32e__DOT__wbu__DOT__regs[15]),32);
        bufp->chgIData(oldp+129,(vlSelf->rv32e__DOT__wbu__DOT__regs[16]),32);
        bufp->chgIData(oldp+130,(vlSelf->rv32e__DOT__wbu__DOT__regs[17]),32);
        bufp->chgIData(oldp+131,(vlSelf->rv32e__DOT__wbu__DOT__regs[18]),32);
        bufp->chgIData(oldp+132,(vlSelf->rv32e__DOT__wbu__DOT__regs[19]),32);
        bufp->chgIData(oldp+133,(vlSelf->rv32e__DOT__wbu__DOT__regs[20]),32);
        bufp->chgIData(oldp+134,(vlSelf->rv32e__DOT__wbu__DOT__regs[21]),32);
        bufp->chgIData(oldp+135,(vlSelf->rv32e__DOT__wbu__DOT__regs[22]),32);
        bufp->chgIData(oldp+136,(vlSelf->rv32e__DOT__wbu__DOT__regs[23]),32);
        bufp->chgIData(oldp+137,(vlSelf->rv32e__DOT__wbu__DOT__regs[24]),32);
        bufp->chgIData(oldp+138,(vlSelf->rv32e__DOT__wbu__DOT__regs[25]),32);
        bufp->chgIData(oldp+139,(vlSelf->rv32e__DOT__wbu__DOT__regs[26]),32);
        bufp->chgIData(oldp+140,(vlSelf->rv32e__DOT__wbu__DOT__regs[27]),32);
        bufp->chgIData(oldp+141,(vlSelf->rv32e__DOT__wbu__DOT__regs[28]),32);
        bufp->chgIData(oldp+142,(vlSelf->rv32e__DOT__wbu__DOT__regs[29]),32);
        bufp->chgIData(oldp+143,(vlSelf->rv32e__DOT__wbu__DOT__regs[30]),32);
        bufp->chgIData(oldp+144,(vlSelf->rv32e__DOT__wbu__DOT__regs[31]),32);
        bufp->chgBit(oldp+145,(vlSelf->rv32e__DOT__wbu__DOT__flush));
        bufp->chgIData(oldp+146,(vlSelf->rv32e__DOT__wbu__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+147,(vlSelf->rv32e__DOT__ex_lsu_pc),32);
        bufp->chgIData(oldp+148,(vlSelf->rv32e__DOT__ex_lsu_inst),32);
        bufp->chgBit(oldp+149,(vlSelf->rv32e__DOT__ex_lsu_valid));
        bufp->chgIData(oldp+150,(vlSelf->rv32e__DOT__ex_lsu_src2),32);
        bufp->chgBit(oldp+151,(vlSelf->rv32e__DOT__ex_lsu_RegWrite));
        bufp->chgCData(oldp+152,(vlSelf->rv32e__DOT__ex_lsu_rd),5);
        bufp->chgBit(oldp+153,(vlSelf->rv32e__DOT__ex_lsu_MemRead));
        bufp->chgBit(oldp+154,(vlSelf->rv32e__DOT__ex_lsu_MemWrite));
        bufp->chgCData(oldp+155,(vlSelf->rv32e__DOT__ex_lsu_MemLen),3);
        bufp->chgIData(oldp+156,(vlSelf->rv32e__DOT__ex_lsu_process_result),32);
        bufp->chgBit(oldp+157,(vlSelf->rv32e__DOT__ex_lsu_csr));
        bufp->chgBit(oldp+158,(vlSelf->rv32e__DOT__ex_lsu_csr_wen1));
        bufp->chgBit(oldp+159,(vlSelf->rv32e__DOT__ex_lsu_csr_wen2));
        bufp->chgSData(oldp+160,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1),12);
        bufp->chgSData(oldp+161,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2),12);
        bufp->chgIData(oldp+162,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1),32);
        bufp->chgIData(oldp+163,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2),32);
        bufp->chgIData(oldp+164,(vlSelf->rv32e__DOT__ex_lsu_csr_rdata),32);
        bufp->chgBit(oldp+165,(vlSelf->rv32e__DOT__ex_lsu_csr_ecall));
        bufp->chgBit(oldp+166,(vlSelf->rv32e__DOT__ex_lsu_csr_mret));
        bufp->chgIData(oldp+167,(vlSelf->rv32e__DOT__ex_lsu_imm),32);
        bufp->chgCData(oldp+168,(vlSelf->rv32e__DOT__ex_lsu_opcode),7);
        bufp->chgBit(oldp+169,(vlSelf->rv32e__DOT__ex_lsu_forward_las));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+170,(vlSelf->rv32e__DOT__id_ex_pc),32);
        bufp->chgIData(oldp+171,(vlSelf->rv32e__DOT__id_ex_inst),32);
        bufp->chgBit(oldp+172,(vlSelf->rv32e__DOT__id_valid));
        bufp->chgBit(oldp+173,(vlSelf->rv32e__DOT__id_ex_RegWrite));
        bufp->chgCData(oldp+174,(vlSelf->rv32e__DOT__id_ex_rd),5);
        bufp->chgCData(oldp+175,(vlSelf->rv32e__DOT__id_wb_rs1),5);
        bufp->chgCData(oldp+176,(vlSelf->rv32e__DOT__id_wb_rs2),5);
        bufp->chgCData(oldp+177,(vlSelf->rv32e__DOT__id_ex_zimm),5);
        bufp->chgIData(oldp+178,(vlSelf->rv32e__DOT__id_ex_imm),32);
        bufp->chgCData(oldp+179,(vlSelf->rv32e__DOT__id_ex_shamt),6);
        bufp->chgCData(oldp+180,(vlSelf->rv32e__DOT__id_ex_alu_op),4);
        bufp->chgCData(oldp+181,(vlSelf->rv32e__DOT__id_ex_MemLen),3);
        bufp->chgBit(oldp+182,(vlSelf->rv32e__DOT__id_ex_MemWrite));
        bufp->chgBit(oldp+183,(vlSelf->rv32e__DOT__id_ex_MemRead));
        bufp->chgCData(oldp+184,(vlSelf->rv32e__DOT__id_ex_opcode),7);
        bufp->chgCData(oldp+185,(vlSelf->rv32e__DOT__id_ex_func3),3);
        bufp->chgBit(oldp+186,(vlSelf->rv32e__DOT__id_ex_jal));
        bufp->chgBit(oldp+187,(vlSelf->rv32e__DOT__id_ex_jalr));
        bufp->chgBit(oldp+188,(vlSelf->rv32e__DOT__id_ex_csr));
        bufp->chgBit(oldp+189,(vlSelf->rv32e__DOT__id_ex_csr_wen1));
        bufp->chgBit(oldp+190,(vlSelf->rv32e__DOT__id_ex_csr_wen2));
        bufp->chgBit(oldp+191,(vlSelf->rv32e__DOT__id_ex_csr_ecall));
        bufp->chgBit(oldp+192,(vlSelf->rv32e__DOT__id_ex_csr_mret));
        bufp->chgCData(oldp+193,(vlSelf->rv32e__DOT__id_ex_csr_op),2);
        bufp->chgSData(oldp+194,(vlSelf->rv32e__DOT__id_ex_csr_wr_addr1),12);
        bufp->chgSData(oldp+195,(vlSelf->rv32e__DOT__id_ex_csr_wr_addr2),12);
        bufp->chgSData(oldp+196,(vlSelf->rv32e__DOT__id_wb_csr_addr1),12);
        bufp->chgSData(oldp+197,(vlSelf->rv32e__DOT__id_wb_csr_addr2),12);
        bufp->chgBit(oldp+198,(vlSelf->rv32e__DOT__lsu_ex_ready));
        bufp->chgIData(oldp+199,(vlSelf->rv32e__DOT__wb_ex_csr_num1),32);
        bufp->chgIData(oldp+200,(((IData)(vlSelf->rv32e__DOT__id_ex_csr_ecall)
                                   ? vlSelf->rv32e__DOT__id_ex_pc
                                   : 0U)),32);
        bufp->chgIData(oldp+201,((0x80U | ((0xffffe7f7U 
                                            & vlSelf->rv32e__DOT__wb_ex_csr_num1) 
                                           | (8U & 
                                              (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+202,((1U & (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                        >> 7U))),32);
        bufp->chgIData(oldp+203,(vlSelf->rv32e__DOT__idu__DOT__inst_type),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+204,(vlSelf->rv32e__DOT__ex_ready));
        bufp->chgIData(oldp+205,(vlSelf->rv32e__DOT__exu__DOT__src1),32);
        bufp->chgIData(oldp+206,(vlSelf->rv32e__DOT__exu__DOT__src2),32);
        bufp->chgIData(oldp+207,(vlSelf->rv32e__DOT__exu__DOT__ex_num1),32);
        bufp->chgIData(oldp+208,(vlSelf->rv32e__DOT__exu__DOT__ex_num2),32);
        bufp->chgIData(oldp+209,(vlSelf->rv32e__DOT__exu__DOT__process_result),32);
        bufp->chgBit(oldp+210,(vlSelf->rv32e__DOT__exu__DOT__alu_zero));
        bufp->chgBit(oldp+211,(vlSelf->rv32e__DOT__exu__DOT__alu_less));
        bufp->chgCData(oldp+212,(vlSelf->rv32e__DOT__exu__DOT__load_use_flag),4);
        bufp->chgIData(oldp+213,(vlSelf->rv32e__DOT__lsu__DOT__rd_data),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+214,(vlSelf->rv32e__DOT__IF_ID_pc),32);
        bufp->chgIData(oldp+215,(vlSelf->rv32e__DOT__IF_ID_inst),32);
        bufp->chgBit(oldp+216,(vlSelf->rv32e__DOT__IF_valid));
        bufp->chgBit(oldp+217,(vlSelf->rv32e__DOT__if_sram_arvalid));
        bufp->chgIData(oldp+218,(vlSelf->rv32e__DOT__if_sram_araddr),32);
        bufp->chgBit(oldp+219,(vlSelf->rv32e__DOT__if_sram_rready));
        bufp->chgCData(oldp+220,((0x7fU & vlSelf->rv32e__DOT__IF_ID_inst)),7);
        bufp->chgCData(oldp+221,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+222,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+223,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+224,((7U & (vlSelf->rv32e__DOT__IF_ID_inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+225,((vlSelf->rv32e__DOT__IF_ID_inst 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+226,((0x3fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                           >> 0x14U))),6);
        bufp->chgCData(oldp+227,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                           >> 2U))),5);
        bufp->chgIData(oldp+228,(vlSelf->rv32e__DOT__idu__DOT__immI),32);
        bufp->chgIData(oldp+229,((0xfffff000U & vlSelf->rv32e__DOT__IF_ID_inst)),32);
        bufp->chgIData(oldp+230,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+231,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
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
        bufp->chgIData(oldp+232,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->rv32e__DOT__IF_ID_inst) 
                                                | ((0x800U 
                                                    & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                         >> 0x14U)))))),32);
        bufp->chgIData(oldp+233,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                           >> 0xfU))),32);
        bufp->chgCData(oldp+234,(vlSelf->rv32e__DOT__ifu__DOT__state),2);
        bufp->chgIData(oldp+235,(vlSelf->rv32e__DOT__ifu__DOT__next_pc),32);
        bufp->chgBit(oldp+236,(vlSelf->rv32e__DOT__ifu__DOT__once));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+237,(vlSelf->rv32e__DOT__id_ready));
        bufp->chgBit(oldp+238,(vlSelf->rv32e__DOT__ex_flush));
        bufp->chgIData(oldp+239,(vlSelf->rv32e__DOT__ex_flush_pc),32);
        bufp->chgBit(oldp+240,(vlSelf->rv32e__DOT__sram_lsu_arready));
        bufp->chgIData(oldp+241,(vlSelf->rv32e__DOT__sram_lsu_rdata),32);
        bufp->chgBit(oldp+242,(vlSelf->rv32e__DOT__sram_lsu_rvalid));
        bufp->chgCData(oldp+243,(vlSelf->rv32e__DOT__sram_lsu_rresp),2);
        bufp->chgBit(oldp+244,(vlSelf->rv32e__DOT__sram_if_arready));
        bufp->chgIData(oldp+245,(vlSelf->rv32e__DOT__sram_if_rdata),32);
        bufp->chgBit(oldp+246,(vlSelf->rv32e__DOT__sram_if_rvalid));
        bufp->chgCData(oldp+247,(vlSelf->rv32e__DOT__sram_if_rresp),2);
        bufp->chgBit(oldp+248,(vlSelf->rv32e__DOT__sram_arvalid));
        bufp->chgIData(oldp+249,(vlSelf->rv32e__DOT__sram_araddr),32);
        bufp->chgBit(oldp+250,(vlSelf->rv32e__DOT__sram_rready));
        bufp->chgIData(oldp+251,(vlSelf->rv32e__DOT__uart_araddr),32);
        bufp->chgBit(oldp+252,(vlSelf->rv32e__DOT__uart_arvalid));
        bufp->chgBit(oldp+253,(vlSelf->rv32e__DOT__uart_rready));
        bufp->chgIData(oldp+254,(vlSelf->rv32e__DOT__clint_araddr),32);
        bufp->chgBit(oldp+255,(vlSelf->rv32e__DOT__clint_arvalid));
        bufp->chgBit(oldp+256,(vlSelf->rv32e__DOT__clint_rready));
        bufp->chgCData(oldp+257,(vlSelf->rv32e__DOT__axi_arb__DOT__next_master),3);
        bufp->chgBit(oldp+258,(vlSelf->rv32e__DOT__clint__DOT__addr_valid));
        bufp->chgIData(oldp+259,(vlSelf->rv32e__DOT__exu__DOT__jal_target),32);
        bufp->chgIData(oldp+260,(vlSelf->rv32e__DOT__exu__DOT__jalr_target),32);
        bufp->chgBit(oldp+261,(vlSelf->rv32e__DOT__exu__DOT__take_branch));
        bufp->chgBit(oldp+262,(vlSelf->rv32e__DOT__uart__DOT__addr_valid));
    }
    bufp->chgBit(oldp+263,(vlSelf->clk));
    bufp->chgBit(oldp+264,(vlSelf->reset));
    bufp->chgIData(oldp+265,(((0U == (IData)(vlSelf->rv32e__DOT__id_wb_rs1))
                               ? 0U : vlSelf->rv32e__DOT__wbu__DOT__regs
                              [vlSelf->rv32e__DOT__id_wb_rs1])),32);
    bufp->chgIData(oldp+266,(((0U == (IData)(vlSelf->rv32e__DOT__id_wb_rs2))
                               ? 0U : vlSelf->rv32e__DOT__wbu__DOT__regs
                              [vlSelf->rv32e__DOT__id_wb_rs2])),32);
    bufp->chgIData(oldp+267,(vlSelf->rv32e__DOT__wbu__DOT__CSR
                             [vlSelf->rv32e__DOT__id_wb_csr_addr2]),32);
    bufp->chgIData(oldp+268,((((1U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                               & (1U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
                               ? vlSelf->rv32e__DOT__exu__DOT__src1
                               : (((3U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                                   & (3U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
                                   ? (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                      & (~ vlSelf->rv32e__DOT__exu__DOT__src1))
                                   : (((2U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                                       & (2U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
                                       ? (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                          | vlSelf->rv32e__DOT__exu__DOT__src1)
                                       : (((1U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                                           & (5U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
                                           ? (IData)(vlSelf->rv32e__DOT__id_ex_zimm)
                                           : (((3U 
                                                == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                                               & (7U 
                                                  == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
                                               ? (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                                  & (~ (IData)(vlSelf->rv32e__DOT__id_ex_zimm)))
                                               : ((
                                                   (2U 
                                                    == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
                                                   & (6U 
                                                      == (IData)(vlSelf->rv32e__DOT__id_ex_func3)))
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
    bufp->chgCData(oldp+269,((((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h9653a62d__0) 
                               << 1U) | (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h666fa1ae__0))),2);
    bufp->chgCData(oldp+270,((((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0) 
                               << 1U) | (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h3556a05f__0))),2);
    bufp->chgBit(oldp+271,(((IData)(vlSelf->rv32e__DOT__id_ex_MemWrite) 
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
