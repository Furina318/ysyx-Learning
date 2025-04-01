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
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->pushNamePrefix("rv32e ");
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBit(c+3,"if_ready", false,-1);
    tracep->declBit(c+4,"wb_valid", false,-1);
    tracep->declBit(c+5,"if_valid", false,-1);
    tracep->declBit(c+6,"id_ready", false,-1);
    tracep->declBus(c+7,"opcode", false,-1, 6,0);
    tracep->declBus(c+8,"rs1", false,-1, 4,0);
    tracep->declBus(c+9,"rs2", false,-1, 4,0);
    tracep->declBus(c+10,"rd", false,-1, 4,0);
    tracep->declBus(c+11,"imm", false,-1, 31,0);
    tracep->declBus(c+12,"func3", false,-1, 2,0);
    tracep->declBus(c+13,"func7", false,-1, 6,0);
    tracep->declBit(c+14,"RegWrite", false,-1);
    tracep->declBit(c+15,"MemWrite", false,-1);
    tracep->declBit(c+16,"MemRead", false,-1);
    tracep->declBus(c+17,"alu_op", false,-1, 3,0);
    tracep->declBus(c+18,"MemLen", false,-1, 1,0);
    tracep->declBit(c+19,"id_valid", false,-1);
    tracep->declBit(c+20,"ex_ready", false,-1);
    tracep->declBit(c+21,"reg_valid", false,-1);
    tracep->declBit(c+22,"reg_ready", false,-1);
    tracep->declBus(c+23,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+24,"rs2_val", false,-1, 31,0);
    tracep->declBus(c+25,"alu_result", false,-1, 31,0);
    tracep->declBit(c+26,"alu_zero", false,-1);
    tracep->declBit(c+27,"alu_less", false,-1);
    tracep->declBit(c+28,"ex_valid", false,-1);
    tracep->declBit(c+29,"mem_ready", false,-1);
    tracep->declBus(c+30,"data_out", false,-1, 31,0);
    tracep->declBit(c+31,"mem_valid", false,-1);
    tracep->declBit(c+32,"wb_ready", false,-1);
    tracep->declBus(c+33,"wb_data", false,-1, 31,0);
    tracep->declBus(c+34,"jal_target", false,-1, 31,0);
    tracep->declBus(c+35,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+36,"is_jal", false,-1);
    tracep->declBit(c+37,"is_jalr", false,-1);
    tracep->declBit(c+38,"take_branch", false,-1);
    tracep->declBus(c+39,"branch_target", false,-1, 31,0);
    tracep->declBus(c+40,"rd_ex", false,-1, 4,0);
    tracep->declBus(c+41,"rd_mem", false,-1, 4,0);
    tracep->declBus(c+42,"rd_wb", false,-1, 4,0);
    tracep->declBit(c+43,"RegWrite_ex", false,-1);
    tracep->declBit(c+44,"RegWrite_mem", false,-1);
    tracep->declBit(c+45,"RegWrite_wb", false,-1);
    tracep->declBit(c+46,"wb_MemRead", false,-1);
    tracep->declBit(c+47,"wb_MemWrite", false,-1);
    tracep->declBus(c+48,"wb_MemLen", false,-1, 1,0);
    tracep->declBus(c+49,"wb_addr", false,-1, 31,0);
    tracep->declBus(c+50,"wb_data_in", false,-1, 31,0);
    tracep->pushNamePrefix("ex_stage ");
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBit(c+21,"reg_valid", false,-1);
    tracep->declBit(c+20,"ex_ready", false,-1);
    tracep->declBus(c+7,"opcode", false,-1, 6,0);
    tracep->declBus(c+23,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+24,"rs2_val", false,-1, 31,0);
    tracep->declBus(c+11,"imm", false,-1, 31,0);
    tracep->declBus(c+17,"alu_op", false,-1, 3,0);
    tracep->declBus(c+10,"id_rd", false,-1, 4,0);
    tracep->declBit(c+14,"id_RegWrite", false,-1);
    tracep->declBit(c+29,"mem_ready", false,-1);
    tracep->declBit(c+28,"ex_valid", false,-1);
    tracep->declBus(c+25,"alu_result", false,-1, 31,0);
    tracep->declBit(c+26,"alu_zero", false,-1);
    tracep->declBit(c+27,"alu_less", false,-1);
    tracep->declBus(c+40,"rd_ex", false,-1, 4,0);
    tracep->declBit(c+43,"RegWrite_ex", false,-1);
    tracep->declBus(c+51,"state", false,-1, 31,0);
    tracep->declBus(c+52,"next_state", false,-1, 31,0);
    tracep->declBus(c+117,"DELAY_CYCLES", false,-1, 31,0);
    tracep->declBus(c+53,"delay", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_stage ");
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBit(c+22,"reg_ready", false,-1);
    tracep->declBit(c+5,"if_valid", false,-1);
    tracep->declBit(c+6,"id_ready", false,-1);
    tracep->declBit(c+19,"id_valid", false,-1);
    tracep->declBus(c+7,"opcode", false,-1, 6,0);
    tracep->declBus(c+8,"rs1", false,-1, 4,0);
    tracep->declBus(c+9,"rs2", false,-1, 4,0);
    tracep->declBus(c+10,"rd", false,-1, 4,0);
    tracep->declBus(c+11,"imm", false,-1, 31,0);
    tracep->declBus(c+12,"func3", false,-1, 2,0);
    tracep->declBus(c+13,"func7", false,-1, 6,0);
    tracep->declBit(c+14,"RegWrite", false,-1);
    tracep->declBit(c+15,"MemWrite", false,-1);
    tracep->declBit(c+16,"MemRead", false,-1);
    tracep->declBus(c+17,"alu_op", false,-1, 3,0);
    tracep->declBus(c+18,"MemLen", false,-1, 1,0);
    tracep->declBus(c+54,"state", false,-1, 31,0);
    tracep->declBus(c+55,"next_state", false,-1, 31,0);
    tracep->declBus(c+56,"instr_reg", false,-1, 31,0);
    tracep->declBus(c+57,"delay", false,-1, 1,0);
    tracep->declBus(c+117,"DELAY_CYCLES", false,-1, 31,0);
    tracep->declBus(c+58,"immI", false,-1, 31,0);
    tracep->declBus(c+59,"immU", false,-1, 31,0);
    tracep->declBus(c+60,"immS", false,-1, 31,0);
    tracep->declBus(c+61,"immB", false,-1, 31,0);
    tracep->declBus(c+62,"immJ", false,-1, 31,0);
    tracep->declBus(c+118,"immR", false,-1, 31,0);
    tracep->declBus(c+63,"get_opcode", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_stage ");
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBus(c+39,"branch_target", false,-1, 31,0);
    tracep->declBit(c+64,"pc_src", false,-1);
    tracep->declBit(c+6,"id_ready", false,-1);
    tracep->declBit(c+4,"wb_valid", false,-1);
    tracep->declBit(c+3,"if_ready", false,-1);
    tracep->declBit(c+5,"if_valid", false,-1);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBus(c+65,"state", false,-1, 31,0);
    tracep->declBus(c+66,"next_state", false,-1, 31,0);
    tracep->declBus(c+117,"DELAY_CYCLES", false,-1, 31,0);
    tracep->declBus(c+67,"delay", false,-1, 1,0);
    tracep->declBit(c+68,"ren", false,-1);
    tracep->declBus(c+112,"get_instr", false,-1, 31,0);
    tracep->pushNamePrefix("ifu_sram_inst ");
    tracep->declBus(c+119,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+119,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+68,"ren", false,-1);
    tracep->declBus(c+1,"raddr", false,-1, 31,0);
    tracep->declBus(c+112,"rdata", false,-1, 31,0);
    tracep->declBit(c+113,"read_pending", false,-1);
    tracep->declBus(c+114,"raddr_reg", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem_stage ");
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBit(c+28,"ex_valid", false,-1);
    tracep->declBit(c+29,"mem_ready", false,-1);
    tracep->declBit(c+32,"wb_ready", false,-1);
    tracep->declBit(c+31,"mem_valid", false,-1);
    tracep->declBit(c+46,"MemRead", false,-1);
    tracep->declBit(c+47,"MemWrite", false,-1);
    tracep->declBus(c+40,"ex_rd", false,-1, 4,0);
    tracep->declBit(c+43,"ex_RegWrite", false,-1);
    tracep->declBus(c+49,"addr", false,-1, 31,0);
    tracep->declBus(c+50,"data_in", false,-1, 31,0);
    tracep->declBus(c+48,"MemLen", false,-1, 1,0);
    tracep->declBus(c+30,"data_out", false,-1, 31,0);
    tracep->declBus(c+41,"rd_mem", false,-1, 4,0);
    tracep->declBit(c+44,"RegWrite_mem", false,-1);
    tracep->declBus(c+69,"state", false,-1, 31,0);
    tracep->declBus(c+70,"next_state", false,-1, 31,0);
    tracep->declBus(c+71,"read_data", false,-1, 31,0);
    tracep->declBus(c+72,"delay", false,-1, 1,0);
    tracep->declBus(c+117,"DELAY_CYCLES", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBus(c+8,"rs1", false,-1, 4,0);
    tracep->declBus(c+9,"rs2", false,-1, 4,0);
    tracep->declBus(c+42,"rd", false,-1, 4,0);
    tracep->declBit(c+45,"we", false,-1);
    tracep->declBus(c+33,"wd", false,-1, 31,0);
    tracep->declBit(c+19,"id_valid", false,-1);
    tracep->declBit(c+20,"ex_ready", false,-1);
    tracep->declBit(c+22,"reg_ready", false,-1);
    tracep->declBit(c+21,"reg_valid", false,-1);
    tracep->declBus(c+23,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+24,"rs2_val", false,-1, 31,0);
    tracep->declBus(c+73,"state", false,-1, 31,0);
    tracep->declBus(c+74,"next_state", false,-1, 31,0);
    tracep->declBus(c+75,"delay", false,-1, 1,0);
    tracep->declBus(c+117,"DELAY_CYCLES", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+76+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+108,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_stage ");
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+11,"imm", false,-1, 31,0);
    tracep->declBus(c+23,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+25,"alu_result", false,-1, 31,0);
    tracep->declBus(c+30,"data_out", false,-1, 31,0);
    tracep->declBus(c+7,"opcode", false,-1, 6,0);
    tracep->declBus(c+12,"func3", false,-1, 2,0);
    tracep->declBus(c+41,"mem_rd", false,-1, 4,0);
    tracep->declBit(c+44,"mem_RegWrite", false,-1);
    tracep->declBit(c+16,"id_MemRead", false,-1);
    tracep->declBit(c+15,"id_MemWrite", false,-1);
    tracep->declBus(c+18,"id_MemLen", false,-1, 1,0);
    tracep->declBus(c+25,"id_addr", false,-1, 31,0);
    tracep->declBus(c+24,"id_data_in", false,-1, 31,0);
    tracep->declBit(c+26,"alu_zero", false,-1);
    tracep->declBit(c+27,"alu_less", false,-1);
    tracep->declBit(c+31,"mem_valid", false,-1);
    tracep->declBit(c+3,"if_ready", false,-1);
    tracep->declBit(c+32,"wb_ready", false,-1);
    tracep->declBit(c+4,"wb_valid", false,-1);
    tracep->declBus(c+34,"jal_target", false,-1, 31,0);
    tracep->declBus(c+35,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+36,"is_jal", false,-1);
    tracep->declBit(c+37,"is_jalr", false,-1);
    tracep->declBit(c+38,"take_branch", false,-1);
    tracep->declBus(c+33,"wb_data", false,-1, 31,0);
    tracep->declBus(c+42,"rd_wb", false,-1, 4,0);
    tracep->declBit(c+45,"RegWrite_wb", false,-1);
    tracep->declBit(c+46,"wb_MemRead", false,-1);
    tracep->declBit(c+47,"wb_MemWrite", false,-1);
    tracep->declBus(c+48,"wb_MemLen", false,-1, 1,0);
    tracep->declBus(c+49,"wb_addr", false,-1, 31,0);
    tracep->declBus(c+50,"wb_data_in", false,-1, 31,0);
    tracep->declBus(c+109,"state", false,-1, 31,0);
    tracep->declBus(c+110,"next_state", false,-1, 31,0);
    tracep->declBus(c+111,"delay", false,-1, 1,0);
    tracep->declBus(c+117,"DELAY_CYCLES", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->rv32e__DOT__pc),32);
    bufp->fullIData(oldp+2,(vlSelf->rv32e__DOT__instr),32);
    bufp->fullBit(oldp+3,(vlSelf->rv32e__DOT__if_ready));
    bufp->fullBit(oldp+4,(vlSelf->rv32e__DOT__wb_valid));
    bufp->fullBit(oldp+5,(vlSelf->rv32e__DOT__if_valid));
    bufp->fullBit(oldp+6,(vlSelf->rv32e__DOT__id_ready));
    bufp->fullCData(oldp+7,(vlSelf->rv32e__DOT__opcode),7);
    bufp->fullCData(oldp+8,(vlSelf->rv32e__DOT__rs1),5);
    bufp->fullCData(oldp+9,(vlSelf->rv32e__DOT__rs2),5);
    bufp->fullCData(oldp+10,(vlSelf->rv32e__DOT__rd),5);
    bufp->fullIData(oldp+11,(vlSelf->rv32e__DOT__imm),32);
    bufp->fullCData(oldp+12,(vlSelf->rv32e__DOT__func3),3);
    bufp->fullCData(oldp+13,(vlSelf->rv32e__DOT__func7),7);
    bufp->fullBit(oldp+14,(vlSelf->rv32e__DOT__RegWrite));
    bufp->fullBit(oldp+15,(vlSelf->rv32e__DOT__MemWrite));
    bufp->fullBit(oldp+16,(vlSelf->rv32e__DOT__MemRead));
    bufp->fullCData(oldp+17,(vlSelf->rv32e__DOT__alu_op),4);
    bufp->fullCData(oldp+18,(vlSelf->rv32e__DOT__MemLen),2);
    bufp->fullBit(oldp+19,(vlSelf->rv32e__DOT__id_valid));
    bufp->fullBit(oldp+20,(vlSelf->rv32e__DOT__ex_ready));
    bufp->fullBit(oldp+21,(vlSelf->rv32e__DOT__reg_valid));
    bufp->fullBit(oldp+22,(vlSelf->rv32e__DOT__reg_ready));
    bufp->fullIData(oldp+23,(vlSelf->rv32e__DOT__rs1_val),32);
    bufp->fullIData(oldp+24,(vlSelf->rv32e__DOT__rs2_val),32);
    bufp->fullIData(oldp+25,(vlSelf->rv32e__DOT__alu_result),32);
    bufp->fullBit(oldp+26,(vlSelf->rv32e__DOT__alu_zero));
    bufp->fullBit(oldp+27,(vlSelf->rv32e__DOT__alu_less));
    bufp->fullBit(oldp+28,(vlSelf->rv32e__DOT__ex_valid));
    bufp->fullBit(oldp+29,(vlSelf->rv32e__DOT__mem_ready));
    bufp->fullIData(oldp+30,(vlSelf->rv32e__DOT__data_out),32);
    bufp->fullBit(oldp+31,(vlSelf->rv32e__DOT__mem_valid));
    bufp->fullBit(oldp+32,(vlSelf->rv32e__DOT__wb_ready));
    bufp->fullIData(oldp+33,(vlSelf->rv32e__DOT__wb_data),32);
    bufp->fullIData(oldp+34,(vlSelf->rv32e__DOT__jal_target),32);
    bufp->fullIData(oldp+35,(vlSelf->rv32e__DOT__jalr_target),32);
    bufp->fullBit(oldp+36,(vlSelf->rv32e__DOT__is_jal));
    bufp->fullBit(oldp+37,(vlSelf->rv32e__DOT__is_jalr));
    bufp->fullBit(oldp+38,(vlSelf->rv32e__DOT__take_branch));
    bufp->fullIData(oldp+39,(((IData)(vlSelf->rv32e__DOT__is_jalr)
                               ? vlSelf->rv32e__DOT__jalr_target
                               : vlSelf->rv32e__DOT__jal_target)),32);
    bufp->fullCData(oldp+40,(vlSelf->rv32e__DOT__rd_ex),5);
    bufp->fullCData(oldp+41,(vlSelf->rv32e__DOT__rd_mem),5);
    bufp->fullCData(oldp+42,(vlSelf->rv32e__DOT__rd_wb),5);
    bufp->fullBit(oldp+43,(vlSelf->rv32e__DOT__RegWrite_ex));
    bufp->fullBit(oldp+44,(vlSelf->rv32e__DOT__RegWrite_mem));
    bufp->fullBit(oldp+45,(vlSelf->rv32e__DOT__RegWrite_wb));
    bufp->fullBit(oldp+46,(vlSelf->rv32e__DOT__wb_MemRead));
    bufp->fullBit(oldp+47,(vlSelf->rv32e__DOT__wb_MemWrite));
    bufp->fullCData(oldp+48,(vlSelf->rv32e__DOT__wb_MemLen),2);
    bufp->fullIData(oldp+49,(vlSelf->rv32e__DOT__wb_addr),32);
    bufp->fullIData(oldp+50,(vlSelf->rv32e__DOT__wb_data_in),32);
    bufp->fullIData(oldp+51,(vlSelf->rv32e__DOT__ex_stage__DOT__state),32);
    bufp->fullIData(oldp+52,(vlSelf->rv32e__DOT__ex_stage__DOT__next_state),32);
    bufp->fullCData(oldp+53,(vlSelf->rv32e__DOT__ex_stage__DOT__delay),2);
    bufp->fullIData(oldp+54,(vlSelf->rv32e__DOT__id_stage__DOT__state),32);
    bufp->fullIData(oldp+55,(vlSelf->rv32e__DOT__id_stage__DOT__next_state),32);
    bufp->fullIData(oldp+56,(vlSelf->rv32e__DOT__id_stage__DOT__instr_reg),32);
    bufp->fullCData(oldp+57,(vlSelf->rv32e__DOT__id_stage__DOT__delay),2);
    bufp->fullIData(oldp+58,(vlSelf->rv32e__DOT__id_stage__DOT__immI),32);
    bufp->fullIData(oldp+59,((0xfffff000U & vlSelf->rv32e__DOT__id_stage__DOT__instr_reg)),32);
    bufp->fullIData(oldp+60,((((- (IData)((vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+61,((((- (IData)((vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
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
    bufp->fullIData(oldp+62,((((- (IData)((vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->rv32e__DOT__id_stage__DOT__instr_reg) 
                                            | ((0x800U 
                                                & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                     >> 0x14U)))))),32);
    bufp->fullCData(oldp+63,(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode),5);
    bufp->fullBit(oldp+64,(((IData)(vlSelf->rv32e__DOT__is_jal) 
                            | ((IData)(vlSelf->rv32e__DOT__is_jalr) 
                               | (IData)(vlSelf->rv32e__DOT__take_branch)))));
    bufp->fullIData(oldp+65,(vlSelf->rv32e__DOT__if_stage__DOT__state),32);
    bufp->fullIData(oldp+66,(vlSelf->rv32e__DOT__if_stage__DOT__next_state),32);
    bufp->fullCData(oldp+67,(vlSelf->rv32e__DOT__if_stage__DOT__delay),2);
    bufp->fullBit(oldp+68,(vlSelf->rv32e__DOT__if_stage__DOT__ren));
    bufp->fullIData(oldp+69,(vlSelf->rv32e__DOT__mem_stage__DOT__state),32);
    bufp->fullIData(oldp+70,(vlSelf->rv32e__DOT__mem_stage__DOT__next_state),32);
    bufp->fullIData(oldp+71,(vlSelf->rv32e__DOT__mem_stage__DOT__read_data),32);
    bufp->fullCData(oldp+72,(vlSelf->rv32e__DOT__mem_stage__DOT__delay),2);
    bufp->fullIData(oldp+73,(vlSelf->rv32e__DOT__regfile__DOT__state),32);
    bufp->fullIData(oldp+74,(vlSelf->rv32e__DOT__regfile__DOT__next_state),32);
    bufp->fullCData(oldp+75,(vlSelf->rv32e__DOT__regfile__DOT__delay),2);
    bufp->fullIData(oldp+76,(vlSelf->rv32e__DOT__regfile__DOT__regs[0]),32);
    bufp->fullIData(oldp+77,(vlSelf->rv32e__DOT__regfile__DOT__regs[1]),32);
    bufp->fullIData(oldp+78,(vlSelf->rv32e__DOT__regfile__DOT__regs[2]),32);
    bufp->fullIData(oldp+79,(vlSelf->rv32e__DOT__regfile__DOT__regs[3]),32);
    bufp->fullIData(oldp+80,(vlSelf->rv32e__DOT__regfile__DOT__regs[4]),32);
    bufp->fullIData(oldp+81,(vlSelf->rv32e__DOT__regfile__DOT__regs[5]),32);
    bufp->fullIData(oldp+82,(vlSelf->rv32e__DOT__regfile__DOT__regs[6]),32);
    bufp->fullIData(oldp+83,(vlSelf->rv32e__DOT__regfile__DOT__regs[7]),32);
    bufp->fullIData(oldp+84,(vlSelf->rv32e__DOT__regfile__DOT__regs[8]),32);
    bufp->fullIData(oldp+85,(vlSelf->rv32e__DOT__regfile__DOT__regs[9]),32);
    bufp->fullIData(oldp+86,(vlSelf->rv32e__DOT__regfile__DOT__regs[10]),32);
    bufp->fullIData(oldp+87,(vlSelf->rv32e__DOT__regfile__DOT__regs[11]),32);
    bufp->fullIData(oldp+88,(vlSelf->rv32e__DOT__regfile__DOT__regs[12]),32);
    bufp->fullIData(oldp+89,(vlSelf->rv32e__DOT__regfile__DOT__regs[13]),32);
    bufp->fullIData(oldp+90,(vlSelf->rv32e__DOT__regfile__DOT__regs[14]),32);
    bufp->fullIData(oldp+91,(vlSelf->rv32e__DOT__regfile__DOT__regs[15]),32);
    bufp->fullIData(oldp+92,(vlSelf->rv32e__DOT__regfile__DOT__regs[16]),32);
    bufp->fullIData(oldp+93,(vlSelf->rv32e__DOT__regfile__DOT__regs[17]),32);
    bufp->fullIData(oldp+94,(vlSelf->rv32e__DOT__regfile__DOT__regs[18]),32);
    bufp->fullIData(oldp+95,(vlSelf->rv32e__DOT__regfile__DOT__regs[19]),32);
    bufp->fullIData(oldp+96,(vlSelf->rv32e__DOT__regfile__DOT__regs[20]),32);
    bufp->fullIData(oldp+97,(vlSelf->rv32e__DOT__regfile__DOT__regs[21]),32);
    bufp->fullIData(oldp+98,(vlSelf->rv32e__DOT__regfile__DOT__regs[22]),32);
    bufp->fullIData(oldp+99,(vlSelf->rv32e__DOT__regfile__DOT__regs[23]),32);
    bufp->fullIData(oldp+100,(vlSelf->rv32e__DOT__regfile__DOT__regs[24]),32);
    bufp->fullIData(oldp+101,(vlSelf->rv32e__DOT__regfile__DOT__regs[25]),32);
    bufp->fullIData(oldp+102,(vlSelf->rv32e__DOT__regfile__DOT__regs[26]),32);
    bufp->fullIData(oldp+103,(vlSelf->rv32e__DOT__regfile__DOT__regs[27]),32);
    bufp->fullIData(oldp+104,(vlSelf->rv32e__DOT__regfile__DOT__regs[28]),32);
    bufp->fullIData(oldp+105,(vlSelf->rv32e__DOT__regfile__DOT__regs[29]),32);
    bufp->fullIData(oldp+106,(vlSelf->rv32e__DOT__regfile__DOT__regs[30]),32);
    bufp->fullIData(oldp+107,(vlSelf->rv32e__DOT__regfile__DOT__regs[31]),32);
    bufp->fullIData(oldp+108,(vlSelf->rv32e__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+109,(vlSelf->rv32e__DOT__wb_stage__DOT__state),32);
    bufp->fullIData(oldp+110,(vlSelf->rv32e__DOT__wb_stage__DOT__next_state),32);
    bufp->fullCData(oldp+111,(vlSelf->rv32e__DOT__wb_stage__DOT__delay),2);
    bufp->fullIData(oldp+112,(vlSelf->rv32e__DOT__if_stage__DOT__get_instr),32);
    bufp->fullBit(oldp+113,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__read_pending));
    bufp->fullIData(oldp+114,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__raddr_reg),32);
    bufp->fullBit(oldp+115,(vlSelf->clk));
    bufp->fullBit(oldp+116,(vlSelf->reset));
    bufp->fullIData(oldp+117,(1U),32);
    bufp->fullIData(oldp+118,(0U),32);
    bufp->fullIData(oldp+119,(0x20U),32);
}
