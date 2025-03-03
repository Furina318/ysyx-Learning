// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vonly_addi__Syms.h"


VL_ATTR_COLD void Vonly_addi___024root__trace_init_sub__TOP__0(Vonly_addi___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vonly_addi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonly_addi___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"reset", false,-1);
    tracep->declBus(c+78,"pc", false,-1, 31,0);
    tracep->declBus(c+79,"x1", false,-1, 31,0);
    tracep->declBus(c+80,"x2", false,-1, 31,0);
    tracep->declBus(c+81,"x3", false,-1, 31,0);
    tracep->declBus(c+82,"x4", false,-1, 31,0);
    tracep->declBus(c+83,"x5", false,-1, 31,0);
    tracep->pushNamePrefix("only_addi ");
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"reset", false,-1);
    tracep->declBus(c+78,"pc", false,-1, 31,0);
    tracep->declBus(c+79,"x1", false,-1, 31,0);
    tracep->declBus(c+80,"x2", false,-1, 31,0);
    tracep->declBus(c+81,"x3", false,-1, 31,0);
    tracep->declBus(c+82,"x4", false,-1, 31,0);
    tracep->declBus(c+83,"x5", false,-1, 31,0);
    tracep->declBus(c+34,"instruction", false,-1, 31,0);
    tracep->declBus(c+35,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+36,"imm_ext", false,-1, 31,0);
    tracep->declBus(c+37,"alu_result", false,-1, 31,0);
    tracep->declBus(c+38,"rs1", false,-1, 4,0);
    tracep->declBus(c+39,"rd", false,-1, 4,0);
    tracep->declBus(c+40,"imm", false,-1, 11,0);
    tracep->declBit(c+41,"reg_write", false,-1);
    tracep->declBit(c+42,"is_ebreak", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"instr_mem", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+43+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+75,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+33,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vonly_addi___024root__trace_init_top(Vonly_addi___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vonly_addi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonly_addi___024root__trace_init_top\n"); );
    // Body
    Vonly_addi___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vonly_addi___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vonly_addi___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vonly_addi___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vonly_addi___024root__trace_register(Vonly_addi___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vonly_addi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonly_addi___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vonly_addi___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vonly_addi___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vonly_addi___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vonly_addi___024root__trace_full_sub_0(Vonly_addi___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vonly_addi___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonly_addi___024root__trace_full_top_0\n"); );
    // Init
    Vonly_addi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vonly_addi___024root*>(voidSelf);
    Vonly_addi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vonly_addi___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vonly_addi___024root__trace_full_sub_0(Vonly_addi___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vonly_addi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonly_addi___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->only_addi__DOT__instr_mem[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->only_addi__DOT__instr_mem[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->only_addi__DOT__instr_mem[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->only_addi__DOT__instr_mem[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->only_addi__DOT__instr_mem[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->only_addi__DOT__instr_mem[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->only_addi__DOT__instr_mem[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->only_addi__DOT__instr_mem[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->only_addi__DOT__instr_mem[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->only_addi__DOT__instr_mem[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->only_addi__DOT__instr_mem[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->only_addi__DOT__instr_mem[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->only_addi__DOT__instr_mem[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->only_addi__DOT__instr_mem[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->only_addi__DOT__instr_mem[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->only_addi__DOT__instr_mem[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->only_addi__DOT__instr_mem[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->only_addi__DOT__instr_mem[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->only_addi__DOT__instr_mem[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->only_addi__DOT__instr_mem[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->only_addi__DOT__instr_mem[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->only_addi__DOT__instr_mem[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->only_addi__DOT__instr_mem[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->only_addi__DOT__instr_mem[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->only_addi__DOT__instr_mem[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->only_addi__DOT__instr_mem[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->only_addi__DOT__instr_mem[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->only_addi__DOT__instr_mem[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->only_addi__DOT__instr_mem[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->only_addi__DOT__instr_mem[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->only_addi__DOT__instr_mem[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->only_addi__DOT__instr_mem[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->only_addi__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+34,(vlSelf->only_addi__DOT__instruction),32);
    bufp->fullIData(oldp+35,(((0U == (0x1fU & (vlSelf->only_addi__DOT__instruction 
                                               >> 0xfU)))
                               ? 0U : vlSelf->only_addi__DOT__regs
                              [(0x1fU & (vlSelf->only_addi__DOT__instruction 
                                         >> 0xfU))])),32);
    bufp->fullIData(oldp+36,((((- (IData)((vlSelf->only_addi__DOT__instruction 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->only_addi__DOT__instruction 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+37,((((0U == (0x1fU & (vlSelf->only_addi__DOT__instruction 
                                                >> 0xfU)))
                                ? 0U : vlSelf->only_addi__DOT__regs
                               [(0x1fU & (vlSelf->only_addi__DOT__instruction 
                                          >> 0xfU))]) 
                              + (((- (IData)((vlSelf->only_addi__DOT__instruction 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->only_addi__DOT__instruction 
                                              >> 0x14U)))),32);
    bufp->fullCData(oldp+38,((0x1fU & (vlSelf->only_addi__DOT__instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+39,((0x1fU & (vlSelf->only_addi__DOT__instruction 
                                       >> 7U))),5);
    bufp->fullSData(oldp+40,((vlSelf->only_addi__DOT__instruction 
                              >> 0x14U)),12);
    bufp->fullBit(oldp+41,((IData)((0x13U == (0x707fU 
                                              & vlSelf->only_addi__DOT__instruction)))));
    bufp->fullBit(oldp+42,((0x100073U == vlSelf->only_addi__DOT__instruction)));
    bufp->fullIData(oldp+43,(vlSelf->only_addi__DOT__regs[0]),32);
    bufp->fullIData(oldp+44,(vlSelf->only_addi__DOT__regs[1]),32);
    bufp->fullIData(oldp+45,(vlSelf->only_addi__DOT__regs[2]),32);
    bufp->fullIData(oldp+46,(vlSelf->only_addi__DOT__regs[3]),32);
    bufp->fullIData(oldp+47,(vlSelf->only_addi__DOT__regs[4]),32);
    bufp->fullIData(oldp+48,(vlSelf->only_addi__DOT__regs[5]),32);
    bufp->fullIData(oldp+49,(vlSelf->only_addi__DOT__regs[6]),32);
    bufp->fullIData(oldp+50,(vlSelf->only_addi__DOT__regs[7]),32);
    bufp->fullIData(oldp+51,(vlSelf->only_addi__DOT__regs[8]),32);
    bufp->fullIData(oldp+52,(vlSelf->only_addi__DOT__regs[9]),32);
    bufp->fullIData(oldp+53,(vlSelf->only_addi__DOT__regs[10]),32);
    bufp->fullIData(oldp+54,(vlSelf->only_addi__DOT__regs[11]),32);
    bufp->fullIData(oldp+55,(vlSelf->only_addi__DOT__regs[12]),32);
    bufp->fullIData(oldp+56,(vlSelf->only_addi__DOT__regs[13]),32);
    bufp->fullIData(oldp+57,(vlSelf->only_addi__DOT__regs[14]),32);
    bufp->fullIData(oldp+58,(vlSelf->only_addi__DOT__regs[15]),32);
    bufp->fullIData(oldp+59,(vlSelf->only_addi__DOT__regs[16]),32);
    bufp->fullIData(oldp+60,(vlSelf->only_addi__DOT__regs[17]),32);
    bufp->fullIData(oldp+61,(vlSelf->only_addi__DOT__regs[18]),32);
    bufp->fullIData(oldp+62,(vlSelf->only_addi__DOT__regs[19]),32);
    bufp->fullIData(oldp+63,(vlSelf->only_addi__DOT__regs[20]),32);
    bufp->fullIData(oldp+64,(vlSelf->only_addi__DOT__regs[21]),32);
    bufp->fullIData(oldp+65,(vlSelf->only_addi__DOT__regs[22]),32);
    bufp->fullIData(oldp+66,(vlSelf->only_addi__DOT__regs[23]),32);
    bufp->fullIData(oldp+67,(vlSelf->only_addi__DOT__regs[24]),32);
    bufp->fullIData(oldp+68,(vlSelf->only_addi__DOT__regs[25]),32);
    bufp->fullIData(oldp+69,(vlSelf->only_addi__DOT__regs[26]),32);
    bufp->fullIData(oldp+70,(vlSelf->only_addi__DOT__regs[27]),32);
    bufp->fullIData(oldp+71,(vlSelf->only_addi__DOT__regs[28]),32);
    bufp->fullIData(oldp+72,(vlSelf->only_addi__DOT__regs[29]),32);
    bufp->fullIData(oldp+73,(vlSelf->only_addi__DOT__regs[30]),32);
    bufp->fullIData(oldp+74,(vlSelf->only_addi__DOT__regs[31]),32);
    bufp->fullIData(oldp+75,(vlSelf->only_addi__DOT__i),32);
    bufp->fullBit(oldp+76,(vlSelf->clk));
    bufp->fullBit(oldp+77,(vlSelf->reset));
    bufp->fullIData(oldp+78,(vlSelf->pc),32);
    bufp->fullIData(oldp+79,(vlSelf->x1),32);
    bufp->fullIData(oldp+80,(vlSelf->x2),32);
    bufp->fullIData(oldp+81,(vlSelf->x3),32);
    bufp->fullIData(oldp+82,(vlSelf->x4),32);
    bufp->fullIData(oldp+83,(vlSelf->x5),32);
}
