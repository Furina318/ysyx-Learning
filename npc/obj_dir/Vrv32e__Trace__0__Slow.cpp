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
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+143,"reset", false,-1);
    tracep->pushNamePrefix("rv32e ");
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+143,"reset", false,-1);
    tracep->declBus(c+118,"pc", false,-1, 31,0);
    tracep->declBus(c+119,"instr", false,-1, 31,0);
    tracep->declBit(c+120,"if_ready", false,-1);
    tracep->declBit(c+1,"wb_valid", false,-1);
    tracep->declBit(c+121,"if_valid", false,-1);
    tracep->declBit(c+2,"id_ready", false,-1);
    tracep->declBit(c+122,"if_access_fault", false,-1);
    tracep->declBus(c+123,"if_fault_addr", false,-1, 31,0);
    tracep->declBus(c+144,"trap_pc", false,-1, 31,0);
    tracep->declBus(c+3,"opcode", false,-1, 6,0);
    tracep->declBus(c+4,"rs1", false,-1, 4,0);
    tracep->declBus(c+5,"rs2", false,-1, 4,0);
    tracep->declBus(c+6,"rd", false,-1, 4,0);
    tracep->declBus(c+7,"imm", false,-1, 31,0);
    tracep->declBus(c+8,"func3", false,-1, 2,0);
    tracep->declBus(c+9,"func7", false,-1, 6,0);
    tracep->declBit(c+10,"RegWrite", false,-1);
    tracep->declBit(c+11,"MemWrite", false,-1);
    tracep->declBit(c+12,"MemRead", false,-1);
    tracep->declBus(c+13,"alu_op", false,-1, 3,0);
    tracep->declBus(c+14,"MemLen", false,-1, 1,0);
    tracep->declBit(c+15,"id_valid", false,-1);
    tracep->declBit(c+16,"ex_ready", false,-1);
    tracep->declBit(c+145,"reg_valid", false,-1);
    tracep->declBit(c+146,"reg_ready", false,-1);
    tracep->declBus(c+17,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+18,"rs2_val", false,-1, 31,0);
    tracep->declBus(c+19,"alu_result", false,-1, 31,0);
    tracep->declBit(c+20,"alu_zero", false,-1);
    tracep->declBit(c+21,"alu_less", false,-1);
    tracep->declBit(c+22,"ex_valid", false,-1);
    tracep->declBit(c+23,"mem_ready", false,-1);
    tracep->declBus(c+24,"data_out", false,-1, 31,0);
    tracep->declBit(c+25,"mem_valid", false,-1);
    tracep->declBit(c+26,"wb_ready", false,-1);
    tracep->declBit(c+27,"load_access_fault", false,-1);
    tracep->declBit(c+28,"store_access_fault", false,-1);
    tracep->declBus(c+29,"mem_fault_addr", false,-1, 31,0);
    tracep->declBus(c+30,"wb_data", false,-1, 31,0);
    tracep->declBus(c+31,"jal_target", false,-1, 31,0);
    tracep->declBus(c+32,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+33,"is_jal", false,-1);
    tracep->declBit(c+34,"is_jalr", false,-1);
    tracep->declBit(c+35,"take_branch", false,-1);
    tracep->declBus(c+124,"branch_target", false,-1, 31,0);
    tracep->declBus(c+147,"rd_wb", false,-1, 4,0);
    tracep->declBit(c+148,"RegWrite_wb", false,-1);
    tracep->declBit(c+149,"wb_MemRead", false,-1);
    tracep->declBit(c+150,"wb_MemWrite", false,-1);
    tracep->declBus(c+151,"wb_MemLen", false,-1, 1,0);
    tracep->declBus(c+152,"wb_addr", false,-1, 31,0);
    tracep->declBus(c+153,"wb_data_in", false,-1, 31,0);
    tracep->pushNamePrefix("ex_stage ");
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+143,"reset", false,-1);
    tracep->declBit(c+15,"id_valid", false,-1);
    tracep->declBit(c+16,"ex_ready", false,-1);
    tracep->declBus(c+3,"opcode", false,-1, 6,0);
    tracep->declBus(c+17,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+18,"rs2_val", false,-1, 31,0);
    tracep->declBus(c+7,"imm", false,-1, 31,0);
    tracep->declBus(c+13,"alu_op", false,-1, 3,0);
    tracep->declBit(c+23,"mem_ready", false,-1);
    tracep->declBit(c+22,"ex_valid", false,-1);
    tracep->declBus(c+19,"alu_result", false,-1, 31,0);
    tracep->declBit(c+20,"alu_zero", false,-1);
    tracep->declBit(c+21,"alu_less", false,-1);
    tracep->declBus(c+36,"state", false,-1, 31,0);
    tracep->declBus(c+37,"next_state", false,-1, 31,0);
    tracep->declBus(c+154,"DELAY_CYCLES", false,-1, 31,0);
    tracep->declBus(c+38,"delay", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_stage ");
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+143,"reset", false,-1);
    tracep->declBus(c+119,"instr", false,-1, 31,0);
    tracep->declBit(c+16,"ex_ready", false,-1);
    tracep->declBit(c+121,"if_valid", false,-1);
    tracep->declBit(c+2,"id_ready", false,-1);
    tracep->declBit(c+15,"id_valid", false,-1);
    tracep->declBus(c+3,"opcode", false,-1, 6,0);
    tracep->declBus(c+4,"rs1", false,-1, 4,0);
    tracep->declBus(c+5,"rs2", false,-1, 4,0);
    tracep->declBus(c+6,"rd", false,-1, 4,0);
    tracep->declBus(c+7,"imm", false,-1, 31,0);
    tracep->declBus(c+8,"func3", false,-1, 2,0);
    tracep->declBus(c+9,"func7", false,-1, 6,0);
    tracep->declBit(c+10,"RegWrite", false,-1);
    tracep->declBit(c+11,"MemWrite", false,-1);
    tracep->declBit(c+12,"MemRead", false,-1);
    tracep->declBus(c+13,"alu_op", false,-1, 3,0);
    tracep->declBus(c+14,"MemLen", false,-1, 1,0);
    tracep->declBus(c+39,"state", false,-1, 31,0);
    tracep->declBus(c+40,"next_state", false,-1, 31,0);
    tracep->declBus(c+41,"instr_reg", false,-1, 31,0);
    tracep->declBus(c+42,"delay", false,-1, 1,0);
    tracep->declBus(c+154,"DELAY_CYCLES", false,-1, 31,0);
    tracep->declBus(c+43,"immI", false,-1, 31,0);
    tracep->declBus(c+44,"immU", false,-1, 31,0);
    tracep->declBus(c+45,"immS", false,-1, 31,0);
    tracep->declBus(c+46,"immB", false,-1, 31,0);
    tracep->declBus(c+47,"immJ", false,-1, 31,0);
    tracep->declBus(c+155,"immR", false,-1, 31,0);
    tracep->declBus(c+48,"get_opcode", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_stage ");
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+143,"reset", false,-1);
    tracep->declBus(c+124,"branch_target", false,-1, 31,0);
    tracep->declBit(c+125,"pc_src", false,-1);
    tracep->declBit(c+2,"id_ready", false,-1);
    tracep->declBit(c+1,"wb_valid", false,-1);
    tracep->declBit(c+120,"if_ready", false,-1);
    tracep->declBit(c+121,"if_valid", false,-1);
    tracep->declBus(c+118,"pc", false,-1, 31,0);
    tracep->declBus(c+119,"instr", false,-1, 31,0);
    tracep->declBit(c+122,"if_access_fault", false,-1);
    tracep->declBus(c+123,"if_fault_addr", false,-1, 31,0);
    tracep->declBus(c+126,"state", false,-1, 31,0);
    tracep->declBus(c+127,"next_state", false,-1, 31,0);
    tracep->declBus(c+156,"DELAY_CYCLES", false,-1, 1,0);
    tracep->declBus(c+128,"delay_counter", false,-1, 1,0);
    tracep->declBit(c+157,"ren", false,-1);
    tracep->declBus(c+158,"get_instr", false,-1, 31,0);
    tracep->declBus(c+159,"rresp", false,-1, 1,0);
    tracep->declBus(c+129,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+130,"sram_arvalid", false,-1);
    tracep->declBit(c+131,"sram_arready", false,-1);
    tracep->declBus(c+132,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+133,"sram_rvalid", false,-1);
    tracep->declBit(c+134,"sram_rready", false,-1);
    tracep->declBus(c+135,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+160,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+161,"sram_awvalid", false,-1);
    tracep->declBit(c+162,"sram_awready", false,-1);
    tracep->declBus(c+163,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+164,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+165,"sram_wvalid", false,-1);
    tracep->declBit(c+162,"sram_wready", false,-1);
    tracep->declBus(c+166,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+162,"sram_bvalid", false,-1);
    tracep->declBit(c+167,"sram_bready", false,-1);
    tracep->pushNamePrefix("ifu_sram_inst ");
    tracep->declBus(c+168,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+168,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+143,"reset", false,-1);
    tracep->declBus(c+129,"araddr", false,-1, 31,0);
    tracep->declBit(c+130,"arvalid", false,-1);
    tracep->declBit(c+131,"arready", false,-1);
    tracep->declBus(c+132,"rdata", false,-1, 31,0);
    tracep->declBit(c+133,"rvalid", false,-1);
    tracep->declBit(c+134,"rready", false,-1);
    tracep->declBus(c+135,"rresp", false,-1, 1,0);
    tracep->declBus(c+160,"awaddr", false,-1, 31,0);
    tracep->declBit(c+161,"awvalid", false,-1);
    tracep->declBit(c+162,"awready", false,-1);
    tracep->declBus(c+163,"wdata", false,-1, 31,0);
    tracep->declBus(c+164,"wstrb", false,-1, 3,0);
    tracep->declBit(c+165,"wvalid", false,-1);
    tracep->declBit(c+162,"wready", false,-1);
    tracep->declBus(c+166,"bresp", false,-1, 1,0);
    tracep->declBit(c+162,"bvalid", false,-1);
    tracep->declBit(c+167,"bready", false,-1);
    tracep->declBus(c+136,"sram_state", false,-1, 31,0);
    tracep->declBus(c+137,"next_sram_state", false,-1, 31,0);
    tracep->declBus(c+138,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+139,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+140,"addr_valid", false,-1);
    tracep->declBus(c+141,"delay_counter", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem_stage ");
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+143,"reset", false,-1);
    tracep->declBit(c+22,"ex_valid", false,-1);
    tracep->declBit(c+23,"mem_ready", false,-1);
    tracep->declBit(c+26,"wb_ready", false,-1);
    tracep->declBit(c+25,"mem_valid", false,-1);
    tracep->declBit(c+12,"MemRead", false,-1);
    tracep->declBit(c+11,"MemWrite", false,-1);
    tracep->declBus(c+49,"addr", false,-1, 31,0);
    tracep->declBus(c+18,"data_in", false,-1, 31,0);
    tracep->declBus(c+14,"MemLen", false,-1, 1,0);
    tracep->declBus(c+24,"data_out", false,-1, 31,0);
    tracep->declBit(c+27,"load_access_fault", false,-1);
    tracep->declBit(c+28,"store_access_fault", false,-1);
    tracep->declBus(c+29,"mem_fault_addr", false,-1, 31,0);
    tracep->declBus(c+50,"state", false,-1, 31,0);
    tracep->declBus(c+51,"next_state", false,-1, 31,0);
    tracep->declBus(c+52,"delay", false,-1, 1,0);
    tracep->declBus(c+169,"DELAY_CYCLES", false,-1, 31,0);
    tracep->declBus(c+53,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+54,"sram_arvalid", false,-1);
    tracep->declBit(c+55,"sram_arready", false,-1);
    tracep->declBus(c+56,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+57,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+58,"sram_rvalid", false,-1);
    tracep->declBit(c+59,"sram_rready", false,-1);
    tracep->declBus(c+60,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+61,"sram_awready", false,-1);
    tracep->declBit(c+62,"sram_awvalid", false,-1);
    tracep->declBus(c+63,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+64,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+65,"sram_wvalid", false,-1);
    tracep->declBit(c+66,"sram_wready", false,-1);
    tracep->declBus(c+67,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+68,"sram_bvalid", false,-1);
    tracep->declBit(c+69,"sram_bready", false,-1);
    tracep->pushNamePrefix("mem_sram_inst ");
    tracep->declBus(c+168,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+168,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+143,"reset", false,-1);
    tracep->declBus(c+53,"araddr", false,-1, 31,0);
    tracep->declBit(c+54,"arvalid", false,-1);
    tracep->declBit(c+55,"arready", false,-1);
    tracep->declBus(c+57,"rdata", false,-1, 31,0);
    tracep->declBit(c+58,"rvalid", false,-1);
    tracep->declBit(c+59,"rready", false,-1);
    tracep->declBus(c+56,"rresp", false,-1, 1,0);
    tracep->declBus(c+60,"awaddr", false,-1, 31,0);
    tracep->declBit(c+62,"awvalid", false,-1);
    tracep->declBit(c+61,"awready", false,-1);
    tracep->declBus(c+63,"wdata", false,-1, 31,0);
    tracep->declBus(c+64,"wstrb", false,-1, 3,0);
    tracep->declBit(c+65,"wvalid", false,-1);
    tracep->declBit(c+66,"wready", false,-1);
    tracep->declBus(c+67,"bresp", false,-1, 1,0);
    tracep->declBit(c+68,"bvalid", false,-1);
    tracep->declBit(c+69,"bready", false,-1);
    tracep->declBus(c+70,"sram_state", false,-1, 31,0);
    tracep->declBus(c+71,"next_sram_state", false,-1, 31,0);
    tracep->declBus(c+72,"delay_counter", false,-1, 1,0);
    tracep->declBus(c+170,"DELAY_CYCLES", false,-1, 1,0);
    tracep->declBus(c+73,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+74,"awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+75,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+76,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+77,"wstrb_reg", false,-1, 3,0);
    tracep->declBit(c+78,"addr_valid", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_stage ");
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+143,"reset", false,-1);
    tracep->declBus(c+118,"pc", false,-1, 31,0);
    tracep->declBus(c+7,"imm", false,-1, 31,0);
    tracep->declBus(c+19,"alu_result", false,-1, 31,0);
    tracep->declBus(c+24,"data_out", false,-1, 31,0);
    tracep->declBus(c+3,"opcode", false,-1, 6,0);
    tracep->declBus(c+8,"func3", false,-1, 2,0);
    tracep->declBus(c+6,"id_rd", false,-1, 4,0);
    tracep->declBit(c+10,"id_RegWrite", false,-1);
    tracep->declBit(c+20,"alu_zero", false,-1);
    tracep->declBit(c+21,"alu_less", false,-1);
    tracep->declBit(c+25,"mem_valid", false,-1);
    tracep->declBit(c+120,"if_ready", false,-1);
    tracep->declBus(c+4,"rs1", false,-1, 4,0);
    tracep->declBus(c+5,"rs2", false,-1, 4,0);
    tracep->declBus(c+17,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+18,"rs2_val", false,-1, 31,0);
    tracep->declBit(c+26,"wb_ready", false,-1);
    tracep->declBit(c+1,"wb_valid", false,-1);
    tracep->declBus(c+31,"jal_target", false,-1, 31,0);
    tracep->declBus(c+32,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+33,"is_jal", false,-1);
    tracep->declBit(c+34,"is_jalr", false,-1);
    tracep->declBit(c+35,"take_branch", false,-1);
    tracep->declBus(c+30,"wb_data", false,-1, 31,0);
    tracep->declBus(c+79,"state", false,-1, 31,0);
    tracep->declBus(c+80,"next_state", false,-1, 31,0);
    tracep->declBus(c+81,"delay", false,-1, 1,0);
    tracep->declBus(c+154,"DELAY_CYCLES", false,-1, 31,0);
    tracep->declBit(c+82,"RegWrite_wb", false,-1);
    tracep->declBus(c+83,"rd_wb", false,-1, 4,0);
    tracep->declBus(c+84,"rd_wb_pre", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+85+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+117,"i", false,-1, 31,0);
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
    bufp->fullBit(oldp+1,(vlSelf->rv32e__DOT__wb_valid));
    bufp->fullBit(oldp+2,(vlSelf->rv32e__DOT__id_ready));
    bufp->fullCData(oldp+3,(vlSelf->rv32e__DOT__opcode),7);
    bufp->fullCData(oldp+4,(vlSelf->rv32e__DOT__rs1),5);
    bufp->fullCData(oldp+5,(vlSelf->rv32e__DOT__rs2),5);
    bufp->fullCData(oldp+6,(vlSelf->rv32e__DOT__rd),5);
    bufp->fullIData(oldp+7,(vlSelf->rv32e__DOT__imm),32);
    bufp->fullCData(oldp+8,(vlSelf->rv32e__DOT__func3),3);
    bufp->fullCData(oldp+9,(vlSelf->rv32e__DOT__func7),7);
    bufp->fullBit(oldp+10,(vlSelf->rv32e__DOT__RegWrite));
    bufp->fullBit(oldp+11,(vlSelf->rv32e__DOT__MemWrite));
    bufp->fullBit(oldp+12,(vlSelf->rv32e__DOT__MemRead));
    bufp->fullCData(oldp+13,(vlSelf->rv32e__DOT__alu_op),4);
    bufp->fullCData(oldp+14,(vlSelf->rv32e__DOT__MemLen),2);
    bufp->fullBit(oldp+15,(vlSelf->rv32e__DOT__id_valid));
    bufp->fullBit(oldp+16,(vlSelf->rv32e__DOT__ex_ready));
    bufp->fullIData(oldp+17,(vlSelf->rv32e__DOT__rs1_val),32);
    bufp->fullIData(oldp+18,(vlSelf->rv32e__DOT__rs2_val),32);
    bufp->fullIData(oldp+19,(vlSelf->rv32e__DOT__alu_result),32);
    bufp->fullBit(oldp+20,(vlSelf->rv32e__DOT__alu_zero));
    bufp->fullBit(oldp+21,(vlSelf->rv32e__DOT__alu_less));
    bufp->fullBit(oldp+22,(vlSelf->rv32e__DOT__ex_valid));
    bufp->fullBit(oldp+23,(vlSelf->rv32e__DOT__mem_ready));
    bufp->fullIData(oldp+24,(vlSelf->rv32e__DOT__data_out),32);
    bufp->fullBit(oldp+25,(vlSelf->rv32e__DOT__mem_valid));
    bufp->fullBit(oldp+26,(vlSelf->rv32e__DOT__wb_ready));
    bufp->fullBit(oldp+27,(vlSelf->rv32e__DOT__load_access_fault));
    bufp->fullBit(oldp+28,(vlSelf->rv32e__DOT__store_access_fault));
    bufp->fullIData(oldp+29,(vlSelf->rv32e__DOT__mem_fault_addr),32);
    bufp->fullIData(oldp+30,(vlSelf->rv32e__DOT__wb_data),32);
    bufp->fullIData(oldp+31,(vlSelf->rv32e__DOT__jal_target),32);
    bufp->fullIData(oldp+32,(vlSelf->rv32e__DOT__jalr_target),32);
    bufp->fullBit(oldp+33,(vlSelf->rv32e__DOT__is_jal));
    bufp->fullBit(oldp+34,(vlSelf->rv32e__DOT__is_jalr));
    bufp->fullBit(oldp+35,(vlSelf->rv32e__DOT__take_branch));
    bufp->fullIData(oldp+36,(vlSelf->rv32e__DOT__ex_stage__DOT__state),32);
    bufp->fullIData(oldp+37,(vlSelf->rv32e__DOT__ex_stage__DOT__next_state),32);
    bufp->fullCData(oldp+38,(vlSelf->rv32e__DOT__ex_stage__DOT__delay),2);
    bufp->fullIData(oldp+39,(vlSelf->rv32e__DOT__id_stage__DOT__state),32);
    bufp->fullIData(oldp+40,(vlSelf->rv32e__DOT__id_stage__DOT__next_state),32);
    bufp->fullIData(oldp+41,(vlSelf->rv32e__DOT__id_stage__DOT__instr_reg),32);
    bufp->fullCData(oldp+42,(vlSelf->rv32e__DOT__id_stage__DOT__delay),2);
    bufp->fullIData(oldp+43,(vlSelf->rv32e__DOT__id_stage__DOT__immI),32);
    bufp->fullIData(oldp+44,((0xfffff000U & vlSelf->rv32e__DOT__id_stage__DOT__instr_reg)),32);
    bufp->fullIData(oldp+45,((((- (IData)((vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+46,((((- (IData)((vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                    >> 7U)))))),32);
    bufp->fullIData(oldp+47,((((- (IData)((vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->rv32e__DOT__id_stage__DOT__instr_reg) 
                                            | ((0x800U 
                                                & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                     >> 0x14U)))))),32);
    bufp->fullCData(oldp+48,(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode),5);
    bufp->fullIData(oldp+49,(vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr),32);
    bufp->fullIData(oldp+50,(vlSelf->rv32e__DOT__mem_stage__DOT__state),32);
    bufp->fullIData(oldp+51,(vlSelf->rv32e__DOT__mem_stage__DOT__next_state),32);
    bufp->fullCData(oldp+52,(vlSelf->rv32e__DOT__mem_stage__DOT__delay),2);
    bufp->fullIData(oldp+53,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr),32);
    bufp->fullBit(oldp+54,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid));
    bufp->fullBit(oldp+55,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready));
    bufp->fullCData(oldp+56,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rresp),2);
    bufp->fullIData(oldp+57,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata),32);
    bufp->fullBit(oldp+58,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid));
    bufp->fullBit(oldp+59,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready));
    bufp->fullIData(oldp+60,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+61,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awready));
    bufp->fullBit(oldp+62,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awvalid));
    bufp->fullIData(oldp+63,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wdata),32);
    bufp->fullCData(oldp+64,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+65,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid));
    bufp->fullBit(oldp+66,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready));
    bufp->fullCData(oldp+67,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bresp),2);
    bufp->fullBit(oldp+68,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bvalid));
    bufp->fullBit(oldp+69,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bready));
    bufp->fullIData(oldp+70,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state),32);
    bufp->fullIData(oldp+71,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state),32);
    bufp->fullCData(oldp+72,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter),2);
    bufp->fullIData(oldp+73,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg),32);
    bufp->fullIData(oldp+74,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg),32);
    bufp->fullIData(oldp+75,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg),32);
    bufp->fullIData(oldp+76,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg),32);
    bufp->fullCData(oldp+77,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg),4);
    bufp->fullBit(oldp+78,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__addr_valid));
    bufp->fullIData(oldp+79,(vlSelf->rv32e__DOT__wb_stage__DOT__state),32);
    bufp->fullIData(oldp+80,(vlSelf->rv32e__DOT__wb_stage__DOT__next_state),32);
    bufp->fullCData(oldp+81,(vlSelf->rv32e__DOT__wb_stage__DOT__delay),2);
    bufp->fullBit(oldp+82,(vlSelf->rv32e__DOT__wb_stage__DOT__RegWrite_wb));
    bufp->fullCData(oldp+83,(vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb),5);
    bufp->fullCData(oldp+84,(vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb_pre),5);
    bufp->fullIData(oldp+85,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[0]),32);
    bufp->fullIData(oldp+86,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[1]),32);
    bufp->fullIData(oldp+87,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[2]),32);
    bufp->fullIData(oldp+88,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[3]),32);
    bufp->fullIData(oldp+89,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[4]),32);
    bufp->fullIData(oldp+90,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[5]),32);
    bufp->fullIData(oldp+91,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[6]),32);
    bufp->fullIData(oldp+92,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[7]),32);
    bufp->fullIData(oldp+93,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[8]),32);
    bufp->fullIData(oldp+94,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[9]),32);
    bufp->fullIData(oldp+95,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[10]),32);
    bufp->fullIData(oldp+96,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[11]),32);
    bufp->fullIData(oldp+97,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[12]),32);
    bufp->fullIData(oldp+98,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[13]),32);
    bufp->fullIData(oldp+99,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[14]),32);
    bufp->fullIData(oldp+100,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[15]),32);
    bufp->fullIData(oldp+101,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[16]),32);
    bufp->fullIData(oldp+102,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[17]),32);
    bufp->fullIData(oldp+103,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[18]),32);
    bufp->fullIData(oldp+104,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[19]),32);
    bufp->fullIData(oldp+105,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[20]),32);
    bufp->fullIData(oldp+106,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[21]),32);
    bufp->fullIData(oldp+107,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[22]),32);
    bufp->fullIData(oldp+108,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[23]),32);
    bufp->fullIData(oldp+109,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[24]),32);
    bufp->fullIData(oldp+110,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[25]),32);
    bufp->fullIData(oldp+111,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[26]),32);
    bufp->fullIData(oldp+112,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[27]),32);
    bufp->fullIData(oldp+113,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[28]),32);
    bufp->fullIData(oldp+114,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[29]),32);
    bufp->fullIData(oldp+115,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[30]),32);
    bufp->fullIData(oldp+116,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[31]),32);
    bufp->fullIData(oldp+117,(vlSelf->rv32e__DOT__wb_stage__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+118,(vlSelf->rv32e__DOT__pc),32);
    bufp->fullIData(oldp+119,(vlSelf->rv32e__DOT__instr),32);
    bufp->fullBit(oldp+120,(vlSelf->rv32e__DOT__if_ready));
    bufp->fullBit(oldp+121,(vlSelf->rv32e__DOT__if_valid));
    bufp->fullBit(oldp+122,(vlSelf->rv32e__DOT__if_access_fault));
    bufp->fullIData(oldp+123,(vlSelf->rv32e__DOT__if_fault_addr),32);
    bufp->fullIData(oldp+124,(vlSelf->rv32e__DOT__branch_target),32);
    bufp->fullBit(oldp+125,(vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src));
    bufp->fullIData(oldp+126,(vlSelf->rv32e__DOT__if_stage__DOT__state),32);
    bufp->fullIData(oldp+127,(vlSelf->rv32e__DOT__if_stage__DOT__next_state),32);
    bufp->fullCData(oldp+128,(vlSelf->rv32e__DOT__if_stage__DOT__delay_counter),2);
    bufp->fullIData(oldp+129,(vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr),32);
    bufp->fullBit(oldp+130,(vlSelf->rv32e__DOT__if_stage__DOT__sram_arvalid));
    bufp->fullBit(oldp+131,(vlSelf->rv32e__DOT__if_stage__DOT__sram_arready));
    bufp->fullIData(oldp+132,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rdata),32);
    bufp->fullBit(oldp+133,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rvalid));
    bufp->fullBit(oldp+134,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rready));
    bufp->fullCData(oldp+135,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rresp),2);
    bufp->fullIData(oldp+136,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__sram_state),32);
    bufp->fullIData(oldp+137,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state),32);
    bufp->fullIData(oldp+138,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg),32);
    bufp->fullIData(oldp+139,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg),32);
    bufp->fullBit(oldp+140,(((0x80000000U <= vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr) 
                             & (0x8fffffffU >= vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr))));
    bufp->fullCData(oldp+141,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter),2);
    bufp->fullBit(oldp+142,(vlSelf->clk));
    bufp->fullBit(oldp+143,(vlSelf->reset));
    bufp->fullIData(oldp+144,(vlSelf->rv32e__DOT__trap_pc),32);
    bufp->fullBit(oldp+145,(vlSelf->rv32e__DOT__reg_valid));
    bufp->fullBit(oldp+146,(vlSelf->rv32e__DOT__reg_ready));
    bufp->fullCData(oldp+147,(vlSelf->rv32e__DOT__rd_wb),5);
    bufp->fullBit(oldp+148,(vlSelf->rv32e__DOT__RegWrite_wb));
    bufp->fullBit(oldp+149,(vlSelf->rv32e__DOT__wb_MemRead));
    bufp->fullBit(oldp+150,(vlSelf->rv32e__DOT__wb_MemWrite));
    bufp->fullCData(oldp+151,(vlSelf->rv32e__DOT__wb_MemLen),2);
    bufp->fullIData(oldp+152,(vlSelf->rv32e__DOT__wb_addr),32);
    bufp->fullIData(oldp+153,(vlSelf->rv32e__DOT__wb_data_in),32);
    bufp->fullIData(oldp+154,(1U),32);
    bufp->fullIData(oldp+155,(0U),32);
    bufp->fullCData(oldp+156,(1U),2);
    bufp->fullBit(oldp+157,(vlSelf->rv32e__DOT__if_stage__DOT__ren));
    bufp->fullIData(oldp+158,(vlSelf->rv32e__DOT__if_stage__DOT__get_instr),32);
    bufp->fullCData(oldp+159,(vlSelf->rv32e__DOT__if_stage__DOT__rresp),2);
    bufp->fullIData(oldp+160,(vlSelf->rv32e__DOT__if_stage__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+161,(vlSelf->rv32e__DOT__if_stage__DOT__sram_awvalid));
    bufp->fullBit(oldp+162,(0U));
    bufp->fullIData(oldp+163,(vlSelf->rv32e__DOT__if_stage__DOT__sram_wdata),32);
    bufp->fullCData(oldp+164,(vlSelf->rv32e__DOT__if_stage__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+165,(vlSelf->rv32e__DOT__if_stage__DOT__sram_wvalid));
    bufp->fullCData(oldp+166,(0U),2);
    bufp->fullBit(oldp+167,(vlSelf->rv32e__DOT__if_stage__DOT__sram_bready));
    bufp->fullIData(oldp+168,(0x20U),32);
    bufp->fullIData(oldp+169,(3U),32);
    bufp->fullCData(oldp+170,(2U),2);
}
