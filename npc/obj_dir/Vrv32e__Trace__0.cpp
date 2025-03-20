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
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+0,(vlSelf->rv32e__DOT__pc_next),32);
        bufp->chgIData(oldp+1,(vlSelf->rv32e__DOT__imm),32);
        bufp->chgIData(oldp+2,(vlSelf->rv32e__DOT__alu_result),32);
        bufp->chgBit(oldp+3,(vlSelf->rv32e__DOT__less));
        bufp->chgBit(oldp+4,(vlSelf->rv32e__DOT__zero));
        bufp->chgBit(oldp+5,(vlSelf->rv32e__DOT__pc_a_src));
        bufp->chgBit(oldp+6,(vlSelf->rv32e__DOT__pc_b_src));
        bufp->chgIData(oldp+7,(vlSelf->rv32e__DOT__alu_inst__DOT__A),32);
        bufp->chgIData(oldp+8,(vlSelf->rv32e__DOT__alu_inst__DOT__B),32);
        bufp->chgIData(oldp+9,(vlSelf->rv32e__DOT__alu_inst__DOT__adder_out),32);
        bufp->chgIData(oldp+10,(vlSelf->rv32e__DOT__alu_inst__DOT__sub_out),32);
        bufp->chgIData(oldp+11,(vlSelf->rv32e__DOT__alu_inst__DOT__shift_out),32);
        bufp->chgIData(oldp+12,(vlSelf->rv32e__DOT__alu_inst__DOT__xor_out),32);
        bufp->chgIData(oldp+13,(vlSelf->rv32e__DOT__alu_inst__DOT__or_out),32);
        bufp->chgIData(oldp+14,(vlSelf->rv32e__DOT__alu_inst__DOT__and_out),32);
        bufp->chgIData(oldp+15,(((IData)(vlSelf->rv32e__DOT__pc_a_src)
                                  ? vlSelf->rv32e__DOT__imm
                                  : 4U)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+16,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0]),32);
        bufp->chgIData(oldp+17,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[1]),32);
        bufp->chgIData(oldp+18,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[2]),32);
        bufp->chgIData(oldp+19,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[3]),32);
        bufp->chgIData(oldp+20,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[4]),32);
        bufp->chgIData(oldp+21,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[5]),32);
        bufp->chgIData(oldp+22,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[6]),32);
        bufp->chgIData(oldp+23,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[7]),32);
        bufp->chgIData(oldp+24,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[8]),32);
        bufp->chgIData(oldp+25,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[9]),32);
        bufp->chgIData(oldp+26,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[10]),32);
        bufp->chgIData(oldp+27,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[11]),32);
        bufp->chgIData(oldp+28,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[12]),32);
        bufp->chgIData(oldp+29,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[13]),32);
        bufp->chgIData(oldp+30,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[14]),32);
        bufp->chgIData(oldp+31,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[15]),32);
        bufp->chgIData(oldp+32,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[16]),32);
        bufp->chgIData(oldp+33,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[17]),32);
        bufp->chgIData(oldp+34,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[18]),32);
        bufp->chgIData(oldp+35,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[19]),32);
        bufp->chgIData(oldp+36,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[20]),32);
        bufp->chgIData(oldp+37,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[21]),32);
        bufp->chgIData(oldp+38,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[22]),32);
        bufp->chgIData(oldp+39,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[23]),32);
        bufp->chgIData(oldp+40,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[24]),32);
        bufp->chgIData(oldp+41,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[25]),32);
        bufp->chgIData(oldp+42,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[26]),32);
        bufp->chgIData(oldp+43,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[27]),32);
        bufp->chgIData(oldp+44,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[28]),32);
        bufp->chgIData(oldp+45,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[29]),32);
        bufp->chgIData(oldp+46,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[30]),32);
        bufp->chgIData(oldp+47,(vlSelf->rv32e__DOT__register_files_inst__DOT__regs[31]),32);
        bufp->chgIData(oldp+48,(vlSelf->rv32e__DOT__register_files_inst__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+49,(vlSelf->rv32e__DOT__pc_now),32);
        bufp->chgCData(oldp+50,(vlSelf->rv32e__DOT__i_type),3);
        bufp->chgBit(oldp+51,(vlSelf->rv32e__DOT__reg_wr));
        bufp->chgBit(oldp+52,(vlSelf->rv32e__DOT__alu_a_src));
        bufp->chgCData(oldp+53,(vlSelf->rv32e__DOT__alu_b_src),2);
        bufp->chgCData(oldp+54,(vlSelf->rv32e__DOT__alu_ctr),4);
        bufp->chgBit(oldp+55,(vlSelf->rv32e__DOT__mem_to_reg));
        bufp->chgBit(oldp+56,(vlSelf->rv32e__DOT__mem_wr));
        bufp->chgBit(oldp+57,(vlSelf->rv32e__DOT__mem_rd));
        bufp->chgCData(oldp+58,(vlSelf->rv32e__DOT__mem_op),3);
        bufp->chgCData(oldp+59,(vlSelf->rv32e__DOT__branch),3);
        bufp->chgIData(oldp+60,(vlSelf->rv32e__DOT__time_counter),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+61,(vlSelf->rv32e__DOT__inst),32);
        bufp->chgIData(oldp+62,(vlSelf->rv32e__DOT__rs1_data),32);
        bufp->chgIData(oldp+63,(vlSelf->rv32e__DOT__rs2_data),32);
        bufp->chgIData(oldp+64,(vlSelf->rv32e__DOT__mem_data_out),32);
        bufp->chgCData(oldp+65,((0x1fU & (vlSelf->rv32e__DOT__inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+66,((0x1fU & (vlSelf->rv32e__DOT__inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+67,((0x1fU & (vlSelf->rv32e__DOT__inst 
                                          >> 7U))),5);
        bufp->chgCData(oldp+68,((0x7fU & vlSelf->rv32e__DOT__inst)),7);
        bufp->chgCData(oldp+69,((7U & (vlSelf->rv32e__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+70,((vlSelf->rv32e__DOT__inst 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+71,((((- (IData)((vlSelf->rv32e__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->rv32e__DOT__inst 
                                              >> 0x14U))),32);
        bufp->chgIData(oldp+72,((0xfffff000U & vlSelf->rv32e__DOT__inst)),32);
        bufp->chgIData(oldp+73,((((- (IData)((vlSelf->rv32e__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelf->rv32e__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->rv32e__DOT__inst 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+74,((((- (IData)((vlSelf->rv32e__DOT__inst 
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
        bufp->chgIData(oldp+75,((((- (IData)((vlSelf->rv32e__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->rv32e__DOT__inst) 
                                               | ((0x800U 
                                                   & (vlSelf->rv32e__DOT__inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->rv32e__DOT__inst 
                                                        >> 0x14U)))))),32);
        bufp->chgIData(oldp+76,(vlSelf->rv32e__DOT__mem_inst__DOT__read_data),32);
        bufp->chgIData(oldp+77,(vlSelf->rv32e__DOT__mem_inst__DOT__temp_data),32);
    }
    bufp->chgBit(oldp+78,(vlSelf->clk));
    bufp->chgBit(oldp+79,(vlSelf->rst));
    bufp->chgIData(oldp+80,(((IData)(vlSelf->rv32e__DOT__mem_to_reg)
                              ? vlSelf->rv32e__DOT__mem_data_out
                              : vlSelf->rv32e__DOT__alu_result)),32);
    bufp->chgIData(oldp+81,(((IData)(vlSelf->rv32e__DOT__pc_b_src)
                              ? vlSelf->rv32e__DOT__rs1_data
                              : vlSelf->rv32e__DOT__pc_now)),32);
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
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
