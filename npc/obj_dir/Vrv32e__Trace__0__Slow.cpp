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
    tracep->declBit(c+198,"clk", false,-1);
    tracep->declBit(c+199,"reset", false,-1);
    tracep->pushNamePrefix("rv32e ");
    tracep->declBit(c+198,"clk", false,-1);
    tracep->declBit(c+199,"reset", false,-1);
    tracep->declBus(c+33,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+34,"if_id_instr", false,-1, 31,0);
    tracep->declBit(c+204,"if_id_valid", false,-1);
    tracep->declBus(c+35,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+36,"id_ex_rs1", false,-1, 4,0);
    tracep->declBus(c+37,"id_ex_rs2", false,-1, 4,0);
    tracep->declBus(c+38,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+39,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+40,"id_ex_instr", false,-1, 31,0);
    tracep->declBus(c+41,"id_ex_func3", false,-1, 2,0);
    tracep->declBus(c+42,"id_ex_func7", false,-1, 6,0);
    tracep->declBit(c+43,"id_ex_RegWrite", false,-1);
    tracep->declBit(c+44,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+45,"id_ex_MemRead", false,-1);
    tracep->declBus(c+46,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+47,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBus(c+48,"id_ex_rs1_val", false,-1, 31,0);
    tracep->declBus(c+49,"id_ex_rs2_val", false,-1, 31,0);
    tracep->declBit(c+205,"id_ex_valid", false,-1);
    tracep->declBus(c+50,"id_ex_pc", false,-1, 31,0);
    tracep->declBit(c+51,"id_ex_is_ebreak", false,-1);
    tracep->declBus(c+52,"ex_mem_alu_result", false,-1, 31,0);
    tracep->declBit(c+53,"ex_mem_alu_zero", false,-1);
    tracep->declBit(c+54,"ex_mem_alu_less", false,-1);
    tracep->declBit(c+55,"ex_mem_RegWrite", false,-1);
    tracep->declBit(c+56,"ex_mem_MemWrite", false,-1);
    tracep->declBit(c+57,"ex_mem_MemRead", false,-1);
    tracep->declBus(c+58,"ex_mem_MemLen", false,-1, 2,0);
    tracep->declBus(c+59,"ex_mem_rd", false,-1, 4,0);
    tracep->declBus(c+60,"ex_mem_rs1", false,-1, 4,0);
    tracep->declBus(c+61,"ex_mem_rs2", false,-1, 4,0);
    tracep->declBus(c+62,"ex_mem_rs1_val", false,-1, 31,0);
    tracep->declBus(c+63,"ex_mem_rs2_val", false,-1, 31,0);
    tracep->declBit(c+64,"ex_mem_valid", false,-1);
    tracep->declBus(c+65,"ex_mem_opcode", false,-1, 6,0);
    tracep->declBus(c+66,"ex_mem_func3", false,-1, 2,0);
    tracep->declBus(c+67,"ex_mem_imm", false,-1, 31,0);
    tracep->declBus(c+68,"ex_mem_pc", false,-1, 31,0);
    tracep->declBit(c+69,"ex_mem_is_ebreak", false,-1);
    tracep->declBus(c+70,"ex_mem_instr", false,-1, 31,0);
    tracep->declBit(c+71,"mem_wb_alu_zero", false,-1);
    tracep->declBit(c+72,"mem_wb_alu_less", false,-1);
    tracep->declBus(c+73,"mem_wb_data_out", false,-1, 31,0);
    tracep->declBus(c+74,"mem_wb_alu_result", false,-1, 31,0);
    tracep->declBus(c+75,"mem_wb_opcode", false,-1, 6,0);
    tracep->declBus(c+76,"mem_wb_func3", false,-1, 2,0);
    tracep->declBit(c+77,"mem_wb_RegWrite", false,-1);
    tracep->declBus(c+78,"mem_wb_rd", false,-1, 4,0);
    tracep->declBus(c+79,"mem_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+80,"mem_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+81,"mem_wb_rs1_val", false,-1, 31,0);
    tracep->declBus(c+82,"mem_wb_rs2_val", false,-1, 31,0);
    tracep->declBus(c+83,"mem_wb_pc", false,-1, 31,0);
    tracep->declBus(c+84,"mem_wb_imm", false,-1, 31,0);
    tracep->declBit(c+85,"mem_wb_valid", false,-1);
    tracep->declBit(c+86,"mem_wb_is_ebreak", false,-1);
    tracep->declBus(c+87,"mem_wb_instr", false,-1, 31,0);
    tracep->declBus(c+88,"if_pc", false,-1, 31,0);
    tracep->declBus(c+89,"if_instr", false,-1, 31,0);
    tracep->declBit(c+90,"if_ready", false,-1);
    tracep->declBit(c+91,"if_valid", false,-1);
    tracep->declBit(c+92,"id_ready", false,-1);
    tracep->declBit(c+93,"wb_valid", false,-1);
    tracep->declBit(c+94,"if_access_fault", false,-1);
    tracep->declBus(c+95,"if_fault_addr", false,-1, 31,0);
    tracep->declBus(c+96,"branch_target", false,-1, 31,0);
    tracep->declBus(c+97,"id_opcode", false,-1, 6,0);
    tracep->declBus(c+98,"id_rs1", false,-1, 4,0);
    tracep->declBus(c+99,"id_rs2", false,-1, 4,0);
    tracep->declBus(c+100,"id_rd", false,-1, 4,0);
    tracep->declBus(c+101,"id_imm", false,-1, 31,0);
    tracep->declBus(c+102,"id_func3", false,-1, 2,0);
    tracep->declBus(c+103,"id_func7", false,-1, 6,0);
    tracep->declBit(c+104,"id_RegWrite", false,-1);
    tracep->declBit(c+105,"id_MemWrite", false,-1);
    tracep->declBit(c+106,"id_MemRead", false,-1);
    tracep->declBus(c+107,"id_alu_op", false,-1, 3,0);
    tracep->declBus(c+108,"id_MemLen", false,-1, 2,0);
    tracep->declBit(c+109,"id_valid", false,-1);
    tracep->declBit(c+110,"ex_ready", false,-1);
    tracep->declBus(c+200,"id_rs1_val", false,-1, 31,0);
    tracep->declBus(c+201,"id_rs2_val", false,-1, 31,0);
    tracep->declBus(c+202,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+203,"rs2_val", false,-1, 31,0);
    tracep->declBit(c+111,"is_ebreak", false,-1);
    tracep->declBus(c+112,"ex_alu_result", false,-1, 31,0);
    tracep->declBit(c+113,"ex_alu_zero", false,-1);
    tracep->declBit(c+114,"ex_alu_less", false,-1);
    tracep->declBit(c+115,"ex_valid", false,-1);
    tracep->declBit(c+116,"mem_ready", false,-1);
    tracep->declBus(c+117,"mem_data_out", false,-1, 31,0);
    tracep->declBit(c+118,"mem_valid", false,-1);
    tracep->declBit(c+119,"wb_ready", false,-1);
    tracep->declBit(c+120,"load_access_fault", false,-1);
    tracep->declBit(c+121,"store_access_fault", false,-1);
    tracep->declBus(c+122,"mem_fault_addr", false,-1, 31,0);
    tracep->declBus(c+123,"wb_data", false,-1, 31,0);
    tracep->declBus(c+124,"ex_jal_target", false,-1, 31,0);
    tracep->declBus(c+125,"ex_jalr_target", false,-1, 31,0);
    tracep->declBit(c+126,"ex_is_jal", false,-1);
    tracep->declBit(c+127,"ex_is_jalr", false,-1);
    tracep->declBit(c+128,"ex_take_branch", false,-1);
    tracep->declBus(c+129,"rd_wb", false,-1, 4,0);
    tracep->declBit(c+130,"RegWrite_wb", false,-1);
    tracep->declBit(c+131,"stall", false,-1);
    tracep->declBit(c+132,"flush", false,-1);
    tracep->declBit(c+133,"struct_hazard", false,-1);
    tracep->declBit(c+134,"forwardA_EX", false,-1);
    tracep->declBit(c+135,"forwardB_EX", false,-1);
    tracep->declBit(c+136,"forwardA_MEM", false,-1);
    tracep->declBit(c+137,"forwardB_MEM", false,-1);
    tracep->pushNamePrefix("ex_stage ");
    tracep->declBit(c+198,"clk", false,-1);
    tracep->declBit(c+199,"reset", false,-1);
    tracep->declBit(c+51,"is_ebreak", false,-1);
    tracep->declBus(c+40,"instr", false,-1, 31,0);
    tracep->declBit(c+109,"id_valid", false,-1);
    tracep->declBit(c+110,"ex_ready", false,-1);
    tracep->declBus(c+35,"opcode", false,-1, 6,0);
    tracep->declBus(c+202,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+203,"rs2_val", false,-1, 31,0);
    tracep->declBus(c+39,"imm", false,-1, 31,0);
    tracep->declBus(c+46,"alu_op", false,-1, 3,0);
    tracep->declBus(c+41,"func3", false,-1, 2,0);
    tracep->declBus(c+138,"pc", false,-1, 31,0);
    tracep->declBus(c+124,"jal_target", false,-1, 31,0);
    tracep->declBus(c+125,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+126,"is_jal", false,-1);
    tracep->declBit(c+127,"is_jalr", false,-1);
    tracep->declBit(c+128,"take_branch", false,-1);
    tracep->declBit(c+116,"mem_ready", false,-1);
    tracep->declBit(c+115,"ex_valid", false,-1);
    tracep->declBus(c+112,"alu_result", false,-1, 31,0);
    tracep->declBit(c+113,"alu_zero", false,-1);
    tracep->declBit(c+114,"alu_less", false,-1);
    tracep->declBus(c+139,"state", false,-1, 31,0);
    tracep->declBus(c+140,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_stage ");
    tracep->declBit(c+198,"clk", false,-1);
    tracep->declBit(c+199,"reset", false,-1);
    tracep->declBus(c+34,"instr", false,-1, 31,0);
    tracep->declBit(c+141,"ex_ready", false,-1);
    tracep->declBit(c+91,"if_valid", false,-1);
    tracep->declBit(c+92,"id_ready", false,-1);
    tracep->declBit(c+109,"id_valid", false,-1);
    tracep->declBus(c+97,"opcode", false,-1, 6,0);
    tracep->declBus(c+98,"rs1", false,-1, 4,0);
    tracep->declBus(c+99,"rs2", false,-1, 4,0);
    tracep->declBus(c+100,"rd", false,-1, 4,0);
    tracep->declBus(c+101,"imm", false,-1, 31,0);
    tracep->declBus(c+102,"func3", false,-1, 2,0);
    tracep->declBus(c+103,"func7", false,-1, 6,0);
    tracep->declBit(c+104,"RegWrite", false,-1);
    tracep->declBit(c+105,"MemWrite", false,-1);
    tracep->declBit(c+106,"MemRead", false,-1);
    tracep->declBus(c+107,"alu_op", false,-1, 3,0);
    tracep->declBus(c+108,"MemLen", false,-1, 2,0);
    tracep->declBit(c+111,"is_ebreak", false,-1);
    tracep->declBus(c+142,"state", false,-1, 31,0);
    tracep->declBus(c+143,"next_state", false,-1, 31,0);
    tracep->declBus(c+144,"immI", false,-1, 31,0);
    tracep->declBus(c+145,"immU", false,-1, 31,0);
    tracep->declBus(c+146,"immS", false,-1, 31,0);
    tracep->declBus(c+147,"immB", false,-1, 31,0);
    tracep->declBus(c+148,"immJ", false,-1, 31,0);
    tracep->declBus(c+206,"immR", false,-1, 31,0);
    tracep->declBus(c+149,"get_opcode", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_stage ");
    tracep->declBit(c+198,"clk", false,-1);
    tracep->declBit(c+199,"reset", false,-1);
    tracep->declBit(c+133,"struct_hazard", false,-1);
    tracep->declBus(c+96,"branch_target", false,-1, 31,0);
    tracep->declBit(c+150,"pc_src", false,-1);
    tracep->declBit(c+151,"id_ready", false,-1);
    tracep->declBit(c+93,"wb_valid", false,-1);
    tracep->declBit(c+90,"if_ready", false,-1);
    tracep->declBit(c+91,"if_valid", false,-1);
    tracep->declBus(c+88,"pc", false,-1, 31,0);
    tracep->declBus(c+89,"instr", false,-1, 31,0);
    tracep->declBit(c+94,"if_access_fault", false,-1);
    tracep->declBus(c+95,"if_fault_addr", false,-1, 31,0);
    tracep->declBus(c+152,"state", false,-1, 31,0);
    tracep->declBus(c+153,"next_state", false,-1, 31,0);
    tracep->declBus(c+207,"rresp", false,-1, 1,0);
    tracep->declBus(c+154,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+155,"sram_arvalid", false,-1);
    tracep->declBit(c+156,"sram_arready", false,-1);
    tracep->declBus(c+157,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+158,"sram_rvalid", false,-1);
    tracep->declBit(c+159,"sram_rready", false,-1);
    tracep->declBus(c+160,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+208,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+209,"sram_awvalid", false,-1);
    tracep->declBit(c+210,"sram_awready", false,-1);
    tracep->declBus(c+211,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+212,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+213,"sram_wvalid", false,-1);
    tracep->declBit(c+210,"sram_wready", false,-1);
    tracep->declBus(c+214,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+210,"sram_bvalid", false,-1);
    tracep->declBit(c+215,"sram_bready", false,-1);
    tracep->pushNamePrefix("ifu_sram_inst ");
    tracep->declBus(c+216,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+216,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+198,"clk", false,-1);
    tracep->declBit(c+199,"reset", false,-1);
    tracep->declBus(c+154,"araddr", false,-1, 31,0);
    tracep->declBit(c+155,"arvalid", false,-1);
    tracep->declBit(c+156,"arready", false,-1);
    tracep->declBus(c+157,"rdata", false,-1, 31,0);
    tracep->declBit(c+158,"rvalid", false,-1);
    tracep->declBit(c+159,"rready", false,-1);
    tracep->declBus(c+160,"rresp", false,-1, 1,0);
    tracep->declBus(c+208,"awaddr", false,-1, 31,0);
    tracep->declBit(c+209,"awvalid", false,-1);
    tracep->declBit(c+210,"awready", false,-1);
    tracep->declBus(c+211,"wdata", false,-1, 31,0);
    tracep->declBus(c+212,"wstrb", false,-1, 3,0);
    tracep->declBit(c+213,"wvalid", false,-1);
    tracep->declBit(c+210,"wready", false,-1);
    tracep->declBus(c+214,"bresp", false,-1, 1,0);
    tracep->declBit(c+210,"bvalid", false,-1);
    tracep->declBit(c+215,"bready", false,-1);
    tracep->declBus(c+161,"sram_state", false,-1, 31,0);
    tracep->declBus(c+162,"next_sram_state", false,-1, 31,0);
    tracep->declBus(c+163,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+164,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+165,"addr_valid", false,-1);
    tracep->declBus(c+166,"delay_counter", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem_stage ");
    tracep->declBit(c+198,"clk", false,-1);
    tracep->declBit(c+199,"reset", false,-1);
    tracep->declBit(c+115,"ex_valid", false,-1);
    tracep->declBit(c+116,"mem_ready", false,-1);
    tracep->declBit(c+119,"wb_ready", false,-1);
    tracep->declBit(c+118,"mem_valid", false,-1);
    tracep->declBit(c+57,"MemRead", false,-1);
    tracep->declBit(c+56,"MemWrite", false,-1);
    tracep->declBus(c+52,"addr", false,-1, 31,0);
    tracep->declBus(c+63,"data_in", false,-1, 31,0);
    tracep->declBus(c+58,"MemLen", false,-1, 2,0);
    tracep->declBus(c+117,"data_out", false,-1, 31,0);
    tracep->declBit(c+120,"load_access_fault", false,-1);
    tracep->declBit(c+121,"store_access_fault", false,-1);
    tracep->declBus(c+122,"mem_fault_addr", false,-1, 31,0);
    tracep->declBus(c+167,"state", false,-1, 31,0);
    tracep->declBus(c+168,"next_state", false,-1, 31,0);
    tracep->declBus(c+169,"delay", false,-1, 1,0);
    tracep->declBus(c+217,"DELAY_CYCLES", false,-1, 31,0);
    tracep->declBus(c+170,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+171,"sram_arvalid", false,-1);
    tracep->declBit(c+172,"sram_arready", false,-1);
    tracep->declBus(c+173,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+174,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+175,"sram_rvalid", false,-1);
    tracep->declBit(c+176,"sram_rready", false,-1);
    tracep->declBus(c+177,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+178,"sram_awready", false,-1);
    tracep->declBit(c+179,"sram_awvalid", false,-1);
    tracep->declBus(c+180,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+181,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+182,"sram_wvalid", false,-1);
    tracep->declBit(c+183,"sram_wready", false,-1);
    tracep->declBus(c+184,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+185,"sram_bvalid", false,-1);
    tracep->declBit(c+186,"sram_bready", false,-1);
    tracep->pushNamePrefix("mem_sram_inst ");
    tracep->declBus(c+216,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+216,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+198,"clk", false,-1);
    tracep->declBit(c+199,"reset", false,-1);
    tracep->declBus(c+170,"araddr", false,-1, 31,0);
    tracep->declBit(c+171,"arvalid", false,-1);
    tracep->declBit(c+172,"arready", false,-1);
    tracep->declBus(c+174,"rdata", false,-1, 31,0);
    tracep->declBit(c+175,"rvalid", false,-1);
    tracep->declBit(c+176,"rready", false,-1);
    tracep->declBus(c+173,"rresp", false,-1, 1,0);
    tracep->declBus(c+177,"awaddr", false,-1, 31,0);
    tracep->declBit(c+179,"awvalid", false,-1);
    tracep->declBit(c+178,"awready", false,-1);
    tracep->declBus(c+180,"wdata", false,-1, 31,0);
    tracep->declBus(c+181,"wstrb", false,-1, 3,0);
    tracep->declBit(c+182,"wvalid", false,-1);
    tracep->declBit(c+183,"wready", false,-1);
    tracep->declBus(c+184,"bresp", false,-1, 1,0);
    tracep->declBit(c+185,"bvalid", false,-1);
    tracep->declBit(c+186,"bready", false,-1);
    tracep->declBus(c+187,"sram_state", false,-1, 31,0);
    tracep->declBus(c+188,"next_sram_state", false,-1, 31,0);
    tracep->declBus(c+189,"delay_counter", false,-1, 1,0);
    tracep->declBus(c+218,"DELAY_CYCLES", false,-1, 1,0);
    tracep->declBus(c+190,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+191,"awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+192,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+193,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+194,"wstrb_reg", false,-1, 3,0);
    tracep->declBit(c+195,"addr_valid", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_file ");
    tracep->declBit(c+198,"clk", false,-1);
    tracep->declBus(c+98,"rs1", false,-1, 4,0);
    tracep->declBus(c+99,"rs2", false,-1, 4,0);
    tracep->declBus(c+129,"rd", false,-1, 4,0);
    tracep->declBit(c+130,"we", false,-1);
    tracep->declBus(c+123,"wd", false,-1, 31,0);
    tracep->declBus(c+202,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+203,"rs2_val", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_stage ");
    tracep->declBit(c+198,"clk", false,-1);
    tracep->declBit(c+199,"reset", false,-1);
    tracep->declBit(c+118,"mem_valid", false,-1);
    tracep->declBit(c+90,"if_ready", false,-1);
    tracep->declBus(c+75,"opcode", false,-1, 6,0);
    tracep->declBus(c+76,"func3", false,-1, 2,0);
    tracep->declBus(c+78,"rd", false,-1, 4,0);
    tracep->declBit(c+77,"RegWrite", false,-1);
    tracep->declBus(c+83,"pc", false,-1, 31,0);
    tracep->declBus(c+84,"imm", false,-1, 31,0);
    tracep->declBit(c+71,"alu_zero", false,-1);
    tracep->declBit(c+72,"alu_less", false,-1);
    tracep->declBus(c+74,"alu_result", false,-1, 31,0);
    tracep->declBus(c+73,"data_out", false,-1, 31,0);
    tracep->declBus(c+81,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+82,"rs2_val", false,-1, 31,0);
    tracep->declBit(c+119,"wb_ready", false,-1);
    tracep->declBit(c+93,"wb_valid", false,-1);
    tracep->declBus(c+129,"rd_wb", false,-1, 4,0);
    tracep->declBit(c+130,"RegWrite_wb", false,-1);
    tracep->declBus(c+123,"wb_data", false,-1, 31,0);
    tracep->declBus(c+196,"state", false,-1, 31,0);
    tracep->declBus(c+197,"next_state", false,-1, 31,0);
    tracep->declBus(c+219,"rd_wb_pre", false,-1, 4,0);
    tracep->declBus(c+220,"delay", false,-1, 1,0);
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
    bufp->fullIData(oldp+1,(vlSelf->rv32e__DOT__reg_file__DOT__regs[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->rv32e__DOT__reg_file__DOT__regs[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->rv32e__DOT__reg_file__DOT__regs[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->rv32e__DOT__reg_file__DOT__regs[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->rv32e__DOT__reg_file__DOT__regs[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->rv32e__DOT__reg_file__DOT__regs[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->rv32e__DOT__reg_file__DOT__regs[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->rv32e__DOT__reg_file__DOT__regs[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->rv32e__DOT__reg_file__DOT__regs[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->rv32e__DOT__reg_file__DOT__regs[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->rv32e__DOT__reg_file__DOT__regs[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->rv32e__DOT__reg_file__DOT__regs[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->rv32e__DOT__reg_file__DOT__regs[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->rv32e__DOT__reg_file__DOT__regs[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->rv32e__DOT__reg_file__DOT__regs[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->rv32e__DOT__reg_file__DOT__regs[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->rv32e__DOT__reg_file__DOT__regs[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->rv32e__DOT__reg_file__DOT__regs[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->rv32e__DOT__reg_file__DOT__regs[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->rv32e__DOT__reg_file__DOT__regs[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->rv32e__DOT__reg_file__DOT__regs[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->rv32e__DOT__reg_file__DOT__regs[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->rv32e__DOT__reg_file__DOT__regs[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->rv32e__DOT__reg_file__DOT__regs[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->rv32e__DOT__reg_file__DOT__regs[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->rv32e__DOT__reg_file__DOT__regs[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->rv32e__DOT__reg_file__DOT__regs[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->rv32e__DOT__reg_file__DOT__regs[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->rv32e__DOT__reg_file__DOT__regs[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->rv32e__DOT__reg_file__DOT__regs[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->rv32e__DOT__reg_file__DOT__regs[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->rv32e__DOT__reg_file__DOT__regs[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->rv32e__DOT__if_id_pc),32);
    bufp->fullIData(oldp+34,(vlSelf->rv32e__DOT__if_id_instr),32);
    bufp->fullCData(oldp+35,(vlSelf->rv32e__DOT__id_ex_opcode),7);
    bufp->fullCData(oldp+36,(vlSelf->rv32e__DOT__id_ex_rs1),5);
    bufp->fullCData(oldp+37,(vlSelf->rv32e__DOT__id_ex_rs2),5);
    bufp->fullCData(oldp+38,(vlSelf->rv32e__DOT__id_ex_rd),5);
    bufp->fullIData(oldp+39,(vlSelf->rv32e__DOT__id_ex_imm),32);
    bufp->fullIData(oldp+40,(vlSelf->rv32e__DOT__id_ex_instr),32);
    bufp->fullCData(oldp+41,(vlSelf->rv32e__DOT__id_ex_func3),3);
    bufp->fullCData(oldp+42,(vlSelf->rv32e__DOT__id_ex_func7),7);
    bufp->fullBit(oldp+43,(vlSelf->rv32e__DOT__id_ex_RegWrite));
    bufp->fullBit(oldp+44,(vlSelf->rv32e__DOT__id_ex_MemWrite));
    bufp->fullBit(oldp+45,(vlSelf->rv32e__DOT__id_ex_MemRead));
    bufp->fullCData(oldp+46,(vlSelf->rv32e__DOT__id_ex_alu_op),4);
    bufp->fullCData(oldp+47,(vlSelf->rv32e__DOT__id_ex_MemLen),3);
    bufp->fullIData(oldp+48,(vlSelf->rv32e__DOT__id_ex_rs1_val),32);
    bufp->fullIData(oldp+49,(vlSelf->rv32e__DOT__id_ex_rs2_val),32);
    bufp->fullIData(oldp+50,(vlSelf->rv32e__DOT__id_ex_pc),32);
    bufp->fullBit(oldp+51,(vlSelf->rv32e__DOT__id_ex_is_ebreak));
    bufp->fullIData(oldp+52,(vlSelf->rv32e__DOT__ex_mem_alu_result),32);
    bufp->fullBit(oldp+53,(vlSelf->rv32e__DOT__ex_mem_alu_zero));
    bufp->fullBit(oldp+54,(vlSelf->rv32e__DOT__ex_mem_alu_less));
    bufp->fullBit(oldp+55,(vlSelf->rv32e__DOT__ex_mem_RegWrite));
    bufp->fullBit(oldp+56,(vlSelf->rv32e__DOT__ex_mem_MemWrite));
    bufp->fullBit(oldp+57,(vlSelf->rv32e__DOT__ex_mem_MemRead));
    bufp->fullCData(oldp+58,(vlSelf->rv32e__DOT__ex_mem_MemLen),3);
    bufp->fullCData(oldp+59,(vlSelf->rv32e__DOT__ex_mem_rd),5);
    bufp->fullCData(oldp+60,(vlSelf->rv32e__DOT__ex_mem_rs1),5);
    bufp->fullCData(oldp+61,(vlSelf->rv32e__DOT__ex_mem_rs2),5);
    bufp->fullIData(oldp+62,(vlSelf->rv32e__DOT__ex_mem_rs1_val),32);
    bufp->fullIData(oldp+63,(vlSelf->rv32e__DOT__ex_mem_rs2_val),32);
    bufp->fullBit(oldp+64,(vlSelf->rv32e__DOT__ex_mem_valid));
    bufp->fullCData(oldp+65,(vlSelf->rv32e__DOT__ex_mem_opcode),7);
    bufp->fullCData(oldp+66,(vlSelf->rv32e__DOT__ex_mem_func3),3);
    bufp->fullIData(oldp+67,(vlSelf->rv32e__DOT__ex_mem_imm),32);
    bufp->fullIData(oldp+68,(vlSelf->rv32e__DOT__ex_mem_pc),32);
    bufp->fullBit(oldp+69,(vlSelf->rv32e__DOT__ex_mem_is_ebreak));
    bufp->fullIData(oldp+70,(vlSelf->rv32e__DOT__ex_mem_instr),32);
    bufp->fullBit(oldp+71,(vlSelf->rv32e__DOT__mem_wb_alu_zero));
    bufp->fullBit(oldp+72,(vlSelf->rv32e__DOT__mem_wb_alu_less));
    bufp->fullIData(oldp+73,(vlSelf->rv32e__DOT__mem_wb_data_out),32);
    bufp->fullIData(oldp+74,(vlSelf->rv32e__DOT__mem_wb_alu_result),32);
    bufp->fullCData(oldp+75,(vlSelf->rv32e__DOT__mem_wb_opcode),7);
    bufp->fullCData(oldp+76,(vlSelf->rv32e__DOT__mem_wb_func3),3);
    bufp->fullBit(oldp+77,(vlSelf->rv32e__DOT__mem_wb_RegWrite));
    bufp->fullCData(oldp+78,(vlSelf->rv32e__DOT__mem_wb_rd),5);
    bufp->fullCData(oldp+79,(vlSelf->rv32e__DOT__mem_wb_rs1),5);
    bufp->fullCData(oldp+80,(vlSelf->rv32e__DOT__mem_wb_rs2),5);
    bufp->fullIData(oldp+81,(vlSelf->rv32e__DOT__mem_wb_rs1_val),32);
    bufp->fullIData(oldp+82,(vlSelf->rv32e__DOT__mem_wb_rs2_val),32);
    bufp->fullIData(oldp+83,(vlSelf->rv32e__DOT__mem_wb_pc),32);
    bufp->fullIData(oldp+84,(vlSelf->rv32e__DOT__mem_wb_imm),32);
    bufp->fullBit(oldp+85,(vlSelf->rv32e__DOT__mem_wb_valid));
    bufp->fullBit(oldp+86,(vlSelf->rv32e__DOT__mem_wb_is_ebreak));
    bufp->fullIData(oldp+87,(vlSelf->rv32e__DOT__mem_wb_instr),32);
    bufp->fullIData(oldp+88,(vlSelf->rv32e__DOT__if_pc),32);
    bufp->fullIData(oldp+89,(vlSelf->rv32e__DOT__if_instr),32);
    bufp->fullBit(oldp+90,(vlSelf->rv32e__DOT__if_ready));
    bufp->fullBit(oldp+91,(vlSelf->rv32e__DOT__if_valid));
    bufp->fullBit(oldp+92,(vlSelf->rv32e__DOT__id_ready));
    bufp->fullBit(oldp+93,(vlSelf->rv32e__DOT__wb_valid));
    bufp->fullBit(oldp+94,(vlSelf->rv32e__DOT__if_access_fault));
    bufp->fullIData(oldp+95,(vlSelf->rv32e__DOT__if_fault_addr),32);
    bufp->fullIData(oldp+96,(vlSelf->rv32e__DOT__branch_target),32);
    bufp->fullCData(oldp+97,(vlSelf->rv32e__DOT__id_opcode),7);
    bufp->fullCData(oldp+98,(vlSelf->rv32e__DOT__id_rs1),5);
    bufp->fullCData(oldp+99,(vlSelf->rv32e__DOT__id_rs2),5);
    bufp->fullCData(oldp+100,(vlSelf->rv32e__DOT__id_rd),5);
    bufp->fullIData(oldp+101,(vlSelf->rv32e__DOT__id_imm),32);
    bufp->fullCData(oldp+102,(vlSelf->rv32e__DOT__id_func3),3);
    bufp->fullCData(oldp+103,(vlSelf->rv32e__DOT__id_func7),7);
    bufp->fullBit(oldp+104,(vlSelf->rv32e__DOT__id_RegWrite));
    bufp->fullBit(oldp+105,(vlSelf->rv32e__DOT__id_MemWrite));
    bufp->fullBit(oldp+106,(vlSelf->rv32e__DOT__id_MemRead));
    bufp->fullCData(oldp+107,(vlSelf->rv32e__DOT__id_alu_op),4);
    bufp->fullCData(oldp+108,(vlSelf->rv32e__DOT__id_MemLen),3);
    bufp->fullBit(oldp+109,(vlSelf->rv32e__DOT__id_valid));
    bufp->fullBit(oldp+110,(vlSelf->rv32e__DOT__ex_ready));
    bufp->fullBit(oldp+111,(vlSelf->rv32e__DOT__is_ebreak));
    bufp->fullIData(oldp+112,(vlSelf->rv32e__DOT__ex_alu_result),32);
    bufp->fullBit(oldp+113,(vlSelf->rv32e__DOT__ex_alu_zero));
    bufp->fullBit(oldp+114,(vlSelf->rv32e__DOT__ex_alu_less));
    bufp->fullBit(oldp+115,(vlSelf->rv32e__DOT__ex_valid));
    bufp->fullBit(oldp+116,(vlSelf->rv32e__DOT__mem_ready));
    bufp->fullIData(oldp+117,(vlSelf->rv32e__DOT__mem_data_out),32);
    bufp->fullBit(oldp+118,(vlSelf->rv32e__DOT__mem_valid));
    bufp->fullBit(oldp+119,(vlSelf->rv32e__DOT__wb_ready));
    bufp->fullBit(oldp+120,(vlSelf->rv32e__DOT__load_access_fault));
    bufp->fullBit(oldp+121,(vlSelf->rv32e__DOT__store_access_fault));
    bufp->fullIData(oldp+122,(vlSelf->rv32e__DOT__mem_fault_addr),32);
    bufp->fullIData(oldp+123,(vlSelf->rv32e__DOT__wb_data),32);
    bufp->fullIData(oldp+124,(vlSelf->rv32e__DOT__ex_jal_target),32);
    bufp->fullIData(oldp+125,(vlSelf->rv32e__DOT__ex_jalr_target),32);
    bufp->fullBit(oldp+126,(vlSelf->rv32e__DOT__ex_is_jal));
    bufp->fullBit(oldp+127,(vlSelf->rv32e__DOT__ex_is_jalr));
    bufp->fullBit(oldp+128,(vlSelf->rv32e__DOT__ex_take_branch));
    bufp->fullCData(oldp+129,(vlSelf->rv32e__DOT__rd_wb),5);
    bufp->fullBit(oldp+130,(vlSelf->rv32e__DOT__RegWrite_wb));
    bufp->fullBit(oldp+131,(vlSelf->rv32e__DOT__stall));
    bufp->fullBit(oldp+132,(vlSelf->rv32e__DOT__flush));
    bufp->fullBit(oldp+133,((((IData)(vlSelf->rv32e__DOT__ex_mem_MemRead) 
                              | (IData)(vlSelf->rv32e__DOT__ex_mem_MemWrite)) 
                             & (IData)(vlSelf->rv32e__DOT__if_ready))));
    bufp->fullBit(oldp+134,((((IData)(vlSelf->rv32e__DOT__ex_mem_rd) 
                              == (IData)(vlSelf->rv32e__DOT__id_rs1)) 
                             & ((IData)(vlSelf->rv32e__DOT__ex_mem_RegWrite) 
                                & ((0U != (IData)(vlSelf->rv32e__DOT__id_rs1)) 
                                   & (IData)(vlSelf->rv32e__DOT__ex_mem_valid))))));
    bufp->fullBit(oldp+135,((((IData)(vlSelf->rv32e__DOT__ex_mem_rd) 
                              == (IData)(vlSelf->rv32e__DOT__id_rs2)) 
                             & ((IData)(vlSelf->rv32e__DOT__ex_mem_RegWrite) 
                                & ((0U != (IData)(vlSelf->rv32e__DOT__id_rs2)) 
                                   & (IData)(vlSelf->rv32e__DOT__ex_mem_valid))))));
    bufp->fullBit(oldp+136,((((IData)(vlSelf->rv32e__DOT__id_rs1) 
                              == (IData)(vlSelf->rv32e__DOT__mem_wb_rd)) 
                             & ((IData)(vlSelf->rv32e__DOT__mem_wb_RegWrite) 
                                & ((0U != (IData)(vlSelf->rv32e__DOT__id_rs1)) 
                                   & (IData)(vlSelf->rv32e__DOT__mem_wb_valid))))));
    bufp->fullBit(oldp+137,((((IData)(vlSelf->rv32e__DOT__id_rs2) 
                              == (IData)(vlSelf->rv32e__DOT__mem_wb_rd)) 
                             & ((IData)(vlSelf->rv32e__DOT__mem_wb_RegWrite) 
                                & ((0U != (IData)(vlSelf->rv32e__DOT__id_rs2)) 
                                   & (IData)(vlSelf->rv32e__DOT__mem_wb_valid))))));
    bufp->fullIData(oldp+138,((vlSelf->rv32e__DOT__id_ex_pc 
                               - (IData)(4U))),32);
    bufp->fullIData(oldp+139,(vlSelf->rv32e__DOT__ex_stage__DOT__state),32);
    bufp->fullIData(oldp+140,(vlSelf->rv32e__DOT__ex_stage__DOT__next_state),32);
    bufp->fullBit(oldp+141,(((~ (IData)(vlSelf->rv32e__DOT__stall)) 
                             & (IData)(vlSelf->rv32e__DOT__ex_ready))));
    bufp->fullIData(oldp+142,(vlSelf->rv32e__DOT__id_stage__DOT__state),32);
    bufp->fullIData(oldp+143,(vlSelf->rv32e__DOT__id_stage__DOT__next_state),32);
    bufp->fullIData(oldp+144,(vlSelf->rv32e__DOT__id_stage__DOT__immI),32);
    bufp->fullIData(oldp+145,((0xfffff000U & vlSelf->rv32e__DOT__if_id_instr)),32);
    bufp->fullIData(oldp+146,((((- (IData)((vlSelf->rv32e__DOT__if_id_instr 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->rv32e__DOT__if_id_instr 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->rv32e__DOT__if_id_instr 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+147,((((- (IData)((vlSelf->rv32e__DOT__if_id_instr 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->rv32e__DOT__if_id_instr 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->rv32e__DOT__if_id_instr 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->rv32e__DOT__if_id_instr 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+148,((((- (IData)((vlSelf->rv32e__DOT__if_id_instr 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->rv32e__DOT__if_id_instr) 
                                             | ((0x800U 
                                                 & (vlSelf->rv32e__DOT__if_id_instr 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->rv32e__DOT__if_id_instr 
                                                      >> 0x14U)))))),32);
    bufp->fullCData(oldp+149,(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode),5);
    bufp->fullBit(oldp+150,(vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src));
    bufp->fullBit(oldp+151,(((~ (IData)(vlSelf->rv32e__DOT__stall)) 
                             & (IData)(vlSelf->rv32e__DOT__id_ready))));
    bufp->fullIData(oldp+152,(vlSelf->rv32e__DOT__if_stage__DOT__state),32);
    bufp->fullIData(oldp+153,(vlSelf->rv32e__DOT__if_stage__DOT__next_state),32);
    bufp->fullIData(oldp+154,(vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr),32);
    bufp->fullBit(oldp+155,(vlSelf->rv32e__DOT__if_stage__DOT__sram_arvalid));
    bufp->fullBit(oldp+156,(vlSelf->rv32e__DOT__if_stage__DOT__sram_arready));
    bufp->fullIData(oldp+157,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rdata),32);
    bufp->fullBit(oldp+158,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rvalid));
    bufp->fullBit(oldp+159,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rready));
    bufp->fullCData(oldp+160,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rresp),2);
    bufp->fullIData(oldp+161,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__sram_state),32);
    bufp->fullIData(oldp+162,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state),32);
    bufp->fullIData(oldp+163,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg),32);
    bufp->fullIData(oldp+164,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg),32);
    bufp->fullBit(oldp+165,(((0x80000000U <= vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr) 
                             & (0x8fffffffU >= vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr))));
    bufp->fullCData(oldp+166,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter),2);
    bufp->fullIData(oldp+167,(vlSelf->rv32e__DOT__mem_stage__DOT__state),32);
    bufp->fullIData(oldp+168,(vlSelf->rv32e__DOT__mem_stage__DOT__next_state),32);
    bufp->fullCData(oldp+169,(vlSelf->rv32e__DOT__mem_stage__DOT__delay),2);
    bufp->fullIData(oldp+170,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr),32);
    bufp->fullBit(oldp+171,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid));
    bufp->fullBit(oldp+172,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready));
    bufp->fullCData(oldp+173,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rresp),2);
    bufp->fullIData(oldp+174,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata),32);
    bufp->fullBit(oldp+175,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid));
    bufp->fullBit(oldp+176,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready));
    bufp->fullIData(oldp+177,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+178,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awready));
    bufp->fullBit(oldp+179,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awvalid));
    bufp->fullIData(oldp+180,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wdata),32);
    bufp->fullCData(oldp+181,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+182,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid));
    bufp->fullBit(oldp+183,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready));
    bufp->fullCData(oldp+184,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bresp),2);
    bufp->fullBit(oldp+185,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bvalid));
    bufp->fullBit(oldp+186,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bready));
    bufp->fullIData(oldp+187,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state),32);
    bufp->fullIData(oldp+188,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state),32);
    bufp->fullCData(oldp+189,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter),2);
    bufp->fullIData(oldp+190,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg),32);
    bufp->fullIData(oldp+191,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg),32);
    bufp->fullIData(oldp+192,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg),32);
    bufp->fullIData(oldp+193,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg),32);
    bufp->fullCData(oldp+194,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg),4);
    bufp->fullBit(oldp+195,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__addr_valid));
    bufp->fullIData(oldp+196,(vlSelf->rv32e__DOT__wb_stage__DOT__state),32);
    bufp->fullIData(oldp+197,(vlSelf->rv32e__DOT__wb_stage__DOT__next_state),32);
    bufp->fullBit(oldp+198,(vlSelf->clk));
    bufp->fullBit(oldp+199,(vlSelf->reset));
    bufp->fullIData(oldp+200,(((((IData)(vlSelf->rv32e__DOT__ex_mem_rd) 
                                 == (IData)(vlSelf->rv32e__DOT__id_rs1)) 
                                & ((IData)(vlSelf->rv32e__DOT__ex_mem_RegWrite) 
                                   & ((0U != (IData)(vlSelf->rv32e__DOT__id_rs1)) 
                                      & (IData)(vlSelf->rv32e__DOT__ex_mem_valid))))
                                ? vlSelf->rv32e__DOT__ex_mem_alu_result
                                : ((((IData)(vlSelf->rv32e__DOT__id_rs1) 
                                     == (IData)(vlSelf->rv32e__DOT__mem_wb_rd)) 
                                    & ((IData)(vlSelf->rv32e__DOT__mem_wb_RegWrite) 
                                       & ((0U != (IData)(vlSelf->rv32e__DOT__id_rs1)) 
                                          & (IData)(vlSelf->rv32e__DOT__mem_wb_valid))))
                                    ? vlSelf->rv32e__DOT__wb_data
                                    : vlSelf->rv32e__DOT__rs1_val))),32);
    bufp->fullIData(oldp+201,(((((IData)(vlSelf->rv32e__DOT__ex_mem_rd) 
                                 == (IData)(vlSelf->rv32e__DOT__id_rs2)) 
                                & ((IData)(vlSelf->rv32e__DOT__ex_mem_RegWrite) 
                                   & ((0U != (IData)(vlSelf->rv32e__DOT__id_rs2)) 
                                      & (IData)(vlSelf->rv32e__DOT__ex_mem_valid))))
                                ? vlSelf->rv32e__DOT__ex_mem_alu_result
                                : ((((IData)(vlSelf->rv32e__DOT__id_rs2) 
                                     == (IData)(vlSelf->rv32e__DOT__mem_wb_rd)) 
                                    & ((IData)(vlSelf->rv32e__DOT__mem_wb_RegWrite) 
                                       & ((0U != (IData)(vlSelf->rv32e__DOT__id_rs2)) 
                                          & (IData)(vlSelf->rv32e__DOT__mem_wb_valid))))
                                    ? vlSelf->rv32e__DOT__wb_data
                                    : vlSelf->rv32e__DOT__rs2_val))),32);
    bufp->fullIData(oldp+202,(vlSelf->rv32e__DOT__rs1_val),32);
    bufp->fullIData(oldp+203,(vlSelf->rv32e__DOT__rs2_val),32);
    bufp->fullBit(oldp+204,(vlSelf->rv32e__DOT__if_id_valid));
    bufp->fullBit(oldp+205,(vlSelf->rv32e__DOT__id_ex_valid));
    bufp->fullIData(oldp+206,(0U),32);
    bufp->fullCData(oldp+207,(vlSelf->rv32e__DOT__if_stage__DOT__rresp),2);
    bufp->fullIData(oldp+208,(vlSelf->rv32e__DOT__if_stage__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+209,(vlSelf->rv32e__DOT__if_stage__DOT__sram_awvalid));
    bufp->fullBit(oldp+210,(0U));
    bufp->fullIData(oldp+211,(vlSelf->rv32e__DOT__if_stage__DOT__sram_wdata),32);
    bufp->fullCData(oldp+212,(vlSelf->rv32e__DOT__if_stage__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+213,(vlSelf->rv32e__DOT__if_stage__DOT__sram_wvalid));
    bufp->fullCData(oldp+214,(0U),2);
    bufp->fullBit(oldp+215,(vlSelf->rv32e__DOT__if_stage__DOT__sram_bready));
    bufp->fullIData(oldp+216,(0x20U),32);
    bufp->fullIData(oldp+217,(3U),32);
    bufp->fullCData(oldp+218,(2U),2);
    bufp->fullCData(oldp+219,(vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb_pre),5);
    bufp->fullCData(oldp+220,(vlSelf->rv32e__DOT__wb_stage__DOT__delay),2);
}
