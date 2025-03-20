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
    tracep->declBit(c+79,"clk", false,-1);
    tracep->declBit(c+80,"rst", false,-1);
    tracep->pushNamePrefix("rv32e ");
    tracep->declBit(c+79,"clk", false,-1);
    tracep->declBit(c+80,"rst", false,-1);
    tracep->declBus(c+50,"pc_now", false,-1, 31,0);
    tracep->declBus(c+1,"pc_next", false,-1, 31,0);
    tracep->declBus(c+62,"inst", false,-1, 31,0);
    tracep->declBus(c+2,"imm", false,-1, 31,0);
    tracep->declBus(c+63,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+64,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+3,"alu_result", false,-1, 31,0);
    tracep->declBus(c+65,"mem_data_out", false,-1, 31,0);
    tracep->declBus(c+81,"reg_write_data", false,-1, 31,0);
    tracep->declBit(c+4,"less", false,-1);
    tracep->declBit(c+5,"zero", false,-1);
    tracep->declBus(c+51,"i_type", false,-1, 2,0);
    tracep->declBit(c+52,"reg_wr", false,-1);
    tracep->declBit(c+53,"alu_a_src", false,-1);
    tracep->declBus(c+54,"alu_b_src", false,-1, 1,0);
    tracep->declBus(c+55,"alu_ctr", false,-1, 3,0);
    tracep->declBit(c+56,"mem_to_reg", false,-1);
    tracep->declBit(c+57,"mem_wr", false,-1);
    tracep->declBit(c+58,"mem_rd", false,-1);
    tracep->declBus(c+59,"mem_op", false,-1, 2,0);
    tracep->declBus(c+60,"branch", false,-1, 2,0);
    tracep->declBit(c+6,"pc_a_src", false,-1);
    tracep->declBit(c+7,"pc_b_src", false,-1);
    tracep->declBus(c+66,"rs1", false,-1, 4,0);
    tracep->declBus(c+67,"rs2", false,-1, 4,0);
    tracep->declBus(c+68,"rd", false,-1, 4,0);
    tracep->declBus(c+61,"time_counter", false,-1, 31,0);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+55,"ALUctr", false,-1, 3,0);
    tracep->declBit(c+53,"ALUAsrc", false,-1);
    tracep->declBus(c+54,"ALUBsrc", false,-1, 1,0);
    tracep->declBus(c+2,"imm", false,-1, 31,0);
    tracep->declBus(c+50,"PC", false,-1, 31,0);
    tracep->declBus(c+63,"rs1", false,-1, 31,0);
    tracep->declBus(c+64,"rs2", false,-1, 31,0);
    tracep->declBit(c+80,"rst", false,-1);
    tracep->declBus(c+3,"Result", false,-1, 31,0);
    tracep->declBit(c+4,"Less", false,-1);
    tracep->declBit(c+5,"zero", false,-1);
    tracep->declBus(c+8,"A", false,-1, 31,0);
    tracep->declBus(c+9,"B", false,-1, 31,0);
    tracep->declBus(c+10,"adder_out", false,-1, 31,0);
    tracep->declBus(c+11,"sub_out", false,-1, 31,0);
    tracep->declBus(c+12,"shift_out", false,-1, 31,0);
    tracep->declBus(c+13,"xor_out", false,-1, 31,0);
    tracep->declBus(c+14,"or_out", false,-1, 31,0);
    tracep->declBus(c+15,"and_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("branch_cond_inst ");
    tracep->declBit(c+80,"rst", false,-1);
    tracep->declBus(c+60,"Branch", false,-1, 2,0);
    tracep->declBit(c+4,"Less", false,-1);
    tracep->declBit(c+5,"zero", false,-1);
    tracep->declBit(c+6,"PCAsrc", false,-1);
    tracep->declBit(c+7,"PCBsrc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("contr_gen_inst ");
    tracep->declBit(c+79,"clk", false,-1);
    tracep->declBit(c+80,"rst", false,-1);
    tracep->declBus(c+62,"inst", false,-1, 31,0);
    tracep->declBus(c+51,"i_type", false,-1, 2,0);
    tracep->declBit(c+52,"RegWr", false,-1);
    tracep->declBit(c+53,"ALUAsrc", false,-1);
    tracep->declBus(c+54,"ALUBsrc", false,-1, 1,0);
    tracep->declBus(c+55,"ALUctr", false,-1, 3,0);
    tracep->declBit(c+56,"MemtoReg", false,-1);
    tracep->declBit(c+57,"MemWr", false,-1);
    tracep->declBit(c+58,"MemRd", false,-1);
    tracep->declBus(c+59,"MemOP", false,-1, 2,0);
    tracep->declBus(c+60,"Branch", false,-1, 2,0);
    tracep->declBus(c+69,"opcode", false,-1, 6,0);
    tracep->declBus(c+70,"func3", false,-1, 2,0);
    tracep->declBus(c+71,"func7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm_gen_inst ");
    tracep->declBit(c+80,"rst", false,-1);
    tracep->declBus(c+62,"instr", false,-1, 31,0);
    tracep->declBus(c+51,"i_type", false,-1, 2,0);
    tracep->declBus(c+2,"imm", false,-1, 31,0);
    tracep->declBus(c+72,"immI", false,-1, 31,0);
    tracep->declBus(c+73,"immU", false,-1, 31,0);
    tracep->declBus(c+74,"immS", false,-1, 31,0);
    tracep->declBus(c+75,"immB", false,-1, 31,0);
    tracep->declBus(c+76,"immJ", false,-1, 31,0);
    tracep->declBus(c+83,"immR", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_inst ");
    tracep->declBus(c+3,"addr", false,-1, 31,0);
    tracep->declBus(c+1,"inst_addr", false,-1, 31,0);
    tracep->declBus(c+59,"MemOp", false,-1, 2,0);
    tracep->declBus(c+64,"data_in", false,-1, 31,0);
    tracep->declBit(c+79,"clk", false,-1);
    tracep->declBit(c+80,"rst", false,-1);
    tracep->declBit(c+57,"WrEn", false,-1);
    tracep->declBit(c+58,"RdEn", false,-1);
    tracep->declBus(c+62,"inst_data", false,-1, 31,0);
    tracep->declBus(c+65,"data_out", false,-1, 31,0);
    tracep->declBus(c+77,"read_data", false,-1, 31,0);
    tracep->declBus(c+78,"temp_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_inst ");
    tracep->declBit(c+79,"clk", false,-1);
    tracep->declBit(c+80,"rst", false,-1);
    tracep->declBus(c+2,"imm", false,-1, 31,0);
    tracep->declBus(c+63,"rs1", false,-1, 31,0);
    tracep->declBit(c+6,"PCAsrc", false,-1);
    tracep->declBit(c+7,"PCBsrc", false,-1);
    tracep->declBus(c+50,"pc", false,-1, 31,0);
    tracep->declBus(c+1,"pc_next", false,-1, 31,0);
    tracep->declBus(c+16,"PCa", false,-1, 31,0);
    tracep->declBus(c+82,"PCb", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register_files_inst ");
    tracep->declBit(c+79,"clk", false,-1);
    tracep->declBit(c+80,"rst", false,-1);
    tracep->declBit(c+52,"RegWr", false,-1);
    tracep->declBus(c+66,"rs1", false,-1, 4,0);
    tracep->declBus(c+67,"rs2", false,-1, 4,0);
    tracep->declBus(c+68,"rd", false,-1, 4,0);
    tracep->declBus(c+81,"busW", false,-1, 31,0);
    tracep->declBus(c+63,"busA", false,-1, 31,0);
    tracep->declBus(c+64,"busB", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+17+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+49,"i", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->rv32e__DOT__pc_next),32);
    bufp->fullIData(oldp+2,(vlSelf->rv32e__DOT__imm),32);
    bufp->fullIData(oldp+3,(vlSelf->rv32e__DOT__alu_result),32);
    bufp->fullBit(oldp+4,(vlSelf->rv32e__DOT__less));
    bufp->fullBit(oldp+5,(vlSelf->rv32e__DOT__zero));
    bufp->fullBit(oldp+6,(vlSelf->rv32e__DOT__pc_a_src));
    bufp->fullBit(oldp+7,(vlSelf->rv32e__DOT__pc_b_src));
    bufp->fullIData(oldp+8,(vlSelf->rv32e__DOT__alu_inst__DOT__A),32);
    bufp->fullIData(oldp+9,(vlSelf->rv32e__DOT__alu_inst__DOT__B),32);
    bufp->fullIData(oldp+10,(vlSelf->rv32e__DOT__alu_inst__DOT__adder_out),32);
    bufp->fullIData(oldp+11,(vlSelf->rv32e__DOT__alu_inst__DOT__sub_out),32);
    bufp->fullIData(oldp+12,(vlSelf->rv32e__DOT__alu_inst__DOT__shift_out),32);
    bufp->fullIData(oldp+13,(vlSelf->rv32e__DOT__alu_inst__DOT__xor_out),32);
    bufp->fullIData(oldp+14,(vlSelf->rv32e__DOT__alu_inst__DOT__or_out),32);
    bufp->fullIData(oldp+15,(vlSelf->rv32e__DOT__alu_inst__DOT__and_out),32);
    bufp->fullIData(oldp+16,(((IData)(vlSelf->rv32e__DOT__pc_a_src)
                               ? vlSelf->rv32e__DOT__imm
                               : 4U)),32);
    bufp->fullIData(oldp+17,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0]),32);
    bufp->fullIData(oldp+18,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[1]),32);
    bufp->fullIData(oldp+19,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[2]),32);
    bufp->fullIData(oldp+20,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[3]),32);
    bufp->fullIData(oldp+21,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[4]),32);
    bufp->fullIData(oldp+22,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[5]),32);
    bufp->fullIData(oldp+23,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[6]),32);
    bufp->fullIData(oldp+24,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[7]),32);
    bufp->fullIData(oldp+25,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[8]),32);
    bufp->fullIData(oldp+26,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[9]),32);
    bufp->fullIData(oldp+27,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[10]),32);
    bufp->fullIData(oldp+28,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[11]),32);
    bufp->fullIData(oldp+29,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[12]),32);
    bufp->fullIData(oldp+30,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[13]),32);
    bufp->fullIData(oldp+31,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[14]),32);
    bufp->fullIData(oldp+32,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[15]),32);
    bufp->fullIData(oldp+33,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[16]),32);
    bufp->fullIData(oldp+34,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[17]),32);
    bufp->fullIData(oldp+35,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[18]),32);
    bufp->fullIData(oldp+36,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[19]),32);
    bufp->fullIData(oldp+37,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[20]),32);
    bufp->fullIData(oldp+38,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[21]),32);
    bufp->fullIData(oldp+39,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[22]),32);
    bufp->fullIData(oldp+40,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[23]),32);
    bufp->fullIData(oldp+41,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[24]),32);
    bufp->fullIData(oldp+42,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[25]),32);
    bufp->fullIData(oldp+43,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[26]),32);
    bufp->fullIData(oldp+44,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[27]),32);
    bufp->fullIData(oldp+45,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[28]),32);
    bufp->fullIData(oldp+46,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[29]),32);
    bufp->fullIData(oldp+47,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[30]),32);
    bufp->fullIData(oldp+48,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[31]),32);
    bufp->fullIData(oldp+49,(vlSelf->rv32e__DOT__register_files_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+50,(vlSelf->rv32e__DOT__pc_now),32);
    bufp->fullCData(oldp+51,(vlSelf->rv32e__DOT__i_type),3);
    bufp->fullBit(oldp+52,(vlSelf->rv32e__DOT__reg_wr));
    bufp->fullBit(oldp+53,(vlSelf->rv32e__DOT__alu_a_src));
    bufp->fullCData(oldp+54,(vlSelf->rv32e__DOT__alu_b_src),2);
    bufp->fullCData(oldp+55,(vlSelf->rv32e__DOT__alu_ctr),4);
    bufp->fullBit(oldp+56,(vlSelf->rv32e__DOT__mem_to_reg));
    bufp->fullBit(oldp+57,(vlSelf->rv32e__DOT__mem_wr));
    bufp->fullBit(oldp+58,(vlSelf->rv32e__DOT__mem_rd));
    bufp->fullCData(oldp+59,(vlSelf->rv32e__DOT__mem_op),3);
    bufp->fullCData(oldp+60,(vlSelf->rv32e__DOT__branch),3);
    bufp->fullIData(oldp+61,(vlSelf->rv32e__DOT__time_counter),32);
    bufp->fullIData(oldp+62,(vlSelf->rv32e__DOT__inst),32);
    bufp->fullIData(oldp+63,(vlSelf->rv32e__DOT__rs1_data),32);
    bufp->fullIData(oldp+64,(vlSelf->rv32e__DOT__rs2_data),32);
    bufp->fullIData(oldp+65,(vlSelf->rv32e__DOT__mem_data_out),32);
    bufp->fullCData(oldp+66,((0x1fU & (vlSelf->rv32e__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+67,((0x1fU & (vlSelf->rv32e__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+68,((0x1fU & (vlSelf->rv32e__DOT__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+69,((0x7fU & vlSelf->rv32e__DOT__inst)),7);
    bufp->fullCData(oldp+70,((7U & (vlSelf->rv32e__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+71,((vlSelf->rv32e__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+72,((((- (IData)((vlSelf->rv32e__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->rv32e__DOT__inst 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+73,((0xfffff000U & vlSelf->rv32e__DOT__inst)),32);
    bufp->fullIData(oldp+74,((((- (IData)((vlSelf->rv32e__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->rv32e__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->rv32e__DOT__inst 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+75,((((- (IData)((vlSelf->rv32e__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelf->rv32e__DOT__inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->rv32e__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->rv32e__DOT__inst 
                                                    >> 7U)))))),32);
    bufp->fullIData(oldp+76,((((- (IData)((vlSelf->rv32e__DOT__inst 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->rv32e__DOT__inst) 
                                            | ((0x800U 
                                                & (vlSelf->rv32e__DOT__inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->rv32e__DOT__inst 
                                                     >> 0x14U)))))),32);
    bufp->fullIData(oldp+77,(vlSelf->rv32e__DOT__mem_inst__DOT__read_data),32);
    bufp->fullIData(oldp+78,(vlSelf->rv32e__DOT__mem_inst__DOT__temp_data),32);
    bufp->fullBit(oldp+79,(vlSelf->clk));
    bufp->fullBit(oldp+80,(vlSelf->rst));
    bufp->fullIData(oldp+81,(((IData)(vlSelf->rv32e__DOT__mem_to_reg)
                               ? vlSelf->rv32e__DOT__mem_data_out
                               : vlSelf->rv32e__DOT__alu_result)),32);
    bufp->fullIData(oldp+82,(((IData)(vlSelf->rv32e__DOT__pc_b_src)
                               ? vlSelf->rv32e__DOT__rs1_data
                               : vlSelf->rv32e__DOT__pc_now)),32);
    bufp->fullIData(oldp+83,(0U),32);
}
