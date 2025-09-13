// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25010030_npc__Syms.h"


VL_ATTR_COLD void Vysyx_25010030_npc___024root__trace_init_sub__TOP__0(Vysyx_25010030_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+366,"clock", false,-1);
    tracep->declBit(c+367,"reset", false,-1);
    tracep->pushNamePrefix("ysyx_25010030_npc ");
    tracep->declBit(c+366,"clock", false,-1);
    tracep->declBit(c+367,"reset", false,-1);
    tracep->declBit(c+368,"io_master_awready", false,-1);
    tracep->declBit(c+1,"io_master_awvalid", false,-1);
    tracep->declBus(c+19,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+20,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+2,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+3,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+4,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+369,"io_master_wready", false,-1);
    tracep->declBit(c+5,"io_master_wvalid", false,-1);
    tracep->declBus(c+21,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+6,"io_master_wlast", false,-1);
    tracep->declBit(c+7,"io_master_bready", false,-1);
    tracep->declBit(c+39,"io_master_bvalid", false,-1);
    tracep->declBus(c+370,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+371,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+40,"io_master_arready", false,-1);
    tracep->declBit(c+8,"io_master_arvalid", false,-1);
    tracep->declBus(c+23,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+24,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+372,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+9,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+373,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+25,"io_master_rready", false,-1);
    tracep->declBit(c+41,"io_master_rvalid", false,-1);
    tracep->declBus(c+42,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+43,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+44,"io_master_rlast", false,-1);
    tracep->declBus(c+45,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+382,"io_slave_awready", false,-1);
    tracep->declBit(c+383,"io_slave_awvalid", false,-1);
    tracep->declBus(c+384,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+385,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+386,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+387,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+388,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+389,"io_slave_wready", false,-1);
    tracep->declBit(c+383,"io_slave_wvalid", false,-1);
    tracep->declBus(c+384,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+385,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+383,"io_slave_wlast", false,-1);
    tracep->declBit(c+383,"io_slave_bready", false,-1);
    tracep->declBit(c+390,"io_slave_bvalid", false,-1);
    tracep->declBus(c+391,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+392,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+393,"io_slave_arready", false,-1);
    tracep->declBit(c+383,"io_slave_arvalid", false,-1);
    tracep->declBus(c+384,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+385,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+386,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+387,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+388,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+383,"io_slave_rready", false,-1);
    tracep->declBit(c+394,"io_slave_rvalid", false,-1);
    tracep->declBus(c+395,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+396,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+397,"io_slave_rlast", false,-1);
    tracep->declBus(c+398,"io_slave_rid", false,-1, 3,0);
    tracep->pushNamePrefix("axi_bridge ");
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBit(c+368,"io_master_awready", false,-1);
    tracep->declBit(c+1,"io_master_awvalid", false,-1);
    tracep->declBus(c+19,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+20,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+2,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+3,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+4,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+369,"io_master_wready", false,-1);
    tracep->declBit(c+5,"io_master_wvalid", false,-1);
    tracep->declBus(c+21,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+6,"io_master_wlast", false,-1);
    tracep->declBit(c+7,"io_master_bready", false,-1);
    tracep->declBit(c+39,"io_master_bvalid", false,-1);
    tracep->declBus(c+370,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+371,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+40,"io_master_arready", false,-1);
    tracep->declBit(c+8,"io_master_arvalid", false,-1);
    tracep->declBus(c+23,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+24,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+372,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+9,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+373,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+25,"io_master_rready", false,-1);
    tracep->declBit(c+41,"io_master_rvalid", false,-1);
    tracep->declBus(c+42,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+43,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+44,"io_master_rlast", false,-1);
    tracep->declBus(c+45,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+382,"io_slave_awready", false,-1);
    tracep->declBit(c+383,"io_slave_awvalid", false,-1);
    tracep->declBus(c+384,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+385,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+386,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+387,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+388,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+389,"io_slave_wready", false,-1);
    tracep->declBit(c+383,"io_slave_wvalid", false,-1);
    tracep->declBus(c+384,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+385,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+383,"io_slave_wlast", false,-1);
    tracep->declBit(c+383,"io_slave_bready", false,-1);
    tracep->declBit(c+390,"io_slave_bvalid", false,-1);
    tracep->declBus(c+391,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+392,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+393,"io_slave_arready", false,-1);
    tracep->declBit(c+383,"io_slave_arvalid", false,-1);
    tracep->declBus(c+384,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+385,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+386,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+387,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+388,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+383,"io_slave_rready", false,-1);
    tracep->declBit(c+394,"io_slave_rvalid", false,-1);
    tracep->declBus(c+395,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+396,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+397,"io_slave_rlast", false,-1);
    tracep->declBus(c+398,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+399,"SRAM_BASE_START", false,-1, 31,0);
    tracep->declBus(c+400,"SRAM_BASE_END", false,-1, 31,0);
    tracep->declBus(c+401,"UART_BASE", false,-1, 31,0);
    tracep->declBit(c+26,"is_uart_addr", false,-1);
    tracep->declBit(c+27,"is_sram_addr", false,-1);
    tracep->declBit(c+284,"sram_awready", false,-1);
    tracep->declBit(c+28,"sram_awvalid", false,-1);
    tracep->declBus(c+19,"sram_awaddr", false,-1, 31,0);
    tracep->declBus(c+20,"sram_awid", false,-1, 3,0);
    tracep->declBus(c+2,"sram_awlen", false,-1, 7,0);
    tracep->declBus(c+3,"sram_awsize", false,-1, 2,0);
    tracep->declBus(c+4,"sram_awburst", false,-1, 1,0);
    tracep->declBit(c+285,"sram_wready", false,-1);
    tracep->declBit(c+29,"sram_wvalid", false,-1);
    tracep->declBus(c+21,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+6,"sram_wlast", false,-1);
    tracep->declBit(c+30,"sram_bready", false,-1);
    tracep->declBit(c+286,"sram_bvalid", false,-1);
    tracep->declBus(c+287,"sram_bresp", false,-1, 1,0);
    tracep->declBus(c+288,"sram_bid", false,-1, 3,0);
    tracep->declBit(c+289,"sram_arready", false,-1);
    tracep->declBit(c+31,"sram_arvalid", false,-1);
    tracep->declBus(c+23,"sram_araddr", false,-1, 31,0);
    tracep->declBus(c+24,"sram_arid", false,-1, 3,0);
    tracep->declBus(c+372,"sram_arlen", false,-1, 7,0);
    tracep->declBus(c+9,"sram_arsize", false,-1, 2,0);
    tracep->declBus(c+373,"sram_arburst", false,-1, 1,0);
    tracep->declBit(c+32,"sram_rready", false,-1);
    tracep->declBit(c+290,"sram_rvalid", false,-1);
    tracep->declBus(c+291,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+292,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+293,"sram_rlast", false,-1);
    tracep->declBus(c+294,"sram_rid", false,-1, 3,0);
    tracep->declBit(c+64,"uart_awready", false,-1);
    tracep->declBit(c+33,"uart_awvalid", false,-1);
    tracep->declBus(c+19,"uart_awaddr", false,-1, 31,0);
    tracep->declBus(c+20,"uart_awid", false,-1, 3,0);
    tracep->declBus(c+2,"uart_awlen", false,-1, 7,0);
    tracep->declBus(c+3,"uart_awsize", false,-1, 2,0);
    tracep->declBus(c+4,"uart_awburst", false,-1, 1,0);
    tracep->declBit(c+65,"uart_wready", false,-1);
    tracep->declBit(c+34,"uart_wvalid", false,-1);
    tracep->declBus(c+21,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+6,"uart_wlast", false,-1);
    tracep->declBit(c+35,"uart_bready", false,-1);
    tracep->declBit(c+66,"uart_bvalid", false,-1);
    tracep->declBus(c+67,"uart_bresp", false,-1, 1,0);
    tracep->declBus(c+68,"uart_bid", false,-1, 3,0);
    tracep->declBit(c+69,"uart_arready", false,-1);
    tracep->declBit(c+36,"uart_arvalid", false,-1);
    tracep->declBus(c+23,"uart_araddr", false,-1, 31,0);
    tracep->declBus(c+24,"uart_arid", false,-1, 3,0);
    tracep->declBus(c+372,"uart_arlen", false,-1, 7,0);
    tracep->declBus(c+9,"uart_arsize", false,-1, 2,0);
    tracep->declBus(c+373,"uart_arburst", false,-1, 1,0);
    tracep->declBit(c+37,"uart_rready", false,-1);
    tracep->declBit(c+70,"uart_rvalid", false,-1);
    tracep->declBus(c+71,"uart_rresp", false,-1, 1,0);
    tracep->declBus(c+72,"uart_rdata", false,-1, 31,0);
    tracep->declBit(c+73,"uart_rlast", false,-1);
    tracep->declBus(c+74,"uart_rid", false,-1, 3,0);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBit(c+284,"awready", false,-1);
    tracep->declBit(c+28,"awvalid", false,-1);
    tracep->declBus(c+19,"awaddr", false,-1, 31,0);
    tracep->declBus(c+20,"awid", false,-1, 3,0);
    tracep->declBus(c+2,"awlen", false,-1, 7,0);
    tracep->declBus(c+3,"awsize", false,-1, 2,0);
    tracep->declBus(c+4,"awburst", false,-1, 1,0);
    tracep->declBit(c+285,"wready", false,-1);
    tracep->declBit(c+29,"wvalid", false,-1);
    tracep->declBus(c+21,"wdata", false,-1, 31,0);
    tracep->declBus(c+22,"wstrb", false,-1, 3,0);
    tracep->declBit(c+6,"wlast", false,-1);
    tracep->declBit(c+30,"bready", false,-1);
    tracep->declBit(c+286,"bvalid", false,-1);
    tracep->declBus(c+287,"bresp", false,-1, 1,0);
    tracep->declBus(c+288,"bid", false,-1, 3,0);
    tracep->declBit(c+289,"arready", false,-1);
    tracep->declBit(c+31,"arvalid", false,-1);
    tracep->declBus(c+23,"araddr", false,-1, 31,0);
    tracep->declBus(c+24,"arid", false,-1, 3,0);
    tracep->declBus(c+372,"arlen", false,-1, 7,0);
    tracep->declBus(c+9,"arsize", false,-1, 2,0);
    tracep->declBus(c+373,"arburst", false,-1, 1,0);
    tracep->declBit(c+32,"rready", false,-1);
    tracep->declBit(c+290,"rvalid", false,-1);
    tracep->declBus(c+291,"rresp", false,-1, 1,0);
    tracep->declBus(c+292,"rdata", false,-1, 31,0);
    tracep->declBit(c+293,"rlast", false,-1);
    tracep->declBus(c+294,"rid", false,-1, 3,0);
    tracep->declBus(c+402,"IDLE", false,-1, 0,0);
    tracep->declBus(c+403,"BUSY", false,-1, 0,0);
    tracep->declBit(c+295,"state", false,-1);
    tracep->declBit(c+374,"next_state", false,-1);
    tracep->declBus(c+296,"read_addr", false,-1, 31,0);
    tracep->declBus(c+297,"write_addr", false,-1, 31,0);
    tracep->declBus(c+298,"write_data", false,-1, 31,0);
    tracep->declBus(c+299,"write_strb", false,-1, 3,0);
    tracep->declBit(c+300,"is_read_req", false,-1);
    tracep->declBit(c+301,"is_write_req", false,-1);
    tracep->declBus(c+302,"read_id", false,-1, 3,0);
    tracep->declBus(c+303,"write_id", false,-1, 3,0);
    tracep->declBus(c+38,"addr_off", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart ");
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBit(c+64,"awready", false,-1);
    tracep->declBit(c+33,"awvalid", false,-1);
    tracep->declBus(c+19,"awaddr", false,-1, 31,0);
    tracep->declBus(c+20,"awid", false,-1, 3,0);
    tracep->declBus(c+2,"awlen", false,-1, 7,0);
    tracep->declBus(c+3,"awsize", false,-1, 2,0);
    tracep->declBus(c+4,"awburst", false,-1, 1,0);
    tracep->declBit(c+65,"wready", false,-1);
    tracep->declBit(c+34,"wvalid", false,-1);
    tracep->declBus(c+21,"wdata", false,-1, 31,0);
    tracep->declBus(c+22,"wstrb", false,-1, 3,0);
    tracep->declBit(c+6,"wlast", false,-1);
    tracep->declBit(c+35,"bready", false,-1);
    tracep->declBit(c+66,"bvalid", false,-1);
    tracep->declBus(c+67,"bresp", false,-1, 1,0);
    tracep->declBus(c+68,"bid", false,-1, 3,0);
    tracep->declBit(c+69,"arready", false,-1);
    tracep->declBit(c+36,"arvalid", false,-1);
    tracep->declBus(c+23,"araddr", false,-1, 31,0);
    tracep->declBus(c+24,"arid", false,-1, 3,0);
    tracep->declBus(c+372,"arlen", false,-1, 7,0);
    tracep->declBus(c+9,"arsize", false,-1, 2,0);
    tracep->declBus(c+373,"arburst", false,-1, 1,0);
    tracep->declBit(c+37,"rready", false,-1);
    tracep->declBit(c+70,"rvalid", false,-1);
    tracep->declBus(c+71,"rresp", false,-1, 1,0);
    tracep->declBus(c+72,"rdata", false,-1, 31,0);
    tracep->declBit(c+73,"rlast", false,-1);
    tracep->declBus(c+74,"rid", false,-1, 3,0);
    tracep->declBus(c+402,"IDLE", false,-1, 0,0);
    tracep->declBus(c+403,"BUSY", false,-1, 0,0);
    tracep->declBit(c+75,"state", false,-1);
    tracep->declBit(c+375,"next_state", false,-1);
    tracep->declBus(c+76,"read_addr", false,-1, 31,0);
    tracep->declBus(c+77,"write_addr", false,-1, 31,0);
    tracep->declBit(c+78,"is_read_req", false,-1);
    tracep->declBit(c+79,"is_write_req", false,-1);
    tracep->declBus(c+80,"read_id", false,-1, 3,0);
    tracep->declBus(c+81,"write_id", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+366,"clock", false,-1);
    tracep->declBit(c+367,"reset", false,-1);
    tracep->declBit(c+383,"io_interrupt", false,-1);
    tracep->declBit(c+368,"io_master_awready", false,-1);
    tracep->declBit(c+1,"io_master_awvalid", false,-1);
    tracep->declBus(c+19,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+20,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+2,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+3,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+4,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+369,"io_master_wready", false,-1);
    tracep->declBit(c+5,"io_master_wvalid", false,-1);
    tracep->declBus(c+21,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+6,"io_master_wlast", false,-1);
    tracep->declBit(c+7,"io_master_bready", false,-1);
    tracep->declBit(c+39,"io_master_bvalid", false,-1);
    tracep->declBus(c+370,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+371,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+40,"io_master_arready", false,-1);
    tracep->declBit(c+8,"io_master_arvalid", false,-1);
    tracep->declBus(c+23,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+24,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+372,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+9,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+373,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+25,"io_master_rready", false,-1);
    tracep->declBit(c+41,"io_master_rvalid", false,-1);
    tracep->declBus(c+42,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+43,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+44,"io_master_rlast", false,-1);
    tracep->declBus(c+45,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+382,"io_slave_awready", false,-1);
    tracep->declBit(c+383,"io_slave_awvalid", false,-1);
    tracep->declBus(c+384,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+385,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+386,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+387,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+388,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+389,"io_slave_wready", false,-1);
    tracep->declBit(c+383,"io_slave_wvalid", false,-1);
    tracep->declBus(c+384,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+385,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+383,"io_slave_wlast", false,-1);
    tracep->declBit(c+383,"io_slave_bready", false,-1);
    tracep->declBit(c+390,"io_slave_bvalid", false,-1);
    tracep->declBus(c+391,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+392,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+393,"io_slave_arready", false,-1);
    tracep->declBit(c+383,"io_slave_arvalid", false,-1);
    tracep->declBus(c+384,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+385,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+386,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+387,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+388,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+383,"io_slave_rready", false,-1);
    tracep->declBit(c+394,"io_slave_rvalid", false,-1);
    tracep->declBus(c+395,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+396,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+397,"io_slave_rlast", false,-1);
    tracep->declBus(c+398,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+304,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+305,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+306,"IF_valid", false,-1);
    tracep->declBit(c+327,"id_ready", false,-1);
    tracep->declBus(c+82,"id_ex_pc", false,-1, 31,0);
    tracep->declBit(c+83,"id_valid", false,-1);
    tracep->declBit(c+84,"ex_ready", false,-1);
    tracep->declBit(c+85,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+86,"id_ex_rd", false,-1, 3,0);
    tracep->declBus(c+87,"id_wb_rs1", false,-1, 3,0);
    tracep->declBus(c+88,"id_wb_rs2", false,-1, 3,0);
    tracep->declBus(c+89,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+90,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+91,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+92,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+93,"id_ex_MemLen", false,-1, 4,0);
    tracep->declBit(c+94,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+95,"id_ex_MemRead", false,-1);
    tracep->declBus(c+96,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+97,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+98,"id_ex_jal", false,-1);
    tracep->declBit(c+99,"id_ex_jalr", false,-1);
    tracep->declBit(c+100,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+101,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+102,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+103,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBus(c+104,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+105,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+106,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBit(c+107,"ex_lsu_valid", false,-1);
    tracep->declBit(c+108,"lsu_ex_ready", false,-1);
    tracep->declBus(c+109,"ex_lsu_src2", false,-1, 31,0);
    tracep->declBit(c+110,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+111,"ex_lsu_rd", false,-1, 3,0);
    tracep->declBit(c+112,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+113,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+114,"ex_lsu_MemLen", false,-1, 4,0);
    tracep->declBus(c+115,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBit(c+328,"ex_flush", false,-1);
    tracep->declBus(c+329,"ex_flush_pc", false,-1, 31,0);
    tracep->declBit(c+116,"ex_lsu_csr", false,-1);
    tracep->declBit(c+117,"ex_lsu_csr_wen1", false,-1);
    tracep->declBus(c+118,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+119,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+120,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+121,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+122,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+123,"ex_lsu_csr_mret", false,-1);
    tracep->declBit(c+124,"lsu_wb_valid", false,-1);
    tracep->declBit(c+404,"wb_lsu_ready", false,-1);
    tracep->declBit(c+125,"lsu_wb_RegWrite", false,-1);
    tracep->declBus(c+126,"lsu_wb_rd", false,-1, 3,0);
    tracep->declBus(c+127,"lsu_wb_write_rd_data", false,-1, 31,0);
    tracep->declBus(c+128,"lsu_wb_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+129,"lsu_wb_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+130,"lsu_wb_csr_wr_addr1", false,-1, 11,0);
    tracep->declBit(c+131,"lsu_wb_csr_wen1", false,-1);
    tracep->declBit(c+132,"lsu_wb_csr_ecall", false,-1);
    tracep->declBus(c+133,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+134,"wb_ex_src2", false,-1, 31,0);
    tracep->declBus(c+135,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+136,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBus(c+137,"lsu_ex_forward_rd", false,-1, 3,0);
    tracep->declBit(c+138,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+139,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBit(c+140,"ex_lsu_forward_las", false,-1);
    tracep->declBit(c+141,"lsu_axi_arvalid", false,-1);
    tracep->declBit(c+46,"axi_lsu_arready", false,-1);
    tracep->declBus(c+142,"lsu_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+405,"lsu_axi_arid", false,-1, 3,0);
    tracep->declBus(c+143,"lsu_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+144,"lsu_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+145,"lsu_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+47,"axi_lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+48,"axi_lsu_rvalid", false,-1);
    tracep->declBus(c+49,"axi_lsu_rid", false,-1, 3,0);
    tracep->declBit(c+50,"axi_lsu_rlast", false,-1);
    tracep->declBit(c+146,"lsu_axi_rready", false,-1);
    tracep->declBus(c+51,"axi_lsu_rresp", false,-1, 1,0);
    tracep->declBus(c+147,"lsu_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+405,"lsu_axi_awid", false,-1, 3,0);
    tracep->declBus(c+386,"lsu_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+148,"lsu_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+388,"lsu_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+149,"lsu_axi_awvalid", false,-1);
    tracep->declBit(c+52,"axi_lsu_awready", false,-1);
    tracep->declBus(c+150,"lsu_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+151,"lsu_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+152,"lsu_axi_wvalid", false,-1);
    tracep->declBit(c+153,"lsu_axi_wlast", false,-1);
    tracep->declBit(c+53,"axi_lsu_wready", false,-1);
    tracep->declBus(c+54,"axi_lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+55,"axi_lsu_bid", false,-1, 3,0);
    tracep->declBit(c+56,"axi_lsu_bvalid", false,-1);
    tracep->declBit(c+404,"lsu_axi_bready", false,-1);
    tracep->declBit(c+154,"if_axi_arvalid", false,-1);
    tracep->declBit(c+57,"axi_if_arready", false,-1);
    tracep->declBus(c+155,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+156,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+376,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+157,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+377,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+58,"axi_if_rdata", false,-1, 31,0);
    tracep->declBit(c+59,"axi_if_rvalid", false,-1);
    tracep->declBus(c+60,"axi_if_rid", false,-1, 3,0);
    tracep->declBit(c+61,"axi_if_rlast", false,-1);
    tracep->declBit(c+158,"if_axi_rready", false,-1);
    tracep->declBus(c+62,"axi_if_rresp", false,-1, 1,0);
    tracep->declBus(c+10,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+11,"clint_arvalid", false,-1);
    tracep->declBus(c+12,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+13,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+14,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+15,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+159,"clint_arready", false,-1);
    tracep->declBus(c+388,"clint_rresp", false,-1, 1,0);
    tracep->declBus(c+160,"clint_rdata", false,-1, 31,0);
    tracep->declBit(c+161,"clint_rvalid", false,-1);
    tracep->declBus(c+406,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+162,"clint_rlast", false,-1);
    tracep->declBit(c+16,"clint_rready", false,-1);
    tracep->pushNamePrefix("axi_arb ");
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"reset", false,-1);
    tracep->declBit(c+57,"ifu_arready", false,-1);
    tracep->declBit(c+154,"ifu_arvalid", false,-1);
    tracep->declBus(c+155,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+156,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+376,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+157,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+377,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+158,"ifu_rready", false,-1);
    tracep->declBit(c+59,"ifu_rvalid", false,-1);
    tracep->declBus(c+62,"ifu_rresp", false,-1, 1,0);
    tracep->declBus(c+58,"ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+61,"ifu_rlast", false,-1);
    tracep->declBus(c+60,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+52,"lsu_awready", false,-1);
    tracep->declBit(c+149,"lsu_awvalid", false,-1);
    tracep->declBus(c+147,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+405,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+386,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+148,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+388,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+53,"lsu_wready", false,-1);
    tracep->declBit(c+152,"lsu_wvalid", false,-1);
    tracep->declBus(c+150,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+151,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+153,"lsu_wlast", false,-1);
    tracep->declBit(c+404,"lsu_bready", false,-1);
    tracep->declBit(c+56,"lsu_bvalid", false,-1);
    tracep->declBus(c+54,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+55,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+46,"lsu_arready", false,-1);
    tracep->declBit(c+141,"lsu_arvalid", false,-1);
    tracep->declBus(c+142,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+405,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+143,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+144,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+145,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+146,"lsu_rready", false,-1);
    tracep->declBit(c+48,"lsu_rvalid", false,-1);
    tracep->declBus(c+51,"lsu_rresp", false,-1, 1,0);
    tracep->declBus(c+47,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+50,"lsu_rlast", false,-1);
    tracep->declBus(c+49,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+368,"io_master_awready", false,-1);
    tracep->declBit(c+1,"io_master_awvalid", false,-1);
    tracep->declBus(c+19,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+20,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+2,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+3,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+4,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+369,"io_master_wready", false,-1);
    tracep->declBit(c+5,"io_master_wvalid", false,-1);
    tracep->declBus(c+21,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+6,"io_master_wlast", false,-1);
    tracep->declBit(c+7,"io_master_bready", false,-1);
    tracep->declBit(c+39,"io_master_bvalid", false,-1);
    tracep->declBus(c+370,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+371,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+40,"io_master_arready", false,-1);
    tracep->declBit(c+8,"io_master_arvalid", false,-1);
    tracep->declBus(c+23,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+24,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+372,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+9,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+373,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+25,"io_master_rready", false,-1);
    tracep->declBit(c+41,"io_master_rvalid", false,-1);
    tracep->declBus(c+42,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+43,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+44,"io_master_rlast", false,-1);
    tracep->declBus(c+45,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+10,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+11,"clint_arvalid", false,-1);
    tracep->declBit(c+159,"clint_arready", false,-1);
    tracep->declBus(c+12,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+13,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+14,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+15,"clint_arburst", false,-1, 1,0);
    tracep->declBus(c+160,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+388,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+161,"clint_rvalid", false,-1);
    tracep->declBit(c+16,"clint_rready", false,-1);
    tracep->declBit(c+162,"clint_rlast", false,-1);
    tracep->declBus(c+406,"clint_rid", false,-1, 3,0);
    tracep->declBus(c+388,"NONE", false,-1, 1,0);
    tracep->declBus(c+407,"IFU", false,-1, 1,0);
    tracep->declBus(c+408,"LSU", false,-1, 1,0);
    tracep->declBus(c+409,"CLINT_BASE", false,-1, 15,0);
    tracep->declBit(c+163,"lsu_is_clint", false,-1);
    tracep->declBus(c+164,"current_master", false,-1, 1,0);
    tracep->declBus(c+63,"next_master", false,-1, 1,0);
    tracep->declBus(c+388,"OKAY", false,-1, 1,0);
    tracep->declBus(c+408,"SLVERR", false,-1, 1,0);
    tracep->declBus(c+410,"DECERR", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint ");
    tracep->declBus(c+411,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+411,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"reset", false,-1);
    tracep->declBus(c+10,"araddr", false,-1, 31,0);
    tracep->declBit(c+11,"arvalid", false,-1);
    tracep->declBit(c+159,"arready", false,-1);
    tracep->declBus(c+160,"rdata", false,-1, 31,0);
    tracep->declBit(c+161,"rvalid", false,-1);
    tracep->declBit(c+162,"rlast", false,-1);
    tracep->declBit(c+16,"rready", false,-1);
    tracep->declBus(c+388,"rresp", false,-1, 1,0);
    tracep->declBus(c+402,"IDLE", false,-1, 0,0);
    tracep->declBus(c+403,"BUSY", false,-1, 0,0);
    tracep->declBit(c+165,"clint_state", false,-1);
    tracep->declBit(c+17,"next_clint_state", false,-1);
    tracep->declBus(c+388,"OKAY", false,-1, 1,0);
    tracep->declQuad(c+166,"mtime", false,-1, 63,0);
    tracep->declBus(c+168,"mtime_low", false,-1, 31,0);
    tracep->declBus(c+169,"mtime_high", false,-1, 31,0);
    tracep->declBus(c+18,"clint_offset", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"reset", false,-1);
    tracep->declBit(c+327,"id_ready", false,-1);
    tracep->declBit(c+83,"id_valid", false,-1);
    tracep->declBit(c+84,"ex_ready", false,-1);
    tracep->declBit(c+108,"lsu_ready", false,-1);
    tracep->declBit(c+107,"ex_lsu_valid", false,-1);
    tracep->declBus(c+87,"id_wb_rs1", false,-1, 3,0);
    tracep->declBus(c+88,"id_wb_rs2", false,-1, 3,0);
    tracep->declBus(c+137,"lsu_ex_forward_rd", false,-1, 3,0);
    tracep->declBit(c+138,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+139,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBus(c+127,"lsu_wb_wdata", false,-1, 31,0);
    tracep->declBus(c+126,"lsu_wb_rd", false,-1, 3,0);
    tracep->declBit(c+125,"lsu_wb_RegWrite", false,-1);
    tracep->declBit(c+124,"lsu_wb_valid", false,-1);
    tracep->declBit(c+140,"ex_lsu_forward_las", false,-1);
    tracep->declBus(c+82,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+90,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+89,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+91,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+133,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+134,"wb_ex_src2", false,-1, 31,0);
    tracep->declBit(c+85,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+86,"id_ex_rd", false,-1, 3,0);
    tracep->declBus(c+96,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+97,"id_ex_func3", false,-1, 2,0);
    tracep->declBus(c+92,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBit(c+98,"id_ex_jal", false,-1);
    tracep->declBit(c+99,"id_ex_jalr", false,-1);
    tracep->declBit(c+95,"id_ex_MemRead", false,-1);
    tracep->declBit(c+94,"id_ex_MemWrite", false,-1);
    tracep->declBus(c+93,"id_ex_MemLen", false,-1, 4,0);
    tracep->declBus(c+135,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+136,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBit(c+100,"id_ex_csr_wen1", false,-1);
    tracep->declBus(c+104,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBit(c+101,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+102,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+103,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBit(c+328,"ex_flush", false,-1);
    tracep->declBus(c+329,"ex_flush_pc", false,-1, 31,0);
    tracep->declBus(c+109,"ex_lsu_src2", false,-1, 31,0);
    tracep->declBit(c+110,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+111,"ex_lsu_rd", false,-1, 3,0);
    tracep->declBit(c+112,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+113,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+114,"ex_lsu_MemLen", false,-1, 4,0);
    tracep->declBit(c+116,"ex_lsu_csr", false,-1);
    tracep->declBit(c+117,"ex_lsu_csr_wen1", false,-1);
    tracep->declBus(c+118,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+119,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+120,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+121,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+122,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+123,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+115,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBus(c+170,"src1", false,-1, 31,0);
    tracep->declBus(c+171,"src2", false,-1, 31,0);
    tracep->declBus(c+172,"ex_num1", false,-1, 31,0);
    tracep->declBus(c+173,"ex_num2", false,-1, 31,0);
    tracep->declBus(c+174,"process_result", false,-1, 31,0);
    tracep->declBit(c+175,"alu_zero", false,-1);
    tracep->declBit(c+176,"alu_less", false,-1);
    tracep->declBus(c+330,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+331,"take_branch", false,-1);
    tracep->declBit(c+177,"ex_flush_condition", false,-1);
    tracep->declBus(c+178,"mstatus", false,-1, 31,0);
    tracep->declBus(c+179,"mpie", false,-1, 31,0);
    tracep->declBus(c+180,"csr_write_data", false,-1, 31,0);
    tracep->declBus(c+181,"forward_rs1", false,-1, 1,0);
    tracep->declBus(c+182,"forward_rs2", false,-1, 1,0);
    tracep->declBit(c+183,"forward_las", false,-1);
    tracep->declBus(c+184,"load_use_flag", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"reset", false,-1);
    tracep->declBus(c+304,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+305,"if_id_inst", false,-1, 31,0);
    tracep->declBit(c+328,"ex_flush", false,-1);
    tracep->declBit(c+306,"if_valid", false,-1);
    tracep->declBit(c+327,"id_ready", false,-1);
    tracep->declBit(c+84,"ex_ready", false,-1);
    tracep->declBit(c+83,"id_valid", false,-1);
    tracep->declBus(c+82,"id_ex_pc", false,-1, 31,0);
    tracep->declBit(c+85,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+86,"id_ex_rd", false,-1, 3,0);
    tracep->declBus(c+87,"id_wb_rs1", false,-1, 3,0);
    tracep->declBus(c+88,"id_wb_rs2", false,-1, 3,0);
    tracep->declBus(c+89,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+90,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+91,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+92,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+93,"id_ex_MemLen", false,-1, 4,0);
    tracep->declBit(c+94,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+95,"id_ex_MemRead", false,-1);
    tracep->declBus(c+96,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+97,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+98,"id_ex_jal", false,-1);
    tracep->declBit(c+99,"id_ex_jalr", false,-1);
    tracep->declBit(c+100,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+101,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+102,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+103,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBus(c+104,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+105,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+106,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBus(c+307,"opcode", false,-1, 6,0);
    tracep->declBus(c+308,"rs1", false,-1, 3,0);
    tracep->declBus(c+309,"rs2", false,-1, 3,0);
    tracep->declBus(c+310,"rd", false,-1, 3,0);
    tracep->declBus(c+311,"func3", false,-1, 2,0);
    tracep->declBus(c+312,"func7", false,-1, 6,0);
    tracep->declBus(c+313,"shamt", false,-1, 5,0);
    tracep->declBus(c+314,"zimm", false,-1, 4,0);
    tracep->declBus(c+315,"get_opcode", false,-1, 4,0);
    tracep->declBus(c+316,"immI", false,-1, 31,0);
    tracep->declBus(c+317,"immU", false,-1, 31,0);
    tracep->declBus(c+318,"immS", false,-1, 31,0);
    tracep->declBus(c+319,"immB", false,-1, 31,0);
    tracep->declBus(c+320,"immJ", false,-1, 31,0);
    tracep->declBus(c+384,"immR", false,-1, 31,0);
    tracep->declBus(c+321,"immCSR", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"reset", false,-1);
    tracep->declBit(c+328,"EX_flush", false,-1);
    tracep->declBus(c+329,"EX_flush_pc", false,-1, 31,0);
    tracep->declBit(c+327,"ID_ready", false,-1);
    tracep->declBit(c+306,"IF_valid", false,-1);
    tracep->declBus(c+304,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+305,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+154,"if_axi_arvalid", false,-1);
    tracep->declBit(c+57,"axi_if_arready", false,-1);
    tracep->declBus(c+155,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+156,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+376,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+157,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+377,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+58,"axi_if_rdata", false,-1, 31,0);
    tracep->declBit(c+59,"axi_if_rvalid", false,-1);
    tracep->declBit(c+158,"if_axi_rready", false,-1);
    tracep->declBus(c+62,"axi_if_rresp", false,-1, 1,0);
    tracep->declBus(c+60,"axi_if_rid", false,-1, 3,0);
    tracep->declBit(c+61,"axi_if_rlast", false,-1);
    tracep->declBus(c+322,"state", false,-1, 1,0);
    tracep->declBus(c+388,"IDLE", false,-1, 1,0);
    tracep->declBus(c+407,"WAIT_FLUSH", false,-1, 1,0);
    tracep->declBus(c+410,"WAIT_CACHE", false,-1, 1,0);
    tracep->declBus(c+412,"FENCEI", false,-1, 31,0);
    tracep->declBus(c+413,"JAL_OPCODE", false,-1, 6,0);
    tracep->declBus(c+359,"next_pc", false,-1, 31,0);
    tracep->declBit(c+323,"cache_req", false,-1);
    tracep->declBit(c+324,"flush_once", false,-1);
    tracep->declBit(c+325,"once", false,-1);
    tracep->declBus(c+332,"cache_inst", false,-1, 31,0);
    tracep->declBit(c+333,"cache_valid", false,-1);
    tracep->declBus(c+185,"cache_araddr", false,-1, 31,0);
    tracep->declBit(c+186,"cache_arvalid", false,-1);
    tracep->declBus(c+405,"cache_arid", false,-1, 3,0);
    tracep->declBus(c+360,"cache_arlen", false,-1, 7,0);
    tracep->declBus(c+414,"cache_arsize", false,-1, 2,0);
    tracep->declBus(c+361,"cache_arburst", false,-1, 1,0);
    tracep->declBit(c+187,"cache_rready", false,-1);
    tracep->declBit(c+326,"is_fencei", false,-1);
    tracep->declBit(c+334,"is_jal", false,-1);
    tracep->declBus(c+335,"immJ", false,-1, 31,0);
    tracep->declBus(c+378,"jal_target", false,-1, 31,0);
    tracep->pushNamePrefix("u_icache ");
    tracep->declBus(c+415,"CACHE_SIZE", false,-1, 31,0);
    tracep->declBus(c+416,"BLOCK_SIZE", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"reset", false,-1);
    tracep->declBit(c+326,"is_fencei", false,-1);
    tracep->declBus(c+359,"addr", false,-1, 31,0);
    tracep->declBus(c+332,"inst", false,-1, 31,0);
    tracep->declBit(c+333,"valid", false,-1);
    tracep->declBus(c+185,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+186,"axi_arvalid", false,-1);
    tracep->declBit(c+57,"axi_arready", false,-1);
    tracep->declBus(c+405,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+360,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+414,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+361,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+59,"axi_rvalid", false,-1);
    tracep->declBit(c+187,"axi_rready", false,-1);
    tracep->declBus(c+58,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+62,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+60,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+61,"axi_rlast", false,-1);
    tracep->declBus(c+417,"NUM_BLOCKS", false,-1, 31,0);
    tracep->declBus(c+417,"BLOCK_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+418,"INDEX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+419,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"BEATS_PER_BLOCK", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+188+i*1,"tag_ram", true,(i+0), 25,0);
    }
    tracep->pushNamePrefix("data_ram");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+336,"[0]", false,-1, 31,0);
    tracep->declBus(c+337,"[1]", false,-1, 31,0);
    tracep->declBus(c+338,"[2]", false,-1, 31,0);
    tracep->declBus(c+339,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+340,"[0]", false,-1, 31,0);
    tracep->declBus(c+341,"[1]", false,-1, 31,0);
    tracep->declBus(c+342,"[2]", false,-1, 31,0);
    tracep->declBus(c+343,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+344,"[0]", false,-1, 31,0);
    tracep->declBus(c+345,"[1]", false,-1, 31,0);
    tracep->declBus(c+346,"[2]", false,-1, 31,0);
    tracep->declBus(c+347,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+348,"[0]", false,-1, 31,0);
    tracep->declBus(c+349,"[1]", false,-1, 31,0);
    tracep->declBus(c+350,"[2]", false,-1, 31,0);
    tracep->declBus(c+351,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+192+i*1,"valid_ram", true,(i+0));
    }
    tracep->declBus(c+362,"req_tag", false,-1, 25,0);
    tracep->declBus(c+363,"req_index", false,-1, 1,0);
    tracep->declBus(c+364,"beat_idx", false,-1, 1,0);
    tracep->declBus(c+196,"saved_tag", false,-1, 25,0);
    tracep->declBus(c+352,"saved_index", false,-1, 1,0);
    tracep->declBus(c+353,"saved_beat_idx", false,-1, 1,0);
    tracep->declBus(c+388,"IDLE", false,-1, 1,0);
    tracep->declBus(c+407,"MISS", false,-1, 1,0);
    tracep->declBus(c+410,"READ", false,-1, 1,0);
    tracep->declBus(c+408,"FILL", false,-1, 1,0);
    tracep->declBus(c+354,"state", false,-1, 1,0);
    tracep->declBus(c+379,"next_state", false,-1, 1,0);
    tracep->declBus(c+197,"beat_cnt", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+355+i*1,"block_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+401,"SDRAM_BASE", false,-1, 31,0);
    tracep->declBus(c+420,"SDRAM_END", false,-1, 31,0);
    tracep->declBit(c+365,"in_sdram", false,-1);
    tracep->declBit(c+380,"hit", false,-1);
    tracep->declBus(c+198,"idx", false,-1, 31,0);
    tracep->declBus(c+199,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBit(c+107,"ex_lsu_valid", false,-1);
    tracep->declBit(c+108,"lsu_ex_ready", false,-1);
    tracep->declBit(c+404,"wb_lsu_ready", false,-1);
    tracep->declBit(c+124,"lsu_wb_valid", false,-1);
    tracep->declBit(c+140,"ex_lsu_forward_las", false,-1);
    tracep->declBit(c+110,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+111,"ex_lsu_rd", false,-1, 3,0);
    tracep->declBit(c+112,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+113,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+114,"ex_lsu_MemLen", false,-1, 4,0);
    tracep->declBus(c+115,"addr", false,-1, 31,0);
    tracep->declBus(c+109,"data_in", false,-1, 31,0);
    tracep->declBit(c+116,"ex_lsu_csr", false,-1);
    tracep->declBit(c+117,"ex_lsu_csr_wen1", false,-1);
    tracep->declBus(c+119,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+120,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+118,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+121,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+122,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+123,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+115,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBus(c+137,"lsu_ex_forward_rd", false,-1, 3,0);
    tracep->declBit(c+138,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+139,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBus(c+128,"lsu_wb_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+129,"lsu_wb_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+130,"lsu_wb_csr_wr_addr1", false,-1, 11,0);
    tracep->declBit(c+131,"lsu_wb_csr_wen1", false,-1);
    tracep->declBit(c+132,"lsu_wb_csr_ecall", false,-1);
    tracep->declBit(c+125,"lsu_wb_RegWrite", false,-1);
    tracep->declBus(c+126,"lsu_wb_rd", false,-1, 3,0);
    tracep->declBus(c+127,"lsu_wb_write_rd_data", false,-1, 31,0);
    tracep->declBit(c+141,"lsu_axi_arvalid", false,-1);
    tracep->declBit(c+46,"axi_lsu_arready", false,-1);
    tracep->declBus(c+142,"lsu_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+405,"lsu_axi_arid", false,-1, 3,0);
    tracep->declBus(c+143,"lsu_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+144,"lsu_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+145,"lsu_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+47,"axi_lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+48,"axi_lsu_rvalid", false,-1);
    tracep->declBit(c+146,"lsu_axi_rready", false,-1);
    tracep->declBus(c+51,"axi_lsu_rresp", false,-1, 1,0);
    tracep->declBus(c+49,"axi_lsu_rid", false,-1, 3,0);
    tracep->declBit(c+50,"axi_lsu_rlast", false,-1);
    tracep->declBus(c+147,"lsu_axi_awaddr", false,-1, 31,0);
    tracep->declBit(c+149,"lsu_axi_awvalid", false,-1);
    tracep->declBit(c+52,"axi_lsu_awready", false,-1);
    tracep->declBus(c+405,"lsu_axi_awid", false,-1, 3,0);
    tracep->declBus(c+386,"lsu_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+148,"lsu_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+388,"lsu_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+150,"lsu_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+151,"lsu_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+152,"lsu_axi_wvalid", false,-1);
    tracep->declBit(c+53,"axi_lsu_wready", false,-1);
    tracep->declBit(c+153,"lsu_axi_wlast", false,-1);
    tracep->declBus(c+54,"axi_lsu_bresp", false,-1, 1,0);
    tracep->declBit(c+56,"axi_lsu_bvalid", false,-1);
    tracep->declBit(c+404,"lsu_axi_bready", false,-1);
    tracep->declBus(c+55,"axi_lsu_bid", false,-1, 3,0);
    tracep->declBus(c+388,"OKAY", false,-1, 1,0);
    tracep->declBus(c+401,"SDRAM_BASE", false,-1, 31,0);
    tracep->declBus(c+420,"SDRAM_END", false,-1, 31,0);
    tracep->declBus(c+388,"AXI_BURST_FIXED", false,-1, 1,0);
    tracep->declBus(c+407,"AXI_BURST_INCR", false,-1, 1,0);
    tracep->declBus(c+387,"AXI_SIZE_BYTE", false,-1, 2,0);
    tracep->declBus(c+421,"AXI_SIZE_HALF", false,-1, 2,0);
    tracep->declBus(c+414,"AXI_SIZE_WORD", false,-1, 2,0);
    tracep->declBus(c+405,"AXI_ID", false,-1, 3,0);
    tracep->declBus(c+417,"BURST_LEN", false,-1, 31,0);
    tracep->declBus(c+416,"BLOCK_SIZE", false,-1, 31,0);
    tracep->declBit(c+200,"in_sdram", false,-1);
    tracep->declBus(c+417,"BLOCK_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+201,"req_offset", false,-1, 3,0);
    tracep->declBus(c+202,"word_offset", false,-1, 1,0);
    tracep->declBus(c+203,"saved_word_offset", false,-1, 1,0);
    tracep->declBus(c+204,"saved_wdata", false,-1, 31,0);
    tracep->declBus(c+205,"saved_wstrb", false,-1, 3,0);
    tracep->declBus(c+206,"burst_cnt", false,-1, 3,0);
    tracep->declBus(c+207,"cache_addr", false,-1, 31,0);
    tracep->declBus(c+208,"rdata", false,-1, 31,0);
    tracep->declBit(c+209,"valid", false,-1);
    tracep->declBus(c+210,"addr_reg", false,-1, 31,0);
    tracep->declBus(c+388,"IDLE", false,-1, 1,0);
    tracep->declBus(c+408,"RD", false,-1, 1,0);
    tracep->declBus(c+407,"WR", false,-1, 1,0);
    tracep->declBus(c+211,"state", false,-1, 1,0);
    tracep->declBus(c+381,"next_state", false,-1, 1,0);
    tracep->declBit(c+212,"aw_done", false,-1);
    tracep->declBit(c+213,"w_done", false,-1);
    tracep->declBit(c+214,"b_done", false,-1);
    tracep->declBit(c+215,"ar_done", false,-1);
    tracep->declBit(c+216,"we", false,-1);
    tracep->declBit(c+217,"req_valid", false,-1);
    tracep->declArray(c+218,"block_data", false,-1, 127,0);
    tracep->declBit(c+139,"l_load", false,-1);
    tracep->declBit(c+138,"l_rd_en", false,-1);
    tracep->declBus(c+137,"l_rd_addr", false,-1, 3,0);
    tracep->declBus(c+222,"l_MemLen", false,-1, 4,0);
    tracep->declBit(c+223,"op_complete", false,-1);
    tracep->declBus(c+224,"byte_data1", false,-1, 31,0);
    tracep->declBus(c+225,"byte_data", false,-1, 7,0);
    tracep->declBus(c+226,"half_data", false,-1, 15,0);
    tracep->declBus(c+227,"read_lsu_data", false,-1, 31,0);
    tracep->declBus(c+228,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBus(c+417,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+411,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBit(c+125,"wen", false,-1);
    tracep->declBit(c+124,"lsu_wb_valid", false,-1);
    tracep->declBit(c+404,"wb_lsu_ready", false,-1);
    tracep->declBus(c+127,"wdata", false,-1, 31,0);
    tracep->declBus(c+126,"waddr", false,-1, 3,0);
    tracep->declBus(c+87,"rs1", false,-1, 3,0);
    tracep->declBus(c+88,"rs2", false,-1, 3,0);
    tracep->declBus(c+133,"src1", false,-1, 31,0);
    tracep->declBus(c+134,"src2", false,-1, 31,0);
    tracep->declBus(c+105,"raddr_csr1", false,-1, 11,0);
    tracep->declBus(c+106,"raddr_csr2", false,-1, 11,0);
    tracep->declBit(c+131,"wen_csr1", false,-1);
    tracep->declBit(c+132,"is_ecall", false,-1);
    tracep->declBus(c+128,"wdata_csr1", false,-1, 31,0);
    tracep->declBus(c+129,"wdata_csr2", false,-1, 31,0);
    tracep->declBus(c+130,"waddr_csr1", false,-1, 11,0);
    tracep->declBus(c+135,"rdata_csr1", false,-1, 31,0);
    tracep->declBus(c+136,"rdata_csr2", false,-1, 31,0);
    tracep->declBus(c+229,"mstatus", false,-1, 31,0);
    tracep->declBus(c+230,"mtvec", false,-1, 31,0);
    tracep->declBus(c+231,"mepc", false,-1, 31,0);
    tracep->declBus(c+422,"mcause", false,-1, 31,0);
    tracep->declBus(c+423,"MSTATUS", false,-1, 11,0);
    tracep->declBus(c+424,"MTVEC", false,-1, 11,0);
    tracep->declBus(c+425,"MEPC", false,-1, 11,0);
    tracep->declBus(c+426,"MCAUSE", false,-1, 11,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+232+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+384,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBus(c+248,"din", false,-1, 31,0);
    tracep->declBus(c+231,"dout", false,-1, 31,0);
    tracep->declBit(c+249,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+427,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBus(c+128,"din", false,-1, 31,0);
    tracep->declBus(c+229,"dout", false,-1, 31,0);
    tracep->declBit(c+250,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+384,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBus(c+128,"din", false,-1, 31,0);
    tracep->declBus(c+230,"dout", false,-1, 31,0);
    tracep->declBit(c+251,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_block[0] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+384,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+252,"dout", false,-1, 31,0);
    tracep->declBit(c+253,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_block[10] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+384,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+254,"dout", false,-1, 31,0);
    tracep->declBit(c+255,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_block[11] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+384,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+256,"dout", false,-1, 31,0);
    tracep->declBit(c+257,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_block[12] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+384,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+258,"dout", false,-1, 31,0);
    tracep->declBit(c+259,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_block[13] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+384,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+260,"dout", false,-1, 31,0);
    tracep->declBit(c+261,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_block[14] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+384,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+262,"dout", false,-1, 31,0);
    tracep->declBit(c+263,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_block[15] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+384,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+264,"dout", false,-1, 31,0);
    tracep->declBit(c+265,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_block[1] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+384,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+266,"dout", false,-1, 31,0);
    tracep->declBit(c+267,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_block[2] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+384,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+268,"dout", false,-1, 31,0);
    tracep->declBit(c+269,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_block[3] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+384,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+270,"dout", false,-1, 31,0);
    tracep->declBit(c+271,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_block[4] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+384,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+272,"dout", false,-1, 31,0);
    tracep->declBit(c+273,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_block[5] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+384,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+274,"dout", false,-1, 31,0);
    tracep->declBit(c+275,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_block[6] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+384,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+276,"dout", false,-1, 31,0);
    tracep->declBit(c+277,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_block[7] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+384,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+278,"dout", false,-1, 31,0);
    tracep->declBit(c+279,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_block[8] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+384,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+280,"dout", false,-1, 31,0);
    tracep->declBit(c+281,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_block[9] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+384,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+282,"dout", false,-1, 31,0);
    tracep->declBit(c+283,"wen", false,-1);
    tracep->popNamePrefix(5);
}

VL_ATTR_COLD void Vysyx_25010030_npc___024root__trace_init_top(Vysyx_25010030_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root__trace_init_top\n"); );
    // Body
    Vysyx_25010030_npc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_25010030_npc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25010030_npc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25010030_npc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_25010030_npc___024root__trace_register(Vysyx_25010030_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_25010030_npc___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_25010030_npc___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_25010030_npc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_25010030_npc___024root__trace_full_sub_0(Vysyx_25010030_npc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25010030_npc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_25010030_npc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25010030_npc___024root*>(voidSelf);
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25010030_npc___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25010030_npc___024root__trace_full_sub_0(Vysyx_25010030_npc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25010030_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25010030_npc___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyx_25010030_npc__DOT__io_master_awvalid));
    bufp->fullCData(oldp+2,(vlSelf->ysyx_25010030_npc__DOT__io_master_awlen),8);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_25010030_npc__DOT__io_master_awsize),3);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_25010030_npc__DOT__io_master_awburst),2);
    bufp->fullBit(oldp+5,(vlSelf->ysyx_25010030_npc__DOT__io_master_wvalid));
    bufp->fullBit(oldp+6,(vlSelf->ysyx_25010030_npc__DOT__io_master_wlast));
    bufp->fullBit(oldp+7,(vlSelf->ysyx_25010030_npc__DOT__io_master_bready));
    bufp->fullBit(oldp+8,(vlSelf->ysyx_25010030_npc__DOT__io_master_arvalid));
    bufp->fullCData(oldp+9,(vlSelf->ysyx_25010030_npc__DOT__io_master_arsize),3);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullBit(oldp+11,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid));
    bufp->fullCData(oldp+12,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullBit(oldp+16,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+17,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__clint_state)
                             ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__clint_state) 
                                & (~ (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rready)))
                             : (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid))));
    bufp->fullIData(oldp+18,((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr 
                              - (IData)(0x2000000U))),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr),32);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_25010030_npc__DOT__io_master_awid),4);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_25010030_npc__DOT__io_master_wdata),32);
    bufp->fullCData(oldp+22,(vlSelf->ysyx_25010030_npc__DOT__io_master_wstrb),4);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_25010030_npc__DOT__io_master_araddr),32);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_25010030_npc__DOT__io_master_arid),4);
    bufp->fullBit(oldp+25,(vlSelf->ysyx_25010030_npc__DOT__io_master_rready));
    bufp->fullBit(oldp+26,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr));
    bufp->fullBit(oldp+27,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr));
    bufp->fullBit(oldp+28,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awvalid));
    bufp->fullBit(oldp+29,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wvalid));
    bufp->fullBit(oldp+30,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bready));
    bufp->fullBit(oldp+31,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arvalid));
    bufp->fullBit(oldp+32,(((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
                            & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rready))));
    bufp->fullBit(oldp+33,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awvalid));
    bufp->fullBit(oldp+34,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wvalid));
    bufp->fullBit(oldp+35,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bready));
    bufp->fullBit(oldp+36,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arvalid));
    bufp->fullBit(oldp+37,(((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
                            & (IData)(vlSelf->ysyx_25010030_npc__DOT__io_master_rready))));
    bufp->fullIData(oldp+38,((3U & vlSelf->ysyx_25010030_npc__DOT__io_master_awaddr)),32);
    bufp->fullBit(oldp+39,(vlSelf->ysyx_25010030_npc__DOT__io_master_bvalid));
    bufp->fullBit(oldp+40,(vlSelf->ysyx_25010030_npc__DOT__io_master_arready));
    bufp->fullBit(oldp+41,(vlSelf->ysyx_25010030_npc__DOT__io_master_rvalid));
    bufp->fullCData(oldp+42,(vlSelf->ysyx_25010030_npc__DOT__io_master_rresp),2);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_25010030_npc__DOT__io_master_rdata),32);
    bufp->fullBit(oldp+44,(vlSelf->ysyx_25010030_npc__DOT__io_master_rlast));
    bufp->fullCData(oldp+45,(vlSelf->ysyx_25010030_npc__DOT__io_master_rid),4);
    bufp->fullBit(oldp+46,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_arready));
    bufp->fullIData(oldp+47,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rdata),32);
    bufp->fullBit(oldp+48,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid));
    bufp->fullCData(oldp+49,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rid),4);
    bufp->fullBit(oldp+50,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast));
    bufp->fullCData(oldp+51,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rresp),2);
    bufp->fullBit(oldp+52,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_awready));
    bufp->fullBit(oldp+53,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_wready));
    bufp->fullCData(oldp+54,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bresp),2);
    bufp->fullCData(oldp+55,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bid),4);
    bufp->fullBit(oldp+56,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_bvalid));
    bufp->fullBit(oldp+57,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_arready));
    bufp->fullIData(oldp+58,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rdata),32);
    bufp->fullBit(oldp+59,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rvalid));
    bufp->fullCData(oldp+60,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rid),4);
    bufp->fullBit(oldp+61,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rlast));
    bufp->fullCData(oldp+62,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_if_rresp),2);
    bufp->fullCData(oldp+63,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__next_master),2);
    bufp->fullBit(oldp+64,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awready));
    bufp->fullBit(oldp+65,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready));
    bufp->fullBit(oldp+66,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid));
    bufp->fullCData(oldp+67,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bresp),2);
    bufp->fullCData(oldp+68,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bid),4);
    bufp->fullBit(oldp+69,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arready));
    bufp->fullBit(oldp+70,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid));
    bufp->fullCData(oldp+71,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rresp),2);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rdata),32);
    bufp->fullBit(oldp+73,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rlast));
    bufp->fullCData(oldp+74,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rid),4);
    bufp->fullBit(oldp+75,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state));
    bufp->fullIData(oldp+76,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__read_addr),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__write_addr),32);
    bufp->fullBit(oldp+78,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req));
    bufp->fullBit(oldp+79,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req));
    bufp->fullCData(oldp+80,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__read_id),4);
    bufp->fullCData(oldp+81,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__write_id),4);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_pc),32);
    bufp->fullBit(oldp+83,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_valid));
    bufp->fullBit(oldp+84,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_ready));
    bufp->fullBit(oldp+85,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_RegWrite));
    bufp->fullCData(oldp+86,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_rd),4);
    bufp->fullCData(oldp+87,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1),4);
    bufp->fullCData(oldp+88,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2),4);
    bufp->fullCData(oldp+89,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_zimm),5);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_imm),32);
    bufp->fullCData(oldp+91,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_shamt),6);
    bufp->fullCData(oldp+92,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_alu_op),4);
    bufp->fullCData(oldp+93,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemLen),5);
    bufp->fullBit(oldp+94,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemWrite));
    bufp->fullBit(oldp+95,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemRead));
    bufp->fullCData(oldp+96,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode),7);
    bufp->fullCData(oldp+97,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_func3),3);
    bufp->fullBit(oldp+98,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jal));
    bufp->fullBit(oldp+99,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_jalr));
    bufp->fullBit(oldp+100,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wen1));
    bufp->fullBit(oldp+101,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_ecall));
    bufp->fullBit(oldp+102,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_mret));
    bufp->fullCData(oldp+103,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_op),2);
    bufp->fullSData(oldp+104,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_csr_wr_addr1),12);
    bufp->fullSData(oldp+105,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr1),12);
    bufp->fullSData(oldp+106,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr2),12);
    bufp->fullBit(oldp+107,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid));
    bufp->fullBit(oldp+108,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_ex_ready));
    bufp->fullIData(oldp+109,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_src2),32);
    bufp->fullBit(oldp+110,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite));
    bufp->fullCData(oldp+111,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd),4);
    bufp->fullBit(oldp+112,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead));
    bufp->fullBit(oldp+113,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite));
    bufp->fullCData(oldp+114,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemLen),5);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result),32);
    bufp->fullBit(oldp+116,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr));
    bufp->fullBit(oldp+117,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wen1));
    bufp->fullSData(oldp+118,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_addr1),12);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data1),32);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_wr_data2),32);
    bufp->fullIData(oldp+121,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_rdata),32);
    bufp->fullBit(oldp+122,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_ecall));
    bufp->fullBit(oldp+123,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_csr_mret));
    bufp->fullBit(oldp+124,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid));
    bufp->fullBit(oldp+125,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_RegWrite));
    bufp->fullCData(oldp+126,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd),4);
    bufp->fullIData(oldp+127,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_write_rd_data),32);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data1),32);
    bufp->fullIData(oldp+129,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data2),32);
    bufp->fullSData(oldp+130,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_addr1),12);
    bufp->fullBit(oldp+131,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wen1));
    bufp->fullBit(oldp+132,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_ecall));
    bufp->fullIData(oldp+133,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs
                              [vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1]),32);
    bufp->fullIData(oldp+134,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs
                              [vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs2]),32);
    bufp->fullIData(oldp+135,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1),32);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num2),32);
    bufp->fullCData(oldp+137,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_addr),4);
    bufp->fullBit(oldp+138,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_rd_en));
    bufp->fullBit(oldp+139,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_load));
    bufp->fullBit(oldp+140,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_forward_las));
    bufp->fullBit(oldp+141,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arvalid));
    bufp->fullIData(oldp+142,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr),32);
    bufp->fullCData(oldp+143,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__in_sdram)
                                ? 3U : 0U)),8);
    bufp->fullCData(oldp+144,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_arsize),3);
    bufp->fullCData(oldp+145,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__in_sdram)
                                ? 1U : 0U)),2);
    bufp->fullBit(oldp+146,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready));
    bufp->fullIData(oldp+147,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awaddr),32);
    bufp->fullCData(oldp+148,((((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                                | ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                                   | ((4U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                                      | (8U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)))))
                                ? 0U : (((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                                         | (0xcU == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb)))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+149,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_awvalid));
    bufp->fullIData(oldp+150,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wdata),32);
    bufp->fullCData(oldp+151,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wstrb),4);
    bufp->fullBit(oldp+152,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wvalid));
    bufp->fullBit(oldp+153,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_wlast));
    bufp->fullBit(oldp+154,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_arvalid));
    bufp->fullIData(oldp+155,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_araddr),32);
    bufp->fullCData(oldp+156,((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
                                | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready))
                                ? 1U : 0U)),4);
    bufp->fullCData(oldp+157,((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
                                | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready))
                                ? 2U : 0U)),3);
    bufp->fullBit(oldp+158,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__if_axi_rready));
    bufp->fullBit(oldp+159,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+160,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullBit(oldp+161,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+162,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+163,((0x200U == (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_araddr 
                                        >> 0x10U))));
    bufp->fullCData(oldp+164,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_arb__DOT__current_master),2);
    bufp->fullBit(oldp+165,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__clint_state));
    bufp->fullQData(oldp+166,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtime),64);
    bufp->fullIData(oldp+168,((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtime)),32);
    bufp->fullIData(oldp+169,((IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint__DOT__mtime 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src1),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__src2),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num1),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_num2),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__process_result),32);
    bufp->fullBit(oldp+175,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_zero));
    bufp->fullBit(oldp+176,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__alu_less));
    bufp->fullBit(oldp+177,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__ex_flush_condition));
    bufp->fullIData(oldp+178,((0x80U | ((0xffffe7f7U 
                                         & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1) 
                                        | (8U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1 
                                                 >> 4U))))),32);
    bufp->fullIData(oldp+179,((1U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wb_ex_csr_num1 
                                     >> 7U))),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__csr_write_data),32);
    bufp->fullCData(oldp+181,((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h9653a62d__0) 
                                << 1U) | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h666fa1ae__0))),2);
    bufp->fullCData(oldp+182,((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0) 
                                << 1U) | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_h3556a05f__0))),2);
    bufp->fullBit(oldp+183,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_MemWrite) 
                             & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemRead) 
                                & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_RegWrite) 
                                   & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_valid) 
                                      & ((0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd)) 
                                         & (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_rd) 
                                             != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_rs1)) 
                                            & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT____VdfgTmp_he5bf04e5__0)))))))));
    bufp->fullCData(oldp+184,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__load_use_flag),4);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_araddr),32);
    bufp->fullBit(oldp+186,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid));
    bufp->fullBit(oldp+187,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready));
    bufp->fullIData(oldp+188,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram[0]),26);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram[1]),26);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram[2]),26);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram[3]),26);
    bufp->fullBit(oldp+192,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[0]));
    bufp->fullBit(oldp+193,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[1]));
    bufp->fullBit(oldp+194,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[2]));
    bufp->fullBit(oldp+195,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[3]));
    bufp->fullIData(oldp+196,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_tag),26);
    bufp->fullCData(oldp+197,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__beat_cnt),2);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__idx),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__b),32);
    bufp->fullBit(oldp+200,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__in_sdram));
    bufp->fullCData(oldp+201,((0xfU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result)),4);
    bufp->fullCData(oldp+202,((3U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_process_result 
                                     >> 2U))),2);
    bufp->fullCData(oldp+203,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_word_offset),2);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wdata),32);
    bufp->fullCData(oldp+205,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__saved_wstrb),4);
    bufp->fullCData(oldp+206,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__burst_cnt),4);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__cache_addr),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata),32);
    bufp->fullBit(oldp+209,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__valid));
    bufp->fullIData(oldp+210,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__addr_reg),32);
    bufp->fullCData(oldp+211,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state),2);
    bufp->fullBit(oldp+212,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__aw_done));
    bufp->fullBit(oldp+213,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__w_done));
    bufp->fullBit(oldp+214,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__b_done));
    bufp->fullBit(oldp+215,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__ar_done));
    bufp->fullBit(oldp+216,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19ed6__0) 
                             & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite))));
    bufp->fullBit(oldp+217,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid));
    bufp->fullWData(oldp+218,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__block_data),128);
    bufp->fullCData(oldp+222,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen),5);
    bufp->fullBit(oldp+223,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__op_complete));
    bufp->fullIData(oldp+224,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1),32);
    bufp->fullCData(oldp+225,((0xffU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1)),8);
    bufp->fullSData(oldp+226,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__half_data),16);
    bufp->fullIData(oldp+227,(((0x11U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen))
                                ? (((- (IData)((1U 
                                                & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1 
                                                   >> 7U)))) 
                                    << 8U) | (0xffU 
                                              & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1))
                                : ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen))
                                    ? (0xffU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__byte_data1)
                                    : ((0x13U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__half_data) 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__half_data))
                                        : ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__l_MemLen))
                                            ? (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__half_data)
                                            : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rdata))))),32);
    bufp->fullIData(oldp+228,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__rd_data),32);
    bufp->fullIData(oldp+229,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mstatus),32);
    bufp->fullIData(oldp+230,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mtvec),32);
    bufp->fullIData(oldp+231,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__mepc),32);
    bufp->fullIData(oldp+232,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[0]),32);
    bufp->fullIData(oldp+233,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[1]),32);
    bufp->fullIData(oldp+234,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[2]),32);
    bufp->fullIData(oldp+235,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[3]),32);
    bufp->fullIData(oldp+236,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[4]),32);
    bufp->fullIData(oldp+237,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[5]),32);
    bufp->fullIData(oldp+238,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[6]),32);
    bufp->fullIData(oldp+239,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[7]),32);
    bufp->fullIData(oldp+240,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[8]),32);
    bufp->fullIData(oldp+241,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[9]),32);
    bufp->fullIData(oldp+242,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[10]),32);
    bufp->fullIData(oldp+243,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[11]),32);
    bufp->fullIData(oldp+244,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[12]),32);
    bufp->fullIData(oldp+245,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[13]),32);
    bufp->fullIData(oldp+246,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[14]),32);
    bufp->fullIData(oldp+247,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[15]),32);
    bufp->fullIData(oldp+248,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_ecall)
                                ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data2
                                : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_data1)),32);
    bufp->fullBit(oldp+249,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_valid) 
                             & (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wen1) 
                                 & (0x341U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_addr1))) 
                                | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_ecall)))));
    bufp->fullBit(oldp+250,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hcf6a53ee__0) 
                             & (0x300U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_addr1)))));
    bufp->fullBit(oldp+251,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hcf6a53ee__0) 
                             & (0x305U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_csr_wr_addr1)))));
    bufp->fullIData(oldp+252,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__0__KET____DOT__reg_inst__dout),32);
    bufp->fullBit(oldp+253,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
                             & ((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))));
    bufp->fullIData(oldp+254,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__10__KET____DOT__reg_inst__dout),32);
    bufp->fullBit(oldp+255,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
                             & ((0xaU == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))));
    bufp->fullIData(oldp+256,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__11__KET____DOT__reg_inst__dout),32);
    bufp->fullBit(oldp+257,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
                             & ((0xbU == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))));
    bufp->fullIData(oldp+258,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__12__KET____DOT__reg_inst__dout),32);
    bufp->fullBit(oldp+259,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
                             & ((0xcU == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))));
    bufp->fullIData(oldp+260,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__13__KET____DOT__reg_inst__dout),32);
    bufp->fullBit(oldp+261,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
                             & ((0xdU == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))));
    bufp->fullIData(oldp+262,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__14__KET____DOT__reg_inst__dout),32);
    bufp->fullBit(oldp+263,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
                             & ((0xeU == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))));
    bufp->fullIData(oldp+264,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__15__KET____DOT__reg_inst__dout),32);
    bufp->fullBit(oldp+265,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
                             & ((0xfU == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))));
    bufp->fullIData(oldp+266,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__1__KET____DOT__reg_inst__dout),32);
    bufp->fullBit(oldp+267,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
                             & ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))));
    bufp->fullIData(oldp+268,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__2__KET____DOT__reg_inst__dout),32);
    bufp->fullBit(oldp+269,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
                             & ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))));
    bufp->fullIData(oldp+270,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__3__KET____DOT__reg_inst__dout),32);
    bufp->fullBit(oldp+271,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
                             & ((3U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))));
    bufp->fullIData(oldp+272,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__4__KET____DOT__reg_inst__dout),32);
    bufp->fullBit(oldp+273,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
                             & ((4U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))));
    bufp->fullIData(oldp+274,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__5__KET____DOT__reg_inst__dout),32);
    bufp->fullBit(oldp+275,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
                             & ((5U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))));
    bufp->fullIData(oldp+276,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__6__KET____DOT__reg_inst__dout),32);
    bufp->fullBit(oldp+277,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
                             & ((6U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))));
    bufp->fullIData(oldp+278,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__7__KET____DOT__reg_inst__dout),32);
    bufp->fullBit(oldp+279,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
                             & ((7U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))));
    bufp->fullIData(oldp+280,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__8__KET____DOT__reg_inst__dout),32);
    bufp->fullBit(oldp+281,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
                             & ((8U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))));
    bufp->fullIData(oldp+282,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____Vcellout__reg_block__BRA__9__KET____DOT__reg_inst__dout),32);
    bufp->fullBit(oldp+283,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT____VdfgTmp_hc46baa58__0) 
                             & ((9U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd)) 
                                & (0U != (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_wb_rd))))));
    bufp->fullBit(oldp+284,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awready));
    bufp->fullBit(oldp+285,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready));
    bufp->fullBit(oldp+286,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid));
    bufp->fullCData(oldp+287,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bresp),2);
    bufp->fullCData(oldp+288,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bid),4);
    bufp->fullBit(oldp+289,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arready));
    bufp->fullBit(oldp+290,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid));
    bufp->fullCData(oldp+291,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rresp),2);
    bufp->fullIData(oldp+292,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rdata),32);
    bufp->fullBit(oldp+293,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rlast));
    bufp->fullCData(oldp+294,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rid),4);
    bufp->fullBit(oldp+295,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state));
    bufp->fullIData(oldp+296,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_addr),32);
    bufp->fullIData(oldp+297,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_addr),32);
    bufp->fullIData(oldp+298,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_data),32);
    bufp->fullCData(oldp+299,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_strb),4);
    bufp->fullBit(oldp+300,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req));
    bufp->fullBit(oldp+301,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req));
    bufp->fullCData(oldp+302,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__read_id),4);
    bufp->fullCData(oldp+303,(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__write_id),4);
    bufp->fullIData(oldp+304,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc),32);
    bufp->fullIData(oldp+305,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst),32);
    bufp->fullBit(oldp+306,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid));
    bufp->fullCData(oldp+307,((0x7fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)),7);
    bufp->fullCData(oldp+308,((0xfU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                       >> 0xfU))),4);
    bufp->fullCData(oldp+309,((0xfU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+310,((0xfU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                       >> 7U))),4);
    bufp->fullCData(oldp+311,((7U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+312,((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+313,((0x3fU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0x14U))),6);
    bufp->fullCData(oldp+314,((0x1fU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+315,((0x1fU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                        >> 2U))),5);
    bufp->fullIData(oldp+316,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__idu__DOT__immI),32);
    bufp->fullIData(oldp+317,((0xfffff000U & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)),32);
    bufp->fullIData(oldp+318,((((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+319,((((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+320,((((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+321,((0x1fU & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0xfU))),32);
    bufp->fullCData(oldp+322,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__state),2);
    bufp->fullBit(oldp+323,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_req));
    bufp->fullBit(oldp+324,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once));
    bufp->fullBit(oldp+325,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__once));
    bufp->fullBit(oldp+326,((0x100fU == vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_inst)));
    bufp->fullBit(oldp+327,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__id_ready));
    bufp->fullBit(oldp+328,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush));
    bufp->fullIData(oldp+329,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_flush_pc),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__jalr_target),32);
    bufp->fullBit(oldp+331,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__exu__DOT__take_branch));
    bufp->fullIData(oldp+332,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst),32);
    bufp->fullBit(oldp+333,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_valid));
    bufp->fullBit(oldp+334,((0x6fU == (0x7fU & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst))));
    bufp->fullIData(oldp+335,((((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                              [0U][0U]),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                              [0U][1U]),32);
    bufp->fullIData(oldp+338,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                              [0U][2U]),32);
    bufp->fullIData(oldp+339,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                              [0U][3U]),32);
    bufp->fullIData(oldp+340,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                              [1U][0U]),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                              [1U][1U]),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                              [1U][2U]),32);
    bufp->fullIData(oldp+343,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                              [1U][3U]),32);
    bufp->fullIData(oldp+344,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                              [2U][0U]),32);
    bufp->fullIData(oldp+345,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                              [2U][1U]),32);
    bufp->fullIData(oldp+346,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                              [2U][2U]),32);
    bufp->fullIData(oldp+347,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                              [2U][3U]),32);
    bufp->fullIData(oldp+348,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                              [3U][0U]),32);
    bufp->fullIData(oldp+349,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                              [3U][1U]),32);
    bufp->fullIData(oldp+350,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                              [3U][2U]),32);
    bufp->fullIData(oldp+351,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                              [3U][3U]),32);
    bufp->fullCData(oldp+352,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_index),2);
    bufp->fullCData(oldp+353,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_beat_idx),2);
    bufp->fullCData(oldp+354,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state),2);
    bufp->fullIData(oldp+355,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data[0]),32);
    bufp->fullIData(oldp+356,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data[1]),32);
    bufp->fullIData(oldp+357,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data[2]),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data[3]),32);
    bufp->fullIData(oldp+359,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc),32);
    bufp->fullCData(oldp+360,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram)
                                ? 3U : 0U)),8);
    bufp->fullCData(oldp+361,(((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram)
                                ? 1U : 0U)),2);
    bufp->fullIData(oldp+362,((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                               >> 6U)),26);
    bufp->fullCData(oldp+363,((3U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                                     >> 4U))),2);
    bufp->fullCData(oldp+364,((3U & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc 
                                     >> 2U))),2);
    bufp->fullBit(oldp+365,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram));
    bufp->fullBit(oldp+366,(vlSelf->clock));
    bufp->fullBit(oldp+367,(vlSelf->reset));
    bufp->fullBit(oldp+368,((((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
                              & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awready)) 
                             | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
                                & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awready)))));
    bufp->fullBit(oldp+369,((((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr) 
                              & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_wready)) 
                             | ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_uart_addr) 
                                & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_wready)))));
    bufp->fullCData(oldp+370,(((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr)
                                ? (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bresp)
                                : (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bresp))),2);
    bufp->fullCData(oldp+371,(((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__is_sram_addr)
                                ? (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bid)
                                : (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bid))),4);
    bufp->fullCData(oldp+372,(vlSelf->ysyx_25010030_npc__DOT__io_master_arlen),8);
    bufp->fullCData(oldp+373,(vlSelf->ysyx_25010030_npc__DOT__io_master_arburst),2);
    bufp->fullBit(oldp+374,(((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state)
                              ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__state) 
                                 & (~ ((((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_read_req) 
                                         & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rlast)) 
                                        & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_rvalid)) 
                                       | (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram__DOT__is_write_req) 
                                           & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bready)) 
                                          & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_bvalid)))))
                              : ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_arvalid) 
                                 | (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__sram_awvalid)))));
    bufp->fullBit(oldp+375,(((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state)
                              ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__state) 
                                 & (~ ((((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_read_req) 
                                         & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rlast)) 
                                        & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_rvalid)) 
                                       | (((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart__DOT__is_write_req) 
                                           & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bvalid)) 
                                          & (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_bready)))))
                              : ((IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_arvalid) 
                                 | (IData)(vlSelf->ysyx_25010030_npc__DOT__axi_bridge__DOT__uart_awvalid)))));
    bufp->fullCData(oldp+376,((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
                                | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready))
                                ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram)
                                    ? 3U : 0U) : 0U)),8);
    bufp->fullCData(oldp+377,((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
                                | (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_rready))
                                ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram)
                                    ? 1U : 0U) : 0U)),2);
    bufp->fullIData(oldp+378,((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__flush_once)
                                 ? vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc
                                 : vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__next_pc) 
                               + (((- (IData)((vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                         >> 0x14U))))))),32);
    bufp->fullCData(oldp+379,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__next_state),2);
    bufp->fullBit(oldp+380,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__hit));
    bufp->fullCData(oldp+381,(((0U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state))
                                ? ((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__req_valid)
                                    ? (((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19ed6__0) 
                                        & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__ex_lsu_MemWrite))
                                        ? 1U : 2U) : 0U)
                                : ((2U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state))
                                    ? ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rvalid) 
                                         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu_axi_rready)) 
                                        & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__axi_lsu_rlast))
                                        ? 0U : 2U) : 
                                   ((1U == (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__state))
                                     ? ((((IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__aw_done) 
                                          & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__w_done)) 
                                         & (IData)(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__lsu__DOT__b_done))
                                         ? 0U : 1U)
                                     : 0U)))),2);
    bufp->fullBit(oldp+382,(vlSelf->ysyx_25010030_npc__DOT__io_slave_awready));
    bufp->fullBit(oldp+383,(0U));
    bufp->fullIData(oldp+384,(0U),32);
    bufp->fullCData(oldp+385,(0U),4);
    bufp->fullCData(oldp+386,(0U),8);
    bufp->fullCData(oldp+387,(0U),3);
    bufp->fullCData(oldp+388,(0U),2);
    bufp->fullBit(oldp+389,(vlSelf->ysyx_25010030_npc__DOT__io_slave_wready));
    bufp->fullBit(oldp+390,(vlSelf->ysyx_25010030_npc__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+391,(vlSelf->ysyx_25010030_npc__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+392,(vlSelf->ysyx_25010030_npc__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+393,(vlSelf->ysyx_25010030_npc__DOT__io_slave_arready));
    bufp->fullBit(oldp+394,(vlSelf->ysyx_25010030_npc__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+395,(vlSelf->ysyx_25010030_npc__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+396,(vlSelf->ysyx_25010030_npc__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+397,(vlSelf->ysyx_25010030_npc__DOT__io_slave_rlast));
    bufp->fullCData(oldp+398,(vlSelf->ysyx_25010030_npc__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+399,(0x80000000U),32);
    bufp->fullIData(oldp+400,(0x8fffffffU),32);
    bufp->fullIData(oldp+401,(0xa0000000U),32);
    bufp->fullBit(oldp+402,(0U));
    bufp->fullBit(oldp+403,(1U));
    bufp->fullBit(oldp+404,(1U));
    bufp->fullCData(oldp+405,(1U),4);
    bufp->fullCData(oldp+406,(vlSelf->ysyx_25010030_npc__DOT__cpu__DOT__clint_rid),4);
    bufp->fullCData(oldp+407,(1U),2);
    bufp->fullCData(oldp+408,(2U),2);
    bufp->fullSData(oldp+409,(0x200U),16);
    bufp->fullCData(oldp+410,(3U),2);
    bufp->fullIData(oldp+411,(0x20U),32);
    bufp->fullIData(oldp+412,(0x100fU),32);
    bufp->fullCData(oldp+413,(0x6fU),7);
    bufp->fullCData(oldp+414,(2U),3);
    bufp->fullIData(oldp+415,(0x40U),32);
    bufp->fullIData(oldp+416,(0x10U),32);
    bufp->fullIData(oldp+417,(4U),32);
    bufp->fullIData(oldp+418,(2U),32);
    bufp->fullIData(oldp+419,(0x1aU),32);
    bufp->fullIData(oldp+420,(0xbfffffffU),32);
    bufp->fullCData(oldp+421,(1U),3);
    bufp->fullIData(oldp+422,(0xbU),32);
    bufp->fullSData(oldp+423,(0x300U),12);
    bufp->fullSData(oldp+424,(0x305U),12);
    bufp->fullSData(oldp+425,(0x341U),12);
    bufp->fullSData(oldp+426,(0x342U),12);
    bufp->fullIData(oldp+427,(0x1800U),32);
}
