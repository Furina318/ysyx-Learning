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
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"reset", false,-1);
    tracep->pushNamePrefix("rv32e ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"reset", false,-1);
    tracep->declBus(c+1,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+2,"if_id_instr", false,-1, 31,0);
    tracep->declBit(c+3,"if_id_valid", false,-1);
    tracep->declBus(c+4,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+5,"id_ex_rs1", false,-1, 4,0);
    tracep->declBus(c+6,"id_ex_rs2", false,-1, 4,0);
    tracep->declBus(c+7,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+8,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+9,"id_ex_func3", false,-1, 2,0);
    tracep->declBus(c+10,"id_ex_func7", false,-1, 6,0);
    tracep->declBit(c+11,"id_ex_RegWrite", false,-1);
    tracep->declBit(c+12,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+13,"id_ex_MemRead", false,-1);
    tracep->declBus(c+14,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+15,"id_ex_MemLen", false,-1, 2,0);
    tracep->declBus(c+16,"id_ex_rs1_val", false,-1, 31,0);
    tracep->declBus(c+17,"id_ex_rs2_val", false,-1, 31,0);
    tracep->declBit(c+18,"id_ex_valid", false,-1);
    tracep->declBus(c+19,"ex_mem_alu_result", false,-1, 31,0);
    tracep->declBit(c+20,"ex_mem_alu_zero", false,-1);
    tracep->declBit(c+21,"ex_mem_alu_less", false,-1);
    tracep->declBit(c+22,"ex_mem_RegWrite", false,-1);
    tracep->declBit(c+23,"ex_mem_MemWrite", false,-1);
    tracep->declBit(c+24,"ex_mem_MemRead", false,-1);
    tracep->declBus(c+25,"ex_mem_MemLen", false,-1, 2,0);
    tracep->declBus(c+26,"ex_mem_rd", false,-1, 4,0);
    tracep->declBus(c+27,"ex_mem_rs2_val", false,-1, 31,0);
    tracep->declBit(c+28,"ex_mem_valid", false,-1);
    tracep->declBus(c+29,"mem_wb_data_out", false,-1, 31,0);
    tracep->declBus(c+30,"mem_wb_alu_result", false,-1, 31,0);
    tracep->declBus(c+31,"mem_wb_opcode", false,-1, 6,0);
    tracep->declBus(c+32,"mem_wb_func3", false,-1, 2,0);
    tracep->declBit(c+33,"mem_wb_RegWrite", false,-1);
    tracep->declBus(c+34,"mem_wb_rd", false,-1, 4,0);
    tracep->declBus(c+35,"mem_wb_pc", false,-1, 31,0);
    tracep->declBus(c+36,"mem_wb_imm", false,-1, 31,0);
    tracep->declBit(c+37,"mem_wb_valid", false,-1);
    tracep->declBus(c+38,"if_pc", false,-1, 31,0);
    tracep->declBus(c+39,"if_instr", false,-1, 31,0);
    tracep->declBit(c+40,"if_ready", false,-1);
    tracep->declBit(c+41,"if_valid", false,-1);
    tracep->declBit(c+42,"id_ready", false,-1);
    tracep->declBit(c+43,"wb_valid", false,-1);
    tracep->declBit(c+44,"if_access_fault", false,-1);
    tracep->declBus(c+45,"if_fault_addr", false,-1, 31,0);
    tracep->declBus(c+46,"branch_target", false,-1, 31,0);
    tracep->declBus(c+47,"id_opcode", false,-1, 6,0);
    tracep->declBus(c+48,"id_rs1", false,-1, 4,0);
    tracep->declBus(c+49,"id_rs2", false,-1, 4,0);
    tracep->declBus(c+50,"id_rd", false,-1, 4,0);
    tracep->declBus(c+51,"id_imm", false,-1, 31,0);
    tracep->declBus(c+52,"id_func3", false,-1, 2,0);
    tracep->declBus(c+53,"id_func7", false,-1, 6,0);
    tracep->declBit(c+54,"id_RegWrite", false,-1);
    tracep->declBit(c+55,"id_MemWrite", false,-1);
    tracep->declBit(c+56,"id_MemRead", false,-1);
    tracep->declBus(c+57,"id_alu_op", false,-1, 3,0);
    tracep->declBus(c+58,"id_MemLen", false,-1, 2,0);
    tracep->declBit(c+59,"id_valid", false,-1);
    tracep->declBit(c+60,"ex_ready", false,-1);
    tracep->declBus(c+61,"id_rs1_val", false,-1, 31,0);
    tracep->declBus(c+62,"id_rs2_val", false,-1, 31,0);
    tracep->declBus(c+63,"ex_alu_result", false,-1, 31,0);
    tracep->declBit(c+64,"ex_alu_zero", false,-1);
    tracep->declBit(c+65,"ex_alu_less", false,-1);
    tracep->declBit(c+66,"ex_valid", false,-1);
    tracep->declBit(c+67,"mem_ready", false,-1);
    tracep->declBus(c+68,"mem_data_out", false,-1, 31,0);
    tracep->declBit(c+69,"mem_valid", false,-1);
    tracep->declBit(c+70,"wb_ready", false,-1);
    tracep->declBit(c+71,"load_access_fault", false,-1);
    tracep->declBit(c+72,"store_access_fault", false,-1);
    tracep->declBus(c+73,"mem_fault_addr", false,-1, 31,0);
    tracep->declBus(c+74,"wb_data", false,-1, 31,0);
    tracep->declBus(c+75,"wb_jal_target", false,-1, 31,0);
    tracep->declBus(c+76,"wb_jalr_target", false,-1, 31,0);
    tracep->declBit(c+77,"wb_is_jal", false,-1);
    tracep->declBit(c+78,"wb_is_jalr", false,-1);
    tracep->declBit(c+79,"wb_take_branch", false,-1);
    tracep->declBit(c+80,"stall", false,-1);
    tracep->declBit(c+81,"flush", false,-1);
    tracep->declBus(c+82,"forwardA", false,-1, 1,0);
    tracep->declBus(c+83,"forwardB", false,-1, 1,0);
    tracep->declBus(c+84,"ex_rs1_val", false,-1, 31,0);
    tracep->declBus(c+85,"ex_rs2_val", false,-1, 31,0);
    tracep->pushNamePrefix("ex_stage ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"reset", false,-1);
    tracep->declBit(c+18,"id_valid", false,-1);
    tracep->declBit(c+60,"ex_ready", false,-1);
    tracep->declBus(c+4,"opcode", false,-1, 6,0);
    tracep->declBus(c+84,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+85,"rs2_val", false,-1, 31,0);
    tracep->declBus(c+8,"imm", false,-1, 31,0);
    tracep->declBus(c+14,"alu_op", false,-1, 3,0);
    tracep->declBit(c+67,"mem_ready", false,-1);
    tracep->declBit(c+66,"ex_valid", false,-1);
    tracep->declBus(c+63,"alu_result", false,-1, 31,0);
    tracep->declBit(c+64,"alu_zero", false,-1);
    tracep->declBit(c+65,"alu_less", false,-1);
    tracep->declBus(c+86,"state", false,-1, 31,0);
    tracep->declBus(c+87,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_stage ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"reset", false,-1);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBit(c+88,"ex_ready", false,-1);
    tracep->declBit(c+3,"if_valid", false,-1);
    tracep->declBit(c+42,"id_ready", false,-1);
    tracep->declBit(c+59,"id_valid", false,-1);
    tracep->declBus(c+47,"opcode", false,-1, 6,0);
    tracep->declBus(c+48,"rs1", false,-1, 4,0);
    tracep->declBus(c+49,"rs2", false,-1, 4,0);
    tracep->declBus(c+50,"rd", false,-1, 4,0);
    tracep->declBus(c+51,"imm", false,-1, 31,0);
    tracep->declBus(c+52,"func3", false,-1, 2,0);
    tracep->declBus(c+53,"func7", false,-1, 6,0);
    tracep->declBit(c+54,"RegWrite", false,-1);
    tracep->declBit(c+55,"MemWrite", false,-1);
    tracep->declBit(c+56,"MemRead", false,-1);
    tracep->declBus(c+57,"alu_op", false,-1, 3,0);
    tracep->declBus(c+58,"MemLen", false,-1, 2,0);
    tracep->declBus(c+89,"state", false,-1, 31,0);
    tracep->declBus(c+90,"next_state", false,-1, 31,0);
    tracep->declBus(c+91,"immI", false,-1, 31,0);
    tracep->declBus(c+92,"immU", false,-1, 31,0);
    tracep->declBus(c+93,"immS", false,-1, 31,0);
    tracep->declBus(c+94,"immB", false,-1, 31,0);
    tracep->declBus(c+95,"immJ", false,-1, 31,0);
    tracep->declBus(c+183,"immR", false,-1, 31,0);
    tracep->declBus(c+96,"get_opcode", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_stage ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"reset", false,-1);
    tracep->declBus(c+46,"branch_target", false,-1, 31,0);
    tracep->declBit(c+97,"pc_src", false,-1);
    tracep->declBit(c+98,"id_ready", false,-1);
    tracep->declBit(c+43,"wb_valid", false,-1);
    tracep->declBit(c+40,"if_ready", false,-1);
    tracep->declBit(c+41,"if_valid", false,-1);
    tracep->declBus(c+38,"pc", false,-1, 31,0);
    tracep->declBus(c+39,"instr", false,-1, 31,0);
    tracep->declBit(c+44,"if_access_fault", false,-1);
    tracep->declBus(c+45,"if_fault_addr", false,-1, 31,0);
    tracep->declBus(c+99,"state", false,-1, 31,0);
    tracep->declBus(c+100,"next_state", false,-1, 31,0);
    tracep->declBus(c+184,"rresp", false,-1, 1,0);
    tracep->declBus(c+101,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+102,"sram_arvalid", false,-1);
    tracep->declBit(c+103,"sram_arready", false,-1);
    tracep->declBus(c+104,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+105,"sram_rvalid", false,-1);
    tracep->declBit(c+106,"sram_rready", false,-1);
    tracep->declBus(c+107,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+185,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+186,"sram_awvalid", false,-1);
    tracep->declBit(c+187,"sram_awready", false,-1);
    tracep->declBus(c+188,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+189,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+190,"sram_wvalid", false,-1);
    tracep->declBit(c+187,"sram_wready", false,-1);
    tracep->declBus(c+191,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+187,"sram_bvalid", false,-1);
    tracep->declBit(c+192,"sram_bready", false,-1);
    tracep->pushNamePrefix("ifu_sram_inst ");
    tracep->declBus(c+193,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+193,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"reset", false,-1);
    tracep->declBus(c+101,"araddr", false,-1, 31,0);
    tracep->declBit(c+102,"arvalid", false,-1);
    tracep->declBit(c+103,"arready", false,-1);
    tracep->declBus(c+104,"rdata", false,-1, 31,0);
    tracep->declBit(c+105,"rvalid", false,-1);
    tracep->declBit(c+106,"rready", false,-1);
    tracep->declBus(c+107,"rresp", false,-1, 1,0);
    tracep->declBus(c+185,"awaddr", false,-1, 31,0);
    tracep->declBit(c+186,"awvalid", false,-1);
    tracep->declBit(c+187,"awready", false,-1);
    tracep->declBus(c+188,"wdata", false,-1, 31,0);
    tracep->declBus(c+189,"wstrb", false,-1, 3,0);
    tracep->declBit(c+190,"wvalid", false,-1);
    tracep->declBit(c+187,"wready", false,-1);
    tracep->declBus(c+191,"bresp", false,-1, 1,0);
    tracep->declBit(c+187,"bvalid", false,-1);
    tracep->declBit(c+192,"bready", false,-1);
    tracep->declBus(c+108,"sram_state", false,-1, 31,0);
    tracep->declBus(c+109,"next_sram_state", false,-1, 31,0);
    tracep->declBus(c+110,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+111,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+112,"addr_valid", false,-1);
    tracep->declBus(c+113,"delay_counter", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem_stage ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"reset", false,-1);
    tracep->declBit(c+28,"ex_valid", false,-1);
    tracep->declBit(c+67,"mem_ready", false,-1);
    tracep->declBit(c+70,"wb_ready", false,-1);
    tracep->declBit(c+69,"mem_valid", false,-1);
    tracep->declBit(c+24,"MemRead", false,-1);
    tracep->declBit(c+23,"MemWrite", false,-1);
    tracep->declBus(c+19,"addr", false,-1, 31,0);
    tracep->declBus(c+27,"data_in", false,-1, 31,0);
    tracep->declBus(c+25,"MemLen", false,-1, 2,0);
    tracep->declBus(c+68,"data_out", false,-1, 31,0);
    tracep->declBit(c+71,"load_access_fault", false,-1);
    tracep->declBit(c+72,"store_access_fault", false,-1);
    tracep->declBus(c+73,"mem_fault_addr", false,-1, 31,0);
    tracep->declBus(c+114,"state", false,-1, 31,0);
    tracep->declBus(c+115,"next_state", false,-1, 31,0);
    tracep->declBus(c+116,"delay", false,-1, 1,0);
    tracep->declBus(c+194,"DELAY_CYCLES", false,-1, 31,0);
    tracep->declBus(c+117,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+118,"sram_arvalid", false,-1);
    tracep->declBit(c+119,"sram_arready", false,-1);
    tracep->declBus(c+120,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+121,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+122,"sram_rvalid", false,-1);
    tracep->declBit(c+123,"sram_rready", false,-1);
    tracep->declBus(c+124,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+125,"sram_awready", false,-1);
    tracep->declBit(c+126,"sram_awvalid", false,-1);
    tracep->declBus(c+127,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+128,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+129,"sram_wvalid", false,-1);
    tracep->declBit(c+130,"sram_wready", false,-1);
    tracep->declBus(c+131,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+132,"sram_bvalid", false,-1);
    tracep->declBit(c+133,"sram_bready", false,-1);
    tracep->pushNamePrefix("mem_sram_inst ");
    tracep->declBus(c+193,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+193,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"reset", false,-1);
    tracep->declBus(c+117,"araddr", false,-1, 31,0);
    tracep->declBit(c+118,"arvalid", false,-1);
    tracep->declBit(c+119,"arready", false,-1);
    tracep->declBus(c+121,"rdata", false,-1, 31,0);
    tracep->declBit(c+122,"rvalid", false,-1);
    tracep->declBit(c+123,"rready", false,-1);
    tracep->declBus(c+120,"rresp", false,-1, 1,0);
    tracep->declBus(c+124,"awaddr", false,-1, 31,0);
    tracep->declBit(c+126,"awvalid", false,-1);
    tracep->declBit(c+125,"awready", false,-1);
    tracep->declBus(c+127,"wdata", false,-1, 31,0);
    tracep->declBus(c+128,"wstrb", false,-1, 3,0);
    tracep->declBit(c+129,"wvalid", false,-1);
    tracep->declBit(c+130,"wready", false,-1);
    tracep->declBus(c+131,"bresp", false,-1, 1,0);
    tracep->declBit(c+132,"bvalid", false,-1);
    tracep->declBit(c+133,"bready", false,-1);
    tracep->declBus(c+134,"sram_state", false,-1, 31,0);
    tracep->declBus(c+135,"next_sram_state", false,-1, 31,0);
    tracep->declBus(c+136,"delay_counter", false,-1, 1,0);
    tracep->declBus(c+195,"DELAY_CYCLES", false,-1, 1,0);
    tracep->declBus(c+137,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+138,"awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+139,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+140,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+141,"wstrb_reg", false,-1, 3,0);
    tracep->declBit(c+142,"addr_valid", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_stage ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"reset", false,-1);
    tracep->declBit(c+37,"mem_valid", false,-1);
    tracep->declBit(c+40,"if_ready", false,-1);
    tracep->declBus(c+31,"opcode", false,-1, 6,0);
    tracep->declBus(c+32,"func3", false,-1, 2,0);
    tracep->declBus(c+34,"id_rd", false,-1, 4,0);
    tracep->declBit(c+33,"id_RegWrite", false,-1);
    tracep->declBus(c+48,"rs1", false,-1, 4,0);
    tracep->declBus(c+49,"rs2", false,-1, 4,0);
    tracep->declBus(c+35,"pc", false,-1, 31,0);
    tracep->declBus(c+36,"imm", false,-1, 31,0);
    tracep->declBit(c+20,"alu_zero", false,-1);
    tracep->declBit(c+21,"alu_less", false,-1);
    tracep->declBus(c+30,"alu_result", false,-1, 31,0);
    tracep->declBus(c+29,"data_out", false,-1, 31,0);
    tracep->declBus(c+61,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+62,"rs2_val", false,-1, 31,0);
    tracep->declBit(c+70,"wb_ready", false,-1);
    tracep->declBit(c+43,"wb_valid", false,-1);
    tracep->declBus(c+75,"jal_target", false,-1, 31,0);
    tracep->declBus(c+76,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+77,"is_jal", false,-1);
    tracep->declBit(c+78,"is_jalr", false,-1);
    tracep->declBit(c+79,"take_branch", false,-1);
    tracep->declBus(c+74,"wb_data", false,-1, 31,0);
    tracep->declBus(c+143,"state", false,-1, 31,0);
    tracep->declBus(c+144,"next_state", false,-1, 31,0);
    tracep->declBit(c+145,"RegWrite_wb", false,-1);
    tracep->declBus(c+146,"rd_wb", false,-1, 4,0);
    tracep->declBus(c+147,"rd_wb_pre", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+148+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+180,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
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
    bufp->fullBit(oldp+3,(vlSelf->rv32e__DOT__if_id_valid));
    bufp->fullCData(oldp+4,(vlSelf->rv32e__DOT__id_ex_opcode),7);
    bufp->fullCData(oldp+5,(vlSelf->rv32e__DOT__id_ex_rs1),5);
    bufp->fullCData(oldp+6,(vlSelf->rv32e__DOT__id_ex_rs2),5);
    bufp->fullCData(oldp+7,(vlSelf->rv32e__DOT__id_ex_rd),5);
    bufp->fullIData(oldp+8,(vlSelf->rv32e__DOT__id_ex_imm),32);
    bufp->fullCData(oldp+9,(vlSelf->rv32e__DOT__id_ex_func3),3);
    bufp->fullCData(oldp+10,(vlSelf->rv32e__DOT__id_ex_func7),7);
    bufp->fullBit(oldp+11,(vlSelf->rv32e__DOT__id_ex_RegWrite));
    bufp->fullBit(oldp+12,(vlSelf->rv32e__DOT__id_ex_MemWrite));
    bufp->fullBit(oldp+13,(vlSelf->rv32e__DOT__id_ex_MemRead));
    bufp->fullCData(oldp+14,(vlSelf->rv32e__DOT__id_ex_alu_op),4);
    bufp->fullCData(oldp+15,(vlSelf->rv32e__DOT__id_ex_MemLen),3);
    bufp->fullIData(oldp+16,(vlSelf->rv32e__DOT__id_ex_rs1_val),32);
    bufp->fullIData(oldp+17,(vlSelf->rv32e__DOT__id_ex_rs2_val),32);
    bufp->fullBit(oldp+18,(vlSelf->rv32e__DOT__id_ex_valid));
    bufp->fullIData(oldp+19,(vlSelf->rv32e__DOT__ex_mem_alu_result),32);
    bufp->fullBit(oldp+20,(vlSelf->rv32e__DOT__ex_mem_alu_zero));
    bufp->fullBit(oldp+21,(vlSelf->rv32e__DOT__ex_mem_alu_less));
    bufp->fullBit(oldp+22,(vlSelf->rv32e__DOT__ex_mem_RegWrite));
    bufp->fullBit(oldp+23,(vlSelf->rv32e__DOT__ex_mem_MemWrite));
    bufp->fullBit(oldp+24,(vlSelf->rv32e__DOT__ex_mem_MemRead));
    bufp->fullCData(oldp+25,(vlSelf->rv32e__DOT__ex_mem_MemLen),3);
    bufp->fullCData(oldp+26,(vlSelf->rv32e__DOT__ex_mem_rd),5);
    bufp->fullIData(oldp+27,(vlSelf->rv32e__DOT__ex_mem_rs2_val),32);
    bufp->fullBit(oldp+28,(vlSelf->rv32e__DOT__ex_mem_valid));
    bufp->fullIData(oldp+29,(vlSelf->rv32e__DOT__mem_wb_data_out),32);
    bufp->fullIData(oldp+30,(vlSelf->rv32e__DOT__mem_wb_alu_result),32);
    bufp->fullCData(oldp+31,(vlSelf->rv32e__DOT__mem_wb_opcode),7);
    bufp->fullCData(oldp+32,(vlSelf->rv32e__DOT__mem_wb_func3),3);
    bufp->fullBit(oldp+33,(vlSelf->rv32e__DOT__mem_wb_RegWrite));
    bufp->fullCData(oldp+34,(vlSelf->rv32e__DOT__mem_wb_rd),5);
    bufp->fullIData(oldp+35,(vlSelf->rv32e__DOT__mem_wb_pc),32);
    bufp->fullIData(oldp+36,(vlSelf->rv32e__DOT__mem_wb_imm),32);
    bufp->fullBit(oldp+37,(vlSelf->rv32e__DOT__mem_wb_valid));
    bufp->fullIData(oldp+38,(vlSelf->rv32e__DOT__if_pc),32);
    bufp->fullIData(oldp+39,(vlSelf->rv32e__DOT__if_instr),32);
    bufp->fullBit(oldp+40,(vlSelf->rv32e__DOT__if_ready));
    bufp->fullBit(oldp+41,(vlSelf->rv32e__DOT__if_valid));
    bufp->fullBit(oldp+42,(vlSelf->rv32e__DOT__id_ready));
    bufp->fullBit(oldp+43,(vlSelf->rv32e__DOT__wb_valid));
    bufp->fullBit(oldp+44,(vlSelf->rv32e__DOT__if_access_fault));
    bufp->fullIData(oldp+45,(vlSelf->rv32e__DOT__if_fault_addr),32);
    bufp->fullIData(oldp+46,(vlSelf->rv32e__DOT__branch_target),32);
    bufp->fullCData(oldp+47,(vlSelf->rv32e__DOT__id_opcode),7);
    bufp->fullCData(oldp+48,(vlSelf->rv32e__DOT__id_rs1),5);
    bufp->fullCData(oldp+49,(vlSelf->rv32e__DOT__id_rs2),5);
    bufp->fullCData(oldp+50,(vlSelf->rv32e__DOT__id_rd),5);
    bufp->fullIData(oldp+51,(vlSelf->rv32e__DOT__id_imm),32);
    bufp->fullCData(oldp+52,(vlSelf->rv32e__DOT__id_func3),3);
    bufp->fullCData(oldp+53,(vlSelf->rv32e__DOT__id_func7),7);
    bufp->fullBit(oldp+54,(vlSelf->rv32e__DOT__id_RegWrite));
    bufp->fullBit(oldp+55,(vlSelf->rv32e__DOT__id_MemWrite));
    bufp->fullBit(oldp+56,(vlSelf->rv32e__DOT__id_MemRead));
    bufp->fullCData(oldp+57,(vlSelf->rv32e__DOT__id_alu_op),4);
    bufp->fullCData(oldp+58,(vlSelf->rv32e__DOT__id_MemLen),3);
    bufp->fullBit(oldp+59,(vlSelf->rv32e__DOT__id_valid));
    bufp->fullBit(oldp+60,(vlSelf->rv32e__DOT__ex_ready));
    bufp->fullIData(oldp+61,(vlSelf->rv32e__DOT__id_rs1_val),32);
    bufp->fullIData(oldp+62,(((0U == (IData)(vlSelf->rv32e__DOT__id_rs2))
                               ? 0U : vlSelf->rv32e__DOT__wb_stage__DOT__regs
                              [vlSelf->rv32e__DOT__id_rs2])),32);
    bufp->fullIData(oldp+63,(vlSelf->rv32e__DOT__ex_alu_result),32);
    bufp->fullBit(oldp+64,(vlSelf->rv32e__DOT__ex_alu_zero));
    bufp->fullBit(oldp+65,(vlSelf->rv32e__DOT__ex_alu_less));
    bufp->fullBit(oldp+66,(vlSelf->rv32e__DOT__ex_valid));
    bufp->fullBit(oldp+67,(vlSelf->rv32e__DOT__mem_ready));
    bufp->fullIData(oldp+68,(vlSelf->rv32e__DOT__mem_data_out),32);
    bufp->fullBit(oldp+69,(vlSelf->rv32e__DOT__mem_valid));
    bufp->fullBit(oldp+70,(vlSelf->rv32e__DOT__wb_ready));
    bufp->fullBit(oldp+71,(vlSelf->rv32e__DOT__load_access_fault));
    bufp->fullBit(oldp+72,(vlSelf->rv32e__DOT__store_access_fault));
    bufp->fullIData(oldp+73,(vlSelf->rv32e__DOT__mem_fault_addr),32);
    bufp->fullIData(oldp+74,(vlSelf->rv32e__DOT__wb_data),32);
    bufp->fullIData(oldp+75,(vlSelf->rv32e__DOT__wb_jal_target),32);
    bufp->fullIData(oldp+76,(vlSelf->rv32e__DOT__wb_jalr_target),32);
    bufp->fullBit(oldp+77,(vlSelf->rv32e__DOT__wb_is_jal));
    bufp->fullBit(oldp+78,(vlSelf->rv32e__DOT__wb_is_jalr));
    bufp->fullBit(oldp+79,(vlSelf->rv32e__DOT__wb_take_branch));
    bufp->fullBit(oldp+80,(vlSelf->rv32e__DOT__stall));
    bufp->fullBit(oldp+81,(vlSelf->rv32e__DOT__flush));
    bufp->fullCData(oldp+82,(vlSelf->rv32e__DOT__forwardA),2);
    bufp->fullCData(oldp+83,(vlSelf->rv32e__DOT__forwardB),2);
    bufp->fullIData(oldp+84,(vlSelf->rv32e__DOT__ex_rs1_val),32);
    bufp->fullIData(oldp+85,(vlSelf->rv32e__DOT__ex_rs2_val),32);
    bufp->fullIData(oldp+86,(vlSelf->rv32e__DOT__ex_stage__DOT__state),32);
    bufp->fullIData(oldp+87,(vlSelf->rv32e__DOT__ex_stage__DOT__next_state),32);
    bufp->fullBit(oldp+88,(vlSelf->rv32e__DOT____Vcellinp__id_stage__ex_ready));
    bufp->fullIData(oldp+89,(vlSelf->rv32e__DOT__id_stage__DOT__state),32);
    bufp->fullIData(oldp+90,(vlSelf->rv32e__DOT__id_stage__DOT__next_state),32);
    bufp->fullIData(oldp+91,(vlSelf->rv32e__DOT__id_stage__DOT__immI),32);
    bufp->fullIData(oldp+92,((0xfffff000U & vlSelf->rv32e__DOT__if_id_instr)),32);
    bufp->fullIData(oldp+93,((((- (IData)((vlSelf->rv32e__DOT__if_id_instr 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->rv32e__DOT__if_id_instr 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->rv32e__DOT__if_id_instr 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+94,((((- (IData)((vlSelf->rv32e__DOT__if_id_instr 
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
    bufp->fullIData(oldp+95,((((- (IData)((vlSelf->rv32e__DOT__if_id_instr 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->rv32e__DOT__if_id_instr) 
                                            | ((0x800U 
                                                & (vlSelf->rv32e__DOT__if_id_instr 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->rv32e__DOT__if_id_instr 
                                                     >> 0x14U)))))),32);
    bufp->fullCData(oldp+96,(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode),5);
    bufp->fullBit(oldp+97,(vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src));
    bufp->fullBit(oldp+98,(((~ (IData)(vlSelf->rv32e__DOT__stall)) 
                            & (IData)(vlSelf->rv32e__DOT__id_ready))));
    bufp->fullIData(oldp+99,(vlSelf->rv32e__DOT__if_stage__DOT__state),32);
    bufp->fullIData(oldp+100,(vlSelf->rv32e__DOT__if_stage__DOT__next_state),32);
    bufp->fullIData(oldp+101,(vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr),32);
    bufp->fullBit(oldp+102,(vlSelf->rv32e__DOT__if_stage__DOT__sram_arvalid));
    bufp->fullBit(oldp+103,(vlSelf->rv32e__DOT__if_stage__DOT__sram_arready));
    bufp->fullIData(oldp+104,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rdata),32);
    bufp->fullBit(oldp+105,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rvalid));
    bufp->fullBit(oldp+106,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rready));
    bufp->fullCData(oldp+107,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rresp),2);
    bufp->fullIData(oldp+108,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__sram_state),32);
    bufp->fullIData(oldp+109,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state),32);
    bufp->fullIData(oldp+110,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg),32);
    bufp->fullIData(oldp+111,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg),32);
    bufp->fullBit(oldp+112,(((0x80000000U <= vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr) 
                             & (0x8fffffffU >= vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr))));
    bufp->fullCData(oldp+113,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter),2);
    bufp->fullIData(oldp+114,(vlSelf->rv32e__DOT__mem_stage__DOT__state),32);
    bufp->fullIData(oldp+115,(vlSelf->rv32e__DOT__mem_stage__DOT__next_state),32);
    bufp->fullCData(oldp+116,(vlSelf->rv32e__DOT__mem_stage__DOT__delay),2);
    bufp->fullIData(oldp+117,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr),32);
    bufp->fullBit(oldp+118,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid));
    bufp->fullBit(oldp+119,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready));
    bufp->fullCData(oldp+120,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rresp),2);
    bufp->fullIData(oldp+121,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata),32);
    bufp->fullBit(oldp+122,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid));
    bufp->fullBit(oldp+123,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready));
    bufp->fullIData(oldp+124,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+125,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awready));
    bufp->fullBit(oldp+126,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awvalid));
    bufp->fullIData(oldp+127,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wdata),32);
    bufp->fullCData(oldp+128,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+129,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid));
    bufp->fullBit(oldp+130,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready));
    bufp->fullCData(oldp+131,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bresp),2);
    bufp->fullBit(oldp+132,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bvalid));
    bufp->fullBit(oldp+133,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bready));
    bufp->fullIData(oldp+134,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state),32);
    bufp->fullIData(oldp+135,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state),32);
    bufp->fullCData(oldp+136,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter),2);
    bufp->fullIData(oldp+137,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg),32);
    bufp->fullIData(oldp+138,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg),32);
    bufp->fullIData(oldp+139,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg),32);
    bufp->fullIData(oldp+140,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg),32);
    bufp->fullCData(oldp+141,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg),4);
    bufp->fullBit(oldp+142,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__addr_valid));
    bufp->fullIData(oldp+143,(vlSelf->rv32e__DOT__wb_stage__DOT__state),32);
    bufp->fullIData(oldp+144,(vlSelf->rv32e__DOT__wb_stage__DOT__next_state),32);
    bufp->fullBit(oldp+145,(vlSelf->rv32e__DOT__wb_stage__DOT__RegWrite_wb));
    bufp->fullCData(oldp+146,(vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb),5);
    bufp->fullCData(oldp+147,(vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb_pre),5);
    bufp->fullIData(oldp+148,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[0]),32);
    bufp->fullIData(oldp+149,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[1]),32);
    bufp->fullIData(oldp+150,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[2]),32);
    bufp->fullIData(oldp+151,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[3]),32);
    bufp->fullIData(oldp+152,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[4]),32);
    bufp->fullIData(oldp+153,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[5]),32);
    bufp->fullIData(oldp+154,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[6]),32);
    bufp->fullIData(oldp+155,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[7]),32);
    bufp->fullIData(oldp+156,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[8]),32);
    bufp->fullIData(oldp+157,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[9]),32);
    bufp->fullIData(oldp+158,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[10]),32);
    bufp->fullIData(oldp+159,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[11]),32);
    bufp->fullIData(oldp+160,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[12]),32);
    bufp->fullIData(oldp+161,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[13]),32);
    bufp->fullIData(oldp+162,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[14]),32);
    bufp->fullIData(oldp+163,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[15]),32);
    bufp->fullIData(oldp+164,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[16]),32);
    bufp->fullIData(oldp+165,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[17]),32);
    bufp->fullIData(oldp+166,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[18]),32);
    bufp->fullIData(oldp+167,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[19]),32);
    bufp->fullIData(oldp+168,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[20]),32);
    bufp->fullIData(oldp+169,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[21]),32);
    bufp->fullIData(oldp+170,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[22]),32);
    bufp->fullIData(oldp+171,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[23]),32);
    bufp->fullIData(oldp+172,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[24]),32);
    bufp->fullIData(oldp+173,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[25]),32);
    bufp->fullIData(oldp+174,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[26]),32);
    bufp->fullIData(oldp+175,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[27]),32);
    bufp->fullIData(oldp+176,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[28]),32);
    bufp->fullIData(oldp+177,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[29]),32);
    bufp->fullIData(oldp+178,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[30]),32);
    bufp->fullIData(oldp+179,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[31]),32);
    bufp->fullIData(oldp+180,(vlSelf->rv32e__DOT__wb_stage__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+181,(vlSelf->clk));
    bufp->fullBit(oldp+182,(vlSelf->reset));
    bufp->fullIData(oldp+183,(0U),32);
    bufp->fullCData(oldp+184,(vlSelf->rv32e__DOT__if_stage__DOT__rresp),2);
    bufp->fullIData(oldp+185,(vlSelf->rv32e__DOT__if_stage__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+186,(vlSelf->rv32e__DOT__if_stage__DOT__sram_awvalid));
    bufp->fullBit(oldp+187,(0U));
    bufp->fullIData(oldp+188,(vlSelf->rv32e__DOT__if_stage__DOT__sram_wdata),32);
    bufp->fullCData(oldp+189,(vlSelf->rv32e__DOT__if_stage__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+190,(vlSelf->rv32e__DOT__if_stage__DOT__sram_wvalid));
    bufp->fullCData(oldp+191,(0U),2);
    bufp->fullBit(oldp+192,(vlSelf->rv32e__DOT__if_stage__DOT__sram_bready));
    bufp->fullIData(oldp+193,(0x20U),32);
    bufp->fullIData(oldp+194,(3U),32);
    bufp->fullCData(oldp+195,(2U),2);
}
