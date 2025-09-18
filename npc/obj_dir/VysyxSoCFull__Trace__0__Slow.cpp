// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBus(c+1518,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1519,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1520,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1521,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1522,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1523,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1524,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1525,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1526,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1527,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1528,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1529,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1530,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1531,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1532,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1533,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1534,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1535,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1536,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1537,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBus(c+1518,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1519,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1520,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1521,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1522,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1523,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1524,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1525,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1526,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1527,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1528,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1529,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1530,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1531,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1532,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1533,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1534,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1535,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1536,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1537,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+1034,"spi_sck", false,-1);
    tracep->declBus(c+1035,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1538,"spi_mosi", false,-1);
    tracep->declBit(c+1539,"spi_miso", false,-1);
    tracep->declBit(c+1536,"uart_rx", false,-1);
    tracep->declBit(c+1537,"uart_tx", false,-1);
    tracep->declBit(c+1442,"psram_sck", false,-1);
    tracep->declBit(c+1443,"psram_ce_n", false,-1);
    tracep->declBus(c+1540,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1541,"sdram_clk", false,-1);
    tracep->declBit(c+1486,"sdram_cke", false,-1);
    tracep->declBit(c+1487,"sdram_cs", false,-1);
    tracep->declBit(c+1488,"sdram_ras", false,-1);
    tracep->declBit(c+1489,"sdram_cas", false,-1);
    tracep->declBit(c+1490,"sdram_we", false,-1);
    tracep->declBus(c+1542,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1491,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1492,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1504,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1518,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1519,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1520,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1521,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1522,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1523,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1524,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1525,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1526,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1527,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1528,"ps2_clk", false,-1);
    tracep->declBit(c+1529,"ps2_data", false,-1);
    tracep->declBus(c+1530,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1531,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1532,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1533,"vga_hsync", false,-1);
    tracep->declBit(c+1534,"vga_vsync", false,-1);
    tracep->declBit(c+1535,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBus(c+1380,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1381,"in_psel", false,-1);
    tracep->declBit(c+262,"in_penable", false,-1);
    tracep->declBus(c+1576,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1382,"in_pwrite", false,-1);
    tracep->declBus(c+263,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1444,"in_pready", false,-1);
    tracep->declBus(c+1445,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1384,"in_pslverr", false,-1);
    tracep->declBus(c+1380,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1381,"out_psel", false,-1);
    tracep->declBit(c+262,"out_penable", false,-1);
    tracep->declBus(c+1576,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1382,"out_pwrite", false,-1);
    tracep->declBus(c+263,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1444,"out_pready", false,-1);
    tracep->declBus(c+1445,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1384,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1381,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+262,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1382,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1380,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1576,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+263,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1444,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1384,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1445,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1385,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1386,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1382,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1387,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1576,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+263,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+264,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1577,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1578,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1388,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1028,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1382,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1389,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1576,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+263,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1036,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1577,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1023,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1390,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1029,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1382,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1389,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1576,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+263,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1391,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1579,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1392,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1393,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1030,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1382,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1380,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1576,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+263,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1543,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1577,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+265,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1394,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1395,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1382,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1389,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1576,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+263,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1396,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1577,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1544,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1397,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1398,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1382,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1387,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1576,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+263,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1545,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1399,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1546,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1400,"sel_0", false,-1);
    tracep->declBit(c+1401,"sel_1", false,-1);
    tracep->declBit(c+1402,"sel_2", false,-1);
    tracep->declBit(c+1403,"sel_3", false,-1);
    tracep->declBit(c+1404,"sel_4", false,-1);
    tracep->declBit(c+1405,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+266,"auto_in_awready", false,-1);
    tracep->declBit(c+267,"auto_in_awvalid", false,-1);
    tracep->declBus(c+268,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+269,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+270,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+271,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+266,"auto_in_wready", false,-1);
    tracep->declBit(c+272,"auto_in_wvalid", false,-1);
    tracep->declBus(c+273,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+274,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+275,"auto_in_bready", false,-1);
    tracep->declBit(c+1446,"auto_in_bvalid", false,-1);
    tracep->declBus(c+276,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1406,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+277,"auto_in_arready", false,-1);
    tracep->declBit(c+278,"auto_in_arvalid", false,-1);
    tracep->declBus(c+279,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+280,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+281,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+282,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+283,"auto_in_rready", false,-1);
    tracep->declBit(c+1447,"auto_in_rvalid", false,-1);
    tracep->declBus(c+284,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1547,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1406,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1381,"auto_out_psel", false,-1);
    tracep->declBit(c+262,"auto_out_penable", false,-1);
    tracep->declBit(c+1382,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1380,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+263,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1444,"auto_out_pready", false,-1);
    tracep->declBit(c+1384,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1445,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+262,"nodeOut_penable", false,-1);
    tracep->declBus(c+285,"state", false,-1, 1,0);
    tracep->declBit(c+277,"accept_read", false,-1);
    tracep->declBit(c+266,"accept_write", false,-1);
    tracep->declBit(c+286,"is_write_r", false,-1);
    tracep->declBit(c+1382,"is_write", false,-1);
    tracep->declBus(c+284,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+276,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+287,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+288,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+289,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+290,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1407,"resp", false,-1, 1,0);
    tracep->declBus(c+291,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1406,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1447,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+292,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1446,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+293,"auto_in_awready", false,-1);
    tracep->declBit(c+61,"auto_in_awvalid", false,-1);
    tracep->declBus(c+62,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+63,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+64,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+294,"auto_in_wready", false,-1);
    tracep->declBit(c+65,"auto_in_wvalid", false,-1);
    tracep->declBus(c+66,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+2,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+67,"auto_in_wlast", false,-1);
    tracep->declBit(c+21,"auto_in_bready", false,-1);
    tracep->declBit(c+295,"auto_in_bvalid", false,-1);
    tracep->declBus(c+296,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+297,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+298,"auto_in_arready", false,-1);
    tracep->declBit(c+68,"auto_in_arvalid", false,-1);
    tracep->declBus(c+69,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+70,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+3,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+71,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+22,"auto_in_rready", false,-1);
    tracep->declBit(c+299,"auto_in_rvalid", false,-1);
    tracep->declBus(c+300,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+301,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+302,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+303,"auto_in_rlast", false,-1);
    tracep->declBit(c+266,"auto_out_awready", false,-1);
    tracep->declBit(c+267,"auto_out_awvalid", false,-1);
    tracep->declBus(c+268,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+269,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+270,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+271,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+266,"auto_out_wready", false,-1);
    tracep->declBit(c+272,"auto_out_wvalid", false,-1);
    tracep->declBus(c+273,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+274,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+275,"auto_out_bready", false,-1);
    tracep->declBit(c+1446,"auto_out_bvalid", false,-1);
    tracep->declBus(c+276,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1406,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+277,"auto_out_arready", false,-1);
    tracep->declBit(c+278,"auto_out_arvalid", false,-1);
    tracep->declBus(c+279,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+280,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+281,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+282,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+283,"auto_out_rready", false,-1);
    tracep->declBit(c+1447,"auto_out_rvalid", false,-1);
    tracep->declBus(c+284,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1547,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1406,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+275,"io_enq_ready", false,-1);
    tracep->declBit(c+1446,"io_enq_valid", false,-1);
    tracep->declBus(c+276,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1406,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+295,"io_deq_valid", false,-1);
    tracep->declBus(c+296,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+297,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+304,"wrap", false,-1);
    tracep->declBit(c+305,"wrap_1", false,-1);
    tracep->declBit(c+306,"maybe_full", false,-1);
    tracep->declBit(c+307,"ptr_match", false,-1);
    tracep->declBit(c+308,"empty", false,-1);
    tracep->declBit(c+309,"full", false,-1);
    tracep->declBit(c+1448,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+305,"R0_addr", false,-1);
    tracep->declBit(c+1580,"R0_en", false,-1);
    tracep->declBit(c+1516,"R0_clk", false,-1);
    tracep->declBus(c+310,"R0_data", false,-1, 5,0);
    tracep->declBit(c+304,"W0_addr", false,-1);
    tracep->declBit(c+1448,"W0_en", false,-1);
    tracep->declBit(c+1516,"W0_clk", false,-1);
    tracep->declBus(c+1031,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+311+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+313,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+283,"io_enq_ready", false,-1);
    tracep->declBit(c+1447,"io_enq_valid", false,-1);
    tracep->declBus(c+284,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1547,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1406,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+22,"io_deq_ready", false,-1);
    tracep->declBit(c+299,"io_deq_valid", false,-1);
    tracep->declBus(c+300,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+301,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+302,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+303,"io_deq_bits_last", false,-1);
    tracep->declBit(c+314,"wrap", false,-1);
    tracep->declBit(c+315,"wrap_1", false,-1);
    tracep->declBit(c+316,"maybe_full", false,-1);
    tracep->declBit(c+317,"ptr_match", false,-1);
    tracep->declBit(c+318,"empty", false,-1);
    tracep->declBit(c+319,"full", false,-1);
    tracep->declBit(c+1449,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+315,"R0_addr", false,-1);
    tracep->declBit(c+1580,"R0_en", false,-1);
    tracep->declBit(c+1516,"R0_clk", false,-1);
    tracep->declQuad(c+320,"R0_data", false,-1, 38,0);
    tracep->declBit(c+314,"W0_addr", false,-1);
    tracep->declBit(c+1449,"W0_en", false,-1);
    tracep->declBit(c+1516,"W0_clk", false,-1);
    tracep->declQuad(c+1548,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+322+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+326,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+298,"io_enq_ready", false,-1);
    tracep->declBit(c+68,"io_enq_valid", false,-1);
    tracep->declBus(c+69,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+70,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+3,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+71,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+277,"io_deq_ready", false,-1);
    tracep->declBit(c+278,"io_deq_valid", false,-1);
    tracep->declBus(c+279,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+280,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+281,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+282,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+327,"wrap", false,-1);
    tracep->declBit(c+328,"wrap_1", false,-1);
    tracep->declBit(c+329,"maybe_full", false,-1);
    tracep->declBit(c+330,"ptr_match", false,-1);
    tracep->declBit(c+331,"empty", false,-1);
    tracep->declBit(c+332,"full", false,-1);
    tracep->declBit(c+72,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+328,"R0_addr", false,-1);
    tracep->declBit(c+1580,"R0_en", false,-1);
    tracep->declBit(c+1516,"R0_clk", false,-1);
    tracep->declQuad(c+333,"R0_data", false,-1, 46,0);
    tracep->declBit(c+327,"W0_addr", false,-1);
    tracep->declBit(c+72,"W0_en", false,-1);
    tracep->declBit(c+1516,"W0_clk", false,-1);
    tracep->declQuad(c+1550,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+335+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+339,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+293,"io_enq_ready", false,-1);
    tracep->declBit(c+61,"io_enq_valid", false,-1);
    tracep->declBus(c+62,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+63,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+64,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+266,"io_deq_ready", false,-1);
    tracep->declBit(c+267,"io_deq_valid", false,-1);
    tracep->declBus(c+268,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+269,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+270,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+271,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+340,"wrap", false,-1);
    tracep->declBit(c+341,"wrap_1", false,-1);
    tracep->declBit(c+342,"maybe_full", false,-1);
    tracep->declBit(c+343,"ptr_match", false,-1);
    tracep->declBit(c+344,"empty", false,-1);
    tracep->declBit(c+345,"full", false,-1);
    tracep->declBit(c+73,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+341,"R0_addr", false,-1);
    tracep->declBit(c+1580,"R0_en", false,-1);
    tracep->declBit(c+1516,"R0_clk", false,-1);
    tracep->declQuad(c+346,"R0_data", false,-1, 46,0);
    tracep->declBit(c+340,"W0_addr", false,-1);
    tracep->declBit(c+73,"W0_en", false,-1);
    tracep->declBit(c+1516,"W0_clk", false,-1);
    tracep->declQuad(c+1552,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+348+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+352,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+294,"io_enq_ready", false,-1);
    tracep->declBit(c+65,"io_enq_valid", false,-1);
    tracep->declBus(c+66,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+2,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+67,"io_enq_bits_last", false,-1);
    tracep->declBit(c+266,"io_deq_ready", false,-1);
    tracep->declBit(c+272,"io_deq_valid", false,-1);
    tracep->declBus(c+273,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+274,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+353,"wrap", false,-1);
    tracep->declBit(c+354,"wrap_1", false,-1);
    tracep->declBit(c+355,"maybe_full", false,-1);
    tracep->declBit(c+356,"ptr_match", false,-1);
    tracep->declBit(c+357,"empty", false,-1);
    tracep->declBit(c+358,"full", false,-1);
    tracep->declBit(c+74,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+354,"R0_addr", false,-1);
    tracep->declBit(c+1580,"R0_en", false,-1);
    tracep->declBit(c+1516,"R0_clk", false,-1);
    tracep->declQuad(c+359,"R0_data", false,-1, 35,0);
    tracep->declBit(c+353,"W0_addr", false,-1);
    tracep->declBit(c+74,"W0_en", false,-1);
    tracep->declBit(c+1516,"W0_clk", false,-1);
    tracep->declQuad(c+1554,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+361+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+365,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+234,"in_arready", false,-1);
    tracep->declBit(c+75,"in_arvalid", false,-1);
    tracep->declBus(c+76,"in_arid", false,-1, 3,0);
    tracep->declBus(c+77,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+78,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+4,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+79,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+23,"in_rready", false,-1);
    tracep->declBit(c+1037,"in_rvalid", false,-1);
    tracep->declBus(c+1038,"in_rid", false,-1, 3,0);
    tracep->declBus(c+1039,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1581,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+1040,"in_rlast", false,-1);
    tracep->declBit(c+235,"in_awready", false,-1);
    tracep->declBit(c+80,"in_awvalid", false,-1);
    tracep->declBus(c+81,"in_awid", false,-1, 3,0);
    tracep->declBus(c+82,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+83,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+5,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+84,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+236,"in_wready", false,-1);
    tracep->declBit(c+85,"in_wvalid", false,-1);
    tracep->declBus(c+86,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+6,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+87,"in_wlast", false,-1);
    tracep->declBit(c+24,"in_bready", false,-1);
    tracep->declBit(c+1041,"in_bvalid", false,-1);
    tracep->declBus(c+1038,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1581,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+234,"out_arready", false,-1);
    tracep->declBit(c+75,"out_arvalid", false,-1);
    tracep->declBus(c+76,"out_arid", false,-1, 3,0);
    tracep->declBus(c+77,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+78,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+4,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+79,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+23,"out_rready", false,-1);
    tracep->declBit(c+1037,"out_rvalid", false,-1);
    tracep->declBus(c+1038,"out_rid", false,-1, 3,0);
    tracep->declBus(c+1039,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1581,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+1040,"out_rlast", false,-1);
    tracep->declBit(c+235,"out_awready", false,-1);
    tracep->declBit(c+80,"out_awvalid", false,-1);
    tracep->declBus(c+81,"out_awid", false,-1, 3,0);
    tracep->declBus(c+82,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+83,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+5,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+84,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+236,"out_wready", false,-1);
    tracep->declBit(c+85,"out_wvalid", false,-1);
    tracep->declBus(c+86,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+6,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+87,"out_wlast", false,-1);
    tracep->declBit(c+24,"out_bready", false,-1);
    tracep->declBit(c+1041,"out_bvalid", false,-1);
    tracep->declBus(c+1038,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1581,"out_bresp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+366,"auto_in_awready", false,-1);
    tracep->declBit(c+88,"auto_in_awvalid", false,-1);
    tracep->declBus(c+81,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+82,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+83,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+5,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+84,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+367,"auto_in_wready", false,-1);
    tracep->declBit(c+89,"auto_in_wvalid", false,-1);
    tracep->declBus(c+86,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+6,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+87,"auto_in_wlast", false,-1);
    tracep->declBit(c+25,"auto_in_bready", false,-1);
    tracep->declBit(c+368,"auto_in_bvalid", false,-1);
    tracep->declBus(c+369,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+370,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+371,"auto_in_arready", false,-1);
    tracep->declBit(c+90,"auto_in_arvalid", false,-1);
    tracep->declBus(c+76,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+77,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+78,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+4,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+79,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+186,"auto_in_rready", false,-1);
    tracep->declBit(c+372,"auto_in_rvalid", false,-1);
    tracep->declBus(c+373,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+374,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+375,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+376,"auto_in_rlast", false,-1);
    tracep->declBit(c+187,"auto_out_awready", false,-1);
    tracep->declBit(c+91,"auto_out_awvalid", false,-1);
    tracep->declBus(c+62,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+63,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+64,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+92,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+188,"auto_out_wready", false,-1);
    tracep->declBit(c+93,"auto_out_wvalid", false,-1);
    tracep->declBus(c+66,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+2,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+67,"auto_out_wlast", false,-1);
    tracep->declBit(c+189,"auto_out_bready", false,-1);
    tracep->declBit(c+377,"auto_out_bvalid", false,-1);
    tracep->declBus(c+369,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+378,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+379,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+190,"auto_out_arready", false,-1);
    tracep->declBit(c+94,"auto_out_arvalid", false,-1);
    tracep->declBus(c+69,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+70,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+3,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+71,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+95,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+186,"auto_out_rready", false,-1);
    tracep->declBit(c+372,"auto_out_rvalid", false,-1);
    tracep->declBus(c+373,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+374,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+375,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+380,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+381,"auto_out_rlast", false,-1);
    tracep->declBit(c+93,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+382,"w_idle", false,-1);
    tracep->declBit(c+191,"in_awready", false,-1);
    tracep->declBit(c+383,"busy", false,-1);
    tracep->declBus(c+384,"r_addr", false,-1, 31,0);
    tracep->declBus(c+385,"r_len", false,-1, 7,0);
    tracep->declBus(c+96,"len", false,-1, 7,0);
    tracep->declBus(c+97,"addr", false,-1, 31,0);
    tracep->declBit(c+386,"busy_1", false,-1);
    tracep->declBus(c+387,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+388,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+98,"len_1", false,-1, 7,0);
    tracep->declBus(c+99,"addr_1", false,-1, 31,0);
    tracep->declBit(c+389,"wbeats_latched", false,-1);
    tracep->declBit(c+91,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+100,"wbeats_valid", false,-1);
    tracep->declBus(c+390,"w_counter", false,-1, 8,0);
    tracep->declBus(c+101,"w_todo", false,-1, 8,0);
    tracep->declBit(c+67,"w_last", false,-1);
    tracep->declBit(c+189,"nodeOut_bready", false,-1);
    tracep->declBus(c+391,"error_0", false,-1, 1,0);
    tracep->declBus(c+392,"error_1", false,-1, 1,0);
    tracep->declBus(c+393,"error_2", false,-1, 1,0);
    tracep->declBus(c+394,"error_3", false,-1, 1,0);
    tracep->declBus(c+395,"error_4", false,-1, 1,0);
    tracep->declBus(c+396,"error_5", false,-1, 1,0);
    tracep->declBus(c+397,"error_6", false,-1, 1,0);
    tracep->declBus(c+398,"error_7", false,-1, 1,0);
    tracep->declBus(c+399,"error_8", false,-1, 1,0);
    tracep->declBus(c+400,"error_9", false,-1, 1,0);
    tracep->declBus(c+401,"error_10", false,-1, 1,0);
    tracep->declBus(c+402,"error_11", false,-1, 1,0);
    tracep->declBus(c+403,"error_12", false,-1, 1,0);
    tracep->declBus(c+404,"error_13", false,-1, 1,0);
    tracep->declBus(c+405,"error_14", false,-1, 1,0);
    tracep->declBus(c+406,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+371,"io_enq_ready", false,-1);
    tracep->declBit(c+90,"io_enq_valid", false,-1);
    tracep->declBus(c+76,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+77,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+78,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+4,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+79,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+192,"io_deq_ready", false,-1);
    tracep->declBit(c+94,"io_deq_valid", false,-1);
    tracep->declBus(c+69,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+102,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+103,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+3,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+71,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+407,"ram", false,-1, 48,0);
    tracep->declBit(c+409,"full", false,-1);
    tracep->declBit(c+94,"io_deq_valid_0", false,-1);
    tracep->declBit(c+193,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+366,"io_enq_ready", false,-1);
    tracep->declBit(c+88,"io_enq_valid", false,-1);
    tracep->declBus(c+81,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+82,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+83,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+5,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+84,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+194,"io_deq_ready", false,-1);
    tracep->declBit(c+104,"io_deq_valid", false,-1);
    tracep->declBus(c+62,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+105,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+106,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+64,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+410,"ram", false,-1, 48,0);
    tracep->declBit(c+412,"full", false,-1);
    tracep->declBit(c+104,"io_deq_valid_0", false,-1);
    tracep->declBit(c+195,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+367,"io_enq_ready", false,-1);
    tracep->declBit(c+89,"io_enq_valid", false,-1);
    tracep->declBus(c+86,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+6,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+87,"io_enq_bits_last", false,-1);
    tracep->declBit(c+196,"io_deq_ready", false,-1);
    tracep->declBit(c+107,"io_deq_valid", false,-1);
    tracep->declBus(c+66,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+2,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1556,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+413,"ram", false,-1, 36,0);
    tracep->declBit(c+415,"full", false,-1);
    tracep->declBit(c+107,"io_deq_valid_0", false,-1);
    tracep->declBit(c+197,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+198,"auto_in_awready", false,-1);
    tracep->declBit(c+108,"auto_in_awvalid", false,-1);
    tracep->declBus(c+62,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+109,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+152,"auto_in_wready", false,-1);
    tracep->declBit(c+110,"auto_in_wvalid", false,-1);
    tracep->declBus(c+66,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+2,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+199,"auto_in_bready", false,-1);
    tracep->declBit(c+416,"auto_in_bvalid", false,-1);
    tracep->declBus(c+417,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+418,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+200,"auto_in_arready", false,-1);
    tracep->declBit(c+111,"auto_in_arvalid", false,-1);
    tracep->declBus(c+69,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+112,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+201,"auto_in_rready", false,-1);
    tracep->declBit(c+419,"auto_in_rvalid", false,-1);
    tracep->declBus(c+420,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+421,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+422,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+200,"nodeIn_arready", false,-1);
    tracep->declBit(c+198,"nodeIn_awready", false,-1);
    tracep->declBit(c+113,"w_sel0", false,-1);
    tracep->declBit(c+416,"w_full", false,-1);
    tracep->declBus(c+417,"w_id", false,-1, 3,0);
    tracep->declBit(c+423,"r_sel1", false,-1);
    tracep->declBit(c+424,"w_sel1", false,-1);
    tracep->declBit(c+419,"r_full", false,-1);
    tracep->declBus(c+420,"r_id", false,-1, 3,0);
    tracep->declBit(c+202,"ren", false,-1);
    tracep->declBit(c+425,"rdata_REG", false,-1);
    tracep->declBus(c+426,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+427,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+428,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+429,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+114,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+202,"R0_en", false,-1);
    tracep->declBit(c+1516,"R0_clk", false,-1);
    tracep->declBus(c+430,"R0_data", false,-1, 31,0);
    tracep->declBus(c+115,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+203,"W0_en", false,-1);
    tracep->declBit(c+1516,"W0_clk", false,-1);
    tracep->declBus(c+66,"W0_data", false,-1, 31,0);
    tracep->declBus(c+2,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+237,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+7,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+81,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+82,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+83,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+5,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+84,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1557,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+8,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+86,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+6,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+87,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+9,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1450,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1451,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1558,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+238,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+10,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+76,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+77,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+78,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+4,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+79,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+11,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1452,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1453,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1454,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1455,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1456,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+235,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+80,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+81,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+82,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+83,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+5,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+84,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+236,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+85,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+86,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+6,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+87,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+24,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+1041,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+1038,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+1581,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+234,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+75,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+76,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+77,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+78,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+4,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+79,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+1037,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+1038,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+1039,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1581,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+1040,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+366,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+88,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+81,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+82,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+83,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+5,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+84,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+367,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+89,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+86,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+6,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+87,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+25,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+368,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+369,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+370,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+371,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+90,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+76,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+77,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+78,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+4,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+79,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+186,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+372,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+373,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+374,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+375,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+376,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1450,"in_0_bvalid", false,-1);
    tracep->declBit(c+1452,"in_0_rvalid", false,-1);
    tracep->declBit(c+239,"in_0_wready", false,-1);
    tracep->declBit(c+240,"in_0_awready", false,-1);
    tracep->declBit(c+1559,"in_0_arready", false,-1);
    tracep->declBit(c+237,"anonIn_awready", false,-1);
    tracep->declBit(c+238,"anonIn_arready", false,-1);
    tracep->declBit(c+116,"requestARIO_0_0", false,-1);
    tracep->declBit(c+117,"requestARIO_0_1", false,-1);
    tracep->declBit(c+118,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+119,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+120,"arSel", false,-1, 15,0);
    tracep->declBus(c+121,"awSel", false,-1, 15,0);
    tracep->declBus(c+1457,"rSel", false,-1, 15,0);
    tracep->declBus(c+1458,"bSel", false,-1, 15,0);
    tracep->declBus(c+431,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+432,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+433,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+434,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+435,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+436,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+437,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+438,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+439,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+440,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+441,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+442,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+443,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+444,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+445,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+446,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+447,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+448,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+449,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+450,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+451,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+452,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+453,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+454,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+455,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+456,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+457,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+458,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+459,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+460,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+461,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+462,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+463,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+464,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+465,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+466,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+467,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+468,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+469,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+470,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+471,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+472,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+473,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+474,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+475,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+476,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+477,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+478,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+479,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+480,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+481,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+482,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+483,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+484,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+485,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+486,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+487,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+488,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+489,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+490,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+491,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+492,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+493,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+494,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+122,"in_0_arvalid", false,-1);
    tracep->declBit(c+495,"latched", false,-1);
    tracep->declBit(c+123,"in_0_awvalid", false,-1);
    tracep->declBit(c+12,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+13,"in_0_wvalid", false,-1);
    tracep->declBit(c+496,"idle_2", false,-1);
    tracep->declBit(c+1459,"anyValid", false,-1);
    tracep->declBus(c+1460,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+497,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1461,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1462,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1463,"prefixOR_1", false,-1);
    tracep->declBit(c+1464,"winner_2_1", false,-1);
    tracep->declBit(c+498,"state_2_0", false,-1);
    tracep->declBit(c+499,"state_2_1", false,-1);
    tracep->declBit(c+1465,"muxState_2_0", false,-1);
    tracep->declBit(c+1466,"muxState_2_1", false,-1);
    tracep->declBit(c+500,"idle_3", false,-1);
    tracep->declBit(c+1467,"anyValid_1", false,-1);
    tracep->declBus(c+1468,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+501,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1469,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1470,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1471,"winner_3_0", false,-1);
    tracep->declBit(c+1472,"winner_3_1", false,-1);
    tracep->declBit(c+502,"state_3_0", false,-1);
    tracep->declBit(c+503,"state_3_1", false,-1);
    tracep->declBit(c+1473,"muxState_3_0", false,-1);
    tracep->declBit(c+1560,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+504,"io_enq_ready", false,-1);
    tracep->declBit(c+12,"io_enq_valid", false,-1);
    tracep->declBus(c+124,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+241,"io_deq_ready", false,-1);
    tracep->declBit(c+14,"io_deq_valid", false,-1);
    tracep->declBus(c+125,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+505,"wrap", false,-1);
    tracep->declBit(c+506,"wrap_1", false,-1);
    tracep->declBit(c+507,"maybe_full", false,-1);
    tracep->declBit(c+508,"ptr_match", false,-1);
    tracep->declBit(c+509,"empty", false,-1);
    tracep->declBit(c+510,"full", false,-1);
    tracep->declBit(c+14,"io_deq_valid_0", false,-1);
    tracep->declBit(c+242,"do_deq", false,-1);
    tracep->declBit(c+243,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+506,"R0_addr", false,-1);
    tracep->declBit(c+1580,"R0_en", false,-1);
    tracep->declBit(c+1516,"R0_clk", false,-1);
    tracep->declBus(c+511,"R0_data", false,-1, 1,0);
    tracep->declBit(c+505,"W0_addr", false,-1);
    tracep->declBit(c+243,"W0_en", false,-1);
    tracep->declBit(c+1516,"W0_clk", false,-1);
    tracep->declBus(c+124,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+512+i*1,"Memory", true,(i+0), 1,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+204,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+126,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+62,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+63,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+64,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+188,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+93,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+66,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+2,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+67,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+189,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+377,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+369,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+378,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+205,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+127,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+69,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+70,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+3,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+71,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+186,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+372,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+373,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+374,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+375,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+381,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+198,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+108,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+62,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+109,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+152,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+110,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+66,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+2,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+199,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+416,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+417,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+418,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+200,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+111,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+69,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+112,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+201,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+419,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+420,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+421,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+422,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+128,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+129,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+514,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+130,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+69,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+26,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+515,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+516,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+517,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+293,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+61,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+62,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+63,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+64,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+294,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+65,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+66,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+2,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+67,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+21,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+295,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+296,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+297,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+298,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+68,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+69,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+70,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+3,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+71,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+22,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+299,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+300,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+301,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+302,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+303,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+377,"in_0_bvalid", false,-1);
    tracep->declBit(c+372,"in_0_rvalid", false,-1);
    tracep->declBit(c+206,"in_0_wready", false,-1);
    tracep->declBit(c+207,"in_0_awready", false,-1);
    tracep->declBit(c+205,"in_0_arready", false,-1);
    tracep->declBit(c+204,"anonIn_awready", false,-1);
    tracep->declBit(c+132,"requestARIO_0_0", false,-1);
    tracep->declBit(c+133,"requestARIO_0_1", false,-1);
    tracep->declBit(c+134,"requestARIO_0_2", false,-1);
    tracep->declBit(c+135,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+136,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+137,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+138,"arSel", false,-1, 15,0);
    tracep->declBus(c+139,"awSel", false,-1, 15,0);
    tracep->declBus(c+518,"rSel", false,-1, 15,0);
    tracep->declBus(c+519,"bSel", false,-1, 15,0);
    tracep->declBit(c+520,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+521,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+522,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+523,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+524,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+525,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+526,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+527,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+528,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+529,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+530,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+531,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+532,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+533,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+534,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+535,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+536,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+537,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+538,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+539,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+540,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+541,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+542,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+543,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+544,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+545,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+546,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+547,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+548,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+549,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+550,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+551,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+552,"latched", false,-1);
    tracep->declBit(c+140,"in_0_awvalid", false,-1);
    tracep->declBit(c+141,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+142,"in_0_wvalid", false,-1);
    tracep->declBit(c+553,"idle_3", false,-1);
    tracep->declBit(c+554,"anyValid", false,-1);
    tracep->declBus(c+555,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+556,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+557,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+558,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+559,"prefixOR_1", false,-1);
    tracep->declBit(c+560,"winner_3_1", false,-1);
    tracep->declBit(c+561,"winner_3_2", false,-1);
    tracep->declBit(c+562,"state_3_0", false,-1);
    tracep->declBit(c+563,"state_3_1", false,-1);
    tracep->declBit(c+564,"state_3_2", false,-1);
    tracep->declBit(c+565,"muxState_3_0", false,-1);
    tracep->declBit(c+566,"muxState_3_1", false,-1);
    tracep->declBit(c+567,"muxState_3_2", false,-1);
    tracep->declBit(c+568,"idle_4", false,-1);
    tracep->declBit(c+569,"anyValid_1", false,-1);
    tracep->declBus(c+570,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+571,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+572,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+573,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+574,"winner_4_0", false,-1);
    tracep->declBit(c+575,"winner_4_2", false,-1);
    tracep->declBit(c+576,"state_4_0", false,-1);
    tracep->declBit(c+577,"state_4_2", false,-1);
    tracep->declBit(c+578,"muxState_4_0", false,-1);
    tracep->declBit(c+579,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+580,"io_enq_ready", false,-1);
    tracep->declBit(c+141,"io_enq_valid", false,-1);
    tracep->declBus(c+143,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+208,"io_deq_ready", false,-1);
    tracep->declBit(c+144,"io_deq_valid", false,-1);
    tracep->declBus(c+145,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+581,"wrap", false,-1);
    tracep->declBit(c+582,"wrap_1", false,-1);
    tracep->declBit(c+583,"maybe_full", false,-1);
    tracep->declBit(c+584,"ptr_match", false,-1);
    tracep->declBit(c+585,"empty", false,-1);
    tracep->declBit(c+586,"full", false,-1);
    tracep->declBit(c+144,"io_deq_valid_0", false,-1);
    tracep->declBit(c+209,"do_deq", false,-1);
    tracep->declBit(c+210,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+582,"R0_addr", false,-1);
    tracep->declBit(c+1580,"R0_en", false,-1);
    tracep->declBit(c+1516,"R0_clk", false,-1);
    tracep->declBus(c+587,"R0_data", false,-1, 2,0);
    tracep->declBit(c+581,"W0_addr", false,-1);
    tracep->declBit(c+210,"W0_en", false,-1);
    tracep->declBit(c+1516,"W0_clk", false,-1);
    tracep->declBus(c+143,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+588+i*1,"Memory", true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+187,"auto_in_awready", false,-1);
    tracep->declBit(c+91,"auto_in_awvalid", false,-1);
    tracep->declBus(c+62,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+63,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+64,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+92,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+188,"auto_in_wready", false,-1);
    tracep->declBit(c+93,"auto_in_wvalid", false,-1);
    tracep->declBus(c+66,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+2,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+67,"auto_in_wlast", false,-1);
    tracep->declBit(c+189,"auto_in_bready", false,-1);
    tracep->declBit(c+377,"auto_in_bvalid", false,-1);
    tracep->declBus(c+369,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+378,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+379,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+190,"auto_in_arready", false,-1);
    tracep->declBit(c+94,"auto_in_arvalid", false,-1);
    tracep->declBus(c+69,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+70,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+3,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+71,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+95,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+186,"auto_in_rready", false,-1);
    tracep->declBit(c+372,"auto_in_rvalid", false,-1);
    tracep->declBus(c+373,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+374,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+375,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+380,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+381,"auto_in_rlast", false,-1);
    tracep->declBit(c+204,"auto_out_awready", false,-1);
    tracep->declBit(c+126,"auto_out_awvalid", false,-1);
    tracep->declBus(c+62,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+63,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+64,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+188,"auto_out_wready", false,-1);
    tracep->declBit(c+93,"auto_out_wvalid", false,-1);
    tracep->declBus(c+66,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+2,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+67,"auto_out_wlast", false,-1);
    tracep->declBit(c+189,"auto_out_bready", false,-1);
    tracep->declBit(c+377,"auto_out_bvalid", false,-1);
    tracep->declBus(c+369,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+378,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+205,"auto_out_arready", false,-1);
    tracep->declBit(c+127,"auto_out_arvalid", false,-1);
    tracep->declBus(c+69,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+70,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+3,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+71,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+186,"auto_out_rready", false,-1);
    tracep->declBit(c+372,"auto_out_rvalid", false,-1);
    tracep->declBus(c+373,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+374,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+375,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+381,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+590,"io_enq_ready", false,-1);
    tracep->declBit(c+153,"io_enq_valid", false,-1);
    tracep->declBit(c+95,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+27,"io_deq_ready", false,-1);
    tracep->declBit(c+591,"io_deq_valid", false,-1);
    tracep->declBit(c+592,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+591,"full", false,-1);
    tracep->declBit(c+592,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+593,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+594,"io_enq_ready", false,-1);
    tracep->declBit(c+154,"io_enq_valid", false,-1);
    tracep->declBit(c+95,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+28,"io_deq_ready", false,-1);
    tracep->declBit(c+595,"io_deq_valid", false,-1);
    tracep->declBit(c+596,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+595,"full", false,-1);
    tracep->declBit(c+596,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+597,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+598,"io_enq_ready", false,-1);
    tracep->declBit(c+155,"io_enq_valid", false,-1);
    tracep->declBit(c+95,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+29,"io_deq_ready", false,-1);
    tracep->declBit(c+599,"io_deq_valid", false,-1);
    tracep->declBit(c+600,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+599,"full", false,-1);
    tracep->declBit(c+600,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+601,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+602,"io_enq_ready", false,-1);
    tracep->declBit(c+156,"io_enq_valid", false,-1);
    tracep->declBit(c+95,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+30,"io_deq_ready", false,-1);
    tracep->declBit(c+603,"io_deq_valid", false,-1);
    tracep->declBit(c+604,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+603,"full", false,-1);
    tracep->declBit(c+604,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+605,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+606,"io_enq_ready", false,-1);
    tracep->declBit(c+157,"io_enq_valid", false,-1);
    tracep->declBit(c+95,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+31,"io_deq_ready", false,-1);
    tracep->declBit(c+607,"io_deq_valid", false,-1);
    tracep->declBit(c+608,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+607,"full", false,-1);
    tracep->declBit(c+608,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+609,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+610,"io_enq_ready", false,-1);
    tracep->declBit(c+158,"io_enq_valid", false,-1);
    tracep->declBit(c+95,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+32,"io_deq_ready", false,-1);
    tracep->declBit(c+611,"io_deq_valid", false,-1);
    tracep->declBit(c+612,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+611,"full", false,-1);
    tracep->declBit(c+612,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+613,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+614,"io_enq_ready", false,-1);
    tracep->declBit(c+159,"io_enq_valid", false,-1);
    tracep->declBit(c+95,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+33,"io_deq_ready", false,-1);
    tracep->declBit(c+615,"io_deq_valid", false,-1);
    tracep->declBit(c+616,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+615,"full", false,-1);
    tracep->declBit(c+616,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+617,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+618,"io_enq_ready", false,-1);
    tracep->declBit(c+160,"io_enq_valid", false,-1);
    tracep->declBit(c+95,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+34,"io_deq_ready", false,-1);
    tracep->declBit(c+619,"io_deq_valid", false,-1);
    tracep->declBit(c+620,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+619,"full", false,-1);
    tracep->declBit(c+620,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+621,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+622,"io_enq_ready", false,-1);
    tracep->declBit(c+161,"io_enq_valid", false,-1);
    tracep->declBit(c+92,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+35,"io_deq_ready", false,-1);
    tracep->declBit(c+623,"io_deq_valid", false,-1);
    tracep->declBit(c+624,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+623,"full", false,-1);
    tracep->declBit(c+624,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+625,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+626,"io_enq_ready", false,-1);
    tracep->declBit(c+162,"io_enq_valid", false,-1);
    tracep->declBit(c+92,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+36,"io_deq_ready", false,-1);
    tracep->declBit(c+627,"io_deq_valid", false,-1);
    tracep->declBit(c+628,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+627,"full", false,-1);
    tracep->declBit(c+628,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+629,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+630,"io_enq_ready", false,-1);
    tracep->declBit(c+163,"io_enq_valid", false,-1);
    tracep->declBit(c+92,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+37,"io_deq_ready", false,-1);
    tracep->declBit(c+631,"io_deq_valid", false,-1);
    tracep->declBit(c+632,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+631,"full", false,-1);
    tracep->declBit(c+632,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+633,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+634,"io_enq_ready", false,-1);
    tracep->declBit(c+164,"io_enq_valid", false,-1);
    tracep->declBit(c+92,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+38,"io_deq_ready", false,-1);
    tracep->declBit(c+635,"io_deq_valid", false,-1);
    tracep->declBit(c+636,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+635,"full", false,-1);
    tracep->declBit(c+636,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+637,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+638,"io_enq_ready", false,-1);
    tracep->declBit(c+165,"io_enq_valid", false,-1);
    tracep->declBit(c+95,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+39,"io_deq_ready", false,-1);
    tracep->declBit(c+639,"io_deq_valid", false,-1);
    tracep->declBit(c+640,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+639,"full", false,-1);
    tracep->declBit(c+640,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+641,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+642,"io_enq_ready", false,-1);
    tracep->declBit(c+166,"io_enq_valid", false,-1);
    tracep->declBit(c+92,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+40,"io_deq_ready", false,-1);
    tracep->declBit(c+643,"io_deq_valid", false,-1);
    tracep->declBit(c+644,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+643,"full", false,-1);
    tracep->declBit(c+644,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+645,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+646,"io_enq_ready", false,-1);
    tracep->declBit(c+167,"io_enq_valid", false,-1);
    tracep->declBit(c+92,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+41,"io_deq_ready", false,-1);
    tracep->declBit(c+647,"io_deq_valid", false,-1);
    tracep->declBit(c+648,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+647,"full", false,-1);
    tracep->declBit(c+648,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+649,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+650,"io_enq_ready", false,-1);
    tracep->declBit(c+168,"io_enq_valid", false,-1);
    tracep->declBit(c+92,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+42,"io_deq_ready", false,-1);
    tracep->declBit(c+651,"io_deq_valid", false,-1);
    tracep->declBit(c+652,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+651,"full", false,-1);
    tracep->declBit(c+652,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+653,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+654,"io_enq_ready", false,-1);
    tracep->declBit(c+169,"io_enq_valid", false,-1);
    tracep->declBit(c+92,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+43,"io_deq_ready", false,-1);
    tracep->declBit(c+655,"io_deq_valid", false,-1);
    tracep->declBit(c+656,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+655,"full", false,-1);
    tracep->declBit(c+656,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+657,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+658,"io_enq_ready", false,-1);
    tracep->declBit(c+170,"io_enq_valid", false,-1);
    tracep->declBit(c+92,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+44,"io_deq_ready", false,-1);
    tracep->declBit(c+659,"io_deq_valid", false,-1);
    tracep->declBit(c+660,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+659,"full", false,-1);
    tracep->declBit(c+660,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+661,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+662,"io_enq_ready", false,-1);
    tracep->declBit(c+171,"io_enq_valid", false,-1);
    tracep->declBit(c+92,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+45,"io_deq_ready", false,-1);
    tracep->declBit(c+663,"io_deq_valid", false,-1);
    tracep->declBit(c+664,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+663,"full", false,-1);
    tracep->declBit(c+664,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+665,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+666,"io_enq_ready", false,-1);
    tracep->declBit(c+172,"io_enq_valid", false,-1);
    tracep->declBit(c+92,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+46,"io_deq_ready", false,-1);
    tracep->declBit(c+667,"io_deq_valid", false,-1);
    tracep->declBit(c+668,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+667,"full", false,-1);
    tracep->declBit(c+668,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+669,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+670,"io_enq_ready", false,-1);
    tracep->declBit(c+173,"io_enq_valid", false,-1);
    tracep->declBit(c+92,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+47,"io_deq_ready", false,-1);
    tracep->declBit(c+671,"io_deq_valid", false,-1);
    tracep->declBit(c+672,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+671,"full", false,-1);
    tracep->declBit(c+672,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+673,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+674,"io_enq_ready", false,-1);
    tracep->declBit(c+174,"io_enq_valid", false,-1);
    tracep->declBit(c+92,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+48,"io_deq_ready", false,-1);
    tracep->declBit(c+675,"io_deq_valid", false,-1);
    tracep->declBit(c+676,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+675,"full", false,-1);
    tracep->declBit(c+676,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+677,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+678,"io_enq_ready", false,-1);
    tracep->declBit(c+175,"io_enq_valid", false,-1);
    tracep->declBit(c+92,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+49,"io_deq_ready", false,-1);
    tracep->declBit(c+679,"io_deq_valid", false,-1);
    tracep->declBit(c+680,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+679,"full", false,-1);
    tracep->declBit(c+680,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+681,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+682,"io_enq_ready", false,-1);
    tracep->declBit(c+176,"io_enq_valid", false,-1);
    tracep->declBit(c+95,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+50,"io_deq_ready", false,-1);
    tracep->declBit(c+683,"io_deq_valid", false,-1);
    tracep->declBit(c+684,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+683,"full", false,-1);
    tracep->declBit(c+684,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+685,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+686,"io_enq_ready", false,-1);
    tracep->declBit(c+177,"io_enq_valid", false,-1);
    tracep->declBit(c+92,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+51,"io_deq_ready", false,-1);
    tracep->declBit(c+687,"io_deq_valid", false,-1);
    tracep->declBit(c+688,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+687,"full", false,-1);
    tracep->declBit(c+688,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+689,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+690,"io_enq_ready", false,-1);
    tracep->declBit(c+178,"io_enq_valid", false,-1);
    tracep->declBit(c+92,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+52,"io_deq_ready", false,-1);
    tracep->declBit(c+691,"io_deq_valid", false,-1);
    tracep->declBit(c+692,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+691,"full", false,-1);
    tracep->declBit(c+692,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+693,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+694,"io_enq_ready", false,-1);
    tracep->declBit(c+179,"io_enq_valid", false,-1);
    tracep->declBit(c+95,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+53,"io_deq_ready", false,-1);
    tracep->declBit(c+695,"io_deq_valid", false,-1);
    tracep->declBit(c+696,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+695,"full", false,-1);
    tracep->declBit(c+696,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+697,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+698,"io_enq_ready", false,-1);
    tracep->declBit(c+180,"io_enq_valid", false,-1);
    tracep->declBit(c+95,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+54,"io_deq_ready", false,-1);
    tracep->declBit(c+699,"io_deq_valid", false,-1);
    tracep->declBit(c+700,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+699,"full", false,-1);
    tracep->declBit(c+700,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+701,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+702,"io_enq_ready", false,-1);
    tracep->declBit(c+181,"io_enq_valid", false,-1);
    tracep->declBit(c+95,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+55,"io_deq_ready", false,-1);
    tracep->declBit(c+703,"io_deq_valid", false,-1);
    tracep->declBit(c+704,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+703,"full", false,-1);
    tracep->declBit(c+704,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+705,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+706,"io_enq_ready", false,-1);
    tracep->declBit(c+182,"io_enq_valid", false,-1);
    tracep->declBit(c+95,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+56,"io_deq_ready", false,-1);
    tracep->declBit(c+707,"io_deq_valid", false,-1);
    tracep->declBit(c+708,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+707,"full", false,-1);
    tracep->declBit(c+708,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+709,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+710,"io_enq_ready", false,-1);
    tracep->declBit(c+183,"io_enq_valid", false,-1);
    tracep->declBit(c+95,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+57,"io_deq_ready", false,-1);
    tracep->declBit(c+711,"io_deq_valid", false,-1);
    tracep->declBit(c+712,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+711,"full", false,-1);
    tracep->declBit(c+712,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+713,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+714,"io_enq_ready", false,-1);
    tracep->declBit(c+184,"io_enq_valid", false,-1);
    tracep->declBit(c+95,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+58,"io_deq_ready", false,-1);
    tracep->declBit(c+715,"io_deq_valid", false,-1);
    tracep->declBit(c+716,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+715,"full", false,-1);
    tracep->declBit(c+716,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+717,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+15,"reset", false,-1);
    tracep->declBit(c+237,"auto_master_out_awready", false,-1);
    tracep->declBit(c+7,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+81,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+82,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+83,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+5,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+84,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1557,"auto_master_out_wready", false,-1);
    tracep->declBit(c+8,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+86,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+6,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+87,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+9,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1450,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1451,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1558,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+238,"auto_master_out_arready", false,-1);
    tracep->declBit(c+10,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+76,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+77,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+78,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+4,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+79,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+11,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1452,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1453,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1454,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1455,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1456,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+15,"reset", false,-1);
    tracep->declBit(c+1577,"io_interrupt", false,-1);
    tracep->declBit(c+237,"io_master_awready", false,-1);
    tracep->declBit(c+7,"io_master_awvalid", false,-1);
    tracep->declBus(c+82,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+81,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+83,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+5,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+84,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1557,"io_master_wready", false,-1);
    tracep->declBit(c+8,"io_master_wvalid", false,-1);
    tracep->declBus(c+86,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+6,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+87,"io_master_wlast", false,-1);
    tracep->declBit(c+9,"io_master_bready", false,-1);
    tracep->declBit(c+1450,"io_master_bvalid", false,-1);
    tracep->declBus(c+1558,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1451,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+238,"io_master_arready", false,-1);
    tracep->declBit(c+10,"io_master_arvalid", false,-1);
    tracep->declBus(c+77,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+76,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+78,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+4,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+79,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+11,"io_master_rready", false,-1);
    tracep->declBit(c+1452,"io_master_rvalid", false,-1);
    tracep->declBus(c+1455,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1454,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1456,"io_master_rlast", false,-1);
    tracep->declBus(c+1453,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1577,"io_slave_awready", false,-1);
    tracep->declBit(c+1577,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1582,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1583,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1584,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1585,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1581,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1577,"io_slave_wready", false,-1);
    tracep->declBit(c+1577,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1582,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1583,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1577,"io_slave_wlast", false,-1);
    tracep->declBit(c+1577,"io_slave_bready", false,-1);
    tracep->declBit(c+1577,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1581,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1583,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1577,"io_slave_arready", false,-1);
    tracep->declBit(c+1577,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1582,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1583,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1584,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1585,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1581,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1577,"io_slave_rready", false,-1);
    tracep->declBit(c+1577,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1581,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1582,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1577,"io_slave_rlast", false,-1);
    tracep->declBus(c+1583,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+718,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+719,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+720,"IF_valid", false,-1);
    tracep->declBit(c+721,"id_ready", false,-1);
    tracep->declBus(c+722,"id_ex_pc", false,-1, 31,0);
    tracep->declBit(c+723,"id_valid", false,-1);
    tracep->declBit(c+724,"ex_ready", false,-1);
    tracep->declBit(c+725,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+726,"id_ex_rd", false,-1, 3,0);
    tracep->declBus(c+727,"id_wb_rs1", false,-1, 3,0);
    tracep->declBus(c+728,"id_wb_rs2", false,-1, 3,0);
    tracep->declBus(c+729,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+730,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+731,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+732,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+733,"id_ex_MemLen", false,-1, 4,0);
    tracep->declBit(c+734,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+735,"id_ex_MemRead", false,-1);
    tracep->declBus(c+736,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+737,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+738,"id_ex_jal", false,-1);
    tracep->declBit(c+739,"id_ex_jalr", false,-1);
    tracep->declBit(c+740,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+741,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+742,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+743,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBus(c+744,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+745,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+746,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBit(c+747,"ex_lsu_valid", false,-1);
    tracep->declBit(c+748,"lsu_ex_ready", false,-1);
    tracep->declBus(c+749,"ex_lsu_src2", false,-1, 31,0);
    tracep->declBit(c+750,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+751,"ex_lsu_rd", false,-1, 3,0);
    tracep->declBit(c+752,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+753,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+754,"ex_lsu_MemLen", false,-1, 4,0);
    tracep->declBus(c+755,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBit(c+756,"ex_flush", false,-1);
    tracep->declBus(c+757,"ex_flush_pc", false,-1, 31,0);
    tracep->declBit(c+758,"ex_lsu_csr", false,-1);
    tracep->declBit(c+759,"ex_lsu_csr_wen1", false,-1);
    tracep->declBus(c+760,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+761,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+762,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+763,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+764,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+765,"ex_lsu_csr_mret", false,-1);
    tracep->declBit(c+766,"lsu_wb_valid", false,-1);
    tracep->declBit(c+1580,"wb_lsu_ready", false,-1);
    tracep->declBit(c+767,"lsu_wb_RegWrite", false,-1);
    tracep->declBus(c+768,"lsu_wb_rd", false,-1, 3,0);
    tracep->declBus(c+769,"lsu_wb_write_rd_data", false,-1, 31,0);
    tracep->declBus(c+770,"lsu_wb_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+771,"lsu_wb_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+772,"lsu_wb_csr_wr_addr1", false,-1, 11,0);
    tracep->declBit(c+773,"lsu_wb_csr_wen1", false,-1);
    tracep->declBit(c+774,"lsu_wb_csr_ecall", false,-1);
    tracep->declBus(c+775,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+776,"wb_ex_src2", false,-1, 31,0);
    tracep->declBus(c+777,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+778,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBus(c+779,"lsu_ex_forward_rd", false,-1, 3,0);
    tracep->declBit(c+780,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+781,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBit(c+782,"ex_lsu_forward_las", false,-1);
    tracep->declBit(c+783,"lsu_axi_arvalid", false,-1);
    tracep->declBit(c+244,"axi_lsu_arready", false,-1);
    tracep->declBus(c+784,"lsu_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1586,"lsu_axi_arid", false,-1, 3,0);
    tracep->declBus(c+785,"lsu_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+786,"lsu_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+787,"lsu_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+211,"axi_lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+212,"axi_lsu_rvalid", false,-1);
    tracep->declBus(c+213,"axi_lsu_rid", false,-1, 3,0);
    tracep->declBit(c+214,"axi_lsu_rlast", false,-1);
    tracep->declBit(c+788,"lsu_axi_rready", false,-1);
    tracep->declBus(c+215,"axi_lsu_rresp", false,-1, 1,0);
    tracep->declBus(c+789,"lsu_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1586,"lsu_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1584,"lsu_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+790,"lsu_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1581,"lsu_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+791,"lsu_axi_awvalid", false,-1);
    tracep->declBit(c+245,"axi_lsu_awready", false,-1);
    tracep->declBus(c+792,"lsu_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+793,"lsu_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+794,"lsu_axi_wvalid", false,-1);
    tracep->declBit(c+795,"lsu_axi_wlast", false,-1);
    tracep->declBit(c+246,"axi_lsu_wready", false,-1);
    tracep->declBus(c+216,"axi_lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+217,"axi_lsu_bid", false,-1, 3,0);
    tracep->declBit(c+218,"axi_lsu_bvalid", false,-1);
    tracep->declBit(c+1580,"lsu_axi_bready", false,-1);
    tracep->declBit(c+796,"if_axi_arvalid", false,-1);
    tracep->declBit(c+247,"axi_if_arready", false,-1);
    tracep->declBus(c+797,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+798,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+799,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+800,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+801,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+219,"axi_if_rdata", false,-1, 31,0);
    tracep->declBit(c+220,"axi_if_rvalid", false,-1);
    tracep->declBus(c+221,"axi_if_rid", false,-1, 3,0);
    tracep->declBit(c+222,"axi_if_rlast", false,-1);
    tracep->declBit(c+802,"if_axi_rready", false,-1);
    tracep->declBus(c+223,"axi_if_rresp", false,-1, 1,0);
    tracep->declBus(c+16,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+17,"clint_arvalid", false,-1);
    tracep->declBit(c+803,"clint_arready", false,-1);
    tracep->declBus(c+1581,"clint_rresp", false,-1, 1,0);
    tracep->declBus(c+804,"clint_rdata", false,-1, 31,0);
    tracep->declBit(c+805,"clint_rvalid", false,-1);
    tracep->declBit(c+806,"clint_rlast", false,-1);
    tracep->declBit(c+18,"clint_rready", false,-1);
    tracep->pushNamePrefix("axi_arb ");
    tracep->declBit(c+1516,"clk", false,-1);
    tracep->declBit(c+15,"reset", false,-1);
    tracep->declBit(c+247,"ifu_arready", false,-1);
    tracep->declBit(c+796,"ifu_arvalid", false,-1);
    tracep->declBus(c+797,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+798,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+799,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+800,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+801,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+802,"ifu_rready", false,-1);
    tracep->declBit(c+220,"ifu_rvalid", false,-1);
    tracep->declBus(c+223,"ifu_rresp", false,-1, 1,0);
    tracep->declBus(c+219,"ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+222,"ifu_rlast", false,-1);
    tracep->declBus(c+221,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+245,"lsu_awready", false,-1);
    tracep->declBit(c+791,"lsu_awvalid", false,-1);
    tracep->declBus(c+789,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1586,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1584,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+790,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1581,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+246,"lsu_wready", false,-1);
    tracep->declBit(c+794,"lsu_wvalid", false,-1);
    tracep->declBus(c+792,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+793,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+795,"lsu_wlast", false,-1);
    tracep->declBit(c+1580,"lsu_bready", false,-1);
    tracep->declBit(c+218,"lsu_bvalid", false,-1);
    tracep->declBus(c+216,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+217,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+244,"lsu_arready", false,-1);
    tracep->declBit(c+783,"lsu_arvalid", false,-1);
    tracep->declBus(c+784,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1586,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+785,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+786,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+787,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+788,"lsu_rready", false,-1);
    tracep->declBit(c+212,"lsu_rvalid", false,-1);
    tracep->declBus(c+215,"lsu_rresp", false,-1, 1,0);
    tracep->declBus(c+211,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+214,"lsu_rlast", false,-1);
    tracep->declBus(c+213,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+237,"io_master_awready", false,-1);
    tracep->declBit(c+7,"io_master_awvalid", false,-1);
    tracep->declBus(c+82,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+81,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+83,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+5,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+84,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1557,"io_master_wready", false,-1);
    tracep->declBit(c+8,"io_master_wvalid", false,-1);
    tracep->declBus(c+86,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+6,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+87,"io_master_wlast", false,-1);
    tracep->declBit(c+9,"io_master_bready", false,-1);
    tracep->declBit(c+1450,"io_master_bvalid", false,-1);
    tracep->declBus(c+1558,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1451,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+238,"io_master_arready", false,-1);
    tracep->declBit(c+10,"io_master_arvalid", false,-1);
    tracep->declBus(c+77,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+76,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+78,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+4,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+79,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+11,"io_master_rready", false,-1);
    tracep->declBit(c+1452,"io_master_rvalid", false,-1);
    tracep->declBus(c+1455,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1454,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1456,"io_master_rlast", false,-1);
    tracep->declBus(c+1453,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+16,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+17,"clint_arvalid", false,-1);
    tracep->declBit(c+803,"clint_arready", false,-1);
    tracep->declBus(c+804,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1581,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+805,"clint_rvalid", false,-1);
    tracep->declBit(c+18,"clint_rready", false,-1);
    tracep->declBit(c+806,"clint_rlast", false,-1);
    tracep->declBus(c+1581,"NONE", false,-1, 1,0);
    tracep->declBus(c+1587,"IFU", false,-1, 1,0);
    tracep->declBus(c+1588,"LSU", false,-1, 1,0);
    tracep->declBus(c+1589,"CLINT_BASE", false,-1, 15,0);
    tracep->declBit(c+807,"lsu_is_clint", false,-1);
    tracep->declBus(c+808,"current_master", false,-1, 1,0);
    tracep->declBus(c+224,"next_master", false,-1, 1,0);
    tracep->declBus(c+1581,"OKAY", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint ");
    tracep->declBus(c+1590,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1590,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1516,"clk", false,-1);
    tracep->declBit(c+15,"reset", false,-1);
    tracep->declBus(c+16,"araddr", false,-1, 31,0);
    tracep->declBit(c+17,"arvalid", false,-1);
    tracep->declBit(c+803,"arready", false,-1);
    tracep->declBus(c+804,"rdata", false,-1, 31,0);
    tracep->declBit(c+805,"rvalid", false,-1);
    tracep->declBit(c+806,"rlast", false,-1);
    tracep->declBit(c+18,"rready", false,-1);
    tracep->declBus(c+1581,"rresp", false,-1, 1,0);
    tracep->declBus(c+1591,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1592,"BUSY", false,-1, 0,0);
    tracep->declBit(c+809,"clint_state", false,-1);
    tracep->declBit(c+19,"next_clint_state", false,-1);
    tracep->declBus(c+1581,"OKAY", false,-1, 1,0);
    tracep->declQuad(c+810,"mtime", false,-1, 63,0);
    tracep->declBus(c+812,"mtime_low", false,-1, 31,0);
    tracep->declBus(c+813,"mtime_high", false,-1, 31,0);
    tracep->declBus(c+20,"clint_offset", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+1516,"clk", false,-1);
    tracep->declBit(c+15,"reset", false,-1);
    tracep->declBit(c+723,"id_valid", false,-1);
    tracep->declBit(c+724,"ex_ready", false,-1);
    tracep->declBit(c+748,"lsu_ready", false,-1);
    tracep->declBit(c+747,"ex_lsu_valid", false,-1);
    tracep->declBus(c+727,"id_wb_rs1", false,-1, 3,0);
    tracep->declBus(c+728,"id_wb_rs2", false,-1, 3,0);
    tracep->declBus(c+779,"lsu_ex_forward_rd", false,-1, 3,0);
    tracep->declBit(c+780,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+781,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBus(c+769,"lsu_wb_wdata", false,-1, 31,0);
    tracep->declBus(c+768,"lsu_wb_rd", false,-1, 3,0);
    tracep->declBit(c+767,"lsu_wb_RegWrite", false,-1);
    tracep->declBit(c+766,"lsu_wb_valid", false,-1);
    tracep->declBit(c+782,"ex_lsu_forward_las", false,-1);
    tracep->declBus(c+722,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+730,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+729,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+731,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+775,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+776,"wb_ex_src2", false,-1, 31,0);
    tracep->declBit(c+725,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+726,"id_ex_rd", false,-1, 3,0);
    tracep->declBus(c+736,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+737,"id_ex_func3", false,-1, 2,0);
    tracep->declBus(c+732,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBit(c+738,"id_ex_jal", false,-1);
    tracep->declBit(c+739,"id_ex_jalr", false,-1);
    tracep->declBit(c+735,"id_ex_MemRead", false,-1);
    tracep->declBit(c+734,"id_ex_MemWrite", false,-1);
    tracep->declBus(c+733,"id_ex_MemLen", false,-1, 4,0);
    tracep->declBus(c+777,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+778,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBit(c+740,"id_ex_csr_wen1", false,-1);
    tracep->declBus(c+744,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBit(c+741,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+742,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+743,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBit(c+756,"ex_flush", false,-1);
    tracep->declBus(c+757,"ex_flush_pc", false,-1, 31,0);
    tracep->declBus(c+749,"ex_lsu_src2", false,-1, 31,0);
    tracep->declBit(c+750,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+751,"ex_lsu_rd", false,-1, 3,0);
    tracep->declBit(c+752,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+753,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+754,"ex_lsu_MemLen", false,-1, 4,0);
    tracep->declBit(c+758,"ex_lsu_csr", false,-1);
    tracep->declBit(c+759,"ex_lsu_csr_wen1", false,-1);
    tracep->declBus(c+760,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+761,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+762,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+763,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+764,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+765,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+755,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBus(c+814,"src1", false,-1, 31,0);
    tracep->declBus(c+815,"src2", false,-1, 31,0);
    tracep->declBus(c+816,"ex_num1", false,-1, 31,0);
    tracep->declBus(c+817,"ex_num2", false,-1, 31,0);
    tracep->declBus(c+818,"process_result", false,-1, 31,0);
    tracep->declBit(c+819,"alu_zero", false,-1);
    tracep->declBit(c+820,"alu_less", false,-1);
    tracep->declBus(c+821,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+822,"take_branch", false,-1);
    tracep->declBit(c+823,"ex_flush_condition", false,-1);
    tracep->declBus(c+824,"mstatus", false,-1, 31,0);
    tracep->declBus(c+825,"mpie", false,-1, 31,0);
    tracep->declBus(c+826,"zimm", false,-1, 31,0);
    tracep->declBus(c+827,"csr_write_data", false,-1, 31,0);
    tracep->declBus(c+828,"forward_rs1", false,-1, 1,0);
    tracep->declBus(c+829,"forward_rs2", false,-1, 1,0);
    tracep->declBit(c+830,"forward_las", false,-1);
    tracep->declBus(c+831,"load_use_flag", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+1516,"clk", false,-1);
    tracep->declBit(c+15,"reset", false,-1);
    tracep->declBus(c+718,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+719,"if_id_inst", false,-1, 31,0);
    tracep->declBit(c+756,"ex_flush", false,-1);
    tracep->declBit(c+720,"if_valid", false,-1);
    tracep->declBit(c+721,"id_ready", false,-1);
    tracep->declBit(c+724,"ex_ready", false,-1);
    tracep->declBit(c+723,"id_valid", false,-1);
    tracep->declBus(c+722,"id_ex_pc", false,-1, 31,0);
    tracep->declBit(c+725,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+726,"id_ex_rd", false,-1, 3,0);
    tracep->declBus(c+727,"id_wb_rs1", false,-1, 3,0);
    tracep->declBus(c+728,"id_wb_rs2", false,-1, 3,0);
    tracep->declBus(c+729,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+730,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+731,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+732,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+733,"id_ex_MemLen", false,-1, 4,0);
    tracep->declBit(c+734,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+735,"id_ex_MemRead", false,-1);
    tracep->declBus(c+736,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+737,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+738,"id_ex_jal", false,-1);
    tracep->declBit(c+739,"id_ex_jalr", false,-1);
    tracep->declBit(c+740,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+741,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+742,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+743,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBus(c+744,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+745,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+746,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBus(c+832,"opcode", false,-1, 6,0);
    tracep->declBus(c+833,"rs1", false,-1, 3,0);
    tracep->declBus(c+834,"rs2", false,-1, 3,0);
    tracep->declBus(c+835,"rd", false,-1, 3,0);
    tracep->declBus(c+836,"func3", false,-1, 2,0);
    tracep->declBit(c+837,"func7_5", false,-1);
    tracep->declBus(c+838,"shamt", false,-1, 5,0);
    tracep->declBus(c+839,"zimm", false,-1, 4,0);
    tracep->declBus(c+840,"get_opcode", false,-1, 4,0);
    tracep->declBus(c+841,"immI", false,-1, 31,0);
    tracep->declBus(c+842,"immU", false,-1, 31,0);
    tracep->declBus(c+843,"immS", false,-1, 31,0);
    tracep->declBus(c+844,"immB", false,-1, 31,0);
    tracep->declBus(c+845,"immJ", false,-1, 31,0);
    tracep->declBus(c+1582,"immR", false,-1, 31,0);
    tracep->declBus(c+846,"immCSR", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+1516,"clk", false,-1);
    tracep->declBit(c+15,"reset", false,-1);
    tracep->declBit(c+756,"EX_flush", false,-1);
    tracep->declBus(c+757,"EX_flush_pc", false,-1, 31,0);
    tracep->declBit(c+721,"ID_ready", false,-1);
    tracep->declBit(c+720,"IF_valid", false,-1);
    tracep->declBus(c+718,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+719,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+796,"if_axi_arvalid", false,-1);
    tracep->declBit(c+247,"axi_if_arready", false,-1);
    tracep->declBus(c+797,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+798,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+799,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+800,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+801,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+219,"axi_if_rdata", false,-1, 31,0);
    tracep->declBit(c+220,"axi_if_rvalid", false,-1);
    tracep->declBit(c+802,"if_axi_rready", false,-1);
    tracep->declBus(c+223,"axi_if_rresp", false,-1, 1,0);
    tracep->declBus(c+221,"axi_if_rid", false,-1, 3,0);
    tracep->declBit(c+222,"axi_if_rlast", false,-1);
    tracep->declBus(c+847,"state", false,-1, 1,0);
    tracep->declBus(c+1581,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1587,"WAIT_FLUSH", false,-1, 1,0);
    tracep->declBus(c+1593,"WAIT_CACHE", false,-1, 1,0);
    tracep->declBus(c+1594,"FENCEI", false,-1, 31,0);
    tracep->declBus(c+1595,"JAL_OPCODE", false,-1, 6,0);
    tracep->declBus(c+848,"next_pc", false,-1, 31,0);
    tracep->declBit(c+849,"flush_once", false,-1);
    tracep->declBit(c+850,"once", false,-1);
    tracep->declBus(c+851,"cache_inst", false,-1, 31,0);
    tracep->declBit(c+852,"cache_valid", false,-1);
    tracep->declBus(c+853,"cache_araddr", false,-1, 31,0);
    tracep->declBit(c+854,"cache_arvalid", false,-1);
    tracep->declBus(c+1586,"cache_arid", false,-1, 3,0);
    tracep->declBus(c+855,"cache_arlen", false,-1, 7,0);
    tracep->declBus(c+1596,"cache_arsize", false,-1, 2,0);
    tracep->declBus(c+856,"cache_arburst", false,-1, 1,0);
    tracep->declBit(c+857,"cache_rready", false,-1);
    tracep->declBit(c+858,"is_fencei", false,-1);
    tracep->declBit(c+859,"is_jal", false,-1);
    tracep->declBus(c+860,"immJ", false,-1, 31,0);
    tracep->declBus(c+861,"jal_target", false,-1, 31,0);
    tracep->pushNamePrefix("u_icache ");
    tracep->declBus(c+1597,"CACHE_SIZE", false,-1, 31,0);
    tracep->declBus(c+1597,"BLOCK_SIZE", false,-1, 31,0);
    tracep->declBit(c+1516,"clk", false,-1);
    tracep->declBit(c+15,"reset", false,-1);
    tracep->declBit(c+858,"is_fencei", false,-1);
    tracep->declBus(c+848,"addr", false,-1, 31,0);
    tracep->declBus(c+851,"inst", false,-1, 31,0);
    tracep->declBit(c+852,"valid", false,-1);
    tracep->declBus(c+853,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+854,"axi_arvalid", false,-1);
    tracep->declBit(c+247,"axi_arready", false,-1);
    tracep->declBus(c+1586,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+855,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1596,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+856,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+220,"axi_rvalid", false,-1);
    tracep->declBit(c+857,"axi_rready", false,-1);
    tracep->declBus(c+219,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+223,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+221,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+222,"axi_rlast", false,-1);
    tracep->declBus(c+1598,"NUM_BLOCKS", false,-1, 31,0);
    tracep->declBus(c+1599,"BLOCK_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1578,"INDEX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1600,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1599,"BEATS_PER_BLOCK", false,-1, 31,0);
    tracep->declBus(c+862,"tag_ram", false,-1, 27,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+863+i*1,"data_ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+867,"valid_ram", false,-1, 3,0);
    tracep->declBus(c+868,"req_tag", false,-1, 27,0);
    tracep->declBus(c+869,"beat_idx", false,-1, 1,0);
    tracep->declBus(c+870,"saved_tag", false,-1, 27,0);
    tracep->declBus(c+871,"saved_beat_idx", false,-1, 1,0);
    tracep->declBus(c+1581,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1593,"READ", false,-1, 1,0);
    tracep->declBus(c+1588,"FILL", false,-1, 1,0);
    tracep->declBus(c+872,"state", false,-1, 1,0);
    tracep->declBus(c+59,"next_state", false,-1, 1,0);
    tracep->declBus(c+873,"beat_cnt", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+874+i*1,"block_data", true,(i+0), 31,0);
    }
    tracep->declBit(c+878,"ar_done", false,-1);
    tracep->declBus(c+1601,"SDRAM_BASE", false,-1, 31,0);
    tracep->declBus(c+1602,"SDRAM_END", false,-1, 31,0);
    tracep->declBit(c+879,"in_sdram", false,-1);
    tracep->declBit(c+880,"hit", false,-1);
    tracep->declBus(c+1603,"idx", false,-1, 31,0);
    tracep->declBus(c+881,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+1516,"clk", false,-1);
    tracep->declBit(c+15,"rst", false,-1);
    tracep->declBit(c+747,"ex_lsu_valid", false,-1);
    tracep->declBit(c+748,"lsu_ex_ready", false,-1);
    tracep->declBit(c+1580,"wb_lsu_ready", false,-1);
    tracep->declBit(c+766,"lsu_wb_valid", false,-1);
    tracep->declBit(c+782,"ex_lsu_forward_las", false,-1);
    tracep->declBit(c+750,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+751,"ex_lsu_rd", false,-1, 3,0);
    tracep->declBit(c+752,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+753,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+754,"ex_lsu_MemLen", false,-1, 4,0);
    tracep->declBus(c+755,"addr", false,-1, 31,0);
    tracep->declBus(c+749,"data_in", false,-1, 31,0);
    tracep->declBit(c+758,"ex_lsu_csr", false,-1);
    tracep->declBit(c+759,"ex_lsu_csr_wen1", false,-1);
    tracep->declBus(c+761,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+762,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+760,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+763,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+764,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+765,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+755,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBus(c+779,"lsu_ex_forward_rd", false,-1, 3,0);
    tracep->declBit(c+780,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+781,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBus(c+770,"lsu_wb_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+771,"lsu_wb_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+772,"lsu_wb_csr_wr_addr1", false,-1, 11,0);
    tracep->declBit(c+773,"lsu_wb_csr_wen1", false,-1);
    tracep->declBit(c+774,"lsu_wb_csr_ecall", false,-1);
    tracep->declBit(c+767,"lsu_wb_RegWrite", false,-1);
    tracep->declBus(c+768,"lsu_wb_rd", false,-1, 3,0);
    tracep->declBus(c+769,"lsu_wb_write_rd_data", false,-1, 31,0);
    tracep->declBit(c+783,"lsu_axi_arvalid", false,-1);
    tracep->declBit(c+244,"axi_lsu_arready", false,-1);
    tracep->declBus(c+784,"lsu_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1586,"lsu_axi_arid", false,-1, 3,0);
    tracep->declBus(c+785,"lsu_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+786,"lsu_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+787,"lsu_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+211,"axi_lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+212,"axi_lsu_rvalid", false,-1);
    tracep->declBit(c+788,"lsu_axi_rready", false,-1);
    tracep->declBus(c+215,"axi_lsu_rresp", false,-1, 1,0);
    tracep->declBus(c+213,"axi_lsu_rid", false,-1, 3,0);
    tracep->declBit(c+214,"axi_lsu_rlast", false,-1);
    tracep->declBus(c+789,"lsu_axi_awaddr", false,-1, 31,0);
    tracep->declBit(c+791,"lsu_axi_awvalid", false,-1);
    tracep->declBit(c+245,"axi_lsu_awready", false,-1);
    tracep->declBus(c+1586,"lsu_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1584,"lsu_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+790,"lsu_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1581,"lsu_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+792,"lsu_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+793,"lsu_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+794,"lsu_axi_wvalid", false,-1);
    tracep->declBit(c+246,"axi_lsu_wready", false,-1);
    tracep->declBit(c+795,"lsu_axi_wlast", false,-1);
    tracep->declBus(c+216,"axi_lsu_bresp", false,-1, 1,0);
    tracep->declBit(c+218,"axi_lsu_bvalid", false,-1);
    tracep->declBit(c+1580,"lsu_axi_bready", false,-1);
    tracep->declBus(c+217,"axi_lsu_bid", false,-1, 3,0);
    tracep->declBus(c+1601,"SDRAM_BASE", false,-1, 31,0);
    tracep->declBus(c+1602,"SDRAM_END", false,-1, 31,0);
    tracep->declBus(c+1581,"AXI_BURST_FIXED", false,-1, 1,0);
    tracep->declBus(c+1587,"AXI_BURST_INCR", false,-1, 1,0);
    tracep->declBus(c+1585,"AXI_SIZE_BYTE", false,-1, 2,0);
    tracep->declBus(c+1576,"AXI_SIZE_HALF", false,-1, 2,0);
    tracep->declBus(c+1596,"AXI_SIZE_WORD", false,-1, 2,0);
    tracep->declBus(c+1586,"AXI_ID", false,-1, 3,0);
    tracep->declBus(c+1599,"BURST_LEN", false,-1, 31,0);
    tracep->declBus(c+1597,"BLOCK_SIZE", false,-1, 31,0);
    tracep->declBit(c+882,"in_sdram", false,-1);
    tracep->declBus(c+1599,"BLOCK_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+883,"word_offset", false,-1, 1,0);
    tracep->declBus(c+884,"saved_word_offset", false,-1, 1,0);
    tracep->declBus(c+885,"saved_wdata", false,-1, 31,0);
    tracep->declBus(c+886,"saved_wstrb", false,-1, 3,0);
    tracep->declBus(c+887,"burst_cnt", false,-1, 3,0);
    tracep->declBus(c+888,"addr_off", false,-1, 1,0);
    tracep->declBus(c+889,"rdata", false,-1, 31,0);
    tracep->declBit(c+890,"valid", false,-1);
    tracep->declBus(c+891,"addr_reg", false,-1, 31,0);
    tracep->declBus(c+1581,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1588,"RD", false,-1, 1,0);
    tracep->declBus(c+1587,"WR", false,-1, 1,0);
    tracep->declBus(c+892,"state", false,-1, 1,0);
    tracep->declBus(c+60,"next_state", false,-1, 1,0);
    tracep->declBit(c+893,"aw_done", false,-1);
    tracep->declBit(c+894,"w_done", false,-1);
    tracep->declBit(c+895,"b_done", false,-1);
    tracep->declBit(c+896,"ar_done", false,-1);
    tracep->declBit(c+897,"we", false,-1);
    tracep->declBit(c+898,"req_valid", false,-1);
    tracep->declArray(c+899,"block_data", false,-1, 127,0);
    tracep->declBit(c+781,"l_load", false,-1);
    tracep->declBit(c+780,"l_rd_en", false,-1);
    tracep->declBus(c+779,"l_rd_addr", false,-1, 3,0);
    tracep->declBus(c+903,"l_MemLen", false,-1, 4,0);
    tracep->declBit(c+904,"op_complete", false,-1);
    tracep->declBus(c+905,"byte_data1", false,-1, 31,0);
    tracep->declBus(c+906,"byte_data", false,-1, 7,0);
    tracep->declBus(c+907,"half_data", false,-1, 15,0);
    tracep->declBus(c+908,"read_lsu_data", false,-1, 31,0);
    tracep->declBus(c+909,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBus(c+1599,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1590,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1516,"clk", false,-1);
    tracep->declBit(c+15,"rst", false,-1);
    tracep->declBit(c+767,"wen", false,-1);
    tracep->declBit(c+766,"lsu_wb_valid", false,-1);
    tracep->declBit(c+1580,"wb_lsu_ready", false,-1);
    tracep->declBus(c+769,"wdata", false,-1, 31,0);
    tracep->declBus(c+768,"waddr", false,-1, 3,0);
    tracep->declBus(c+727,"rs1", false,-1, 3,0);
    tracep->declBus(c+728,"rs2", false,-1, 3,0);
    tracep->declBus(c+775,"src1", false,-1, 31,0);
    tracep->declBus(c+776,"src2", false,-1, 31,0);
    tracep->declBus(c+745,"raddr_csr1", false,-1, 11,0);
    tracep->declBus(c+746,"raddr_csr2", false,-1, 11,0);
    tracep->declBit(c+773,"wen_csr1", false,-1);
    tracep->declBit(c+774,"is_ecall", false,-1);
    tracep->declBus(c+770,"wdata_csr1", false,-1, 31,0);
    tracep->declBus(c+771,"wdata_csr2", false,-1, 31,0);
    tracep->declBus(c+772,"waddr_csr1", false,-1, 11,0);
    tracep->declBus(c+777,"rdata_csr1", false,-1, 31,0);
    tracep->declBus(c+778,"rdata_csr2", false,-1, 31,0);
    tracep->declBus(c+910,"mstatus", false,-1, 31,0);
    tracep->declBus(c+911,"mtvec", false,-1, 31,0);
    tracep->declBus(c+912,"mepc", false,-1, 31,0);
    tracep->declBus(c+1604,"mcause", false,-1, 31,0);
    tracep->declBus(c+1605,"MSTATUS", false,-1, 11,0);
    tracep->declBus(c+1606,"MTVEC", false,-1, 11,0);
    tracep->declBus(c+1607,"MEPC", false,-1, 11,0);
    tracep->declBus(c+1608,"MCAUSE", false,-1, 11,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+913+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+929,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"io_d", false,-1);
    tracep->declBit(c+930,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"io_d", false,-1);
    tracep->declBit(c+930,"io_q", false,-1);
    tracep->declBit(c+930,"sync_0", false,-1);
    tracep->declBit(c+931,"sync_1", false,-1);
    tracep->declBit(c+932,"sync_2", false,-1);
    tracep->declBit(c+933,"sync_3", false,-1);
    tracep->declBit(c+934,"sync_4", false,-1);
    tracep->declBit(c+935,"sync_5", false,-1);
    tracep->declBit(c+936,"sync_6", false,-1);
    tracep->declBit(c+937,"sync_7", false,-1);
    tracep->declBit(c+938,"sync_8", false,-1);
    tracep->declBit(c+939,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+1390,"auto_in_psel", false,-1);
    tracep->declBit(c+1029,"auto_in_penable", false,-1);
    tracep->declBit(c+1382,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1389,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1576,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+263,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1391,"auto_in_pready", false,-1);
    tracep->declBit(c+1579,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1392,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1518,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1519,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1520,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1521,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1522,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1523,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1524,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1525,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1526,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1527,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBus(c+1408,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1390,"in_psel", false,-1);
    tracep->declBit(c+1029,"in_penable", false,-1);
    tracep->declBus(c+1576,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1382,"in_pwrite", false,-1);
    tracep->declBus(c+263,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1391,"in_pready", false,-1);
    tracep->declBus(c+1392,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1579,"in_pslverr", false,-1);
    tracep->declBus(c+1518,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1519,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1520,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1521,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1522,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1523,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1524,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1525,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1526,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1527,"gpio_seg_7", false,-1, 7,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+940+i*1,"gpio_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+1409,"wen", false,-1);
    tracep->declBit(c+1410,"ren", false,-1);
    tracep->declBus(c+1411,"wdata", false,-1, 31,0);
    tracep->declBus(c+1412,"addr", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+1388,"auto_in_psel", false,-1);
    tracep->declBit(c+1028,"auto_in_penable", false,-1);
    tracep->declBit(c+1382,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1389,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1576,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+263,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1036,"auto_in_pready", false,-1);
    tracep->declBit(c+1577,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1023,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1528,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1529,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBus(c+1408,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1388,"in_psel", false,-1);
    tracep->declBit(c+1028,"in_penable", false,-1);
    tracep->declBus(c+1576,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1382,"in_pwrite", false,-1);
    tracep->declBus(c+263,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1036,"in_pready", false,-1);
    tracep->declBus(c+1023,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1577,"in_pslverr", false,-1);
    tracep->declBit(c+1528,"ps2_clk", false,-1);
    tracep->declBit(c+1529,"ps2_data", false,-1);
    tracep->declBus(c+1042,"ps2_state", false,-1, 1,0);
    tracep->declBus(c+1578,"PS2_IDLE", false,-1, 31,0);
    tracep->declBus(c+1598,"PS2_READ", false,-1, 31,0);
    tracep->declBus(c+944,"buffer", false,-1, 9,0);
    tracep->declBus(c+945,"counter", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+946+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+962,"w_ptr", false,-1, 3,0);
    tracep->declBus(c+963,"r_ptr", false,-1, 3,0);
    tracep->declBit(c+964,"isn_empty", false,-1);
    tracep->declBus(c+965,"i", false,-1, 31,0);
    tracep->declBus(c+966,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+967,"sampling", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+128,"auto_in_awvalid", false,-1);
    tracep->declBit(c+129,"auto_in_wvalid", false,-1);
    tracep->declBit(c+514,"auto_in_arready", false,-1);
    tracep->declBit(c+130,"auto_in_arvalid", false,-1);
    tracep->declBus(c+69,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+26,"auto_in_rready", false,-1);
    tracep->declBit(c+515,"auto_in_rvalid", false,-1);
    tracep->declBus(c+516,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+517,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+515,"state", false,-1);
    tracep->declBus(c+517,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+516,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+146,"raddr", false,-1, 31,0);
    tracep->declBit(c+147,"ren", false,-1);
    tracep->declBus(c+148,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+1393,"auto_in_psel", false,-1);
    tracep->declBit(c+1030,"auto_in_penable", false,-1);
    tracep->declBit(c+1382,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1380,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1576,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+263,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1543,"auto_in_pready", false,-1);
    tracep->declBit(c+1577,"auto_in_pslverr", false,-1);
    tracep->declBus(c+265,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1442,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1443,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1540,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBus(c+1380,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1393,"in_psel", false,-1);
    tracep->declBit(c+1030,"in_penable", false,-1);
    tracep->declBus(c+1576,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1382,"in_pwrite", false,-1);
    tracep->declBus(c+263,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1543,"in_pready", false,-1);
    tracep->declBus(c+265,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1577,"in_pslverr", false,-1);
    tracep->declBit(c+1442,"qspi_sck", false,-1);
    tracep->declBit(c+1443,"qspi_ce_n", false,-1);
    tracep->declBus(c+1540,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1540,"din", false,-1, 3,0);
    tracep->declBus(c+1474,"dout", false,-1, 3,0);
    tracep->declBus(c+1475,"douten", false,-1, 3,0);
    tracep->declBit(c+1561,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1516,"clk_i", false,-1);
    tracep->declBit(c+1517,"rst_i", false,-1);
    tracep->declBus(c+1380,"adr_i", false,-1, 31,0);
    tracep->declBus(c+263,"dat_i", false,-1, 31,0);
    tracep->declBus(c+265,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1383,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1393,"cyc_i", false,-1);
    tracep->declBit(c+1393,"stb_i", false,-1);
    tracep->declBit(c+1561,"ack_o", false,-1);
    tracep->declBit(c+1382,"we_i", false,-1);
    tracep->declBit(c+1442,"sck", false,-1);
    tracep->declBit(c+1443,"ce_n", false,-1);
    tracep->declBus(c+1540,"din", false,-1, 3,0);
    tracep->declBus(c+1474,"dout", false,-1, 3,0);
    tracep->declBus(c+1475,"douten", false,-1, 3,0);
    tracep->declBus(c+1591,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1592,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+1043,"mr_sck", false,-1);
    tracep->declBit(c+1044,"mr_ce_n", false,-1);
    tracep->declBus(c+1540,"mr_din", false,-1, 3,0);
    tracep->declBus(c+1045,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+1046,"mr_doe", false,-1);
    tracep->declBit(c+1047,"mw_sck", false,-1);
    tracep->declBit(c+1048,"mw_ce_n", false,-1);
    tracep->declBus(c+1540,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1476,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+1049,"mw_doe", false,-1);
    tracep->declBit(c+1477,"mr_rd", false,-1);
    tracep->declBit(c+1050,"mr_done", false,-1);
    tracep->declBit(c+1478,"mw_wr", false,-1);
    tracep->declBit(c+1479,"mw_done", false,-1);
    tracep->declBit(c+1393,"wb_valid", false,-1);
    tracep->declBit(c+1413,"wb_we", false,-1);
    tracep->declBit(c+1414,"wb_re", false,-1);
    tracep->declBit(c+1051,"state", false,-1);
    tracep->declBit(c+1480,"nstate", false,-1);
    tracep->declBus(c+1415,"size", false,-1, 2,0);
    tracep->declBus(c+1416,"byte0", false,-1, 7,0);
    tracep->declBus(c+1417,"byte1", false,-1, 7,0);
    tracep->declBus(c+968,"byte2", false,-1, 7,0);
    tracep->declBus(c+969,"byte3", false,-1, 7,0);
    tracep->declBus(c+1032,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1516,"clk", false,-1);
    tracep->declBit(c+1562,"rst_n", false,-1);
    tracep->declBus(c+1418,"addr", false,-1, 23,0);
    tracep->declBit(c+1477,"rd", false,-1);
    tracep->declBus(c+1609,"size", false,-1, 2,0);
    tracep->declBit(c+1050,"done", false,-1);
    tracep->declBus(c+265,"line", false,-1, 31,0);
    tracep->declBit(c+1043,"sck", false,-1);
    tracep->declBit(c+1044,"ce_n", false,-1);
    tracep->declBus(c+1540,"din", false,-1, 3,0);
    tracep->declBus(c+1045,"dout", false,-1, 3,0);
    tracep->declBit(c+1046,"douten", false,-1);
    tracep->declBus(c+1591,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1592,"READ", false,-1, 0,0);
    tracep->declBus(c+1610,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+1052,"state", false,-1);
    tracep->declBit(c+1481,"nstate", false,-1);
    tracep->declBus(c+1053,"counter", false,-1, 7,0);
    tracep->declBus(c+1054,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+970+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1611,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+1055,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1516,"clk", false,-1);
    tracep->declBit(c+1562,"rst_n", false,-1);
    tracep->declBus(c+1419,"addr", false,-1, 23,0);
    tracep->declBus(c+1032,"line", false,-1, 31,0);
    tracep->declBus(c+1415,"size", false,-1, 2,0);
    tracep->declBit(c+1478,"wr", false,-1);
    tracep->declBit(c+1479,"done", false,-1);
    tracep->declBit(c+1047,"sck", false,-1);
    tracep->declBit(c+1048,"ce_n", false,-1);
    tracep->declBus(c+1540,"din", false,-1, 3,0);
    tracep->declBus(c+1476,"dout", false,-1, 3,0);
    tracep->declBit(c+1049,"douten", false,-1);
    tracep->declBus(c+1591,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1592,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1420,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+1056,"state", false,-1);
    tracep->declBit(c+1482,"nstate", false,-1);
    tracep->declBus(c+1057,"counter", false,-1, 7,0);
    tracep->declBus(c+1058,"saddr", false,-1, 23,0);
    tracep->declBus(c+1612,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+235,"auto_in_awready", false,-1);
    tracep->declBit(c+80,"auto_in_awvalid", false,-1);
    tracep->declBus(c+81,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+82,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+83,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+5,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+84,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+236,"auto_in_wready", false,-1);
    tracep->declBit(c+85,"auto_in_wvalid", false,-1);
    tracep->declBus(c+86,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+6,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+87,"auto_in_wlast", false,-1);
    tracep->declBit(c+24,"auto_in_bready", false,-1);
    tracep->declBit(c+1041,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1038,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1581,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+234,"auto_in_arready", false,-1);
    tracep->declBit(c+75,"auto_in_arvalid", false,-1);
    tracep->declBus(c+76,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+77,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+78,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+4,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+79,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_in_rready", false,-1);
    tracep->declBit(c+1037,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1038,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1039,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1581,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1040,"auto_in_rlast", false,-1);
    tracep->declBit(c+1541,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1486,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1487,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1488,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1489,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1490,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1542,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1491,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1492,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1504,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+235,"in_awready", false,-1);
    tracep->declBit(c+80,"in_awvalid", false,-1);
    tracep->declBus(c+82,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+81,"in_awid", false,-1, 3,0);
    tracep->declBus(c+83,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+5,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+84,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+236,"in_wready", false,-1);
    tracep->declBit(c+85,"in_wvalid", false,-1);
    tracep->declBus(c+86,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+6,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+87,"in_wlast", false,-1);
    tracep->declBit(c+24,"in_bready", false,-1);
    tracep->declBit(c+1041,"in_bvalid", false,-1);
    tracep->declBus(c+1581,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+1038,"in_bid", false,-1, 3,0);
    tracep->declBit(c+234,"in_arready", false,-1);
    tracep->declBit(c+75,"in_arvalid", false,-1);
    tracep->declBus(c+77,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+76,"in_arid", false,-1, 3,0);
    tracep->declBus(c+78,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+4,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+79,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+23,"in_rready", false,-1);
    tracep->declBit(c+1037,"in_rvalid", false,-1);
    tracep->declBus(c+1581,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+1039,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+1040,"in_rlast", false,-1);
    tracep->declBus(c+1038,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1541,"sdram_clk", false,-1);
    tracep->declBit(c+1486,"sdram_cke", false,-1);
    tracep->declBit(c+1487,"sdram_cs", false,-1);
    tracep->declBit(c+1488,"sdram_ras", false,-1);
    tracep->declBit(c+1489,"sdram_cas", false,-1);
    tracep->declBit(c+1490,"sdram_we", false,-1);
    tracep->declBus(c+1542,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1491,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1492,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1504,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+1059,"sdram_dout_en", false,-1);
    tracep->declBus(c+1060,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1516,"clk_i", false,-1);
    tracep->declBit(c+1517,"rst_i", false,-1);
    tracep->declBit(c+80,"inport_awvalid_i", false,-1);
    tracep->declBus(c+82,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+81,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+83,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+84,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+85,"inport_wvalid_i", false,-1);
    tracep->declBus(c+86,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+6,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+87,"inport_wlast_i", false,-1);
    tracep->declBit(c+24,"inport_bready_i", false,-1);
    tracep->declBit(c+75,"inport_arvalid_i", false,-1);
    tracep->declBus(c+77,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+76,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+78,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+79,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+23,"inport_rready_i", false,-1);
    tracep->declBus(c+1504,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+235,"inport_awready_o", false,-1);
    tracep->declBit(c+236,"inport_wready_o", false,-1);
    tracep->declBit(c+1041,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1581,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1038,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+234,"inport_arready_o", false,-1);
    tracep->declBit(c+1037,"inport_rvalid_o", false,-1);
    tracep->declBus(c+1039,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1581,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1038,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+1040,"inport_rlast_o", false,-1);
    tracep->declBit(c+1541,"sdram_clk_o", false,-1);
    tracep->declBit(c+1486,"sdram_cke_o", false,-1);
    tracep->declBit(c+1487,"sdram_cs_o", false,-1);
    tracep->declBit(c+1488,"sdram_ras_o", false,-1);
    tracep->declBit(c+1489,"sdram_cas_o", false,-1);
    tracep->declBit(c+1490,"sdram_we_o", false,-1);
    tracep->declBus(c+1492,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1542,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1491,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+1060,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+1059,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1613,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1614,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1615,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1616,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+248,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+249,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+225,"ram_rd_w", false,-1);
    tracep->declBit(c+1493,"ram_accept_w", false,-1);
    tracep->declBus(c+86,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+1061,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+149,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+1062,"ram_ack_w", false,-1);
    tracep->declBit(c+1577,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1516,"clk_i", false,-1);
    tracep->declBit(c+1517,"rst_i", false,-1);
    tracep->declBit(c+80,"axi_awvalid_i", false,-1);
    tracep->declBus(c+82,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+81,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+83,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+84,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+85,"axi_wvalid_i", false,-1);
    tracep->declBus(c+86,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+6,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+87,"axi_wlast_i", false,-1);
    tracep->declBit(c+24,"axi_bready_i", false,-1);
    tracep->declBit(c+75,"axi_arvalid_i", false,-1);
    tracep->declBus(c+77,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+76,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+78,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+79,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+23,"axi_rready_i", false,-1);
    tracep->declBit(c+1493,"ram_accept_i", false,-1);
    tracep->declBit(c+1062,"ram_ack_i", false,-1);
    tracep->declBit(c+1577,"ram_error_i", false,-1);
    tracep->declBus(c+1061,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+235,"axi_awready_o", false,-1);
    tracep->declBit(c+236,"axi_wready_o", false,-1);
    tracep->declBit(c+1041,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1581,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1038,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+234,"axi_arready_o", false,-1);
    tracep->declBit(c+1037,"axi_rvalid_o", false,-1);
    tracep->declBus(c+1039,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1581,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1038,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1040,"axi_rlast_o", false,-1);
    tracep->declBus(c+249,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+225,"ram_rd_o", false,-1);
    tracep->declBus(c+149,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+248,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+86,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+1063,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+1064,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+1065,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+1066,"req_rd_q", false,-1);
    tracep->declBit(c+1067,"req_wr_q", false,-1);
    tracep->declBus(c+1068,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+1069,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+1070,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+1071,"req_prio_q", false,-1);
    tracep->declBit(c+1072,"req_hold_rd_q", false,-1);
    tracep->declBit(c+1073,"req_hold_wr_q", false,-1);
    tracep->declBit(c+1074,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+250,"req_push_w", false,-1);
    tracep->declBus(c+1563,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+1075,"req_out_valid_w", false,-1);
    tracep->declBus(c+1076,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+226,"resp_accept_w", false,-1);
    tracep->declBit(c+1077,"resp_is_write_w", false,-1);
    tracep->declBit(c+1078,"resp_is_read_w", false,-1);
    tracep->declBit(c+1040,"resp_is_last_w", false,-1);
    tracep->declBus(c+1038,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+1079,"resp_valid_w", false,-1);
    tracep->declBit(c+1080,"write_prio_w", false,-1);
    tracep->declBit(c+1081,"read_prio_w", false,-1);
    tracep->declBit(c+227,"write_active_w", false,-1);
    tracep->declBit(c+225,"read_active_w", false,-1);
    tracep->declBus(c+248,"addr_w", false,-1, 31,0);
    tracep->declBit(c+185,"wr_w", false,-1);
    tracep->declBit(c+225,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1617,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1599,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1616,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1516,"clk_i", false,-1);
    tracep->declBit(c+1517,"rst_i", false,-1);
    tracep->declBus(c+1563,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+250,"push_i", false,-1);
    tracep->declBit(c+226,"pop_i", false,-1);
    tracep->declBus(c+1076,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+1074,"accept_o", false,-1);
    tracep->declBit(c+1075,"valid_o", false,-1);
    tracep->declBus(c+1618,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1082+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+1086,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+1087,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+1088,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1590,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1599,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1616,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1516,"clk_i", false,-1);
    tracep->declBit(c+1517,"rst_i", false,-1);
    tracep->declBus(c+1061,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+1062,"push_i", false,-1);
    tracep->declBit(c+226,"pop_i", false,-1);
    tracep->declBus(c+1039,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+1089,"accept_o", false,-1);
    tracep->declBit(c+1079,"valid_o", false,-1);
    tracep->declBus(c+1618,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1090+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+1094,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+1095,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+1096,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1516,"clk_i", false,-1);
    tracep->declBit(c+1517,"rst_i", false,-1);
    tracep->declBus(c+249,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+225,"inport_rd_i", false,-1);
    tracep->declBus(c+149,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+248,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+86,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1504,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1493,"inport_accept_o", false,-1);
    tracep->declBit(c+1062,"inport_ack_o", false,-1);
    tracep->declBit(c+1577,"inport_error_o", false,-1);
    tracep->declBus(c+1061,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1541,"sdram_clk_o", false,-1);
    tracep->declBit(c+1486,"sdram_cke_o", false,-1);
    tracep->declBit(c+1487,"sdram_cs_o", false,-1);
    tracep->declBit(c+1488,"sdram_ras_o", false,-1);
    tracep->declBit(c+1489,"sdram_cas_o", false,-1);
    tracep->declBit(c+1490,"sdram_we_o", false,-1);
    tracep->declBus(c+1492,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1542,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1491,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+1060,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+1059,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1613,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1614,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1615,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1616,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1616,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1599,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1619,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1620,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1621,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1622,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1623,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1599,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1624,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1625,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1626,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1627,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1628,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1629,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1586,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1583,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1630,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1599,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1583,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1586,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1629,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1625,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1627,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1626,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1628,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1624,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1631,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1632,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1633,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1633,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1590,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1633,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1616,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1616,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1617,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+248,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+249,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+225,"ram_rd_w", false,-1);
    tracep->declBit(c+1493,"ram_accept_w", false,-1);
    tracep->declBus(c+86,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+1061,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+1062,"ram_ack_w", false,-1);
    tracep->declBit(c+251,"ram_req_w", false,-1);
    tracep->declBus(c+1494,"command_q", false,-1, 3,0);
    tracep->declBus(c+1495,"addr_q", false,-1, 12,0);
    tracep->declBus(c+1060,"data_q", false,-1, 31,0);
    tracep->declBit(c+1097,"data_rd_en_q", false,-1);
    tracep->declBus(c+1492,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1486,"cke_q", false,-1);
    tracep->declBus(c+1491,"bank_q", false,-1, 1,0);
    tracep->declBus(c+1504,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+1098,"refresh_q", false,-1);
    tracep->declBus(c+1099,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1100+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1496,"state_q", false,-1, 3,0);
    tracep->declBus(c+252,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+253,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+1108,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+1109,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+254,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+255,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+256,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+257,"addr_bank_double", false,-1, 2,0);
    tracep->declBus(c+1599,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+1110,"delay_q", false,-1, 3,0);
    tracep->declBus(c+258,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1634,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1497,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+1111,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+1061,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+1112,"idx", false,-1, 31,0);
    tracep->declBus(c+1113,"rd_q", false,-1, 3,0);
    tracep->declBit(c+1062,"ack_q", false,-1);
    tracep->declArray(c+1498,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+1397,"auto_in_psel", false,-1);
    tracep->declBit(c+1398,"auto_in_penable", false,-1);
    tracep->declBit(c+1382,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1387,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1576,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+263,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1545,"auto_in_pready", false,-1);
    tracep->declBit(c+1399,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1546,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1034,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1035,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1538,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1539,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1635,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1636,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1619,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBus(c+1421,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1397,"in_psel", false,-1);
    tracep->declBit(c+1398,"in_penable", false,-1);
    tracep->declBus(c+1576,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1382,"in_pwrite", false,-1);
    tracep->declBus(c+263,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1545,"in_pready", false,-1);
    tracep->declBus(c+1546,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1399,"in_pslverr", false,-1);
    tracep->declBit(c+1034,"spi_sck", false,-1);
    tracep->declBus(c+1035,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1538,"spi_mosi", false,-1);
    tracep->declBit(c+1539,"spi_miso", false,-1);
    tracep->declBit(c+1114,"spi_irq_out", false,-1);
    tracep->declBus(c+1637,"SPI_ADDR_START", false,-1, 31,0);
    tracep->declBus(c+1638,"SPI_ADDR_END", false,-1, 31,0);
    tracep->declBus(c+1635,"FLASH_ADDR_START", false,-1, 31,0);
    tracep->declBus(c+1636,"FLASH_ADDR_END", false,-1, 31,0);
    tracep->declBit(c+1422,"is_spi_addr", false,-1);
    tracep->declBit(c+1423,"is_flash_addr", false,-1);
    tracep->declBus(c+1585,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1576,"INIT_DIV", false,-1, 2,0);
    tracep->declBus(c+1596,"INIT_SS", false,-1, 2,0);
    tracep->declBus(c+1639,"INIT_CTRL", false,-1, 2,0);
    tracep->declBus(c+1609,"WRITE_CMD", false,-1, 2,0);
    tracep->declBus(c+1640,"START_TRANS", false,-1, 2,0);
    tracep->declBus(c+1641,"WAIT_TRANS", false,-1, 2,0);
    tracep->declBus(c+1642,"READ_DATA", false,-1, 2,0);
    tracep->declBus(c+974,"xip_state", false,-1, 2,0);
    tracep->declBit(c+1424,"spi_master_psel", false,-1);
    tracep->declBus(c+1425,"apb_paddr", false,-1, 31,0);
    tracep->declBit(c+1426,"apb_psel", false,-1);
    tracep->declBit(c+1427,"apb_penable", false,-1);
    tracep->declBus(c+1428,"apb_pprot", false,-1, 2,0);
    tracep->declBit(c+1429,"apb_pwrite", false,-1);
    tracep->declBus(c+1430,"apb_pwdata", false,-1, 31,0);
    tracep->declBus(c+1431,"apb_pstrb", false,-1, 3,0);
    tracep->declBit(c+1115,"apb_pready", false,-1);
    tracep->declBus(c+1116,"apb_prdata", false,-1, 31,0);
    tracep->declBit(c+1577,"apb_pslverr", false,-1);
    tracep->declBit(c+1432,"flash_xip_sel", false,-1);
    tracep->declBus(c+975,"flash_xip_paddr", false,-1, 31,0);
    tracep->declBit(c+976,"flash_xip_psel", false,-1);
    tracep->declBit(c+977,"flash_xip_penable", false,-1);
    tracep->declBus(c+1576,"flash_xip_pprot", false,-1, 2,0);
    tracep->declBit(c+978,"flash_xip_pwrite", false,-1);
    tracep->declBus(c+979,"flash_xip_pwdata", false,-1, 31,0);
    tracep->declBus(c+1033,"flash_xip_pstrb", false,-1, 3,0);
    tracep->declBit(c+980,"flash_xip_pready", false,-1);
    tracep->declBus(c+981,"flash_xip_prdata", false,-1, 31,0);
    tracep->declBit(c+1577,"flash_xip_pslverr", false,-1);
    tracep->declBit(c+1580,"spi_ctrl_ass", false,-1);
    tracep->declBit(c+1580,"spi_ctrl_ie", false,-1);
    tracep->declBus(c+1643,"spi_ctrl_char_len", false,-1, 6,0);
    tracep->declBit(c+1577,"spi_ctrl_reserved", false,-1);
    tracep->declBit(c+1580,"spi_ctrl_tx_neg", false,-1);
    tracep->declBit(c+1577,"spi_ctrl_rx_neg", false,-1);
    tracep->declBit(c+1577,"spi_ctrl_lsb", false,-1);
    tracep->declBus(c+1024,"spi_ctrl_data", false,-1, 31,0);
    tracep->declBit(c+1025,"spi_ctrl_go", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1598,"Tp", false,-1, 31,0);
    tracep->declBit(c+1516,"wb_clk_i", false,-1);
    tracep->declBit(c+1517,"wb_rst_i", false,-1);
    tracep->declBus(c+1433,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1430,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1116,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1431,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1429,"wb_we_i", false,-1);
    tracep->declBit(c+1426,"wb_stb_i", false,-1);
    tracep->declBit(c+1427,"wb_cyc_i", false,-1);
    tracep->declBit(c+1115,"wb_ack_o", false,-1);
    tracep->declBit(c+1577,"wb_err_o", false,-1);
    tracep->declBit(c+1114,"wb_int_o", false,-1);
    tracep->declBus(c+1035,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+1034,"sclk_pad_o", false,-1);
    tracep->declBit(c+1538,"mosi_pad_o", false,-1);
    tracep->declBit(c+1539,"miso_pad_i", false,-1);
    tracep->declBus(c+1117,"divider", false,-1, 15,0);
    tracep->declBus(c+1118,"ctrl", false,-1, 13,0);
    tracep->declBus(c+1119,"ss", false,-1, 7,0);
    tracep->declBus(c+1483,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+1120,"rx", false,-1, 127,0);
    tracep->declBit(c+1124,"rx_negedge", false,-1);
    tracep->declBit(c+1125,"tx_negedge", false,-1);
    tracep->declBus(c+1126,"char_len", false,-1, 6,0);
    tracep->declBit(c+1127,"go", false,-1);
    tracep->declBit(c+1128,"lsb", false,-1);
    tracep->declBit(c+1129,"ie", false,-1);
    tracep->declBit(c+1130,"ass", false,-1);
    tracep->declBit(c+1434,"spi_divider_sel", false,-1);
    tracep->declBit(c+1435,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1436,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1437,"spi_ss_sel", false,-1);
    tracep->declBit(c+1131,"tip", false,-1);
    tracep->declBit(c+1132,"pos_edge", false,-1);
    tracep->declBit(c+1133,"neg_edge", false,-1);
    tracep->declBit(c+1134,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1598,"Tp", false,-1, 31,0);
    tracep->declBit(c+1516,"clk_in", false,-1);
    tracep->declBit(c+1517,"rst", false,-1);
    tracep->declBit(c+1131,"enable", false,-1);
    tracep->declBit(c+1127,"go", false,-1);
    tracep->declBit(c+1134,"last_clk", false,-1);
    tracep->declBus(c+1117,"divider", false,-1, 15,0);
    tracep->declBit(c+1034,"clk_out", false,-1);
    tracep->declBit(c+1132,"pos_edge", false,-1);
    tracep->declBit(c+1133,"neg_edge", false,-1);
    tracep->declBus(c+1135,"cnt", false,-1, 15,0);
    tracep->declBit(c+1136,"cnt_zero", false,-1);
    tracep->declBit(c+1137,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1598,"Tp", false,-1, 31,0);
    tracep->declBit(c+1516,"clk", false,-1);
    tracep->declBit(c+1517,"rst", false,-1);
    tracep->declBus(c+1438,"latch", false,-1, 3,0);
    tracep->declBus(c+1431,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+1126,"len", false,-1, 6,0);
    tracep->declBit(c+1128,"lsb", false,-1);
    tracep->declBit(c+1127,"go", false,-1);
    tracep->declBit(c+1132,"pos_edge", false,-1);
    tracep->declBit(c+1133,"neg_edge", false,-1);
    tracep->declBit(c+1124,"rx_negedge", false,-1);
    tracep->declBit(c+1125,"tx_negedge", false,-1);
    tracep->declBit(c+1131,"tip", false,-1);
    tracep->declBit(c+1134,"last", false,-1);
    tracep->declBus(c+1430,"p_in", false,-1, 31,0);
    tracep->declArray(c+1120,"p_out", false,-1, 127,0);
    tracep->declBit(c+1034,"s_clk", false,-1);
    tracep->declBit(c+1539,"s_in", false,-1);
    tracep->declBit(c+1538,"s_out", false,-1);
    tracep->declBus(c+1138,"cnt", false,-1, 7,0);
    tracep->declArray(c+1120,"data", false,-1, 127,0);
    tracep->declBus(c+1139,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+1140,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+1141,"rx_clk", false,-1);
    tracep->declBit(c+1142,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+1394,"auto_in_psel", false,-1);
    tracep->declBit(c+1395,"auto_in_penable", false,-1);
    tracep->declBit(c+1382,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1389,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1576,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+263,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1396,"auto_in_pready", false,-1);
    tracep->declBit(c+1577,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1544,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1536,"uart_rx", false,-1);
    tracep->declBit(c+1537,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1394,"in_psel", false,-1);
    tracep->declBit(c+1395,"in_penable", false,-1);
    tracep->declBus(c+1576,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1396,"in_pready", false,-1);
    tracep->declBit(c+1577,"in_pslverr", false,-1);
    tracep->declBus(c+1408,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1382,"in_pwrite", false,-1);
    tracep->declBus(c+1544,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+263,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1536,"uart_rx", false,-1);
    tracep->declBit(c+1537,"uart_tx", false,-1);
    tracep->declBit(c+1143,"rtsn", false,-1);
    tracep->declBit(c+1577,"ctsn", false,-1);
    tracep->declBit(c+1144,"dtr_pad_o", false,-1);
    tracep->declBit(c+1577,"dsr_pad_i", false,-1);
    tracep->declBit(c+1577,"ri_pad_i", false,-1);
    tracep->declBit(c+1577,"dcd_pad_i", false,-1);
    tracep->declBit(c+1145,"interrupt", false,-1);
    tracep->declBit(c+150,"reg_we", false,-1);
    tracep->declBit(c+151,"reg_re", false,-1);
    tracep->declBus(c+1439,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1440,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+982,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1484,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+1146,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1516,"clk", false,-1);
    tracep->declBit(c+1517,"wb_rst_i", false,-1);
    tracep->declBus(c+1439,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1441,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1484,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+150,"wb_we_i", false,-1);
    tracep->declBit(c+151,"wb_re_i", false,-1);
    tracep->declBit(c+1537,"stx_pad_o", false,-1);
    tracep->declBit(c+1536,"srx_pad_i", false,-1);
    tracep->declBus(c+1631,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+1146,"rts_pad_o", false,-1);
    tracep->declBit(c+1144,"dtr_pad_o", false,-1);
    tracep->declBit(c+1145,"int_o", false,-1);
    tracep->declBit(c+1147,"enable", false,-1);
    tracep->declBit(c+1148,"srx_pad", false,-1);
    tracep->declBus(c+1149,"ier", false,-1, 3,0);
    tracep->declBus(c+1150,"iir", false,-1, 3,0);
    tracep->declBus(c+1151,"fcr", false,-1, 1,0);
    tracep->declBus(c+1152,"mcr", false,-1, 4,0);
    tracep->declBus(c+1153,"lcr", false,-1, 7,0);
    tracep->declBus(c+1154,"msr", false,-1, 7,0);
    tracep->declBus(c+1155,"dl", false,-1, 15,0);
    tracep->declBus(c+1156,"scratch", false,-1, 7,0);
    tracep->declBit(c+1157,"start_dlc", false,-1);
    tracep->declBit(c+1158,"lsr_mask_d", false,-1);
    tracep->declBit(c+1159,"msi_reset", false,-1);
    tracep->declBus(c+1160,"dlc", false,-1, 15,0);
    tracep->declBus(c+1161,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+1162,"rx_reset", false,-1);
    tracep->declBit(c+1163,"tx_reset", false,-1);
    tracep->declBit(c+1164,"dlab", false,-1);
    tracep->declBit(c+1580,"cts_pad_i", false,-1);
    tracep->declBit(c+1577,"dsr_pad_i", false,-1);
    tracep->declBit(c+1577,"ri_pad_i", false,-1);
    tracep->declBit(c+1577,"dcd_pad_i", false,-1);
    tracep->declBit(c+1165,"loopback", false,-1);
    tracep->declBit(c+1577,"cts", false,-1);
    tracep->declBit(c+1580,"dsr", false,-1);
    tracep->declBit(c+1580,"ri", false,-1);
    tracep->declBit(c+1580,"dcd", false,-1);
    tracep->declBit(c+1166,"cts_c", false,-1);
    tracep->declBit(c+1167,"dsr_c", false,-1);
    tracep->declBit(c+1168,"ri_c", false,-1);
    tracep->declBit(c+1169,"dcd_c", false,-1);
    tracep->declBus(c+1170,"lsr", false,-1, 7,0);
    tracep->declBit(c+1171,"lsr0", false,-1);
    tracep->declBit(c+1172,"lsr1", false,-1);
    tracep->declBit(c+1173,"lsr2", false,-1);
    tracep->declBit(c+1174,"lsr3", false,-1);
    tracep->declBit(c+1175,"lsr4", false,-1);
    tracep->declBit(c+1176,"lsr5", false,-1);
    tracep->declBit(c+1177,"lsr6", false,-1);
    tracep->declBit(c+1178,"lsr7", false,-1);
    tracep->declBit(c+1179,"lsr0r", false,-1);
    tracep->declBit(c+1180,"lsr1r", false,-1);
    tracep->declBit(c+1181,"lsr2r", false,-1);
    tracep->declBit(c+1182,"lsr3r", false,-1);
    tracep->declBit(c+1183,"lsr4r", false,-1);
    tracep->declBit(c+1184,"lsr5r", false,-1);
    tracep->declBit(c+1185,"lsr6r", false,-1);
    tracep->declBit(c+1186,"lsr7r", false,-1);
    tracep->declBit(c+228,"lsr_mask", false,-1);
    tracep->declBit(c+1187,"rls_int", false,-1);
    tracep->declBit(c+1188,"rda_int", false,-1);
    tracep->declBit(c+1189,"ti_int", false,-1);
    tracep->declBit(c+1190,"thre_int", false,-1);
    tracep->declBit(c+1191,"ms_int", false,-1);
    tracep->declBit(c+1192,"tf_push", false,-1);
    tracep->declBit(c+1193,"rf_pop", false,-1);
    tracep->declBus(c+1026,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1194,"rf_error_bit", false,-1);
    tracep->declBit(c+1172,"rf_overrun", false,-1);
    tracep->declBit(c+1195,"rf_push_pulse", false,-1);
    tracep->declBus(c+1196,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1197,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1198,"tstate", false,-1, 2,0);
    tracep->declBus(c+1199,"rstate", false,-1, 3,0);
    tracep->declBus(c+1200,"counter_t", false,-1, 9,0);
    tracep->declBit(c+1201,"thre_set_en", false,-1);
    tracep->declBus(c+1202,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+1203,"block_value", false,-1, 7,0);
    tracep->declBit(c+1204,"serial_out", false,-1);
    tracep->declBit(c+1205,"serial_in", false,-1);
    tracep->declBit(c+229,"lsr_mask_condition", false,-1);
    tracep->declBit(c+230,"iir_read", false,-1);
    tracep->declBit(c+231,"msr_read", false,-1);
    tracep->declBit(c+232,"fifo_read", false,-1);
    tracep->declBit(c+233,"fifo_write", false,-1);
    tracep->declBus(c+1206,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+1207,"lsr0_d", false,-1);
    tracep->declBit(c+1208,"lsr1_d", false,-1);
    tracep->declBit(c+1209,"lsr2_d", false,-1);
    tracep->declBit(c+1210,"lsr3_d", false,-1);
    tracep->declBit(c+1211,"lsr4_d", false,-1);
    tracep->declBit(c+1212,"lsr5_d", false,-1);
    tracep->declBit(c+1213,"lsr6_d", false,-1);
    tracep->declBit(c+1214,"lsr7_d", false,-1);
    tracep->declBit(c+1215,"rls_int_d", false,-1);
    tracep->declBit(c+1216,"thre_int_d", false,-1);
    tracep->declBit(c+1217,"ms_int_d", false,-1);
    tracep->declBit(c+1218,"ti_int_d", false,-1);
    tracep->declBit(c+1219,"rda_int_d", false,-1);
    tracep->declBit(c+1220,"rls_int_rise", false,-1);
    tracep->declBit(c+1221,"thre_int_rise", false,-1);
    tracep->declBit(c+1222,"ms_int_rise", false,-1);
    tracep->declBit(c+1223,"ti_int_rise", false,-1);
    tracep->declBit(c+1224,"rda_int_rise", false,-1);
    tracep->declBit(c+1225,"rls_int_pnd", false,-1);
    tracep->declBit(c+1226,"rda_int_pnd", false,-1);
    tracep->declBit(c+1227,"thre_int_pnd", false,-1);
    tracep->declBit(c+1228,"ms_int_pnd", false,-1);
    tracep->declBit(c+1229,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1598,"Tp", false,-1, 31,0);
    tracep->declBus(c+1598,"width", false,-1, 31,0);
    tracep->declBus(c+1592,"init_value", false,-1, 0,0);
    tracep->declBit(c+1517,"rst_i", false,-1);
    tracep->declBit(c+1516,"clk_i", false,-1);
    tracep->declBit(c+1577,"stage1_rst_i", false,-1);
    tracep->declBit(c+1580,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1536,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+1148,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+1230,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1516,"clk", false,-1);
    tracep->declBit(c+1517,"wb_rst_i", false,-1);
    tracep->declBus(c+1153,"lcr", false,-1, 7,0);
    tracep->declBit(c+1193,"rf_pop", false,-1);
    tracep->declBit(c+1205,"srx_pad_i", false,-1);
    tracep->declBit(c+1147,"enable", false,-1);
    tracep->declBit(c+1162,"rx_reset", false,-1);
    tracep->declBit(c+228,"lsr_mask", false,-1);
    tracep->declBus(c+1200,"counter_t", false,-1, 9,0);
    tracep->declBus(c+1196,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1026,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1172,"rf_overrun", false,-1);
    tracep->declBit(c+1194,"rf_error_bit", false,-1);
    tracep->declBus(c+1199,"rstate", false,-1, 3,0);
    tracep->declBit(c+1195,"rf_push_pulse", false,-1);
    tracep->declBus(c+1231,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+1232,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+1233,"rshift", false,-1, 7,0);
    tracep->declBit(c+1234,"rparity", false,-1);
    tracep->declBit(c+1235,"rparity_error", false,-1);
    tracep->declBit(c+1236,"rframing_error", false,-1);
    tracep->declBit(c+1237,"rbit_in", false,-1);
    tracep->declBit(c+1238,"rparity_xor", false,-1);
    tracep->declBus(c+1239,"counter_b", false,-1, 7,0);
    tracep->declBit(c+1240,"rf_push_q", false,-1);
    tracep->declBus(c+1241,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+1242,"rf_push", false,-1);
    tracep->declBit(c+1243,"break_error", false,-1);
    tracep->declBit(c+1244,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+1245,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+1246,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+1247,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1583,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1586,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1629,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1625,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1627,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1626,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1628,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1624,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1631,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1632,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1644,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1248,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1249,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1645,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1597,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1599,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1646,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1516,"clk", false,-1);
    tracep->declBit(c+1517,"wb_rst_i", false,-1);
    tracep->declBit(c+1195,"push", false,-1);
    tracep->declBit(c+1193,"pop", false,-1);
    tracep->declBus(c+1241,"data_in", false,-1, 10,0);
    tracep->declBit(c+1162,"fifo_reset", false,-1);
    tracep->declBit(c+228,"reset_status", false,-1);
    tracep->declBus(c+1026,"data_out", false,-1, 10,0);
    tracep->declBit(c+1172,"overrun", false,-1);
    tracep->declBus(c+1196,"count", false,-1, 4,0);
    tracep->declBit(c+1194,"error_bit", false,-1);
    tracep->declBus(c+1027,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1250+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1266,"top", false,-1, 3,0);
    tracep->declBus(c+1267,"bottom", false,-1, 3,0);
    tracep->declBus(c+1268,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1269,"word0", false,-1, 2,0);
    tracep->declBus(c+1270,"word1", false,-1, 2,0);
    tracep->declBus(c+1271,"word2", false,-1, 2,0);
    tracep->declBus(c+1272,"word3", false,-1, 2,0);
    tracep->declBus(c+1273,"word4", false,-1, 2,0);
    tracep->declBus(c+1274,"word5", false,-1, 2,0);
    tracep->declBus(c+1275,"word6", false,-1, 2,0);
    tracep->declBus(c+1276,"word7", false,-1, 2,0);
    tracep->declBus(c+1277,"word8", false,-1, 2,0);
    tracep->declBus(c+1278,"word9", false,-1, 2,0);
    tracep->declBus(c+1279,"word10", false,-1, 2,0);
    tracep->declBus(c+1280,"word11", false,-1, 2,0);
    tracep->declBus(c+1281,"word12", false,-1, 2,0);
    tracep->declBus(c+1282,"word13", false,-1, 2,0);
    tracep->declBus(c+1283,"word14", false,-1, 2,0);
    tracep->declBus(c+1284,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1599,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1619,"data_width", false,-1, 31,0);
    tracep->declBus(c+1597,"depth", false,-1, 31,0);
    tracep->declBit(c+1516,"clk", false,-1);
    tracep->declBit(c+1195,"we", false,-1);
    tracep->declBus(c+1266,"a", false,-1, 3,0);
    tracep->declBus(c+1267,"dpra", false,-1, 3,0);
    tracep->declBus(c+1285,"di", false,-1, 7,0);
    tracep->declBus(c+1027,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+983+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1516,"clk", false,-1);
    tracep->declBit(c+1517,"wb_rst_i", false,-1);
    tracep->declBus(c+1153,"lcr", false,-1, 7,0);
    tracep->declBit(c+1192,"tf_push", false,-1);
    tracep->declBus(c+1441,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+1147,"enable", false,-1);
    tracep->declBit(c+1163,"tx_reset", false,-1);
    tracep->declBit(c+228,"lsr_mask", false,-1);
    tracep->declBit(c+1204,"stx_pad_o", false,-1);
    tracep->declBus(c+1198,"tstate", false,-1, 2,0);
    tracep->declBus(c+1197,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1286,"counter", false,-1, 4,0);
    tracep->declBus(c+1287,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1288,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1289,"stx_o_tmp", false,-1);
    tracep->declBit(c+1290,"parity_xor", false,-1);
    tracep->declBit(c+1291,"tf_pop", false,-1);
    tracep->declBit(c+1292,"bit_out", false,-1);
    tracep->declBus(c+1441,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1485,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1293,"tf_overrun", false,-1);
    tracep->declBus(c+1585,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1576,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1596,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1639,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1609,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1640,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1619,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1597,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1599,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1646,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1516,"clk", false,-1);
    tracep->declBit(c+1517,"wb_rst_i", false,-1);
    tracep->declBit(c+1192,"push", false,-1);
    tracep->declBit(c+1291,"pop", false,-1);
    tracep->declBus(c+1441,"data_in", false,-1, 7,0);
    tracep->declBit(c+1163,"fifo_reset", false,-1);
    tracep->declBit(c+228,"reset_status", false,-1);
    tracep->declBus(c+1485,"data_out", false,-1, 7,0);
    tracep->declBit(c+1293,"overrun", false,-1);
    tracep->declBus(c+1197,"count", false,-1, 4,0);
    tracep->declBus(c+1294,"top", false,-1, 3,0);
    tracep->declBus(c+1295,"bottom", false,-1, 3,0);
    tracep->declBus(c+1296,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1599,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1619,"data_width", false,-1, 31,0);
    tracep->declBus(c+1597,"depth", false,-1, 31,0);
    tracep->declBit(c+1516,"clk", false,-1);
    tracep->declBit(c+1192,"we", false,-1);
    tracep->declBus(c+1294,"a", false,-1, 3,0);
    tracep->declBus(c+1295,"dpra", false,-1, 3,0);
    tracep->declBus(c+1441,"di", false,-1, 7,0);
    tracep->declBus(c+1485,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+999+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBit(c+1385,"auto_in_psel", false,-1);
    tracep->declBit(c+1386,"auto_in_penable", false,-1);
    tracep->declBit(c+1382,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1387,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1576,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+263,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+264,"auto_in_pready", false,-1);
    tracep->declBit(c+1577,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1578,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1530,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1531,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1532,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1533,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1534,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1535,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1516,"clock", false,-1);
    tracep->declBit(c+1517,"reset", false,-1);
    tracep->declBus(c+1421,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1385,"in_psel", false,-1);
    tracep->declBit(c+1386,"in_penable", false,-1);
    tracep->declBus(c+1576,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1382,"in_pwrite", false,-1);
    tracep->declBus(c+263,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1383,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+264,"in_pready", false,-1);
    tracep->declBus(c+1578,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1577,"in_pslverr", false,-1);
    tracep->declBus(c+1530,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1531,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1532,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1533,"vga_hsync", false,-1);
    tracep->declBit(c+1534,"vga_vsync", false,-1);
    tracep->declBit(c+1535,"vga_valid", false,-1);
    tracep->declBus(c+1647,"NUM", false,-1, 31,0);
    tracep->declBit(c+1015,"sync_reg", false,-1);
    tracep->declBus(c+1648,"H_FRONT", false,-1, 31,0);
    tracep->declBus(c+1649,"H_ACT", false,-1, 31,0);
    tracep->declBus(c+1650,"H_BACK", false,-1, 31,0);
    tracep->declBus(c+1651,"H_TOTAL", false,-1, 31,0);
    tracep->declBus(c+1616,"V_FRONT", false,-1, 31,0);
    tracep->declBus(c+1652,"V_ACT", false,-1, 31,0);
    tracep->declBus(c+1653,"V_BACK", false,-1, 31,0);
    tracep->declBus(c+1654,"V_TOTAL", false,-1, 31,0);
    tracep->declBus(c+1655,"VGA_SYNC", false,-1, 31,0);
    tracep->declBus(c+1016,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+1017,"y_cnt", false,-1, 9,0);
    tracep->declBus(c+1018,"cnt", false,-1, 20,0);
    tracep->declBit(c+1019,"h_valid", false,-1);
    tracep->declBit(c+1020,"v_valid", false,-1);
    tracep->declBus(c+1578,"VGA_IDLE", false,-1, 31,0);
    tracep->declBus(c+1598,"VGA_WRITE", false,-1, 31,0);
    tracep->declBus(c+1021,"vga_state", false,-1, 1,0);
    tracep->declBus(c+1022,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+1034,"sck", false,-1);
    tracep->declBit(c+1564,"ss", false,-1);
    tracep->declBit(c+1538,"mosi", false,-1);
    tracep->declBit(c+1565,"miso", false,-1);
    tracep->declBus(c+1512,"data_in", false,-1, 7,0);
    tracep->declBus(c+1513,"data_out", false,-1, 7,0);
    tracep->declBus(c+1514,"bit_cnt", false,-1, 2,0);
    tracep->declBit(c+1515,"receiving", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+1034,"sck", false,-1);
    tracep->declBit(c+1297,"ss", false,-1);
    tracep->declBit(c+1538,"mosi", false,-1);
    tracep->declBit(c+1566,"miso", false,-1);
    tracep->declBit(c+1297,"reset", false,-1);
    tracep->declBus(c+1374,"state", false,-1, 2,0);
    tracep->declBus(c+1375,"counter", false,-1, 7,0);
    tracep->declBus(c+1376,"cmd", false,-1, 7,0);
    tracep->declBus(c+1377,"addr", false,-1, 23,0);
    tracep->declBus(c+1378,"data", false,-1, 31,0);
    tracep->declBit(c+1379,"ren", false,-1);
    tracep->declBus(c+1567,"rdata", false,-1, 31,0);
    tracep->declBus(c+1568,"raddr", false,-1, 31,0);
    tracep->declBus(c+1569,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+1034,"clock", false,-1);
    tracep->declBit(c+1379,"valid", false,-1);
    tracep->declBus(c+1376,"cmd", false,-1, 7,0);
    tracep->declBus(c+1568,"addr", false,-1, 31,0);
    tracep->declBus(c+1567,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1442,"sck", false,-1);
    tracep->declBit(c+1443,"ce_n", false,-1);
    tracep->declBus(c+1540,"dio", false,-1, 3,0);
    tracep->declBus(c+1611,"RCMD", false,-1, 7,0);
    tracep->declBus(c+1612,"WCMD", false,-1, 7,0);
    tracep->declBus(c+1656,"QPICMD", false,-1, 7,0);
    tracep->declBus(c+1507,"dout_en", false,-1, 3,0);
    tracep->declBus(c+1570,"dout", false,-1, 3,0);
    tracep->declBus(c+1540,"din", false,-1, 3,0);
    tracep->declBit(c+1571,"QPI_MODE", false,-1);
    tracep->declBus(c+1508,"cmd", false,-1, 7,0);
    tracep->declBus(c+1509,"addr", false,-1, 23,0);
    tracep->declBus(c+1572,"data", false,-1, 31,0);
    tracep->declBus(c+1573,"rdata", false,-1, 31,0);
    tracep->declBus(c+1510,"cnt", false,-1, 7,0);
    tracep->declBus(c+1511,"state", false,-1, 2,0);
    tracep->declBus(c+1585,"CMD", false,-1, 2,0);
    tracep->declBus(c+1576,"ADDR", false,-1, 2,0);
    tracep->declBus(c+1596,"DATA", false,-1, 2,0);
    tracep->declBus(c+1639,"DELAY", false,-1, 2,0);
    tracep->declBus(c+1609,"ERR", false,-1, 2,0);
    tracep->declBus(c+1574,"data_bswap", false,-1, 31,0);
    tracep->declBus(c+1575,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1541,"clk", false,-1);
    tracep->declBit(c+1486,"cke", false,-1);
    tracep->declBit(c+1487,"cs", false,-1);
    tracep->declBit(c+1488,"ras", false,-1);
    tracep->declBit(c+1489,"cas", false,-1);
    tracep->declBit(c+1490,"we", false,-1);
    tracep->declBus(c+1542,"a", false,-1, 13,0);
    tracep->declBus(c+1491,"ba", false,-1, 1,0);
    tracep->declBus(c+1492,"dqm", false,-1, 3,0);
    tracep->declBus(c+1504,"dq", false,-1, 31,0);
    tracep->declBus(c+1495,"addr", false,-1, 12,0);
    tracep->declBit(c+259,"bank_sel", false,-1);
    tracep->pushNamePrefix("sdram_32_u0 ");
    tracep->declBit(c+1541,"clk", false,-1);
    tracep->declBit(c+1486,"cke", false,-1);
    tracep->declBit(c+260,"cs", false,-1);
    tracep->declBit(c+1488,"ras", false,-1);
    tracep->declBit(c+1489,"cas", false,-1);
    tracep->declBit(c+1490,"we", false,-1);
    tracep->declBus(c+1495,"a", false,-1, 12,0);
    tracep->declBus(c+1491,"ba", false,-1, 1,0);
    tracep->declBus(c+1492,"dqm", false,-1, 3,0);
    tracep->declBus(c+1504,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("sdram_16_u1 ");
    tracep->declBit(c+1541,"clk", false,-1);
    tracep->declBit(c+1486,"cke", false,-1);
    tracep->declBit(c+260,"cs", false,-1);
    tracep->declBit(c+1488,"ras", false,-1);
    tracep->declBit(c+1489,"cas", false,-1);
    tracep->declBit(c+1490,"we", false,-1);
    tracep->declBus(c+1495,"a", false,-1, 12,0);
    tracep->declBus(c+1491,"ba", false,-1, 1,0);
    tracep->declBus(c+1501,"dqm", false,-1, 1,0);
    tracep->declBus(c+1505,"dq", false,-1, 15,0);
    tracep->declBus(c+1502,"cmd", false,-1, 2,0);
    tracep->declBus(c+1642,"NOP", false,-1, 2,0);
    tracep->declBus(c+1639,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1640,"READ", false,-1, 2,0);
    tracep->declBus(c+1609,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1641,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1596,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1576,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1585,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1657,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1298+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1302,"den", false,-1, 15,0);
    tracep->declBus(c+1505,"din", false,-1, 15,0);
    tracep->declBus(c+1303,"dout", false,-1, 15,0);
    tracep->declBus(c+1304,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1305,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1306,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1307,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1308,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1309,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1310,"read_flag", false,-1);
    tracep->declBus(c+1311,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1312,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1313,"w_data", false,-1, 15,0);
    tracep->declBus(c+1314,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1315,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1316,"Length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_16_u2 ");
    tracep->declBit(c+1541,"clk", false,-1);
    tracep->declBit(c+1486,"cke", false,-1);
    tracep->declBit(c+260,"cs", false,-1);
    tracep->declBit(c+1488,"ras", false,-1);
    tracep->declBit(c+1489,"cas", false,-1);
    tracep->declBit(c+1490,"we", false,-1);
    tracep->declBus(c+1495,"a", false,-1, 12,0);
    tracep->declBus(c+1491,"ba", false,-1, 1,0);
    tracep->declBus(c+1503,"dqm", false,-1, 1,0);
    tracep->declBus(c+1506,"dq", false,-1, 15,0);
    tracep->declBus(c+1502,"cmd", false,-1, 2,0);
    tracep->declBus(c+1642,"NOP", false,-1, 2,0);
    tracep->declBus(c+1639,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1640,"READ", false,-1, 2,0);
    tracep->declBus(c+1609,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1641,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1596,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1576,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1585,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1657,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1317+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1321,"den", false,-1, 15,0);
    tracep->declBus(c+1506,"din", false,-1, 15,0);
    tracep->declBus(c+1322,"dout", false,-1, 15,0);
    tracep->declBus(c+1323,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1324,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1325,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1326,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1327,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1328,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1329,"read_flag", false,-1);
    tracep->declBus(c+1330,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1331,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1332,"w_data", false,-1, 15,0);
    tracep->declBus(c+1333,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1334,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1335,"Length", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram_32_u1 ");
    tracep->declBit(c+1541,"clk", false,-1);
    tracep->declBit(c+1486,"cke", false,-1);
    tracep->declBit(c+261,"cs", false,-1);
    tracep->declBit(c+1488,"ras", false,-1);
    tracep->declBit(c+1489,"cas", false,-1);
    tracep->declBit(c+1490,"we", false,-1);
    tracep->declBus(c+1495,"a", false,-1, 12,0);
    tracep->declBus(c+1491,"ba", false,-1, 1,0);
    tracep->declBus(c+1492,"dqm", false,-1, 3,0);
    tracep->declBus(c+1504,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("sdram_16_u1 ");
    tracep->declBit(c+1541,"clk", false,-1);
    tracep->declBit(c+1486,"cke", false,-1);
    tracep->declBit(c+261,"cs", false,-1);
    tracep->declBit(c+1488,"ras", false,-1);
    tracep->declBit(c+1489,"cas", false,-1);
    tracep->declBit(c+1490,"we", false,-1);
    tracep->declBus(c+1495,"a", false,-1, 12,0);
    tracep->declBus(c+1491,"ba", false,-1, 1,0);
    tracep->declBus(c+1501,"dqm", false,-1, 1,0);
    tracep->declBus(c+1505,"dq", false,-1, 15,0);
    tracep->declBus(c+1502,"cmd", false,-1, 2,0);
    tracep->declBus(c+1642,"NOP", false,-1, 2,0);
    tracep->declBus(c+1639,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1640,"READ", false,-1, 2,0);
    tracep->declBus(c+1609,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1641,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1596,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1576,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1585,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1657,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1336+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1340,"den", false,-1, 15,0);
    tracep->declBus(c+1505,"din", false,-1, 15,0);
    tracep->declBus(c+1341,"dout", false,-1, 15,0);
    tracep->declBus(c+1342,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1343,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1344,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1345,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1346,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1347,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1348,"read_flag", false,-1);
    tracep->declBus(c+1349,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1350,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1351,"w_data", false,-1, 15,0);
    tracep->declBus(c+1352,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1353,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1354,"Length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_16_u2 ");
    tracep->declBit(c+1541,"clk", false,-1);
    tracep->declBit(c+1486,"cke", false,-1);
    tracep->declBit(c+261,"cs", false,-1);
    tracep->declBit(c+1488,"ras", false,-1);
    tracep->declBit(c+1489,"cas", false,-1);
    tracep->declBit(c+1490,"we", false,-1);
    tracep->declBus(c+1495,"a", false,-1, 12,0);
    tracep->declBus(c+1491,"ba", false,-1, 1,0);
    tracep->declBus(c+1503,"dqm", false,-1, 1,0);
    tracep->declBus(c+1506,"dq", false,-1, 15,0);
    tracep->declBus(c+1502,"cmd", false,-1, 2,0);
    tracep->declBus(c+1642,"NOP", false,-1, 2,0);
    tracep->declBus(c+1639,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1640,"READ", false,-1, 2,0);
    tracep->declBus(c+1609,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1641,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1596,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1576,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1585,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1657,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1355+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1359,"den", false,-1, 15,0);
    tracep->declBus(c+1506,"din", false,-1, 15,0);
    tracep->declBus(c+1360,"dout", false,-1, 15,0);
    tracep->declBus(c+1361,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1362,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1363,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1364,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1365,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1366,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1367,"read_flag", false,-1);
    tracep->declBus(c+1368,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1369,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1370,"w_data", false,-1, 15,0);
    tracep->declBus(c+1371,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1372,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1373,"Length", false,-1, 3,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullBit(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullBit(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
    bufp->fullBit(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullBit(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+19,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__clint_state)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__clint_state) 
                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready)))
                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid))));
    bufp->fullIData(oldp+20,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr 
                              - (IData)(0x2000000U))),32);
    bufp->fullBit(oldp+21,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+22,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullBit(oldp+23,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                   >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))));
    bufp->fullBit(oldp+24,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                   >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
    bufp->fullBit(oldp+25,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+26,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                   >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+27,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+28,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+29,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+30,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+31,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+32,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+33,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+34,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+35,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                            & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+36,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+37,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+38,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+39,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+40,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+41,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+42,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+43,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+44,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+45,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 9U)))));
    bufp->fullBit(oldp+46,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+47,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+48,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+49,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+50,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+51,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+52,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+53,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+54,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+55,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+56,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+57,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+58,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullCData(oldp+59,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__hit)
                                   ? 0U : 3U) : ((3U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state))
                                                  ? 
                                                 ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_if_rvalid) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_rready)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_if_rlast))
                                                   ? 2U
                                                   : 3U)
                                                  : 0U))),2);
    bufp->fullCData(oldp+60,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__req_valid)
                                   ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19ed6__0) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_MemWrite))
                                       ? 1U : 2U) : 0U)
                               : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))
                                   ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_rvalid) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_rready)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_rlast))
                                       ? 0U : 2U) : 
                                  ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))
                                    ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__b_done))
                                        ? 0U : 1U) : 0U)))),2);
    bufp->fullBit(oldp+61,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+65,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullBit(oldp+67,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+68,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid),4);
    bufp->fullIData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen),8);
    bufp->fullCData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst),2);
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullIData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+92,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+95,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+109,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+110,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+111,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+112,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+113,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullSData(oldp+114,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+115,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullSData(oldp+120,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid)))),16);
    bufp->fullSData(oldp+121,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)))),16);
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullCData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullCData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+128,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (0U == ((6U & (4U ^ 
                                              (0x1eU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x1bU)))) 
                                       | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x18U)))))));
    bufp->fullBit(oldp+129,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+130,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+131,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+136,((0U == ((6U & (4U ^ (0x1eU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0x1bU)))) 
                                    | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                             >> 0x18U))))));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+138,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+139,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+146,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+149,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen)
                                    : 0U))),8);
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullBit(oldp+152,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+153,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+154,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+155,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+156,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+157,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+158,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+159,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+160,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+161,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+162,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+163,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+164,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+165,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+166,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+167,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+168,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+169,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+170,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+171,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+172,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+173,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+174,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+175,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+176,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+177,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+178,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+179,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+180,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+181,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+182,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+183,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+184,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+185,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullIData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_rdata),32);
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_rvalid));
    bufp->fullCData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_rid),4);
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_rlast));
    bufp->fullCData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_rresp),2);
    bufp->fullCData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_bresp),2);
    bufp->fullCData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_bid),4);
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_bvalid));
    bufp->fullIData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_if_rdata),32);
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_if_rvalid));
    bufp->fullCData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_if_rid),4);
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_if_rlast));
    bufp->fullCData(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_if_rresp),2);
    bufp->fullCData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__next_master),2);
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_arready));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_awready));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_wready));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_if_arready));
    bufp->fullIData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w),32);
    bufp->fullCData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+254,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+255,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+256,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                     >> 0xaU))),2);
    bufp->fullCData(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_double),3);
    bufp->fullCData(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullBit(oldp+259,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sdram_32_u0__cs));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sdram_32_u1__cs));
    bufp->fullBit(oldp+262,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullBit(oldp+264,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_state))));
    bufp->fullIData(oldp+265,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+267,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+268,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+269,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+270,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+271,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+272,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+273,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+274,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+275,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+278,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+279,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+280,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+281,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+282,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+283,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+293,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullBit(oldp+294,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+295,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+296,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+297,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+298,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+299,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+300,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+301,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+302,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+303,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+366,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+367,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+370,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                          << 0x1eU) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                           << 8U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                             << 1U)))))),2);
    bufp->fullBit(oldp+371,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+374,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 3U))
                                 : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                   ? 
                                                  (vlSelf->__VdfgTmp_hf132a334__0 
                                                   >> 0x18U)
                                                   : 0U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                << 0x18U) 
                                               | ((0xff0000U 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                         ? 
                                                        (vlSelf->__VdfgTmp_hf132a334__0 
                                                         >> 0x10U)
                                                         : 0U)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                            ? 
                                                           (vlSelf->__VdfgTmp_hf132a334__0 
                                                            >> 8U)
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                             ? vlSelf->__VdfgTmp_hf132a334__0
                                                             : 0U)
                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                            : 0U)))),32);
    bufp->fullCData(oldp+375,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+376,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                              >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+380,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+382,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+418,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+421,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                      ? (vlSelf->__VdfgTmp_hf132a334__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_hf132a334__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? vlSelf->__VdfgTmp_hf132a334__0
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+422,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+504,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+514,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+518,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+519,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+580,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+590,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+594,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+598,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+602,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+606,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+610,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+614,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+618,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+622,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+626,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+630,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+634,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+638,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+642,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+646,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+650,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+654,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+658,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+662,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+666,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+670,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+674,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+678,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+682,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+686,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+690,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+694,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+698,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+702,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+706,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+710,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+714,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_pc),32);
    bufp->fullIData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst),32);
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_valid));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready));
    bufp->fullIData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_pc),32);
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ready));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_RegWrite));
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_rd),4);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs1),4);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs2),4);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_zimm),5);
    bufp->fullIData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_imm),32);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_shamt),6);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_alu_op),4);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_MemLen),5);
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_MemWrite));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_MemRead));
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_opcode),7);
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_func3),3);
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_jal));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_jalr));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr_wen1));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr_ecall));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr_mret));
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr_op),2);
    bufp->fullSData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr_wr_addr1),12);
    bufp->fullSData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_csr_addr1),12);
    bufp->fullSData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_csr_addr2),12);
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_valid));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ex_ready));
    bufp->fullIData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_src2),32);
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_RegWrite));
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_rd),4);
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_MemRead));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_MemWrite));
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_MemLen),5);
    bufp->fullIData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_process_result),32);
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_flush));
    bufp->fullIData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_flush_pc),32);
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr));
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_wen1));
    bufp->fullSData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_wr_addr1),12);
    bufp->fullIData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_wr_data1),32);
    bufp->fullIData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_wr_data2),32);
    bufp->fullIData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_rdata),32);
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_ecall));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_mret));
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_valid));
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_RegWrite));
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_rd),4);
    bufp->fullIData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_write_rd_data),32);
    bufp->fullIData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_csr_wr_data1),32);
    bufp->fullIData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_csr_wr_data2),32);
    bufp->fullSData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_csr_wr_addr1),12);
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_csr_wen1));
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_csr_ecall));
    bufp->fullIData(oldp+775,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs1))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs1])),32);
    bufp->fullIData(oldp+776,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs2))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs2])),32);
    bufp->fullIData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ex_csr_num1),32);
    bufp->fullIData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ex_csr_num2),32);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__l_rd_addr),4);
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__l_rd_en));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__l_load));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_forward_las));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_arvalid));
    bufp->fullIData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_araddr),32);
    bufp->fullCData(oldp+785,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__in_sdram)
                                ? 3U : 0U)),8);
    bufp->fullCData(oldp+786,(((1U == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_MemLen)))
                                ? 0U : ((3U == (0xfU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_MemLen)))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+787,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__in_sdram)
                                ? 1U : 0U)),2);
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_rready));
    bufp->fullIData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_awaddr),32);
    bufp->fullCData(oldp+790,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                                | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                                   | ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                                      | (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__saved_wstrb)))))
                                ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                                         | (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__saved_wstrb)))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_awvalid));
    bufp->fullIData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_wdata),32);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_wstrb),4);
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_wvalid));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_wlast));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid));
    bufp->fullIData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr),32);
    bufp->fullCData(oldp+798,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_rready))
                                ? 1U : 0U)),4);
    bufp->fullCData(oldp+799,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_rready))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram)
                                    ? 3U : 0U) : 0U)),8);
    bufp->fullCData(oldp+800,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_rready))
                                ? 2U : 0U)),3);
    bufp->fullCData(oldp+801,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_arvalid) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_rready))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram)
                                    ? 1U : 0U) : 0U)),2);
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rready));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+807,((0x200U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_araddr 
                                        >> 0x10U))));
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master),2);
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__clint_state));
    bufp->fullQData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime),64);
    bufp->fullIData(oldp+812,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime)),32);
    bufp->fullIData(oldp+813,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__src1),32);
    bufp->fullIData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__src2),32);
    bufp->fullIData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ex_num1),32);
    bufp->fullIData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ex_num2),32);
    bufp->fullIData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__process_result),32);
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_zero));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_less));
    bufp->fullIData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jalr_target),32);
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__take_branch));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ex_flush_condition));
    bufp->fullIData(oldp+824,((0x80U | ((0xffffe7f7U 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ex_csr_num1) 
                                        | (8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ex_csr_num1 
                                                 >> 4U))))),32);
    bufp->fullIData(oldp+825,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ex_csr_num1 
                                     >> 7U))),32);
    bufp->fullIData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_zimm),32);
    bufp->fullIData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_write_data),32);
    bufp->fullCData(oldp+828,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_h9653a62d__0) 
                                << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_h666fa1ae__0))),2);
    bufp->fullCData(oldp+829,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0) 
                                << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_h3556a05f__0))),2);
    bufp->fullBit(oldp+830,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_MemWrite) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_MemRead) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_RegWrite) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_valid) 
                                      & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_rd)) 
                                         & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_rd) 
                                             != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs1)) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_he5bf04e5__0)))))))));
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__load_use_flag),4);
    bufp->fullCData(oldp+832,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst)),7);
    bufp->fullCData(oldp+833,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                       >> 0xfU))),4);
    bufp->fullCData(oldp+834,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+835,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                       >> 7U))),4);
    bufp->fullCData(oldp+836,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+837,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+838,((0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0x14U))),6);
    bufp->fullCData(oldp+839,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+840,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                        >> 2U))),5);
    bufp->fullIData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI),32);
    bufp->fullIData(oldp+842,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst)),32);
    bufp->fullIData(oldp+843,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+844,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+845,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+846,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0xfU))),32);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state),2);
    bufp->fullIData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next_pc),32);
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_once));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__once));
    bufp->fullIData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst),32);
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_valid));
    bufp->fullIData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_araddr),32);
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_arvalid));
    bufp->fullCData(oldp+855,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram)
                                ? 3U : 0U)),8);
    bufp->fullCData(oldp+856,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram)
                                ? 1U : 0U)),2);
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_rready));
    bufp->fullBit(oldp+858,((0x100fU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst)));
    bufp->fullBit(oldp+859,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst))));
    bufp->fullIData(oldp+860,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+861,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_once)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_pc
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next_pc) 
                               + (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                         >> 0x14U))))))),32);
    bufp->fullIData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram),28);
    bufp->fullIData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram[0]),32);
    bufp->fullIData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram[1]),32);
    bufp->fullIData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram[2]),32);
    bufp->fullIData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram[3]),32);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram),4);
    bufp->fullIData(oldp+868,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next_pc 
                               >> 4U)),28);
    bufp->fullCData(oldp+869,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next_pc 
                                     >> 2U))),2);
    bufp->fullIData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_tag),28);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_beat_idx),2);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state),2);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__beat_cnt),2);
    bufp->fullIData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data[0]),32);
    bufp->fullIData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data[1]),32);
    bufp->fullIData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data[2]),32);
    bufp->fullIData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data[3]),32);
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__ar_done));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__in_sdram));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__hit));
    bufp->fullIData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__b),32);
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__in_sdram));
    bufp->fullCData(oldp+883,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_process_result 
                                     >> 2U))),2);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__saved_word_offset),2);
    bufp->fullIData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__saved_wdata),32);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__saved_wstrb),4);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__burst_cnt),4);
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__addr_off),2);
    bufp->fullIData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rdata),32);
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__valid));
    bufp->fullIData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__addr_reg),32);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state),2);
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__b_done));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__ar_done));
    bufp->fullBit(oldp+897,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19ed6__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_MemWrite))));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__req_valid));
    bufp->fullWData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__block_data),128);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__l_MemLen),5);
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__op_complete));
    bufp->fullIData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__byte_data1),32);
    bufp->fullCData(oldp+906,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__byte_data1)),8);
    bufp->fullSData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__half_data),16);
    bufp->fullIData(oldp+908,(((0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__l_MemLen))
                                ? (((- (IData)((1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__byte_data1 
                                                   >> 7U)))) 
                                    << 8U) | (0xffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__byte_data1))
                                : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__l_MemLen))
                                    ? (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__byte_data1)
                                    : ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__l_MemLen))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__half_data) 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__half_data))
                                        : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__l_MemLen))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__half_data)
                                            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rdata))))),32);
    bufp->fullIData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rd_data),32);
    bufp->fullIData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mstatus),32);
    bufp->fullIData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mtvec),32);
    bufp->fullIData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mepc),32);
    bufp->fullIData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[0]),32);
    bufp->fullIData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[1]),32);
    bufp->fullIData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[2]),32);
    bufp->fullIData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[3]),32);
    bufp->fullIData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[4]),32);
    bufp->fullIData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[5]),32);
    bufp->fullIData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[6]),32);
    bufp->fullIData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[7]),32);
    bufp->fullIData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[8]),32);
    bufp->fullIData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[9]),32);
    bufp->fullIData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[10]),32);
    bufp->fullIData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[11]),32);
    bufp->fullIData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[12]),32);
    bufp->fullIData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[13]),32);
    bufp->fullIData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[14]),32);
    bufp->fullIData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[15]),32);
    bufp->fullIData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__i),32);
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[0]),32);
    bufp->fullIData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[1]),32);
    bufp->fullIData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[2]),32);
    bufp->fullIData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[3]),32);
    bufp->fullSData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),10);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[0]),8);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[1]),8);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[2]),8);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[3]),8);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[4]),8);
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[5]),8);
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[6]),8);
    bufp->fullCData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[7]),8);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[8]),8);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[9]),8);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[10]),8);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[11]),8);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[12]),8);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[13]),8);
    bufp->fullCData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[14]),8);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[15]),8);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__w_ptr),4);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__r_ptr),4);
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__isn_empty));
    bufp->fullIData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__i),32);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+967,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+968,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+969,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),3);
    bufp->fullIData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_paddr),32);
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_psel));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pwrite));
    bufp->fullIData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pwdata),32);
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pready));
    bufp->fullIData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_prdata),32);
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__sync_reg));
    bufp->fullSData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullSData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullIData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__cnt),21);
    bufp->fullBit(oldp+1019,(((0x90U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt)) 
                              & (0x310U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt)))));
    bufp->fullBit(oldp+1020,(((0x23U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt)) 
                              & (0x203U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt)))));
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_state),2);
    bufp->fullIData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullIData(oldp+1023,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_state))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__isn_empty)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo
                                    [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__r_ptr]
                                     : 0U) : 0U)),32);
    bufp->fullIData(oldp+1024,((0x3440U | (((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state)) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready) 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable))) 
                                           << 8U))),32);
    bufp->fullBit(oldp+1025,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable)))));
    bufp->fullSData(oldp+1026,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1028,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1029,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1030,((IData)(((0U == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))))));
    bufp->fullCData(oldp+1031,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullIData(oldp+1032,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1033,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_psel) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite))
                                 ? 0xfU : 0U)),4);
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+1035,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1036,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_state))));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+1038,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+1040,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 4U))));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_state),2);
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+1045,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                         ? (1U & (0xebU 
                                                  >> 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                         : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                             ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                >> 0x14U)
                                             : ((9U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                 ? 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0x10U)
                                                 : 
                                                ((0xaU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 0xcU)
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 8U)
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 4U)
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                     : 0U))))))))),4);
    bufp->fullBit(oldp+1046,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+1049,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+1050,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+1055,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                       >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+1059,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+1074,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+1075,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+1077,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                  >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+1078,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U))));
    bufp->fullBit(oldp+1079,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+1080,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+1081,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+1089,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
    bufp->fullSData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready));
    bufp->fullIData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata),32);
    bufp->fullSData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+1124,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U))));
    bufp->fullBit(oldp+1125,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xaU))));
    bufp->fullCData(oldp+1126,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+1127,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 8U))));
    bufp->fullBit(oldp+1128,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1129,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1130,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+1134,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+1136,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+1137,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+1139,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                             - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                             - (IData)(1U))))),8);
    bufp->fullCData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+1143,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1144,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+1146,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 1U))));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+1164,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                    >> 7U))));
    bufp->fullBit(oldp+1165,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 4U))));
    bufp->fullBit(oldp+1166,((IData)((0x10U != (0x12U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1167,((IData)((0x11U == (0x11U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1168,((IData)((0x14U == (0x14U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1169,((IData)((0x18U == (0x18U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+1170,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                               << 5U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+1173,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1174,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+1175,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+1194,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [1U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [2U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [3U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [4U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [5U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [6U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [7U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [8U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [9U] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xaU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xbU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xcU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xdU] 
                                                                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+1201,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+1220,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+1221,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+1222,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+1223,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+1224,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1243,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1244,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1245,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1246,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1247,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1249,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1268,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1285,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1296,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+1297,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullSData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1302,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout),16);
    bufp->fullCData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__brust_len),3);
    bufp->fullCData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank),2);
    bufp->fullCData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_cnt),4);
    bufp->fullCData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_cnt),4);
    bufp->fullBit(oldp+1310,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag));
    bufp->fullSData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_addr),9);
    bufp->fullSData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_addr),9);
    bufp->fullSData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_data),16);
    bufp->fullIData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Length),4);
    bufp->fullSData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1321,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__dout),16);
    bufp->fullCData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__brust_len),3);
    bufp->fullCData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__L_Bank),2);
    bufp->fullCData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__r_cnt),4);
    bufp->fullCData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__w_cnt),4);
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__read_flag));
    bufp->fullSData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__r_addr),9);
    bufp->fullSData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__w_addr),9);
    bufp->fullSData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__w_data),16);
    bufp->fullIData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__Length),4);
    bufp->fullSData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1340,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout),16);
    bufp->fullCData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__brust_len),3);
    bufp->fullCData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank),2);
    bufp->fullCData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_cnt),4);
    bufp->fullCData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_cnt),4);
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag));
    bufp->fullSData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_addr),9);
    bufp->fullSData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_addr),9);
    bufp->fullSData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_data),16);
    bufp->fullIData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Length),4);
    bufp->fullSData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1358,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1359,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__dout),16);
    bufp->fullCData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__brust_len),3);
    bufp->fullCData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__L_Bank),2);
    bufp->fullCData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__r_cnt),4);
    bufp->fullCData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__w_cnt),4);
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__read_flag));
    bufp->fullSData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__r_addr),9);
    bufp->fullSData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__w_addr),9);
    bufp->fullSData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__w_data),16);
    bufp->fullIData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__Length),4);
    bufp->fullCData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1379,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullCData(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+1385,((IData)(((0x20000000U 
                                       == (0x30000000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel)))));
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1387,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+1388,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+1389,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+1390,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+1392,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____VdfgTmp_h430db664__0
                                 : 0U)),32);
    bufp->fullBit(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1396,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1399,(0U));
    bufp->fullBit(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1402,((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1405,((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullCData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+1407,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullIData(oldp+1408,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__wen));
    bufp->fullBit(oldp+1410,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready))));
    bufp->fullIData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__wdata),32);
    bufp->fullCData(oldp+1412,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullIData(oldp+1418,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1419,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+1420,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullIData(oldp+1421,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+1422,(((0x10001000U <= (0x3fffffffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                              & (0x10001fffU >= (0x3fffffffU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullBit(oldp+1423,(((0x30000000U <= (0x3fffffffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                              & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)))));
    bufp->fullBit(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel));
    bufp->fullIData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr),32);
    bufp->fullBit(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_psel));
    bufp->fullBit(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_penable));
    bufp->fullCData(oldp+1428,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                                 ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                                          ? 1U : 0U))),3);
    bufp->fullBit(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite));
    bufp->fullIData(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata),32);
    bufp->fullCData(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb),4);
    bufp->fullBit(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel));
    bufp->fullCData(oldp+1433,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)),5);
    bufp->fullBit(oldp+1434,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))));
    bufp->fullBit(oldp+1435,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))));
    bufp->fullCData(oldp+1436,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                  & (0xcU == (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
                                 << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (8U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                & (4U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
                                               << 1U) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                 & (0U 
                                                    == 
                                                    (0x1cU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))))))),4);
    bufp->fullBit(oldp+1437,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))));
    bufp->fullCData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1439,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullBit(oldp+1442,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1443,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullBit(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullIData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata),32);
    bufp->fullCData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp),2);
    bufp->fullBit(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1457,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1458,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullCData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullIData(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullBit(oldp+1487,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1488,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1489,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1490,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullCData(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullSData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullCData(oldp+1501,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullCData(oldp+1502,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))),3);
    bufp->fullCData(oldp+1503,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullIData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1505,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullSData(oldp+1506,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullCData(oldp+1507,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0)
                                 ? 0xfU : 0U)),4);
    bufp->fullCData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt),8);
    bufp->fullCData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_in),8);
    bufp->fullCData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_out),8);
    bufp->fullCData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt),3);
    bufp->fullBit(oldp+1515,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__receiving));
    bufp->fullBit(oldp+1516,(vlSelf->clock));
    bufp->fullBit(oldp+1517,(vlSelf->reset));
    bufp->fullSData(oldp+1518,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1519,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1520,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1521,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1522,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1523,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1524,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1525,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1526,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1527,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1528,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1529,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1530,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1531,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1532,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1533,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1534,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1535,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1536,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1537,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1538,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1539,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->fullBit(oldp+1541,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1542,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullBit(oldp+1543,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1544,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1545,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pready)
                                         : 0U)))));
    bufp->fullIData(oldp+1546,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_prdata
                                     : 0U))),32);
    bufp->fullIData(oldp+1547,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullQData(oldp+1548,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                                 << 0x23U) | (((QData)((IData)(
                                                               ((1U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                               << 3U) 
                                              | (QData)((IData)(
                                                                (1U 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold) 
                                                                    << 1U))))))),39);
    bufp->fullQData(oldp+1550,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullQData(oldp+1552,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullQData(oldp+1554,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1556,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullBit(oldp+1557,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullCData(oldp+1558,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                 ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                          | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                               << 0x1eU) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                     << 0x1aU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                              << 0x14U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                 << 0x12U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                    << 0x10U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                       << 0xeU) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                          << 0xcU) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                             << 0xaU) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                    << 1U)))))
                                 : 0U)),2);
    bufp->fullBit(oldp+1559,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
    bufp->fullBit(oldp+1560,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    bufp->fullBit(oldp+1561,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1562,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1563,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready))
                                 ? (0x20U | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen)) 
                                              << 4U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid)))
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready))
                                     ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen)) 
                                         << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid))
                                     : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w) 
                                         << 5U) | (
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->fullBit(oldp+1564,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1566,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1568,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1570,((vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h2a2074af__0 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1571,(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE));
    bufp->fullIData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullIData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullIData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap),32);
    bufp->fullIData(oldp+1575,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                    >> 0x18U))))),32);
    bufp->fullCData(oldp+1576,(1U),3);
    bufp->fullBit(oldp+1577,(0U));
    bufp->fullIData(oldp+1578,(0U),32);
    bufp->fullBit(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1580,(1U));
    bufp->fullCData(oldp+1581,(0U),2);
    bufp->fullIData(oldp+1582,(0U),32);
    bufp->fullCData(oldp+1583,(0U),4);
    bufp->fullCData(oldp+1584,(0U),8);
    bufp->fullCData(oldp+1585,(0U),3);
    bufp->fullCData(oldp+1586,(1U),4);
    bufp->fullCData(oldp+1587,(1U),2);
    bufp->fullCData(oldp+1588,(2U),2);
    bufp->fullSData(oldp+1589,(0x200U),16);
    bufp->fullIData(oldp+1590,(0x20U),32);
    bufp->fullBit(oldp+1591,(0U));
    bufp->fullBit(oldp+1592,(1U));
    bufp->fullCData(oldp+1593,(3U),2);
    bufp->fullIData(oldp+1594,(0x100fU),32);
    bufp->fullCData(oldp+1595,(0x6fU),7);
    bufp->fullCData(oldp+1596,(2U),3);
    bufp->fullIData(oldp+1597,(0x10U),32);
    bufp->fullIData(oldp+1598,(1U),32);
    bufp->fullIData(oldp+1599,(4U),32);
    bufp->fullIData(oldp+1600,(0x1cU),32);
    bufp->fullIData(oldp+1601,(0xa0000000U),32);
    bufp->fullIData(oldp+1602,(0xbfffffffU),32);
    bufp->fullIData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__idx),32);
    bufp->fullIData(oldp+1604,(0xbU),32);
    bufp->fullSData(oldp+1605,(0x300U),12);
    bufp->fullSData(oldp+1606,(0x305U),12);
    bufp->fullSData(oldp+1607,(0x341U),12);
    bufp->fullSData(oldp+1608,(0x342U),12);
    bufp->fullCData(oldp+1609,(4U),3);
    bufp->fullCData(oldp+1610,(0x1bU),8);
    bufp->fullCData(oldp+1611,(0xebU),8);
    bufp->fullCData(oldp+1612,(0x38U),8);
    bufp->fullIData(oldp+1613,(0x64U),32);
    bufp->fullIData(oldp+1614,(0x18U),32);
    bufp->fullIData(oldp+1615,(9U),32);
    bufp->fullIData(oldp+1616,(2U),32);
    bufp->fullIData(oldp+1617,(6U),32);
    bufp->fullIData(oldp+1618,(3U),32);
    bufp->fullIData(oldp+1619,(8U),32);
    bufp->fullIData(oldp+1620,(0xdU),32);
    bufp->fullIData(oldp+1621,(0x2000U),32);
    bufp->fullIData(oldp+1622,(0x2710U),32);
    bufp->fullIData(oldp+1623,(0x30cU),32);
    bufp->fullCData(oldp+1624,(7U),4);
    bufp->fullCData(oldp+1625,(3U),4);
    bufp->fullCData(oldp+1626,(5U),4);
    bufp->fullCData(oldp+1627,(4U),4);
    bufp->fullCData(oldp+1628,(6U),4);
    bufp->fullCData(oldp+1629,(2U),4);
    bufp->fullSData(oldp+1630,(0x20U),13);
    bufp->fullCData(oldp+1631,(8U),4);
    bufp->fullCData(oldp+1632,(9U),4);
    bufp->fullIData(oldp+1633,(0xaU),32);
    bufp->fullIData(oldp+1634,(0x11U),32);
    bufp->fullIData(oldp+1635,(0x30000000U),32);
    bufp->fullIData(oldp+1636,(0x3fffffffU),32);
    bufp->fullIData(oldp+1637,(0x10001000U),32);
    bufp->fullIData(oldp+1638,(0x10001fffU),32);
    bufp->fullCData(oldp+1639,(3U),3);
    bufp->fullCData(oldp+1640,(5U),3);
    bufp->fullCData(oldp+1641,(6U),3);
    bufp->fullCData(oldp+1642,(7U),3);
    bufp->fullCData(oldp+1643,(0x40U),7);
    bufp->fullCData(oldp+1644,(0xaU),4);
    bufp->fullIData(oldp+1645,(0xbU),32);
    bufp->fullIData(oldp+1646,(5U),32);
    bufp->fullIData(oldp+1647,(0x200000U),32);
    bufp->fullIData(oldp+1648,(0x60U),32);
    bufp->fullIData(oldp+1649,(0x90U),32);
    bufp->fullIData(oldp+1650,(0x310U),32);
    bufp->fullIData(oldp+1651,(0x320U),32);
    bufp->fullIData(oldp+1652,(0x23U),32);
    bufp->fullIData(oldp+1653,(0x203U),32);
    bufp->fullIData(oldp+1654,(0x20dU),32);
    bufp->fullIData(oldp+1655,(0x211ffff4U),32);
    bufp->fullCData(oldp+1656,(0x35U),8);
    bufp->fullIData(oldp+1657,(0x400000U),32);
}
