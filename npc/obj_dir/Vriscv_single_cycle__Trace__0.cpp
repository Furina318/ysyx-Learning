// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_single_cycle__Syms.h"


void Vriscv_single_cycle___024root__trace_chg_sub_0(Vriscv_single_cycle___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vriscv_single_cycle___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root__trace_chg_top_0\n"); );
    // Init
    Vriscv_single_cycle___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_single_cycle___024root*>(voidSelf);
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vriscv_single_cycle___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vriscv_single_cycle___024root__trace_chg_sub_0(Vriscv_single_cycle___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root__trace_chg_sub_0\n"); );
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
        bufp->chgIData(oldp+32,(vlSelf->riscv_single_cycle__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+33,(vlSelf->riscv_single_cycle__DOT__instruction),32);
        bufp->chgIData(oldp+34,(((0U == (0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                                  >> 0xfU)))
                                  ? 0U : vlSelf->riscv_single_cycle__DOT__regs
                                 [(0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                            >> 0xfU))])),32);
        bufp->chgIData(oldp+35,(((0U == (0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                                  >> 0x14U)))
                                  ? 0U : vlSelf->riscv_single_cycle__DOT__regs
                                 [(0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                            >> 0x14U))])),32);
        bufp->chgIData(oldp+36,(vlSelf->riscv_single_cycle__DOT__imm),32);
        bufp->chgIData(oldp+37,(vlSelf->riscv_single_cycle__DOT__alu_result),32);
        bufp->chgCData(oldp+38,((0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+39,((0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+40,((0x1fU & (vlSelf->riscv_single_cycle__DOT__instruction 
                                          >> 7U))),5);
        bufp->chgCData(oldp+41,((0x7fU & vlSelf->riscv_single_cycle__DOT__instruction)),7);
        bufp->chgCData(oldp+42,((7U & (vlSelf->riscv_single_cycle__DOT__instruction 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+43,(vlSelf->riscv_single_cycle__DOT__is_addi));
        bufp->chgBit(oldp+44,((0x6fU == (0x7fU & vlSelf->riscv_single_cycle__DOT__instruction))));
        bufp->chgBit(oldp+45,(vlSelf->riscv_single_cycle__DOT__is_jalr));
        bufp->chgBit(oldp+46,((IData)((0x2023U == (0x707fU 
                                                   & vlSelf->riscv_single_cycle__DOT__instruction)))));
        bufp->chgBit(oldp+47,((0x17U == (0x7fU & vlSelf->riscv_single_cycle__DOT__instruction))));
        bufp->chgBit(oldp+48,((0x37U == (0x7fU & vlSelf->riscv_single_cycle__DOT__instruction))));
        bufp->chgBit(oldp+49,((0x100073U == vlSelf->riscv_single_cycle__DOT__instruction)));
        bufp->chgBit(oldp+50,(((IData)(vlSelf->riscv_single_cycle__DOT__is_addi) 
                               | ((0x6fU == (0x7fU 
                                             & vlSelf->riscv_single_cycle__DOT__instruction)) 
                                  | ((IData)(vlSelf->riscv_single_cycle__DOT__is_jalr) 
                                     | ((0x17U == (0x7fU 
                                                   & vlSelf->riscv_single_cycle__DOT__instruction)) 
                                        | (0x37U == 
                                           (0x7fU & vlSelf->riscv_single_cycle__DOT__instruction))))))));
        bufp->chgIData(oldp+51,(vlSelf->riscv_single_cycle__DOT__regs[0]),32);
        bufp->chgIData(oldp+52,(vlSelf->riscv_single_cycle__DOT__regs[1]),32);
        bufp->chgIData(oldp+53,(vlSelf->riscv_single_cycle__DOT__regs[2]),32);
        bufp->chgIData(oldp+54,(vlSelf->riscv_single_cycle__DOT__regs[3]),32);
        bufp->chgIData(oldp+55,(vlSelf->riscv_single_cycle__DOT__regs[4]),32);
        bufp->chgIData(oldp+56,(vlSelf->riscv_single_cycle__DOT__regs[5]),32);
        bufp->chgIData(oldp+57,(vlSelf->riscv_single_cycle__DOT__regs[6]),32);
        bufp->chgIData(oldp+58,(vlSelf->riscv_single_cycle__DOT__regs[7]),32);
        bufp->chgIData(oldp+59,(vlSelf->riscv_single_cycle__DOT__regs[8]),32);
        bufp->chgIData(oldp+60,(vlSelf->riscv_single_cycle__DOT__regs[9]),32);
        bufp->chgIData(oldp+61,(vlSelf->riscv_single_cycle__DOT__regs[10]),32);
        bufp->chgIData(oldp+62,(vlSelf->riscv_single_cycle__DOT__regs[11]),32);
        bufp->chgIData(oldp+63,(vlSelf->riscv_single_cycle__DOT__regs[12]),32);
        bufp->chgIData(oldp+64,(vlSelf->riscv_single_cycle__DOT__regs[13]),32);
        bufp->chgIData(oldp+65,(vlSelf->riscv_single_cycle__DOT__regs[14]),32);
        bufp->chgIData(oldp+66,(vlSelf->riscv_single_cycle__DOT__regs[15]),32);
        bufp->chgIData(oldp+67,(vlSelf->riscv_single_cycle__DOT__regs[16]),32);
        bufp->chgIData(oldp+68,(vlSelf->riscv_single_cycle__DOT__regs[17]),32);
        bufp->chgIData(oldp+69,(vlSelf->riscv_single_cycle__DOT__regs[18]),32);
        bufp->chgIData(oldp+70,(vlSelf->riscv_single_cycle__DOT__regs[19]),32);
        bufp->chgIData(oldp+71,(vlSelf->riscv_single_cycle__DOT__regs[20]),32);
        bufp->chgIData(oldp+72,(vlSelf->riscv_single_cycle__DOT__regs[21]),32);
        bufp->chgIData(oldp+73,(vlSelf->riscv_single_cycle__DOT__regs[22]),32);
        bufp->chgIData(oldp+74,(vlSelf->riscv_single_cycle__DOT__regs[23]),32);
        bufp->chgIData(oldp+75,(vlSelf->riscv_single_cycle__DOT__regs[24]),32);
        bufp->chgIData(oldp+76,(vlSelf->riscv_single_cycle__DOT__regs[25]),32);
        bufp->chgIData(oldp+77,(vlSelf->riscv_single_cycle__DOT__regs[26]),32);
        bufp->chgIData(oldp+78,(vlSelf->riscv_single_cycle__DOT__regs[27]),32);
        bufp->chgIData(oldp+79,(vlSelf->riscv_single_cycle__DOT__regs[28]),32);
        bufp->chgIData(oldp+80,(vlSelf->riscv_single_cycle__DOT__regs[29]),32);
        bufp->chgIData(oldp+81,(vlSelf->riscv_single_cycle__DOT__regs[30]),32);
        bufp->chgIData(oldp+82,(vlSelf->riscv_single_cycle__DOT__regs[31]),32);
        bufp->chgIData(oldp+83,(vlSelf->riscv_single_cycle__DOT__i),32);
        bufp->chgIData(oldp+84,(vlSelf->riscv_single_cycle__DOT__data_mem[0]),32);
        bufp->chgIData(oldp+85,(vlSelf->riscv_single_cycle__DOT__data_mem[1]),32);
        bufp->chgIData(oldp+86,(vlSelf->riscv_single_cycle__DOT__data_mem[2]),32);
        bufp->chgIData(oldp+87,(vlSelf->riscv_single_cycle__DOT__data_mem[3]),32);
        bufp->chgIData(oldp+88,(vlSelf->riscv_single_cycle__DOT__data_mem[4]),32);
        bufp->chgIData(oldp+89,(vlSelf->riscv_single_cycle__DOT__data_mem[5]),32);
        bufp->chgIData(oldp+90,(vlSelf->riscv_single_cycle__DOT__data_mem[6]),32);
        bufp->chgIData(oldp+91,(vlSelf->riscv_single_cycle__DOT__data_mem[7]),32);
        bufp->chgIData(oldp+92,(vlSelf->riscv_single_cycle__DOT__data_mem[8]),32);
        bufp->chgIData(oldp+93,(vlSelf->riscv_single_cycle__DOT__data_mem[9]),32);
        bufp->chgIData(oldp+94,(vlSelf->riscv_single_cycle__DOT__data_mem[10]),32);
        bufp->chgIData(oldp+95,(vlSelf->riscv_single_cycle__DOT__data_mem[11]),32);
        bufp->chgIData(oldp+96,(vlSelf->riscv_single_cycle__DOT__data_mem[12]),32);
        bufp->chgIData(oldp+97,(vlSelf->riscv_single_cycle__DOT__data_mem[13]),32);
        bufp->chgIData(oldp+98,(vlSelf->riscv_single_cycle__DOT__data_mem[14]),32);
        bufp->chgIData(oldp+99,(vlSelf->riscv_single_cycle__DOT__data_mem[15]),32);
        bufp->chgIData(oldp+100,(vlSelf->riscv_single_cycle__DOT__data_mem[16]),32);
        bufp->chgIData(oldp+101,(vlSelf->riscv_single_cycle__DOT__data_mem[17]),32);
        bufp->chgIData(oldp+102,(vlSelf->riscv_single_cycle__DOT__data_mem[18]),32);
        bufp->chgIData(oldp+103,(vlSelf->riscv_single_cycle__DOT__data_mem[19]),32);
        bufp->chgIData(oldp+104,(vlSelf->riscv_single_cycle__DOT__data_mem[20]),32);
        bufp->chgIData(oldp+105,(vlSelf->riscv_single_cycle__DOT__data_mem[21]),32);
        bufp->chgIData(oldp+106,(vlSelf->riscv_single_cycle__DOT__data_mem[22]),32);
        bufp->chgIData(oldp+107,(vlSelf->riscv_single_cycle__DOT__data_mem[23]),32);
        bufp->chgIData(oldp+108,(vlSelf->riscv_single_cycle__DOT__data_mem[24]),32);
        bufp->chgIData(oldp+109,(vlSelf->riscv_single_cycle__DOT__data_mem[25]),32);
        bufp->chgIData(oldp+110,(vlSelf->riscv_single_cycle__DOT__data_mem[26]),32);
        bufp->chgIData(oldp+111,(vlSelf->riscv_single_cycle__DOT__data_mem[27]),32);
        bufp->chgIData(oldp+112,(vlSelf->riscv_single_cycle__DOT__data_mem[28]),32);
        bufp->chgIData(oldp+113,(vlSelf->riscv_single_cycle__DOT__data_mem[29]),32);
        bufp->chgIData(oldp+114,(vlSelf->riscv_single_cycle__DOT__data_mem[30]),32);
        bufp->chgIData(oldp+115,(vlSelf->riscv_single_cycle__DOT__data_mem[31]),32);
    }
    bufp->chgBit(oldp+116,(vlSelf->clk));
    bufp->chgBit(oldp+117,(vlSelf->reset));
    bufp->chgIData(oldp+118,(vlSelf->pc),32);
    bufp->chgIData(oldp+119,(vlSelf->x1),32);
    bufp->chgIData(oldp+120,(vlSelf->x2),32);
    bufp->chgIData(oldp+121,(vlSelf->x3),32);
    bufp->chgIData(oldp+122,(vlSelf->x4),32);
    bufp->chgIData(oldp+123,(vlSelf->x5),32);
    bufp->chgIData(oldp+124,(((0x6fU == (0x7fU & vlSelf->riscv_single_cycle__DOT__instruction))
                               ? vlSelf->riscv_single_cycle__DOT____VdfgTmp_h8a6dd36a__0
                               : ((IData)(vlSelf->riscv_single_cycle__DOT__is_jalr)
                                   ? (0xfffffffeU & vlSelf->riscv_single_cycle__DOT__alu_result)
                                   : (((0x100073U != vlSelf->riscv_single_cycle__DOT__instruction) 
                                       & (0x80000018U 
                                          > vlSelf->pc))
                                       ? ((IData)(4U) 
                                          + vlSelf->pc)
                                       : vlSelf->pc)))),32);
    bufp->chgIData(oldp+125,(((IData)(vlSelf->riscv_single_cycle__DOT__is_addi)
                               ? vlSelf->riscv_single_cycle__DOT__alu_result
                               : (((0x6fU == (0x7fU 
                                              & vlSelf->riscv_single_cycle__DOT__instruction)) 
                                   | (IData)(vlSelf->riscv_single_cycle__DOT__is_jalr))
                                   ? ((IData)(4U) + vlSelf->pc)
                                   : ((0x17U == (0x7fU 
                                                 & vlSelf->riscv_single_cycle__DOT__instruction))
                                       ? vlSelf->riscv_single_cycle__DOT____VdfgTmp_h8a6dd36a__0
                                       : ((0x37U == 
                                           (0x7fU & vlSelf->riscv_single_cycle__DOT__instruction))
                                           ? vlSelf->riscv_single_cycle__DOT__imm
                                           : 0U))))),32);
}

void Vriscv_single_cycle___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root__trace_cleanup\n"); );
    // Init
    Vriscv_single_cycle___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_single_cycle___024root*>(voidSelf);
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
