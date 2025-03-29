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
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"reset", false,-1);
    tracep->pushNamePrefix("rv32e ");
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"reset", false,-1);
    tracep->declBus(c+33,"pc", false,-1, 31,0);
    tracep->declBus(c+34,"instr", false,-1, 31,0);
    tracep->declBit(c+35,"if_ready", false,-1);
    tracep->declBit(c+36,"wb_valid", false,-1);
    tracep->declBit(c+37,"if_valid", false,-1);
    tracep->declBit(c+38,"id_ready", false,-1);
    tracep->declBus(c+39,"opcode", false,-1, 6,0);
    tracep->declBus(c+40,"rs1", false,-1, 4,0);
    tracep->declBus(c+41,"rs2", false,-1, 4,0);
    tracep->declBus(c+42,"rd", false,-1, 4,0);
    tracep->declBus(c+43,"imm", false,-1, 31,0);
    tracep->declBus(c+44,"func3", false,-1, 2,0);
    tracep->declBus(c+45,"func7", false,-1, 6,0);
    tracep->declBit(c+46,"RegWrite", false,-1);
    tracep->declBit(c+47,"MemWrite", false,-1);
    tracep->declBit(c+48,"MemRead", false,-1);
    tracep->declBus(c+49,"alu_op", false,-1, 3,0);
    tracep->declBus(c+50,"MemLen", false,-1, 1,0);
    tracep->declBit(c+51,"id_valid", false,-1);
    tracep->declBit(c+52,"ex_ready", false,-1);
    tracep->declBus(c+86,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+87,"rs2_val", false,-1, 31,0);
    tracep->declBus(c+53,"alu_result", false,-1, 31,0);
    tracep->declBit(c+54,"alu_zero", false,-1);
    tracep->declBit(c+55,"alu_less", false,-1);
    tracep->declBit(c+56,"ex_valid", false,-1);
    tracep->declBit(c+57,"mem_ready", false,-1);
    tracep->declBus(c+58,"data_out", false,-1, 31,0);
    tracep->declBit(c+59,"mem_valid", false,-1);
    tracep->declBit(c+60,"wb_ready", false,-1);
    tracep->declBus(c+61,"wb_data", false,-1, 31,0);
    tracep->declBus(c+62,"jal_target", false,-1, 31,0);
    tracep->declBus(c+63,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+64,"is_jal", false,-1);
    tracep->declBit(c+65,"is_jalr", false,-1);
    tracep->declBit(c+66,"take_branch", false,-1);
    tracep->declBus(c+91,"branch_target", false,-1, 31,0);
    tracep->pushNamePrefix("ex_stage ");
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"reset", false,-1);
    tracep->declBit(c+51,"id_valid", false,-1);
    tracep->declBit(c+52,"ex_ready", false,-1);
    tracep->declBus(c+39,"opcode", false,-1, 6,0);
    tracep->declBus(c+86,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+87,"rs2_val", false,-1, 31,0);
    tracep->declBus(c+43,"imm", false,-1, 31,0);
    tracep->declBus(c+49,"alu_op", false,-1, 3,0);
    tracep->declBit(c+57,"mem_ready", false,-1);
    tracep->declBit(c+56,"ex_valid", false,-1);
    tracep->declBus(c+53,"alu_result", false,-1, 31,0);
    tracep->declBit(c+54,"alu_zero", false,-1);
    tracep->declBit(c+55,"alu_less", false,-1);
    tracep->declBus(c+67,"state", false,-1, 31,0);
    tracep->declBus(c+68,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_stage ");
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"reset", false,-1);
    tracep->declBus(c+34,"instr", false,-1, 31,0);
    tracep->declBit(c+52,"ex_ready", false,-1);
    tracep->declBit(c+37,"if_valid", false,-1);
    tracep->declBit(c+38,"id_ready", false,-1);
    tracep->declBit(c+51,"id_valid", false,-1);
    tracep->declBus(c+39,"opcode", false,-1, 6,0);
    tracep->declBus(c+40,"rs1", false,-1, 4,0);
    tracep->declBus(c+41,"rs2", false,-1, 4,0);
    tracep->declBus(c+42,"rd", false,-1, 4,0);
    tracep->declBus(c+43,"imm", false,-1, 31,0);
    tracep->declBus(c+44,"func3", false,-1, 2,0);
    tracep->declBus(c+45,"func7", false,-1, 6,0);
    tracep->declBit(c+46,"RegWrite", false,-1);
    tracep->declBit(c+47,"MemWrite", false,-1);
    tracep->declBit(c+48,"MemRead", false,-1);
    tracep->declBus(c+49,"alu_op", false,-1, 3,0);
    tracep->declBus(c+50,"MemLen", false,-1, 1,0);
    tracep->declBus(c+69,"state", false,-1, 31,0);
    tracep->declBus(c+70,"next_state", false,-1, 31,0);
    tracep->declBus(c+71,"instr_reg", false,-1, 31,0);
    tracep->declBus(c+72,"immI", false,-1, 31,0);
    tracep->declBus(c+73,"immU", false,-1, 31,0);
    tracep->declBus(c+74,"immS", false,-1, 31,0);
    tracep->declBus(c+75,"immB", false,-1, 31,0);
    tracep->declBus(c+76,"immJ", false,-1, 31,0);
    tracep->declBus(c+92,"immR", false,-1, 31,0);
    tracep->declBus(c+77,"get_opcode", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_stage ");
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"reset", false,-1);
    tracep->declBus(c+91,"branch_target", false,-1, 31,0);
    tracep->declBit(c+78,"pc_src", false,-1);
    tracep->declBit(c+38,"id_ready", false,-1);
    tracep->declBit(c+36,"wb_valid", false,-1);
    tracep->declBit(c+35,"if_ready", false,-1);
    tracep->declBit(c+37,"if_valid", false,-1);
    tracep->declBus(c+33,"pc", false,-1, 31,0);
    tracep->declBus(c+34,"instr", false,-1, 31,0);
    tracep->declBus(c+79,"state", false,-1, 31,0);
    tracep->declBus(c+80,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_stage ");
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"reset", false,-1);
    tracep->declBit(c+56,"ex_valid", false,-1);
    tracep->declBit(c+57,"mem_ready", false,-1);
    tracep->declBit(c+60,"wb_ready", false,-1);
    tracep->declBit(c+59,"mem_valid", false,-1);
    tracep->declBit(c+48,"MemRead", false,-1);
    tracep->declBit(c+47,"MemWrite", false,-1);
    tracep->declBus(c+88,"addr", false,-1, 31,0);
    tracep->declBus(c+87,"data_in", false,-1, 31,0);
    tracep->declBus(c+50,"MemLen", false,-1, 1,0);
    tracep->declBus(c+58,"data_out", false,-1, 31,0);
    tracep->declBus(c+81,"state", false,-1, 31,0);
    tracep->declBus(c+82,"next_state", false,-1, 31,0);
    tracep->declBus(c+83,"read_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBus(c+40,"rs1", false,-1, 4,0);
    tracep->declBus(c+41,"rs2", false,-1, 4,0);
    tracep->declBus(c+42,"rd", false,-1, 4,0);
    tracep->declBit(c+46,"we", false,-1);
    tracep->declBus(c+61,"wd", false,-1, 31,0);
    tracep->declBus(c+86,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+87,"rs2_val", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_stage ");
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"reset", false,-1);
    tracep->declBus(c+33,"pc", false,-1, 31,0);
    tracep->declBus(c+43,"imm", false,-1, 31,0);
    tracep->declBus(c+86,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+53,"alu_result", false,-1, 31,0);
    tracep->declBus(c+58,"data_out", false,-1, 31,0);
    tracep->declBus(c+39,"opcode", false,-1, 6,0);
    tracep->declBus(c+44,"func3", false,-1, 2,0);
    tracep->declBit(c+54,"alu_zero", false,-1);
    tracep->declBit(c+55,"alu_less", false,-1);
    tracep->declBit(c+59,"mem_valid", false,-1);
    tracep->declBit(c+35,"if_ready", false,-1);
    tracep->declBit(c+60,"wb_ready", false,-1);
    tracep->declBit(c+36,"wb_valid", false,-1);
    tracep->declBus(c+62,"jal_target", false,-1, 31,0);
    tracep->declBus(c+63,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+64,"is_jal", false,-1);
    tracep->declBit(c+65,"is_jalr", false,-1);
    tracep->declBit(c+66,"take_branch", false,-1);
    tracep->declBus(c+61,"wb_data", false,-1, 31,0);
    tracep->declBus(c+84,"state", false,-1, 31,0);
    tracep->declBus(c+85,"next_state", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->rv32e__DOT__regfile__DOT__regs[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->rv32e__DOT__regfile__DOT__regs[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->rv32e__DOT__regfile__DOT__regs[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->rv32e__DOT__regfile__DOT__regs[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->rv32e__DOT__regfile__DOT__regs[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->rv32e__DOT__regfile__DOT__regs[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->rv32e__DOT__regfile__DOT__regs[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->rv32e__DOT__regfile__DOT__regs[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->rv32e__DOT__regfile__DOT__regs[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->rv32e__DOT__regfile__DOT__regs[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->rv32e__DOT__regfile__DOT__regs[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->rv32e__DOT__regfile__DOT__regs[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->rv32e__DOT__regfile__DOT__regs[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->rv32e__DOT__regfile__DOT__regs[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->rv32e__DOT__regfile__DOT__regs[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->rv32e__DOT__regfile__DOT__regs[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->rv32e__DOT__regfile__DOT__regs[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->rv32e__DOT__regfile__DOT__regs[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->rv32e__DOT__regfile__DOT__regs[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->rv32e__DOT__regfile__DOT__regs[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->rv32e__DOT__regfile__DOT__regs[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->rv32e__DOT__regfile__DOT__regs[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->rv32e__DOT__regfile__DOT__regs[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->rv32e__DOT__regfile__DOT__regs[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->rv32e__DOT__regfile__DOT__regs[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->rv32e__DOT__regfile__DOT__regs[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->rv32e__DOT__regfile__DOT__regs[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->rv32e__DOT__regfile__DOT__regs[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->rv32e__DOT__regfile__DOT__regs[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->rv32e__DOT__regfile__DOT__regs[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->rv32e__DOT__regfile__DOT__regs[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->rv32e__DOT__regfile__DOT__regs[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->rv32e__DOT__pc),32);
    bufp->fullIData(oldp+34,(vlSelf->rv32e__DOT__instr),32);
    bufp->fullBit(oldp+35,(vlSelf->rv32e__DOT__if_ready));
    bufp->fullBit(oldp+36,(vlSelf->rv32e__DOT__wb_valid));
    bufp->fullBit(oldp+37,(vlSelf->rv32e__DOT__if_valid));
    bufp->fullBit(oldp+38,(vlSelf->rv32e__DOT__id_ready));
    bufp->fullCData(oldp+39,(vlSelf->rv32e__DOT__opcode),7);
    bufp->fullCData(oldp+40,(vlSelf->rv32e__DOT__rs1),5);
    bufp->fullCData(oldp+41,(vlSelf->rv32e__DOT__rs2),5);
    bufp->fullCData(oldp+42,(vlSelf->rv32e__DOT__rd),5);
    bufp->fullIData(oldp+43,(vlSelf->rv32e__DOT__imm),32);
    bufp->fullCData(oldp+44,(vlSelf->rv32e__DOT__func3),3);
    bufp->fullCData(oldp+45,(vlSelf->rv32e__DOT__func7),7);
    bufp->fullBit(oldp+46,(vlSelf->rv32e__DOT__RegWrite));
    bufp->fullBit(oldp+47,(vlSelf->rv32e__DOT__MemWrite));
    bufp->fullBit(oldp+48,(vlSelf->rv32e__DOT__MemRead));
    bufp->fullCData(oldp+49,(vlSelf->rv32e__DOT__alu_op),4);
    bufp->fullCData(oldp+50,(vlSelf->rv32e__DOT__MemLen),2);
    bufp->fullBit(oldp+51,(vlSelf->rv32e__DOT__id_valid));
    bufp->fullBit(oldp+52,(vlSelf->rv32e__DOT__ex_ready));
    bufp->fullIData(oldp+53,(vlSelf->rv32e__DOT__alu_result),32);
    bufp->fullBit(oldp+54,(vlSelf->rv32e__DOT__alu_zero));
    bufp->fullBit(oldp+55,(vlSelf->rv32e__DOT__alu_less));
    bufp->fullBit(oldp+56,(vlSelf->rv32e__DOT__ex_valid));
    bufp->fullBit(oldp+57,(vlSelf->rv32e__DOT__mem_ready));
    bufp->fullIData(oldp+58,(vlSelf->rv32e__DOT__data_out),32);
    bufp->fullBit(oldp+59,(vlSelf->rv32e__DOT__mem_valid));
    bufp->fullBit(oldp+60,(vlSelf->rv32e__DOT__wb_ready));
    bufp->fullIData(oldp+61,(vlSelf->rv32e__DOT__wb_data),32);
    bufp->fullIData(oldp+62,(vlSelf->rv32e__DOT__jal_target),32);
    bufp->fullIData(oldp+63,(vlSelf->rv32e__DOT__jalr_target),32);
    bufp->fullBit(oldp+64,(vlSelf->rv32e__DOT__is_jal));
    bufp->fullBit(oldp+65,(vlSelf->rv32e__DOT__is_jalr));
    bufp->fullBit(oldp+66,(vlSelf->rv32e__DOT__take_branch));
    bufp->fullIData(oldp+67,(vlSelf->rv32e__DOT__ex_stage__DOT__state),32);
    bufp->fullIData(oldp+68,(vlSelf->rv32e__DOT__ex_stage__DOT__next_state),32);
    bufp->fullIData(oldp+69,(vlSelf->rv32e__DOT__id_stage__DOT__state),32);
    bufp->fullIData(oldp+70,(vlSelf->rv32e__DOT__id_stage__DOT__next_state),32);
    bufp->fullIData(oldp+71,(vlSelf->rv32e__DOT__id_stage__DOT__instr_reg),32);
    bufp->fullIData(oldp+72,(vlSelf->rv32e__DOT__id_stage__DOT__immI),32);
    bufp->fullIData(oldp+73,((0xfffff000U & vlSelf->rv32e__DOT__id_stage__DOT__instr_reg)),32);
    bufp->fullIData(oldp+74,((((- (IData)((vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+75,((((- (IData)((vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
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
    bufp->fullIData(oldp+76,((((- (IData)((vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->rv32e__DOT__id_stage__DOT__instr_reg) 
                                            | ((0x800U 
                                                & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                     >> 0x14U)))))),32);
    bufp->fullCData(oldp+77,(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode),5);
    bufp->fullBit(oldp+78,(vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src));
    bufp->fullIData(oldp+79,(vlSelf->rv32e__DOT__if_stage__DOT__state),32);
    bufp->fullIData(oldp+80,(vlSelf->rv32e__DOT__if_stage__DOT__next_state),32);
    bufp->fullIData(oldp+81,(vlSelf->rv32e__DOT__mem_stage__DOT__state),32);
    bufp->fullIData(oldp+82,(vlSelf->rv32e__DOT__mem_stage__DOT__next_state),32);
    bufp->fullIData(oldp+83,(vlSelf->rv32e__DOT__mem_stage__DOT__read_data),32);
    bufp->fullIData(oldp+84,(vlSelf->rv32e__DOT__wb_stage__DOT__state),32);
    bufp->fullIData(oldp+85,(vlSelf->rv32e__DOT__wb_stage__DOT__next_state),32);
    bufp->fullIData(oldp+86,(vlSelf->rv32e__DOT__rs1_val),32);
    bufp->fullIData(oldp+87,(vlSelf->rv32e__DOT__rs2_val),32);
    bufp->fullIData(oldp+88,(vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr),32);
    bufp->fullBit(oldp+89,(vlSelf->clk));
    bufp->fullBit(oldp+90,(vlSelf->reset));
    bufp->fullIData(oldp+91,(vlSelf->rv32e__DOT__branch_target),32);
    bufp->fullIData(oldp+92,(0U),32);
}
