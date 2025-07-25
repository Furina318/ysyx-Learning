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
    tracep->declBit(c+220,"clk", false,-1);
    tracep->declBit(c+221,"reset", false,-1);
    tracep->pushNamePrefix("rv32e ");
    tracep->declBit(c+220,"clk", false,-1);
    tracep->declBit(c+221,"reset", false,-1);
    tracep->declBus(c+171,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+172,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+173,"IF_valid", false,-1);
    tracep->declBit(c+214,"id_ready", false,-1);
    tracep->declBus(c+135,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+136,"id_ex_inst", false,-1, 31,0);
    tracep->declBit(c+137,"id_valid", false,-1);
    tracep->declBit(c+161,"ex_ready", false,-1);
    tracep->declBit(c+138,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+139,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+140,"id_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+2,"id_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+141,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+142,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+3,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+4,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+143,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBit(c+144,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+145,"id_ex_MemRead", false,-1);
    tracep->declBus(c+146,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+147,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+5,"id_ex_jal", false,-1);
    tracep->declBit(c+6,"id_ex_jalr", false,-1);
    tracep->declBit(c+148,"id_ex_csr", false,-1);
    tracep->declBit(c+149,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+150,"id_ex_csr_wen2", false,-1);
    tracep->declBit(c+151,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+152,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+153,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBus(c+154,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+155,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+7,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+8,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBus(c+112,"ex_lsu_pc", false,-1, 31,0);
    tracep->declBus(c+113,"ex_lsu_inst", false,-1, 31,0);
    tracep->declBit(c+114,"ex_lsu_valid", false,-1);
    tracep->declBit(c+156,"lsu_ex_ready", false,-1);
    tracep->declBus(c+115,"ex_lsu_src2", false,-1, 31,0);
    tracep->declBit(c+116,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+117,"ex_lsu_rd", false,-1, 4,0);
    tracep->declBit(c+118,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+119,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+120,"ex_lsu_MemLen", false,-1, 2,0);
    tracep->declBus(c+121,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBit(c+215,"ex_flush", false,-1);
    tracep->declBus(c+216,"ex_flush_pc", false,-1, 31,0);
    tracep->declBit(c+122,"ex_lsu_csr", false,-1);
    tracep->declBit(c+123,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+124,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+125,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+126,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+127,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+128,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+129,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+130,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+131,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+132,"ex_lsu_imm", false,-1, 31,0);
    tracep->declBus(c+133,"ex_lsu_opcode", false,-1, 6,0);
    tracep->declBus(c+9,"lsu_wb_pc", false,-1, 31,0);
    tracep->declBus(c+10,"lsu_wb_inst", false,-1, 31,0);
    tracep->declBit(c+11,"lsu_wb_valid", false,-1);
    tracep->declBit(c+227,"wb_lsu_ready", false,-1);
    tracep->declBit(c+12,"lsu_wb_RegWrite", false,-1);
    tracep->declBus(c+13,"lsu_wb_rd", false,-1, 4,0);
    tracep->declBus(c+14,"lsu_wb_write_rd_data", false,-1, 31,0);
    tracep->declBus(c+15,"lsu_wb_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+16,"lsu_wb_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+17,"lsu_wb_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+18,"lsu_wb_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+19,"lsu_wb_csr_wen1", false,-1);
    tracep->declBit(c+20,"lsu_wb_csr_wen2", false,-1);
    tracep->declBit(c+21,"lsu_wb_flush", false,-1);
    tracep->declBit(c+22,"wb_valid", false,-1);
    tracep->declBus(c+222,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+23,"wb_ex_src2", false,-1, 31,0);
    tracep->declBus(c+157,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+24,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBus(c+25,"lsu_ex_forward_rd", false,-1, 4,0);
    tracep->declBit(c+26,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+27,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBit(c+134,"ex_lsu_forward_las", false,-1);
    tracep->declBit(c+28,"lsu_sram_arvalid", false,-1);
    tracep->declBit(c+29,"sram_lsu_arready", false,-1);
    tracep->declBus(c+30,"lsu_sram_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"sram_lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+32,"sram_lsu_rvalid", false,-1);
    tracep->declBit(c+33,"lsu_sram_rready", false,-1);
    tracep->declBus(c+34,"sram_lsu_rresp", false,-1, 1,0);
    tracep->declBus(c+35,"lsu_sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+36,"lsu_sram_awvalid", false,-1);
    tracep->declBit(c+37,"sram_lsu_awready", false,-1);
    tracep->declBus(c+38,"lsu_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+39,"lsu_sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+40,"lsu_sram_wvalid", false,-1);
    tracep->declBit(c+41,"sram_lsu_wready", false,-1);
    tracep->declBus(c+42,"sram_lsu_bresp", false,-1, 1,0);
    tracep->declBit(c+43,"sram_lsu_bvalid", false,-1);
    tracep->declBit(c+44,"lsu_sram_bready", false,-1);
    tracep->declBit(c+174,"if_sram_arvalid", false,-1);
    tracep->declBit(c+211,"sram_if_arready", false,-1);
    tracep->declBus(c+175,"if_sram_araddr", false,-1, 31,0);
    tracep->declBus(c+212,"sram_if_rdata", false,-1, 31,0);
    tracep->declBit(c+213,"sram_if_rvalid", false,-1);
    tracep->declBit(c+176,"if_sram_rready", false,-1);
    tracep->declBus(c+45,"sram_if_rresp", false,-1, 1,0);
    tracep->declBit(c+228,"sram_arvalid", false,-1);
    tracep->declBit(c+229,"sram_arready", false,-1);
    tracep->declBus(c+230,"sram_araddr", false,-1, 31,0);
    tracep->declBus(c+231,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+232,"sram_rvalid", false,-1);
    tracep->declBit(c+233,"sram_rready", false,-1);
    tracep->declBus(c+234,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+235,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+236,"sram_awvalid", false,-1);
    tracep->declBit(c+237,"sram_awready", false,-1);
    tracep->declBus(c+238,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+239,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+240,"sram_wvalid", false,-1);
    tracep->declBit(c+241,"sram_wready", false,-1);
    tracep->declBus(c+242,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+243,"sram_bvalid", false,-1);
    tracep->declBit(c+244,"sram_bready", false,-1);
    tracep->declBus(c+46,"inst_cnt", false,-1, 31,0);
    tracep->declBus(c+47,"cycle_cnt", false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+220,"clk", false,-1);
    tracep->declBit(c+221,"reset", false,-1);
    tracep->declBit(c+214,"id_ready", false,-1);
    tracep->declBit(c+137,"id_valid", false,-1);
    tracep->declBit(c+161,"ex_ready", false,-1);
    tracep->declBit(c+156,"lsu_ready", false,-1);
    tracep->declBit(c+114,"ex_lsu_valid", false,-1);
    tracep->declBus(c+140,"id_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+2,"id_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+25,"lsu_ex_forward_rd", false,-1, 4,0);
    tracep->declBit(c+26,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+27,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBus(c+14,"lsu_wb_wdata", false,-1, 31,0);
    tracep->declBus(c+13,"lsu_wb_rd", false,-1, 4,0);
    tracep->declBit(c+12,"lsu_wb_RegWrite", false,-1);
    tracep->declBit(c+11,"lsu_wb_valid", false,-1);
    tracep->declBit(c+134,"ex_lsu_forward_las", false,-1);
    tracep->declBus(c+136,"id_ex_inst", false,-1, 31,0);
    tracep->declBus(c+135,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+142,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+141,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+3,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+222,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+23,"wb_ex_src2", false,-1, 31,0);
    tracep->declBit(c+138,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+139,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+146,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+147,"id_ex_func3", false,-1, 2,0);
    tracep->declBus(c+4,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBit(c+5,"id_ex_jal", false,-1);
    tracep->declBit(c+6,"id_ex_jalr", false,-1);
    tracep->declBit(c+145,"id_ex_MemRead", false,-1);
    tracep->declBit(c+144,"id_ex_MemWrite", false,-1);
    tracep->declBus(c+143,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBus(c+157,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+24,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBit(c+148,"id_ex_csr", false,-1);
    tracep->declBit(c+149,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+150,"id_ex_csr_wen2", false,-1);
    tracep->declBus(c+154,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+155,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+151,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+152,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+153,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBit(c+215,"ex_flush", false,-1);
    tracep->declBus(c+216,"ex_flush_pc", false,-1, 31,0);
    tracep->declBus(c+113,"ex_lsu_inst", false,-1, 31,0);
    tracep->declBus(c+112,"ex_lsu_pc", false,-1, 31,0);
    tracep->declBus(c+115,"ex_lsu_src2", false,-1, 31,0);
    tracep->declBit(c+116,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+117,"ex_lsu_rd", false,-1, 4,0);
    tracep->declBit(c+118,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+119,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+120,"ex_lsu_MemLen", false,-1, 2,0);
    tracep->declBus(c+133,"ex_lsu_opcode", false,-1, 6,0);
    tracep->declBit(c+122,"ex_lsu_csr", false,-1);
    tracep->declBit(c+123,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+124,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+125,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+126,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+127,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+128,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+129,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+130,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+131,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+132,"ex_lsu_imm", false,-1, 31,0);
    tracep->declBus(c+121,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBus(c+162,"src1", false,-1, 31,0);
    tracep->declBus(c+163,"src2", false,-1, 31,0);
    tracep->declBus(c+164,"ex_num1", false,-1, 31,0);
    tracep->declBus(c+165,"ex_num2", false,-1, 31,0);
    tracep->declBus(c+166,"process_result", false,-1, 31,0);
    tracep->declBit(c+167,"alu_zero", false,-1);
    tracep->declBit(c+168,"alu_less", false,-1);
    tracep->declBus(c+217,"jal_target", false,-1, 31,0);
    tracep->declBus(c+218,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+219,"take_branch", false,-1);
    tracep->declBit(c+48,"ex_flush_condition", false,-1);
    tracep->declBus(c+158,"csr_write_ecall", false,-1, 31,0);
    tracep->declBus(c+159,"mstatus_t", false,-1, 31,0);
    tracep->declBus(c+160,"mpie", false,-1, 31,0);
    tracep->declBus(c+223,"csr_write_data", false,-1, 31,0);
    tracep->declBus(c+224,"forward_rs1", false,-1, 1,0);
    tracep->declBus(c+225,"forward_rs2", false,-1, 1,0);
    tracep->declBit(c+226,"forward_las", false,-1);
    tracep->declBus(c+169,"load_use_flag", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+220,"clk", false,-1);
    tracep->declBit(c+221,"reset", false,-1);
    tracep->declBus(c+171,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+172,"if_id_inst", false,-1, 31,0);
    tracep->declBit(c+215,"ex_flush", false,-1);
    tracep->declBit(c+173,"if_valid", false,-1);
    tracep->declBit(c+214,"id_ready", false,-1);
    tracep->declBit(c+161,"ex_ready", false,-1);
    tracep->declBit(c+137,"id_valid", false,-1);
    tracep->declBus(c+135,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+136,"id_ex_inst", false,-1, 31,0);
    tracep->declBit(c+138,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+139,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+140,"id_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+2,"id_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+141,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+142,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+3,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+4,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+143,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBit(c+144,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+145,"id_ex_MemRead", false,-1);
    tracep->declBus(c+146,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+147,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+5,"id_ex_jal", false,-1);
    tracep->declBit(c+6,"id_ex_jalr", false,-1);
    tracep->declBit(c+148,"id_ex_csr", false,-1);
    tracep->declBit(c+149,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+150,"id_ex_csr_wen2", false,-1);
    tracep->declBit(c+151,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+152,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+153,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBus(c+154,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+155,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+7,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+8,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBus(c+172,"instr", false,-1, 31,0);
    tracep->declBus(c+177,"immI", false,-1, 31,0);
    tracep->declBus(c+178,"immU", false,-1, 31,0);
    tracep->declBus(c+179,"immS", false,-1, 31,0);
    tracep->declBus(c+180,"immB", false,-1, 31,0);
    tracep->declBus(c+181,"immJ", false,-1, 31,0);
    tracep->declBus(c+245,"immR", false,-1, 31,0);
    tracep->declBus(c+182,"immCSR", false,-1, 31,0);
    tracep->declBus(c+183,"opcode", false,-1, 6,0);
    tracep->declBus(c+184,"rs1", false,-1, 4,0);
    tracep->declBus(c+185,"rs2", false,-1, 4,0);
    tracep->declBus(c+186,"rd", false,-1, 4,0);
    tracep->declBus(c+187,"func3", false,-1, 2,0);
    tracep->declBus(c+188,"func7", false,-1, 6,0);
    tracep->declBus(c+189,"shamt", false,-1, 5,0);
    tracep->declBus(c+190,"get_opcode", false,-1, 4,0);
    tracep->declBus(c+191,"imm", false,-1, 31,0);
    tracep->declBus(c+192,"alu_op", false,-1, 3,0);
    tracep->declBit(c+193,"MemRead", false,-1);
    tracep->declBit(c+194,"MemWrite", false,-1);
    tracep->declBus(c+195,"MemLen", false,-1, 2,0);
    tracep->declBit(c+196,"jal", false,-1);
    tracep->declBit(c+197,"jalr", false,-1);
    tracep->declBit(c+198,"csr", false,-1);
    tracep->declBit(c+199,"csr_ecall", false,-1);
    tracep->declBit(c+200,"csr_mret", false,-1);
    tracep->declBus(c+201,"csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+202,"csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+203,"csr_rd_addr1", false,-1, 11,0);
    tracep->declBus(c+204,"csr_rd_addr2", false,-1, 11,0);
    tracep->declBus(c+205,"csr_op", false,-1, 1,0);
    tracep->declBit(c+206,"csr_rd_en", false,-1);
    tracep->declBit(c+207,"rd_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+220,"clk", false,-1);
    tracep->declBit(c+221,"reset", false,-1);
    tracep->declBit(c+215,"EX_flush", false,-1);
    tracep->declBus(c+216,"EX_flush_pc", false,-1, 31,0);
    tracep->declBit(c+214,"ID_ready", false,-1);
    tracep->declBit(c+173,"IF_valid", false,-1);
    tracep->declBus(c+171,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+172,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+174,"if_sram_arvalid", false,-1);
    tracep->declBit(c+211,"sram_if_arready", false,-1);
    tracep->declBus(c+175,"if_sram_araddr", false,-1, 31,0);
    tracep->declBus(c+212,"sram_if_rdata", false,-1, 31,0);
    tracep->declBit(c+213,"sram_if_rvalid", false,-1);
    tracep->declBit(c+176,"if_sram_rready", false,-1);
    tracep->declBus(c+45,"sram_if_rresp", false,-1, 1,0);
    tracep->declBus(c+208,"state", false,-1, 1,0);
    tracep->declBus(c+246,"IDLE", false,-1, 1,0);
    tracep->declBus(c+247,"AR_WAIT", false,-1, 1,0);
    tracep->declBus(c+248,"R_WAIT", false,-1, 1,0);
    tracep->declBus(c+209,"next_pc", false,-1, 31,0);
    tracep->declBit(c+210,"once", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("isram ");
    tracep->declBit(c+220,"clk", false,-1);
    tracep->declBit(c+221,"rst", false,-1);
    tracep->declBit(c+174,"sram_arvalid", false,-1);
    tracep->declBit(c+211,"sram_arready", false,-1);
    tracep->declBus(c+175,"sram_araddr", false,-1, 31,0);
    tracep->declBus(c+212,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+213,"sram_rvalid", false,-1);
    tracep->declBit(c+176,"sram_rready", false,-1);
    tracep->declBus(c+45,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+245,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+249,"sram_awvalid", false,-1);
    tracep->declBit(c+49,"sram_awready", false,-1);
    tracep->declBus(c+245,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+250,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+249,"sram_wvalid", false,-1);
    tracep->declBit(c+50,"sram_wready", false,-1);
    tracep->declBus(c+51,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+52,"sram_bvalid", false,-1);
    tracep->declBit(c+249,"sram_bready", false,-1);
    tracep->declBus(c+246,"OKAY", false,-1, 1,0);
    tracep->declBus(c+251,"MIN_DELAY", false,-1, 31,0);
    tracep->declBus(c+252,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+53,"read_addr", false,-1, 31,0);
    tracep->declBus(c+54,"LFSR", false,-1, 31,0);
    tracep->declBit(c+55,"read_pending", false,-1);
    tracep->declBus(c+253,"write_addr", false,-1, 31,0);
    tracep->declBit(c+56,"write_addr_valid", false,-1);
    tracep->declBus(c+254,"write_data", false,-1, 31,0);
    tracep->declBus(c+255,"write_strb", false,-1, 3,0);
    tracep->declBit(c+57,"write_data_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+220,"clk", false,-1);
    tracep->declBit(c+221,"rst", false,-1);
    tracep->declBit(c+114,"ex_lsu_valid", false,-1);
    tracep->declBit(c+156,"lsu_ex_ready", false,-1);
    tracep->declBit(c+227,"wb_lsu_ready", false,-1);
    tracep->declBit(c+11,"lsu_wb_valid", false,-1);
    tracep->declBit(c+134,"ex_lsu_forward_las", false,-1);
    tracep->declBit(c+116,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+117,"ex_lsu_rd", false,-1, 4,0);
    tracep->declBit(c+118,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+119,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+120,"ex_lsu_MemLen", false,-1, 2,0);
    tracep->declBus(c+113,"ex_lsu_inst", false,-1, 31,0);
    tracep->declBus(c+112,"ex_lsu_pc", false,-1, 31,0);
    tracep->declBus(c+121,"addr", false,-1, 31,0);
    tracep->declBus(c+115,"data_in", false,-1, 31,0);
    tracep->declBus(c+132,"ex_lsu_imm", false,-1, 31,0);
    tracep->declBus(c+133,"ex_lsu_opcode", false,-1, 6,0);
    tracep->declBit(c+122,"ex_lsu_csr", false,-1);
    tracep->declBit(c+123,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+124,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+127,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+128,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+125,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+126,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+129,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+130,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+131,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+121,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBus(c+25,"lsu_ex_forward_rd", false,-1, 4,0);
    tracep->declBit(c+26,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+27,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBus(c+10,"lsu_wb_inst", false,-1, 31,0);
    tracep->declBus(c+9,"lsu_wb_pc", false,-1, 31,0);
    tracep->declBit(c+215,"ex_flush", false,-1);
    tracep->declBit(c+21,"lsu_wb_flush", false,-1);
    tracep->declBus(c+15,"lsu_wb_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+16,"lsu_wb_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+17,"lsu_wb_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+18,"lsu_wb_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+19,"lsu_wb_csr_wen1", false,-1);
    tracep->declBit(c+20,"lsu_wb_csr_wen2", false,-1);
    tracep->declBit(c+12,"lsu_wb_RegWrite", false,-1);
    tracep->declBus(c+13,"lsu_wb_rd", false,-1, 4,0);
    tracep->declBus(c+14,"lsu_wb_write_rd_data", false,-1, 31,0);
    tracep->declBit(c+28,"lsu_sram_arvalid", false,-1);
    tracep->declBit(c+29,"sram_lsu_arready", false,-1);
    tracep->declBus(c+30,"lsu_sram_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"sram_lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+32,"sram_lsu_rvalid", false,-1);
    tracep->declBit(c+33,"lsu_sram_rready", false,-1);
    tracep->declBus(c+34,"sram_lsu_rresp", false,-1, 1,0);
    tracep->declBus(c+35,"lsu_sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+36,"lsu_sram_awvalid", false,-1);
    tracep->declBit(c+37,"sram_lsu_awready", false,-1);
    tracep->declBus(c+38,"lsu_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+39,"lsu_sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+40,"lsu_sram_wvalid", false,-1);
    tracep->declBit(c+41,"sram_lsu_wready", false,-1);
    tracep->declBus(c+42,"sram_lsu_bresp", false,-1, 1,0);
    tracep->declBit(c+43,"sram_lsu_bvalid", false,-1);
    tracep->declBit(c+44,"lsu_sram_bready", false,-1);
    tracep->declBus(c+246,"OKAY", false,-1, 1,0);
    tracep->declBit(c+27,"l_load", false,-1);
    tracep->declBit(c+26,"l_rd_en", false,-1);
    tracep->declBus(c+25,"l_rd_addr", false,-1, 4,0);
    tracep->declBus(c+58,"l_inst", false,-1, 31,0);
    tracep->declBus(c+59,"l_pc", false,-1, 31,0);
    tracep->declBus(c+60,"l_MemLen", false,-1, 2,0);
    tracep->declBus(c+61,"l_opcode", false,-1, 6,0);
    tracep->declBit(c+62,"read_pending", false,-1);
    tracep->declBit(c+63,"write_pending", false,-1);
    tracep->declBit(c+64,"read_valid", false,-1);
    tracep->declBit(c+65,"write_valid", false,-1);
    tracep->declBus(c+66,"read_lsu_data", false,-1, 31,0);
    tracep->declBus(c+67,"wr_rd_data", false,-1, 31,0);
    tracep->declBus(c+170,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("msram ");
    tracep->declBit(c+220,"clk", false,-1);
    tracep->declBit(c+221,"rst", false,-1);
    tracep->declBit(c+28,"sram_arvalid", false,-1);
    tracep->declBit(c+29,"sram_arready", false,-1);
    tracep->declBus(c+30,"sram_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+32,"sram_rvalid", false,-1);
    tracep->declBit(c+33,"sram_rready", false,-1);
    tracep->declBus(c+34,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+35,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+36,"sram_awvalid", false,-1);
    tracep->declBit(c+37,"sram_awready", false,-1);
    tracep->declBus(c+38,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+39,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+40,"sram_wvalid", false,-1);
    tracep->declBit(c+41,"sram_wready", false,-1);
    tracep->declBus(c+42,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+43,"sram_bvalid", false,-1);
    tracep->declBit(c+44,"sram_bready", false,-1);
    tracep->declBus(c+246,"OKAY", false,-1, 1,0);
    tracep->declBus(c+251,"MIN_DELAY", false,-1, 31,0);
    tracep->declBus(c+252,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+68,"read_addr", false,-1, 31,0);
    tracep->declBus(c+69,"LFSR", false,-1, 31,0);
    tracep->declBit(c+70,"read_pending", false,-1);
    tracep->declBus(c+71,"write_addr", false,-1, 31,0);
    tracep->declBit(c+72,"write_addr_valid", false,-1);
    tracep->declBus(c+73,"write_data", false,-1, 31,0);
    tracep->declBus(c+74,"write_strb", false,-1, 3,0);
    tracep->declBit(c+75,"write_data_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declDouble(c+76,"IPC", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBus(c+256,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+257,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+220,"clk", false,-1);
    tracep->declBit(c+221,"rst", false,-1);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->declBit(c+11,"lsu_wb_valid", false,-1);
    tracep->declBit(c+227,"wb_lsu_ready", false,-1);
    tracep->declBus(c+14,"wdata", false,-1, 31,0);
    tracep->declBus(c+13,"waddr", false,-1, 4,0);
    tracep->declBus(c+140,"rs1", false,-1, 4,0);
    tracep->declBus(c+2,"rs2", false,-1, 4,0);
    tracep->declBus(c+222,"src1", false,-1, 31,0);
    tracep->declBus(c+23,"src2", false,-1, 31,0);
    tracep->declBit(c+22,"wb_valid", false,-1);
    tracep->declBit(c+21,"lsu_wb_flush", false,-1);
    tracep->declBus(c+7,"raddr_csr1", false,-1, 11,0);
    tracep->declBus(c+8,"raddr_csr2", false,-1, 11,0);
    tracep->declBit(c+19,"wen_csr1", false,-1);
    tracep->declBit(c+20,"wen_csr2", false,-1);
    tracep->declBus(c+15,"wdata_csr1", false,-1, 31,0);
    tracep->declBus(c+16,"wdata_csr2", false,-1, 31,0);
    tracep->declBus(c+17,"waddr_csr1", false,-1, 11,0);
    tracep->declBus(c+18,"waddr_csr2", false,-1, 11,0);
    tracep->declBus(c+157,"rdata_csr1", false,-1, 31,0);
    tracep->declBus(c+24,"rdata_csr2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+78+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBit(c+110,"flush", false,-1);
    tracep->declBus(c+111,"i", false,-1, 31,0);
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
    bufp->fullCData(oldp+2,(vlSelf->rv32e__DOT__id_wb_rs2),5);
    bufp->fullCData(oldp+3,(vlSelf->rv32e__DOT__id_ex_shamt),6);
    bufp->fullCData(oldp+4,(vlSelf->rv32e__DOT__id_ex_alu_op),4);
    bufp->fullBit(oldp+5,(vlSelf->rv32e__DOT__id_ex_jal));
    bufp->fullBit(oldp+6,(vlSelf->rv32e__DOT__id_ex_jalr));
    bufp->fullSData(oldp+7,(vlSelf->rv32e__DOT__id_wb_csr_addr1),12);
    bufp->fullSData(oldp+8,(vlSelf->rv32e__DOT__id_wb_csr_addr2),12);
    bufp->fullIData(oldp+9,(vlSelf->rv32e__DOT__lsu_wb_pc),32);
    bufp->fullIData(oldp+10,(vlSelf->rv32e__DOT__lsu_wb_inst),32);
    bufp->fullBit(oldp+11,(vlSelf->rv32e__DOT__lsu_wb_valid));
    bufp->fullBit(oldp+12,(vlSelf->rv32e__DOT__lsu_wb_RegWrite));
    bufp->fullCData(oldp+13,(vlSelf->rv32e__DOT__lsu_wb_rd),5);
    bufp->fullIData(oldp+14,(vlSelf->rv32e__DOT__lsu_wb_write_rd_data),32);
    bufp->fullIData(oldp+15,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1),32);
    bufp->fullIData(oldp+16,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2),32);
    bufp->fullSData(oldp+17,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1),12);
    bufp->fullSData(oldp+18,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2),12);
    bufp->fullBit(oldp+19,(vlSelf->rv32e__DOT__lsu_wb_csr_wen1));
    bufp->fullBit(oldp+20,(vlSelf->rv32e__DOT__lsu_wb_csr_wen2));
    bufp->fullBit(oldp+21,(vlSelf->rv32e__DOT__lsu_wb_flush));
    bufp->fullBit(oldp+22,(vlSelf->rv32e__DOT__wb_valid));
    bufp->fullIData(oldp+23,(((0U == (IData)(vlSelf->rv32e__DOT__id_wb_rs2))
                               ? 0U : vlSelf->rv32e__DOT__wbu__DOT__regs
                              [vlSelf->rv32e__DOT__id_wb_rs2])),32);
    bufp->fullIData(oldp+24,(vlSelf->rv32e__DOT__wbu__DOT__CSR
                             [vlSelf->rv32e__DOT__id_wb_csr_addr2]),32);
    bufp->fullCData(oldp+25,(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr),5);
    bufp->fullBit(oldp+26,(vlSelf->rv32e__DOT__lsu__DOT__l_rd_en));
    bufp->fullBit(oldp+27,(vlSelf->rv32e__DOT__lsu__DOT__l_load));
    bufp->fullBit(oldp+28,(vlSelf->rv32e__DOT__lsu_sram_arvalid));
    bufp->fullBit(oldp+29,(vlSelf->rv32e__DOT__sram_lsu_arready));
    bufp->fullIData(oldp+30,(vlSelf->rv32e__DOT__lsu_sram_araddr),32);
    bufp->fullIData(oldp+31,(vlSelf->rv32e__DOT__sram_lsu_rdata),32);
    bufp->fullBit(oldp+32,(vlSelf->rv32e__DOT__sram_lsu_rvalid));
    bufp->fullBit(oldp+33,(vlSelf->rv32e__DOT__lsu_sram_rready));
    bufp->fullCData(oldp+34,(vlSelf->rv32e__DOT__sram_lsu_rresp),2);
    bufp->fullIData(oldp+35,(vlSelf->rv32e__DOT__lsu_sram_awaddr),32);
    bufp->fullBit(oldp+36,(vlSelf->rv32e__DOT__lsu_sram_awvalid));
    bufp->fullBit(oldp+37,(vlSelf->rv32e__DOT__sram_lsu_awready));
    bufp->fullIData(oldp+38,(vlSelf->rv32e__DOT__lsu_sram_wdata),32);
    bufp->fullCData(oldp+39,(vlSelf->rv32e__DOT__lsu_sram_wstrb),4);
    bufp->fullBit(oldp+40,(vlSelf->rv32e__DOT__lsu_sram_wvalid));
    bufp->fullBit(oldp+41,(vlSelf->rv32e__DOT__sram_lsu_wready));
    bufp->fullCData(oldp+42,(vlSelf->rv32e__DOT__sram_lsu_bresp),2);
    bufp->fullBit(oldp+43,(vlSelf->rv32e__DOT__sram_lsu_bvalid));
    bufp->fullBit(oldp+44,(vlSelf->rv32e__DOT__lsu_sram_bready));
    bufp->fullCData(oldp+45,(vlSelf->rv32e__DOT__sram_if_rresp),2);
    bufp->fullIData(oldp+46,(vlSelf->rv32e__DOT__inst_cnt),32);
    bufp->fullIData(oldp+47,(vlSelf->rv32e__DOT__cycle_cnt),32);
    bufp->fullBit(oldp+48,(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition));
    bufp->fullBit(oldp+49,(vlSelf->rv32e__DOT__isram__DOT__sram_awready));
    bufp->fullBit(oldp+50,(vlSelf->rv32e__DOT__isram__DOT__sram_wready));
    bufp->fullCData(oldp+51,(vlSelf->rv32e__DOT__isram__DOT__sram_bresp),2);
    bufp->fullBit(oldp+52,(vlSelf->rv32e__DOT__isram__DOT__sram_bvalid));
    bufp->fullIData(oldp+53,(vlSelf->rv32e__DOT__isram__DOT__read_addr),32);
    bufp->fullIData(oldp+54,(vlSelf->rv32e__DOT__isram__DOT__LFSR),32);
    bufp->fullBit(oldp+55,(vlSelf->rv32e__DOT__isram__DOT__read_pending));
    bufp->fullBit(oldp+56,(vlSelf->rv32e__DOT__isram__DOT__write_addr_valid));
    bufp->fullBit(oldp+57,(vlSelf->rv32e__DOT__isram__DOT__write_data_valid));
    bufp->fullIData(oldp+58,(vlSelf->rv32e__DOT__lsu__DOT__l_inst),32);
    bufp->fullIData(oldp+59,(vlSelf->rv32e__DOT__lsu__DOT__l_pc),32);
    bufp->fullCData(oldp+60,(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen),3);
    bufp->fullCData(oldp+61,(vlSelf->rv32e__DOT__lsu__DOT__l_opcode),7);
    bufp->fullBit(oldp+62,(vlSelf->rv32e__DOT__lsu__DOT__read_pending));
    bufp->fullBit(oldp+63,(vlSelf->rv32e__DOT__lsu__DOT__write_pending));
    bufp->fullBit(oldp+64,(vlSelf->rv32e__DOT__lsu__DOT__read_valid));
    bufp->fullBit(oldp+65,(vlSelf->rv32e__DOT__lsu__DOT__write_valid));
    bufp->fullIData(oldp+66,(vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data),32);
    bufp->fullIData(oldp+67,(((0U == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
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
    bufp->fullIData(oldp+68,(vlSelf->rv32e__DOT__msram__DOT__read_addr),32);
    bufp->fullIData(oldp+69,(vlSelf->rv32e__DOT__msram__DOT__LFSR),32);
    bufp->fullBit(oldp+70,(vlSelf->rv32e__DOT__msram__DOT__read_pending));
    bufp->fullIData(oldp+71,(vlSelf->rv32e__DOT__msram__DOT__write_addr),32);
    bufp->fullBit(oldp+72,(vlSelf->rv32e__DOT__msram__DOT__write_addr_valid));
    bufp->fullIData(oldp+73,(vlSelf->rv32e__DOT__msram__DOT__write_data),32);
    bufp->fullCData(oldp+74,(vlSelf->rv32e__DOT__msram__DOT__write_strb),4);
    bufp->fullBit(oldp+75,(vlSelf->rv32e__DOT__msram__DOT__write_data_valid));
    bufp->fullDouble(oldp+76,(vlSelf->rv32e__DOT__unnamedblk1__DOT__IPC));
    bufp->fullIData(oldp+78,(vlSelf->rv32e__DOT__wbu__DOT__regs[0]),32);
    bufp->fullIData(oldp+79,(vlSelf->rv32e__DOT__wbu__DOT__regs[1]),32);
    bufp->fullIData(oldp+80,(vlSelf->rv32e__DOT__wbu__DOT__regs[2]),32);
    bufp->fullIData(oldp+81,(vlSelf->rv32e__DOT__wbu__DOT__regs[3]),32);
    bufp->fullIData(oldp+82,(vlSelf->rv32e__DOT__wbu__DOT__regs[4]),32);
    bufp->fullIData(oldp+83,(vlSelf->rv32e__DOT__wbu__DOT__regs[5]),32);
    bufp->fullIData(oldp+84,(vlSelf->rv32e__DOT__wbu__DOT__regs[6]),32);
    bufp->fullIData(oldp+85,(vlSelf->rv32e__DOT__wbu__DOT__regs[7]),32);
    bufp->fullIData(oldp+86,(vlSelf->rv32e__DOT__wbu__DOT__regs[8]),32);
    bufp->fullIData(oldp+87,(vlSelf->rv32e__DOT__wbu__DOT__regs[9]),32);
    bufp->fullIData(oldp+88,(vlSelf->rv32e__DOT__wbu__DOT__regs[10]),32);
    bufp->fullIData(oldp+89,(vlSelf->rv32e__DOT__wbu__DOT__regs[11]),32);
    bufp->fullIData(oldp+90,(vlSelf->rv32e__DOT__wbu__DOT__regs[12]),32);
    bufp->fullIData(oldp+91,(vlSelf->rv32e__DOT__wbu__DOT__regs[13]),32);
    bufp->fullIData(oldp+92,(vlSelf->rv32e__DOT__wbu__DOT__regs[14]),32);
    bufp->fullIData(oldp+93,(vlSelf->rv32e__DOT__wbu__DOT__regs[15]),32);
    bufp->fullIData(oldp+94,(vlSelf->rv32e__DOT__wbu__DOT__regs[16]),32);
    bufp->fullIData(oldp+95,(vlSelf->rv32e__DOT__wbu__DOT__regs[17]),32);
    bufp->fullIData(oldp+96,(vlSelf->rv32e__DOT__wbu__DOT__regs[18]),32);
    bufp->fullIData(oldp+97,(vlSelf->rv32e__DOT__wbu__DOT__regs[19]),32);
    bufp->fullIData(oldp+98,(vlSelf->rv32e__DOT__wbu__DOT__regs[20]),32);
    bufp->fullIData(oldp+99,(vlSelf->rv32e__DOT__wbu__DOT__regs[21]),32);
    bufp->fullIData(oldp+100,(vlSelf->rv32e__DOT__wbu__DOT__regs[22]),32);
    bufp->fullIData(oldp+101,(vlSelf->rv32e__DOT__wbu__DOT__regs[23]),32);
    bufp->fullIData(oldp+102,(vlSelf->rv32e__DOT__wbu__DOT__regs[24]),32);
    bufp->fullIData(oldp+103,(vlSelf->rv32e__DOT__wbu__DOT__regs[25]),32);
    bufp->fullIData(oldp+104,(vlSelf->rv32e__DOT__wbu__DOT__regs[26]),32);
    bufp->fullIData(oldp+105,(vlSelf->rv32e__DOT__wbu__DOT__regs[27]),32);
    bufp->fullIData(oldp+106,(vlSelf->rv32e__DOT__wbu__DOT__regs[28]),32);
    bufp->fullIData(oldp+107,(vlSelf->rv32e__DOT__wbu__DOT__regs[29]),32);
    bufp->fullIData(oldp+108,(vlSelf->rv32e__DOT__wbu__DOT__regs[30]),32);
    bufp->fullIData(oldp+109,(vlSelf->rv32e__DOT__wbu__DOT__regs[31]),32);
    bufp->fullBit(oldp+110,(vlSelf->rv32e__DOT__wbu__DOT__flush));
    bufp->fullIData(oldp+111,(vlSelf->rv32e__DOT__wbu__DOT__i),32);
    bufp->fullIData(oldp+112,(vlSelf->rv32e__DOT__ex_lsu_pc),32);
    bufp->fullIData(oldp+113,(vlSelf->rv32e__DOT__ex_lsu_inst),32);
    bufp->fullBit(oldp+114,(vlSelf->rv32e__DOT__ex_lsu_valid));
    bufp->fullIData(oldp+115,(vlSelf->rv32e__DOT__ex_lsu_src2),32);
    bufp->fullBit(oldp+116,(vlSelf->rv32e__DOT__ex_lsu_RegWrite));
    bufp->fullCData(oldp+117,(vlSelf->rv32e__DOT__ex_lsu_rd),5);
    bufp->fullBit(oldp+118,(vlSelf->rv32e__DOT__ex_lsu_MemRead));
    bufp->fullBit(oldp+119,(vlSelf->rv32e__DOT__ex_lsu_MemWrite));
    bufp->fullCData(oldp+120,(vlSelf->rv32e__DOT__ex_lsu_MemLen),3);
    bufp->fullIData(oldp+121,(vlSelf->rv32e__DOT__ex_lsu_process_result),32);
    bufp->fullBit(oldp+122,(vlSelf->rv32e__DOT__ex_lsu_csr));
    bufp->fullBit(oldp+123,(vlSelf->rv32e__DOT__ex_lsu_csr_wen1));
    bufp->fullBit(oldp+124,(vlSelf->rv32e__DOT__ex_lsu_csr_wen2));
    bufp->fullSData(oldp+125,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1),12);
    bufp->fullSData(oldp+126,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2),12);
    bufp->fullIData(oldp+127,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1),32);
    bufp->fullIData(oldp+128,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2),32);
    bufp->fullIData(oldp+129,(vlSelf->rv32e__DOT__ex_lsu_csr_rdata),32);
    bufp->fullBit(oldp+130,(vlSelf->rv32e__DOT__ex_lsu_csr_ecall));
    bufp->fullBit(oldp+131,(vlSelf->rv32e__DOT__ex_lsu_csr_mret));
    bufp->fullIData(oldp+132,(vlSelf->rv32e__DOT__ex_lsu_imm),32);
    bufp->fullCData(oldp+133,(vlSelf->rv32e__DOT__ex_lsu_opcode),7);
    bufp->fullBit(oldp+134,(vlSelf->rv32e__DOT__ex_lsu_forward_las));
    bufp->fullIData(oldp+135,(vlSelf->rv32e__DOT__id_ex_pc),32);
    bufp->fullIData(oldp+136,(vlSelf->rv32e__DOT__id_ex_inst),32);
    bufp->fullBit(oldp+137,(vlSelf->rv32e__DOT__id_valid));
    bufp->fullBit(oldp+138,(vlSelf->rv32e__DOT__id_ex_RegWrite));
    bufp->fullCData(oldp+139,(vlSelf->rv32e__DOT__id_ex_rd),5);
    bufp->fullCData(oldp+140,(vlSelf->rv32e__DOT__id_wb_rs1),5);
    bufp->fullCData(oldp+141,(vlSelf->rv32e__DOT__id_ex_zimm),5);
    bufp->fullIData(oldp+142,(vlSelf->rv32e__DOT__id_ex_imm),32);
    bufp->fullCData(oldp+143,(vlSelf->rv32e__DOT__id_ex_MemLen),3);
    bufp->fullBit(oldp+144,(vlSelf->rv32e__DOT__id_ex_MemWrite));
    bufp->fullBit(oldp+145,(vlSelf->rv32e__DOT__id_ex_MemRead));
    bufp->fullCData(oldp+146,(vlSelf->rv32e__DOT__id_ex_opcode),7);
    bufp->fullCData(oldp+147,(vlSelf->rv32e__DOT__id_ex_func3),3);
    bufp->fullBit(oldp+148,(vlSelf->rv32e__DOT__id_ex_csr));
    bufp->fullBit(oldp+149,(vlSelf->rv32e__DOT__id_ex_csr_wen1));
    bufp->fullBit(oldp+150,(vlSelf->rv32e__DOT__id_ex_csr_wen2));
    bufp->fullBit(oldp+151,(vlSelf->rv32e__DOT__id_ex_csr_ecall));
    bufp->fullBit(oldp+152,(vlSelf->rv32e__DOT__id_ex_csr_mret));
    bufp->fullCData(oldp+153,(vlSelf->rv32e__DOT__id_ex_csr_op),2);
    bufp->fullSData(oldp+154,(vlSelf->rv32e__DOT__id_ex_csr_wr_addr1),12);
    bufp->fullSData(oldp+155,(vlSelf->rv32e__DOT__id_ex_csr_wr_addr2),12);
    bufp->fullBit(oldp+156,(vlSelf->rv32e__DOT__lsu_ex_ready));
    bufp->fullIData(oldp+157,(vlSelf->rv32e__DOT__wb_ex_csr_num1),32);
    bufp->fullIData(oldp+158,(((IData)(vlSelf->rv32e__DOT__id_ex_csr_ecall)
                                ? vlSelf->rv32e__DOT__id_ex_pc
                                : 0U)),32);
    bufp->fullIData(oldp+159,((0x80U | ((0xffffe7f7U 
                                         & vlSelf->rv32e__DOT__wb_ex_csr_num1) 
                                        | (8U & (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                                 >> 4U))))),32);
    bufp->fullIData(oldp+160,((1U & (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                     >> 7U))),32);
    bufp->fullBit(oldp+161,(vlSelf->rv32e__DOT__ex_ready));
    bufp->fullIData(oldp+162,(vlSelf->rv32e__DOT__exu__DOT__src1),32);
    bufp->fullIData(oldp+163,(vlSelf->rv32e__DOT__exu__DOT__src2),32);
    bufp->fullIData(oldp+164,(vlSelf->rv32e__DOT__exu__DOT__ex_num1),32);
    bufp->fullIData(oldp+165,(vlSelf->rv32e__DOT__exu__DOT__ex_num2),32);
    bufp->fullIData(oldp+166,(vlSelf->rv32e__DOT__exu__DOT__process_result),32);
    bufp->fullBit(oldp+167,(vlSelf->rv32e__DOT__exu__DOT__alu_zero));
    bufp->fullBit(oldp+168,(vlSelf->rv32e__DOT__exu__DOT__alu_less));
    bufp->fullCData(oldp+169,(vlSelf->rv32e__DOT__exu__DOT__load_use_flag),4);
    bufp->fullIData(oldp+170,(vlSelf->rv32e__DOT__lsu__DOT__rd_data),32);
    bufp->fullIData(oldp+171,(vlSelf->rv32e__DOT__IF_ID_pc),32);
    bufp->fullIData(oldp+172,(vlSelf->rv32e__DOT__IF_ID_inst),32);
    bufp->fullBit(oldp+173,(vlSelf->rv32e__DOT__IF_valid));
    bufp->fullBit(oldp+174,(vlSelf->rv32e__DOT__if_sram_arvalid));
    bufp->fullIData(oldp+175,(vlSelf->rv32e__DOT__if_sram_araddr),32);
    bufp->fullBit(oldp+176,(vlSelf->rv32e__DOT__if_sram_rready));
    bufp->fullIData(oldp+177,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+178,((0xfffff000U & vlSelf->rv32e__DOT__IF_ID_inst)),32);
    bufp->fullIData(oldp+179,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+180,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
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
    bufp->fullIData(oldp+181,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->rv32e__DOT__IF_ID_inst) 
                                             | ((0x800U 
                                                 & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+182,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                        >> 0xfU))),32);
    bufp->fullCData(oldp+183,((0x7fU & vlSelf->rv32e__DOT__IF_ID_inst)),7);
    bufp->fullCData(oldp+184,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+185,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+186,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+187,((7U & (vlSelf->rv32e__DOT__IF_ID_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+188,((vlSelf->rv32e__DOT__IF_ID_inst 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+189,((0x3fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                        >> 0x14U))),6);
    bufp->fullCData(oldp+190,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                        >> 2U))),5);
    bufp->fullIData(oldp+191,(vlSelf->rv32e__DOT__idu__DOT__imm),32);
    bufp->fullCData(oldp+192,(vlSelf->rv32e__DOT__idu__DOT__alu_op),4);
    bufp->fullBit(oldp+193,((IData)(((0U == (0x7cU 
                                             & vlSelf->rv32e__DOT__IF_ID_inst)) 
                                     & ((2U == (7U 
                                                & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                   >> 0xcU))) 
                                        | ((1U == (7U 
                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                      >> 0xcU))) 
                                           | ((0U == 
                                               (7U 
                                                & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                   >> 0xcU))) 
                                              | ((5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                      >> 0xcU))) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                        >> 0xcU)))))))))));
    bufp->fullBit(oldp+194,((8U == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                             >> 2U)))));
    bufp->fullCData(oldp+195,((((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h69b43165__0) 
                                & (0x2000U == (0x7000U 
                                               & vlSelf->rv32e__DOT__IF_ID_inst)))
                                ? 2U : (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h69b43165__0) 
                                         & (0x1000U 
                                            == (0x7000U 
                                                & vlSelf->rv32e__DOT__IF_ID_inst)))
                                         ? 1U : (((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h69b43165__0) 
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
    bufp->fullBit(oldp+196,((0x6fU == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst))));
    bufp->fullBit(oldp+197,((IData)((0x67U == (0x707fU 
                                               & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullBit(oldp+198,((0x73U == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst))));
    bufp->fullBit(oldp+199,(vlSelf->rv32e__DOT__idu__DOT__csr_ecall));
    bufp->fullBit(oldp+200,(vlSelf->rv32e__DOT__idu__DOT__csr_mret));
    bufp->fullSData(oldp+201,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall)
                                ? 0x342U : ((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret)
                                             ? 0x300U
                                             : (IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hf81b0dad__0)))),12);
    bufp->fullSData(oldp+202,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall)
                                ? 0x341U : 0U)),12);
    bufp->fullSData(oldp+203,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret)
                                ? 0x300U : ((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall)
                                             ? 0x305U
                                             : (IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hf81b0dad__0)))),12);
    bufp->fullSData(oldp+204,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret)
                                ? 0x341U : 0U)),12);
    bufp->fullCData(oldp+205,((((0x73U == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst)) 
                                & ((1U == (7U & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                 >> 0xcU))) 
                                   | (5U == (7U & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                   >> 0xcU)))))
                                ? 1U : (((0x73U == 
                                          (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst)) 
                                         & ((2U == 
                                             (7U & 
                                              (vlSelf->rv32e__DOT__IF_ID_inst 
                                               >> 0xcU))) 
                                            | (6U == 
                                               (7U 
                                                & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                   >> 0xcU)))))
                                         ? 2U : (((0x73U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->rv32e__DOT__IF_ID_inst)) 
                                                  & ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                          >> 0xcU))) 
                                                     | (7U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                            >> 0xcU)))))
                                                  ? 3U
                                                  : 0U)))),2);
    bufp->fullBit(oldp+206,(((~ ((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall) 
                                 | (IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret))) 
                             & (0x73U == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullBit(oldp+207,(((0xdU == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 2U))) 
                             | ((5U == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                 >> 2U))) 
                                | ((0U == (0x1fU & 
                                           (vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 2U))) 
                                   | ((0x1bU == (0x1fU 
                                                 & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                    >> 2U))) 
                                      | ((0x19U == 
                                          (0x1fU & 
                                           (vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 2U))) 
                                         | ((0xcU == 
                                             (0x1fU 
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
    bufp->fullCData(oldp+208,(vlSelf->rv32e__DOT__ifu__DOT__state),2);
    bufp->fullIData(oldp+209,(vlSelf->rv32e__DOT__ifu__DOT__next_pc),32);
    bufp->fullBit(oldp+210,(vlSelf->rv32e__DOT__ifu__DOT__once));
    bufp->fullBit(oldp+211,(vlSelf->rv32e__DOT__sram_if_arready));
    bufp->fullIData(oldp+212,(vlSelf->rv32e__DOT__sram_if_rdata),32);
    bufp->fullBit(oldp+213,(vlSelf->rv32e__DOT__sram_if_rvalid));
    bufp->fullBit(oldp+214,(vlSelf->rv32e__DOT__id_ready));
    bufp->fullBit(oldp+215,(vlSelf->rv32e__DOT__ex_flush));
    bufp->fullIData(oldp+216,(vlSelf->rv32e__DOT__ex_flush_pc),32);
    bufp->fullIData(oldp+217,(vlSelf->rv32e__DOT__exu__DOT__jal_target),32);
    bufp->fullIData(oldp+218,(vlSelf->rv32e__DOT__exu__DOT__jalr_target),32);
    bufp->fullBit(oldp+219,(vlSelf->rv32e__DOT__exu__DOT__take_branch));
    bufp->fullBit(oldp+220,(vlSelf->clk));
    bufp->fullBit(oldp+221,(vlSelf->reset));
    bufp->fullIData(oldp+222,(((0U == (IData)(vlSelf->rv32e__DOT__id_wb_rs1))
                                ? 0U : vlSelf->rv32e__DOT__wbu__DOT__regs
                               [vlSelf->rv32e__DOT__id_wb_rs1])),32);
    bufp->fullIData(oldp+223,((((1U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
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
    bufp->fullCData(oldp+224,((((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h9653a62d__0) 
                                << 1U) | (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h666fa1ae__0))),2);
    bufp->fullCData(oldp+225,((((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0) 
                                << 1U) | (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h3556a05f__0))),2);
    bufp->fullBit(oldp+226,(((IData)(vlSelf->rv32e__DOT__id_ex_MemWrite) 
                             & ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                                & ((IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite) 
                                   & ((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                      & ((0U != (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)) 
                                         & (((IData)(vlSelf->rv32e__DOT__ex_lsu_rd) 
                                             != (IData)(vlSelf->rv32e__DOT__id_wb_rs1)) 
                                            & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0)))))))));
    bufp->fullBit(oldp+227,(1U));
    bufp->fullBit(oldp+228,(vlSelf->rv32e__DOT__sram_arvalid));
    bufp->fullBit(oldp+229,(vlSelf->rv32e__DOT__sram_arready));
    bufp->fullIData(oldp+230,(vlSelf->rv32e__DOT__sram_araddr),32);
    bufp->fullIData(oldp+231,(vlSelf->rv32e__DOT__sram_rdata),32);
    bufp->fullBit(oldp+232,(vlSelf->rv32e__DOT__sram_rvalid));
    bufp->fullBit(oldp+233,(vlSelf->rv32e__DOT__sram_rready));
    bufp->fullCData(oldp+234,(vlSelf->rv32e__DOT__sram_rresp),2);
    bufp->fullIData(oldp+235,(vlSelf->rv32e__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+236,(vlSelf->rv32e__DOT__sram_awvalid));
    bufp->fullBit(oldp+237,(vlSelf->rv32e__DOT__sram_awready));
    bufp->fullIData(oldp+238,(vlSelf->rv32e__DOT__sram_wdata),32);
    bufp->fullCData(oldp+239,(vlSelf->rv32e__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+240,(vlSelf->rv32e__DOT__sram_wvalid));
    bufp->fullBit(oldp+241,(vlSelf->rv32e__DOT__sram_wready));
    bufp->fullCData(oldp+242,(vlSelf->rv32e__DOT__sram_bresp),2);
    bufp->fullBit(oldp+243,(vlSelf->rv32e__DOT__sram_bvalid));
    bufp->fullBit(oldp+244,(vlSelf->rv32e__DOT__sram_bready));
    bufp->fullIData(oldp+245,(0U),32);
    bufp->fullCData(oldp+246,(0U),2);
    bufp->fullCData(oldp+247,(1U),2);
    bufp->fullCData(oldp+248,(2U),2);
    bufp->fullBit(oldp+249,(0U));
    bufp->fullCData(oldp+250,(0U),4);
    bufp->fullIData(oldp+251,(1U),32);
    bufp->fullIData(oldp+252,(4U),32);
    bufp->fullIData(oldp+253,(vlSelf->rv32e__DOT__isram__DOT__write_addr),32);
    bufp->fullIData(oldp+254,(vlSelf->rv32e__DOT__isram__DOT__write_data),32);
    bufp->fullCData(oldp+255,(vlSelf->rv32e__DOT__isram__DOT__write_strb),4);
    bufp->fullIData(oldp+256,(5U),32);
    bufp->fullIData(oldp+257,(0x20U),32);
}
