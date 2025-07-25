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
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"reset", false,-1);
    tracep->pushNamePrefix("rv32e ");
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"reset", false,-1);
    tracep->declBus(c+35,"pc", false,-1, 31,0);
    tracep->declBus(c+36,"instr", false,-1, 31,0);
    tracep->declBus(c+37,"opcode", false,-1, 6,0);
    tracep->declBus(c+38,"rs1", false,-1, 4,0);
    tracep->declBus(c+39,"rs2", false,-1, 4,0);
    tracep->declBus(c+40,"rd", false,-1, 4,0);
    tracep->declBus(c+41,"imm", false,-1, 31,0);
    tracep->declBus(c+42,"func3", false,-1, 2,0);
    tracep->declBus(c+43,"func7", false,-1, 6,0);
    tracep->declBit(c+44,"RegWrite", false,-1);
    tracep->declBit(c+45,"MemWrite", false,-1);
    tracep->declBit(c+46,"MemRead", false,-1);
    tracep->declBus(c+72,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+73,"rs2_val", false,-1, 31,0);
    tracep->declBus(c+83,"wb_data", false,-1, 31,0);
    tracep->declBus(c+47,"jal_target", false,-1, 31,0);
    tracep->declBus(c+74,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+48,"is_jal", false,-1);
    tracep->declBit(c+49,"is_jalr", false,-1);
    tracep->declBus(c+1,"data_out", false,-1, 31,0);
    tracep->declBus(c+50,"alu_op", false,-1, 3,0);
    tracep->declBus(c+75,"alu_result", false,-1, 31,0);
    tracep->declBit(c+76,"alu_zero", false,-1);
    tracep->declBit(c+77,"alu_less", false,-1);
    tracep->declBit(c+84,"take_branch", false,-1);
    tracep->declBus(c+51,"MemLen", false,-1, 2,0);
    tracep->declBus(c+52,"csr_raddr", false,-1, 11,0);
    tracep->declBus(c+53,"csr_op", false,-1, 1,0);
    tracep->declBus(c+54,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+78,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+55,"ecall_pc", false,-1, 31,0);
    tracep->declBus(c+56,"mret_pc", false,-1, 31,0);
    tracep->declBit(c+57,"is_ecall", false,-1);
    tracep->declBit(c+58,"is_mret", false,-1);
    tracep->declBit(c+59,"csrWrite", false,-1);
    tracep->declBus(c+85,"branch_target", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+50,"alu_op", false,-1, 3,0);
    tracep->declBus(c+72,"a", false,-1, 31,0);
    tracep->declBus(c+79,"b", false,-1, 31,0);
    tracep->declBus(c+75,"result", false,-1, 31,0);
    tracep->declBit(c+76,"zero", false,-1);
    tracep->declBit(c+77,"less", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"reset", false,-1);
    tracep->declBit(c+59,"csrWrite", false,-1);
    tracep->declBus(c+52,"addr", false,-1, 11,0);
    tracep->declBus(c+78,"wdata", false,-1, 31,0);
    tracep->declBus(c+53,"op", false,-1, 1,0);
    tracep->declBus(c+54,"rdata", false,-1, 31,0);
    tracep->declBit(c+57,"ecall", false,-1);
    tracep->declBit(c+58,"mret", false,-1);
    tracep->declBus(c+35,"pc", false,-1, 31,0);
    tracep->declBus(c+56,"mret_pc", false,-1, 31,0);
    tracep->declBus(c+55,"ecall_pc", false,-1, 31,0);
    tracep->declBus(c+60,"mstatus", false,-1, 31,0);
    tracep->declBus(c+61,"mtvec", false,-1, 31,0);
    tracep->declBus(c+62,"mepc", false,-1, 31,0);
    tracep->declBus(c+63,"mcause", false,-1, 31,0);
    tracep->declBus(c+87,"MSTATUS", false,-1, 11,0);
    tracep->declBus(c+88,"MTVEC", false,-1, 11,0);
    tracep->declBus(c+89,"MEPC", false,-1, 11,0);
    tracep->declBus(c+90,"MCAUSE", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_stage ");
    tracep->declBus(c+36,"instr", false,-1, 31,0);
    tracep->declBus(c+37,"opcode", false,-1, 6,0);
    tracep->declBus(c+38,"rs1", false,-1, 4,0);
    tracep->declBus(c+39,"rs2", false,-1, 4,0);
    tracep->declBus(c+40,"rd", false,-1, 4,0);
    tracep->declBus(c+41,"imm", false,-1, 31,0);
    tracep->declBus(c+42,"func3", false,-1, 2,0);
    tracep->declBus(c+43,"func7", false,-1, 6,0);
    tracep->declBit(c+44,"RegWrite", false,-1);
    tracep->declBit(c+45,"MemWrite", false,-1);
    tracep->declBit(c+46,"MemRead", false,-1);
    tracep->declBus(c+50,"alu_op", false,-1, 3,0);
    tracep->declBus(c+51,"MemLen", false,-1, 2,0);
    tracep->declBit(c+59,"csrWrite", false,-1);
    tracep->declBit(c+57,"is_ecall", false,-1);
    tracep->declBit(c+58,"is_mret", false,-1);
    tracep->declBus(c+53,"csr_op", false,-1, 1,0);
    tracep->declBus(c+64,"immI", false,-1, 31,0);
    tracep->declBus(c+65,"immU", false,-1, 31,0);
    tracep->declBus(c+66,"immS", false,-1, 31,0);
    tracep->declBus(c+67,"immB", false,-1, 31,0);
    tracep->declBus(c+68,"immJ", false,-1, 31,0);
    tracep->declBus(c+91,"immR", false,-1, 31,0);
    tracep->declBus(c+69,"immCSR", false,-1, 31,0);
    tracep->declBus(c+70,"get_opcode", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_stage ");
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"reset", false,-1);
    tracep->declBus(c+85,"branch_target", false,-1, 31,0);
    tracep->declBit(c+86,"pc_src", false,-1);
    tracep->declBus(c+35,"pc", false,-1, 31,0);
    tracep->declBus(c+36,"instr", false,-1, 31,0);
    tracep->declBit(c+71,"check", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_stage ");
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+46,"MemRead", false,-1);
    tracep->declBit(c+45,"MemWrite", false,-1);
    tracep->declBus(c+80,"addr", false,-1, 31,0);
    tracep->declBus(c+73,"data_in", false,-1, 31,0);
    tracep->declBus(c+51,"MemLen", false,-1, 2,0);
    tracep->declBus(c+1,"data_out", false,-1, 31,0);
    tracep->declBus(c+2,"read_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBus(c+38,"rs1", false,-1, 4,0);
    tracep->declBus(c+39,"rs2", false,-1, 4,0);
    tracep->declBus(c+40,"rd", false,-1, 4,0);
    tracep->declBit(c+44,"we", false,-1);
    tracep->declBus(c+83,"wd", false,-1, 31,0);
    tracep->declBus(c+72,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+73,"rs2_val", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+3+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_stage ");
    tracep->declBus(c+35,"pc", false,-1, 31,0);
    tracep->declBus(c+41,"imm", false,-1, 31,0);
    tracep->declBus(c+72,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+75,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1,"data_out", false,-1, 31,0);
    tracep->declBus(c+54,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+37,"opcode", false,-1, 6,0);
    tracep->declBus(c+42,"func3", false,-1, 2,0);
    tracep->declBit(c+76,"alu_zero", false,-1);
    tracep->declBit(c+77,"alu_less", false,-1);
    tracep->declBus(c+47,"jal_target", false,-1, 31,0);
    tracep->declBus(c+74,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+48,"is_jal", false,-1);
    tracep->declBit(c+49,"is_jalr", false,-1);
    tracep->declBit(c+84,"take_branch", false,-1);
    tracep->declBus(c+83,"wb_data", false,-1, 31,0);
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
    bufp->fullIData(oldp+2,(vlSelf->rv32e__DOT__mem_stage__DOT__read_data),32);
    bufp->fullIData(oldp+3,(vlSelf->rv32e__DOT__regfile__DOT__regs[0]),32);
    bufp->fullIData(oldp+4,(vlSelf->rv32e__DOT__regfile__DOT__regs[1]),32);
    bufp->fullIData(oldp+5,(vlSelf->rv32e__DOT__regfile__DOT__regs[2]),32);
    bufp->fullIData(oldp+6,(vlSelf->rv32e__DOT__regfile__DOT__regs[3]),32);
    bufp->fullIData(oldp+7,(vlSelf->rv32e__DOT__regfile__DOT__regs[4]),32);
    bufp->fullIData(oldp+8,(vlSelf->rv32e__DOT__regfile__DOT__regs[5]),32);
    bufp->fullIData(oldp+9,(vlSelf->rv32e__DOT__regfile__DOT__regs[6]),32);
    bufp->fullIData(oldp+10,(vlSelf->rv32e__DOT__regfile__DOT__regs[7]),32);
    bufp->fullIData(oldp+11,(vlSelf->rv32e__DOT__regfile__DOT__regs[8]),32);
    bufp->fullIData(oldp+12,(vlSelf->rv32e__DOT__regfile__DOT__regs[9]),32);
    bufp->fullIData(oldp+13,(vlSelf->rv32e__DOT__regfile__DOT__regs[10]),32);
    bufp->fullIData(oldp+14,(vlSelf->rv32e__DOT__regfile__DOT__regs[11]),32);
    bufp->fullIData(oldp+15,(vlSelf->rv32e__DOT__regfile__DOT__regs[12]),32);
    bufp->fullIData(oldp+16,(vlSelf->rv32e__DOT__regfile__DOT__regs[13]),32);
    bufp->fullIData(oldp+17,(vlSelf->rv32e__DOT__regfile__DOT__regs[14]),32);
    bufp->fullIData(oldp+18,(vlSelf->rv32e__DOT__regfile__DOT__regs[15]),32);
    bufp->fullIData(oldp+19,(vlSelf->rv32e__DOT__regfile__DOT__regs[16]),32);
    bufp->fullIData(oldp+20,(vlSelf->rv32e__DOT__regfile__DOT__regs[17]),32);
    bufp->fullIData(oldp+21,(vlSelf->rv32e__DOT__regfile__DOT__regs[18]),32);
    bufp->fullIData(oldp+22,(vlSelf->rv32e__DOT__regfile__DOT__regs[19]),32);
    bufp->fullIData(oldp+23,(vlSelf->rv32e__DOT__regfile__DOT__regs[20]),32);
    bufp->fullIData(oldp+24,(vlSelf->rv32e__DOT__regfile__DOT__regs[21]),32);
    bufp->fullIData(oldp+25,(vlSelf->rv32e__DOT__regfile__DOT__regs[22]),32);
    bufp->fullIData(oldp+26,(vlSelf->rv32e__DOT__regfile__DOT__regs[23]),32);
    bufp->fullIData(oldp+27,(vlSelf->rv32e__DOT__regfile__DOT__regs[24]),32);
    bufp->fullIData(oldp+28,(vlSelf->rv32e__DOT__regfile__DOT__regs[25]),32);
    bufp->fullIData(oldp+29,(vlSelf->rv32e__DOT__regfile__DOT__regs[26]),32);
    bufp->fullIData(oldp+30,(vlSelf->rv32e__DOT__regfile__DOT__regs[27]),32);
    bufp->fullIData(oldp+31,(vlSelf->rv32e__DOT__regfile__DOT__regs[28]),32);
    bufp->fullIData(oldp+32,(vlSelf->rv32e__DOT__regfile__DOT__regs[29]),32);
    bufp->fullIData(oldp+33,(vlSelf->rv32e__DOT__regfile__DOT__regs[30]),32);
    bufp->fullIData(oldp+34,(vlSelf->rv32e__DOT__regfile__DOT__regs[31]),32);
    bufp->fullIData(oldp+35,(vlSelf->rv32e__DOT__pc),32);
    bufp->fullIData(oldp+36,(vlSelf->rv32e__DOT__instr),32);
    bufp->fullCData(oldp+37,(vlSelf->rv32e__DOT__opcode),7);
    bufp->fullCData(oldp+38,((0x1fU & (vlSelf->rv32e__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+39,((0x1fU & (vlSelf->rv32e__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+40,((0x1fU & (vlSelf->rv32e__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+41,(vlSelf->rv32e__DOT__imm),32);
    bufp->fullCData(oldp+42,(vlSelf->rv32e__DOT__func3),3);
    bufp->fullCData(oldp+43,(vlSelf->rv32e__DOT__func7),7);
    bufp->fullBit(oldp+44,(vlSelf->rv32e__DOT__RegWrite));
    bufp->fullBit(oldp+45,(vlSelf->rv32e__DOT__MemWrite));
    bufp->fullBit(oldp+46,(vlSelf->rv32e__DOT__MemRead));
    bufp->fullIData(oldp+47,(vlSelf->rv32e__DOT__jal_target),32);
    bufp->fullBit(oldp+48,((0x6fU == (IData)(vlSelf->rv32e__DOT__opcode))));
    bufp->fullBit(oldp+49,(vlSelf->rv32e__DOT__is_jalr));
    bufp->fullCData(oldp+50,(vlSelf->rv32e__DOT__alu_op),4);
    bufp->fullCData(oldp+51,(vlSelf->rv32e__DOT__MemLen),3);
    bufp->fullSData(oldp+52,((vlSelf->rv32e__DOT__instr 
                              >> 0x14U)),12);
    bufp->fullCData(oldp+53,(vlSelf->rv32e__DOT__csr_op),2);
    bufp->fullIData(oldp+54,(((0x300U == (vlSelf->rv32e__DOT__instr 
                                          >> 0x14U))
                               ? vlSelf->rv32e__DOT__csr__DOT__mstatus
                               : ((0x305U == (vlSelf->rv32e__DOT__instr 
                                              >> 0x14U))
                                   ? vlSelf->rv32e__DOT__csr__DOT__mtvec
                                   : ((0x341U == (vlSelf->rv32e__DOT__instr 
                                                  >> 0x14U))
                                       ? vlSelf->rv32e__DOT__csr__DOT__mepc
                                       : ((0x342U == 
                                           (vlSelf->rv32e__DOT__instr 
                                            >> 0x14U))
                                           ? vlSelf->rv32e__DOT__csr__DOT__mcause
                                           : 0U))))),32);
    bufp->fullIData(oldp+55,(vlSelf->rv32e__DOT__ecall_pc),32);
    bufp->fullIData(oldp+56,(vlSelf->rv32e__DOT__mret_pc),32);
    bufp->fullBit(oldp+57,(vlSelf->rv32e__DOT__is_ecall));
    bufp->fullBit(oldp+58,(vlSelf->rv32e__DOT__is_mret));
    bufp->fullBit(oldp+59,(vlSelf->rv32e__DOT__csrWrite));
    bufp->fullIData(oldp+60,(vlSelf->rv32e__DOT__csr__DOT__mstatus),32);
    bufp->fullIData(oldp+61,(vlSelf->rv32e__DOT__csr__DOT__mtvec),32);
    bufp->fullIData(oldp+62,(vlSelf->rv32e__DOT__csr__DOT__mepc),32);
    bufp->fullIData(oldp+63,(vlSelf->rv32e__DOT__csr__DOT__mcause),32);
    bufp->fullIData(oldp+64,(vlSelf->rv32e__DOT__id_stage__DOT__immI),32);
    bufp->fullIData(oldp+65,((0xfffff000U & vlSelf->rv32e__DOT__instr)),32);
    bufp->fullIData(oldp+66,((((- (IData)((vlSelf->rv32e__DOT__instr 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->rv32e__DOT__instr 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->rv32e__DOT__instr 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+67,((((- (IData)((vlSelf->rv32e__DOT__instr 
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
    bufp->fullIData(oldp+68,((((- (IData)((vlSelf->rv32e__DOT__instr 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->rv32e__DOT__instr) 
                                            | ((0x800U 
                                                & (vlSelf->rv32e__DOT__instr 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->rv32e__DOT__instr 
                                                     >> 0x14U)))))),32);
    bufp->fullIData(oldp+69,((0x1fU & (vlSelf->rv32e__DOT__instr 
                                       >> 0xfU))),32);
    bufp->fullCData(oldp+70,(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode),5);
    bufp->fullBit(oldp+71,(vlSelf->rv32e__DOT__if_stage__DOT__check));
    bufp->fullIData(oldp+72,(vlSelf->rv32e__DOT__rs1_val),32);
    bufp->fullIData(oldp+73,(vlSelf->rv32e__DOT__rs2_val),32);
    bufp->fullIData(oldp+74,((0xfffffffeU & vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr)),32);
    bufp->fullIData(oldp+75,(vlSelf->rv32e__DOT__alu_result),32);
    bufp->fullBit(oldp+76,((0U == vlSelf->rv32e__DOT__alu_result)));
    bufp->fullBit(oldp+77,(vlSelf->rv32e__DOT__alu_less));
    bufp->fullIData(oldp+78,(vlSelf->rv32e__DOT__csr_wdata),32);
    bufp->fullIData(oldp+79,(vlSelf->rv32e__DOT____Vcellinp__alu__b),32);
    bufp->fullIData(oldp+80,(vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr),32);
    bufp->fullBit(oldp+81,(vlSelf->clk));
    bufp->fullBit(oldp+82,(vlSelf->reset));
    bufp->fullIData(oldp+83,(((0x37U == (IData)(vlSelf->rv32e__DOT__opcode))
                               ? vlSelf->rv32e__DOT__imm
                               : ((0x17U == (IData)(vlSelf->rv32e__DOT__opcode))
                                   ? vlSelf->rv32e__DOT__jal_target
                                   : (((0x6fU == (IData)(vlSelf->rv32e__DOT__opcode)) 
                                       | (0x67U == (IData)(vlSelf->rv32e__DOT__opcode)))
                                       ? ((IData)(4U) 
                                          + vlSelf->rv32e__DOT__pc)
                                       : ((3U == (IData)(vlSelf->rv32e__DOT__opcode))
                                           ? vlSelf->rv32e__DOT__data_out
                                           : ((0x73U 
                                               == (IData)(vlSelf->rv32e__DOT__opcode))
                                               ? ((0x300U 
                                                   == 
                                                   (vlSelf->rv32e__DOT__instr 
                                                    >> 0x14U))
                                                   ? vlSelf->rv32e__DOT__csr__DOT__mstatus
                                                   : 
                                                  ((0x305U 
                                                    == 
                                                    (vlSelf->rv32e__DOT__instr 
                                                     >> 0x14U))
                                                    ? vlSelf->rv32e__DOT__csr__DOT__mtvec
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (vlSelf->rv32e__DOT__instr 
                                                      >> 0x14U))
                                                     ? vlSelf->rv32e__DOT__csr__DOT__mepc
                                                     : 
                                                    ((0x342U 
                                                      == 
                                                      (vlSelf->rv32e__DOT__instr 
                                                       >> 0x14U))
                                                      ? vlSelf->rv32e__DOT__csr__DOT__mcause
                                                      : 0U))))
                                               : ((
                                                   (0x33U 
                                                    == (IData)(vlSelf->rv32e__DOT__opcode)) 
                                                   | (0x13U 
                                                      == (IData)(vlSelf->rv32e__DOT__opcode)))
                                                   ? vlSelf->rv32e__DOT__alu_result
                                                   : 0U))))))),32);
    bufp->fullBit(oldp+84,(((0x63U == (IData)(vlSelf->rv32e__DOT__opcode)) 
                            & (((0U != vlSelf->rv32e__DOT__alu_result) 
                                & (1U == (IData)(vlSelf->rv32e__DOT__func3))) 
                               | (((0U == (IData)(vlSelf->rv32e__DOT__func3)) 
                                   & (0U == vlSelf->rv32e__DOT__alu_result)) 
                                  | (((4U == (IData)(vlSelf->rv32e__DOT__func3)) 
                                      & (IData)(vlSelf->rv32e__DOT__alu_less)) 
                                     | (((~ (IData)(vlSelf->rv32e__DOT__alu_less)) 
                                         & (5U == (IData)(vlSelf->rv32e__DOT__func3))) 
                                        | (((6U == (IData)(vlSelf->rv32e__DOT__func3)) 
                                            & (IData)(vlSelf->rv32e__DOT__alu_less)) 
                                           | ((~ (IData)(vlSelf->rv32e__DOT__alu_less)) 
                                              & (7U 
                                                 == (IData)(vlSelf->rv32e__DOT__func3)))))))))));
    bufp->fullIData(oldp+85,(((IData)(vlSelf->rv32e__DOT__is_ecall)
                               ? vlSelf->rv32e__DOT__ecall_pc
                               : ((IData)(vlSelf->rv32e__DOT__is_mret)
                                   ? vlSelf->rv32e__DOT__mret_pc
                                   : ((IData)(vlSelf->rv32e__DOT__is_jalr)
                                       ? (0xfffffffeU 
                                          & vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr)
                                       : vlSelf->rv32e__DOT__jal_target)))),32);
    bufp->fullBit(oldp+86,(((0x6fU == (IData)(vlSelf->rv32e__DOT__opcode)) 
                            | ((IData)(vlSelf->rv32e__DOT__is_jalr) 
                               | (((0x63U == (IData)(vlSelf->rv32e__DOT__opcode)) 
                                   & (((0U != vlSelf->rv32e__DOT__alu_result) 
                                       & (1U == (IData)(vlSelf->rv32e__DOT__func3))) 
                                      | (((0U == (IData)(vlSelf->rv32e__DOT__func3)) 
                                          & (0U == vlSelf->rv32e__DOT__alu_result)) 
                                         | (((4U == (IData)(vlSelf->rv32e__DOT__func3)) 
                                             & (IData)(vlSelf->rv32e__DOT__alu_less)) 
                                            | (((~ (IData)(vlSelf->rv32e__DOT__alu_less)) 
                                                & (5U 
                                                   == (IData)(vlSelf->rv32e__DOT__func3))) 
                                               | (((6U 
                                                    == (IData)(vlSelf->rv32e__DOT__func3)) 
                                                   & (IData)(vlSelf->rv32e__DOT__alu_less)) 
                                                  | ((~ (IData)(vlSelf->rv32e__DOT__alu_less)) 
                                                     & (7U 
                                                        == (IData)(vlSelf->rv32e__DOT__func3))))))))) 
                                  | ((IData)(vlSelf->rv32e__DOT__is_ecall) 
                                     | (IData)(vlSelf->rv32e__DOT__is_mret)))))));
    bufp->fullSData(oldp+87,(0x300U),12);
    bufp->fullSData(oldp+88,(0x305U),12);
    bufp->fullSData(oldp+89,(0x341U),12);
    bufp->fullSData(oldp+90,(0x342U),12);
    bufp->fullIData(oldp+91,(0U),32);
}
