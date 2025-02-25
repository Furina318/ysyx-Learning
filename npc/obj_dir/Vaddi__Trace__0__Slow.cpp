// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaddi__Syms.h"


VL_ATTR_COLD void Vaddi___024root__trace_init_sub__TOP__0(Vaddi___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddi___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+73,"clk", false,-1);
    tracep->declBit(c+74,"reset", false,-1);
    tracep->declBus(c+75,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_single_cycle ");
    tracep->declBit(c+73,"clk", false,-1);
    tracep->declBit(c+74,"reset", false,-1);
    tracep->declBus(c+75,"pc", false,-1, 31,0);
    tracep->declBus(c+67,"instruction", false,-1, 31,0);
    tracep->declBus(c+76,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+68,"imm_ext", false,-1, 31,0);
    tracep->declBus(c+77,"alu_result", false,-1, 31,0);
    tracep->declBus(c+69,"rs1", false,-1, 4,0);
    tracep->declBus(c+70,"rd", false,-1, 4,0);
    tracep->declBus(c+71,"imm", false,-1, 11,0);
    tracep->declBit(c+72,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"instr_mem", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+35+i*1,"registers", true,(i+0), 31,0);
    }
    tracep->declBus(c+33,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+34,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vaddi___024root__trace_init_top(Vaddi___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddi___024root__trace_init_top\n"); );
    // Body
    Vaddi___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vaddi___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaddi___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaddi___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vaddi___024root__trace_register(Vaddi___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddi___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vaddi___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vaddi___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vaddi___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vaddi___024root__trace_full_sub_0(Vaddi___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vaddi___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddi___024root__trace_full_top_0\n"); );
    // Init
    Vaddi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaddi___024root*>(voidSelf);
    Vaddi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vaddi___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vaddi___024root__trace_full_sub_0(Vaddi___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddi___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->riscv_single_cycle__DOT__instr_mem[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->riscv_single_cycle__DOT__instr_mem[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->riscv_single_cycle__DOT__instr_mem[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->riscv_single_cycle__DOT__instr_mem[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->riscv_single_cycle__DOT__instr_mem[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->riscv_single_cycle__DOT__instr_mem[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->riscv_single_cycle__DOT__instr_mem[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->riscv_single_cycle__DOT__instr_mem[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->riscv_single_cycle__DOT__instr_mem[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->riscv_single_cycle__DOT__instr_mem[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->riscv_single_cycle__DOT__instr_mem[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->riscv_single_cycle__DOT__instr_mem[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->riscv_single_cycle__DOT__instr_mem[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->riscv_single_cycle__DOT__instr_mem[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->riscv_single_cycle__DOT__instr_mem[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->riscv_single_cycle__DOT__instr_mem[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->riscv_single_cycle__DOT__instr_mem[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->riscv_single_cycle__DOT__instr_mem[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->riscv_single_cycle__DOT__instr_mem[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->riscv_single_cycle__DOT__instr_mem[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->riscv_single_cycle__DOT__instr_mem[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->riscv_single_cycle__DOT__instr_mem[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->riscv_single_cycle__DOT__instr_mem[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->riscv_single_cycle__DOT__instr_mem[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->riscv_single_cycle__DOT__instr_mem[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->riscv_single_cycle__DOT__instr_mem[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->riscv_single_cycle__DOT__instr_mem[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->riscv_single_cycle__DOT__instr_mem[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->riscv_single_cycle__DOT__instr_mem[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->riscv_single_cycle__DOT__instr_mem[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->riscv_single_cycle__DOT__instr_mem[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->riscv_single_cycle__DOT__instr_mem[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->riscv_single_cycle__DOT__i),32);
    bufp->fullIData(oldp+34,(vlSelf->riscv_single_cycle__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+35,(vlSelf->riscv_single_cycle__DOT__registers[0]),32);
    bufp->fullIData(oldp+36,(vlSelf->riscv_single_cycle__DOT__registers[1]),32);
    bufp->fullIData(oldp+37,(vlSelf->riscv_single_cycle__DOT__registers[2]),32);
    bufp->fullIData(oldp+38,(vlSelf->riscv_single_cycle__DOT__registers[3]),32);
    bufp->fullIData(oldp+39,(vlSelf->riscv_single_cycle__DOT__registers[4]),32);
    bufp->fullIData(oldp+40,(vlSelf->riscv_single_cycle__DOT__registers[5]),32);
    bufp->fullIData(oldp+41,(vlSelf->riscv_single_cycle__DOT__registers[6]),32);
    bufp->fullIData(oldp+42,(vlSelf->riscv_single_cycle__DOT__registers[7]),32);
    bufp->fullIData(oldp+43,(vlSelf->riscv_single_cycle__DOT__registers[8]),32);
    bufp->fullIData(oldp+44,(vlSelf->riscv_single_cycle__DOT__registers[9]),32);
    bufp->fullIData(oldp+45,(vlSelf->riscv_single_cycle__DOT__registers[10]),32);
    bufp->fullIData(oldp+46,(vlSelf->riscv_single_cycle__DOT__registers[11]),32);
    bufp->fullIData(oldp+47,(vlSelf->riscv_single_cycle__DOT__registers[12]),32);
    bufp->fullIData(oldp+48,(vlSelf->riscv_single_cycle__DOT__registers[13]),32);
    bufp->fullIData(oldp+49,(vlSelf->riscv_single_cycle__DOT__registers[14]),32);
    bufp->fullIData(oldp+50,(vlSelf->riscv_single_cycle__DOT__registers[15]),32);
    bufp->fullIData(oldp+51,(vlSelf->riscv_single_cycle__DOT__registers[16]),32);
    bufp->fullIData(oldp+52,(vlSelf->riscv_single_cycle__DOT__registers[17]),32);
    bufp->fullIData(oldp+53,(vlSelf->riscv_single_cycle__DOT__registers[18]),32);
    bufp->fullIData(oldp+54,(vlSelf->riscv_single_cycle__DOT__registers[19]),32);
    bufp->fullIData(oldp+55,(vlSelf->riscv_single_cycle__DOT__registers[20]),32);
    bufp->fullIData(oldp+56,(vlSelf->riscv_single_cycle__DOT__registers[21]),32);
    bufp->fullIData(oldp+57,(vlSelf->riscv_single_cycle__DOT__registers[22]),32);
    bufp->fullIData(oldp+58,(vlSelf->riscv_single_cycle__DOT__registers[23]),32);
    bufp->fullIData(oldp+59,(vlSelf->riscv_single_cycle__DOT__registers[24]),32);
    bufp->fullIData(oldp+60,(vlSelf->riscv_single_cycle__DOT__registers[25]),32);
    bufp->fullIData(oldp+61,(vlSelf->riscv_single_cycle__DOT__registers[26]),32);
    bufp->fullIData(oldp+62,(vlSelf->riscv_single_cycle__DOT__registers[27]),32);
    bufp->fullIData(oldp+63,(vlSelf->riscv_single_cycle__DOT__registers[28]),32);
    bufp->fullIData(oldp+64,(vlSelf->riscv_single_cycle__DOT__registers[29]),32);
    bufp->fullIData(oldp+65,(vlSelf->riscv_single_cycle__DOT__registers[30]),32);
    bufp->fullIData(oldp+66,(vlSelf->riscv_single_cycle__DOT__registers[31]),32);
    bufp->fullIData(oldp+67,(vlSelf->riscv_single_cycle__DOT__instruction),32);
    bufp->fullIData(oldp+68,((((- (IData)((vlSelf->riscv_single_cycle__DOT__instruction 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->riscv_single_cycle__DOT__instruction 
                                           >> 0x14U))),32);
    bufp->fullCData(oldp+69,((0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+70,((0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                       >> 7U))),5);
    bufp->fullSData(oldp+71,((vlSelf->riscv_single_cycle__DOT__instruction 
                              >> 0x14U)),12);
    bufp->fullBit(oldp+72,((IData)((0x13U == (0x707fU 
                                              & vlSelf->riscv_single_cycle__DOT__instruction)))));
    bufp->fullBit(oldp+73,(vlSelf->clk));
    bufp->fullBit(oldp+74,(vlSelf->reset));
    bufp->fullIData(oldp+75,(vlSelf->pc),32);
    bufp->fullIData(oldp+76,(((0U == (0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                               >> 0xfU)))
                               ? 0U : vlSelf->riscv_single_cycle__DOT__registers
                              [(0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                         >> 0xfU))])),32);
    bufp->fullIData(oldp+77,((((0U == (0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                                >> 0xfU)))
                                ? 0U : vlSelf->riscv_single_cycle__DOT__registers
                               [(0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                          >> 0xfU))]) 
                              + (((- (IData)((vlSelf->riscv_single_cycle__DOT__instruction 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->riscv_single_cycle__DOT__instruction 
                                              >> 0x14U)))),32);
}
