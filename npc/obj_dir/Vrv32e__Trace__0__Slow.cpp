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
    tracep->declBit(c+179,"clk", false,-1);
    tracep->declBit(c+180,"reset", false,-1);
    tracep->pushNamePrefix("rv32e ");
    tracep->declBit(c+179,"clk", false,-1);
    tracep->declBit(c+180,"reset", false,-1);
    tracep->declBus(c+181,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+2,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+3,"IF_valid", false,-1);
    tracep->declBit(c+163,"id_ready", false,-1);
    tracep->declBus(c+133,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+134,"id_ex_inst", false,-1, 31,0);
    tracep->declBit(c+135,"id_valid", false,-1);
    tracep->declBit(c+164,"ex_ready", false,-1);
    tracep->declBit(c+136,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+137,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+138,"id_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+39,"id_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+139,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+140,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+40,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+141,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBit(c+142,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+143,"id_ex_MemRead", false,-1);
    tracep->declBus(c+144,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+41,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+42,"id_ex_jal", false,-1);
    tracep->declBit(c+43,"id_ex_jalr", false,-1);
    tracep->declBit(c+145,"id_ex_csr", false,-1);
    tracep->declBit(c+146,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+147,"id_ex_csr_wen2", false,-1);
    tracep->declBit(c+148,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+149,"id_ex_csr_mret", false,-1);
    tracep->declBit(c+150,"id_ex_csrrw", false,-1);
    tracep->declBit(c+151,"id_ex_csrrs", false,-1);
    tracep->declBit(c+152,"id_ex_csrrc", false,-1);
    tracep->declBit(c+153,"id_ex_csrrwi", false,-1);
    tracep->declBit(c+154,"id_ex_csrrsi", false,-1);
    tracep->declBit(c+155,"id_ex_csrrci", false,-1);
    tracep->declBus(c+156,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+157,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+44,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+45,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBus(c+108,"ex_mem_pc", false,-1, 31,0);
    tracep->declBus(c+109,"ex_mem_inst", false,-1, 31,0);
    tracep->declBit(c+110,"ex_mem_valid", false,-1);
    tracep->declBit(c+158,"mem_ex_ready", false,-1);
    tracep->declBus(c+111,"ex_mem_src2", false,-1, 31,0);
    tracep->declBit(c+112,"ex_mem_RegWrite", false,-1);
    tracep->declBus(c+113,"ex_mem_rd", false,-1, 4,0);
    tracep->declBit(c+114,"ex_mem_MemRead", false,-1);
    tracep->declBit(c+115,"ex_mem_MemWrite", false,-1);
    tracep->declBus(c+116,"ex_mem_MemLen", false,-1, 2,0);
    tracep->declBus(c+117,"ex_mem_process_result", false,-1, 31,0);
    tracep->declBit(c+165,"ex_flush", false,-1);
    tracep->declBus(c+166,"ex_flush_pc", false,-1, 31,0);
    tracep->declBit(c+118,"ex_mem_csr", false,-1);
    tracep->declBit(c+119,"ex_mem_csr_wen1", false,-1);
    tracep->declBit(c+120,"ex_mem_csr_wen2", false,-1);
    tracep->declBus(c+121,"ex_mem_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+122,"ex_mem_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+123,"ex_mem_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+124,"ex_mem_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+125,"ex_mem_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+126,"ex_mem_csr_ecall", false,-1);
    tracep->declBit(c+127,"ex_mem_csr_mret", false,-1);
    tracep->declBus(c+128,"ex_mem_imm", false,-1, 31,0);
    tracep->declBus(c+129,"ex_mem_opcode", false,-1, 6,0);
    tracep->declBus(c+46,"mem_wb_pc", false,-1, 31,0);
    tracep->declBus(c+47,"mem_wb_inst", false,-1, 31,0);
    tracep->declBit(c+48,"mem_wb_valid", false,-1);
    tracep->declBit(c+187,"wb_mem_ready", false,-1);
    tracep->declBit(c+49,"mem_wb_RegWrite", false,-1);
    tracep->declBus(c+50,"mem_wb_rd", false,-1, 4,0);
    tracep->declBus(c+51,"mem_wb_write_rd_data", false,-1, 31,0);
    tracep->declBus(c+52,"mem_wb_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+53,"mem_wb_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+54,"mem_wb_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+55,"mem_wb_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+56,"mem_wb_csr_wen1", false,-1);
    tracep->declBit(c+57,"mem_wb_csr_wen2", false,-1);
    tracep->declBit(c+58,"mem_wb_flush", false,-1);
    tracep->declBit(c+59,"wb_valid", false,-1);
    tracep->declBus(c+182,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+60,"wb_ex_src2", false,-1, 31,0);
    tracep->declBus(c+159,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+61,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBus(c+62,"mem_ex_forward_rd", false,-1, 4,0);
    tracep->declBit(c+63,"mem_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+64,"mem_ex_forward_MemRead", false,-1);
    tracep->declBit(c+130,"ex_mem_forward_las", false,-1);
    tracep->declBus(c+117,"addr", false,-1, 31,0);
    tracep->declBus(c+111,"wdata", false,-1, 31,0);
    tracep->declBit(c+115,"wen", false,-1);
    tracep->declBus(c+131,"mask", false,-1, 1,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+179,"clk", false,-1);
    tracep->declBit(c+180,"reset", false,-1);
    tracep->declBit(c+163,"id_ready", false,-1);
    tracep->declBit(c+135,"id_valid", false,-1);
    tracep->declBit(c+164,"ex_ready", false,-1);
    tracep->declBit(c+158,"mem_ready", false,-1);
    tracep->declBit(c+110,"ex_mem_valid", false,-1);
    tracep->declBus(c+138,"id_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+39,"id_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+62,"mem_ex_forward_rd", false,-1, 4,0);
    tracep->declBit(c+63,"mem_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+64,"mem_ex_forward_MemRead", false,-1);
    tracep->declBus(c+51,"mem_wb_wdata", false,-1, 31,0);
    tracep->declBus(c+50,"mem_wb_rd", false,-1, 4,0);
    tracep->declBit(c+49,"mem_wb_RegWrite", false,-1);
    tracep->declBit(c+48,"mem_wb_valid", false,-1);
    tracep->declBit(c+130,"ex_mem_forward_las", false,-1);
    tracep->declBus(c+134,"id_ex_inst", false,-1, 31,0);
    tracep->declBus(c+133,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+140,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+139,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+182,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+60,"wb_ex_src2", false,-1, 31,0);
    tracep->declBit(c+136,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+137,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+144,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+41,"id_ex_func3", false,-1, 2,0);
    tracep->declBus(c+40,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBit(c+42,"id_ex_jal", false,-1);
    tracep->declBit(c+43,"id_ex_jalr", false,-1);
    tracep->declBit(c+143,"id_ex_MemRead", false,-1);
    tracep->declBit(c+142,"id_ex_MemWrite", false,-1);
    tracep->declBus(c+141,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBus(c+159,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+61,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBit(c+145,"id_ex_csr", false,-1);
    tracep->declBit(c+146,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+147,"id_ex_csr_wen2", false,-1);
    tracep->declBus(c+156,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+157,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+148,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+149,"id_ex_csr_mret", false,-1);
    tracep->declBit(c+150,"id_ex_csrrw", false,-1);
    tracep->declBit(c+151,"id_ex_csrrs", false,-1);
    tracep->declBit(c+152,"id_ex_csrrc", false,-1);
    tracep->declBit(c+153,"id_ex_csrrwi", false,-1);
    tracep->declBit(c+154,"id_ex_csrrsi", false,-1);
    tracep->declBit(c+155,"id_ex_csrrci", false,-1);
    tracep->declBit(c+165,"ex_flush", false,-1);
    tracep->declBus(c+166,"ex_flush_pc", false,-1, 31,0);
    tracep->declBus(c+109,"ex_mem_inst", false,-1, 31,0);
    tracep->declBus(c+108,"ex_mem_pc", false,-1, 31,0);
    tracep->declBus(c+111,"ex_mem_src2", false,-1, 31,0);
    tracep->declBit(c+112,"ex_mem_RegWrite", false,-1);
    tracep->declBus(c+113,"ex_mem_rd", false,-1, 4,0);
    tracep->declBit(c+114,"ex_mem_MemRead", false,-1);
    tracep->declBit(c+115,"ex_mem_MemWrite", false,-1);
    tracep->declBus(c+116,"ex_mem_MemLen", false,-1, 2,0);
    tracep->declBus(c+129,"ex_mem_opcode", false,-1, 6,0);
    tracep->declBit(c+118,"ex_mem_csr", false,-1);
    tracep->declBit(c+119,"ex_mem_csr_wen1", false,-1);
    tracep->declBit(c+120,"ex_mem_csr_wen2", false,-1);
    tracep->declBus(c+121,"ex_mem_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+122,"ex_mem_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+123,"ex_mem_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+124,"ex_mem_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+125,"ex_mem_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+126,"ex_mem_csr_ecall", false,-1);
    tracep->declBit(c+127,"ex_mem_csr_mret", false,-1);
    tracep->declBus(c+128,"ex_mem_imm", false,-1, 31,0);
    tracep->declBus(c+117,"ex_mem_process_result", false,-1, 31,0);
    tracep->declBus(c+183,"forward_rs1", false,-1, 1,0);
    tracep->declBus(c+184,"forward_rs2", false,-1, 1,0);
    tracep->declBit(c+185,"forward_las", false,-1);
    tracep->declBus(c+167,"load_use_flag", false,-1, 3,0);
    tracep->declBus(c+168,"src1", false,-1, 31,0);
    tracep->declBus(c+169,"src2", false,-1, 31,0);
    tracep->declBus(c+170,"ex_num1", false,-1, 31,0);
    tracep->declBus(c+171,"ex_num2", false,-1, 31,0);
    tracep->declBus(c+172,"process_result", false,-1, 31,0);
    tracep->declBit(c+173,"alu_zero", false,-1);
    tracep->declBit(c+174,"alu_less", false,-1);
    tracep->declBus(c+175,"jal_target", false,-1, 31,0);
    tracep->declBus(c+176,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+177,"take_branch", false,-1);
    tracep->declBit(c+65,"ex_flush_condition", false,-1);
    tracep->declBus(c+160,"csr_write_ecall", false,-1, 31,0);
    tracep->declBus(c+161,"mstatus_t", false,-1, 31,0);
    tracep->declBus(c+162,"mpie", false,-1, 31,0);
    tracep->declBus(c+186,"csr_write_wire", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+179,"clk", false,-1);
    tracep->declBit(c+180,"reset", false,-1);
    tracep->declBus(c+181,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+2,"if_id_inst", false,-1, 31,0);
    tracep->declBit(c+165,"ex_flush", false,-1);
    tracep->declBit(c+3,"if_valid", false,-1);
    tracep->declBit(c+163,"id_ready", false,-1);
    tracep->declBit(c+164,"ex_ready", false,-1);
    tracep->declBit(c+135,"id_valid", false,-1);
    tracep->declBus(c+133,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+134,"id_ex_inst", false,-1, 31,0);
    tracep->declBit(c+136,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+137,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+138,"id_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+39,"id_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+139,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+140,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+40,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+141,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBit(c+142,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+143,"id_ex_MemRead", false,-1);
    tracep->declBus(c+144,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+41,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+42,"id_ex_jal", false,-1);
    tracep->declBit(c+43,"id_ex_jalr", false,-1);
    tracep->declBit(c+145,"id_ex_csr", false,-1);
    tracep->declBit(c+146,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+147,"id_ex_csr_wen2", false,-1);
    tracep->declBit(c+148,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+149,"id_ex_csr_mret", false,-1);
    tracep->declBit(c+150,"id_ex_csrrw", false,-1);
    tracep->declBit(c+151,"id_ex_csrrs", false,-1);
    tracep->declBit(c+152,"id_ex_csrrc", false,-1);
    tracep->declBit(c+153,"id_ex_csrrwi", false,-1);
    tracep->declBit(c+154,"id_ex_csrrsi", false,-1);
    tracep->declBit(c+155,"id_ex_csrrci", false,-1);
    tracep->declBus(c+156,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+157,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+44,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+45,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBus(c+4,"immI", false,-1, 31,0);
    tracep->declBus(c+5,"immU", false,-1, 31,0);
    tracep->declBus(c+6,"immS", false,-1, 31,0);
    tracep->declBus(c+7,"immB", false,-1, 31,0);
    tracep->declBus(c+8,"immJ", false,-1, 31,0);
    tracep->declBus(c+188,"immR", false,-1, 31,0);
    tracep->declBus(c+9,"immCSR", false,-1, 31,0);
    tracep->declBus(c+10,"opcode", false,-1, 6,0);
    tracep->declBus(c+11,"rs1", false,-1, 4,0);
    tracep->declBus(c+12,"rs2", false,-1, 4,0);
    tracep->declBus(c+13,"rd", false,-1, 4,0);
    tracep->declBus(c+14,"func3", false,-1, 2,0);
    tracep->declBus(c+15,"func7", false,-1, 6,0);
    tracep->declBus(c+16,"get_opcode", false,-1, 4,0);
    tracep->declBus(c+17,"imm", false,-1, 31,0);
    tracep->declBus(c+18,"alu_op", false,-1, 3,0);
    tracep->declBit(c+19,"MemRead", false,-1);
    tracep->declBit(c+20,"MemWrite", false,-1);
    tracep->declBus(c+21,"MemLen", false,-1, 2,0);
    tracep->declBit(c+22,"jal", false,-1);
    tracep->declBit(c+23,"jalr", false,-1);
    tracep->declBit(c+24,"csr", false,-1);
    tracep->declBit(c+25,"csr_rd_en", false,-1);
    tracep->declBit(c+26,"csr_ecall", false,-1);
    tracep->declBit(c+27,"csr_mret", false,-1);
    tracep->declBit(c+28,"csrrw", false,-1);
    tracep->declBit(c+29,"csrrs", false,-1);
    tracep->declBit(c+30,"csrrc", false,-1);
    tracep->declBit(c+31,"csrrwi", false,-1);
    tracep->declBit(c+32,"csrrsi", false,-1);
    tracep->declBit(c+33,"csrrci", false,-1);
    tracep->declBus(c+34,"csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+35,"csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+36,"csr_rd_addr1", false,-1, 11,0);
    tracep->declBus(c+37,"csr_rd_addr2", false,-1, 11,0);
    tracep->declBit(c+38,"rd_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+179,"clk", false,-1);
    tracep->declBit(c+180,"reset", false,-1);
    tracep->declBit(c+165,"EX_flush", false,-1);
    tracep->declBus(c+166,"EX_flush_pc", false,-1, 31,0);
    tracep->declBit(c+163,"ID_ready", false,-1);
    tracep->declBit(c+3,"IF_valid", false,-1);
    tracep->declBus(c+181,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+2,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+132,"check", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+179,"clk", false,-1);
    tracep->declBit(c+180,"rst", false,-1);
    tracep->declBit(c+110,"ex_mem_valid", false,-1);
    tracep->declBit(c+158,"mem_ex_ready", false,-1);
    tracep->declBit(c+187,"wb_mem_ready", false,-1);
    tracep->declBit(c+48,"mem_wb_valid", false,-1);
    tracep->declBit(c+130,"ex_mem_forward_las", false,-1);
    tracep->declBit(c+112,"ex_mem_RegWrite", false,-1);
    tracep->declBus(c+113,"ex_mem_rd", false,-1, 4,0);
    tracep->declBit(c+114,"ex_mem_MemRead", false,-1);
    tracep->declBit(c+115,"ex_mem_MemWrite", false,-1);
    tracep->declBus(c+116,"ex_mem_MemLen", false,-1, 2,0);
    tracep->declBus(c+109,"ex_mem_inst", false,-1, 31,0);
    tracep->declBus(c+108,"ex_mem_pc", false,-1, 31,0);
    tracep->declBus(c+117,"addr", false,-1, 31,0);
    tracep->declBus(c+111,"data_in", false,-1, 31,0);
    tracep->declBus(c+128,"ex_mem_imm", false,-1, 31,0);
    tracep->declBus(c+129,"ex_mem_opcode", false,-1, 6,0);
    tracep->declBus(c+62,"mem_ex_forward_rd", false,-1, 4,0);
    tracep->declBit(c+63,"mem_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+64,"mem_ex_forward_MemRead", false,-1);
    tracep->declBit(c+118,"ex_mem_csr", false,-1);
    tracep->declBit(c+119,"ex_mem_csr_wen1", false,-1);
    tracep->declBit(c+120,"ex_mem_csr_wen2", false,-1);
    tracep->declBus(c+123,"ex_mem_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+124,"ex_mem_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+121,"ex_mem_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+122,"ex_mem_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+125,"ex_mem_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+126,"ex_mem_csr_ecall", false,-1);
    tracep->declBit(c+127,"ex_mem_csr_mret", false,-1);
    tracep->declBus(c+117,"ex_mem_process_result", false,-1, 31,0);
    tracep->declBus(c+47,"mem_wb_inst", false,-1, 31,0);
    tracep->declBus(c+46,"mem_wb_pc", false,-1, 31,0);
    tracep->declBit(c+165,"ex_flush", false,-1);
    tracep->declBit(c+58,"mem_wb_flush", false,-1);
    tracep->declBus(c+52,"mem_wb_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+53,"mem_wb_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+54,"mem_wb_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+55,"mem_wb_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+56,"mem_wb_csr_wen1", false,-1);
    tracep->declBit(c+57,"mem_wb_csr_wen2", false,-1);
    tracep->declBit(c+49,"mem_wb_RegWrite", false,-1);
    tracep->declBus(c+50,"mem_wb_rd", false,-1, 4,0);
    tracep->declBus(c+51,"mem_wb_write_rd_data", false,-1, 31,0);
    tracep->declBit(c+64,"l_load", false,-1);
    tracep->declBit(c+63,"l_rd_en", false,-1);
    tracep->declBus(c+62,"l_rd_addr", false,-1, 4,0);
    tracep->declBus(c+66,"l_inst", false,-1, 31,0);
    tracep->declBus(c+67,"l_pc", false,-1, 31,0);
    tracep->declBus(c+68,"l_MemLen", false,-1, 2,0);
    tracep->declBus(c+69,"l_opcode", false,-1, 6,0);
    tracep->declBit(c+70,"read_valid", false,-1);
    tracep->declBit(c+71,"write_valid", false,-1);
    tracep->declBus(c+72,"read_mem_data", false,-1, 31,0);
    tracep->declBus(c+73,"wr_rd_data", false,-1, 31,0);
    tracep->declBus(c+178,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBus(c+189,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+190,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+179,"clk", false,-1);
    tracep->declBit(c+180,"rst", false,-1);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->declBit(c+48,"mem_wb_valid", false,-1);
    tracep->declBit(c+187,"wb_mem_ready", false,-1);
    tracep->declBus(c+51,"wdata", false,-1, 31,0);
    tracep->declBus(c+50,"waddr", false,-1, 4,0);
    tracep->declBus(c+138,"rs1", false,-1, 4,0);
    tracep->declBus(c+39,"rs2", false,-1, 4,0);
    tracep->declBus(c+182,"src1", false,-1, 31,0);
    tracep->declBus(c+60,"src2", false,-1, 31,0);
    tracep->declBit(c+59,"wb_valid", false,-1);
    tracep->declBit(c+58,"mem_wb_flush", false,-1);
    tracep->declBus(c+44,"raddr_csr1", false,-1, 11,0);
    tracep->declBus(c+45,"raddr_csr2", false,-1, 11,0);
    tracep->declBit(c+56,"wen_csr1", false,-1);
    tracep->declBit(c+57,"wen_csr2", false,-1);
    tracep->declBus(c+52,"wdata_csr1", false,-1, 31,0);
    tracep->declBus(c+53,"wdata_csr2", false,-1, 31,0);
    tracep->declBus(c+54,"waddr_csr1", false,-1, 11,0);
    tracep->declBus(c+55,"waddr_csr2", false,-1, 11,0);
    tracep->declBus(c+159,"rdata_csr1", false,-1, 31,0);
    tracep->declBus(c+61,"rdata_csr2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+74+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBit(c+106,"flush", false,-1);
    tracep->declBus(c+107,"i", false,-1, 31,0);
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
    bufp->fullIData(oldp+2,(vlSelf->rv32e__DOT__IF_ID_inst),32);
    bufp->fullBit(oldp+3,(vlSelf->rv32e__DOT__IF_valid));
    bufp->fullIData(oldp+4,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                          >> 0x1fU))) 
                              << 0xcU) | (vlSelf->rv32e__DOT__IF_ID_inst 
                                          >> 0x14U))),32);
    bufp->fullIData(oldp+5,((0xfffff000U & vlSelf->rv32e__DOT__IF_ID_inst)),32);
    bufp->fullIData(oldp+6,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                          >> 0x1fU))) 
                              << 0xcU) | ((0xfe0U & 
                                           (vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 7U))))),32);
    bufp->fullIData(oldp+7,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                          >> 0x1fU))) 
                              << 0xcU) | ((0x800U & 
                                           (vlSelf->rv32e__DOT__IF_ID_inst 
                                            << 4U)) 
                                          | ((0x7e0U 
                                              & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                 >> 0x14U)) 
                                             | (0x1eU 
                                                & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                   >> 7U)))))),32);
    bufp->fullIData(oldp+8,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                          >> 0x1fU))) 
                              << 0x14U) | ((0xff000U 
                                            & vlSelf->rv32e__DOT__IF_ID_inst) 
                                           | ((0x800U 
                                               & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                    >> 0x14U)))))),32);
    bufp->fullIData(oldp+9,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                      >> 0xfU))),32);
    bufp->fullCData(oldp+10,((0x7fU & vlSelf->rv32e__DOT__IF_ID_inst)),7);
    bufp->fullCData(oldp+11,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+12,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+13,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+14,((7U & (vlSelf->rv32e__DOT__IF_ID_inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+15,((vlSelf->rv32e__DOT__IF_ID_inst 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+16,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                       >> 2U))),5);
    bufp->fullIData(oldp+17,(vlSelf->rv32e__DOT__idu__DOT__imm),32);
    bufp->fullCData(oldp+18,(vlSelf->rv32e__DOT__idu__DOT__alu_op),4);
    bufp->fullBit(oldp+19,((0U == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 2U)))));
    bufp->fullBit(oldp+20,((8U == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 2U)))));
    bufp->fullCData(oldp+21,((((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h69b43165__0) 
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
    bufp->fullBit(oldp+22,((0x1bU == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                               >> 2U)))));
    bufp->fullBit(oldp+23,((0x19U == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                               >> 2U)))));
    bufp->fullBit(oldp+24,((0x73U == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst))));
    bufp->fullBit(oldp+25,(((~ ((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall) 
                                | (IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret))) 
                            & (0x73U == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullBit(oldp+26,(vlSelf->rv32e__DOT__idu__DOT__csr_ecall));
    bufp->fullBit(oldp+27,(vlSelf->rv32e__DOT__idu__DOT__csr_mret));
    bufp->fullBit(oldp+28,((IData)((0x1073U == (0x707fU 
                                                & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullBit(oldp+29,((IData)((0x2073U == (0x707fU 
                                                & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullBit(oldp+30,((IData)((0x3073U == (0x707fU 
                                                & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullBit(oldp+31,((IData)((0x5073U == (0x707fU 
                                                & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullBit(oldp+32,((IData)((0x6073U == (0x707fU 
                                                & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullBit(oldp+33,((IData)((0x7073U == (0x707fU 
                                                & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullSData(oldp+34,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall)
                               ? 0x342U : ((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret)
                                            ? 0x300U
                                            : (IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hf81b0dad__0)))),12);
    bufp->fullSData(oldp+35,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall)
                               ? 0x341U : 0U)),12);
    bufp->fullSData(oldp+36,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret)
                               ? 0x300U : ((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall)
                                            ? 0x305U
                                            : (IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hf81b0dad__0)))),12);
    bufp->fullSData(oldp+37,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret)
                               ? 0x341U : 0U)),12);
    bufp->fullBit(oldp+38,(((0xdU == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                               >> 2U))) 
                            | ((5U == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 2U))) 
                               | ((0U == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                   >> 2U))) 
                                  | ((0x1bU == (0x1fU 
                                                & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                   >> 2U))) 
                                     | ((0x19U == (0x1fU 
                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                      >> 2U))) 
                                        | ((0xcU == 
                                            (0x1fU 
                                             & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 2U))) 
                                           | ((4U == 
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
    bufp->fullCData(oldp+39,(vlSelf->rv32e__DOT__id_wb_rs2),5);
    bufp->fullCData(oldp+40,(vlSelf->rv32e__DOT__id_ex_alu_op),4);
    bufp->fullCData(oldp+41,(vlSelf->rv32e__DOT__id_ex_func3),3);
    bufp->fullBit(oldp+42,(vlSelf->rv32e__DOT__id_ex_jal));
    bufp->fullBit(oldp+43,(vlSelf->rv32e__DOT__id_ex_jalr));
    bufp->fullSData(oldp+44,(vlSelf->rv32e__DOT__id_wb_csr_addr1),12);
    bufp->fullSData(oldp+45,(vlSelf->rv32e__DOT__id_wb_csr_addr2),12);
    bufp->fullIData(oldp+46,(vlSelf->rv32e__DOT__mem_wb_pc),32);
    bufp->fullIData(oldp+47,(vlSelf->rv32e__DOT__mem_wb_inst),32);
    bufp->fullBit(oldp+48,(vlSelf->rv32e__DOT__mem_wb_valid));
    bufp->fullBit(oldp+49,(vlSelf->rv32e__DOT__mem_wb_RegWrite));
    bufp->fullCData(oldp+50,(vlSelf->rv32e__DOT__mem_wb_rd),5);
    bufp->fullIData(oldp+51,(vlSelf->rv32e__DOT__mem_wb_write_rd_data),32);
    bufp->fullIData(oldp+52,(vlSelf->rv32e__DOT__mem_wb_csr_wr_data1),32);
    bufp->fullIData(oldp+53,(vlSelf->rv32e__DOT__mem_wb_csr_wr_data2),32);
    bufp->fullSData(oldp+54,(vlSelf->rv32e__DOT__mem_wb_csr_wr_addr1),12);
    bufp->fullSData(oldp+55,(vlSelf->rv32e__DOT__mem_wb_csr_wr_addr2),12);
    bufp->fullBit(oldp+56,(vlSelf->rv32e__DOT__mem_wb_csr_wen1));
    bufp->fullBit(oldp+57,(vlSelf->rv32e__DOT__mem_wb_csr_wen2));
    bufp->fullBit(oldp+58,(vlSelf->rv32e__DOT__mem_wb_flush));
    bufp->fullBit(oldp+59,(vlSelf->rv32e__DOT__wb_valid));
    bufp->fullIData(oldp+60,(((0U == (IData)(vlSelf->rv32e__DOT__id_wb_rs2))
                               ? 0U : vlSelf->rv32e__DOT__wbu__DOT__regs
                              [vlSelf->rv32e__DOT__id_wb_rs2])),32);
    bufp->fullIData(oldp+61,(vlSelf->rv32e__DOT__wbu__DOT__CSR
                             [vlSelf->rv32e__DOT__id_wb_csr_addr2]),32);
    bufp->fullCData(oldp+62,(vlSelf->rv32e__DOT__mem__DOT__l_rd_addr),5);
    bufp->fullBit(oldp+63,(vlSelf->rv32e__DOT__mem__DOT__l_rd_en));
    bufp->fullBit(oldp+64,(vlSelf->rv32e__DOT__mem__DOT__l_load));
    bufp->fullBit(oldp+65,(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition));
    bufp->fullIData(oldp+66,(vlSelf->rv32e__DOT__mem__DOT__l_inst),32);
    bufp->fullIData(oldp+67,(vlSelf->rv32e__DOT__mem__DOT__l_pc),32);
    bufp->fullCData(oldp+68,(vlSelf->rv32e__DOT__mem__DOT__l_MemLen),3);
    bufp->fullCData(oldp+69,(vlSelf->rv32e__DOT__mem__DOT__l_opcode),7);
    bufp->fullBit(oldp+70,(vlSelf->rv32e__DOT__mem__DOT__read_valid));
    bufp->fullBit(oldp+71,(vlSelf->rv32e__DOT__mem__DOT__write_valid));
    bufp->fullIData(oldp+72,(vlSelf->rv32e__DOT__mem__DOT__read_mem_data),32);
    bufp->fullIData(oldp+73,(((0U == (IData)(vlSelf->rv32e__DOT__mem__DOT__l_MemLen))
                               ? (0xffU & vlSelf->rv32e__DOT__mem__DOT__read_mem_data)
                               : ((4U == (IData)(vlSelf->rv32e__DOT__mem__DOT__l_MemLen))
                                   ? (((- (IData)((1U 
                                                   & (vlSelf->rv32e__DOT__mem__DOT__read_mem_data 
                                                      >> 7U)))) 
                                       << 8U) | (0xffU 
                                                 & vlSelf->rv32e__DOT__mem__DOT__read_mem_data))
                                   : ((3U == (IData)(vlSelf->rv32e__DOT__mem__DOT__l_MemLen))
                                       ? (0xffffU & vlSelf->rv32e__DOT__mem__DOT__read_mem_data)
                                       : ((1U == (IData)(vlSelf->rv32e__DOT__mem__DOT__l_MemLen))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->rv32e__DOT__mem__DOT__read_mem_data 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelf->rv32e__DOT__mem__DOT__read_mem_data))
                                           : ((2U == (IData)(vlSelf->rv32e__DOT__mem__DOT__l_MemLen))
                                               ? vlSelf->rv32e__DOT__mem__DOT__read_mem_data
                                               : 0U)))))),32);
    bufp->fullIData(oldp+74,(vlSelf->rv32e__DOT__wbu__DOT__regs[0]),32);
    bufp->fullIData(oldp+75,(vlSelf->rv32e__DOT__wbu__DOT__regs[1]),32);
    bufp->fullIData(oldp+76,(vlSelf->rv32e__DOT__wbu__DOT__regs[2]),32);
    bufp->fullIData(oldp+77,(vlSelf->rv32e__DOT__wbu__DOT__regs[3]),32);
    bufp->fullIData(oldp+78,(vlSelf->rv32e__DOT__wbu__DOT__regs[4]),32);
    bufp->fullIData(oldp+79,(vlSelf->rv32e__DOT__wbu__DOT__regs[5]),32);
    bufp->fullIData(oldp+80,(vlSelf->rv32e__DOT__wbu__DOT__regs[6]),32);
    bufp->fullIData(oldp+81,(vlSelf->rv32e__DOT__wbu__DOT__regs[7]),32);
    bufp->fullIData(oldp+82,(vlSelf->rv32e__DOT__wbu__DOT__regs[8]),32);
    bufp->fullIData(oldp+83,(vlSelf->rv32e__DOT__wbu__DOT__regs[9]),32);
    bufp->fullIData(oldp+84,(vlSelf->rv32e__DOT__wbu__DOT__regs[10]),32);
    bufp->fullIData(oldp+85,(vlSelf->rv32e__DOT__wbu__DOT__regs[11]),32);
    bufp->fullIData(oldp+86,(vlSelf->rv32e__DOT__wbu__DOT__regs[12]),32);
    bufp->fullIData(oldp+87,(vlSelf->rv32e__DOT__wbu__DOT__regs[13]),32);
    bufp->fullIData(oldp+88,(vlSelf->rv32e__DOT__wbu__DOT__regs[14]),32);
    bufp->fullIData(oldp+89,(vlSelf->rv32e__DOT__wbu__DOT__regs[15]),32);
    bufp->fullIData(oldp+90,(vlSelf->rv32e__DOT__wbu__DOT__regs[16]),32);
    bufp->fullIData(oldp+91,(vlSelf->rv32e__DOT__wbu__DOT__regs[17]),32);
    bufp->fullIData(oldp+92,(vlSelf->rv32e__DOT__wbu__DOT__regs[18]),32);
    bufp->fullIData(oldp+93,(vlSelf->rv32e__DOT__wbu__DOT__regs[19]),32);
    bufp->fullIData(oldp+94,(vlSelf->rv32e__DOT__wbu__DOT__regs[20]),32);
    bufp->fullIData(oldp+95,(vlSelf->rv32e__DOT__wbu__DOT__regs[21]),32);
    bufp->fullIData(oldp+96,(vlSelf->rv32e__DOT__wbu__DOT__regs[22]),32);
    bufp->fullIData(oldp+97,(vlSelf->rv32e__DOT__wbu__DOT__regs[23]),32);
    bufp->fullIData(oldp+98,(vlSelf->rv32e__DOT__wbu__DOT__regs[24]),32);
    bufp->fullIData(oldp+99,(vlSelf->rv32e__DOT__wbu__DOT__regs[25]),32);
    bufp->fullIData(oldp+100,(vlSelf->rv32e__DOT__wbu__DOT__regs[26]),32);
    bufp->fullIData(oldp+101,(vlSelf->rv32e__DOT__wbu__DOT__regs[27]),32);
    bufp->fullIData(oldp+102,(vlSelf->rv32e__DOT__wbu__DOT__regs[28]),32);
    bufp->fullIData(oldp+103,(vlSelf->rv32e__DOT__wbu__DOT__regs[29]),32);
    bufp->fullIData(oldp+104,(vlSelf->rv32e__DOT__wbu__DOT__regs[30]),32);
    bufp->fullIData(oldp+105,(vlSelf->rv32e__DOT__wbu__DOT__regs[31]),32);
    bufp->fullBit(oldp+106,(vlSelf->rv32e__DOT__wbu__DOT__flush));
    bufp->fullIData(oldp+107,(vlSelf->rv32e__DOT__wbu__DOT__i),32);
    bufp->fullIData(oldp+108,(vlSelf->rv32e__DOT__ex_mem_pc),32);
    bufp->fullIData(oldp+109,(vlSelf->rv32e__DOT__ex_mem_inst),32);
    bufp->fullBit(oldp+110,(vlSelf->rv32e__DOT__ex_mem_valid));
    bufp->fullIData(oldp+111,(vlSelf->rv32e__DOT__ex_mem_src2),32);
    bufp->fullBit(oldp+112,(vlSelf->rv32e__DOT__ex_mem_RegWrite));
    bufp->fullCData(oldp+113,(vlSelf->rv32e__DOT__ex_mem_rd),5);
    bufp->fullBit(oldp+114,(vlSelf->rv32e__DOT__ex_mem_MemRead));
    bufp->fullBit(oldp+115,(vlSelf->rv32e__DOT__ex_mem_MemWrite));
    bufp->fullCData(oldp+116,(vlSelf->rv32e__DOT__ex_mem_MemLen),3);
    bufp->fullIData(oldp+117,(vlSelf->rv32e__DOT__ex_mem_process_result),32);
    bufp->fullBit(oldp+118,(vlSelf->rv32e__DOT__ex_mem_csr));
    bufp->fullBit(oldp+119,(vlSelf->rv32e__DOT__ex_mem_csr_wen1));
    bufp->fullBit(oldp+120,(vlSelf->rv32e__DOT__ex_mem_csr_wen2));
    bufp->fullSData(oldp+121,(vlSelf->rv32e__DOT__ex_mem_csr_wr_addr1),12);
    bufp->fullSData(oldp+122,(vlSelf->rv32e__DOT__ex_mem_csr_wr_addr2),12);
    bufp->fullIData(oldp+123,(vlSelf->rv32e__DOT__ex_mem_csr_wr_data1),32);
    bufp->fullIData(oldp+124,(vlSelf->rv32e__DOT__ex_mem_csr_wr_data2),32);
    bufp->fullIData(oldp+125,(vlSelf->rv32e__DOT__ex_mem_csr_rdata),32);
    bufp->fullBit(oldp+126,(vlSelf->rv32e__DOT__ex_mem_csr_ecall));
    bufp->fullBit(oldp+127,(vlSelf->rv32e__DOT__ex_mem_csr_mret));
    bufp->fullIData(oldp+128,(vlSelf->rv32e__DOT__ex_mem_imm),32);
    bufp->fullCData(oldp+129,(vlSelf->rv32e__DOT__ex_mem_opcode),7);
    bufp->fullBit(oldp+130,(vlSelf->rv32e__DOT__ex_mem_forward_las));
    bufp->fullCData(oldp+131,(((1U == (IData)(vlSelf->rv32e__DOT__ex_mem_MemLen))
                                ? 0U : ((2U == (IData)(vlSelf->rv32e__DOT__ex_mem_MemLen))
                                         ? 1U : ((4U 
                                                  == (IData)(vlSelf->rv32e__DOT__ex_mem_MemLen))
                                                  ? 3U
                                                  : 0U)))),2);
    bufp->fullBit(oldp+132,(vlSelf->rv32e__DOT__ifu__DOT__check));
    bufp->fullIData(oldp+133,(vlSelf->rv32e__DOT__id_ex_pc),32);
    bufp->fullIData(oldp+134,(vlSelf->rv32e__DOT__id_ex_inst),32);
    bufp->fullBit(oldp+135,(vlSelf->rv32e__DOT__id_valid));
    bufp->fullBit(oldp+136,(vlSelf->rv32e__DOT__id_ex_RegWrite));
    bufp->fullCData(oldp+137,(vlSelf->rv32e__DOT__id_ex_rd),5);
    bufp->fullCData(oldp+138,(vlSelf->rv32e__DOT__id_wb_rs1),5);
    bufp->fullCData(oldp+139,(vlSelf->rv32e__DOT__id_ex_zimm),5);
    bufp->fullIData(oldp+140,(vlSelf->rv32e__DOT__id_ex_imm),32);
    bufp->fullCData(oldp+141,(vlSelf->rv32e__DOT__id_ex_MemLen),3);
    bufp->fullBit(oldp+142,(vlSelf->rv32e__DOT__id_ex_MemWrite));
    bufp->fullBit(oldp+143,(vlSelf->rv32e__DOT__id_ex_MemRead));
    bufp->fullCData(oldp+144,(vlSelf->rv32e__DOT__id_ex_opcode),7);
    bufp->fullBit(oldp+145,(vlSelf->rv32e__DOT__id_ex_csr));
    bufp->fullBit(oldp+146,(vlSelf->rv32e__DOT__id_ex_csr_wen1));
    bufp->fullBit(oldp+147,(vlSelf->rv32e__DOT__id_ex_csr_wen2));
    bufp->fullBit(oldp+148,(vlSelf->rv32e__DOT__id_ex_csr_ecall));
    bufp->fullBit(oldp+149,(vlSelf->rv32e__DOT__id_ex_csr_mret));
    bufp->fullBit(oldp+150,(vlSelf->rv32e__DOT__id_ex_csrrw));
    bufp->fullBit(oldp+151,(vlSelf->rv32e__DOT__id_ex_csrrs));
    bufp->fullBit(oldp+152,(vlSelf->rv32e__DOT__id_ex_csrrc));
    bufp->fullBit(oldp+153,(vlSelf->rv32e__DOT__id_ex_csrrwi));
    bufp->fullBit(oldp+154,(vlSelf->rv32e__DOT__id_ex_csrrsi));
    bufp->fullBit(oldp+155,(vlSelf->rv32e__DOT__id_ex_csrrci));
    bufp->fullSData(oldp+156,(vlSelf->rv32e__DOT__id_ex_csr_wr_addr1),12);
    bufp->fullSData(oldp+157,(vlSelf->rv32e__DOT__id_ex_csr_wr_addr2),12);
    bufp->fullBit(oldp+158,(vlSelf->rv32e__DOT__mem_ex_ready));
    bufp->fullIData(oldp+159,(vlSelf->rv32e__DOT__wb_ex_csr_num1),32);
    bufp->fullIData(oldp+160,(((IData)(vlSelf->rv32e__DOT__id_ex_csr_ecall)
                                ? vlSelf->rv32e__DOT__id_ex_pc
                                : 0U)),32);
    bufp->fullIData(oldp+161,((0x80U | ((0xffffe7f7U 
                                         & vlSelf->rv32e__DOT__wb_ex_csr_num1) 
                                        | (8U & (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                                 >> 4U))))),32);
    bufp->fullIData(oldp+162,((1U & (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                     >> 7U))),32);
    bufp->fullBit(oldp+163,(vlSelf->rv32e__DOT__id_ready));
    bufp->fullBit(oldp+164,(vlSelf->rv32e__DOT__ex_ready));
    bufp->fullBit(oldp+165,(vlSelf->rv32e__DOT__ex_flush));
    bufp->fullIData(oldp+166,(vlSelf->rv32e__DOT__ex_flush_pc),32);
    bufp->fullCData(oldp+167,(vlSelf->rv32e__DOT__exu__DOT__load_use_flag),4);
    bufp->fullIData(oldp+168,(vlSelf->rv32e__DOT__exu__DOT__src1),32);
    bufp->fullIData(oldp+169,(vlSelf->rv32e__DOT__exu__DOT__src2),32);
    bufp->fullIData(oldp+170,(vlSelf->rv32e__DOT__exu__DOT__ex_num1),32);
    bufp->fullIData(oldp+171,(vlSelf->rv32e__DOT__exu__DOT__ex_num2),32);
    bufp->fullIData(oldp+172,(vlSelf->rv32e__DOT__exu__DOT__process_result),32);
    bufp->fullBit(oldp+173,(vlSelf->rv32e__DOT__exu__DOT__alu_zero));
    bufp->fullBit(oldp+174,(vlSelf->rv32e__DOT__exu__DOT__alu_less));
    bufp->fullIData(oldp+175,(vlSelf->rv32e__DOT__exu__DOT__jal_target),32);
    bufp->fullIData(oldp+176,(vlSelf->rv32e__DOT__exu__DOT__jalr_target),32);
    bufp->fullBit(oldp+177,(vlSelf->rv32e__DOT__exu__DOT__take_branch));
    bufp->fullIData(oldp+178,(vlSelf->rv32e__DOT__mem__DOT__rd_data),32);
    bufp->fullBit(oldp+179,(vlSelf->clk));
    bufp->fullBit(oldp+180,(vlSelf->reset));
    bufp->fullIData(oldp+181,(vlSelf->rv32e__DOT__IF_ID_pc),32);
    bufp->fullIData(oldp+182,(((0U == (IData)(vlSelf->rv32e__DOT__id_wb_rs1))
                                ? 0U : vlSelf->rv32e__DOT__wbu__DOT__regs
                               [vlSelf->rv32e__DOT__id_wb_rs1])),32);
    bufp->fullCData(oldp+183,((((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h8a6a16ae__0) 
                                << 1U) | (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h4a02e166__0))),2);
    bufp->fullCData(oldp+184,((((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hee6faf4b__0) 
                                << 1U) | (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h7c98a91f__0))),2);
    bufp->fullBit(oldp+185,(((IData)(vlSelf->rv32e__DOT__id_ex_MemWrite) 
                             & ((IData)(vlSelf->rv32e__DOT__ex_mem_MemRead) 
                                & ((IData)(vlSelf->rv32e__DOT__ex_mem_RegWrite) 
                                   & ((IData)(vlSelf->rv32e__DOT__ex_mem_valid) 
                                      & ((0U != (IData)(vlSelf->rv32e__DOT__ex_mem_rd)) 
                                         & (((IData)(vlSelf->rv32e__DOT__ex_mem_rd) 
                                             != (IData)(vlSelf->rv32e__DOT__id_wb_rs1)) 
                                            & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h9a0aa151__0)))))))));
    bufp->fullIData(oldp+186,(((IData)(vlSelf->rv32e__DOT__id_ex_csrrw)
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
    bufp->fullBit(oldp+187,(1U));
    bufp->fullIData(oldp+188,(0U),32);
    bufp->fullIData(oldp+189,(5U),32);
    bufp->fullIData(oldp+190,(0x20U),32);
}
