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
    tracep->declBit(c+193,"clk", false,-1);
    tracep->declBit(c+194,"reset", false,-1);
    tracep->pushNamePrefix("rv32e ");
    tracep->declBit(c+193,"clk", false,-1);
    tracep->declBit(c+194,"reset", false,-1);
    tracep->declBus(c+140,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+141,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+142,"IF_valid", false,-1);
    tracep->declBit(c+177,"id_ready", false,-1);
    tracep->declBus(c+104,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+105,"id_ex_inst", false,-1, 31,0);
    tracep->declBit(c+106,"id_valid", false,-1);
    tracep->declBit(c+130,"ex_ready", false,-1);
    tracep->declBit(c+107,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+108,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+109,"id_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+2,"id_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+110,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+111,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+3,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+4,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+112,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBit(c+113,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+114,"id_ex_MemRead", false,-1);
    tracep->declBus(c+115,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+116,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+5,"id_ex_jal", false,-1);
    tracep->declBit(c+6,"id_ex_jalr", false,-1);
    tracep->declBit(c+117,"id_ex_csr", false,-1);
    tracep->declBit(c+118,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+119,"id_ex_csr_wen2", false,-1);
    tracep->declBit(c+120,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+121,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+122,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBus(c+123,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+124,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+7,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+8,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBus(c+81,"ex_lsu_pc", false,-1, 31,0);
    tracep->declBus(c+82,"ex_lsu_inst", false,-1, 31,0);
    tracep->declBit(c+83,"ex_lsu_valid", false,-1);
    tracep->declBit(c+125,"lsu_ex_ready", false,-1);
    tracep->declBus(c+84,"ex_lsu_src2", false,-1, 31,0);
    tracep->declBit(c+85,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+86,"ex_lsu_rd", false,-1, 4,0);
    tracep->declBit(c+87,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+88,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+89,"ex_lsu_MemLen", false,-1, 2,0);
    tracep->declBus(c+90,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBit(c+178,"ex_flush", false,-1);
    tracep->declBus(c+179,"ex_flush_pc", false,-1, 31,0);
    tracep->declBit(c+91,"ex_lsu_csr", false,-1);
    tracep->declBit(c+92,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+93,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+94,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+95,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+96,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+97,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+98,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+99,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+100,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+101,"ex_lsu_imm", false,-1, 31,0);
    tracep->declBus(c+102,"ex_lsu_opcode", false,-1, 6,0);
    tracep->declBus(c+9,"lsu_wb_pc", false,-1, 31,0);
    tracep->declBus(c+10,"lsu_wb_inst", false,-1, 31,0);
    tracep->declBit(c+11,"lsu_wb_valid", false,-1);
    tracep->declBit(c+200,"wb_lsu_ready", false,-1);
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
    tracep->declBus(c+195,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+23,"wb_ex_src2", false,-1, 31,0);
    tracep->declBus(c+126,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+24,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBus(c+25,"lsu_ex_forward_rd", false,-1, 4,0);
    tracep->declBit(c+26,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+27,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBit(c+103,"ex_lsu_forward_las", false,-1);
    tracep->declBit(c+201,"lsu_sram_arvalid", false,-1);
    tracep->declBit(c+202,"sram_lsu_arready", false,-1);
    tracep->declBus(c+203,"lsu_sram_araddr", false,-1, 31,0);
    tracep->declBus(c+204,"sram_lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+205,"sram_lsu_rvalid", false,-1);
    tracep->declBit(c+206,"lsu_sram_rready", false,-1);
    tracep->declBus(c+207,"sram_lsu_rresp", false,-1, 1,0);
    tracep->declBus(c+208,"lsu_sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+209,"lsu_sram_awvalid", false,-1);
    tracep->declBit(c+210,"sram_lsu_awready", false,-1);
    tracep->declBus(c+211,"lsu_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+212,"lsu_sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+213,"lsu_sram_wvalid", false,-1);
    tracep->declBit(c+214,"sram_lsu_wready", false,-1);
    tracep->declBus(c+215,"sram_lsu_bresp", false,-1, 1,0);
    tracep->declBit(c+216,"sram_lsu_bvalid", false,-1);
    tracep->declBit(c+217,"lsu_sram_bready", false,-1);
    tracep->declBit(c+190,"if_sram_arvalid", false,-1);
    tracep->declBit(c+183,"sram_if_arready", false,-1);
    tracep->declBus(c+191,"if_sram_araddr", false,-1, 31,0);
    tracep->declBus(c+184,"sram_if_rdata", false,-1, 31,0);
    tracep->declBit(c+185,"sram_if_rvalid", false,-1);
    tracep->declBit(c+192,"if_sram_rready", false,-1);
    tracep->declBus(c+186,"sram_if_rresp", false,-1, 1,0);
    tracep->declBus(c+28,"inst_cnt", false,-1, 31,0);
    tracep->declBus(c+29,"cycle_cnt", false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+193,"clk", false,-1);
    tracep->declBit(c+194,"reset", false,-1);
    tracep->declBit(c+177,"id_ready", false,-1);
    tracep->declBit(c+106,"id_valid", false,-1);
    tracep->declBit(c+130,"ex_ready", false,-1);
    tracep->declBit(c+125,"lsu_ready", false,-1);
    tracep->declBit(c+83,"ex_lsu_valid", false,-1);
    tracep->declBus(c+109,"id_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+2,"id_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+25,"lsu_ex_forward_rd", false,-1, 4,0);
    tracep->declBit(c+26,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+27,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBus(c+14,"lsu_wb_wdata", false,-1, 31,0);
    tracep->declBus(c+13,"lsu_wb_rd", false,-1, 4,0);
    tracep->declBit(c+12,"lsu_wb_RegWrite", false,-1);
    tracep->declBit(c+11,"lsu_wb_valid", false,-1);
    tracep->declBit(c+103,"ex_lsu_forward_las", false,-1);
    tracep->declBus(c+105,"id_ex_inst", false,-1, 31,0);
    tracep->declBus(c+104,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+111,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+110,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+3,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+195,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+23,"wb_ex_src2", false,-1, 31,0);
    tracep->declBit(c+107,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+108,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+115,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+116,"id_ex_func3", false,-1, 2,0);
    tracep->declBus(c+4,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBit(c+5,"id_ex_jal", false,-1);
    tracep->declBit(c+6,"id_ex_jalr", false,-1);
    tracep->declBit(c+114,"id_ex_MemRead", false,-1);
    tracep->declBit(c+113,"id_ex_MemWrite", false,-1);
    tracep->declBus(c+112,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBus(c+126,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+24,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBit(c+117,"id_ex_csr", false,-1);
    tracep->declBit(c+118,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+119,"id_ex_csr_wen2", false,-1);
    tracep->declBus(c+123,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+124,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+120,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+121,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+122,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBit(c+178,"ex_flush", false,-1);
    tracep->declBus(c+179,"ex_flush_pc", false,-1, 31,0);
    tracep->declBus(c+82,"ex_lsu_inst", false,-1, 31,0);
    tracep->declBus(c+81,"ex_lsu_pc", false,-1, 31,0);
    tracep->declBus(c+84,"ex_lsu_src2", false,-1, 31,0);
    tracep->declBit(c+85,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+86,"ex_lsu_rd", false,-1, 4,0);
    tracep->declBit(c+87,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+88,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+89,"ex_lsu_MemLen", false,-1, 2,0);
    tracep->declBus(c+102,"ex_lsu_opcode", false,-1, 6,0);
    tracep->declBit(c+91,"ex_lsu_csr", false,-1);
    tracep->declBit(c+92,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+93,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+94,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+95,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+96,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+97,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+98,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+99,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+100,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+101,"ex_lsu_imm", false,-1, 31,0);
    tracep->declBus(c+90,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBus(c+131,"src1", false,-1, 31,0);
    tracep->declBus(c+132,"src2", false,-1, 31,0);
    tracep->declBus(c+133,"ex_num1", false,-1, 31,0);
    tracep->declBus(c+134,"ex_num2", false,-1, 31,0);
    tracep->declBus(c+135,"process_result", false,-1, 31,0);
    tracep->declBit(c+136,"alu_zero", false,-1);
    tracep->declBit(c+137,"alu_less", false,-1);
    tracep->declBus(c+180,"jal_target", false,-1, 31,0);
    tracep->declBus(c+181,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+182,"take_branch", false,-1);
    tracep->declBit(c+30,"ex_flush_condition", false,-1);
    tracep->declBus(c+127,"csr_write_ecall", false,-1, 31,0);
    tracep->declBus(c+128,"mstatus_t", false,-1, 31,0);
    tracep->declBus(c+129,"mpie", false,-1, 31,0);
    tracep->declBus(c+196,"csr_write_data", false,-1, 31,0);
    tracep->declBus(c+197,"forward_rs1", false,-1, 1,0);
    tracep->declBus(c+198,"forward_rs2", false,-1, 1,0);
    tracep->declBit(c+199,"forward_las", false,-1);
    tracep->declBus(c+138,"load_use_flag", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+193,"clk", false,-1);
    tracep->declBit(c+194,"reset", false,-1);
    tracep->declBus(c+140,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+141,"if_id_inst", false,-1, 31,0);
    tracep->declBit(c+178,"ex_flush", false,-1);
    tracep->declBit(c+142,"if_valid", false,-1);
    tracep->declBit(c+177,"id_ready", false,-1);
    tracep->declBit(c+130,"ex_ready", false,-1);
    tracep->declBit(c+106,"id_valid", false,-1);
    tracep->declBus(c+104,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+105,"id_ex_inst", false,-1, 31,0);
    tracep->declBit(c+107,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+108,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+109,"id_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+2,"id_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+110,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+111,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+3,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+4,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+112,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBit(c+113,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+114,"id_ex_MemRead", false,-1);
    tracep->declBus(c+115,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+116,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+5,"id_ex_jal", false,-1);
    tracep->declBit(c+6,"id_ex_jalr", false,-1);
    tracep->declBit(c+117,"id_ex_csr", false,-1);
    tracep->declBit(c+118,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+119,"id_ex_csr_wen2", false,-1);
    tracep->declBit(c+120,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+121,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+122,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBus(c+123,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+124,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+7,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+8,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBus(c+141,"instr", false,-1, 31,0);
    tracep->declBus(c+143,"immI", false,-1, 31,0);
    tracep->declBus(c+144,"immU", false,-1, 31,0);
    tracep->declBus(c+145,"immS", false,-1, 31,0);
    tracep->declBus(c+146,"immB", false,-1, 31,0);
    tracep->declBus(c+147,"immJ", false,-1, 31,0);
    tracep->declBus(c+218,"immR", false,-1, 31,0);
    tracep->declBus(c+148,"immCSR", false,-1, 31,0);
    tracep->declBus(c+149,"opcode", false,-1, 6,0);
    tracep->declBus(c+150,"rs1", false,-1, 4,0);
    tracep->declBus(c+151,"rs2", false,-1, 4,0);
    tracep->declBus(c+152,"rd", false,-1, 4,0);
    tracep->declBus(c+153,"func3", false,-1, 2,0);
    tracep->declBus(c+154,"func7", false,-1, 6,0);
    tracep->declBus(c+155,"shamt", false,-1, 5,0);
    tracep->declBus(c+156,"get_opcode", false,-1, 4,0);
    tracep->declBus(c+157,"imm", false,-1, 31,0);
    tracep->declBus(c+158,"alu_op", false,-1, 3,0);
    tracep->declBit(c+159,"MemRead", false,-1);
    tracep->declBit(c+160,"MemWrite", false,-1);
    tracep->declBus(c+161,"MemLen", false,-1, 2,0);
    tracep->declBit(c+162,"jal", false,-1);
    tracep->declBit(c+163,"jalr", false,-1);
    tracep->declBit(c+164,"csr", false,-1);
    tracep->declBit(c+165,"csr_ecall", false,-1);
    tracep->declBit(c+166,"csr_mret", false,-1);
    tracep->declBus(c+167,"csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+168,"csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+169,"csr_rd_addr1", false,-1, 11,0);
    tracep->declBus(c+170,"csr_rd_addr2", false,-1, 11,0);
    tracep->declBus(c+171,"csr_op", false,-1, 1,0);
    tracep->declBit(c+172,"csr_rd_en", false,-1);
    tracep->declBit(c+173,"rd_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+193,"clk", false,-1);
    tracep->declBit(c+194,"reset", false,-1);
    tracep->declBit(c+178,"EX_flush", false,-1);
    tracep->declBus(c+179,"EX_flush_pc", false,-1, 31,0);
    tracep->declBit(c+177,"ID_ready", false,-1);
    tracep->declBit(c+142,"IF_valid", false,-1);
    tracep->declBus(c+140,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+141,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+190,"if_sram_arvalid", false,-1);
    tracep->declBit(c+183,"sram_if_arready", false,-1);
    tracep->declBus(c+191,"if_sram_araddr", false,-1, 31,0);
    tracep->declBus(c+184,"sram_if_rdata", false,-1, 31,0);
    tracep->declBit(c+185,"sram_if_rvalid", false,-1);
    tracep->declBit(c+192,"if_sram_rready", false,-1);
    tracep->declBus(c+186,"sram_if_rresp", false,-1, 1,0);
    tracep->declBus(c+219,"OKAY", false,-1, 1,0);
    tracep->declBit(c+174,"read_pending", false,-1);
    tracep->declBit(c+175,"read_valid", false,-1);
    tracep->declBus(c+176,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+193,"clk", false,-1);
    tracep->declBit(c+194,"rst", false,-1);
    tracep->declBit(c+83,"ex_lsu_valid", false,-1);
    tracep->declBit(c+125,"lsu_ex_ready", false,-1);
    tracep->declBit(c+200,"wb_lsu_ready", false,-1);
    tracep->declBit(c+11,"lsu_wb_valid", false,-1);
    tracep->declBit(c+103,"ex_lsu_forward_las", false,-1);
    tracep->declBit(c+85,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+86,"ex_lsu_rd", false,-1, 4,0);
    tracep->declBit(c+87,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+88,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+89,"ex_lsu_MemLen", false,-1, 2,0);
    tracep->declBus(c+82,"ex_lsu_inst", false,-1, 31,0);
    tracep->declBus(c+81,"ex_lsu_pc", false,-1, 31,0);
    tracep->declBus(c+90,"addr", false,-1, 31,0);
    tracep->declBus(c+84,"data_in", false,-1, 31,0);
    tracep->declBus(c+101,"ex_lsu_imm", false,-1, 31,0);
    tracep->declBus(c+102,"ex_lsu_opcode", false,-1, 6,0);
    tracep->declBus(c+25,"lsu_ex_forward_rd", false,-1, 4,0);
    tracep->declBit(c+26,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+27,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBit(c+91,"ex_lsu_csr", false,-1);
    tracep->declBit(c+92,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+93,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+96,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+97,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+94,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+95,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+98,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+99,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+100,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+90,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBus(c+10,"lsu_wb_inst", false,-1, 31,0);
    tracep->declBus(c+9,"lsu_wb_pc", false,-1, 31,0);
    tracep->declBit(c+178,"ex_flush", false,-1);
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
    tracep->declBit(c+27,"l_load", false,-1);
    tracep->declBit(c+26,"l_rd_en", false,-1);
    tracep->declBus(c+25,"l_rd_addr", false,-1, 4,0);
    tracep->declBus(c+31,"l_inst", false,-1, 31,0);
    tracep->declBus(c+32,"l_pc", false,-1, 31,0);
    tracep->declBus(c+33,"l_MemLen", false,-1, 2,0);
    tracep->declBus(c+34,"l_opcode", false,-1, 6,0);
    tracep->declBit(c+35,"read_valid", false,-1);
    tracep->declBit(c+36,"write_valid", false,-1);
    tracep->declBus(c+37,"read_lsu_data", false,-1, 31,0);
    tracep->declBus(c+38,"wr_rd_data", false,-1, 31,0);
    tracep->declBus(c+139,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+193,"clk", false,-1);
    tracep->declBit(c+194,"rst", false,-1);
    tracep->declBit(c+190,"sram_arvalid", false,-1);
    tracep->declBit(c+183,"sram_arready", false,-1);
    tracep->declBus(c+191,"sram_araddr", false,-1, 31,0);
    tracep->declBus(c+184,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+185,"sram_rvalid", false,-1);
    tracep->declBit(c+192,"sram_rready", false,-1);
    tracep->declBus(c+186,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+218,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+220,"sram_awvalid", false,-1);
    tracep->declBit(c+39,"sram_awready", false,-1);
    tracep->declBus(c+218,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+221,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+220,"sram_wvalid", false,-1);
    tracep->declBit(c+40,"sram_wready", false,-1);
    tracep->declBus(c+41,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+42,"sram_bvalid", false,-1);
    tracep->declBit(c+220,"sram_bready", false,-1);
    tracep->declBus(c+219,"OKAY", false,-1, 1,0);
    tracep->declBus(c+222,"MIN_DELAY", false,-1, 31,0);
    tracep->declBus(c+223,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+187,"read_addr", false,-1, 31,0);
    tracep->declBus(c+188,"LFSR", false,-1, 31,0);
    tracep->declBit(c+189,"read_pending", false,-1);
    tracep->declBus(c+224,"write_addr", false,-1, 31,0);
    tracep->declBit(c+43,"write_addr_valid", false,-1);
    tracep->declBus(c+225,"write_data", false,-1, 31,0);
    tracep->declBus(c+226,"write_strb", false,-1, 3,0);
    tracep->declBit(c+44,"write_data_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declDouble(c+45,"IPC", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBus(c+227,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+228,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+193,"clk", false,-1);
    tracep->declBit(c+194,"rst", false,-1);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->declBit(c+11,"lsu_wb_valid", false,-1);
    tracep->declBit(c+200,"wb_lsu_ready", false,-1);
    tracep->declBus(c+14,"wdata", false,-1, 31,0);
    tracep->declBus(c+13,"waddr", false,-1, 4,0);
    tracep->declBus(c+109,"rs1", false,-1, 4,0);
    tracep->declBus(c+2,"rs2", false,-1, 4,0);
    tracep->declBus(c+195,"src1", false,-1, 31,0);
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
    tracep->declBus(c+126,"rdata_csr1", false,-1, 31,0);
    tracep->declBus(c+24,"rdata_csr2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+47+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBit(c+79,"flush", false,-1);
    tracep->declBus(c+80,"i", false,-1, 31,0);
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
    bufp->fullIData(oldp+28,(vlSelf->rv32e__DOT__inst_cnt),32);
    bufp->fullIData(oldp+29,(vlSelf->rv32e__DOT__cycle_cnt),32);
    bufp->fullBit(oldp+30,(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition));
    bufp->fullIData(oldp+31,(vlSelf->rv32e__DOT__lsu__DOT__l_inst),32);
    bufp->fullIData(oldp+32,(vlSelf->rv32e__DOT__lsu__DOT__l_pc),32);
    bufp->fullCData(oldp+33,(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen),3);
    bufp->fullCData(oldp+34,(vlSelf->rv32e__DOT__lsu__DOT__l_opcode),7);
    bufp->fullBit(oldp+35,(vlSelf->rv32e__DOT__lsu__DOT__read_valid));
    bufp->fullBit(oldp+36,(vlSelf->rv32e__DOT__lsu__DOT__write_valid));
    bufp->fullIData(oldp+37,(vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data),32);
    bufp->fullIData(oldp+38,(((0U == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
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
    bufp->fullBit(oldp+39,(vlSelf->rv32e__DOT__sram__DOT__sram_awready));
    bufp->fullBit(oldp+40,(vlSelf->rv32e__DOT__sram__DOT__sram_wready));
    bufp->fullCData(oldp+41,(vlSelf->rv32e__DOT__sram__DOT__sram_bresp),2);
    bufp->fullBit(oldp+42,(vlSelf->rv32e__DOT__sram__DOT__sram_bvalid));
    bufp->fullBit(oldp+43,(vlSelf->rv32e__DOT__sram__DOT__write_addr_valid));
    bufp->fullBit(oldp+44,(vlSelf->rv32e__DOT__sram__DOT__write_data_valid));
    bufp->fullDouble(oldp+45,(vlSelf->rv32e__DOT__unnamedblk1__DOT__IPC));
    bufp->fullIData(oldp+47,(vlSelf->rv32e__DOT__wbu__DOT__regs[0]),32);
    bufp->fullIData(oldp+48,(vlSelf->rv32e__DOT__wbu__DOT__regs[1]),32);
    bufp->fullIData(oldp+49,(vlSelf->rv32e__DOT__wbu__DOT__regs[2]),32);
    bufp->fullIData(oldp+50,(vlSelf->rv32e__DOT__wbu__DOT__regs[3]),32);
    bufp->fullIData(oldp+51,(vlSelf->rv32e__DOT__wbu__DOT__regs[4]),32);
    bufp->fullIData(oldp+52,(vlSelf->rv32e__DOT__wbu__DOT__regs[5]),32);
    bufp->fullIData(oldp+53,(vlSelf->rv32e__DOT__wbu__DOT__regs[6]),32);
    bufp->fullIData(oldp+54,(vlSelf->rv32e__DOT__wbu__DOT__regs[7]),32);
    bufp->fullIData(oldp+55,(vlSelf->rv32e__DOT__wbu__DOT__regs[8]),32);
    bufp->fullIData(oldp+56,(vlSelf->rv32e__DOT__wbu__DOT__regs[9]),32);
    bufp->fullIData(oldp+57,(vlSelf->rv32e__DOT__wbu__DOT__regs[10]),32);
    bufp->fullIData(oldp+58,(vlSelf->rv32e__DOT__wbu__DOT__regs[11]),32);
    bufp->fullIData(oldp+59,(vlSelf->rv32e__DOT__wbu__DOT__regs[12]),32);
    bufp->fullIData(oldp+60,(vlSelf->rv32e__DOT__wbu__DOT__regs[13]),32);
    bufp->fullIData(oldp+61,(vlSelf->rv32e__DOT__wbu__DOT__regs[14]),32);
    bufp->fullIData(oldp+62,(vlSelf->rv32e__DOT__wbu__DOT__regs[15]),32);
    bufp->fullIData(oldp+63,(vlSelf->rv32e__DOT__wbu__DOT__regs[16]),32);
    bufp->fullIData(oldp+64,(vlSelf->rv32e__DOT__wbu__DOT__regs[17]),32);
    bufp->fullIData(oldp+65,(vlSelf->rv32e__DOT__wbu__DOT__regs[18]),32);
    bufp->fullIData(oldp+66,(vlSelf->rv32e__DOT__wbu__DOT__regs[19]),32);
    bufp->fullIData(oldp+67,(vlSelf->rv32e__DOT__wbu__DOT__regs[20]),32);
    bufp->fullIData(oldp+68,(vlSelf->rv32e__DOT__wbu__DOT__regs[21]),32);
    bufp->fullIData(oldp+69,(vlSelf->rv32e__DOT__wbu__DOT__regs[22]),32);
    bufp->fullIData(oldp+70,(vlSelf->rv32e__DOT__wbu__DOT__regs[23]),32);
    bufp->fullIData(oldp+71,(vlSelf->rv32e__DOT__wbu__DOT__regs[24]),32);
    bufp->fullIData(oldp+72,(vlSelf->rv32e__DOT__wbu__DOT__regs[25]),32);
    bufp->fullIData(oldp+73,(vlSelf->rv32e__DOT__wbu__DOT__regs[26]),32);
    bufp->fullIData(oldp+74,(vlSelf->rv32e__DOT__wbu__DOT__regs[27]),32);
    bufp->fullIData(oldp+75,(vlSelf->rv32e__DOT__wbu__DOT__regs[28]),32);
    bufp->fullIData(oldp+76,(vlSelf->rv32e__DOT__wbu__DOT__regs[29]),32);
    bufp->fullIData(oldp+77,(vlSelf->rv32e__DOT__wbu__DOT__regs[30]),32);
    bufp->fullIData(oldp+78,(vlSelf->rv32e__DOT__wbu__DOT__regs[31]),32);
    bufp->fullBit(oldp+79,(vlSelf->rv32e__DOT__wbu__DOT__flush));
    bufp->fullIData(oldp+80,(vlSelf->rv32e__DOT__wbu__DOT__i),32);
    bufp->fullIData(oldp+81,(vlSelf->rv32e__DOT__ex_lsu_pc),32);
    bufp->fullIData(oldp+82,(vlSelf->rv32e__DOT__ex_lsu_inst),32);
    bufp->fullBit(oldp+83,(vlSelf->rv32e__DOT__ex_lsu_valid));
    bufp->fullIData(oldp+84,(vlSelf->rv32e__DOT__ex_lsu_src2),32);
    bufp->fullBit(oldp+85,(vlSelf->rv32e__DOT__ex_lsu_RegWrite));
    bufp->fullCData(oldp+86,(vlSelf->rv32e__DOT__ex_lsu_rd),5);
    bufp->fullBit(oldp+87,(vlSelf->rv32e__DOT__ex_lsu_MemRead));
    bufp->fullBit(oldp+88,(vlSelf->rv32e__DOT__ex_lsu_MemWrite));
    bufp->fullCData(oldp+89,(vlSelf->rv32e__DOT__ex_lsu_MemLen),3);
    bufp->fullIData(oldp+90,(vlSelf->rv32e__DOT__ex_lsu_process_result),32);
    bufp->fullBit(oldp+91,(vlSelf->rv32e__DOT__ex_lsu_csr));
    bufp->fullBit(oldp+92,(vlSelf->rv32e__DOT__ex_lsu_csr_wen1));
    bufp->fullBit(oldp+93,(vlSelf->rv32e__DOT__ex_lsu_csr_wen2));
    bufp->fullSData(oldp+94,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1),12);
    bufp->fullSData(oldp+95,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2),12);
    bufp->fullIData(oldp+96,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1),32);
    bufp->fullIData(oldp+97,(vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2),32);
    bufp->fullIData(oldp+98,(vlSelf->rv32e__DOT__ex_lsu_csr_rdata),32);
    bufp->fullBit(oldp+99,(vlSelf->rv32e__DOT__ex_lsu_csr_ecall));
    bufp->fullBit(oldp+100,(vlSelf->rv32e__DOT__ex_lsu_csr_mret));
    bufp->fullIData(oldp+101,(vlSelf->rv32e__DOT__ex_lsu_imm),32);
    bufp->fullCData(oldp+102,(vlSelf->rv32e__DOT__ex_lsu_opcode),7);
    bufp->fullBit(oldp+103,(vlSelf->rv32e__DOT__ex_lsu_forward_las));
    bufp->fullIData(oldp+104,(vlSelf->rv32e__DOT__id_ex_pc),32);
    bufp->fullIData(oldp+105,(vlSelf->rv32e__DOT__id_ex_inst),32);
    bufp->fullBit(oldp+106,(vlSelf->rv32e__DOT__id_valid));
    bufp->fullBit(oldp+107,(vlSelf->rv32e__DOT__id_ex_RegWrite));
    bufp->fullCData(oldp+108,(vlSelf->rv32e__DOT__id_ex_rd),5);
    bufp->fullCData(oldp+109,(vlSelf->rv32e__DOT__id_wb_rs1),5);
    bufp->fullCData(oldp+110,(vlSelf->rv32e__DOT__id_ex_zimm),5);
    bufp->fullIData(oldp+111,(vlSelf->rv32e__DOT__id_ex_imm),32);
    bufp->fullCData(oldp+112,(vlSelf->rv32e__DOT__id_ex_MemLen),3);
    bufp->fullBit(oldp+113,(vlSelf->rv32e__DOT__id_ex_MemWrite));
    bufp->fullBit(oldp+114,(vlSelf->rv32e__DOT__id_ex_MemRead));
    bufp->fullCData(oldp+115,(vlSelf->rv32e__DOT__id_ex_opcode),7);
    bufp->fullCData(oldp+116,(vlSelf->rv32e__DOT__id_ex_func3),3);
    bufp->fullBit(oldp+117,(vlSelf->rv32e__DOT__id_ex_csr));
    bufp->fullBit(oldp+118,(vlSelf->rv32e__DOT__id_ex_csr_wen1));
    bufp->fullBit(oldp+119,(vlSelf->rv32e__DOT__id_ex_csr_wen2));
    bufp->fullBit(oldp+120,(vlSelf->rv32e__DOT__id_ex_csr_ecall));
    bufp->fullBit(oldp+121,(vlSelf->rv32e__DOT__id_ex_csr_mret));
    bufp->fullCData(oldp+122,(vlSelf->rv32e__DOT__id_ex_csr_op),2);
    bufp->fullSData(oldp+123,(vlSelf->rv32e__DOT__id_ex_csr_wr_addr1),12);
    bufp->fullSData(oldp+124,(vlSelf->rv32e__DOT__id_ex_csr_wr_addr2),12);
    bufp->fullBit(oldp+125,(vlSelf->rv32e__DOT__lsu_ex_ready));
    bufp->fullIData(oldp+126,(vlSelf->rv32e__DOT__wb_ex_csr_num1),32);
    bufp->fullIData(oldp+127,(((IData)(vlSelf->rv32e__DOT__id_ex_csr_ecall)
                                ? vlSelf->rv32e__DOT__id_ex_pc
                                : 0U)),32);
    bufp->fullIData(oldp+128,((0x80U | ((0xffffe7f7U 
                                         & vlSelf->rv32e__DOT__wb_ex_csr_num1) 
                                        | (8U & (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                                 >> 4U))))),32);
    bufp->fullIData(oldp+129,((1U & (vlSelf->rv32e__DOT__wb_ex_csr_num1 
                                     >> 7U))),32);
    bufp->fullBit(oldp+130,(vlSelf->rv32e__DOT__ex_ready));
    bufp->fullIData(oldp+131,(vlSelf->rv32e__DOT__exu__DOT__src1),32);
    bufp->fullIData(oldp+132,(vlSelf->rv32e__DOT__exu__DOT__src2),32);
    bufp->fullIData(oldp+133,(vlSelf->rv32e__DOT__exu__DOT__ex_num1),32);
    bufp->fullIData(oldp+134,(vlSelf->rv32e__DOT__exu__DOT__ex_num2),32);
    bufp->fullIData(oldp+135,(vlSelf->rv32e__DOT__exu__DOT__process_result),32);
    bufp->fullBit(oldp+136,(vlSelf->rv32e__DOT__exu__DOT__alu_zero));
    bufp->fullBit(oldp+137,(vlSelf->rv32e__DOT__exu__DOT__alu_less));
    bufp->fullCData(oldp+138,(vlSelf->rv32e__DOT__exu__DOT__load_use_flag),4);
    bufp->fullIData(oldp+139,(vlSelf->rv32e__DOT__lsu__DOT__rd_data),32);
    bufp->fullIData(oldp+140,(vlSelf->rv32e__DOT__IF_ID_pc),32);
    bufp->fullIData(oldp+141,(vlSelf->rv32e__DOT__IF_ID_inst),32);
    bufp->fullBit(oldp+142,(vlSelf->rv32e__DOT__IF_valid));
    bufp->fullIData(oldp+143,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+144,((0xfffff000U & vlSelf->rv32e__DOT__IF_ID_inst)),32);
    bufp->fullIData(oldp+145,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+146,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
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
    bufp->fullIData(oldp+147,((((- (IData)((vlSelf->rv32e__DOT__IF_ID_inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->rv32e__DOT__IF_ID_inst) 
                                             | ((0x800U 
                                                 & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->rv32e__DOT__IF_ID_inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+148,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                        >> 0xfU))),32);
    bufp->fullCData(oldp+149,((0x7fU & vlSelf->rv32e__DOT__IF_ID_inst)),7);
    bufp->fullCData(oldp+150,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+151,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+152,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+153,((7U & (vlSelf->rv32e__DOT__IF_ID_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+154,((vlSelf->rv32e__DOT__IF_ID_inst 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+155,((0x3fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                        >> 0x14U))),6);
    bufp->fullCData(oldp+156,((0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                        >> 2U))),5);
    bufp->fullIData(oldp+157,(vlSelf->rv32e__DOT__idu__DOT__imm),32);
    bufp->fullCData(oldp+158,(vlSelf->rv32e__DOT__idu__DOT__alu_op),4);
    bufp->fullBit(oldp+159,((IData)(((0U == (0x7cU 
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
    bufp->fullBit(oldp+160,((8U == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
                                             >> 2U)))));
    bufp->fullCData(oldp+161,((((IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_h69b43165__0) 
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
    bufp->fullBit(oldp+162,((0x6fU == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst))));
    bufp->fullBit(oldp+163,((IData)((0x67U == (0x707fU 
                                               & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullBit(oldp+164,((0x73U == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst))));
    bufp->fullBit(oldp+165,(vlSelf->rv32e__DOT__idu__DOT__csr_ecall));
    bufp->fullBit(oldp+166,(vlSelf->rv32e__DOT__idu__DOT__csr_mret));
    bufp->fullSData(oldp+167,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall)
                                ? 0x342U : ((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret)
                                             ? 0x300U
                                             : (IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hf81b0dad__0)))),12);
    bufp->fullSData(oldp+168,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall)
                                ? 0x341U : 0U)),12);
    bufp->fullSData(oldp+169,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret)
                                ? 0x300U : ((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall)
                                             ? 0x305U
                                             : (IData)(vlSelf->rv32e__DOT__idu__DOT____VdfgTmp_hf81b0dad__0)))),12);
    bufp->fullSData(oldp+170,(((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret)
                                ? 0x341U : 0U)),12);
    bufp->fullCData(oldp+171,((((0x73U == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst)) 
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
    bufp->fullBit(oldp+172,(((~ ((IData)(vlSelf->rv32e__DOT__idu__DOT__csr_ecall) 
                                 | (IData)(vlSelf->rv32e__DOT__idu__DOT__csr_mret))) 
                             & (0x73U == (0x7fU & vlSelf->rv32e__DOT__IF_ID_inst)))));
    bufp->fullBit(oldp+173,(((0xdU == (0x1fU & (vlSelf->rv32e__DOT__IF_ID_inst 
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
    bufp->fullBit(oldp+174,(vlSelf->rv32e__DOT__ifu__DOT__read_pending));
    bufp->fullBit(oldp+175,(vlSelf->rv32e__DOT__ifu__DOT__read_valid));
    bufp->fullIData(oldp+176,(vlSelf->rv32e__DOT__ifu__DOT__next_pc),32);
    bufp->fullBit(oldp+177,(vlSelf->rv32e__DOT__id_ready));
    bufp->fullBit(oldp+178,(vlSelf->rv32e__DOT__ex_flush));
    bufp->fullIData(oldp+179,(vlSelf->rv32e__DOT__ex_flush_pc),32);
    bufp->fullIData(oldp+180,(vlSelf->rv32e__DOT__exu__DOT__jal_target),32);
    bufp->fullIData(oldp+181,(vlSelf->rv32e__DOT__exu__DOT__jalr_target),32);
    bufp->fullBit(oldp+182,(vlSelf->rv32e__DOT__exu__DOT__take_branch));
    bufp->fullBit(oldp+183,(vlSelf->rv32e__DOT__sram_if_arready));
    bufp->fullIData(oldp+184,(vlSelf->rv32e__DOT__sram_if_rdata),32);
    bufp->fullBit(oldp+185,(vlSelf->rv32e__DOT__sram_if_rvalid));
    bufp->fullCData(oldp+186,(vlSelf->rv32e__DOT__sram_if_rresp),2);
    bufp->fullIData(oldp+187,(vlSelf->rv32e__DOT__sram__DOT__read_addr),32);
    bufp->fullIData(oldp+188,(vlSelf->rv32e__DOT__sram__DOT__LFSR),32);
    bufp->fullBit(oldp+189,(vlSelf->rv32e__DOT__sram__DOT__read_pending));
    bufp->fullBit(oldp+190,(vlSelf->rv32e__DOT__if_sram_arvalid));
    bufp->fullIData(oldp+191,(vlSelf->rv32e__DOT__if_sram_araddr),32);
    bufp->fullBit(oldp+192,(vlSelf->rv32e__DOT__if_sram_rready));
    bufp->fullBit(oldp+193,(vlSelf->clk));
    bufp->fullBit(oldp+194,(vlSelf->reset));
    bufp->fullIData(oldp+195,(((0U == (IData)(vlSelf->rv32e__DOT__id_wb_rs1))
                                ? 0U : vlSelf->rv32e__DOT__wbu__DOT__regs
                               [vlSelf->rv32e__DOT__id_wb_rs1])),32);
    bufp->fullIData(oldp+196,((((1U == (IData)(vlSelf->rv32e__DOT__id_ex_csr_op)) 
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
    bufp->fullCData(oldp+197,((((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h9653a62d__0) 
                                << 1U) | (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h666fa1ae__0))),2);
    bufp->fullCData(oldp+198,((((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0) 
                                << 1U) | (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h3556a05f__0))),2);
    bufp->fullBit(oldp+199,(((IData)(vlSelf->rv32e__DOT__id_ex_MemWrite) 
                             & ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
                                & ((IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite) 
                                   & ((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                      & ((0U != (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)) 
                                         & (((IData)(vlSelf->rv32e__DOT__ex_lsu_rd) 
                                             != (IData)(vlSelf->rv32e__DOT__id_wb_rs1)) 
                                            & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0)))))))));
    bufp->fullBit(oldp+200,(1U));
    bufp->fullBit(oldp+201,(vlSelf->rv32e__DOT__lsu_sram_arvalid));
    bufp->fullBit(oldp+202,(vlSelf->rv32e__DOT__sram_lsu_arready));
    bufp->fullIData(oldp+203,(vlSelf->rv32e__DOT__lsu_sram_araddr),32);
    bufp->fullIData(oldp+204,(vlSelf->rv32e__DOT__sram_lsu_rdata),32);
    bufp->fullBit(oldp+205,(vlSelf->rv32e__DOT__sram_lsu_rvalid));
    bufp->fullBit(oldp+206,(vlSelf->rv32e__DOT__lsu_sram_rready));
    bufp->fullCData(oldp+207,(vlSelf->rv32e__DOT__sram_lsu_rresp),2);
    bufp->fullIData(oldp+208,(vlSelf->rv32e__DOT__lsu_sram_awaddr),32);
    bufp->fullBit(oldp+209,(vlSelf->rv32e__DOT__lsu_sram_awvalid));
    bufp->fullBit(oldp+210,(vlSelf->rv32e__DOT__sram_lsu_awready));
    bufp->fullIData(oldp+211,(vlSelf->rv32e__DOT__lsu_sram_wdata),32);
    bufp->fullCData(oldp+212,(vlSelf->rv32e__DOT__lsu_sram_wstrb),4);
    bufp->fullBit(oldp+213,(vlSelf->rv32e__DOT__lsu_sram_wvalid));
    bufp->fullBit(oldp+214,(vlSelf->rv32e__DOT__sram_lsu_wready));
    bufp->fullCData(oldp+215,(vlSelf->rv32e__DOT__sram_lsu_bresp),2);
    bufp->fullBit(oldp+216,(vlSelf->rv32e__DOT__sram_lsu_bvalid));
    bufp->fullBit(oldp+217,(vlSelf->rv32e__DOT__lsu_sram_bready));
    bufp->fullIData(oldp+218,(0U),32);
    bufp->fullCData(oldp+219,(0U),2);
    bufp->fullBit(oldp+220,(0U));
    bufp->fullCData(oldp+221,(0U),4);
    bufp->fullIData(oldp+222,(1U),32);
    bufp->fullIData(oldp+223,(4U),32);
    bufp->fullIData(oldp+224,(vlSelf->rv32e__DOT__sram__DOT__write_addr),32);
    bufp->fullIData(oldp+225,(vlSelf->rv32e__DOT__sram__DOT__write_data),32);
    bufp->fullCData(oldp+226,(vlSelf->rv32e__DOT__sram__DOT__write_strb),4);
    bufp->fullIData(oldp+227,(5U),32);
    bufp->fullIData(oldp+228,(0x20U),32);
}
