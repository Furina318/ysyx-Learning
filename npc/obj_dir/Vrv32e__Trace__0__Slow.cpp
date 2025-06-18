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
    tracep->declBit(c+183,"clk", false,-1);
    tracep->declBit(c+184,"reset", false,-1);
    tracep->pushNamePrefix("rv32e ");
    tracep->declBit(c+183,"clk", false,-1);
    tracep->declBit(c+184,"reset", false,-1);
    tracep->declBus(c+148,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+2,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+3,"IF_valid", false,-1);
    tracep->declBit(c+167,"id_ready", false,-1);
    tracep->declBus(c+47,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+48,"id_ex_inst", false,-1, 31,0);
    tracep->declBit(c+49,"id_valid", false,-1);
    tracep->declBit(c+168,"ex_ready", false,-1);
    tracep->declBit(c+50,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+51,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+52,"id_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+53,"id_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+54,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+55,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+56,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+57,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+58,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBit(c+59,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+60,"id_ex_MemRead", false,-1);
    tracep->declBus(c+61,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+62,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+63,"id_ex_jal", false,-1);
    tracep->declBit(c+64,"id_ex_jalr", false,-1);
    tracep->declBit(c+65,"id_ex_csr", false,-1);
    tracep->declBit(c+66,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+67,"id_ex_csr_wen2", false,-1);
    tracep->declBit(c+68,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+69,"id_ex_csr_mret", false,-1);
    tracep->declBit(c+70,"id_ex_csrrw", false,-1);
    tracep->declBit(c+71,"id_ex_csrrs", false,-1);
    tracep->declBit(c+72,"id_ex_csrrc", false,-1);
    tracep->declBit(c+73,"id_ex_csrrwi", false,-1);
    tracep->declBit(c+74,"id_ex_csrrsi", false,-1);
    tracep->declBit(c+75,"id_ex_csrrci", false,-1);
    tracep->declBus(c+76,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+77,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+78,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+79,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBus(c+149,"ex_lsu_pc", false,-1, 31,0);
    tracep->declBus(c+150,"ex_lsu_inst", false,-1, 31,0);
    tracep->declBit(c+151,"ex_lsu_valid", false,-1);
    tracep->declBit(c+80,"lsu_ex_ready", false,-1);
    tracep->declBus(c+152,"ex_lsu_src2", false,-1, 31,0);
    tracep->declBit(c+153,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+154,"ex_lsu_rd", false,-1, 4,0);
    tracep->declBit(c+155,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+156,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+157,"ex_lsu_MemLen", false,-1, 2,0);
    tracep->declBus(c+158,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBit(c+169,"ex_flush", false,-1);
    tracep->declBus(c+170,"ex_flush_pc", false,-1, 31,0);
    tracep->declBit(c+40,"ex_lsu_csr", false,-1);
    tracep->declBit(c+159,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+160,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+161,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+162,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+163,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+164,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+41,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+42,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+43,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+44,"ex_lsu_imm", false,-1, 31,0);
    tracep->declBus(c+165,"ex_lsu_opcode", false,-1, 6,0);
    tracep->declBus(c+81,"lsu_wb_pc", false,-1, 31,0);
    tracep->declBus(c+82,"lsu_wb_inst", false,-1, 31,0);
    tracep->declBit(c+83,"lsu_wb_valid", false,-1);
    tracep->declBit(c+189,"wb_lsu_ready", false,-1);
    tracep->declBit(c+84,"lsu_wb_RegWrite", false,-1);
    tracep->declBus(c+85,"lsu_wb_rd", false,-1, 4,0);
    tracep->declBus(c+86,"lsu_wb_write_rd_data", false,-1, 31,0);
    tracep->declBus(c+87,"lsu_wb_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+88,"lsu_wb_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+89,"lsu_wb_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+90,"lsu_wb_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+91,"lsu_wb_csr_wen1", false,-1);
    tracep->declBit(c+92,"lsu_wb_csr_wen2", false,-1);
    tracep->declBit(c+93,"lsu_wb_flush", false,-1);
    tracep->declBit(c+94,"wb_valid", false,-1);
    tracep->declBus(c+95,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+96,"wb_ex_src2", false,-1, 31,0);
    tracep->declBus(c+97,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+98,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBus(c+99,"lsu_ex_forward_rd", false,-1, 4,0);
    tracep->declBit(c+100,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+101,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBit(c+45,"ex_lsu_forward_las", false,-1);
    tracep->declBus(c+158,"addr", false,-1, 31,0);
    tracep->declBus(c+152,"wdata", false,-1, 31,0);
    tracep->declBit(c+156,"wen", false,-1);
    tracep->declBus(c+166,"mask", false,-1, 1,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+183,"clk", false,-1);
    tracep->declBit(c+184,"reset", false,-1);
    tracep->declBit(c+167,"id_ready", false,-1);
    tracep->declBit(c+49,"id_valid", false,-1);
    tracep->declBit(c+168,"ex_ready", false,-1);
    tracep->declBit(c+80,"lsu_ready", false,-1);
    tracep->declBit(c+151,"ex_lsu_valid", false,-1);
    tracep->declBus(c+52,"id_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+53,"id_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+99,"lsu_ex_forward_rd", false,-1, 4,0);
    tracep->declBit(c+100,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+101,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBus(c+86,"lsu_wb_wdata", false,-1, 31,0);
    tracep->declBus(c+85,"lsu_wb_rd", false,-1, 4,0);
    tracep->declBit(c+84,"lsu_wb_RegWrite", false,-1);
    tracep->declBit(c+83,"lsu_wb_valid", false,-1);
    tracep->declBit(c+45,"ex_lsu_forward_las", false,-1);
    tracep->declBus(c+48,"id_ex_inst", false,-1, 31,0);
    tracep->declBus(c+47,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+55,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+54,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+56,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+95,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+96,"wb_ex_src2", false,-1, 31,0);
    tracep->declBit(c+50,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+51,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+61,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+62,"id_ex_func3", false,-1, 2,0);
    tracep->declBus(c+57,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBit(c+63,"id_ex_jal", false,-1);
    tracep->declBit(c+64,"id_ex_jalr", false,-1);
    tracep->declBit(c+60,"id_ex_MemRead", false,-1);
    tracep->declBit(c+59,"id_ex_MemWrite", false,-1);
    tracep->declBus(c+58,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBus(c+97,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+98,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBit(c+65,"id_ex_csr", false,-1);
    tracep->declBit(c+66,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+67,"id_ex_csr_wen2", false,-1);
    tracep->declBus(c+76,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+77,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+68,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+69,"id_ex_csr_mret", false,-1);
    tracep->declBit(c+70,"id_ex_csrrw", false,-1);
    tracep->declBit(c+71,"id_ex_csrrs", false,-1);
    tracep->declBit(c+72,"id_ex_csrrc", false,-1);
    tracep->declBit(c+73,"id_ex_csrrwi", false,-1);
    tracep->declBit(c+74,"id_ex_csrrsi", false,-1);
    tracep->declBit(c+75,"id_ex_csrrci", false,-1);
    tracep->declBit(c+169,"ex_flush", false,-1);
    tracep->declBus(c+170,"ex_flush_pc", false,-1, 31,0);
    tracep->declBus(c+150,"ex_lsu_inst", false,-1, 31,0);
    tracep->declBus(c+149,"ex_lsu_pc", false,-1, 31,0);
    tracep->declBus(c+152,"ex_lsu_src2", false,-1, 31,0);
    tracep->declBit(c+153,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+154,"ex_lsu_rd", false,-1, 4,0);
    tracep->declBit(c+155,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+156,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+157,"ex_lsu_MemLen", false,-1, 2,0);
    tracep->declBus(c+165,"ex_lsu_opcode", false,-1, 6,0);
    tracep->declBit(c+40,"ex_lsu_csr", false,-1);
    tracep->declBit(c+159,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+160,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+161,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+162,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+163,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+164,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+41,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+42,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+43,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+44,"ex_lsu_imm", false,-1, 31,0);
    tracep->declBus(c+158,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBus(c+171,"src1", false,-1, 31,0);
    tracep->declBus(c+172,"src2", false,-1, 31,0);
    tracep->declBus(c+173,"ex_num1", false,-1, 31,0);
    tracep->declBus(c+174,"ex_num2", false,-1, 31,0);
    tracep->declBus(c+175,"process_result", false,-1, 31,0);
    tracep->declBit(c+176,"alu_zero", false,-1);
    tracep->declBit(c+177,"alu_less", false,-1);
    tracep->declBus(c+178,"jal_target", false,-1, 31,0);
    tracep->declBus(c+179,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+180,"take_branch", false,-1);
    tracep->declBit(c+102,"ex_flush_condition", false,-1);
    tracep->declBus(c+103,"csr_write_ecall", false,-1, 31,0);
    tracep->declBus(c+104,"mstatus_t", false,-1, 31,0);
    tracep->declBus(c+105,"mpie", false,-1, 31,0);
    tracep->declBus(c+185,"csr_write_wire", false,-1, 31,0);
    tracep->declBus(c+186,"forward_rs1", false,-1, 1,0);
    tracep->declBus(c+187,"forward_rs2", false,-1, 1,0);
    tracep->declBit(c+188,"forward_las", false,-1);
    tracep->declBus(c+181,"load_use_flag", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+183,"clk", false,-1);
    tracep->declBit(c+184,"reset", false,-1);
    tracep->declBus(c+148,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+2,"if_id_inst", false,-1, 31,0);
    tracep->declBit(c+169,"ex_flush", false,-1);
    tracep->declBit(c+3,"if_valid", false,-1);
    tracep->declBit(c+167,"id_ready", false,-1);
    tracep->declBit(c+168,"ex_ready", false,-1);
    tracep->declBit(c+49,"id_valid", false,-1);
    tracep->declBus(c+47,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+48,"id_ex_inst", false,-1, 31,0);
    tracep->declBit(c+50,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+51,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+52,"id_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+53,"id_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+54,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+55,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+56,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+57,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+58,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBit(c+59,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+60,"id_ex_MemRead", false,-1);
    tracep->declBus(c+61,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+62,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+63,"id_ex_jal", false,-1);
    tracep->declBit(c+64,"id_ex_jalr", false,-1);
    tracep->declBit(c+65,"id_ex_csr", false,-1);
    tracep->declBit(c+66,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+67,"id_ex_csr_wen2", false,-1);
    tracep->declBit(c+68,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+69,"id_ex_csr_mret", false,-1);
    tracep->declBit(c+70,"id_ex_csrrw", false,-1);
    tracep->declBit(c+71,"id_ex_csrrs", false,-1);
    tracep->declBit(c+72,"id_ex_csrrc", false,-1);
    tracep->declBit(c+73,"id_ex_csrrwi", false,-1);
    tracep->declBit(c+74,"id_ex_csrrsi", false,-1);
    tracep->declBit(c+75,"id_ex_csrrci", false,-1);
    tracep->declBus(c+76,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+77,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+78,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+79,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBus(c+4,"immI", false,-1, 31,0);
    tracep->declBus(c+5,"immU", false,-1, 31,0);
    tracep->declBus(c+6,"immS", false,-1, 31,0);
    tracep->declBus(c+7,"immB", false,-1, 31,0);
    tracep->declBus(c+8,"immJ", false,-1, 31,0);
    tracep->declBus(c+190,"immR", false,-1, 31,0);
    tracep->declBus(c+9,"immCSR", false,-1, 31,0);
    tracep->declBus(c+10,"opcode", false,-1, 6,0);
    tracep->declBus(c+11,"rs1", false,-1, 4,0);
    tracep->declBus(c+12,"rs2", false,-1, 4,0);
    tracep->declBus(c+13,"rd", false,-1, 4,0);
    tracep->declBus(c+14,"func3", false,-1, 2,0);
    tracep->declBus(c+15,"func7", false,-1, 6,0);
    tracep->declBus(c+16,"shamt", false,-1, 5,0);
    tracep->declBus(c+17,"get_opcode", false,-1, 4,0);
    tracep->declBus(c+18,"imm", false,-1, 31,0);
    tracep->declBus(c+19,"alu_op", false,-1, 3,0);
    tracep->declBit(c+20,"MemRead", false,-1);
    tracep->declBit(c+21,"MemWrite", false,-1);
    tracep->declBus(c+22,"MemLen", false,-1, 2,0);
    tracep->declBit(c+23,"jal", false,-1);
    tracep->declBit(c+24,"jalr", false,-1);
    tracep->declBit(c+25,"csr", false,-1);
    tracep->declBit(c+26,"csr_rd_en", false,-1);
    tracep->declBit(c+27,"csr_ecall", false,-1);
    tracep->declBit(c+28,"csr_mret", false,-1);
    tracep->declBit(c+29,"csrrw", false,-1);
    tracep->declBit(c+30,"csrrs", false,-1);
    tracep->declBit(c+31,"csrrc", false,-1);
    tracep->declBit(c+32,"csrrwi", false,-1);
    tracep->declBit(c+33,"csrrsi", false,-1);
    tracep->declBit(c+34,"csrrci", false,-1);
    tracep->declBus(c+35,"csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+36,"csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+37,"csr_rd_addr1", false,-1, 11,0);
    tracep->declBus(c+38,"csr_rd_addr2", false,-1, 11,0);
    tracep->declBit(c+39,"rd_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+183,"clk", false,-1);
    tracep->declBit(c+184,"reset", false,-1);
    tracep->declBit(c+169,"EX_flush", false,-1);
    tracep->declBus(c+170,"EX_flush_pc", false,-1, 31,0);
    tracep->declBit(c+167,"ID_ready", false,-1);
    tracep->declBit(c+3,"IF_valid", false,-1);
    tracep->declBus(c+148,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+2,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+46,"check", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+183,"clk", false,-1);
    tracep->declBit(c+184,"rst", false,-1);
    tracep->declBit(c+151,"ex_lsu_valid", false,-1);
    tracep->declBit(c+80,"lsu_ex_ready", false,-1);
    tracep->declBit(c+189,"wb_lsu_ready", false,-1);
    tracep->declBit(c+83,"lsu_wb_valid", false,-1);
    tracep->declBit(c+45,"ex_lsu_forward_las", false,-1);
    tracep->declBit(c+153,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+154,"ex_lsu_rd", false,-1, 4,0);
    tracep->declBit(c+155,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+156,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+157,"ex_lsu_MemLen", false,-1, 2,0);
    tracep->declBus(c+150,"ex_lsu_inst", false,-1, 31,0);
    tracep->declBus(c+149,"ex_lsu_pc", false,-1, 31,0);
    tracep->declBus(c+158,"addr", false,-1, 31,0);
    tracep->declBus(c+152,"data_in", false,-1, 31,0);
    tracep->declBus(c+44,"ex_lsu_imm", false,-1, 31,0);
    tracep->declBus(c+165,"ex_lsu_opcode", false,-1, 6,0);
    tracep->declBus(c+99,"lsu_ex_forward_rd", false,-1, 4,0);
    tracep->declBit(c+100,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+101,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBit(c+40,"ex_lsu_csr", false,-1);
    tracep->declBit(c+159,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+160,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+163,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+164,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+161,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+162,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+41,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+42,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+43,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+158,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBus(c+82,"lsu_wb_inst", false,-1, 31,0);
    tracep->declBus(c+81,"lsu_wb_pc", false,-1, 31,0);
    tracep->declBit(c+169,"ex_flush", false,-1);
    tracep->declBit(c+93,"lsu_wb_flush", false,-1);
    tracep->declBus(c+87,"lsu_wb_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+88,"lsu_wb_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+89,"lsu_wb_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+90,"lsu_wb_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+91,"lsu_wb_csr_wen1", false,-1);
    tracep->declBit(c+92,"lsu_wb_csr_wen2", false,-1);
    tracep->declBit(c+84,"lsu_wb_RegWrite", false,-1);
    tracep->declBus(c+85,"lsu_wb_rd", false,-1, 4,0);
    tracep->declBus(c+86,"lsu_wb_write_rd_data", false,-1, 31,0);
    tracep->declBit(c+101,"l_load", false,-1);
    tracep->declBit(c+100,"l_rd_en", false,-1);
    tracep->declBus(c+99,"l_rd_addr", false,-1, 4,0);
    tracep->declBus(c+106,"l_inst", false,-1, 31,0);
    tracep->declBus(c+107,"l_pc", false,-1, 31,0);
    tracep->declBus(c+108,"l_MemLen", false,-1, 2,0);
    tracep->declBus(c+109,"l_opcode", false,-1, 6,0);
    tracep->declBit(c+110,"read_valid", false,-1);
    tracep->declBit(c+111,"write_valid", false,-1);
    tracep->declBus(c+112,"read_lsu_data", false,-1, 31,0);
    tracep->declBus(c+113,"wr_rd_data", false,-1, 31,0);
    tracep->declBus(c+182,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBus(c+191,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+192,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+183,"clk", false,-1);
    tracep->declBit(c+184,"rst", false,-1);
    tracep->declBit(c+84,"wen", false,-1);
    tracep->declBit(c+83,"lsu_wb_valid", false,-1);
    tracep->declBit(c+189,"wb_lsu_ready", false,-1);
    tracep->declBus(c+86,"wdata", false,-1, 31,0);
    tracep->declBus(c+85,"waddr", false,-1, 4,0);
    tracep->declBus(c+52,"rs1", false,-1, 4,0);
    tracep->declBus(c+53,"rs2", false,-1, 4,0);
    tracep->declBus(c+95,"src1", false,-1, 31,0);
    tracep->declBus(c+96,"src2", false,-1, 31,0);
    tracep->declBit(c+94,"wb_valid", false,-1);
    tracep->declBit(c+93,"lsu_wb_flush", false,-1);
    tracep->declBus(c+78,"raddr_csr1", false,-1, 11,0);
    tracep->declBus(c+79,"raddr_csr2", false,-1, 11,0);
    tracep->declBit(c+91,"wen_csr1", false,-1);
    tracep->declBit(c+92,"wen_csr2", false,-1);
    tracep->declBus(c+87,"wdata_csr1", false,-1, 31,0);
    tracep->declBus(c+88,"wdata_csr2", false,-1, 31,0);
    tracep->declBus(c+89,"waddr_csr1", false,-1, 11,0);
    tracep->declBus(c+90,"waddr_csr2", false,-1, 11,0);
    tracep->declBus(c+97,"rdata_csr1", false,-1, 31,0);
    tracep->declBus(c+98,"rdata_csr2", false,-1, 31,0);
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
    bufp->fullCData(oldp+16,((0x3fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                       >> 0x14U))),6);
    bufp->fullCData(oldp+17,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                       >> 2U))),5);
    bufp->fullIData(oldp+18,(vlSelf->rv32e__DOT__idu__DOT__imm),32);
    bufp->fullCData(oldp+19,(vlSelf->rv32e__DOT__idu__DOT__alu_op),4);
    bufp->fullBit(oldp+20,((0U == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 2U)))));
    bufp->fullBit(oldp+21,((8U == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 2U)))));
    bufp->fullCData(oldp+22,((((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h69b43165__0) 
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
    bufp->fullBit(oldp+23,((0x6fU == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst))));
    bufp->fullBit(oldp+24,((IData)((0x67U == (0x707fU 
                                              & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullBit(oldp+25,((0x73U == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst))));
    bufp->fullBit(oldp+26,(((~ ((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall) 
                                | (IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret))) 
                            & (0x73U == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullBit(oldp+27,(vlSelf->rv32e__DOT__idu__DOT__csr_ecall));
    bufp->fullBit(oldp+28,(vlSelf->rv32e__DOT__idu__DOT__csr_mret));
    bufp->fullBit(oldp+29,((IData)((0x1073U == (0x707fU 
                                                & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullBit(oldp+30,((IData)((0x2073U == (0x707fU 
                                                & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullBit(oldp+31,((IData)((0x3073U == (0x707fU 
                                                & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullBit(oldp+32,((IData)((0x5073U == (0x707fU 
                                                & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullBit(oldp+33,((IData)((0x6073U == (0x707fU 
                                                & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullBit(oldp+34,((IData)((0x7073U == (0x707fU 
                                                & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullSData(oldp+35,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall)
                               ? 0x342U : ((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret)
                                            ? 0x300U
                                            : (IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hf81b0dad__0)))),12);
    bufp->fullSData(oldp+36,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall)
                               ? 0x341U : 0U)),12);
    bufp->fullSData(oldp+37,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret)
                               ? 0x300U : ((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall)
                                            ? 0x305U
                                            : (IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hf81b0dad__0)))),12);
    bufp->fullSData(oldp+38,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret)
                               ? 0x341U : 0U)),12);
    bufp->fullBit(oldp+39,(((0xdU == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
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
    bufp->fullBit(oldp+40,(vlSelf->rv32e__DOT__ex_lsu_csr));
    bufp->fullIData(oldp+41,(vlSelf->rv32e__DOT__ex_lsu_csr_rdata),32);
    bufp->fullBit(oldp+42,(vlSelf->rv32e__DOT__ex_lsu_csr_ecall));
    bufp->fullBit(oldp+43,(vlSelf->rv32e__DOT__ex_lsu_csr_mret));
    bufp->fullIData(oldp+44,(vlSelf->rv32e__DOT__ex_lsu_imm),32);
    bufp->fullBit(oldp+45,(vlSelf->rv32e__DOT__ex_lsu_forward_las));
    bufp->fullBit(oldp+46,(vlSelf->rv32e__DOT__ifu__DOT__check));
    bufp->fullIData(oldp+47,(vlSelf->rv32e__DOT__id_ex_pc),32);
    bufp->fullIData(oldp+48,(vlSelf->rv32e__DOT__id_ex_inst),32);
    bufp->fullBit(oldp+49,(vlSelf->rv32e__DOT__id_valid));
    bufp->fullBit(oldp+50,(vlSelf->rv32e__DOT__id_ex_RegWrite));
    bufp->fullCData(oldp+51,(vlSelf->rv32e__DOT__id_ex_rd),5);
    bufp->fullCData(oldp+52,(vlSelf->rv32e__DOT__id_wb_rs1),5);
    bufp->fullCData(oldp+53,(vlSelf->rv32e__DOT__id_wb_rs2),5);
    bufp->fullCData(oldp+54,(vlSelf->rv32e__DOT__id_ex_zimm),5);
    bufp->fullIData(oldp+55,(vlSelf->rv32e__DOT__id_ex_imm),32);
    bufp->fullCData(oldp+56,(vlSelf->rv32e__DOT__id_ex_shamt),6);
    bufp->fullCData(oldp+57,(vlSelf->rv32e__DOT__id_ex_alu_op),4);
    bufp->fullCData(oldp+58,(vlSelf->rv32e__DOT__id_ex_MemLen),3);
    bufp->fullBit(oldp+59,(vlSelf->rv32e__DOT__id_ex_MemWrite));
    bufp->fullBit(oldp+60,(vlSelf->rv32e__DOT__id_ex_MemRead));
    bufp->fullCData(oldp+61,(vlSelf->rv32e__DOT__id_ex_opcode),7);
    bufp->fullCData(oldp+62,(vlSelf->rv32e__DOT__id_ex_func3),3);
    bufp->fullBit(oldp+63,(vlSelf->rv32e__DOT__id_ex_jal));
    bufp->fullBit(oldp+64,(vlSelf->rv32e__DOT__id_ex_jalr));
    bufp->fullBit(oldp+65,(vlSelf->rv32e__DOT__id_ex_csr));
    bufp->fullBit(oldp+66,(vlSelf->rv32e__DOT__id_ex_csr_wen1));
    bufp->fullBit(oldp+67,(vlSelf->rv32e__DOT__id_ex_csr_wen2));
    bufp->fullBit(oldp+68,(vlSelf->rv32e__DOT__id_ex_csr_ecall));
    bufp->fullBit(oldp+69,(vlSelf->rv32e__DOT__id_ex_csr_mret));
    bufp->fullBit(oldp+70,(vlSelf->rv32e__DOT__id_ex_csrrw));
    bufp->fullBit(oldp+71,(vlSelf->rv32e__DOT__id_ex_csrrs));
    bufp->fullBit(oldp+72,(vlSelf->rv32e__DOT__id_ex_csrrc));
    bufp->fullBit(oldp+73,(vlSelf->rv32e__DOT__id_ex_csrrwi));
    bufp->fullBit(oldp+74,(vlSelf->rv32e__DOT__id_ex_csrrsi));
    bufp->fullBit(oldp+75,(vlSelf->rv32e__DOT__id_ex_csrrci));
    bufp->fullSData(oldp+76,(vlSelf->rv32e__DOT__id_ex_csr_wr_addr1),12);
    bufp->fullSData(oldp+77,(vlSelf->rv32e__DOT__id_ex_csr_wr_addr2),12);
    bufp->fullSData(oldp+78,(vlSelf->rv32e__DOT__id_wb_csr_addr1),12);
    bufp->fullSData(oldp+79,(vlSelf->rv32e__DOT__id_wb_csr_addr2),12);
    bufp->fullBit(oldp+80,(vlSelf->rv32e__DOT__lsu_ex_ready));
    bufp->fullIData(oldp+81,(vlSelf->rv32e__DOT__lsu_wb_pc),32);
    bufp->fullIData(oldp+82,(vlSelf->rv32e__DOT__lsu_wb_inst),32);
    bufp->fullBit(oldp+83,(vlSelf->rv32e__DOT__lsu_wb_valid));
    bufp->fullBit(oldp+84,(vlSelf->rv32e__DOT__lsu_wb_RegWrite));
    bufp->fullCData(oldp+85,(vlSelf->rv32e__DOT__lsu_wb_rd),5);
    bufp->fullIData(oldp+86,(vlSelf->rv32e__DOT__lsu_wb_write_rd_data),32);
    bufp->fullIData(oldp+87,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1),32);
    bufp->fullIData(oldp+88,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2),32);
    bufp->fullSData(oldp+89,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1),12);
    bufp->fullSData(oldp+90,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2),12);
    bufp->fullBit(oldp+91,(vlSelf->rv32e__DOT__lsu_wb_csr_wen1));
    bufp->fullBit(oldp+92,(vlSelf->rv32e__DOT__lsu_wb_csr_wen2));
    bufp->fullBit(oldp+93,(vlSelf->rv32e__DOT__lsu_wb_flush));
    bufp->fullBit(oldp+94,(vlSelf->rv32e__DOT__wb_valid));
    bufp->fullIData(oldp+95,(((0U == (IData)(vlSelf->rv32e__DOT__id_wb_rs1))
                               ? 0U : vlSelf->rv32e__DOT__wbu__DOT__regs
                              [vlSelf->rv32e__DOT__id_wb_rs1])),32);
    bufp->fullIData(oldp+96,(((0U == (IData)(vlSelf->rv32e__DOT__id_wb_rs2))
                               ? 0U : vlSelf->rv32e__DOT__wbu__DOT__regs
                              [vlSelf->rv32e__DOT__id_wb_rs2])),32);
    bufp->fullIData(oldp+97,(vlSelf->rv32e__DOT__wb_ex_csr_num1),32);
    bufp->fullIData(oldp+98,(vlSelf->rv32e__DOT__wbu__DOT__CSR
                             [vlSelf->rv32e__DOT__id_wb_csr_addr2]),32);
    bufp->fullCData(oldp+99,(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr),5);
    bufp->fullBit(oldp+100,(vlSelf->rv32e__DOT__lsu__DOT__l_rd_en));
    bufp->fullBit(oldp+101,(vlSelf->rv32e__DOT__lsu__DOT__l_load));
    bufp->fullBit(oldp+102,(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition));
    bufp->fullIData(oldp+103,(((IData)(vlSelf->rv32e__DOT__id_ex_csr_ecall)
                                ? vlSelf->rv32e__DOT__id_ex_pc
                                : 0U)),32);
    bufp->fullIData(oldp+104,((0x80U | ((0xffffe7f7U 
                                         & vlSelf->rv32e__DOT__wb_ex_csr_num1) 
                                        | (8U & (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                                 >> 4U))))),32);
    bufp->fullIData(oldp+105,((1U & (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                     >> 7U))),32);
    bufp->fullIData(oldp+106,(vlSelf->rv32e__DOT__lsu__DOT__l_inst),32);
    bufp->fullIData(oldp+107,(vlSelf->rv32e__DOT__lsu__DOT__l_pc),32);
    bufp->fullCData(oldp+108,(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen),3);
    bufp->fullCData(oldp+109,(vlSelf->rv32e__DOT__lsu__DOT__l_opcode),7);
    bufp->fullBit(oldp+110,(vlSelf->rv32e__DOT__lsu__DOT__read_valid));
    bufp->fullBit(oldp+111,(vlSelf->rv32e__DOT__lsu__DOT__write_valid));
    bufp->fullIData(oldp+112,(vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data),32);
    bufp->fullIData(oldp+113,(((0U == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                ? (0xffU & vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data)
                                : ((4U == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                                                       >> 7U)))) 
                                        << 8U) | (0xffU 
                                                  & vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data))
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
    bufp->fullIData(oldp+148,(vlSelf->rv32e__DOT__IF_ID_pc),32);
    bufp->fullIData(oldp+149,(vlSelf->rv32e__DOT__ex_lsu_pc),32);
    bufp->fullIData(oldp+150,(vlSelf->rv32e__DOT__ex_lsu_inst),32);
    bufp->fullBit(oldp+151,(vlSelf->rv32e__DOT__ex_lsu_valid));
    bufp->fullIData(oldp+152,(vlSelf->rv32e__DOT__ex_lsu_src2),32);
    bufp->fullBit(oldp+153,(vlSelf->rv32e__DOT__ex_lsu_RegWrite));
    bufp->fullCData(oldp+154,(vlSelf->rv32e__DOT__ex_lsu_rd),5);
    bufp->fullBit(oldp+155,(vlSelf->rv32e__DOT__ex_lsu_MemRead));
    bufp->fullBit(oldp+156,(vlSelf->rv32e__DOT__ex_lsu_MemWrite));
    bufp->fullCData(oldp+157,(vlSelf->rv32e__DOT__ex_lsu_MemLen),3);
    bufp->fullIData(oldp+158,(vlSelf->rv32e__DOT__ex_lsu_process_result),32);
    bufp->fullBit(oldp+159,(vlSelf->rv32e__DOT__ex_lsu_csr_wen1));
    bufp->fullBit(oldp+160,(vlSelf->rv32e__DOT__ex_lsu_csr_wen2));
    bufp->fullSData(oldp+161,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1),12);
    bufp->fullSData(oldp+162,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2),12);
    bufp->fullIData(oldp+163,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1),32);
    bufp->fullIData(oldp+164,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2),32);
    bufp->fullCData(oldp+165,(vlSelf->rv32e__DOT__ex_lsu_opcode),7);
    bufp->fullCData(oldp+166,(((1U == (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen))
                                ? 0U : ((2U == (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen))
                                         ? 1U : ((4U 
                                                  == (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen))
                                                  ? 3U
                                                  : 0U)))),2);
    bufp->fullBit(oldp+167,(vlSelf->rv32e__DOT__id_ready));
    bufp->fullBit(oldp+168,(vlSelf->rv32e__DOT__ex_ready));
    bufp->fullBit(oldp+169,(vlSelf->rv32e__DOT__ex_flush));
    bufp->fullIData(oldp+170,(vlSelf->rv32e__DOT__ex_flush_pc),32);
    bufp->fullIData(oldp+171,(vlSelf->rv32e__DOT__exu__DOT__src1),32);
    bufp->fullIData(oldp+172,(vlSelf->rv32e__DOT__exu__DOT__src2),32);
    bufp->fullIData(oldp+173,(vlSelf->rv32e__DOT__exu__DOT__ex_num1),32);
    bufp->fullIData(oldp+174,(vlSelf->rv32e__DOT__exu__DOT__ex_num2),32);
    bufp->fullIData(oldp+175,(vlSelf->rv32e__DOT__exu__DOT__process_result),32);
    bufp->fullBit(oldp+176,(vlSelf->rv32e__DOT__exu__DOT__alu_zero));
    bufp->fullBit(oldp+177,(vlSelf->rv32e__DOT__exu__DOT__alu_less));
    bufp->fullIData(oldp+178,(vlSelf->rv32e__DOT__exu__DOT__jal_target),32);
    bufp->fullIData(oldp+179,(vlSelf->rv32e__DOT__exu__DOT__jalr_target),32);
    bufp->fullBit(oldp+180,(vlSelf->rv32e__DOT__exu__DOT__take_branch));
    bufp->fullCData(oldp+181,(vlSelf->rv32e__DOT__exu__DOT__load_use_flag),4);
    bufp->fullIData(oldp+182,(vlSelf->rv32e__DOT__lsu__DOT__rd_data),32);
    bufp->fullBit(oldp+183,(vlSelf->clk));
    bufp->fullBit(oldp+184,(vlSelf->reset));
    bufp->fullIData(oldp+185,(((IData)(vlSelf->rv32e__DOT__id_ex_csrrw)
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
    bufp->fullCData(oldp+186,((((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h9653a62d__0) 
                                << 1U) | (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h666fa1ae__0))),2);
    bufp->fullCData(oldp+187,((((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0) 
                                << 1U) | (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h3556a05f__0))),2);
    bufp->fullBit(oldp+188,(((IData)(vlSelf->rv32e__DOT__id_ex_MemWrite) 
                             & ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                                & ((IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite) 
                                   & ((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                      & ((0U != (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)) 
                                         & (((IData)(vlSelf->rv32e__DOT__ex_lsu_rd) 
                                             != (IData)(vlSelf->rv32e__DOT__id_wb_rs1)) 
                                            & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0)))))))));
    bufp->fullBit(oldp+189,(1U));
    bufp->fullIData(oldp+190,(0U),32);
    bufp->fullIData(oldp+191,(5U),32);
    bufp->fullIData(oldp+192,(0x20U),32);
}
