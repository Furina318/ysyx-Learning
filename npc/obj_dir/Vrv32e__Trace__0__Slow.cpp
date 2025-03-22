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
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"reset", false,-1);
    tracep->pushNamePrefix("rv32e ");
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"reset", false,-1);
    tracep->declBus(c+34,"pc", false,-1, 31,0);
    tracep->declBus(c+35,"instr", false,-1, 31,0);
    tracep->declBus(c+36,"opcode", false,-1, 6,0);
    tracep->declBus(c+37,"rs1", false,-1, 4,0);
    tracep->declBus(c+38,"rs2", false,-1, 4,0);
    tracep->declBus(c+39,"rd", false,-1, 4,0);
    tracep->declBus(c+40,"imm", false,-1, 31,0);
    tracep->declBus(c+41,"func3", false,-1, 2,0);
    tracep->declBus(c+42,"func7", false,-1, 6,0);
    tracep->declBit(c+43,"RegWrite", false,-1);
    tracep->declBit(c+44,"MemWrite", false,-1);
    tracep->declBit(c+45,"MemRead", false,-1);
    tracep->declBus(c+57,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+58,"rs2_val", false,-1, 31,0);
    tracep->declBus(c+67,"wb_data", false,-1, 31,0);
    tracep->declBus(c+46,"jal_target", false,-1, 31,0);
    tracep->declBus(c+59,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+47,"is_jal", false,-1);
    tracep->declBit(c+48,"is_jalr", false,-1);
    tracep->declBus(c+1,"data_out", false,-1, 31,0);
    tracep->declBus(c+49,"alu_op", false,-1, 3,0);
    tracep->declBus(c+60,"alu_result", false,-1, 31,0);
    tracep->declBit(c+61,"alu_zero", false,-1);
    tracep->declBit(c+62,"alu_less", false,-1);
    tracep->declBit(c+68,"take_branch", false,-1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+49,"alu_op", false,-1, 3,0);
    tracep->declBus(c+57,"a", false,-1, 31,0);
    tracep->declBus(c+63,"b", false,-1, 31,0);
    tracep->declBus(c+60,"result", false,-1, 31,0);
    tracep->declBit(c+61,"zero", false,-1);
    tracep->declBit(c+62,"less", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_stage ");
    tracep->declBus(c+35,"instr", false,-1, 31,0);
    tracep->declBus(c+36,"opcode", false,-1, 6,0);
    tracep->declBus(c+37,"rs1", false,-1, 4,0);
    tracep->declBus(c+38,"rs2", false,-1, 4,0);
    tracep->declBus(c+39,"rd", false,-1, 4,0);
    tracep->declBus(c+40,"imm", false,-1, 31,0);
    tracep->declBus(c+41,"func3", false,-1, 2,0);
    tracep->declBus(c+42,"func7", false,-1, 6,0);
    tracep->declBit(c+43,"RegWrite", false,-1);
    tracep->declBit(c+44,"MemWrite", false,-1);
    tracep->declBit(c+45,"MemRead", false,-1);
    tracep->declBus(c+49,"alu_op", false,-1, 3,0);
    tracep->declBus(c+50,"immI", false,-1, 31,0);
    tracep->declBus(c+51,"immU", false,-1, 31,0);
    tracep->declBus(c+52,"immS", false,-1, 31,0);
    tracep->declBus(c+53,"immB", false,-1, 31,0);
    tracep->declBus(c+54,"immJ", false,-1, 31,0);
    tracep->declBus(c+70,"immR", false,-1, 31,0);
    tracep->declBus(c+55,"get_opcode", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_stage ");
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"reset", false,-1);
    tracep->declBus(c+69,"branch_target", false,-1, 31,0);
    tracep->declBit(c+56,"pc_src", false,-1);
    tracep->declBus(c+34,"pc", false,-1, 31,0);
    tracep->declBus(c+35,"instr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_stage ");
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+45,"MemRead", false,-1);
    tracep->declBit(c+44,"MemWrite", false,-1);
    tracep->declBus(c+64,"addr", false,-1, 31,0);
    tracep->declBus(c+58,"data_in", false,-1, 31,0);
    tracep->declBus(c+1,"data_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBus(c+37,"rs1", false,-1, 4,0);
    tracep->declBus(c+38,"rs2", false,-1, 4,0);
    tracep->declBus(c+39,"rd", false,-1, 4,0);
    tracep->declBit(c+43,"we", false,-1);
    tracep->declBus(c+67,"wd", false,-1, 31,0);
    tracep->declBus(c+57,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+58,"rs2_val", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2+i*1,"regs", true,(i+0), 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->rv32e__DOT__data_out),32);
    bufp->fullIData(oldp+2,(vlSelf->rv32e__DOT__regfile__DOT__regs[0]),32);
    bufp->fullIData(oldp+3,(vlSelf->rv32e__DOT__regfile__DOT__regs[1]),32);
    bufp->fullIData(oldp+4,(vlSelf->rv32e__DOT__regfile__DOT__regs[2]),32);
    bufp->fullIData(oldp+5,(vlSelf->rv32e__DOT__regfile__DOT__regs[3]),32);
    bufp->fullIData(oldp+6,(vlSelf->rv32e__DOT__regfile__DOT__regs[4]),32);
    bufp->fullIData(oldp+7,(vlSelf->rv32e__DOT__regfile__DOT__regs[5]),32);
    bufp->fullIData(oldp+8,(vlSelf->rv32e__DOT__regfile__DOT__regs[6]),32);
    bufp->fullIData(oldp+9,(vlSelf->rv32e__DOT__regfile__DOT__regs[7]),32);
    bufp->fullIData(oldp+10,(vlSelf->rv32e__DOT__regfile__DOT__regs[8]),32);
    bufp->fullIData(oldp+11,(vlSelf->rv32e__DOT__regfile__DOT__regs[9]),32);
    bufp->fullIData(oldp+12,(vlSelf->rv32e__DOT__regfile__DOT__regs[10]),32);
    bufp->fullIData(oldp+13,(vlSelf->rv32e__DOT__regfile__DOT__regs[11]),32);
    bufp->fullIData(oldp+14,(vlSelf->rv32e__DOT__regfile__DOT__regs[12]),32);
    bufp->fullIData(oldp+15,(vlSelf->rv32e__DOT__regfile__DOT__regs[13]),32);
    bufp->fullIData(oldp+16,(vlSelf->rv32e__DOT__regfile__DOT__regs[14]),32);
    bufp->fullIData(oldp+17,(vlSelf->rv32e__DOT__regfile__DOT__regs[15]),32);
    bufp->fullIData(oldp+18,(vlSelf->rv32e__DOT__regfile__DOT__regs[16]),32);
    bufp->fullIData(oldp+19,(vlSelf->rv32e__DOT__regfile__DOT__regs[17]),32);
    bufp->fullIData(oldp+20,(vlSelf->rv32e__DOT__regfile__DOT__regs[18]),32);
    bufp->fullIData(oldp+21,(vlSelf->rv32e__DOT__regfile__DOT__regs[19]),32);
    bufp->fullIData(oldp+22,(vlSelf->rv32e__DOT__regfile__DOT__regs[20]),32);
    bufp->fullIData(oldp+23,(vlSelf->rv32e__DOT__regfile__DOT__regs[21]),32);
    bufp->fullIData(oldp+24,(vlSelf->rv32e__DOT__regfile__DOT__regs[22]),32);
    bufp->fullIData(oldp+25,(vlSelf->rv32e__DOT__regfile__DOT__regs[23]),32);
    bufp->fullIData(oldp+26,(vlSelf->rv32e__DOT__regfile__DOT__regs[24]),32);
    bufp->fullIData(oldp+27,(vlSelf->rv32e__DOT__regfile__DOT__regs[25]),32);
    bufp->fullIData(oldp+28,(vlSelf->rv32e__DOT__regfile__DOT__regs[26]),32);
    bufp->fullIData(oldp+29,(vlSelf->rv32e__DOT__regfile__DOT__regs[27]),32);
    bufp->fullIData(oldp+30,(vlSelf->rv32e__DOT__regfile__DOT__regs[28]),32);
    bufp->fullIData(oldp+31,(vlSelf->rv32e__DOT__regfile__DOT__regs[29]),32);
    bufp->fullIData(oldp+32,(vlSelf->rv32e__DOT__regfile__DOT__regs[30]),32);
    bufp->fullIData(oldp+33,(vlSelf->rv32e__DOT__regfile__DOT__regs[31]),32);
    bufp->fullIData(oldp+34,(vlSelf->rv32e__DOT__pc),32);
    bufp->fullIData(oldp+35,(vlSelf->rv32e__DOT__instr),32);
    bufp->fullCData(oldp+36,(vlSelf->rv32e__DOT__opcode),7);
    bufp->fullCData(oldp+37,((0x1fU & (vlSelf->rv32e__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+38,((0x1fU & (vlSelf->rv32e__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+39,((0x1fU & (vlSelf->rv32e__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+40,(vlSelf->rv32e__DOT__imm),32);
    bufp->fullCData(oldp+41,(vlSelf->rv32e__DOT__func3),3);
    bufp->fullCData(oldp+42,(vlSelf->rv32e__DOT__func7),7);
    bufp->fullBit(oldp+43,(vlSelf->rv32e__DOT__RegWrite));
    bufp->fullBit(oldp+44,(vlSelf->rv32e__DOT__MemWrite));
    bufp->fullBit(oldp+45,(vlSelf->rv32e__DOT__MemRead));
    bufp->fullIData(oldp+46,(vlSelf->rv32e__DOT__jal_target),32);
    bufp->fullBit(oldp+47,((0x6fU == (IData)(vlSelf->rv32e__DOT__opcode))));
    bufp->fullBit(oldp+48,(((0x67U == (IData)(vlSelf->rv32e__DOT__opcode)) 
                            & (0U == (IData)(vlSelf->rv32e__DOT__func3)))));
    bufp->fullCData(oldp+49,(vlSelf->rv32e__DOT__alu_op),4);
    bufp->fullIData(oldp+50,(vlSelf->rv32e__DOT__id_stage__DOT__immI),32);
    bufp->fullIData(oldp+51,((0xfffff000U & vlSelf->rv32e__DOT__instr)),32);
    bufp->fullIData(oldp+52,((((- (IData)((vlSelf->rv32e__DOT__instr 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->rv32e__DOT__instr 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->rv32e__DOT__instr 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+53,((((- (IData)((vlSelf->rv32e__DOT__instr 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelf->rv32e__DOT__instr 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->rv32e__DOT__instr 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->rv32e__DOT__instr 
                                                    >> 7U)))))),32);
    bufp->fullIData(oldp+54,((((- (IData)((vlSelf->rv32e__DOT__instr 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->rv32e__DOT__instr) 
                                            | ((0x800U 
                                                & (vlSelf->rv32e__DOT__instr 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->rv32e__DOT__instr 
                                                     >> 0x14U)))))),32);
    bufp->fullCData(oldp+55,(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode),5);
    bufp->fullBit(oldp+56,(((0x6fU == (IData)(vlSelf->rv32e__DOT__opcode)) 
                            | ((0x67U == (IData)(vlSelf->rv32e__DOT__opcode)) 
                               & (0U == (IData)(vlSelf->rv32e__DOT__func3))))));
    bufp->fullIData(oldp+57,(vlSelf->rv32e__DOT__rs1_val),32);
    bufp->fullIData(oldp+58,(vlSelf->rv32e__DOT__rs2_val),32);
    bufp->fullIData(oldp+59,((0xfffffffeU & vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr)),32);
    bufp->fullIData(oldp+60,(vlSelf->rv32e__DOT__alu_result),32);
    bufp->fullBit(oldp+61,((0U == vlSelf->rv32e__DOT__alu_result)));
    bufp->fullBit(oldp+62,(VL_LTS_III(32, vlSelf->rv32e__DOT__rs1_val, vlSelf->rv32e__DOT____Vcellinp__alu__b)));
    bufp->fullIData(oldp+63,(vlSelf->rv32e__DOT____Vcellinp__alu__b),32);
    bufp->fullIData(oldp+64,(vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr),32);
    bufp->fullBit(oldp+65,(vlSelf->clk));
    bufp->fullBit(oldp+66,(vlSelf->reset));
    bufp->fullIData(oldp+67,(((0x37U == (IData)(vlSelf->rv32e__DOT__opcode))
                               ? vlSelf->rv32e__DOT__imm
                               : ((0x17U == (IData)(vlSelf->rv32e__DOT__opcode))
                                   ? vlSelf->rv32e__DOT__jal_target
                                   : (((0x6fU == (IData)(vlSelf->rv32e__DOT__opcode)) 
                                       | (0x67U == (IData)(vlSelf->rv32e__DOT__opcode)))
                                       ? ((IData)(4U) 
                                          + vlSelf->rv32e__DOT__pc)
                                       : ((3U == (IData)(vlSelf->rv32e__DOT__opcode))
                                           ? vlSelf->rv32e__DOT__data_out
                                           : (((0x33U 
                                                == (IData)(vlSelf->rv32e__DOT__opcode)) 
                                               | (0x13U 
                                                  == (IData)(vlSelf->rv32e__DOT__opcode)))
                                               ? vlSelf->rv32e__DOT__alu_result
                                               : 0U)))))),32);
    bufp->fullBit(oldp+68,(((0x63U == (IData)(vlSelf->rv32e__DOT__opcode)) 
                            & ((0U != vlSelf->rv32e__DOT__alu_result) 
                               & (1U == (IData)(vlSelf->rv32e__DOT__func3))))));
    bufp->fullIData(oldp+69,(((0x6fU == (IData)(vlSelf->rv32e__DOT__opcode))
                               ? vlSelf->rv32e__DOT__jal_target
                               : (0xfffffffeU & vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr))),32);
    bufp->fullIData(oldp+70,(0U),32);
}
