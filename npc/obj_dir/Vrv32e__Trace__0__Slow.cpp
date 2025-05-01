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
    tracep->declBit(c+191,"clk", false,-1);
    tracep->declBit(c+192,"reset", false,-1);
    tracep->pushNamePrefix("rv32e ");
    tracep->declBit(c+191,"clk", false,-1);
    tracep->declBit(c+192,"reset", false,-1);
    tracep->declBus(c+1,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+2,"if_id_instr", false,-1, 31,0);
    tracep->declBit(c+193,"if_id_valid", false,-1);
    tracep->declBus(c+3,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+4,"id_ex_rs1", false,-1, 4,0);
    tracep->declBus(c+5,"id_ex_rs2", false,-1, 4,0);
    tracep->declBus(c+6,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+7,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+8,"id_ex_instr", false,-1, 31,0);
    tracep->declBus(c+9,"id_ex_func3", false,-1, 2,0);
    tracep->declBus(c+10,"id_ex_func7", false,-1, 6,0);
    tracep->declBit(c+11,"id_ex_RegWrite", false,-1);
    tracep->declBit(c+12,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+13,"id_ex_MemRead", false,-1);
    tracep->declBus(c+14,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+15,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBus(c+16,"id_ex_rs1_val", false,-1, 31,0);
    tracep->declBus(c+17,"id_ex_rs2_val", false,-1, 31,0);
    tracep->declBit(c+194,"id_ex_valid", false,-1);
    tracep->declBus(c+18,"id_ex_pc", false,-1, 31,0);
    tracep->declBit(c+19,"id_ex_is_ebreak", false,-1);
    tracep->declBus(c+20,"ex_mem_alu_result", false,-1, 31,0);
    tracep->declBit(c+21,"ex_mem_alu_zero", false,-1);
    tracep->declBit(c+22,"ex_mem_alu_less", false,-1);
    tracep->declBit(c+23,"ex_mem_RegWrite", false,-1);
    tracep->declBit(c+24,"ex_mem_MemWrite", false,-1);
    tracep->declBit(c+25,"ex_mem_MemRead", false,-1);
    tracep->declBus(c+26,"ex_mem_MemLen", false,-1, 2,0);
    tracep->declBus(c+27,"ex_mem_rd", false,-1, 4,0);
    tracep->declBus(c+28,"ex_mem_rs1", false,-1, 4,0);
    tracep->declBus(c+29,"ex_mem_rs2", false,-1, 4,0);
    tracep->declBus(c+30,"ex_mem_rs1_val", false,-1, 31,0);
    tracep->declBus(c+31,"ex_mem_rs2_val", false,-1, 31,0);
    tracep->declBit(c+195,"ex_mem_valid", false,-1);
    tracep->declBus(c+32,"ex_mem_opcode", false,-1, 6,0);
    tracep->declBus(c+33,"ex_mem_func3", false,-1, 2,0);
    tracep->declBus(c+34,"ex_mem_imm", false,-1, 31,0);
    tracep->declBus(c+35,"ex_mem_pc", false,-1, 31,0);
    tracep->declBit(c+36,"mem_wb_alu_zero", false,-1);
    tracep->declBit(c+37,"mem_wb_alu_less", false,-1);
    tracep->declBus(c+38,"mem_wb_data_out", false,-1, 31,0);
    tracep->declBus(c+39,"mem_wb_alu_result", false,-1, 31,0);
    tracep->declBus(c+40,"mem_wb_opcode", false,-1, 6,0);
    tracep->declBus(c+41,"mem_wb_func3", false,-1, 2,0);
    tracep->declBit(c+42,"mem_wb_RegWrite", false,-1);
    tracep->declBus(c+43,"mem_wb_rd", false,-1, 4,0);
    tracep->declBus(c+44,"mem_wb_rs1", false,-1, 4,0);
    tracep->declBus(c+45,"mem_wb_rs2", false,-1, 4,0);
    tracep->declBus(c+46,"mem_wb_rs1_val", false,-1, 31,0);
    tracep->declBus(c+47,"mem_wb_rs2_val", false,-1, 31,0);
    tracep->declBus(c+48,"mem_wb_pc", false,-1, 31,0);
    tracep->declBus(c+49,"mem_wb_imm", false,-1, 31,0);
    tracep->declBit(c+196,"mem_wb_valid", false,-1);
    tracep->declBus(c+50,"if_pc", false,-1, 31,0);
    tracep->declBus(c+51,"if_instr", false,-1, 31,0);
    tracep->declBit(c+52,"if_ready", false,-1);
    tracep->declBit(c+53,"if_valid", false,-1);
    tracep->declBit(c+54,"id_ready", false,-1);
    tracep->declBit(c+55,"wb_valid", false,-1);
    tracep->declBit(c+56,"if_access_fault", false,-1);
    tracep->declBus(c+57,"if_fault_addr", false,-1, 31,0);
    tracep->declBus(c+58,"branch_target", false,-1, 31,0);
    tracep->declBus(c+59,"id_opcode", false,-1, 6,0);
    tracep->declBus(c+60,"id_rs1", false,-1, 4,0);
    tracep->declBus(c+61,"id_rs2", false,-1, 4,0);
    tracep->declBus(c+62,"id_rd", false,-1, 4,0);
    tracep->declBus(c+63,"id_imm", false,-1, 31,0);
    tracep->declBus(c+64,"id_func3", false,-1, 2,0);
    tracep->declBus(c+65,"id_func7", false,-1, 6,0);
    tracep->declBit(c+66,"id_RegWrite", false,-1);
    tracep->declBit(c+67,"id_MemWrite", false,-1);
    tracep->declBit(c+68,"id_MemRead", false,-1);
    tracep->declBus(c+69,"id_alu_op", false,-1, 3,0);
    tracep->declBus(c+70,"id_MemLen", false,-1, 2,0);
    tracep->declBit(c+71,"id_valid", false,-1);
    tracep->declBit(c+72,"ex_ready", false,-1);
    tracep->declBus(c+73,"id_rs1_val", false,-1, 31,0);
    tracep->declBus(c+74,"id_rs2_val", false,-1, 31,0);
    tracep->declBus(c+75,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+76,"rs2_val", false,-1, 31,0);
    tracep->declBit(c+77,"is_ebreak", false,-1);
    tracep->declBus(c+78,"ex_alu_result", false,-1, 31,0);
    tracep->declBit(c+79,"ex_alu_zero", false,-1);
    tracep->declBit(c+80,"ex_alu_less", false,-1);
    tracep->declBit(c+81,"ex_valid", false,-1);
    tracep->declBit(c+82,"mem_ready", false,-1);
    tracep->declBus(c+83,"mem_data_out", false,-1, 31,0);
    tracep->declBit(c+84,"mem_valid", false,-1);
    tracep->declBit(c+85,"wb_ready", false,-1);
    tracep->declBit(c+86,"load_access_fault", false,-1);
    tracep->declBit(c+87,"store_access_fault", false,-1);
    tracep->declBus(c+88,"mem_fault_addr", false,-1, 31,0);
    tracep->declBus(c+89,"wb_data", false,-1, 31,0);
    tracep->declBus(c+90,"wb_jal_target", false,-1, 31,0);
    tracep->declBus(c+91,"wb_jalr_target", false,-1, 31,0);
    tracep->declBit(c+92,"wb_is_jal", false,-1);
    tracep->declBit(c+93,"wb_is_jalr", false,-1);
    tracep->declBit(c+94,"wb_take_branch", false,-1);
    tracep->declBit(c+95,"stall", false,-1);
    tracep->declBit(c+96,"flush", false,-1);
    tracep->declBit(c+97,"forwordA", false,-1);
    tracep->declBit(c+98,"forwordB", false,-1);
    tracep->pushNamePrefix("ex_stage ");
    tracep->declBit(c+191,"clk", false,-1);
    tracep->declBit(c+192,"reset", false,-1);
    tracep->declBit(c+19,"is_ebreak", false,-1);
    tracep->declBus(c+8,"instr", false,-1, 31,0);
    tracep->declBit(c+71,"id_valid", false,-1);
    tracep->declBit(c+72,"ex_ready", false,-1);
    tracep->declBus(c+3,"opcode", false,-1, 6,0);
    tracep->declBus(c+16,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+17,"rs2_val", false,-1, 31,0);
    tracep->declBus(c+7,"imm", false,-1, 31,0);
    tracep->declBus(c+14,"alu_op", false,-1, 3,0);
    tracep->declBus(c+9,"func3", false,-1, 2,0);
    tracep->declBus(c+18,"pc", false,-1, 31,0);
    tracep->declBus(c+90,"jal_target", false,-1, 31,0);
    tracep->declBus(c+91,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+92,"is_jal", false,-1);
    tracep->declBit(c+93,"is_jalr", false,-1);
    tracep->declBit(c+94,"take_branch", false,-1);
    tracep->declBit(c+82,"mem_ready", false,-1);
    tracep->declBit(c+81,"ex_valid", false,-1);
    tracep->declBus(c+78,"alu_result", false,-1, 31,0);
    tracep->declBit(c+79,"alu_zero", false,-1);
    tracep->declBit(c+80,"alu_less", false,-1);
    tracep->declBus(c+99,"state", false,-1, 31,0);
    tracep->declBus(c+100,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_stage ");
    tracep->declBit(c+191,"clk", false,-1);
    tracep->declBit(c+192,"reset", false,-1);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBit(c+101,"ex_ready", false,-1);
    tracep->declBit(c+53,"if_valid", false,-1);
    tracep->declBit(c+54,"id_ready", false,-1);
    tracep->declBit(c+71,"id_valid", false,-1);
    tracep->declBus(c+59,"opcode", false,-1, 6,0);
    tracep->declBus(c+60,"rs1", false,-1, 4,0);
    tracep->declBus(c+61,"rs2", false,-1, 4,0);
    tracep->declBus(c+62,"rd", false,-1, 4,0);
    tracep->declBus(c+63,"imm", false,-1, 31,0);
    tracep->declBus(c+64,"func3", false,-1, 2,0);
    tracep->declBus(c+65,"func7", false,-1, 6,0);
    tracep->declBit(c+66,"RegWrite", false,-1);
    tracep->declBit(c+67,"MemWrite", false,-1);
    tracep->declBit(c+68,"MemRead", false,-1);
    tracep->declBus(c+69,"alu_op", false,-1, 3,0);
    tracep->declBus(c+70,"MemLen", false,-1, 2,0);
    tracep->declBit(c+77,"is_ebreak", false,-1);
    tracep->declBus(c+102,"state", false,-1, 31,0);
    tracep->declBus(c+103,"next_state", false,-1, 31,0);
    tracep->declBus(c+104,"immI", false,-1, 31,0);
    tracep->declBus(c+105,"immU", false,-1, 31,0);
    tracep->declBus(c+106,"immS", false,-1, 31,0);
    tracep->declBus(c+107,"immB", false,-1, 31,0);
    tracep->declBus(c+108,"immJ", false,-1, 31,0);
    tracep->declBus(c+197,"immR", false,-1, 31,0);
    tracep->declBus(c+109,"get_opcode", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_stage ");
    tracep->declBit(c+191,"clk", false,-1);
    tracep->declBit(c+192,"reset", false,-1);
    tracep->declBus(c+58,"branch_target", false,-1, 31,0);
    tracep->declBit(c+110,"pc_src", false,-1);
    tracep->declBit(c+111,"id_ready", false,-1);
    tracep->declBit(c+55,"wb_valid", false,-1);
    tracep->declBit(c+52,"if_ready", false,-1);
    tracep->declBit(c+53,"if_valid", false,-1);
    tracep->declBus(c+50,"pc", false,-1, 31,0);
    tracep->declBus(c+51,"instr", false,-1, 31,0);
    tracep->declBit(c+56,"if_access_fault", false,-1);
    tracep->declBus(c+57,"if_fault_addr", false,-1, 31,0);
    tracep->declBus(c+112,"state", false,-1, 31,0);
    tracep->declBus(c+113,"next_state", false,-1, 31,0);
    tracep->declBus(c+198,"rresp", false,-1, 1,0);
    tracep->declBus(c+114,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+115,"sram_arvalid", false,-1);
    tracep->declBit(c+116,"sram_arready", false,-1);
    tracep->declBus(c+117,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+118,"sram_rvalid", false,-1);
    tracep->declBit(c+119,"sram_rready", false,-1);
    tracep->declBus(c+120,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+199,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+200,"sram_awvalid", false,-1);
    tracep->declBit(c+201,"sram_awready", false,-1);
    tracep->declBus(c+202,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+203,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+204,"sram_wvalid", false,-1);
    tracep->declBit(c+201,"sram_wready", false,-1);
    tracep->declBus(c+205,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+201,"sram_bvalid", false,-1);
    tracep->declBit(c+206,"sram_bready", false,-1);
    tracep->pushNamePrefix("ifu_sram_inst ");
    tracep->declBus(c+207,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+207,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+191,"clk", false,-1);
    tracep->declBit(c+192,"reset", false,-1);
    tracep->declBus(c+114,"araddr", false,-1, 31,0);
    tracep->declBit(c+115,"arvalid", false,-1);
    tracep->declBit(c+116,"arready", false,-1);
    tracep->declBus(c+117,"rdata", false,-1, 31,0);
    tracep->declBit(c+118,"rvalid", false,-1);
    tracep->declBit(c+119,"rready", false,-1);
    tracep->declBus(c+120,"rresp", false,-1, 1,0);
    tracep->declBus(c+199,"awaddr", false,-1, 31,0);
    tracep->declBit(c+200,"awvalid", false,-1);
    tracep->declBit(c+201,"awready", false,-1);
    tracep->declBus(c+202,"wdata", false,-1, 31,0);
    tracep->declBus(c+203,"wstrb", false,-1, 3,0);
    tracep->declBit(c+204,"wvalid", false,-1);
    tracep->declBit(c+201,"wready", false,-1);
    tracep->declBus(c+205,"bresp", false,-1, 1,0);
    tracep->declBit(c+201,"bvalid", false,-1);
    tracep->declBit(c+206,"bready", false,-1);
    tracep->declBus(c+121,"sram_state", false,-1, 31,0);
    tracep->declBus(c+122,"next_sram_state", false,-1, 31,0);
    tracep->declBus(c+123,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+124,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+125,"addr_valid", false,-1);
    tracep->declBus(c+126,"delay_counter", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem_stage ");
    tracep->declBit(c+191,"clk", false,-1);
    tracep->declBit(c+192,"reset", false,-1);
    tracep->declBit(c+81,"ex_valid", false,-1);
    tracep->declBit(c+82,"mem_ready", false,-1);
    tracep->declBit(c+85,"wb_ready", false,-1);
    tracep->declBit(c+84,"mem_valid", false,-1);
    tracep->declBit(c+25,"MemRead", false,-1);
    tracep->declBit(c+24,"MemWrite", false,-1);
    tracep->declBus(c+20,"addr", false,-1, 31,0);
    tracep->declBus(c+31,"data_in", false,-1, 31,0);
    tracep->declBus(c+26,"MemLen", false,-1, 2,0);
    tracep->declBus(c+83,"data_out", false,-1, 31,0);
    tracep->declBit(c+86,"load_access_fault", false,-1);
    tracep->declBit(c+87,"store_access_fault", false,-1);
    tracep->declBus(c+88,"mem_fault_addr", false,-1, 31,0);
    tracep->declBus(c+127,"state", false,-1, 31,0);
    tracep->declBus(c+128,"next_state", false,-1, 31,0);
    tracep->declBus(c+129,"delay", false,-1, 1,0);
    tracep->declBus(c+208,"DELAY_CYCLES", false,-1, 31,0);
    tracep->declBus(c+130,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+131,"sram_arvalid", false,-1);
    tracep->declBit(c+132,"sram_arready", false,-1);
    tracep->declBus(c+133,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+134,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+135,"sram_rvalid", false,-1);
    tracep->declBit(c+136,"sram_rready", false,-1);
    tracep->declBus(c+137,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+138,"sram_awready", false,-1);
    tracep->declBit(c+139,"sram_awvalid", false,-1);
    tracep->declBus(c+140,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+141,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+142,"sram_wvalid", false,-1);
    tracep->declBit(c+143,"sram_wready", false,-1);
    tracep->declBus(c+144,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+145,"sram_bvalid", false,-1);
    tracep->declBit(c+146,"sram_bready", false,-1);
    tracep->pushNamePrefix("mem_sram_inst ");
    tracep->declBus(c+207,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+207,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+191,"clk", false,-1);
    tracep->declBit(c+192,"reset", false,-1);
    tracep->declBus(c+130,"araddr", false,-1, 31,0);
    tracep->declBit(c+131,"arvalid", false,-1);
    tracep->declBit(c+132,"arready", false,-1);
    tracep->declBus(c+134,"rdata", false,-1, 31,0);
    tracep->declBit(c+135,"rvalid", false,-1);
    tracep->declBit(c+136,"rready", false,-1);
    tracep->declBus(c+133,"rresp", false,-1, 1,0);
    tracep->declBus(c+137,"awaddr", false,-1, 31,0);
    tracep->declBit(c+139,"awvalid", false,-1);
    tracep->declBit(c+138,"awready", false,-1);
    tracep->declBus(c+140,"wdata", false,-1, 31,0);
    tracep->declBus(c+141,"wstrb", false,-1, 3,0);
    tracep->declBit(c+142,"wvalid", false,-1);
    tracep->declBit(c+143,"wready", false,-1);
    tracep->declBus(c+144,"bresp", false,-1, 1,0);
    tracep->declBit(c+145,"bvalid", false,-1);
    tracep->declBit(c+146,"bready", false,-1);
    tracep->declBus(c+147,"sram_state", false,-1, 31,0);
    tracep->declBus(c+148,"next_sram_state", false,-1, 31,0);
    tracep->declBus(c+149,"delay_counter", false,-1, 1,0);
    tracep->declBus(c+209,"DELAY_CYCLES", false,-1, 1,0);
    tracep->declBus(c+150,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+151,"awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+152,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+153,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+154,"wstrb_reg", false,-1, 3,0);
    tracep->declBit(c+155,"addr_valid", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_file ");
    tracep->declBit(c+191,"clk", false,-1);
    tracep->declBit(c+192,"reset", false,-1);
    tracep->declBus(c+60,"rs1", false,-1, 4,0);
    tracep->declBus(c+61,"rs2", false,-1, 4,0);
    tracep->declBus(c+43,"rd", false,-1, 4,0);
    tracep->declBit(c+42,"we", false,-1);
    tracep->declBus(c+89,"wd", false,-1, 31,0);
    tracep->declBus(c+75,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+76,"rs2_val", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+156+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+188,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_stage ");
    tracep->declBit(c+191,"clk", false,-1);
    tracep->declBit(c+192,"reset", false,-1);
    tracep->declBit(c+84,"mem_valid", false,-1);
    tracep->declBit(c+52,"if_ready", false,-1);
    tracep->declBus(c+40,"opcode", false,-1, 6,0);
    tracep->declBus(c+41,"func3", false,-1, 2,0);
    tracep->declBus(c+48,"pc", false,-1, 31,0);
    tracep->declBus(c+49,"imm", false,-1, 31,0);
    tracep->declBit(c+36,"alu_zero", false,-1);
    tracep->declBit(c+37,"alu_less", false,-1);
    tracep->declBus(c+39,"alu_result", false,-1, 31,0);
    tracep->declBus(c+38,"data_out", false,-1, 31,0);
    tracep->declBus(c+46,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+47,"rs2_val", false,-1, 31,0);
    tracep->declBit(c+85,"wb_ready", false,-1);
    tracep->declBit(c+55,"wb_valid", false,-1);
    tracep->declBus(c+89,"wb_data", false,-1, 31,0);
    tracep->declBus(c+189,"state", false,-1, 31,0);
    tracep->declBus(c+190,"next_state", false,-1, 31,0);
    tracep->declBit(c+210,"RegWrite_wb", false,-1);
    tracep->declBus(c+211,"rd_wb", false,-1, 4,0);
    tracep->declBus(c+212,"rd_wb_pre", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+213+i*1,"regs", true,(i+0), 31,0);
    }
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
    bufp->fullIData(oldp+1,(vlSelf->rv32e__DOT__if_id_pc),32);
    bufp->fullIData(oldp+2,(vlSelf->rv32e__DOT__if_id_instr),32);
    bufp->fullCData(oldp+3,(vlSelf->rv32e__DOT__id_ex_opcode),7);
    bufp->fullCData(oldp+4,(vlSelf->rv32e__DOT__id_ex_rs1),5);
    bufp->fullCData(oldp+5,(vlSelf->rv32e__DOT__id_ex_rs2),5);
    bufp->fullCData(oldp+6,(vlSelf->rv32e__DOT__id_ex_rd),5);
    bufp->fullIData(oldp+7,(vlSelf->rv32e__DOT__id_ex_imm),32);
    bufp->fullIData(oldp+8,(vlSelf->rv32e__DOT__id_ex_instr),32);
    bufp->fullCData(oldp+9,(vlSelf->rv32e__DOT__id_ex_func3),3);
    bufp->fullCData(oldp+10,(vlSelf->rv32e__DOT__id_ex_func7),7);
    bufp->fullBit(oldp+11,(vlSelf->rv32e__DOT__id_ex_RegWrite));
    bufp->fullBit(oldp+12,(vlSelf->rv32e__DOT__id_ex_MemWrite));
    bufp->fullBit(oldp+13,(vlSelf->rv32e__DOT__id_ex_MemRead));
    bufp->fullCData(oldp+14,(vlSelf->rv32e__DOT__id_ex_alu_op),4);
    bufp->fullCData(oldp+15,(vlSelf->rv32e__DOT__id_ex_MemLen),3);
    bufp->fullIData(oldp+16,(vlSelf->rv32e__DOT__id_ex_rs1_val),32);
    bufp->fullIData(oldp+17,(vlSelf->rv32e__DOT__id_ex_rs2_val),32);
    bufp->fullIData(oldp+18,(vlSelf->rv32e__DOT__id_ex_pc),32);
    bufp->fullBit(oldp+19,(vlSelf->rv32e__DOT__id_ex_is_ebreak));
    bufp->fullIData(oldp+20,(vlSelf->rv32e__DOT__ex_mem_alu_result),32);
    bufp->fullBit(oldp+21,(vlSelf->rv32e__DOT__ex_mem_alu_zero));
    bufp->fullBit(oldp+22,(vlSelf->rv32e__DOT__ex_mem_alu_less));
    bufp->fullBit(oldp+23,(vlSelf->rv32e__DOT__ex_mem_RegWrite));
    bufp->fullBit(oldp+24,(vlSelf->rv32e__DOT__ex_mem_MemWrite));
    bufp->fullBit(oldp+25,(vlSelf->rv32e__DOT__ex_mem_MemRead));
    bufp->fullCData(oldp+26,(vlSelf->rv32e__DOT__ex_mem_MemLen),3);
    bufp->fullCData(oldp+27,(vlSelf->rv32e__DOT__ex_mem_rd),5);
    bufp->fullCData(oldp+28,(vlSelf->rv32e__DOT__ex_mem_rs1),5);
    bufp->fullCData(oldp+29,(vlSelf->rv32e__DOT__ex_mem_rs2),5);
    bufp->fullIData(oldp+30,(vlSelf->rv32e__DOT__ex_mem_rs1_val),32);
    bufp->fullIData(oldp+31,(vlSelf->rv32e__DOT__ex_mem_rs2_val),32);
    bufp->fullCData(oldp+32,(vlSelf->rv32e__DOT__ex_mem_opcode),7);
    bufp->fullCData(oldp+33,(vlSelf->rv32e__DOT__ex_mem_func3),3);
    bufp->fullIData(oldp+34,(vlSelf->rv32e__DOT__ex_mem_imm),32);
    bufp->fullIData(oldp+35,(vlSelf->rv32e__DOT__ex_mem_pc),32);
    bufp->fullBit(oldp+36,(vlSelf->rv32e__DOT__mem_wb_alu_zero));
    bufp->fullBit(oldp+37,(vlSelf->rv32e__DOT__mem_wb_alu_less));
    bufp->fullIData(oldp+38,(vlSelf->rv32e__DOT__mem_wb_data_out),32);
    bufp->fullIData(oldp+39,(vlSelf->rv32e__DOT__mem_wb_alu_result),32);
    bufp->fullCData(oldp+40,(vlSelf->rv32e__DOT__mem_wb_opcode),7);
    bufp->fullCData(oldp+41,(vlSelf->rv32e__DOT__mem_wb_func3),3);
    bufp->fullBit(oldp+42,(vlSelf->rv32e__DOT__mem_wb_RegWrite));
    bufp->fullCData(oldp+43,(vlSelf->rv32e__DOT__mem_wb_rd),5);
    bufp->fullCData(oldp+44,(vlSelf->rv32e__DOT__mem_wb_rs1),5);
    bufp->fullCData(oldp+45,(vlSelf->rv32e__DOT__mem_wb_rs2),5);
    bufp->fullIData(oldp+46,(vlSelf->rv32e__DOT__mem_wb_rs1_val),32);
    bufp->fullIData(oldp+47,(vlSelf->rv32e__DOT__mem_wb_rs2_val),32);
    bufp->fullIData(oldp+48,(vlSelf->rv32e__DOT__mem_wb_pc),32);
    bufp->fullIData(oldp+49,(vlSelf->rv32e__DOT__mem_wb_imm),32);
    bufp->fullIData(oldp+50,(vlSelf->rv32e__DOT__if_pc),32);
    bufp->fullIData(oldp+51,(vlSelf->rv32e__DOT__if_instr),32);
    bufp->fullBit(oldp+52,(vlSelf->rv32e__DOT__if_ready));
    bufp->fullBit(oldp+53,(vlSelf->rv32e__DOT__if_valid));
    bufp->fullBit(oldp+54,(vlSelf->rv32e__DOT__id_ready));
    bufp->fullBit(oldp+55,(vlSelf->rv32e__DOT__wb_valid));
    bufp->fullBit(oldp+56,(vlSelf->rv32e__DOT__if_access_fault));
    bufp->fullIData(oldp+57,(vlSelf->rv32e__DOT__if_fault_addr),32);
    bufp->fullIData(oldp+58,(vlSelf->rv32e__DOT__branch_target),32);
    bufp->fullCData(oldp+59,(vlSelf->rv32e__DOT__id_opcode),7);
    bufp->fullCData(oldp+60,(vlSelf->rv32e__DOT__id_rs1),5);
    bufp->fullCData(oldp+61,(vlSelf->rv32e__DOT__id_rs2),5);
    bufp->fullCData(oldp+62,(vlSelf->rv32e__DOT__id_rd),5);
    bufp->fullIData(oldp+63,(vlSelf->rv32e__DOT__id_imm),32);
    bufp->fullCData(oldp+64,(vlSelf->rv32e__DOT__id_func3),3);
    bufp->fullCData(oldp+65,(vlSelf->rv32e__DOT__id_func7),7);
    bufp->fullBit(oldp+66,(vlSelf->rv32e__DOT__id_RegWrite));
    bufp->fullBit(oldp+67,(vlSelf->rv32e__DOT__id_MemWrite));
    bufp->fullBit(oldp+68,(vlSelf->rv32e__DOT__id_MemRead));
    bufp->fullCData(oldp+69,(vlSelf->rv32e__DOT__id_alu_op),4);
    bufp->fullCData(oldp+70,(vlSelf->rv32e__DOT__id_MemLen),3);
    bufp->fullBit(oldp+71,(vlSelf->rv32e__DOT__id_valid));
    bufp->fullBit(oldp+72,(vlSelf->rv32e__DOT__ex_ready));
    bufp->fullIData(oldp+73,((((IData)(vlSelf->rv32e__DOT__id_rs1) 
                               == (IData)(vlSelf->rv32e__DOT__mem_wb_rd))
                               ? vlSelf->rv32e__DOT__wb_data
                               : ((0U == (IData)(vlSelf->rv32e__DOT__id_rs1))
                                   ? 0U : vlSelf->rv32e__DOT__reg_file__DOT__regs
                                  [vlSelf->rv32e__DOT__id_rs1]))),32);
    bufp->fullIData(oldp+74,((((IData)(vlSelf->rv32e__DOT__id_rs2) 
                               == (IData)(vlSelf->rv32e__DOT__mem_wb_rd))
                               ? vlSelf->rv32e__DOT__wb_data
                               : ((0U == (IData)(vlSelf->rv32e__DOT__id_rs2))
                                   ? 0U : vlSelf->rv32e__DOT__reg_file__DOT__regs
                                  [vlSelf->rv32e__DOT__id_rs2]))),32);
    bufp->fullIData(oldp+75,(((0U == (IData)(vlSelf->rv32e__DOT__id_rs1))
                               ? 0U : vlSelf->rv32e__DOT__reg_file__DOT__regs
                              [vlSelf->rv32e__DOT__id_rs1])),32);
    bufp->fullIData(oldp+76,(((0U == (IData)(vlSelf->rv32e__DOT__id_rs2))
                               ? 0U : vlSelf->rv32e__DOT__reg_file__DOT__regs
                              [vlSelf->rv32e__DOT__id_rs2])),32);
    bufp->fullBit(oldp+77,(vlSelf->rv32e__DOT__is_ebreak));
    bufp->fullIData(oldp+78,(vlSelf->rv32e__DOT__ex_alu_result),32);
    bufp->fullBit(oldp+79,(vlSelf->rv32e__DOT__ex_alu_zero));
    bufp->fullBit(oldp+80,(vlSelf->rv32e__DOT__ex_alu_less));
    bufp->fullBit(oldp+81,(vlSelf->rv32e__DOT__ex_valid));
    bufp->fullBit(oldp+82,(vlSelf->rv32e__DOT__mem_ready));
    bufp->fullIData(oldp+83,(vlSelf->rv32e__DOT__mem_data_out),32);
    bufp->fullBit(oldp+84,(vlSelf->rv32e__DOT__mem_valid));
    bufp->fullBit(oldp+85,(vlSelf->rv32e__DOT__wb_ready));
    bufp->fullBit(oldp+86,(vlSelf->rv32e__DOT__load_access_fault));
    bufp->fullBit(oldp+87,(vlSelf->rv32e__DOT__store_access_fault));
    bufp->fullIData(oldp+88,(vlSelf->rv32e__DOT__mem_fault_addr),32);
    bufp->fullIData(oldp+89,(vlSelf->rv32e__DOT__wb_data),32);
    bufp->fullIData(oldp+90,(vlSelf->rv32e__DOT__wb_jal_target),32);
    bufp->fullIData(oldp+91,(vlSelf->rv32e__DOT__wb_jalr_target),32);
    bufp->fullBit(oldp+92,(vlSelf->rv32e__DOT__wb_is_jal));
    bufp->fullBit(oldp+93,(vlSelf->rv32e__DOT__wb_is_jalr));
    bufp->fullBit(oldp+94,(vlSelf->rv32e__DOT__wb_take_branch));
    bufp->fullBit(oldp+95,(vlSelf->rv32e__DOT__stall));
    bufp->fullBit(oldp+96,(vlSelf->rv32e__DOT__flush));
    bufp->fullBit(oldp+97,(((IData)(vlSelf->rv32e__DOT__id_rs1) 
                            == (IData)(vlSelf->rv32e__DOT__mem_wb_rd))));
    bufp->fullBit(oldp+98,(((IData)(vlSelf->rv32e__DOT__id_rs2) 
                            == (IData)(vlSelf->rv32e__DOT__mem_wb_rd))));
    bufp->fullIData(oldp+99,(vlSelf->rv32e__DOT__ex_stage__DOT__state),32);
    bufp->fullIData(oldp+100,(vlSelf->rv32e__DOT__ex_stage__DOT__next_state),32);
    bufp->fullBit(oldp+101,(((~ (IData)(vlSelf->rv32e__DOT__stall)) 
                             & (IData)(vlSelf->rv32e__DOT__ex_ready))));
    bufp->fullIData(oldp+102,(vlSelf->rv32e__DOT__id_stage__DOT__state),32);
    bufp->fullIData(oldp+103,(vlSelf->rv32e__DOT__id_stage__DOT__next_state),32);
    bufp->fullIData(oldp+104,(vlSelf->rv32e__DOT__id_stage__DOT__immI),32);
    bufp->fullIData(oldp+105,((0xfffff000U & vlSelf->rv32e__DOT__if_id_instr)),32);
    bufp->fullIData(oldp+106,((((- (IData)((vlSelf->rv32e__DOT__if_id_instr 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->rv32e__DOT__if_id_instr 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->rv32e__DOT__if_id_instr 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+107,((((- (IData)((vlSelf->rv32e__DOT__if_id_instr 
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
    bufp->fullIData(oldp+108,((((- (IData)((vlSelf->rv32e__DOT__if_id_instr 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->rv32e__DOT__if_id_instr) 
                                             | ((0x800U 
                                                 & (vlSelf->rv32e__DOT__if_id_instr 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->rv32e__DOT__if_id_instr 
                                                      >> 0x14U)))))),32);
    bufp->fullCData(oldp+109,(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode),5);
    bufp->fullBit(oldp+110,(vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src));
    bufp->fullBit(oldp+111,(((~ (IData)(vlSelf->rv32e__DOT__stall)) 
                             & (IData)(vlSelf->rv32e__DOT__id_ready))));
    bufp->fullIData(oldp+112,(vlSelf->rv32e__DOT__if_stage__DOT__state),32);
    bufp->fullIData(oldp+113,(vlSelf->rv32e__DOT__if_stage__DOT__next_state),32);
    bufp->fullIData(oldp+114,(vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr),32);
    bufp->fullBit(oldp+115,(vlSelf->rv32e__DOT__if_stage__DOT__sram_arvalid));
    bufp->fullBit(oldp+116,(vlSelf->rv32e__DOT__if_stage__DOT__sram_arready));
    bufp->fullIData(oldp+117,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rdata),32);
    bufp->fullBit(oldp+118,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rvalid));
    bufp->fullBit(oldp+119,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rready));
    bufp->fullCData(oldp+120,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rresp),2);
    bufp->fullIData(oldp+121,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__sram_state),32);
    bufp->fullIData(oldp+122,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state),32);
    bufp->fullIData(oldp+123,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg),32);
    bufp->fullIData(oldp+124,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg),32);
    bufp->fullBit(oldp+125,(((0x80000000U <= vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr) 
                             & (0x8fffffffU >= vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr))));
    bufp->fullCData(oldp+126,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter),2);
    bufp->fullIData(oldp+127,(vlSelf->rv32e__DOT__mem_stage__DOT__state),32);
    bufp->fullIData(oldp+128,(vlSelf->rv32e__DOT__mem_stage__DOT__next_state),32);
    bufp->fullCData(oldp+129,(vlSelf->rv32e__DOT__mem_stage__DOT__delay),2);
    bufp->fullIData(oldp+130,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr),32);
    bufp->fullBit(oldp+131,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid));
    bufp->fullBit(oldp+132,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready));
    bufp->fullCData(oldp+133,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rresp),2);
    bufp->fullIData(oldp+134,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata),32);
    bufp->fullBit(oldp+135,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid));
    bufp->fullBit(oldp+136,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready));
    bufp->fullIData(oldp+137,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+138,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awready));
    bufp->fullBit(oldp+139,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awvalid));
    bufp->fullIData(oldp+140,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wdata),32);
    bufp->fullCData(oldp+141,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+142,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid));
    bufp->fullBit(oldp+143,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready));
    bufp->fullCData(oldp+144,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bresp),2);
    bufp->fullBit(oldp+145,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bvalid));
    bufp->fullBit(oldp+146,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bready));
    bufp->fullIData(oldp+147,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state),32);
    bufp->fullIData(oldp+148,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state),32);
    bufp->fullCData(oldp+149,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter),2);
    bufp->fullIData(oldp+150,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg),32);
    bufp->fullIData(oldp+151,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg),32);
    bufp->fullIData(oldp+152,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg),32);
    bufp->fullIData(oldp+153,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg),32);
    bufp->fullCData(oldp+154,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg),4);
    bufp->fullBit(oldp+155,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__addr_valid));
    bufp->fullIData(oldp+156,(vlSelf->rv32e__DOT__reg_file__DOT__regs[0]),32);
    bufp->fullIData(oldp+157,(vlSelf->rv32e__DOT__reg_file__DOT__regs[1]),32);
    bufp->fullIData(oldp+158,(vlSelf->rv32e__DOT__reg_file__DOT__regs[2]),32);
    bufp->fullIData(oldp+159,(vlSelf->rv32e__DOT__reg_file__DOT__regs[3]),32);
    bufp->fullIData(oldp+160,(vlSelf->rv32e__DOT__reg_file__DOT__regs[4]),32);
    bufp->fullIData(oldp+161,(vlSelf->rv32e__DOT__reg_file__DOT__regs[5]),32);
    bufp->fullIData(oldp+162,(vlSelf->rv32e__DOT__reg_file__DOT__regs[6]),32);
    bufp->fullIData(oldp+163,(vlSelf->rv32e__DOT__reg_file__DOT__regs[7]),32);
    bufp->fullIData(oldp+164,(vlSelf->rv32e__DOT__reg_file__DOT__regs[8]),32);
    bufp->fullIData(oldp+165,(vlSelf->rv32e__DOT__reg_file__DOT__regs[9]),32);
    bufp->fullIData(oldp+166,(vlSelf->rv32e__DOT__reg_file__DOT__regs[10]),32);
    bufp->fullIData(oldp+167,(vlSelf->rv32e__DOT__reg_file__DOT__regs[11]),32);
    bufp->fullIData(oldp+168,(vlSelf->rv32e__DOT__reg_file__DOT__regs[12]),32);
    bufp->fullIData(oldp+169,(vlSelf->rv32e__DOT__reg_file__DOT__regs[13]),32);
    bufp->fullIData(oldp+170,(vlSelf->rv32e__DOT__reg_file__DOT__regs[14]),32);
    bufp->fullIData(oldp+171,(vlSelf->rv32e__DOT__reg_file__DOT__regs[15]),32);
    bufp->fullIData(oldp+172,(vlSelf->rv32e__DOT__reg_file__DOT__regs[16]),32);
    bufp->fullIData(oldp+173,(vlSelf->rv32e__DOT__reg_file__DOT__regs[17]),32);
    bufp->fullIData(oldp+174,(vlSelf->rv32e__DOT__reg_file__DOT__regs[18]),32);
    bufp->fullIData(oldp+175,(vlSelf->rv32e__DOT__reg_file__DOT__regs[19]),32);
    bufp->fullIData(oldp+176,(vlSelf->rv32e__DOT__reg_file__DOT__regs[20]),32);
    bufp->fullIData(oldp+177,(vlSelf->rv32e__DOT__reg_file__DOT__regs[21]),32);
    bufp->fullIData(oldp+178,(vlSelf->rv32e__DOT__reg_file__DOT__regs[22]),32);
    bufp->fullIData(oldp+179,(vlSelf->rv32e__DOT__reg_file__DOT__regs[23]),32);
    bufp->fullIData(oldp+180,(vlSelf->rv32e__DOT__reg_file__DOT__regs[24]),32);
    bufp->fullIData(oldp+181,(vlSelf->rv32e__DOT__reg_file__DOT__regs[25]),32);
    bufp->fullIData(oldp+182,(vlSelf->rv32e__DOT__reg_file__DOT__regs[26]),32);
    bufp->fullIData(oldp+183,(vlSelf->rv32e__DOT__reg_file__DOT__regs[27]),32);
    bufp->fullIData(oldp+184,(vlSelf->rv32e__DOT__reg_file__DOT__regs[28]),32);
    bufp->fullIData(oldp+185,(vlSelf->rv32e__DOT__reg_file__DOT__regs[29]),32);
    bufp->fullIData(oldp+186,(vlSelf->rv32e__DOT__reg_file__DOT__regs[30]),32);
    bufp->fullIData(oldp+187,(vlSelf->rv32e__DOT__reg_file__DOT__regs[31]),32);
    bufp->fullIData(oldp+188,(vlSelf->rv32e__DOT__reg_file__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+189,(vlSelf->rv32e__DOT__wb_stage__DOT__state),32);
    bufp->fullIData(oldp+190,(vlSelf->rv32e__DOT__wb_stage__DOT__next_state),32);
    bufp->fullBit(oldp+191,(vlSelf->clk));
    bufp->fullBit(oldp+192,(vlSelf->reset));
    bufp->fullBit(oldp+193,(vlSelf->rv32e__DOT__if_id_valid));
    bufp->fullBit(oldp+194,(vlSelf->rv32e__DOT__id_ex_valid));
    bufp->fullBit(oldp+195,(vlSelf->rv32e__DOT__ex_mem_valid));
    bufp->fullBit(oldp+196,(vlSelf->rv32e__DOT__mem_wb_valid));
    bufp->fullIData(oldp+197,(0U),32);
    bufp->fullCData(oldp+198,(vlSelf->rv32e__DOT__if_stage__DOT__rresp),2);
    bufp->fullIData(oldp+199,(vlSelf->rv32e__DOT__if_stage__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+200,(vlSelf->rv32e__DOT__if_stage__DOT__sram_awvalid));
    bufp->fullBit(oldp+201,(0U));
    bufp->fullIData(oldp+202,(vlSelf->rv32e__DOT__if_stage__DOT__sram_wdata),32);
    bufp->fullCData(oldp+203,(vlSelf->rv32e__DOT__if_stage__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+204,(vlSelf->rv32e__DOT__if_stage__DOT__sram_wvalid));
    bufp->fullCData(oldp+205,(0U),2);
    bufp->fullBit(oldp+206,(vlSelf->rv32e__DOT__if_stage__DOT__sram_bready));
    bufp->fullIData(oldp+207,(0x20U),32);
    bufp->fullIData(oldp+208,(3U),32);
    bufp->fullCData(oldp+209,(2U),2);
    bufp->fullBit(oldp+210,(vlSelf->rv32e__DOT__wb_stage__DOT__RegWrite_wb));
    bufp->fullCData(oldp+211,(vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb),5);
    bufp->fullCData(oldp+212,(vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb_pre),5);
    bufp->fullIData(oldp+213,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[0]),32);
    bufp->fullIData(oldp+214,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[1]),32);
    bufp->fullIData(oldp+215,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[2]),32);
    bufp->fullIData(oldp+216,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[3]),32);
    bufp->fullIData(oldp+217,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[4]),32);
    bufp->fullIData(oldp+218,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[5]),32);
    bufp->fullIData(oldp+219,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[6]),32);
    bufp->fullIData(oldp+220,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[7]),32);
    bufp->fullIData(oldp+221,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[8]),32);
    bufp->fullIData(oldp+222,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[9]),32);
    bufp->fullIData(oldp+223,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[10]),32);
    bufp->fullIData(oldp+224,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[11]),32);
    bufp->fullIData(oldp+225,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[12]),32);
    bufp->fullIData(oldp+226,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[13]),32);
    bufp->fullIData(oldp+227,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[14]),32);
    bufp->fullIData(oldp+228,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[15]),32);
    bufp->fullIData(oldp+229,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[16]),32);
    bufp->fullIData(oldp+230,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[17]),32);
    bufp->fullIData(oldp+231,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[18]),32);
    bufp->fullIData(oldp+232,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[19]),32);
    bufp->fullIData(oldp+233,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[20]),32);
    bufp->fullIData(oldp+234,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[21]),32);
    bufp->fullIData(oldp+235,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[22]),32);
    bufp->fullIData(oldp+236,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[23]),32);
    bufp->fullIData(oldp+237,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[24]),32);
    bufp->fullIData(oldp+238,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[25]),32);
    bufp->fullIData(oldp+239,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[26]),32);
    bufp->fullIData(oldp+240,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[27]),32);
    bufp->fullIData(oldp+241,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[28]),32);
    bufp->fullIData(oldp+242,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[29]),32);
    bufp->fullIData(oldp+243,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[30]),32);
    bufp->fullIData(oldp+244,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[31]),32);
}
