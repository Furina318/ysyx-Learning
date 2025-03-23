// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrv32e__Syms.h"


void Vrv32e___024root__trace_chg_sub_0(Vrv32e___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vrv32e___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root__trace_chg_top_0\n"); );
    // Init
    Vrv32e___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrv32e___024root*>(voidSelf);
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vrv32e___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vrv32e___024root__trace_chg_sub_0(Vrv32e___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->rv32e__DOT__data_out),32);
        bufp->chgIData(oldp+1,(vlSelf->rv32e__DOT__regfile__DOT__regs[0]),32);
        bufp->chgIData(oldp+2,(vlSelf->rv32e__DOT__regfile__DOT__regs[1]),32);
        bufp->chgIData(oldp+3,(vlSelf->rv32e__DOT__regfile__DOT__regs[2]),32);
        bufp->chgIData(oldp+4,(vlSelf->rv32e__DOT__regfile__DOT__regs[3]),32);
        bufp->chgIData(oldp+5,(vlSelf->rv32e__DOT__regfile__DOT__regs[4]),32);
        bufp->chgIData(oldp+6,(vlSelf->rv32e__DOT__regfile__DOT__regs[5]),32);
        bufp->chgIData(oldp+7,(vlSelf->rv32e__DOT__regfile__DOT__regs[6]),32);
        bufp->chgIData(oldp+8,(vlSelf->rv32e__DOT__regfile__DOT__regs[7]),32);
        bufp->chgIData(oldp+9,(vlSelf->rv32e__DOT__regfile__DOT__regs[8]),32);
        bufp->chgIData(oldp+10,(vlSelf->rv32e__DOT__regfile__DOT__regs[9]),32);
        bufp->chgIData(oldp+11,(vlSelf->rv32e__DOT__regfile__DOT__regs[10]),32);
        bufp->chgIData(oldp+12,(vlSelf->rv32e__DOT__regfile__DOT__regs[11]),32);
        bufp->chgIData(oldp+13,(vlSelf->rv32e__DOT__regfile__DOT__regs[12]),32);
        bufp->chgIData(oldp+14,(vlSelf->rv32e__DOT__regfile__DOT__regs[13]),32);
        bufp->chgIData(oldp+15,(vlSelf->rv32e__DOT__regfile__DOT__regs[14]),32);
        bufp->chgIData(oldp+16,(vlSelf->rv32e__DOT__regfile__DOT__regs[15]),32);
        bufp->chgIData(oldp+17,(vlSelf->rv32e__DOT__regfile__DOT__regs[16]),32);
        bufp->chgIData(oldp+18,(vlSelf->rv32e__DOT__regfile__DOT__regs[17]),32);
        bufp->chgIData(oldp+19,(vlSelf->rv32e__DOT__regfile__DOT__regs[18]),32);
        bufp->chgIData(oldp+20,(vlSelf->rv32e__DOT__regfile__DOT__regs[19]),32);
        bufp->chgIData(oldp+21,(vlSelf->rv32e__DOT__regfile__DOT__regs[20]),32);
        bufp->chgIData(oldp+22,(vlSelf->rv32e__DOT__regfile__DOT__regs[21]),32);
        bufp->chgIData(oldp+23,(vlSelf->rv32e__DOT__regfile__DOT__regs[22]),32);
        bufp->chgIData(oldp+24,(vlSelf->rv32e__DOT__regfile__DOT__regs[23]),32);
        bufp->chgIData(oldp+25,(vlSelf->rv32e__DOT__regfile__DOT__regs[24]),32);
        bufp->chgIData(oldp+26,(vlSelf->rv32e__DOT__regfile__DOT__regs[25]),32);
        bufp->chgIData(oldp+27,(vlSelf->rv32e__DOT__regfile__DOT__regs[26]),32);
        bufp->chgIData(oldp+28,(vlSelf->rv32e__DOT__regfile__DOT__regs[27]),32);
        bufp->chgIData(oldp+29,(vlSelf->rv32e__DOT__regfile__DOT__regs[28]),32);
        bufp->chgIData(oldp+30,(vlSelf->rv32e__DOT__regfile__DOT__regs[29]),32);
        bufp->chgIData(oldp+31,(vlSelf->rv32e__DOT__regfile__DOT__regs[30]),32);
        bufp->chgIData(oldp+32,(vlSelf->rv32e__DOT__regfile__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+33,(vlSelf->rv32e__DOT__pc),32);
        bufp->chgIData(oldp+34,(vlSelf->rv32e__DOT__instr),32);
        bufp->chgCData(oldp+35,(vlSelf->rv32e__DOT__opcode),7);
        bufp->chgCData(oldp+36,((0x1fU & (vlSelf->rv32e__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+37,((0x1fU & (vlSelf->rv32e__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+38,((0x1fU & (vlSelf->rv32e__DOT__instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+39,(vlSelf->rv32e__DOT__imm),32);
        bufp->chgCData(oldp+40,(vlSelf->rv32e__DOT__func3),3);
        bufp->chgCData(oldp+41,(vlSelf->rv32e__DOT__func7),7);
        bufp->chgBit(oldp+42,(vlSelf->rv32e__DOT__RegWrite));
        bufp->chgBit(oldp+43,(vlSelf->rv32e__DOT__MemWrite));
        bufp->chgBit(oldp+44,(vlSelf->rv32e__DOT__MemRead));
        bufp->chgIData(oldp+45,(vlSelf->rv32e__DOT__jal_target),32);
        bufp->chgBit(oldp+46,((0x6fU == (IData)(vlSelf->rv32e__DOT__opcode))));
        bufp->chgBit(oldp+47,(vlSelf->rv32e__DOT__is_jalr));
        bufp->chgCData(oldp+48,(vlSelf->rv32e__DOT__alu_op),4);
        bufp->chgIData(oldp+49,(vlSelf->rv32e__DOT__id_stage__DOT__immI),32);
        bufp->chgIData(oldp+50,((0xfffff000U & vlSelf->rv32e__DOT__instr)),32);
        bufp->chgIData(oldp+51,((((- (IData)((vlSelf->rv32e__DOT__instr 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelf->rv32e__DOT__instr 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->rv32e__DOT__instr 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+52,((((- (IData)((vlSelf->rv32e__DOT__instr 
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
        bufp->chgIData(oldp+53,((((- (IData)((vlSelf->rv32e__DOT__instr 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->rv32e__DOT__instr) 
                                               | ((0x800U 
                                                   & (vlSelf->rv32e__DOT__instr 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->rv32e__DOT__instr 
                                                        >> 0x14U)))))),32);
        bufp->chgCData(oldp+54,(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+55,(vlSelf->rv32e__DOT__rs1_val),32);
        bufp->chgIData(oldp+56,(vlSelf->rv32e__DOT__rs2_val),32);
        bufp->chgIData(oldp+57,((0xfffffffeU & vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr)),32);
        bufp->chgIData(oldp+58,(vlSelf->rv32e__DOT__alu_result),32);
        bufp->chgBit(oldp+59,((0U == vlSelf->rv32e__DOT__alu_result)));
        bufp->chgBit(oldp+60,(vlSelf->rv32e__DOT__alu_less));
        bufp->chgIData(oldp+61,(vlSelf->rv32e__DOT____Vcellinp__alu__b),32);
        bufp->chgIData(oldp+62,(vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr),32);
    }
    bufp->chgBit(oldp+63,(vlSelf->clk));
    bufp->chgBit(oldp+64,(vlSelf->reset));
    bufp->chgIData(oldp+65,(((0x37U == (IData)(vlSelf->rv32e__DOT__opcode))
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
    bufp->chgBit(oldp+66,(((0x63U == (IData)(vlSelf->rv32e__DOT__opcode)) 
                           & (((0U != vlSelf->rv32e__DOT__alu_result) 
                               & (1U == (IData)(vlSelf->rv32e__DOT__func3))) 
                              | (((0U == (IData)(vlSelf->rv32e__DOT__func3)) 
                                  & (0U == vlSelf->rv32e__DOT__alu_result)) 
                                 | (((4U == (IData)(vlSelf->rv32e__DOT__func3)) 
                                     & (IData)(vlSelf->rv32e__DOT__alu_less)) 
                                    | ((~ (IData)(vlSelf->rv32e__DOT__alu_less)) 
                                       & (5U == (IData)(vlSelf->rv32e__DOT__func3)))))))));
    bufp->chgIData(oldp+67,(((IData)(vlSelf->rv32e__DOT__is_jalr)
                              ? (0xfffffffeU & vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr)
                              : vlSelf->rv32e__DOT__jal_target)),32);
    bufp->chgBit(oldp+68,(((0x6fU == (IData)(vlSelf->rv32e__DOT__opcode)) 
                           | ((IData)(vlSelf->rv32e__DOT__is_jalr) 
                              | ((0x63U == (IData)(vlSelf->rv32e__DOT__opcode)) 
                                 & (((0U != vlSelf->rv32e__DOT__alu_result) 
                                     & (1U == (IData)(vlSelf->rv32e__DOT__func3))) 
                                    | (((0U == (IData)(vlSelf->rv32e__DOT__func3)) 
                                        & (0U == vlSelf->rv32e__DOT__alu_result)) 
                                       | (((4U == (IData)(vlSelf->rv32e__DOT__func3)) 
                                           & (IData)(vlSelf->rv32e__DOT__alu_less)) 
                                          | ((~ (IData)(vlSelf->rv32e__DOT__alu_less)) 
                                             & (5U 
                                                == (IData)(vlSelf->rv32e__DOT__func3)))))))))));
}

void Vrv32e___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root__trace_cleanup\n"); );
    // Init
    Vrv32e___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrv32e___024root*>(voidSelf);
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
