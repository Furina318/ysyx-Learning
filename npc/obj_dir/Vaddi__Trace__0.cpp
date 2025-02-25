// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaddi__Syms.h"


void Vaddi___024root__trace_chg_sub_0(Vaddi___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vaddi___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddi___024root__trace_chg_top_0\n"); );
    // Init
    Vaddi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaddi___024root*>(voidSelf);
    Vaddi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vaddi___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vaddi___024root__trace_chg_sub_0(Vaddi___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddi___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->riscv_single_cycle__DOT__instr_mem[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->riscv_single_cycle__DOT__instr_mem[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->riscv_single_cycle__DOT__instr_mem[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->riscv_single_cycle__DOT__instr_mem[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->riscv_single_cycle__DOT__instr_mem[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->riscv_single_cycle__DOT__instr_mem[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->riscv_single_cycle__DOT__instr_mem[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->riscv_single_cycle__DOT__instr_mem[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->riscv_single_cycle__DOT__instr_mem[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->riscv_single_cycle__DOT__instr_mem[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->riscv_single_cycle__DOT__instr_mem[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->riscv_single_cycle__DOT__instr_mem[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->riscv_single_cycle__DOT__instr_mem[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->riscv_single_cycle__DOT__instr_mem[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->riscv_single_cycle__DOT__instr_mem[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->riscv_single_cycle__DOT__instr_mem[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->riscv_single_cycle__DOT__instr_mem[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->riscv_single_cycle__DOT__instr_mem[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->riscv_single_cycle__DOT__instr_mem[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->riscv_single_cycle__DOT__instr_mem[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->riscv_single_cycle__DOT__instr_mem[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->riscv_single_cycle__DOT__instr_mem[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->riscv_single_cycle__DOT__instr_mem[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->riscv_single_cycle__DOT__instr_mem[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->riscv_single_cycle__DOT__instr_mem[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->riscv_single_cycle__DOT__instr_mem[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->riscv_single_cycle__DOT__instr_mem[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->riscv_single_cycle__DOT__instr_mem[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->riscv_single_cycle__DOT__instr_mem[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->riscv_single_cycle__DOT__instr_mem[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->riscv_single_cycle__DOT__instr_mem[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->riscv_single_cycle__DOT__instr_mem[31]),32);
        bufp->chgIData(oldp+32,(vlSelf->riscv_single_cycle__DOT__i),32);
        bufp->chgIData(oldp+33,(vlSelf->riscv_single_cycle__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+34,(vlSelf->riscv_single_cycle__DOT__registers[0]),32);
        bufp->chgIData(oldp+35,(vlSelf->riscv_single_cycle__DOT__registers[1]),32);
        bufp->chgIData(oldp+36,(vlSelf->riscv_single_cycle__DOT__registers[2]),32);
        bufp->chgIData(oldp+37,(vlSelf->riscv_single_cycle__DOT__registers[3]),32);
        bufp->chgIData(oldp+38,(vlSelf->riscv_single_cycle__DOT__registers[4]),32);
        bufp->chgIData(oldp+39,(vlSelf->riscv_single_cycle__DOT__registers[5]),32);
        bufp->chgIData(oldp+40,(vlSelf->riscv_single_cycle__DOT__registers[6]),32);
        bufp->chgIData(oldp+41,(vlSelf->riscv_single_cycle__DOT__registers[7]),32);
        bufp->chgIData(oldp+42,(vlSelf->riscv_single_cycle__DOT__registers[8]),32);
        bufp->chgIData(oldp+43,(vlSelf->riscv_single_cycle__DOT__registers[9]),32);
        bufp->chgIData(oldp+44,(vlSelf->riscv_single_cycle__DOT__registers[10]),32);
        bufp->chgIData(oldp+45,(vlSelf->riscv_single_cycle__DOT__registers[11]),32);
        bufp->chgIData(oldp+46,(vlSelf->riscv_single_cycle__DOT__registers[12]),32);
        bufp->chgIData(oldp+47,(vlSelf->riscv_single_cycle__DOT__registers[13]),32);
        bufp->chgIData(oldp+48,(vlSelf->riscv_single_cycle__DOT__registers[14]),32);
        bufp->chgIData(oldp+49,(vlSelf->riscv_single_cycle__DOT__registers[15]),32);
        bufp->chgIData(oldp+50,(vlSelf->riscv_single_cycle__DOT__registers[16]),32);
        bufp->chgIData(oldp+51,(vlSelf->riscv_single_cycle__DOT__registers[17]),32);
        bufp->chgIData(oldp+52,(vlSelf->riscv_single_cycle__DOT__registers[18]),32);
        bufp->chgIData(oldp+53,(vlSelf->riscv_single_cycle__DOT__registers[19]),32);
        bufp->chgIData(oldp+54,(vlSelf->riscv_single_cycle__DOT__registers[20]),32);
        bufp->chgIData(oldp+55,(vlSelf->riscv_single_cycle__DOT__registers[21]),32);
        bufp->chgIData(oldp+56,(vlSelf->riscv_single_cycle__DOT__registers[22]),32);
        bufp->chgIData(oldp+57,(vlSelf->riscv_single_cycle__DOT__registers[23]),32);
        bufp->chgIData(oldp+58,(vlSelf->riscv_single_cycle__DOT__registers[24]),32);
        bufp->chgIData(oldp+59,(vlSelf->riscv_single_cycle__DOT__registers[25]),32);
        bufp->chgIData(oldp+60,(vlSelf->riscv_single_cycle__DOT__registers[26]),32);
        bufp->chgIData(oldp+61,(vlSelf->riscv_single_cycle__DOT__registers[27]),32);
        bufp->chgIData(oldp+62,(vlSelf->riscv_single_cycle__DOT__registers[28]),32);
        bufp->chgIData(oldp+63,(vlSelf->riscv_single_cycle__DOT__registers[29]),32);
        bufp->chgIData(oldp+64,(vlSelf->riscv_single_cycle__DOT__registers[30]),32);
        bufp->chgIData(oldp+65,(vlSelf->riscv_single_cycle__DOT__registers[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+66,(vlSelf->riscv_single_cycle__DOT__instruction),32);
        bufp->chgIData(oldp+67,((((- (IData)((vlSelf->riscv_single_cycle__DOT__instruction 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->riscv_single_cycle__DOT__instruction 
                                              >> 0x14U))),32);
        bufp->chgCData(oldp+68,((0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+69,((0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                          >> 7U))),5);
        bufp->chgSData(oldp+70,((vlSelf->riscv_single_cycle__DOT__instruction 
                                 >> 0x14U)),12);
        bufp->chgBit(oldp+71,((IData)((0x13U == (0x707fU 
                                                 & vlSelf->riscv_single_cycle__DOT__instruction)))));
    }
    bufp->chgBit(oldp+72,(vlSelf->clk));
    bufp->chgBit(oldp+73,(vlSelf->reset));
    bufp->chgIData(oldp+74,(vlSelf->pc),32);
    bufp->chgIData(oldp+75,(((0U == (0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                              >> 0xfU)))
                              ? 0U : vlSelf->riscv_single_cycle__DOT__registers
                             [(0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                        >> 0xfU))])),32);
    bufp->chgIData(oldp+76,((((0U == (0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                               >> 0xfU)))
                               ? 0U : vlSelf->riscv_single_cycle__DOT__registers
                              [(0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                         >> 0xfU))]) 
                             + (((- (IData)((vlSelf->riscv_single_cycle__DOT__instruction 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelf->riscv_single_cycle__DOT__instruction 
                                             >> 0x14U)))),32);
}

void Vaddi___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddi___024root__trace_cleanup\n"); );
    // Init
    Vaddi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaddi___024root*>(voidSelf);
    Vaddi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
