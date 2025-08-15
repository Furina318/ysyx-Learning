// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrv32e__Syms.h"


VL_ATTR_COLD void Vrv32e___024root__trace_init_sub__TOP__0(Vrv32e___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+264,"clk", false,-1);
    tracep->declBit(c+265,"reset", false,-1);
    tracep->pushNamePrefix("rv32e ");
    tracep->declBit(c+264,"clk", false,-1);
    tracep->declBit(c+265,"reset", false,-1);
    tracep->declBus(c+215,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+216,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+217,"IF_valid", false,-1);
    tracep->declBit(c+238,"id_ready", false,-1);
    tracep->declBus(c+171,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+172,"id_ex_inst", false,-1, 31,0);
    tracep->declBit(c+173,"id_valid", false,-1);
    tracep->declBit(c+205,"ex_ready", false,-1);
    tracep->declBit(c+174,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+175,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+176,"id_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+177,"id_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+178,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+179,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+180,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+181,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+182,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBit(c+183,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+184,"id_ex_MemRead", false,-1);
    tracep->declBus(c+185,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+186,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+187,"id_ex_jal", false,-1);
    tracep->declBit(c+188,"id_ex_jalr", false,-1);
    tracep->declBit(c+189,"id_ex_csr", false,-1);
    tracep->declBit(c+190,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+191,"id_ex_csr_wen2", false,-1);
    tracep->declBit(c+192,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+193,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+194,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBus(c+195,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+196,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+197,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+198,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBus(c+148,"ex_lsu_pc", false,-1, 31,0);
    tracep->declBus(c+149,"ex_lsu_inst", false,-1, 31,0);
    tracep->declBit(c+150,"ex_lsu_valid", false,-1);
    tracep->declBit(c+199,"lsu_ex_ready", false,-1);
    tracep->declBus(c+151,"ex_lsu_src2", false,-1, 31,0);
    tracep->declBit(c+152,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+153,"ex_lsu_rd", false,-1, 4,0);
    tracep->declBit(c+154,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+155,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+156,"ex_lsu_MemLen", false,-1, 2,0);
    tracep->declBus(c+157,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBit(c+239,"ex_flush", false,-1);
    tracep->declBus(c+240,"ex_flush_pc", false,-1, 31,0);
    tracep->declBit(c+158,"ex_lsu_csr", false,-1);
    tracep->declBit(c+159,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+160,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+161,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+162,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+163,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+164,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+165,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+166,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+167,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+168,"ex_lsu_imm", false,-1, 31,0);
    tracep->declBus(c+169,"ex_lsu_opcode", false,-1, 6,0);
    tracep->declBus(c+2,"lsu_wb_pc", false,-1, 31,0);
    tracep->declBus(c+3,"lsu_wb_inst", false,-1, 31,0);
    tracep->declBit(c+4,"lsu_wb_valid", false,-1);
    tracep->declBit(c+273,"wb_lsu_ready", false,-1);
    tracep->declBit(c+5,"lsu_wb_RegWrite", false,-1);
    tracep->declBus(c+6,"lsu_wb_rd", false,-1, 4,0);
    tracep->declBus(c+7,"lsu_wb_write_rd_data", false,-1, 31,0);
    tracep->declBus(c+8,"lsu_wb_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+9,"lsu_wb_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+10,"lsu_wb_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+11,"lsu_wb_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+12,"lsu_wb_csr_wen1", false,-1);
    tracep->declBit(c+13,"lsu_wb_csr_wen2", false,-1);
    tracep->declBit(c+14,"lsu_wb_flush", false,-1);
    tracep->declBit(c+15,"wb_valid", false,-1);
    tracep->declBus(c+266,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+267,"wb_ex_src2", false,-1, 31,0);
    tracep->declBus(c+200,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+268,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBus(c+16,"lsu_ex_forward_rd", false,-1, 4,0);
    tracep->declBit(c+17,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+18,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBit(c+170,"ex_lsu_forward_las", false,-1);
    tracep->declBit(c+19,"lsu_sram_arvalid", false,-1);
    tracep->declBit(c+241,"sram_lsu_arready", false,-1);
    tracep->declBus(c+20,"lsu_sram_araddr", false,-1, 31,0);
    tracep->declBus(c+242,"sram_lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+243,"sram_lsu_rvalid", false,-1);
    tracep->declBit(c+21,"lsu_sram_rready", false,-1);
    tracep->declBus(c+244,"sram_lsu_rresp", false,-1, 1,0);
    tracep->declBus(c+22,"lsu_sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+23,"lsu_sram_awvalid", false,-1);
    tracep->declBit(c+24,"sram_lsu_awready", false,-1);
    tracep->declBus(c+25,"lsu_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+26,"lsu_sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+27,"lsu_sram_wvalid", false,-1);
    tracep->declBit(c+28,"sram_lsu_wready", false,-1);
    tracep->declBus(c+29,"sram_lsu_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"sram_lsu_bvalid", false,-1);
    tracep->declBit(c+31,"lsu_sram_bready", false,-1);
    tracep->declBit(c+218,"if_sram_arvalid", false,-1);
    tracep->declBit(c+245,"sram_if_arready", false,-1);
    tracep->declBus(c+219,"if_sram_araddr", false,-1, 31,0);
    tracep->declBus(c+246,"sram_if_rdata", false,-1, 31,0);
    tracep->declBit(c+247,"sram_if_rvalid", false,-1);
    tracep->declBit(c+220,"if_sram_rready", false,-1);
    tracep->declBus(c+248,"sram_if_rresp", false,-1, 1,0);
    tracep->declBit(c+249,"sram_arvalid", false,-1);
    tracep->declBit(c+32,"sram_arready", false,-1);
    tracep->declBus(c+250,"sram_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+34,"sram_rvalid", false,-1);
    tracep->declBit(c+251,"sram_rready", false,-1);
    tracep->declBus(c+35,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+36,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+37,"sram_awvalid", false,-1);
    tracep->declBit(c+38,"sram_awready", false,-1);
    tracep->declBus(c+39,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+40,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+41,"sram_wvalid", false,-1);
    tracep->declBit(c+42,"sram_wready", false,-1);
    tracep->declBus(c+43,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+44,"sram_bvalid", false,-1);
    tracep->declBit(c+45,"sram_bready", false,-1);
    tracep->declBus(c+252,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+253,"uart_arvalid", false,-1);
    tracep->declBit(c+46,"uart_arready", false,-1);
    tracep->declBus(c+47,"uart_rresp", false,-1, 1,0);
    tracep->declBus(c+48,"uart_rdata", false,-1, 31,0);
    tracep->declBit(c+49,"uart_rvalid", false,-1);
    tracep->declBit(c+254,"uart_rready", false,-1);
    tracep->declBus(c+50,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+51,"uart_awready", false,-1);
    tracep->declBit(c+52,"uart_awvalid", false,-1);
    tracep->declBus(c+53,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+54,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+55,"uart_wvalid", false,-1);
    tracep->declBit(c+56,"uart_wready", false,-1);
    tracep->declBus(c+57,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+58,"uart_bvalid", false,-1);
    tracep->declBit(c+59,"uart_bready", false,-1);
    tracep->declBus(c+255,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+256,"clint_arvalid", false,-1);
    tracep->declBit(c+60,"clint_arready", false,-1);
    tracep->declBus(c+61,"clint_rresp", false,-1, 1,0);
    tracep->declBus(c+62,"clint_rdata", false,-1, 31,0);
    tracep->declBit(c+63,"clint_rvalid", false,-1);
    tracep->declBit(c+257,"clint_rready", false,-1);
    tracep->declBus(c+64,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+65,"clint_awready", false,-1);
    tracep->declBit(c+66,"clint_awvalid", false,-1);
    tracep->declBus(c+67,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+68,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+69,"clint_wvalid", false,-1);
    tracep->declBit(c+70,"clint_wready", false,-1);
    tracep->declBus(c+71,"clint_bresp", false,-1, 1,0);
    tracep->declBit(c+72,"clint_bvalid", false,-1);
    tracep->declBit(c+73,"clint_bready", false,-1);
    tracep->pushNamePrefix("axi_arb ");
    tracep->declBit(c+264,"clk", false,-1);
    tracep->declBit(c+265,"reset", false,-1);
    tracep->declBus(c+219,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+218,"ifu_arvalid", false,-1);
    tracep->declBit(c+245,"ifu_arready", false,-1);
    tracep->declBus(c+246,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+248,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+247,"ifu_rvalid", false,-1);
    tracep->declBit(c+220,"ifu_rready", false,-1);
    tracep->declBus(c+20,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+19,"lsu_arvalid", false,-1);
    tracep->declBit(c+241,"lsu_arready", false,-1);
    tracep->declBus(c+242,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+243,"lsu_rvalid", false,-1);
    tracep->declBit(c+21,"lsu_rready", false,-1);
    tracep->declBus(c+22,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+23,"lsu_awvalid", false,-1);
    tracep->declBit(c+24,"lsu_awready", false,-1);
    tracep->declBus(c+25,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+26,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+27,"lsu_wvalid", false,-1);
    tracep->declBit(c+28,"lsu_wready", false,-1);
    tracep->declBus(c+29,"lsu_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"lsu_bvalid", false,-1);
    tracep->declBit(c+31,"lsu_bready", false,-1);
    tracep->declBus(c+252,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+253,"uart_arvalid", false,-1);
    tracep->declBit(c+46,"uart_arready", false,-1);
    tracep->declBus(c+48,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+47,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+49,"uart_rvalid", false,-1);
    tracep->declBit(c+254,"uart_rready", false,-1);
    tracep->declBus(c+50,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+52,"uart_awvalid", false,-1);
    tracep->declBit(c+51,"uart_awready", false,-1);
    tracep->declBus(c+53,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+54,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+55,"uart_wvalid", false,-1);
    tracep->declBit(c+56,"uart_wready", false,-1);
    tracep->declBus(c+57,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+58,"uart_bvalid", false,-1);
    tracep->declBit(c+59,"uart_bready", false,-1);
    tracep->declBus(c+250,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+249,"sram_arvalid", false,-1);
    tracep->declBit(c+32,"sram_arready", false,-1);
    tracep->declBus(c+33,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+35,"sram_rresp", false,-1, 1,0);
    tracep->declBit(c+34,"sram_rvalid", false,-1);
    tracep->declBit(c+251,"sram_rready", false,-1);
    tracep->declBus(c+36,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+37,"sram_awvalid", false,-1);
    tracep->declBit(c+38,"sram_awready", false,-1);
    tracep->declBus(c+39,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+40,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+41,"sram_wvalid", false,-1);
    tracep->declBit(c+42,"sram_wready", false,-1);
    tracep->declBus(c+43,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+44,"sram_bvalid", false,-1);
    tracep->declBit(c+45,"sram_bready", false,-1);
    tracep->declBus(c+255,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+256,"clint_arvalid", false,-1);
    tracep->declBit(c+60,"clint_arready", false,-1);
    tracep->declBus(c+62,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+61,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+63,"clint_rvalid", false,-1);
    tracep->declBit(c+257,"clint_rready", false,-1);
    tracep->declBus(c+64,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+66,"clint_awvalid", false,-1);
    tracep->declBit(c+65,"clint_awready", false,-1);
    tracep->declBus(c+67,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+68,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+69,"clint_wvalid", false,-1);
    tracep->declBit(c+70,"clint_wready", false,-1);
    tracep->declBus(c+71,"clint_bresp", false,-1, 1,0);
    tracep->declBit(c+72,"clint_bvalid", false,-1);
    tracep->declBit(c+73,"clint_bready", false,-1);
    tracep->declBus(c+274,"NONE", false,-1, 2,0);
    tracep->declBus(c+275,"IFU", false,-1, 2,0);
    tracep->declBus(c+276,"LSU_READ", false,-1, 2,0);
    tracep->declBus(c+277,"LSU_WRITE", false,-1, 2,0);
    tracep->declBus(c+278,"ERROR", false,-1, 2,0);
    tracep->declBus(c+279,"SRAM", false,-1, 1,0);
    tracep->declBus(c+280,"UART", false,-1, 1,0);
    tracep->declBus(c+281,"CLINT", false,-1, 1,0);
    tracep->declBus(c+282,"ERR", false,-1, 1,0);
    tracep->declBus(c+74,"current_master", false,-1, 2,0);
    tracep->declBus(c+258,"next_master", false,-1, 2,0);
    tracep->declBus(c+282,"OKAY", false,-1, 1,0);
    tracep->declBus(c+280,"SLVERR", false,-1, 1,0);
    tracep->declBus(c+281,"DECERR", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint ");
    tracep->declBus(c+283,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+283,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+284,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+285,"MIN_DELAY", false,-1, 31,0);
    tracep->declBit(c+264,"clk", false,-1);
    tracep->declBit(c+265,"reset", false,-1);
    tracep->declBus(c+255,"araddr", false,-1, 31,0);
    tracep->declBit(c+256,"arvalid", false,-1);
    tracep->declBit(c+60,"arready", false,-1);
    tracep->declBus(c+62,"rdata", false,-1, 31,0);
    tracep->declBit(c+63,"rvalid", false,-1);
    tracep->declBit(c+257,"rready", false,-1);
    tracep->declBus(c+61,"rresp", false,-1, 1,0);
    tracep->declBus(c+64,"awaddr", false,-1, 31,0);
    tracep->declBit(c+66,"awvalid", false,-1);
    tracep->declBit(c+65,"awready", false,-1);
    tracep->declBus(c+67,"wdata", false,-1, 31,0);
    tracep->declBus(c+68,"wstrb", false,-1, 3,0);
    tracep->declBit(c+69,"wvalid", false,-1);
    tracep->declBit(c+70,"wready", false,-1);
    tracep->declBus(c+71,"bresp", false,-1, 1,0);
    tracep->declBit(c+72,"bvalid", false,-1);
    tracep->declBit(c+73,"bready", false,-1);
    tracep->declBus(c+75,"clint_state", false,-1, 31,0);
    tracep->declBus(c+76,"next_clint_state", false,-1, 31,0);
    tracep->declBus(c+77,"LFSR", false,-1, 31,0);
    tracep->declBus(c+78,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+79,"awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+80,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+81,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+82,"wstrb_reg", false,-1, 3,0);
    tracep->declBit(c+259,"addr_valid", false,-1);
    tracep->declQuad(c+83,"mtime", false,-1, 63,0);
    tracep->declBus(c+85,"mtime_low", false,-1, 31,0);
    tracep->declBus(c+86,"mtime_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+264,"clk", false,-1);
    tracep->declBit(c+265,"reset", false,-1);
    tracep->declBit(c+238,"id_ready", false,-1);
    tracep->declBit(c+173,"id_valid", false,-1);
    tracep->declBit(c+205,"ex_ready", false,-1);
    tracep->declBit(c+199,"lsu_ready", false,-1);
    tracep->declBit(c+150,"ex_lsu_valid", false,-1);
    tracep->declBus(c+176,"id_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+177,"id_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+16,"lsu_ex_forward_rd", false,-1, 4,0);
    tracep->declBit(c+17,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+18,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBus(c+7,"lsu_wb_wdata", false,-1, 31,0);
    tracep->declBus(c+6,"lsu_wb_rd", false,-1, 4,0);
    tracep->declBit(c+5,"lsu_wb_RegWrite", false,-1);
    tracep->declBit(c+4,"lsu_wb_valid", false,-1);
    tracep->declBit(c+170,"ex_lsu_forward_las", false,-1);
    tracep->declBus(c+172,"id_ex_inst", false,-1, 31,0);
    tracep->declBus(c+171,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+179,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+178,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+180,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+266,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+267,"wb_ex_src2", false,-1, 31,0);
    tracep->declBit(c+174,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+175,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+185,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+186,"id_ex_func3", false,-1, 2,0);
    tracep->declBus(c+181,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBit(c+187,"id_ex_jal", false,-1);
    tracep->declBit(c+188,"id_ex_jalr", false,-1);
    tracep->declBit(c+184,"id_ex_MemRead", false,-1);
    tracep->declBit(c+183,"id_ex_MemWrite", false,-1);
    tracep->declBus(c+182,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBus(c+200,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+268,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBit(c+189,"id_ex_csr", false,-1);
    tracep->declBit(c+190,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+191,"id_ex_csr_wen2", false,-1);
    tracep->declBus(c+195,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+196,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+192,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+193,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+194,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBit(c+239,"ex_flush", false,-1);
    tracep->declBus(c+240,"ex_flush_pc", false,-1, 31,0);
    tracep->declBus(c+149,"ex_lsu_inst", false,-1, 31,0);
    tracep->declBus(c+148,"ex_lsu_pc", false,-1, 31,0);
    tracep->declBus(c+151,"ex_lsu_src2", false,-1, 31,0);
    tracep->declBit(c+152,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+153,"ex_lsu_rd", false,-1, 4,0);
    tracep->declBit(c+154,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+155,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+156,"ex_lsu_MemLen", false,-1, 2,0);
    tracep->declBus(c+169,"ex_lsu_opcode", false,-1, 6,0);
    tracep->declBit(c+158,"ex_lsu_csr", false,-1);
    tracep->declBit(c+159,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+160,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+161,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+162,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+163,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+164,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+165,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+166,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+167,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+168,"ex_lsu_imm", false,-1, 31,0);
    tracep->declBus(c+157,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBus(c+206,"src1", false,-1, 31,0);
    tracep->declBus(c+207,"src2", false,-1, 31,0);
    tracep->declBus(c+208,"ex_num1", false,-1, 31,0);
    tracep->declBus(c+209,"ex_num2", false,-1, 31,0);
    tracep->declBus(c+210,"process_result", false,-1, 31,0);
    tracep->declBit(c+211,"alu_zero", false,-1);
    tracep->declBit(c+212,"alu_less", false,-1);
    tracep->declBus(c+260,"jal_target", false,-1, 31,0);
    tracep->declBus(c+261,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+262,"take_branch", false,-1);
    tracep->declBit(c+87,"ex_flush_condition", false,-1);
    tracep->declBus(c+201,"csr_write_ecall", false,-1, 31,0);
    tracep->declBus(c+202,"mstatus_t", false,-1, 31,0);
    tracep->declBus(c+203,"mpie", false,-1, 31,0);
    tracep->declBus(c+269,"csr_write_data", false,-1, 31,0);
    tracep->declBus(c+270,"forward_rs1", false,-1, 1,0);
    tracep->declBus(c+271,"forward_rs2", false,-1, 1,0);
    tracep->declBit(c+272,"forward_las", false,-1);
    tracep->declBus(c+213,"load_use_flag", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+264,"clk", false,-1);
    tracep->declBit(c+265,"reset", false,-1);
    tracep->declBus(c+215,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+216,"if_id_inst", false,-1, 31,0);
    tracep->declBit(c+239,"ex_flush", false,-1);
    tracep->declBit(c+217,"if_valid", false,-1);
    tracep->declBit(c+238,"id_ready", false,-1);
    tracep->declBit(c+205,"ex_ready", false,-1);
    tracep->declBit(c+173,"id_valid", false,-1);
    tracep->declBus(c+171,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+172,"id_ex_inst", false,-1, 31,0);
    tracep->declBit(c+174,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+175,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+176,"id_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+177,"id_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+178,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+179,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+180,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+181,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+182,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBit(c+183,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+184,"id_ex_MemRead", false,-1);
    tracep->declBus(c+185,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+186,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+187,"id_ex_jal", false,-1);
    tracep->declBit(c+188,"id_ex_jalr", false,-1);
    tracep->declBit(c+189,"id_ex_csr", false,-1);
    tracep->declBit(c+190,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+191,"id_ex_csr_wen2", false,-1);
    tracep->declBit(c+192,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+193,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+194,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBus(c+195,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+196,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+197,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+198,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBus(c+221,"opcode", false,-1, 6,0);
    tracep->declBus(c+222,"rs1", false,-1, 4,0);
    tracep->declBus(c+223,"rs2", false,-1, 4,0);
    tracep->declBus(c+224,"rd", false,-1, 4,0);
    tracep->declBus(c+225,"func3", false,-1, 2,0);
    tracep->declBus(c+226,"func7", false,-1, 6,0);
    tracep->declBus(c+227,"shamt", false,-1, 5,0);
    tracep->declBus(c+228,"get_opcode", false,-1, 4,0);
    tracep->declBus(c+229,"immI", false,-1, 31,0);
    tracep->declBus(c+230,"immU", false,-1, 31,0);
    tracep->declBus(c+231,"immS", false,-1, 31,0);
    tracep->declBus(c+232,"immB", false,-1, 31,0);
    tracep->declBus(c+233,"immJ", false,-1, 31,0);
    tracep->declBus(c+286,"immR", false,-1, 31,0);
    tracep->declBus(c+234,"immCSR", false,-1, 31,0);
    tracep->declBus(c+204,"inst_type", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+264,"clk", false,-1);
    tracep->declBit(c+265,"reset", false,-1);
    tracep->declBit(c+239,"EX_flush", false,-1);
    tracep->declBus(c+240,"EX_flush_pc", false,-1, 31,0);
    tracep->declBit(c+238,"ID_ready", false,-1);
    tracep->declBit(c+217,"IF_valid", false,-1);
    tracep->declBus(c+215,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+216,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+218,"if_sram_arvalid", false,-1);
    tracep->declBit(c+245,"sram_if_arready", false,-1);
    tracep->declBus(c+219,"if_sram_araddr", false,-1, 31,0);
    tracep->declBus(c+246,"sram_if_rdata", false,-1, 31,0);
    tracep->declBit(c+247,"sram_if_rvalid", false,-1);
    tracep->declBit(c+220,"if_sram_rready", false,-1);
    tracep->declBus(c+248,"sram_if_rresp", false,-1, 1,0);
    tracep->declBus(c+235,"state", false,-1, 1,0);
    tracep->declBus(c+282,"IDLE", false,-1, 1,0);
    tracep->declBus(c+279,"AR_WAIT", false,-1, 1,0);
    tracep->declBus(c+280,"R_WAIT", false,-1, 1,0);
    tracep->declBus(c+236,"next_pc", false,-1, 31,0);
    tracep->declBit(c+237,"once", false,-1);
    tracep->declBit(c+287,"flush_reg", false,-1);
    tracep->declBit(c+288,"flush_once", false,-1);
    tracep->declBus(c+289,"flush_pc_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+264,"clk", false,-1);
    tracep->declBit(c+265,"rst", false,-1);
    tracep->declBit(c+150,"ex_lsu_valid", false,-1);
    tracep->declBit(c+199,"lsu_ex_ready", false,-1);
    tracep->declBit(c+273,"wb_lsu_ready", false,-1);
    tracep->declBit(c+4,"lsu_wb_valid", false,-1);
    tracep->declBit(c+170,"ex_lsu_forward_las", false,-1);
    tracep->declBit(c+152,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+153,"ex_lsu_rd", false,-1, 4,0);
    tracep->declBit(c+154,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+155,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+156,"ex_lsu_MemLen", false,-1, 2,0);
    tracep->declBus(c+149,"ex_lsu_inst", false,-1, 31,0);
    tracep->declBus(c+148,"ex_lsu_pc", false,-1, 31,0);
    tracep->declBus(c+157,"addr", false,-1, 31,0);
    tracep->declBus(c+151,"data_in", false,-1, 31,0);
    tracep->declBus(c+168,"ex_lsu_imm", false,-1, 31,0);
    tracep->declBus(c+169,"ex_lsu_opcode", false,-1, 6,0);
    tracep->declBit(c+158,"ex_lsu_csr", false,-1);
    tracep->declBit(c+159,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+160,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+163,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+164,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+161,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+162,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+165,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+166,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+167,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+157,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBus(c+16,"lsu_ex_forward_rd", false,-1, 4,0);
    tracep->declBit(c+17,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+18,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBus(c+3,"lsu_wb_inst", false,-1, 31,0);
    tracep->declBus(c+2,"lsu_wb_pc", false,-1, 31,0);
    tracep->declBit(c+239,"ex_flush", false,-1);
    tracep->declBit(c+14,"lsu_wb_flush", false,-1);
    tracep->declBus(c+8,"lsu_wb_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+9,"lsu_wb_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+10,"lsu_wb_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+11,"lsu_wb_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+12,"lsu_wb_csr_wen1", false,-1);
    tracep->declBit(c+13,"lsu_wb_csr_wen2", false,-1);
    tracep->declBit(c+5,"lsu_wb_RegWrite", false,-1);
    tracep->declBus(c+6,"lsu_wb_rd", false,-1, 4,0);
    tracep->declBus(c+7,"lsu_wb_write_rd_data", false,-1, 31,0);
    tracep->declBit(c+19,"lsu_sram_arvalid", false,-1);
    tracep->declBit(c+241,"sram_lsu_arready", false,-1);
    tracep->declBus(c+20,"lsu_sram_araddr", false,-1, 31,0);
    tracep->declBus(c+242,"sram_lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+243,"sram_lsu_rvalid", false,-1);
    tracep->declBit(c+21,"lsu_sram_rready", false,-1);
    tracep->declBus(c+244,"sram_lsu_rresp", false,-1, 1,0);
    tracep->declBus(c+22,"lsu_sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+23,"lsu_sram_awvalid", false,-1);
    tracep->declBit(c+24,"sram_lsu_awready", false,-1);
    tracep->declBus(c+25,"lsu_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+26,"lsu_sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+27,"lsu_sram_wvalid", false,-1);
    tracep->declBit(c+28,"sram_lsu_wready", false,-1);
    tracep->declBus(c+29,"sram_lsu_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"sram_lsu_bvalid", false,-1);
    tracep->declBit(c+31,"lsu_sram_bready", false,-1);
    tracep->declBus(c+282,"OKAY", false,-1, 1,0);
    tracep->declBit(c+18,"l_load", false,-1);
    tracep->declBit(c+17,"l_rd_en", false,-1);
    tracep->declBus(c+16,"l_rd_addr", false,-1, 4,0);
    tracep->declBus(c+88,"l_inst", false,-1, 31,0);
    tracep->declBus(c+89,"l_pc", false,-1, 31,0);
    tracep->declBus(c+90,"l_MemLen", false,-1, 2,0);
    tracep->declBus(c+91,"l_opcode", false,-1, 6,0);
    tracep->declBit(c+92,"read_pending", false,-1);
    tracep->declBit(c+93,"write_pending", false,-1);
    tracep->declBit(c+94,"read_valid", false,-1);
    tracep->declBit(c+95,"write_valid", false,-1);
    tracep->declBus(c+96,"read_lsu_data", false,-1, 31,0);
    tracep->declBus(c+97,"wr_rd_data", false,-1, 31,0);
    tracep->declBus(c+214,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+264,"clk", false,-1);
    tracep->declBit(c+265,"rst", false,-1);
    tracep->declBit(c+249,"sram_arvalid", false,-1);
    tracep->declBit(c+32,"sram_arready", false,-1);
    tracep->declBus(c+250,"sram_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+34,"sram_rvalid", false,-1);
    tracep->declBit(c+251,"sram_rready", false,-1);
    tracep->declBus(c+35,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+36,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+37,"sram_awvalid", false,-1);
    tracep->declBit(c+38,"sram_awready", false,-1);
    tracep->declBus(c+39,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+40,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+41,"sram_wvalid", false,-1);
    tracep->declBit(c+42,"sram_wready", false,-1);
    tracep->declBus(c+43,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+44,"sram_bvalid", false,-1);
    tracep->declBit(c+45,"sram_bready", false,-1);
    tracep->declBus(c+282,"OKAY", false,-1, 1,0);
    tracep->declBus(c+285,"MIN_DELAY", false,-1, 31,0);
    tracep->declBus(c+284,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+98,"read_addr", false,-1, 31,0);
    tracep->declBus(c+99,"LFSR", false,-1, 31,0);
    tracep->declBit(c+100,"read_pending", false,-1);
    tracep->declBus(c+101,"write_addr", false,-1, 31,0);
    tracep->declBit(c+102,"write_addr_valid", false,-1);
    tracep->declBus(c+103,"write_data", false,-1, 31,0);
    tracep->declBus(c+104,"write_strb", false,-1, 3,0);
    tracep->declBit(c+105,"write_data_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart ");
    tracep->declBus(c+283,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+283,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+284,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+285,"MIN_DELAY", false,-1, 31,0);
    tracep->declBit(c+264,"clk", false,-1);
    tracep->declBit(c+265,"reset", false,-1);
    tracep->declBus(c+252,"araddr", false,-1, 31,0);
    tracep->declBit(c+253,"arvalid", false,-1);
    tracep->declBit(c+46,"arready", false,-1);
    tracep->declBus(c+48,"rdata", false,-1, 31,0);
    tracep->declBit(c+49,"rvalid", false,-1);
    tracep->declBit(c+254,"rready", false,-1);
    tracep->declBus(c+47,"rresp", false,-1, 1,0);
    tracep->declBus(c+50,"awaddr", false,-1, 31,0);
    tracep->declBit(c+52,"awvalid", false,-1);
    tracep->declBit(c+51,"awready", false,-1);
    tracep->declBus(c+53,"wdata", false,-1, 31,0);
    tracep->declBus(c+54,"wstrb", false,-1, 3,0);
    tracep->declBit(c+55,"wvalid", false,-1);
    tracep->declBit(c+56,"wready", false,-1);
    tracep->declBus(c+57,"bresp", false,-1, 1,0);
    tracep->declBit(c+58,"bvalid", false,-1);
    tracep->declBit(c+59,"bready", false,-1);
    tracep->declBus(c+106,"uart_state", false,-1, 31,0);
    tracep->declBus(c+107,"next_uart_state", false,-1, 31,0);
    tracep->declBus(c+108,"LFSR", false,-1, 31,0);
    tracep->declBus(c+109,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+110,"awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+111,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+112,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+113,"wstrb_reg", false,-1, 3,0);
    tracep->declBit(c+263,"addr_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBus(c+290,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+283,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+264,"clk", false,-1);
    tracep->declBit(c+265,"rst", false,-1);
    tracep->declBit(c+5,"wen", false,-1);
    tracep->declBit(c+4,"lsu_wb_valid", false,-1);
    tracep->declBit(c+273,"wb_lsu_ready", false,-1);
    tracep->declBus(c+7,"wdata", false,-1, 31,0);
    tracep->declBus(c+6,"waddr", false,-1, 4,0);
    tracep->declBus(c+176,"rs1", false,-1, 4,0);
    tracep->declBus(c+177,"rs2", false,-1, 4,0);
    tracep->declBus(c+266,"src1", false,-1, 31,0);
    tracep->declBus(c+267,"src2", false,-1, 31,0);
    tracep->declBit(c+15,"wb_valid", false,-1);
    tracep->declBit(c+14,"lsu_wb_flush", false,-1);
    tracep->declBus(c+2,"lsu_wb_pc", false,-1, 31,0);
    tracep->declBus(c+197,"raddr_csr1", false,-1, 11,0);
    tracep->declBus(c+198,"raddr_csr2", false,-1, 11,0);
    tracep->declBit(c+12,"wen_csr1", false,-1);
    tracep->declBit(c+13,"wen_csr2", false,-1);
    tracep->declBus(c+8,"wdata_csr1", false,-1, 31,0);
    tracep->declBus(c+9,"wdata_csr2", false,-1, 31,0);
    tracep->declBus(c+10,"waddr_csr1", false,-1, 11,0);
    tracep->declBus(c+11,"waddr_csr2", false,-1, 11,0);
    tracep->declBus(c+200,"rdata_csr1", false,-1, 31,0);
    tracep->declBus(c+268,"rdata_csr2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+114+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBit(c+146,"flush", false,-1);
    tracep->declBus(c+147,"i", false,-1, 31,0);
    tracep->declBus(c+1,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vrv32e___024root__trace_init_top(Vrv32e___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root__trace_init_top\n"); );
    // Body
    Vrv32e___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vrv32e___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrv32e___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrv32e___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vrv32e___024root__trace_register(Vrv32e___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vrv32e___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vrv32e___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vrv32e___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vrv32e___024root__trace_full_sub_0(Vrv32e___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vrv32e___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root__trace_full_top_0\n"); );
    // Init
    Vrv32e___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrv32e___024root*>(voidSelf);
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vrv32e___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vrv32e___024root__trace_full_sub_0(Vrv32e___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->rv32e__DOT__wbu__DOT__k),32);
    bufp->fullIData(oldp+2,(vlSelf->rv32e__DOT__lsu_wb_pc),32);
    bufp->fullIData(oldp+3,(vlSelf->rv32e__DOT__lsu_wb_inst),32);
    bufp->fullBit(oldp+4,(vlSelf->rv32e__DOT__lsu_wb_valid));
    bufp->fullBit(oldp+5,(vlSelf->rv32e__DOT__lsu_wb_RegWrite));
    bufp->fullCData(oldp+6,(vlSelf->rv32e__DOT__lsu_wb_rd),5);
    bufp->fullIData(oldp+7,(vlSelf->rv32e__DOT__lsu_wb_write_rd_data),32);
    bufp->fullIData(oldp+8,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1),32);
    bufp->fullIData(oldp+9,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2),32);
    bufp->fullSData(oldp+10,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1),12);
    bufp->fullSData(oldp+11,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2),12);
    bufp->fullBit(oldp+12,(vlSelf->rv32e__DOT__lsu_wb_csr_wen1));
    bufp->fullBit(oldp+13,(vlSelf->rv32e__DOT__lsu_wb_csr_wen2));
    bufp->fullBit(oldp+14,(vlSelf->rv32e__DOT__lsu_wb_flush));
    bufp->fullBit(oldp+15,(vlSelf->rv32e__DOT__wb_valid));
    bufp->fullCData(oldp+16,(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr),5);
    bufp->fullBit(oldp+17,(vlSelf->rv32e__DOT__lsu__DOT__l_rd_en));
    bufp->fullBit(oldp+18,(vlSelf->rv32e__DOT__lsu__DOT__l_load));
    bufp->fullBit(oldp+19,(vlSelf->rv32e__DOT__lsu_sram_arvalid));
    bufp->fullIData(oldp+20,(vlSelf->rv32e__DOT__lsu_sram_araddr),32);
    bufp->fullBit(oldp+21,(vlSelf->rv32e__DOT__lsu_sram_rready));
    bufp->fullIData(oldp+22,(vlSelf->rv32e__DOT__lsu_sram_awaddr),32);
    bufp->fullBit(oldp+23,(vlSelf->rv32e__DOT__lsu_sram_awvalid));
    bufp->fullBit(oldp+24,(vlSelf->rv32e__DOT__sram_lsu_awready));
    bufp->fullIData(oldp+25,(vlSelf->rv32e__DOT__lsu_sram_wdata),32);
    bufp->fullCData(oldp+26,(vlSelf->rv32e__DOT__lsu_sram_wstrb),4);
    bufp->fullBit(oldp+27,(vlSelf->rv32e__DOT__lsu_sram_wvalid));
    bufp->fullBit(oldp+28,(vlSelf->rv32e__DOT__sram_lsu_wready));
    bufp->fullCData(oldp+29,(vlSelf->rv32e__DOT__sram_lsu_bresp),2);
    bufp->fullBit(oldp+30,(vlSelf->rv32e__DOT__sram_lsu_bvalid));
    bufp->fullBit(oldp+31,(vlSelf->rv32e__DOT__lsu_sram_bready));
    bufp->fullBit(oldp+32,(vlSelf->rv32e__DOT__sram_arready));
    bufp->fullIData(oldp+33,(vlSelf->rv32e__DOT__sram_rdata),32);
    bufp->fullBit(oldp+34,(vlSelf->rv32e__DOT__sram_rvalid));
    bufp->fullCData(oldp+35,(vlSelf->rv32e__DOT__sram_rresp),2);
    bufp->fullIData(oldp+36,(vlSelf->rv32e__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+37,(vlSelf->rv32e__DOT__sram_awvalid));
    bufp->fullBit(oldp+38,(vlSelf->rv32e__DOT__sram_awready));
    bufp->fullIData(oldp+39,(vlSelf->rv32e__DOT__sram_wdata),32);
    bufp->fullCData(oldp+40,(vlSelf->rv32e__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+41,(vlSelf->rv32e__DOT__sram_wvalid));
    bufp->fullBit(oldp+42,(vlSelf->rv32e__DOT__sram_wready));
    bufp->fullCData(oldp+43,(vlSelf->rv32e__DOT__sram_bresp),2);
    bufp->fullBit(oldp+44,(vlSelf->rv32e__DOT__sram_bvalid));
    bufp->fullBit(oldp+45,(vlSelf->rv32e__DOT__sram_bready));
    bufp->fullBit(oldp+46,(vlSelf->rv32e__DOT__uart_arready));
    bufp->fullCData(oldp+47,(vlSelf->rv32e__DOT__uart_rresp),2);
    bufp->fullIData(oldp+48,(vlSelf->rv32e__DOT__uart_rdata),32);
    bufp->fullBit(oldp+49,(vlSelf->rv32e__DOT__uart_rvalid));
    bufp->fullIData(oldp+50,(vlSelf->rv32e__DOT__uart_awaddr),32);
    bufp->fullBit(oldp+51,(vlSelf->rv32e__DOT__uart_awready));
    bufp->fullBit(oldp+52,(vlSelf->rv32e__DOT__uart_awvalid));
    bufp->fullIData(oldp+53,(vlSelf->rv32e__DOT__uart_wdata),32);
    bufp->fullCData(oldp+54,(vlSelf->rv32e__DOT__uart_wstrb),4);
    bufp->fullBit(oldp+55,(vlSelf->rv32e__DOT__uart_wvalid));
    bufp->fullBit(oldp+56,(vlSelf->rv32e__DOT__uart_wready));
    bufp->fullCData(oldp+57,(vlSelf->rv32e__DOT__uart_bresp),2);
    bufp->fullBit(oldp+58,(vlSelf->rv32e__DOT__uart_bvalid));
    bufp->fullBit(oldp+59,(vlSelf->rv32e__DOT__uart_bready));
    bufp->fullBit(oldp+60,(vlSelf->rv32e__DOT__clint_arready));
    bufp->fullCData(oldp+61,(vlSelf->rv32e__DOT__clint_rresp),2);
    bufp->fullIData(oldp+62,(vlSelf->rv32e__DOT__clint_rdata),32);
    bufp->fullBit(oldp+63,(vlSelf->rv32e__DOT__clint_rvalid));
    bufp->fullIData(oldp+64,(vlSelf->rv32e__DOT__clint_awaddr),32);
    bufp->fullBit(oldp+65,(vlSelf->rv32e__DOT__clint_awready));
    bufp->fullBit(oldp+66,(vlSelf->rv32e__DOT__clint_awvalid));
    bufp->fullIData(oldp+67,(vlSelf->rv32e__DOT__clint_wdata),32);
    bufp->fullCData(oldp+68,(vlSelf->rv32e__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+69,(vlSelf->rv32e__DOT__clint_wvalid));
    bufp->fullBit(oldp+70,(vlSelf->rv32e__DOT__clint_wready));
    bufp->fullCData(oldp+71,(vlSelf->rv32e__DOT__clint_bresp),2);
    bufp->fullBit(oldp+72,(vlSelf->rv32e__DOT__clint_bvalid));
    bufp->fullBit(oldp+73,(vlSelf->rv32e__DOT__clint_bready));
    bufp->fullCData(oldp+74,(vlSelf->rv32e__DOT__axi_arb__DOT__current_master),3);
    bufp->fullIData(oldp+75,(vlSelf->rv32e__DOT__clint__DOT__clint_state),32);
    bufp->fullIData(oldp+76,(vlSelf->rv32e__DOT__clint__DOT__next_clint_state),32);
    bufp->fullIData(oldp+77,(vlSelf->rv32e__DOT__clint__DOT__LFSR),32);
    bufp->fullIData(oldp+78,(vlSelf->rv32e__DOT__clint__DOT__araddr_reg),32);
    bufp->fullIData(oldp+79,(vlSelf->rv32e__DOT__clint__DOT__awaddr_reg),32);
    bufp->fullIData(oldp+80,(vlSelf->rv32e__DOT__clint__DOT__wdata_reg),32);
    bufp->fullIData(oldp+81,(vlSelf->rv32e__DOT__clint__DOT__rdata_reg),32);
    bufp->fullCData(oldp+82,(vlSelf->rv32e__DOT__clint__DOT__wstrb_reg),4);
    bufp->fullQData(oldp+83,(vlSelf->rv32e__DOT__clint__DOT__mtime),64);
    bufp->fullIData(oldp+85,((IData)(vlSelf->rv32e__DOT__clint__DOT__mtime)),32);
    bufp->fullIData(oldp+86,((IData)((vlSelf->rv32e__DOT__clint__DOT__mtime 
                                      >> 0x20U))),32);
    bufp->fullBit(oldp+87,(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition));
    bufp->fullIData(oldp+88,(vlSelf->rv32e__DOT__lsu__DOT__l_inst),32);
    bufp->fullIData(oldp+89,(vlSelf->rv32e__DOT__lsu__DOT__l_pc),32);
    bufp->fullCData(oldp+90,(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen),3);
    bufp->fullCData(oldp+91,(vlSelf->rv32e__DOT__lsu__DOT__l_opcode),7);
    bufp->fullBit(oldp+92,(vlSelf->rv32e__DOT__lsu__DOT__read_pending));
    bufp->fullBit(oldp+93,(vlSelf->rv32e__DOT__lsu__DOT__write_pending));
    bufp->fullBit(oldp+94,(vlSelf->rv32e__DOT__lsu__DOT__read_valid));
    bufp->fullBit(oldp+95,(vlSelf->rv32e__DOT__lsu__DOT__write_valid));
    bufp->fullIData(oldp+96,(vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data),32);
    bufp->fullIData(oldp+97,(((0U == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                               ? (0xffU & vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data)
                               : ((4U == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                   ? (((- (IData)((1U 
                                                   & (vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                                                      >> 7U)))) 
                                       << 8U) | (0xffU 
                                                 & vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data))
                                   : ((3U == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                       ? (0xffffU & vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data)
                                       : ((1U == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data))
                                           : ((2U == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                               ? vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data
                                               : 0U)))))),32);
    bufp->fullIData(oldp+98,(vlSelf->rv32e__DOT__sram__DOT__read_addr),32);
    bufp->fullIData(oldp+99,(vlSelf->rv32e__DOT__sram__DOT__LFSR),32);
    bufp->fullBit(oldp+100,(vlSelf->rv32e__DOT__sram__DOT__read_pending));
    bufp->fullIData(oldp+101,(vlSelf->rv32e__DOT__sram__DOT__write_addr),32);
    bufp->fullBit(oldp+102,(vlSelf->rv32e__DOT__sram__DOT__write_addr_valid));
    bufp->fullIData(oldp+103,(vlSelf->rv32e__DOT__sram__DOT__write_data),32);
    bufp->fullCData(oldp+104,(vlSelf->rv32e__DOT__sram__DOT__write_strb),4);
    bufp->fullBit(oldp+105,(vlSelf->rv32e__DOT__sram__DOT__write_data_valid));
    bufp->fullIData(oldp+106,(vlSelf->rv32e__DOT__uart__DOT__uart_state),32);
    bufp->fullIData(oldp+107,(vlSelf->rv32e__DOT__uart__DOT__next_uart_state),32);
    bufp->fullIData(oldp+108,(vlSelf->rv32e__DOT__uart__DOT__LFSR),32);
    bufp->fullIData(oldp+109,(vlSelf->rv32e__DOT__uart__DOT__araddr_reg),32);
    bufp->fullIData(oldp+110,(vlSelf->rv32e__DOT__uart__DOT__awaddr_reg),32);
    bufp->fullIData(oldp+111,(vlSelf->rv32e__DOT__uart__DOT__wdata_reg),32);
    bufp->fullIData(oldp+112,(vlSelf->rv32e__DOT__uart__DOT__rdata_reg),32);
    bufp->fullCData(oldp+113,(vlSelf->rv32e__DOT__uart__DOT__wstrb_reg),4);
    bufp->fullIData(oldp+114,(vlSelf->rv32e__DOT__wbu__DOT__regs[0]),32);
    bufp->fullIData(oldp+115,(vlSelf->rv32e__DOT__wbu__DOT__regs[1]),32);
    bufp->fullIData(oldp+116,(vlSelf->rv32e__DOT__wbu__DOT__regs[2]),32);
    bufp->fullIData(oldp+117,(vlSelf->rv32e__DOT__wbu__DOT__regs[3]),32);
    bufp->fullIData(oldp+118,(vlSelf->rv32e__DOT__wbu__DOT__regs[4]),32);
    bufp->fullIData(oldp+119,(vlSelf->rv32e__DOT__wbu__DOT__regs[5]),32);
    bufp->fullIData(oldp+120,(vlSelf->rv32e__DOT__wbu__DOT__regs[6]),32);
    bufp->fullIData(oldp+121,(vlSelf->rv32e__DOT__wbu__DOT__regs[7]),32);
    bufp->fullIData(oldp+122,(vlSelf->rv32e__DOT__wbu__DOT__regs[8]),32);
    bufp->fullIData(oldp+123,(vlSelf->rv32e__DOT__wbu__DOT__regs[9]),32);
    bufp->fullIData(oldp+124,(vlSelf->rv32e__DOT__wbu__DOT__regs[10]),32);
    bufp->fullIData(oldp+125,(vlSelf->rv32e__DOT__wbu__DOT__regs[11]),32);
    bufp->fullIData(oldp+126,(vlSelf->rv32e__DOT__wbu__DOT__regs[12]),32);
    bufp->fullIData(oldp+127,(vlSelf->rv32e__DOT__wbu__DOT__regs[13]),32);
    bufp->fullIData(oldp+128,(vlSelf->rv32e__DOT__wbu__DOT__regs[14]),32);
    bufp->fullIData(oldp+129,(vlSelf->rv32e__DOT__wbu__DOT__regs[15]),32);
    bufp->fullIData(oldp+130,(vlSelf->rv32e__DOT__wbu__DOT__regs[16]),32);
    bufp->fullIData(oldp+131,(vlSelf->rv32e__DOT__wbu__DOT__regs[17]),32);
    bufp->fullIData(oldp+132,(vlSelf->rv32e__DOT__wbu__DOT__regs[18]),32);
    bufp->fullIData(oldp+133,(vlSelf->rv32e__DOT__wbu__DOT__regs[19]),32);
    bufp->fullIData(oldp+134,(vlSelf->rv32e__DOT__wbu__DOT__regs[20]),32);
    bufp->fullIData(oldp+135,(vlSelf->rv32e__DOT__wbu__DOT__regs[21]),32);
    bufp->fullIData(oldp+136,(vlSelf->rv32e__DOT__wbu__DOT__regs[22]),32);
    bufp->fullIData(oldp+137,(vlSelf->rv32e__DOT__wbu__DOT__regs[23]),32);
    bufp->fullIData(oldp+138,(vlSelf->rv32e__DOT__wbu__DOT__regs[24]),32);
    bufp->fullIData(oldp+139,(vlSelf->rv32e__DOT__wbu__DOT__regs[25]),32);
    bufp->fullIData(oldp+140,(vlSelf->rv32e__DOT__wbu__DOT__regs[26]),32);
    bufp->fullIData(oldp+141,(vlSelf->rv32e__DOT__wbu__DOT__regs[27]),32);
    bufp->fullIData(oldp+142,(vlSelf->rv32e__DOT__wbu__DOT__regs[28]),32);
    bufp->fullIData(oldp+143,(vlSelf->rv32e__DOT__wbu__DOT__regs[29]),32);
    bufp->fullIData(oldp+144,(vlSelf->rv32e__DOT__wbu__DOT__regs[30]),32);
    bufp->fullIData(oldp+145,(vlSelf->rv32e__DOT__wbu__DOT__regs[31]),32);
    bufp->fullBit(oldp+146,(vlSelf->rv32e__DOT__wbu__DOT__flush));
    bufp->fullIData(oldp+147,(vlSelf->rv32e__DOT__wbu__DOT__i),32);
    bufp->fullIData(oldp+148,(vlSelf->rv32e__DOT__ex_lsu_pc),32);
    bufp->fullIData(oldp+149,(vlSelf->rv32e__DOT__ex_lsu_inst),32);
    bufp->fullBit(oldp+150,(vlSelf->rv32e__DOT__ex_lsu_valid));
    bufp->fullIData(oldp+151,(vlSelf->rv32e__DOT__ex_lsu_src2),32);
    bufp->fullBit(oldp+152,(vlSelf->rv32e__DOT__ex_lsu_RegWrite));
    bufp->fullCData(oldp+153,(vlSelf->rv32e__DOT__ex_lsu_rd),5);
    bufp->fullBit(oldp+154,(vlSelf->rv32e__DOT__ex_lsu_MemRead));
    bufp->fullBit(oldp+155,(vlSelf->rv32e__DOT__ex_lsu_MemWrite));
    bufp->fullCData(oldp+156,(vlSelf->rv32e__DOT__ex_lsu_MemLen),3);
    bufp->fullIData(oldp+157,(vlSelf->rv32e__DOT__ex_lsu_process_result),32);
    bufp->fullBit(oldp+158,(vlSelf->rv32e__DOT__ex_lsu_csr));
    bufp->fullBit(oldp+159,(vlSelf->rv32e__DOT__ex_lsu_csr_wen1));
    bufp->fullBit(oldp+160,(vlSelf->rv32e__DOT__ex_lsu_csr_wen2));
    bufp->fullSData(oldp+161,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1),12);
    bufp->fullSData(oldp+162,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2),12);
    bufp->fullIData(oldp+163,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1),32);
    bufp->fullIData(oldp+164,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2),32);
    bufp->fullIData(oldp+165,(vlSelf->rv32e__DOT__ex_lsu_csr_rdata),32);
    bufp->fullBit(oldp+166,(vlSelf->rv32e__DOT__ex_lsu_csr_ecall));
    bufp->fullBit(oldp+167,(vlSelf->rv32e__DOT__ex_lsu_csr_mret));
    bufp->fullIData(oldp+168,(vlSelf->rv32e__DOT__ex_lsu_imm),32);
    bufp->fullCData(oldp+169,(vlSelf->rv32e__DOT__ex_lsu_opcode),7);
    bufp->fullBit(oldp+170,(vlSelf->rv32e__DOT__ex_lsu_forward_las));
    bufp->fullIData(oldp+171,(vlSelf->rv32e__DOT__id_ex_pc),32);
    bufp->fullIData(oldp+172,(vlSelf->rv32e__DOT__id_ex_inst),32);
    bufp->fullBit(oldp+173,(vlSelf->rv32e__DOT__id_valid));
    bufp->fullBit(oldp+174,(vlSelf->rv32e__DOT__id_ex_RegWrite));
    bufp->fullCData(oldp+175,(vlSelf->rv32e__DOT__id_ex_rd),5);
    bufp->fullCData(oldp+176,(vlSelf->rv32e__DOT__id_wb_rs1),5);
    bufp->fullCData(oldp+177,(vlSelf->rv32e__DOT__id_wb_rs2),5);
    bufp->fullCData(oldp+178,(vlSelf->rv32e__DOT__id_ex_zimm),5);
    bufp->fullIData(oldp+179,(vlSelf->rv32e__DOT__id_ex_imm),32);
    bufp->fullCData(oldp+180,(vlSelf->rv32e__DOT__id_ex_shamt),6);
    bufp->fullCData(oldp+181,(vlSelf->rv32e__DOT__id_ex_alu_op),4);
    bufp->fullCData(oldp+182,(vlSelf->rv32e__DOT__id_ex_MemLen),3);
    bufp->fullBit(oldp+183,(vlSelf->rv32e__DOT__id_ex_MemWrite));
    bufp->fullBit(oldp+184,(vlSelf->rv32e__DOT__id_ex_MemRead));
    bufp->fullCData(oldp+185,(vlSelf->rv32e__DOT__id_ex_opcode),7);
    bufp->fullCData(oldp+186,(vlSelf->rv32e__DOT__id_ex_func3),3);
    bufp->fullBit(oldp+187,(vlSelf->rv32e__DOT__id_ex_jal));
    bufp->fullBit(oldp+188,(vlSelf->rv32e__DOT__id_ex_jalr));
    bufp->fullBit(oldp+189,(vlSelf->rv32e__DOT__id_ex_csr));
    bufp->fullBit(oldp+190,(vlSelf->rv32e__DOT__id_ex_csr_wen1));
    bufp->fullBit(oldp+191,(vlSelf->rv32e__DOT__id_ex_csr_wen2));
    bufp->fullBit(oldp+192,(vlSelf->rv32e__DOT__id_ex_csr_ecall));
    bufp->fullBit(oldp+193,(vlSelf->rv32e__DOT__id_ex_csr_mret));
    bufp->fullCData(oldp+194,(vlSelf->rv32e__DOT__id_ex_csr_op),2);
    bufp->fullSData(oldp+195,(vlSelf->rv32e__DOT__id_ex_csr_wr_addr1),12);
    bufp->fullSData(oldp+196,(vlSelf->rv32e__DOT__id_ex_csr_wr_addr2),12);
    bufp->fullSData(oldp+197,(vlSelf->rv32e__DOT__id_wb_csr_addr1),12);
    bufp->fullSData(oldp+198,(vlSelf->rv32e__DOT__id_wb_csr_addr2),12);
    bufp->fullBit(oldp+199,(vlSelf->rv32e__DOT__lsu_ex_ready));
    bufp->fullIData(oldp+200,(vlSelf->rv32e__DOT__wb_ex_csr_num1),32);
    bufp->fullIData(oldp+201,(((IData)(vlSelf->rv32e__DOT__id_ex_csr_ecall)
                                ? vlSelf->rv32e__DOT__id_ex_pc
                                : 0U)),32);
    bufp->fullIData(oldp+202,((0x80U | ((0xffffe7f7U 
                                         & vlSelf->rv32e__DOT__wb_ex_csr_num1) 
                                        | (8U & (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                                 >> 4U))))),32);
    bufp->fullIData(oldp+203,((1U & (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                     >> 7U))),32);
    bufp->fullIData(oldp+204,(vlSelf->rv32e__DOT__idu__DOT__inst_type),32);
    bufp->fullBit(oldp+205,(vlSelf->rv32e__DOT__ex_ready));
    bufp->fullIData(oldp+206,(vlSelf->rv32e__DOT__exu__DOT__src1),32);
    bufp->fullIData(oldp+207,(vlSelf->rv32e__DOT__exu__DOT__src2),32);
    bufp->fullIData(oldp+208,(vlSelf->rv32e__DOT__exu__DOT__ex_num1),32);
    bufp->fullIData(oldp+209,(vlSelf->rv32e__DOT__exu__DOT__ex_num2),32);
    bufp->fullIData(oldp+210,(vlSelf->rv32e__DOT__exu__DOT__process_result),32);
    bufp->fullBit(oldp+211,(vlSelf->rv32e__DOT__exu__DOT__alu_zero));
    bufp->fullBit(oldp+212,(vlSelf->rv32e__DOT__exu__DOT__alu_less));
    bufp->fullCData(oldp+213,(vlSelf->rv32e__DOT__exu__DOT__load_use_flag),4);
    bufp->fullIData(oldp+214,(vlSelf->rv32e__DOT__lsu__DOT__rd_data),32);
    bufp->fullIData(oldp+215,(vlSelf->rv32e__DOT__IF_ID_pc),32);
    bufp->fullIData(oldp+216,(vlSelf->rv32e__DOT__IF_ID_inst),32);
    bufp->fullBit(oldp+217,(vlSelf->rv32e__DOT__IF_valid));
    bufp->fullBit(oldp+218,(vlSelf->rv32e__DOT__if_sram_arvalid));
    bufp->fullIData(oldp+219,(vlSelf->rv32e__DOT__if_sram_araddr),32);
    bufp->fullBit(oldp+220,(vlSelf->rv32e__DOT__if_sram_rready));
    bufp->fullCData(oldp+221,((0x7fU & vlSelf->rv32e__DOT__IF_ID_inst)),7);
    bufp->fullCData(oldp+222,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+223,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+224,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+225,((7U & (vlSelf->rv32e__DOT__IF_ID_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+226,((vlSelf->rv32e__DOT__IF_ID_inst 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+227,((0x3fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                        >> 0x14U))),6);
    bufp->fullCData(oldp+228,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                        >> 2U))),5);
    bufp->fullIData(oldp+229,(vlSelf->rv32e__DOT__idu__DOT__immI),32);
    bufp->fullIData(oldp+230,((0xfffff000U & vlSelf->rv32e__DOT__IF_ID_inst)),32);
    bufp->fullIData(oldp+231,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+232,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
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
    bufp->fullIData(oldp+233,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->rv32e__DOT__IF_ID_inst) 
                                             | ((0x800U 
                                                 & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+234,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                        >> 0xfU))),32);
    bufp->fullCData(oldp+235,(vlSelf->rv32e__DOT__ifu__DOT__state),2);
    bufp->fullIData(oldp+236,(vlSelf->rv32e__DOT__ifu__DOT__next_pc),32);
    bufp->fullBit(oldp+237,(vlSelf->rv32e__DOT__ifu__DOT__once));
    bufp->fullBit(oldp+238,(vlSelf->rv32e__DOT__id_ready));
    bufp->fullBit(oldp+239,(vlSelf->rv32e__DOT__ex_flush));
    bufp->fullIData(oldp+240,(vlSelf->rv32e__DOT__ex_flush_pc),32);
    bufp->fullBit(oldp+241,(vlSelf->rv32e__DOT__sram_lsu_arready));
    bufp->fullIData(oldp+242,(vlSelf->rv32e__DOT__sram_lsu_rdata),32);
    bufp->fullBit(oldp+243,(vlSelf->rv32e__DOT__sram_lsu_rvalid));
    bufp->fullCData(oldp+244,(vlSelf->rv32e__DOT__sram_lsu_rresp),2);
    bufp->fullBit(oldp+245,(vlSelf->rv32e__DOT__sram_if_arready));
    bufp->fullIData(oldp+246,(vlSelf->rv32e__DOT__sram_if_rdata),32);
    bufp->fullBit(oldp+247,(vlSelf->rv32e__DOT__sram_if_rvalid));
    bufp->fullCData(oldp+248,(vlSelf->rv32e__DOT__sram_if_rresp),2);
    bufp->fullBit(oldp+249,(vlSelf->rv32e__DOT__sram_arvalid));
    bufp->fullIData(oldp+250,(vlSelf->rv32e__DOT__sram_araddr),32);
    bufp->fullBit(oldp+251,(vlSelf->rv32e__DOT__sram_rready));
    bufp->fullIData(oldp+252,(vlSelf->rv32e__DOT__uart_araddr),32);
    bufp->fullBit(oldp+253,(vlSelf->rv32e__DOT__uart_arvalid));
    bufp->fullBit(oldp+254,(vlSelf->rv32e__DOT__uart_rready));
    bufp->fullIData(oldp+255,(vlSelf->rv32e__DOT__clint_araddr),32);
    bufp->fullBit(oldp+256,(vlSelf->rv32e__DOT__clint_arvalid));
    bufp->fullBit(oldp+257,(vlSelf->rv32e__DOT__clint_rready));
    bufp->fullCData(oldp+258,(vlSelf->rv32e__DOT__axi_arb__DOT__next_master),3);
    bufp->fullBit(oldp+259,(vlSelf->rv32e__DOT__clint__DOT__addr_valid));
    bufp->fullIData(oldp+260,(vlSelf->rv32e__DOT__exu__DOT__jal_target),32);
    bufp->fullIData(oldp+261,(vlSelf->rv32e__DOT__exu__DOT__jalr_target),32);
    bufp->fullBit(oldp+262,(vlSelf->rv32e__DOT__exu__DOT__take_branch));
    bufp->fullBit(oldp+263,(vlSelf->rv32e__DOT__uart__DOT__addr_valid));
    bufp->fullBit(oldp+264,(vlSelf->clk));
    bufp->fullBit(oldp+265,(vlSelf->reset));
    bufp->fullIData(oldp+266,(((0U == (IData)(vlSelf->rv32e__DOT__id_wb_rs1))
                                ? 0U : vlSelf->rv32e__DOT__wbu__DOT__regs
                               [vlSelf->rv32e__DOT__id_wb_rs1])),32);
    bufp->fullIData(oldp+267,(((0U == (IData)(vlSelf->rv32e__DOT__id_wb_rs2))
                                ? 0U : vlSelf->rv32e__DOT__wbu__DOT__regs
                               [vlSelf->rv32e__DOT__id_wb_rs2])),32);
    bufp->fullIData(oldp+268,(vlSelf->rv32e__DOT__wbu__DOT__CSR
                              [vlSelf->rv32e__DOT__id_wb_csr_addr2]),32);
    bufp->fullIData(oldp+269,((((1U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
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
                                                : (
                                                   ((2U 
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
    bufp->fullCData(oldp+270,((((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h9653a62d__0) 
                                << 1U) | (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h666fa1ae__0))),2);
    bufp->fullCData(oldp+271,((((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0) 
                                << 1U) | (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h3556a05f__0))),2);
    bufp->fullBit(oldp+272,(((IData)(vlSelf->rv32e__DOT__id_ex_MemWrite) 
                             & ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                                & ((IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite) 
                                   & ((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                      & ((0U != (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)) 
                                         & (((IData)(vlSelf->rv32e__DOT__ex_lsu_rd) 
                                             != (IData)(vlSelf->rv32e__DOT__id_wb_rs1)) 
                                            & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0)))))))));
    bufp->fullBit(oldp+273,(1U));
    bufp->fullCData(oldp+274,(0U),3);
    bufp->fullCData(oldp+275,(1U),3);
    bufp->fullCData(oldp+276,(2U),3);
    bufp->fullCData(oldp+277,(3U),3);
    bufp->fullCData(oldp+278,(4U),3);
    bufp->fullCData(oldp+279,(1U),2);
    bufp->fullCData(oldp+280,(2U),2);
    bufp->fullCData(oldp+281,(3U),2);
    bufp->fullCData(oldp+282,(0U),2);
    bufp->fullIData(oldp+283,(0x20U),32);
    bufp->fullIData(oldp+284,(4U),32);
    bufp->fullIData(oldp+285,(1U),32);
    bufp->fullIData(oldp+286,(0U),32);
    bufp->fullBit(oldp+287,(vlSelf->rv32e__DOT__ifu__DOT__flush_reg));
    bufp->fullBit(oldp+288,(vlSelf->rv32e__DOT__ifu__DOT__flush_once));
    bufp->fullIData(oldp+289,(vlSelf->rv32e__DOT__ifu__DOT__flush_pc_reg),32);
    bufp->fullIData(oldp+290,(5U),32);
}
