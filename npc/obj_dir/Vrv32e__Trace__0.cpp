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
        bufp->chgBit(oldp+0,(vlSelf->rv32e__DOT__wb_valid));
        bufp->chgBit(oldp+1,(vlSelf->rv32e__DOT__id_ready));
        bufp->chgCData(oldp+2,(vlSelf->rv32e__DOT__opcode),7);
        bufp->chgCData(oldp+3,(vlSelf->rv32e__DOT__rs1),5);
        bufp->chgCData(oldp+4,(vlSelf->rv32e__DOT__rs2),5);
        bufp->chgCData(oldp+5,(vlSelf->rv32e__DOT__rd),5);
        bufp->chgIData(oldp+6,(vlSelf->rv32e__DOT__imm),32);
        bufp->chgCData(oldp+7,(vlSelf->rv32e__DOT__func3),3);
        bufp->chgCData(oldp+8,(vlSelf->rv32e__DOT__func7),7);
        bufp->chgBit(oldp+9,(vlSelf->rv32e__DOT__RegWrite));
        bufp->chgBit(oldp+10,(vlSelf->rv32e__DOT__MemWrite));
        bufp->chgBit(oldp+11,(vlSelf->rv32e__DOT__MemRead));
        bufp->chgCData(oldp+12,(vlSelf->rv32e__DOT__alu_op),4);
        bufp->chgCData(oldp+13,(vlSelf->rv32e__DOT__MemLen),2);
        bufp->chgBit(oldp+14,(vlSelf->rv32e__DOT__id_valid));
        bufp->chgBit(oldp+15,(vlSelf->rv32e__DOT__ex_ready));
        bufp->chgIData(oldp+16,(vlSelf->rv32e__DOT__rs1_val),32);
        bufp->chgIData(oldp+17,(vlSelf->rv32e__DOT__rs2_val),32);
        bufp->chgIData(oldp+18,(vlSelf->rv32e__DOT__alu_result),32);
        bufp->chgBit(oldp+19,(vlSelf->rv32e__DOT__alu_zero));
        bufp->chgBit(oldp+20,(vlSelf->rv32e__DOT__alu_less));
        bufp->chgBit(oldp+21,(vlSelf->rv32e__DOT__ex_valid));
        bufp->chgBit(oldp+22,(vlSelf->rv32e__DOT__mem_ready));
        bufp->chgIData(oldp+23,(vlSelf->rv32e__DOT__data_out),32);
        bufp->chgBit(oldp+24,(vlSelf->rv32e__DOT__mem_valid));
        bufp->chgBit(oldp+25,(vlSelf->rv32e__DOT__wb_ready));
        bufp->chgBit(oldp+26,(vlSelf->rv32e__DOT__load_access_fault));
        bufp->chgBit(oldp+27,(vlSelf->rv32e__DOT__store_access_fault));
        bufp->chgIData(oldp+28,(vlSelf->rv32e__DOT__mem_fault_addr),32);
        bufp->chgIData(oldp+29,(vlSelf->rv32e__DOT__wb_data),32);
        bufp->chgIData(oldp+30,(vlSelf->rv32e__DOT__jal_target),32);
        bufp->chgIData(oldp+31,(vlSelf->rv32e__DOT__jalr_target),32);
        bufp->chgBit(oldp+32,(vlSelf->rv32e__DOT__is_jal));
        bufp->chgBit(oldp+33,(vlSelf->rv32e__DOT__is_jalr));
        bufp->chgBit(oldp+34,(vlSelf->rv32e__DOT__take_branch));
        bufp->chgIData(oldp+35,(vlSelf->rv32e__DOT__ex_stage__DOT__state),32);
        bufp->chgIData(oldp+36,(vlSelf->rv32e__DOT__ex_stage__DOT__next_state),32);
        bufp->chgCData(oldp+37,(vlSelf->rv32e__DOT__ex_stage__DOT__delay),2);
        bufp->chgIData(oldp+38,(vlSelf->rv32e__DOT__id_stage__DOT__state),32);
        bufp->chgIData(oldp+39,(vlSelf->rv32e__DOT__id_stage__DOT__next_state),32);
        bufp->chgIData(oldp+40,(vlSelf->rv32e__DOT__id_stage__DOT__instr_reg),32);
        bufp->chgCData(oldp+41,(vlSelf->rv32e__DOT__id_stage__DOT__delay),2);
        bufp->chgIData(oldp+42,(vlSelf->rv32e__DOT__id_stage__DOT__immI),32);
        bufp->chgIData(oldp+43,((0xfffff000U & vlSelf->rv32e__DOT__id_stage__DOT__instr_reg)),32);
        bufp->chgIData(oldp+44,((((- (IData)((vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+45,((((- (IData)((vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
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
        bufp->chgIData(oldp+46,((((- (IData)((vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->rv32e__DOT__id_stage__DOT__instr_reg) 
                                               | ((0x800U 
                                                   & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                        >> 0x14U)))))),32);
        bufp->chgCData(oldp+47,(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode),5);
        bufp->chgIData(oldp+48,(vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr),32);
        bufp->chgIData(oldp+49,(vlSelf->rv32e__DOT__mem_stage__DOT__state),32);
        bufp->chgIData(oldp+50,(vlSelf->rv32e__DOT__mem_stage__DOT__next_state),32);
        bufp->chgCData(oldp+51,(vlSelf->rv32e__DOT__mem_stage__DOT__delay),2);
        bufp->chgIData(oldp+52,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr),32);
        bufp->chgBit(oldp+53,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid));
        bufp->chgBit(oldp+54,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready));
        bufp->chgCData(oldp+55,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rresp),2);
        bufp->chgIData(oldp+56,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata),32);
        bufp->chgBit(oldp+57,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid));
        bufp->chgBit(oldp+58,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready));
        bufp->chgIData(oldp+59,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr),32);
        bufp->chgBit(oldp+60,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awready));
        bufp->chgBit(oldp+61,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awvalid));
        bufp->chgIData(oldp+62,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wdata),32);
        bufp->chgCData(oldp+63,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wstrb),4);
        bufp->chgBit(oldp+64,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid));
        bufp->chgBit(oldp+65,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready));
        bufp->chgCData(oldp+66,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bresp),2);
        bufp->chgBit(oldp+67,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bvalid));
        bufp->chgBit(oldp+68,(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bready));
        bufp->chgIData(oldp+69,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state),32);
        bufp->chgIData(oldp+70,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state),32);
        bufp->chgCData(oldp+71,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter),2);
        bufp->chgIData(oldp+72,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg),32);
        bufp->chgIData(oldp+73,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg),32);
        bufp->chgIData(oldp+74,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg),32);
        bufp->chgIData(oldp+75,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg),32);
        bufp->chgCData(oldp+76,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg),4);
        bufp->chgBit(oldp+77,(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__addr_valid));
        bufp->chgIData(oldp+78,(vlSelf->rv32e__DOT__wb_stage__DOT__state),32);
        bufp->chgIData(oldp+79,(vlSelf->rv32e__DOT__wb_stage__DOT__next_state),32);
        bufp->chgCData(oldp+80,(vlSelf->rv32e__DOT__wb_stage__DOT__delay),2);
        bufp->chgBit(oldp+81,(vlSelf->rv32e__DOT__wb_stage__DOT__RegWrite_wb));
        bufp->chgCData(oldp+82,(vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb),5);
        bufp->chgCData(oldp+83,(vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb_pre),5);
        bufp->chgIData(oldp+84,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[0]),32);
        bufp->chgIData(oldp+85,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[1]),32);
        bufp->chgIData(oldp+86,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[2]),32);
        bufp->chgIData(oldp+87,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[3]),32);
        bufp->chgIData(oldp+88,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[4]),32);
        bufp->chgIData(oldp+89,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[5]),32);
        bufp->chgIData(oldp+90,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[6]),32);
        bufp->chgIData(oldp+91,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[7]),32);
        bufp->chgIData(oldp+92,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[8]),32);
        bufp->chgIData(oldp+93,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[9]),32);
        bufp->chgIData(oldp+94,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[10]),32);
        bufp->chgIData(oldp+95,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[11]),32);
        bufp->chgIData(oldp+96,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[12]),32);
        bufp->chgIData(oldp+97,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[13]),32);
        bufp->chgIData(oldp+98,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[14]),32);
        bufp->chgIData(oldp+99,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[15]),32);
        bufp->chgIData(oldp+100,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[16]),32);
        bufp->chgIData(oldp+101,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[17]),32);
        bufp->chgIData(oldp+102,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[18]),32);
        bufp->chgIData(oldp+103,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[19]),32);
        bufp->chgIData(oldp+104,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[20]),32);
        bufp->chgIData(oldp+105,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[21]),32);
        bufp->chgIData(oldp+106,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[22]),32);
        bufp->chgIData(oldp+107,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[23]),32);
        bufp->chgIData(oldp+108,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[24]),32);
        bufp->chgIData(oldp+109,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[25]),32);
        bufp->chgIData(oldp+110,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[26]),32);
        bufp->chgIData(oldp+111,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[27]),32);
        bufp->chgIData(oldp+112,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[28]),32);
        bufp->chgIData(oldp+113,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[29]),32);
        bufp->chgIData(oldp+114,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[30]),32);
        bufp->chgIData(oldp+115,(vlSelf->rv32e__DOT__wb_stage__DOT__regs[31]),32);
        bufp->chgIData(oldp+116,(vlSelf->rv32e__DOT__wb_stage__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+117,(vlSelf->rv32e__DOT__pc),32);
        bufp->chgIData(oldp+118,(vlSelf->rv32e__DOT__instr),32);
        bufp->chgBit(oldp+119,(vlSelf->rv32e__DOT__if_ready));
        bufp->chgBit(oldp+120,(vlSelf->rv32e__DOT__if_valid));
        bufp->chgBit(oldp+121,(vlSelf->rv32e__DOT__if_access_fault));
        bufp->chgIData(oldp+122,(vlSelf->rv32e__DOT__if_fault_addr),32);
        bufp->chgIData(oldp+123,(vlSelf->rv32e__DOT__branch_target),32);
        bufp->chgBit(oldp+124,(vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src));
        bufp->chgIData(oldp+125,(vlSelf->rv32e__DOT__if_stage__DOT__state),32);
        bufp->chgIData(oldp+126,(vlSelf->rv32e__DOT__if_stage__DOT__next_state),32);
        bufp->chgCData(oldp+127,(vlSelf->rv32e__DOT__if_stage__DOT__delay),2);
        bufp->chgIData(oldp+128,(vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr),32);
        bufp->chgBit(oldp+129,(vlSelf->rv32e__DOT__if_stage__DOT__sram_arvalid));
        bufp->chgBit(oldp+130,(vlSelf->rv32e__DOT__if_stage__DOT__sram_arready));
        bufp->chgIData(oldp+131,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rdata),32);
        bufp->chgBit(oldp+132,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rvalid));
        bufp->chgBit(oldp+133,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rready));
        bufp->chgCData(oldp+134,(vlSelf->rv32e__DOT__if_stage__DOT__sram_rresp),2);
        bufp->chgIData(oldp+135,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__sram_state),32);
        bufp->chgIData(oldp+136,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state),32);
        bufp->chgIData(oldp+137,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg),32);
        bufp->chgIData(oldp+138,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg),32);
        bufp->chgBit(oldp+139,(((0x80000000U <= vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr) 
                                & (0x8fffffffU >= vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr))));
        bufp->chgCData(oldp+140,(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter),2);
    }
    bufp->chgBit(oldp+141,(vlSelf->clk));
    bufp->chgBit(oldp+142,(vlSelf->reset));
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
}
