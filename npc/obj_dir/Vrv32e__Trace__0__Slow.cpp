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
    tracep->declBit(c+218,"clk", false,-1);
    tracep->declBit(c+219,"reset", false,-1);
    tracep->pushNamePrefix("rv32e ");
    tracep->declBit(c+218,"clk", false,-1);
    tracep->declBit(c+219,"reset", false,-1);
    tracep->declBus(c+164,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+2,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+3,"IF_valid", false,-1);
    tracep->declBit(c+206,"id_ready", false,-1);
    tracep->declBus(c+165,"IF_ID_pc2", false,-1, 31,0);
    tracep->declBus(c+21,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+22,"id_ex_pc2", false,-1, 31,0);
    tracep->declBus(c+23,"id_ex_inst", false,-1, 31,0);
    tracep->declBit(c+24,"id_valid", false,-1);
    tracep->declBit(c+25,"ex_ready", false,-1);
    tracep->declBit(c+26,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+27,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+28,"id_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+29,"id_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+30,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+31,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+32,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+33,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+34,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBit(c+35,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+36,"id_ex_MemRead", false,-1);
    tracep->declBus(c+37,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+38,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+39,"id_ex_jal", false,-1);
    tracep->declBit(c+40,"id_ex_jalr", false,-1);
    tracep->declBit(c+41,"id_ex_csr", false,-1);
    tracep->declBit(c+42,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+43,"id_ex_csr_wen2", false,-1);
    tracep->declBit(c+44,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+45,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+46,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBus(c+47,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+48,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+49,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+50,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBus(c+51,"ex_lsu_pc", false,-1, 31,0);
    tracep->declBus(c+52,"ex_lsu_inst", false,-1, 31,0);
    tracep->declBit(c+53,"ex_lsu_valid", false,-1);
    tracep->declBit(c+54,"lsu_ex_ready", false,-1);
    tracep->declBus(c+55,"ex_lsu_src2", false,-1, 31,0);
    tracep->declBit(c+56,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+57,"ex_lsu_rd", false,-1, 4,0);
    tracep->declBit(c+58,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+59,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+60,"ex_lsu_MemLen", false,-1, 2,0);
    tracep->declBus(c+61,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBit(c+207,"ex_flush", false,-1);
    tracep->declBus(c+208,"ex_flush_pc", false,-1, 31,0);
    tracep->declBit(c+62,"ex_lsu_csr", false,-1);
    tracep->declBit(c+63,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+64,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+65,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+66,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+67,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+68,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+69,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+70,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+71,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+72,"ex_lsu_imm", false,-1, 31,0);
    tracep->declBus(c+73,"ex_lsu_opcode", false,-1, 6,0);
    tracep->declBus(c+74,"lsu_wb_pc", false,-1, 31,0);
    tracep->declBus(c+75,"lsu_wb_inst", false,-1, 31,0);
    tracep->declBit(c+76,"lsu_wb_valid", false,-1);
    tracep->declBit(c+223,"wb_lsu_ready", false,-1);
    tracep->declBit(c+77,"lsu_wb_RegWrite", false,-1);
    tracep->declBus(c+78,"lsu_wb_rd", false,-1, 4,0);
    tracep->declBus(c+79,"lsu_wb_write_rd_data", false,-1, 31,0);
    tracep->declBus(c+80,"lsu_wb_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+81,"lsu_wb_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+82,"lsu_wb_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+83,"lsu_wb_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+84,"lsu_wb_csr_wen1", false,-1);
    tracep->declBit(c+85,"lsu_wb_csr_wen2", false,-1);
    tracep->declBit(c+86,"lsu_wb_flush", false,-1);
    tracep->declBit(c+87,"wb_valid", false,-1);
    tracep->declBus(c+88,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+89,"wb_ex_src2", false,-1, 31,0);
    tracep->declBus(c+90,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+91,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBus(c+92,"lsu_ex_forward_rd", false,-1, 4,0);
    tracep->declBit(c+93,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+94,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBit(c+95,"ex_lsu_forward_las", false,-1);
    tracep->declBus(c+61,"addr", false,-1, 31,0);
    tracep->declBus(c+55,"wdata", false,-1, 31,0);
    tracep->declBit(c+59,"wen", false,-1);
    tracep->declBus(c+96,"mask", false,-1, 1,0);
    tracep->declBit(c+166,"predict_taken", false,-1);
    tracep->declBus(c+167,"predict_target", false,-1, 31,0);
    tracep->declBit(c+209,"ex_bpu_update", false,-1);
    tracep->declBus(c+210,"ex_bpu_pc", false,-1, 31,0);
    tracep->declBit(c+211,"ex_bpu_taken", false,-1);
    tracep->declBus(c+212,"ex_bpu_target", false,-1, 31,0);
    tracep->declBit(c+213,"ex_bpu_correct", false,-1);
    tracep->declBus(c+168,"correct_predictions", false,-1, 31,0);
    tracep->declBus(c+169,"total_predictions", false,-1, 31,0);
    tracep->declBit(c+97,"id_ex_predict_taken", false,-1);
    tracep->declBus(c+98,"id_ex_predict_target", false,-1, 31,0);
    tracep->declBus(c+99,"inst_cnt", false,-1, 31,0);
    tracep->declBus(c+100,"cycle_cnt", false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+218,"clk", false,-1);
    tracep->declBit(c+219,"reset", false,-1);
    tracep->declBit(c+206,"id_ready", false,-1);
    tracep->declBit(c+24,"id_valid", false,-1);
    tracep->declBit(c+25,"ex_ready", false,-1);
    tracep->declBit(c+54,"lsu_ready", false,-1);
    tracep->declBit(c+53,"ex_lsu_valid", false,-1);
    tracep->declBus(c+28,"id_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+29,"id_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+92,"lsu_ex_forward_rd", false,-1, 4,0);
    tracep->declBit(c+93,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+94,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBus(c+79,"lsu_wb_wdata", false,-1, 31,0);
    tracep->declBus(c+78,"lsu_wb_rd", false,-1, 4,0);
    tracep->declBit(c+77,"lsu_wb_RegWrite", false,-1);
    tracep->declBit(c+76,"lsu_wb_valid", false,-1);
    tracep->declBit(c+95,"ex_lsu_forward_las", false,-1);
    tracep->declBus(c+23,"id_ex_inst", false,-1, 31,0);
    tracep->declBus(c+21,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+22,"id_ex_pc2", false,-1, 31,0);
    tracep->declBus(c+31,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+30,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+32,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+88,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+89,"wb_ex_src2", false,-1, 31,0);
    tracep->declBit(c+26,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+27,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+37,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+38,"id_ex_func3", false,-1, 2,0);
    tracep->declBus(c+33,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBit(c+39,"id_ex_jal", false,-1);
    tracep->declBit(c+40,"id_ex_jalr", false,-1);
    tracep->declBit(c+36,"id_ex_MemRead", false,-1);
    tracep->declBit(c+35,"id_ex_MemWrite", false,-1);
    tracep->declBus(c+34,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBus(c+90,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+91,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBit(c+41,"id_ex_csr", false,-1);
    tracep->declBit(c+42,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+43,"id_ex_csr_wen2", false,-1);
    tracep->declBus(c+47,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+48,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+44,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+45,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+46,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBit(c+207,"ex_flush", false,-1);
    tracep->declBus(c+208,"ex_flush_pc", false,-1, 31,0);
    tracep->declBus(c+52,"ex_lsu_inst", false,-1, 31,0);
    tracep->declBus(c+51,"ex_lsu_pc", false,-1, 31,0);
    tracep->declBus(c+55,"ex_lsu_src2", false,-1, 31,0);
    tracep->declBit(c+56,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+57,"ex_lsu_rd", false,-1, 4,0);
    tracep->declBit(c+58,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+59,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+60,"ex_lsu_MemLen", false,-1, 2,0);
    tracep->declBus(c+73,"ex_lsu_opcode", false,-1, 6,0);
    tracep->declBit(c+62,"ex_lsu_csr", false,-1);
    tracep->declBit(c+63,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+64,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+65,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+66,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+67,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+68,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+69,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+70,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+71,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+72,"ex_lsu_imm", false,-1, 31,0);
    tracep->declBus(c+61,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBus(c+98,"id_ex_predict_target", false,-1, 31,0);
    tracep->declBit(c+97,"id_ex_predict_taken", false,-1);
    tracep->declBit(c+209,"ex_bpu_update", false,-1);
    tracep->declBus(c+210,"ex_bpu_pc", false,-1, 31,0);
    tracep->declBit(c+211,"ex_bpu_taken", false,-1);
    tracep->declBus(c+212,"ex_bpu_target", false,-1, 31,0);
    tracep->declBit(c+213,"ex_bpu_correct", false,-1);
    tracep->declBus(c+101,"src1", false,-1, 31,0);
    tracep->declBus(c+102,"src2", false,-1, 31,0);
    tracep->declBus(c+103,"ex_num1", false,-1, 31,0);
    tracep->declBus(c+104,"ex_num2", false,-1, 31,0);
    tracep->declBus(c+105,"process_result", false,-1, 31,0);
    tracep->declBit(c+106,"alu_zero", false,-1);
    tracep->declBit(c+107,"alu_less", false,-1);
    tracep->declBus(c+108,"jal_target", false,-1, 31,0);
    tracep->declBus(c+109,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+214,"take_branch", false,-1);
    tracep->declBit(c+110,"ex_flush_condition", false,-1);
    tracep->declBus(c+215,"actual_target", false,-1, 31,0);
    tracep->declBus(c+111,"csr_write_ecall", false,-1, 31,0);
    tracep->declBus(c+112,"mstatus_t", false,-1, 31,0);
    tracep->declBus(c+113,"mpie", false,-1, 31,0);
    tracep->declBus(c+114,"csr_write_data", false,-1, 31,0);
    tracep->declBus(c+115,"forward_rs1", false,-1, 1,0);
    tracep->declBus(c+116,"forward_rs2", false,-1, 1,0);
    tracep->declBit(c+117,"forward_las", false,-1);
    tracep->declBus(c+118,"load_use_flag", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+218,"clk", false,-1);
    tracep->declBit(c+219,"reset", false,-1);
    tracep->declBus(c+164,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+165,"if_id_pc2", false,-1, 31,0);
    tracep->declBus(c+2,"if_id_inst", false,-1, 31,0);
    tracep->declBit(c+207,"ex_flush", false,-1);
    tracep->declBit(c+3,"if_valid", false,-1);
    tracep->declBit(c+206,"id_ready", false,-1);
    tracep->declBit(c+25,"ex_ready", false,-1);
    tracep->declBit(c+24,"id_valid", false,-1);
    tracep->declBus(c+21,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+22,"id_ex_pc2", false,-1, 31,0);
    tracep->declBus(c+23,"id_ex_inst", false,-1, 31,0);
    tracep->declBit(c+26,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+27,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+28,"id_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+29,"id_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+30,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+31,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+32,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+33,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+34,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBit(c+35,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+36,"id_ex_MemRead", false,-1);
    tracep->declBus(c+37,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+38,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+39,"id_ex_jal", false,-1);
    tracep->declBit(c+40,"id_ex_jalr", false,-1);
    tracep->declBit(c+166,"predict_taken", false,-1);
    tracep->declBus(c+167,"predict_target", false,-1, 31,0);
    tracep->declBit(c+97,"id_ex_predict_taken", false,-1);
    tracep->declBus(c+98,"id_ex_predict_target", false,-1, 31,0);
    tracep->declBit(c+41,"id_ex_csr", false,-1);
    tracep->declBit(c+42,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+43,"id_ex_csr_wen2", false,-1);
    tracep->declBit(c+44,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+45,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+46,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBus(c+47,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+48,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+49,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+50,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBus(c+4,"opcode", false,-1, 6,0);
    tracep->declBus(c+5,"rs1", false,-1, 4,0);
    tracep->declBus(c+6,"rs2", false,-1, 4,0);
    tracep->declBus(c+7,"rd", false,-1, 4,0);
    tracep->declBus(c+8,"func3", false,-1, 2,0);
    tracep->declBus(c+9,"func7", false,-1, 6,0);
    tracep->declBus(c+10,"shamt", false,-1, 5,0);
    tracep->declBus(c+11,"get_opcode", false,-1, 4,0);
    tracep->declBus(c+12,"immI", false,-1, 31,0);
    tracep->declBus(c+13,"immU", false,-1, 31,0);
    tracep->declBus(c+14,"immS", false,-1, 31,0);
    tracep->declBus(c+15,"immB", false,-1, 31,0);
    tracep->declBus(c+16,"immJ", false,-1, 31,0);
    tracep->declBus(c+224,"immR", false,-1, 31,0);
    tracep->declBus(c+17,"immCSR", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+218,"clk", false,-1);
    tracep->declBit(c+219,"reset", false,-1);
    tracep->declBit(c+207,"EX_flush", false,-1);
    tracep->declBus(c+208,"EX_flush_pc", false,-1, 31,0);
    tracep->declBit(c+206,"ID_ready", false,-1);
    tracep->declBit(c+3,"IF_valid", false,-1);
    tracep->declBus(c+164,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+165,"IF_ID_pc2", false,-1, 31,0);
    tracep->declBus(c+2,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+166,"predict_taken", false,-1);
    tracep->declBus(c+167,"predict_target", false,-1, 31,0);
    tracep->declBit(c+170,"check", false,-1);
    tracep->declBit(c+18,"is_branch", false,-1);
    tracep->declBit(c+19,"is_jal", false,-1);
    tracep->declBit(c+20,"is_jalr", false,-1);
    tracep->declBus(c+16,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lbpu ");
    tracep->declBus(c+225,"BTB_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+226,"BTB_INDEX_BITS", false,-1, 31,0);
    tracep->declBus(c+227,"GHR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+225,"PHT_SIZE", false,-1, 31,0);
    tracep->declBus(c+226,"RAS_DEPTH", false,-1, 31,0);
    tracep->declBus(c+226,"PHT_INDEX_BITS", false,-1, 31,0);
    tracep->declBit(c+218,"clk", false,-1);
    tracep->declBit(c+219,"reset", false,-1);
    tracep->declBus(c+164,"if_pc", false,-1, 31,0);
    tracep->declBit(c+166,"predict_taken", false,-1);
    tracep->declBus(c+167,"predict_target", false,-1, 31,0);
    tracep->declBit(c+209,"ex_bpu_update", false,-1);
    tracep->declBus(c+210,"ex_bpu_pc", false,-1, 31,0);
    tracep->declBit(c+211,"ex_bpu_taken", false,-1);
    tracep->declBus(c+212,"ex_bpu_target", false,-1, 31,0);
    tracep->declBit(c+213,"ex_bpu_correct", false,-1);
    tracep->declBus(c+168,"correct_predictions", false,-1, 31,0);
    tracep->declBus(c+169,"total_predictions", false,-1, 31,0);
    tracep->declBus(c+171,"btb_index_if", false,-1, 7,0);
    tracep->declBus(c+172,"btb_tag_if", false,-1, 21,0);
    tracep->declBus(c+216,"btb_index_ex", false,-1, 7,0);
    tracep->declBus(c+217,"btb_tag_ex", false,-1, 21,0);
    tracep->declBit(c+173,"btb_hit_if", false,-1);
    tracep->declBit(c+220,"btb_hit_ex", false,-1);
    tracep->declBus(c+174,"ghr", false,-1, 3,0);
    tracep->declBus(c+175,"pht_index_if", false,-1, 7,0);
    tracep->declBus(c+221,"pht_index_ex", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+176+i*1,"ras", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+184+i*1,"ras_call_pc", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+192+i*1,"recursion_depth", true,(i+0), 3,0);
    }
    tracep->declBus(c+200,"ras_ptr", false,-1, 31,0);
    tracep->declBit(c+201,"ras_overflow", false,-1);
    tracep->declBit(c+202,"ras_underflow", false,-1);
    tracep->declBit(c+222,"is_recursive_call", false,-1);
    tracep->declBit(c+222,"is_recursive_return", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+203,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+204,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+205,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+218,"clk", false,-1);
    tracep->declBit(c+219,"rst", false,-1);
    tracep->declBit(c+53,"ex_lsu_valid", false,-1);
    tracep->declBit(c+54,"lsu_ex_ready", false,-1);
    tracep->declBit(c+223,"wb_lsu_ready", false,-1);
    tracep->declBit(c+76,"lsu_wb_valid", false,-1);
    tracep->declBit(c+95,"ex_lsu_forward_las", false,-1);
    tracep->declBit(c+56,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+57,"ex_lsu_rd", false,-1, 4,0);
    tracep->declBit(c+58,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+59,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+60,"ex_lsu_MemLen", false,-1, 2,0);
    tracep->declBus(c+52,"ex_lsu_inst", false,-1, 31,0);
    tracep->declBus(c+51,"ex_lsu_pc", false,-1, 31,0);
    tracep->declBus(c+61,"addr", false,-1, 31,0);
    tracep->declBus(c+55,"data_in", false,-1, 31,0);
    tracep->declBus(c+72,"ex_lsu_imm", false,-1, 31,0);
    tracep->declBus(c+73,"ex_lsu_opcode", false,-1, 6,0);
    tracep->declBus(c+92,"lsu_ex_forward_rd", false,-1, 4,0);
    tracep->declBit(c+93,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+94,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBit(c+62,"ex_lsu_csr", false,-1);
    tracep->declBit(c+63,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+64,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+67,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+68,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+65,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+66,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+69,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+70,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+71,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+61,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBus(c+75,"lsu_wb_inst", false,-1, 31,0);
    tracep->declBus(c+74,"lsu_wb_pc", false,-1, 31,0);
    tracep->declBit(c+207,"ex_flush", false,-1);
    tracep->declBit(c+86,"lsu_wb_flush", false,-1);
    tracep->declBus(c+80,"lsu_wb_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+81,"lsu_wb_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+82,"lsu_wb_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+83,"lsu_wb_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+84,"lsu_wb_csr_wen1", false,-1);
    tracep->declBit(c+85,"lsu_wb_csr_wen2", false,-1);
    tracep->declBit(c+77,"lsu_wb_RegWrite", false,-1);
    tracep->declBus(c+78,"lsu_wb_rd", false,-1, 4,0);
    tracep->declBus(c+79,"lsu_wb_write_rd_data", false,-1, 31,0);
    tracep->declBit(c+94,"l_load", false,-1);
    tracep->declBit(c+93,"l_rd_en", false,-1);
    tracep->declBus(c+92,"l_rd_addr", false,-1, 4,0);
    tracep->declBus(c+119,"l_inst", false,-1, 31,0);
    tracep->declBus(c+120,"l_pc", false,-1, 31,0);
    tracep->declBus(c+121,"l_MemLen", false,-1, 2,0);
    tracep->declBus(c+122,"l_opcode", false,-1, 6,0);
    tracep->declBit(c+123,"read_valid", false,-1);
    tracep->declBit(c+124,"write_valid", false,-1);
    tracep->declBus(c+125,"read_lsu_data", false,-1, 31,0);
    tracep->declBus(c+126,"wr_rd_data", false,-1, 31,0);
    tracep->declBus(c+127,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declDouble(c+128,"IPC", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBus(c+228,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+229,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+218,"clk", false,-1);
    tracep->declBit(c+219,"rst", false,-1);
    tracep->declBit(c+77,"wen", false,-1);
    tracep->declBit(c+76,"lsu_wb_valid", false,-1);
    tracep->declBit(c+223,"wb_lsu_ready", false,-1);
    tracep->declBus(c+79,"wdata", false,-1, 31,0);
    tracep->declBus(c+78,"waddr", false,-1, 4,0);
    tracep->declBus(c+28,"rs1", false,-1, 4,0);
    tracep->declBus(c+29,"rs2", false,-1, 4,0);
    tracep->declBus(c+88,"src1", false,-1, 31,0);
    tracep->declBus(c+89,"src2", false,-1, 31,0);
    tracep->declBit(c+87,"wb_valid", false,-1);
    tracep->declBit(c+86,"lsu_wb_flush", false,-1);
    tracep->declBus(c+49,"raddr_csr1", false,-1, 11,0);
    tracep->declBus(c+50,"raddr_csr2", false,-1, 11,0);
    tracep->declBit(c+84,"wen_csr1", false,-1);
    tracep->declBit(c+85,"wen_csr2", false,-1);
    tracep->declBus(c+80,"wdata_csr1", false,-1, 31,0);
    tracep->declBus(c+81,"wdata_csr2", false,-1, 31,0);
    tracep->declBus(c+82,"waddr_csr1", false,-1, 11,0);
    tracep->declBus(c+83,"waddr_csr2", false,-1, 11,0);
    tracep->declBus(c+90,"rdata_csr1", false,-1, 31,0);
    tracep->declBus(c+91,"rdata_csr2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+130+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBit(c+162,"flush", false,-1);
    tracep->declBus(c+163,"i", false,-1, 31,0);
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
    bufp->fullCData(oldp+4,((0x7fU & vlSelf->rv32e__DOT__IF_ID_inst)),7);
    bufp->fullCData(oldp+5,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+6,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+7,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                      >> 7U))),5);
    bufp->fullCData(oldp+8,((7U & (vlSelf->rv32e__DOT__IF_ID_inst 
                                   >> 0xcU))),3);
    bufp->fullCData(oldp+9,((vlSelf->rv32e__DOT__IF_ID_inst 
                             >> 0x19U)),7);
    bufp->fullCData(oldp+10,((0x3fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                       >> 0x14U))),6);
    bufp->fullCData(oldp+11,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                       >> 2U))),5);
    bufp->fullIData(oldp+12,(vlSelf->rv32e__DOT__idu__DOT__immI),32);
    bufp->fullIData(oldp+13,((0xfffff000U & vlSelf->rv32e__DOT__IF_ID_inst)),32);
    bufp->fullIData(oldp+14,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->rv32e__DOT__IF_ID_inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+15,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
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
    bufp->fullIData(oldp+16,(vlSelf->rv32e__DOT__idu__DOT__immJ),32);
    bufp->fullIData(oldp+17,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                       >> 0xfU))),32);
    bufp->fullBit(oldp+18,((0x63U == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst))));
    bufp->fullBit(oldp+19,((0x6fU == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst))));
    bufp->fullBit(oldp+20,((IData)((0x67U == (0x707fU 
                                              & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullIData(oldp+21,(vlSelf->rv32e__DOT__id_ex_pc),32);
    bufp->fullIData(oldp+22,(vlSelf->rv32e__DOT__id_ex_pc2),32);
    bufp->fullIData(oldp+23,(vlSelf->rv32e__DOT__id_ex_inst),32);
    bufp->fullBit(oldp+24,(vlSelf->rv32e__DOT__id_valid));
    bufp->fullBit(oldp+25,(vlSelf->rv32e__DOT__ex_ready));
    bufp->fullBit(oldp+26,(vlSelf->rv32e__DOT__id_ex_RegWrite));
    bufp->fullCData(oldp+27,(vlSelf->rv32e__DOT__id_ex_rd),5);
    bufp->fullCData(oldp+28,(vlSelf->rv32e__DOT__id_wb_rs1),5);
    bufp->fullCData(oldp+29,(vlSelf->rv32e__DOT__id_wb_rs2),5);
    bufp->fullCData(oldp+30,(vlSelf->rv32e__DOT__id_ex_zimm),5);
    bufp->fullIData(oldp+31,(vlSelf->rv32e__DOT__id_ex_imm),32);
    bufp->fullCData(oldp+32,(vlSelf->rv32e__DOT__id_ex_shamt),6);
    bufp->fullCData(oldp+33,(vlSelf->rv32e__DOT__id_ex_alu_op),4);
    bufp->fullCData(oldp+34,(vlSelf->rv32e__DOT__id_ex_MemLen),3);
    bufp->fullBit(oldp+35,(vlSelf->rv32e__DOT__id_ex_MemWrite));
    bufp->fullBit(oldp+36,(vlSelf->rv32e__DOT__id_ex_MemRead));
    bufp->fullCData(oldp+37,(vlSelf->rv32e__DOT__id_ex_opcode),7);
    bufp->fullCData(oldp+38,(vlSelf->rv32e__DOT__id_ex_func3),3);
    bufp->fullBit(oldp+39,(vlSelf->rv32e__DOT__id_ex_jal));
    bufp->fullBit(oldp+40,(vlSelf->rv32e__DOT__id_ex_jalr));
    bufp->fullBit(oldp+41,(vlSelf->rv32e__DOT__id_ex_csr));
    bufp->fullBit(oldp+42,(vlSelf->rv32e__DOT__id_ex_csr_wen1));
    bufp->fullBit(oldp+43,(vlSelf->rv32e__DOT__id_ex_csr_wen2));
    bufp->fullBit(oldp+44,(vlSelf->rv32e__DOT__id_ex_csr_ecall));
    bufp->fullBit(oldp+45,(vlSelf->rv32e__DOT__id_ex_csr_mret));
    bufp->fullCData(oldp+46,(vlSelf->rv32e__DOT__id_ex_csr_op),2);
    bufp->fullSData(oldp+47,(vlSelf->rv32e__DOT__id_ex_csr_wr_addr1),12);
    bufp->fullSData(oldp+48,(vlSelf->rv32e__DOT__id_ex_csr_wr_addr2),12);
    bufp->fullSData(oldp+49,(vlSelf->rv32e__DOT__id_wb_csr_addr1),12);
    bufp->fullSData(oldp+50,(vlSelf->rv32e__DOT__id_wb_csr_addr2),12);
    bufp->fullIData(oldp+51,(vlSelf->rv32e__DOT__ex_lsu_pc),32);
    bufp->fullIData(oldp+52,(vlSelf->rv32e__DOT__ex_lsu_inst),32);
    bufp->fullBit(oldp+53,(vlSelf->rv32e__DOT__ex_lsu_valid));
    bufp->fullBit(oldp+54,(vlSelf->rv32e__DOT__lsu_ex_ready));
    bufp->fullIData(oldp+55,(vlSelf->rv32e__DOT__ex_lsu_src2),32);
    bufp->fullBit(oldp+56,(vlSelf->rv32e__DOT__ex_lsu_RegWrite));
    bufp->fullCData(oldp+57,(vlSelf->rv32e__DOT__ex_lsu_rd),5);
    bufp->fullBit(oldp+58,(vlSelf->rv32e__DOT__ex_lsu_MemRead));
    bufp->fullBit(oldp+59,(vlSelf->rv32e__DOT__ex_lsu_MemWrite));
    bufp->fullCData(oldp+60,(vlSelf->rv32e__DOT__ex_lsu_MemLen),3);
    bufp->fullIData(oldp+61,(vlSelf->rv32e__DOT__ex_lsu_process_result),32);
    bufp->fullBit(oldp+62,(vlSelf->rv32e__DOT__ex_lsu_csr));
    bufp->fullBit(oldp+63,(vlSelf->rv32e__DOT__ex_lsu_csr_wen1));
    bufp->fullBit(oldp+64,(vlSelf->rv32e__DOT__ex_lsu_csr_wen2));
    bufp->fullSData(oldp+65,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1),12);
    bufp->fullSData(oldp+66,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2),12);
    bufp->fullIData(oldp+67,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1),32);
    bufp->fullIData(oldp+68,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2),32);
    bufp->fullIData(oldp+69,(vlSelf->rv32e__DOT__ex_lsu_csr_rdata),32);
    bufp->fullBit(oldp+70,(vlSelf->rv32e__DOT__ex_lsu_csr_ecall));
    bufp->fullBit(oldp+71,(vlSelf->rv32e__DOT__ex_lsu_csr_mret));
    bufp->fullIData(oldp+72,(vlSelf->rv32e__DOT__ex_lsu_imm),32);
    bufp->fullCData(oldp+73,(vlSelf->rv32e__DOT__ex_lsu_opcode),7);
    bufp->fullIData(oldp+74,(vlSelf->rv32e__DOT__lsu_wb_pc),32);
    bufp->fullIData(oldp+75,(vlSelf->rv32e__DOT__lsu_wb_inst),32);
    bufp->fullBit(oldp+76,(vlSelf->rv32e__DOT__lsu_wb_valid));
    bufp->fullBit(oldp+77,(vlSelf->rv32e__DOT__lsu_wb_RegWrite));
    bufp->fullCData(oldp+78,(vlSelf->rv32e__DOT__lsu_wb_rd),5);
    bufp->fullIData(oldp+79,(vlSelf->rv32e__DOT__lsu_wb_write_rd_data),32);
    bufp->fullIData(oldp+80,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1),32);
    bufp->fullIData(oldp+81,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2),32);
    bufp->fullSData(oldp+82,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1),12);
    bufp->fullSData(oldp+83,(vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2),12);
    bufp->fullBit(oldp+84,(vlSelf->rv32e__DOT__lsu_wb_csr_wen1));
    bufp->fullBit(oldp+85,(vlSelf->rv32e__DOT__lsu_wb_csr_wen2));
    bufp->fullBit(oldp+86,(vlSelf->rv32e__DOT__lsu_wb_flush));
    bufp->fullBit(oldp+87,(vlSelf->rv32e__DOT__wb_valid));
    bufp->fullIData(oldp+88,(((0U == (IData)(vlSelf->rv32e__DOT__id_wb_rs1))
                               ? 0U : vlSelf->rv32e__DOT__wbu__DOT__regs
                              [vlSelf->rv32e__DOT__id_wb_rs1])),32);
    bufp->fullIData(oldp+89,(((0U == (IData)(vlSelf->rv32e__DOT__id_wb_rs2))
                               ? 0U : vlSelf->rv32e__DOT__wbu__DOT__regs
                              [vlSelf->rv32e__DOT__id_wb_rs2])),32);
    bufp->fullIData(oldp+90,(vlSelf->rv32e__DOT__wb_ex_csr_num1),32);
    bufp->fullIData(oldp+91,(vlSelf->rv32e__DOT__wbu__DOT__CSR
                             [vlSelf->rv32e__DOT__id_wb_csr_addr2]),32);
    bufp->fullCData(oldp+92,(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr),5);
    bufp->fullBit(oldp+93,(vlSelf->rv32e__DOT__lsu__DOT__l_rd_en));
    bufp->fullBit(oldp+94,(vlSelf->rv32e__DOT__lsu__DOT__l_load));
    bufp->fullBit(oldp+95,(vlSelf->rv32e__DOT__ex_lsu_forward_las));
    bufp->fullCData(oldp+96,(((1U == (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen))
                               ? 0U : ((2U == (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen))
                                        ? 1U : ((4U 
                                                 == (IData)(vlSelf->rv32e__DOT__ex_lsu_MemLen))
                                                 ? 3U
                                                 : 0U)))),2);
    bufp->fullBit(oldp+97,(vlSelf->rv32e__DOT__id_ex_predict_taken));
    bufp->fullIData(oldp+98,(vlSelf->rv32e__DOT__id_ex_predict_target),32);
    bufp->fullIData(oldp+99,(vlSelf->rv32e__DOT__inst_cnt),32);
    bufp->fullIData(oldp+100,(vlSelf->rv32e__DOT__cycle_cnt),32);
    bufp->fullIData(oldp+101,(vlSelf->rv32e__DOT__exu__DOT__src1),32);
    bufp->fullIData(oldp+102,(vlSelf->rv32e__DOT__exu__DOT__src2),32);
    bufp->fullIData(oldp+103,(vlSelf->rv32e__DOT__exu__DOT__ex_num1),32);
    bufp->fullIData(oldp+104,(vlSelf->rv32e__DOT__exu__DOT__ex_num2),32);
    bufp->fullIData(oldp+105,(vlSelf->rv32e__DOT__exu__DOT__process_result),32);
    bufp->fullBit(oldp+106,(vlSelf->rv32e__DOT__exu__DOT__alu_zero));
    bufp->fullBit(oldp+107,(vlSelf->rv32e__DOT__exu__DOT__alu_less));
    bufp->fullIData(oldp+108,((vlSelf->rv32e__DOT__id_ex_pc 
                               + vlSelf->rv32e__DOT__id_ex_imm)),32);
    bufp->fullIData(oldp+109,((0xfffffffeU & (vlSelf->rv32e__DOT__exu__DOT__src1 
                                              + vlSelf->rv32e__DOT__id_ex_imm))),32);
    bufp->fullBit(oldp+110,(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition));
    bufp->fullIData(oldp+111,(((IData)(vlSelf->rv32e__DOT__id_ex_csr_ecall)
                                ? vlSelf->rv32e__DOT__id_ex_pc
                                : 0U)),32);
    bufp->fullIData(oldp+112,((0x80U | ((0xffffe7f7U 
                                         & vlSelf->rv32e__DOT__wb_ex_csr_num1) 
                                        | (8U & (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                                 >> 4U))))),32);
    bufp->fullIData(oldp+113,((1U & (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                     >> 7U))),32);
    bufp->fullIData(oldp+114,(vlSelf->rv32e__DOT__exu__DOT__csr_write_data),32);
    bufp->fullCData(oldp+115,((((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h9653a62d__0) 
                                << 1U) | (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h666fa1ae__0))),2);
    bufp->fullCData(oldp+116,((((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0) 
                                << 1U) | (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h3556a05f__0))),2);
    bufp->fullBit(oldp+117,(((IData)(vlSelf->rv32e__DOT__id_ex_MemWrite) 
                             & ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                                & ((IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite) 
                                   & ((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                      & ((0U != (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)) 
                                         & (((IData)(vlSelf->rv32e__DOT__ex_lsu_rd) 
                                             != (IData)(vlSelf->rv32e__DOT__id_wb_rs1)) 
                                            & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0)))))))));
    bufp->fullCData(oldp+118,(vlSelf->rv32e__DOT__exu__DOT__load_use_flag),4);
    bufp->fullIData(oldp+119,(vlSelf->rv32e__DOT__lsu__DOT__l_inst),32);
    bufp->fullIData(oldp+120,(vlSelf->rv32e__DOT__lsu__DOT__l_pc),32);
    bufp->fullCData(oldp+121,(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen),3);
    bufp->fullCData(oldp+122,(vlSelf->rv32e__DOT__lsu__DOT__l_opcode),7);
    bufp->fullBit(oldp+123,(vlSelf->rv32e__DOT__lsu__DOT__read_valid));
    bufp->fullBit(oldp+124,(vlSelf->rv32e__DOT__lsu__DOT__write_valid));
    bufp->fullIData(oldp+125,(vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data),32);
    bufp->fullIData(oldp+126,(((0U == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
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
    bufp->fullIData(oldp+127,(vlSelf->rv32e__DOT__lsu__DOT__rd_data),32);
    bufp->fullDouble(oldp+128,(vlSelf->rv32e__DOT__unnamedblk1__DOT__IPC));
    bufp->fullIData(oldp+130,(vlSelf->rv32e__DOT__wbu__DOT__regs[0]),32);
    bufp->fullIData(oldp+131,(vlSelf->rv32e__DOT__wbu__DOT__regs[1]),32);
    bufp->fullIData(oldp+132,(vlSelf->rv32e__DOT__wbu__DOT__regs[2]),32);
    bufp->fullIData(oldp+133,(vlSelf->rv32e__DOT__wbu__DOT__regs[3]),32);
    bufp->fullIData(oldp+134,(vlSelf->rv32e__DOT__wbu__DOT__regs[4]),32);
    bufp->fullIData(oldp+135,(vlSelf->rv32e__DOT__wbu__DOT__regs[5]),32);
    bufp->fullIData(oldp+136,(vlSelf->rv32e__DOT__wbu__DOT__regs[6]),32);
    bufp->fullIData(oldp+137,(vlSelf->rv32e__DOT__wbu__DOT__regs[7]),32);
    bufp->fullIData(oldp+138,(vlSelf->rv32e__DOT__wbu__DOT__regs[8]),32);
    bufp->fullIData(oldp+139,(vlSelf->rv32e__DOT__wbu__DOT__regs[9]),32);
    bufp->fullIData(oldp+140,(vlSelf->rv32e__DOT__wbu__DOT__regs[10]),32);
    bufp->fullIData(oldp+141,(vlSelf->rv32e__DOT__wbu__DOT__regs[11]),32);
    bufp->fullIData(oldp+142,(vlSelf->rv32e__DOT__wbu__DOT__regs[12]),32);
    bufp->fullIData(oldp+143,(vlSelf->rv32e__DOT__wbu__DOT__regs[13]),32);
    bufp->fullIData(oldp+144,(vlSelf->rv32e__DOT__wbu__DOT__regs[14]),32);
    bufp->fullIData(oldp+145,(vlSelf->rv32e__DOT__wbu__DOT__regs[15]),32);
    bufp->fullIData(oldp+146,(vlSelf->rv32e__DOT__wbu__DOT__regs[16]),32);
    bufp->fullIData(oldp+147,(vlSelf->rv32e__DOT__wbu__DOT__regs[17]),32);
    bufp->fullIData(oldp+148,(vlSelf->rv32e__DOT__wbu__DOT__regs[18]),32);
    bufp->fullIData(oldp+149,(vlSelf->rv32e__DOT__wbu__DOT__regs[19]),32);
    bufp->fullIData(oldp+150,(vlSelf->rv32e__DOT__wbu__DOT__regs[20]),32);
    bufp->fullIData(oldp+151,(vlSelf->rv32e__DOT__wbu__DOT__regs[21]),32);
    bufp->fullIData(oldp+152,(vlSelf->rv32e__DOT__wbu__DOT__regs[22]),32);
    bufp->fullIData(oldp+153,(vlSelf->rv32e__DOT__wbu__DOT__regs[23]),32);
    bufp->fullIData(oldp+154,(vlSelf->rv32e__DOT__wbu__DOT__regs[24]),32);
    bufp->fullIData(oldp+155,(vlSelf->rv32e__DOT__wbu__DOT__regs[25]),32);
    bufp->fullIData(oldp+156,(vlSelf->rv32e__DOT__wbu__DOT__regs[26]),32);
    bufp->fullIData(oldp+157,(vlSelf->rv32e__DOT__wbu__DOT__regs[27]),32);
    bufp->fullIData(oldp+158,(vlSelf->rv32e__DOT__wbu__DOT__regs[28]),32);
    bufp->fullIData(oldp+159,(vlSelf->rv32e__DOT__wbu__DOT__regs[29]),32);
    bufp->fullIData(oldp+160,(vlSelf->rv32e__DOT__wbu__DOT__regs[30]),32);
    bufp->fullIData(oldp+161,(vlSelf->rv32e__DOT__wbu__DOT__regs[31]),32);
    bufp->fullBit(oldp+162,(vlSelf->rv32e__DOT__wbu__DOT__flush));
    bufp->fullIData(oldp+163,(vlSelf->rv32e__DOT__wbu__DOT__i),32);
    bufp->fullIData(oldp+164,(vlSelf->rv32e__DOT__IF_ID_pc),32);
    bufp->fullIData(oldp+165,(vlSelf->rv32e__DOT__IF_ID_pc2),32);
    bufp->fullBit(oldp+166,(vlSelf->rv32e__DOT__predict_taken));
    bufp->fullIData(oldp+167,(vlSelf->rv32e__DOT__predict_target),32);
    bufp->fullIData(oldp+168,(vlSelf->rv32e__DOT__correct_predictions),32);
    bufp->fullIData(oldp+169,(vlSelf->rv32e__DOT__total_predictions),32);
    bufp->fullBit(oldp+170,(vlSelf->rv32e__DOT__ifu__DOT__check));
    bufp->fullCData(oldp+171,((0xffU & (vlSelf->rv32e__DOT__IF_ID_pc 
                                        >> 2U))),8);
    bufp->fullIData(oldp+172,((vlSelf->rv32e__DOT__IF_ID_pc 
                               >> 0xaU)),22);
    bufp->fullBit(oldp+173,(vlSelf->rv32e__DOT__lbpu__DOT__btb_hit_if));
    bufp->fullCData(oldp+174,(vlSelf->rv32e__DOT__lbpu__DOT__ghr),4);
    bufp->fullCData(oldp+175,(vlSelf->rv32e__DOT__lbpu__DOT__pht_index_if),8);
    bufp->fullIData(oldp+176,(vlSelf->rv32e__DOT__lbpu__DOT__ras[0]),32);
    bufp->fullIData(oldp+177,(vlSelf->rv32e__DOT__lbpu__DOT__ras[1]),32);
    bufp->fullIData(oldp+178,(vlSelf->rv32e__DOT__lbpu__DOT__ras[2]),32);
    bufp->fullIData(oldp+179,(vlSelf->rv32e__DOT__lbpu__DOT__ras[3]),32);
    bufp->fullIData(oldp+180,(vlSelf->rv32e__DOT__lbpu__DOT__ras[4]),32);
    bufp->fullIData(oldp+181,(vlSelf->rv32e__DOT__lbpu__DOT__ras[5]),32);
    bufp->fullIData(oldp+182,(vlSelf->rv32e__DOT__lbpu__DOT__ras[6]),32);
    bufp->fullIData(oldp+183,(vlSelf->rv32e__DOT__lbpu__DOT__ras[7]),32);
    bufp->fullIData(oldp+184,(vlSelf->rv32e__DOT__lbpu__DOT__ras_call_pc[0]),32);
    bufp->fullIData(oldp+185,(vlSelf->rv32e__DOT__lbpu__DOT__ras_call_pc[1]),32);
    bufp->fullIData(oldp+186,(vlSelf->rv32e__DOT__lbpu__DOT__ras_call_pc[2]),32);
    bufp->fullIData(oldp+187,(vlSelf->rv32e__DOT__lbpu__DOT__ras_call_pc[3]),32);
    bufp->fullIData(oldp+188,(vlSelf->rv32e__DOT__lbpu__DOT__ras_call_pc[4]),32);
    bufp->fullIData(oldp+189,(vlSelf->rv32e__DOT__lbpu__DOT__ras_call_pc[5]),32);
    bufp->fullIData(oldp+190,(vlSelf->rv32e__DOT__lbpu__DOT__ras_call_pc[6]),32);
    bufp->fullIData(oldp+191,(vlSelf->rv32e__DOT__lbpu__DOT__ras_call_pc[7]),32);
    bufp->fullCData(oldp+192,(vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth[0]),4);
    bufp->fullCData(oldp+193,(vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth[1]),4);
    bufp->fullCData(oldp+194,(vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth[2]),4);
    bufp->fullCData(oldp+195,(vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth[3]),4);
    bufp->fullCData(oldp+196,(vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth[4]),4);
    bufp->fullCData(oldp+197,(vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth[5]),4);
    bufp->fullCData(oldp+198,(vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth[6]),4);
    bufp->fullCData(oldp+199,(vlSelf->rv32e__DOT__lbpu__DOT__recursion_depth[7]),4);
    bufp->fullIData(oldp+200,(vlSelf->rv32e__DOT__lbpu__DOT__ras_ptr),32);
    bufp->fullBit(oldp+201,(vlSelf->rv32e__DOT__lbpu__DOT__ras_overflow));
    bufp->fullBit(oldp+202,(vlSelf->rv32e__DOT__lbpu__DOT__ras_underflow));
    bufp->fullIData(oldp+203,(vlSelf->rv32e__DOT__lbpu__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+204,(vlSelf->rv32e__DOT__lbpu__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+205,(vlSelf->rv32e__DOT__lbpu__DOT__unnamedblk3__DOT__i),32);
    bufp->fullBit(oldp+206,(vlSelf->rv32e__DOT__id_ready));
    bufp->fullBit(oldp+207,(vlSelf->rv32e__DOT__ex_flush));
    bufp->fullIData(oldp+208,(vlSelf->rv32e__DOT__ex_flush_pc),32);
    bufp->fullBit(oldp+209,(vlSelf->rv32e__DOT__ex_bpu_update));
    bufp->fullIData(oldp+210,(vlSelf->rv32e__DOT__ex_bpu_pc),32);
    bufp->fullBit(oldp+211,(vlSelf->rv32e__DOT__ex_bpu_taken));
    bufp->fullIData(oldp+212,(vlSelf->rv32e__DOT__ex_bpu_target),32);
    bufp->fullBit(oldp+213,(vlSelf->rv32e__DOT__ex_bpu_correct));
    bufp->fullBit(oldp+214,(vlSelf->rv32e__DOT__exu__DOT__take_branch));
    bufp->fullIData(oldp+215,(vlSelf->rv32e__DOT__exu__DOT__actual_target),32);
    bufp->fullCData(oldp+216,((0xffU & (vlSelf->rv32e__DOT__ex_bpu_pc 
                                        >> 2U))),8);
    bufp->fullIData(oldp+217,((vlSelf->rv32e__DOT__ex_bpu_pc 
                               >> 0xaU)),22);
    bufp->fullBit(oldp+218,(vlSelf->clk));
    bufp->fullBit(oldp+219,(vlSelf->reset));
    bufp->fullBit(oldp+220,((vlSelf->rv32e__DOT__lbpu__DOT__btb_valid
                             [(0xffU & (vlSelf->rv32e__DOT__ex_bpu_pc 
                                        >> 2U))] & 
                             (vlSelf->rv32e__DOT__lbpu__DOT__btb_tag
                              [(0xffU & (vlSelf->rv32e__DOT__ex_bpu_pc 
                                         >> 2U))] == 
                              (vlSelf->rv32e__DOT__ex_bpu_pc 
                               >> 0xaU)))));
    bufp->fullCData(oldp+221,(vlSelf->rv32e__DOT__lbpu__DOT__pht_index_ex),8);
    bufp->fullBit(oldp+222,(vlSelf->rv32e__DOT__lbpu__DOT__is_recursive_call));
    bufp->fullBit(oldp+223,(1U));
    bufp->fullIData(oldp+224,(0U),32);
    bufp->fullIData(oldp+225,(0x100U),32);
    bufp->fullIData(oldp+226,(8U),32);
    bufp->fullIData(oldp+227,(4U),32);
    bufp->fullIData(oldp+228,(5U),32);
    bufp->fullIData(oldp+229,(0x20U),32);
}
