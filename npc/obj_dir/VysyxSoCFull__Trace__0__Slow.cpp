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
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBus(c+1548,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1549,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1550,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1551,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1552,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1553,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1554,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1555,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1556,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1557,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1558,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1559,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1560,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1561,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1562,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1563,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1564,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1565,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1566,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1567,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBus(c+1548,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1549,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1550,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1551,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1552,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1553,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1554,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1555,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1556,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1557,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1558,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1559,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1560,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1561,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1562,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1563,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1564,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1565,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1566,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1567,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+1005,"spi_sck", false,-1);
    tracep->declBus(c+1006,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1568,"spi_mosi", false,-1);
    tracep->declBit(c+1569,"spi_miso", false,-1);
    tracep->declBit(c+1566,"uart_rx", false,-1);
    tracep->declBit(c+1567,"uart_tx", false,-1);
    tracep->declBit(c+1468,"psram_sck", false,-1);
    tracep->declBit(c+1469,"psram_ce_n", false,-1);
    tracep->declBus(c+1570,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1571,"sdram_clk", false,-1);
    tracep->declBit(c+1512,"sdram_cke", false,-1);
    tracep->declBit(c+1513,"sdram_cs", false,-1);
    tracep->declBit(c+1514,"sdram_ras", false,-1);
    tracep->declBit(c+1515,"sdram_cas", false,-1);
    tracep->declBit(c+1516,"sdram_we", false,-1);
    tracep->declBus(c+1572,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1517,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1518,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1530,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1548,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1549,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1550,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1551,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1552,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1553,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1554,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1555,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1556,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1557,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1558,"ps2_clk", false,-1);
    tracep->declBit(c+1559,"ps2_data", false,-1);
    tracep->declBus(c+1560,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1561,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1562,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1563,"vga_hsync", false,-1);
    tracep->declBit(c+1564,"vga_vsync", false,-1);
    tracep->declBit(c+1565,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBus(c+1374,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1375,"in_psel", false,-1);
    tracep->declBit(c+264,"in_penable", false,-1);
    tracep->declBus(c+1608,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1376,"in_pwrite", false,-1);
    tracep->declBus(c+265,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1470,"in_pready", false,-1);
    tracep->declBus(c+1471,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1378,"in_pslverr", false,-1);
    tracep->declBus(c+1374,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1375,"out_psel", false,-1);
    tracep->declBit(c+264,"out_penable", false,-1);
    tracep->declBus(c+1608,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1376,"out_pwrite", false,-1);
    tracep->declBus(c+265,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1470,"out_pready", false,-1);
    tracep->declBus(c+1471,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1378,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1375,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+264,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1376,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1374,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+265,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1470,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1378,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1471,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1379,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1380,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1376,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1381,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1608,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+265,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+266,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1609,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1610,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1382,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+999,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1376,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1383,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1608,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+265,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1007,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1609,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+994,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1384,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1000,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1376,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1383,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1608,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+265,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1385,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1611,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1386,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1387,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1001,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1376,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1374,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+265,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1573,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1609,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+267,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1388,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1389,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1376,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1383,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1608,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+265,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1390,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1609,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1574,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1391,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1392,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1376,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1381,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1608,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+265,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1575,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1393,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1576,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1394,"sel_0", false,-1);
    tracep->declBit(c+1395,"sel_1", false,-1);
    tracep->declBit(c+1396,"sel_2", false,-1);
    tracep->declBit(c+1397,"sel_3", false,-1);
    tracep->declBit(c+1398,"sel_4", false,-1);
    tracep->declBit(c+1399,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+268,"auto_in_awready", false,-1);
    tracep->declBit(c+269,"auto_in_awvalid", false,-1);
    tracep->declBus(c+270,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+271,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+272,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+273,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+268,"auto_in_wready", false,-1);
    tracep->declBit(c+274,"auto_in_wvalid", false,-1);
    tracep->declBus(c+275,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+276,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+277,"auto_in_bready", false,-1);
    tracep->declBit(c+1472,"auto_in_bvalid", false,-1);
    tracep->declBus(c+278,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1400,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+279,"auto_in_arready", false,-1);
    tracep->declBit(c+280,"auto_in_arvalid", false,-1);
    tracep->declBus(c+281,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+282,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+283,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+284,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+285,"auto_in_rready", false,-1);
    tracep->declBit(c+1473,"auto_in_rvalid", false,-1);
    tracep->declBus(c+286,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1577,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1400,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1375,"auto_out_psel", false,-1);
    tracep->declBit(c+264,"auto_out_penable", false,-1);
    tracep->declBit(c+1376,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1374,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+265,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1470,"auto_out_pready", false,-1);
    tracep->declBit(c+1378,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1471,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+264,"nodeOut_penable", false,-1);
    tracep->declBus(c+287,"state", false,-1, 1,0);
    tracep->declBit(c+279,"accept_read", false,-1);
    tracep->declBit(c+268,"accept_write", false,-1);
    tracep->declBit(c+288,"is_write_r", false,-1);
    tracep->declBit(c+1376,"is_write", false,-1);
    tracep->declBus(c+286,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+278,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+289,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+290,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+291,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+292,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1401,"resp", false,-1, 1,0);
    tracep->declBus(c+293,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1400,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1473,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+294,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1472,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+295,"auto_in_awready", false,-1);
    tracep->declBit(c+37,"auto_in_awvalid", false,-1);
    tracep->declBus(c+38,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+39,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+40,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+296,"auto_in_wready", false,-1);
    tracep->declBit(c+42,"auto_in_wvalid", false,-1);
    tracep->declBus(c+43,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+44,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+45,"auto_in_wlast", false,-1);
    tracep->declBit(c+1,"auto_in_bready", false,-1);
    tracep->declBit(c+297,"auto_in_bvalid", false,-1);
    tracep->declBus(c+298,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+299,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+300,"auto_in_arready", false,-1);
    tracep->declBit(c+168,"auto_in_arvalid", false,-1);
    tracep->declBus(c+169,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+170,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+171,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+172,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+2,"auto_in_rready", false,-1);
    tracep->declBit(c+301,"auto_in_rvalid", false,-1);
    tracep->declBus(c+302,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+303,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+304,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+305,"auto_in_rlast", false,-1);
    tracep->declBit(c+268,"auto_out_awready", false,-1);
    tracep->declBit(c+269,"auto_out_awvalid", false,-1);
    tracep->declBus(c+270,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+271,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+272,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+273,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+268,"auto_out_wready", false,-1);
    tracep->declBit(c+274,"auto_out_wvalid", false,-1);
    tracep->declBus(c+275,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+276,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+277,"auto_out_bready", false,-1);
    tracep->declBit(c+1472,"auto_out_bvalid", false,-1);
    tracep->declBus(c+278,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1400,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+279,"auto_out_arready", false,-1);
    tracep->declBit(c+280,"auto_out_arvalid", false,-1);
    tracep->declBus(c+281,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+282,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+283,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+284,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+285,"auto_out_rready", false,-1);
    tracep->declBit(c+1473,"auto_out_rvalid", false,-1);
    tracep->declBus(c+286,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1577,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1400,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+277,"io_enq_ready", false,-1);
    tracep->declBit(c+1472,"io_enq_valid", false,-1);
    tracep->declBus(c+278,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1400,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+1,"io_deq_ready", false,-1);
    tracep->declBit(c+297,"io_deq_valid", false,-1);
    tracep->declBus(c+298,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+299,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+306,"wrap", false,-1);
    tracep->declBit(c+307,"wrap_1", false,-1);
    tracep->declBit(c+308,"maybe_full", false,-1);
    tracep->declBit(c+309,"ptr_match", false,-1);
    tracep->declBit(c+310,"empty", false,-1);
    tracep->declBit(c+311,"full", false,-1);
    tracep->declBit(c+1474,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+307,"R0_addr", false,-1);
    tracep->declBit(c+1612,"R0_en", false,-1);
    tracep->declBit(c+1546,"R0_clk", false,-1);
    tracep->declBus(c+312,"R0_data", false,-1, 5,0);
    tracep->declBit(c+306,"W0_addr", false,-1);
    tracep->declBit(c+1474,"W0_en", false,-1);
    tracep->declBit(c+1546,"W0_clk", false,-1);
    tracep->declBus(c+1002,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+313+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+315,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+285,"io_enq_ready", false,-1);
    tracep->declBit(c+1473,"io_enq_valid", false,-1);
    tracep->declBus(c+286,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1577,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1400,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+2,"io_deq_ready", false,-1);
    tracep->declBit(c+301,"io_deq_valid", false,-1);
    tracep->declBus(c+302,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+303,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+304,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+305,"io_deq_bits_last", false,-1);
    tracep->declBit(c+316,"wrap", false,-1);
    tracep->declBit(c+317,"wrap_1", false,-1);
    tracep->declBit(c+318,"maybe_full", false,-1);
    tracep->declBit(c+319,"ptr_match", false,-1);
    tracep->declBit(c+320,"empty", false,-1);
    tracep->declBit(c+321,"full", false,-1);
    tracep->declBit(c+1475,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+317,"R0_addr", false,-1);
    tracep->declBit(c+1612,"R0_en", false,-1);
    tracep->declBit(c+1546,"R0_clk", false,-1);
    tracep->declQuad(c+322,"R0_data", false,-1, 38,0);
    tracep->declBit(c+316,"W0_addr", false,-1);
    tracep->declBit(c+1475,"W0_en", false,-1);
    tracep->declBit(c+1546,"W0_clk", false,-1);
    tracep->declQuad(c+1578,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+324+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+328,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+300,"io_enq_ready", false,-1);
    tracep->declBit(c+168,"io_enq_valid", false,-1);
    tracep->declBus(c+169,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+170,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+171,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+172,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+279,"io_deq_ready", false,-1);
    tracep->declBit(c+280,"io_deq_valid", false,-1);
    tracep->declBus(c+281,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+282,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+283,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+284,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+329,"wrap", false,-1);
    tracep->declBit(c+330,"wrap_1", false,-1);
    tracep->declBit(c+331,"maybe_full", false,-1);
    tracep->declBit(c+332,"ptr_match", false,-1);
    tracep->declBit(c+333,"empty", false,-1);
    tracep->declBit(c+334,"full", false,-1);
    tracep->declBit(c+173,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+330,"R0_addr", false,-1);
    tracep->declBit(c+1612,"R0_en", false,-1);
    tracep->declBit(c+1546,"R0_clk", false,-1);
    tracep->declQuad(c+335,"R0_data", false,-1, 46,0);
    tracep->declBit(c+329,"W0_addr", false,-1);
    tracep->declBit(c+173,"W0_en", false,-1);
    tracep->declBit(c+1546,"W0_clk", false,-1);
    tracep->declQuad(c+174,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+337+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+341,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+295,"io_enq_ready", false,-1);
    tracep->declBit(c+37,"io_enq_valid", false,-1);
    tracep->declBus(c+38,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+39,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+40,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+41,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+268,"io_deq_ready", false,-1);
    tracep->declBit(c+269,"io_deq_valid", false,-1);
    tracep->declBus(c+270,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+271,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+272,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+273,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+342,"wrap", false,-1);
    tracep->declBit(c+343,"wrap_1", false,-1);
    tracep->declBit(c+344,"maybe_full", false,-1);
    tracep->declBit(c+345,"ptr_match", false,-1);
    tracep->declBit(c+346,"empty", false,-1);
    tracep->declBit(c+347,"full", false,-1);
    tracep->declBit(c+46,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+343,"R0_addr", false,-1);
    tracep->declBit(c+1612,"R0_en", false,-1);
    tracep->declBit(c+1546,"R0_clk", false,-1);
    tracep->declQuad(c+348,"R0_data", false,-1, 46,0);
    tracep->declBit(c+342,"W0_addr", false,-1);
    tracep->declBit(c+46,"W0_en", false,-1);
    tracep->declBit(c+1546,"W0_clk", false,-1);
    tracep->declQuad(c+47,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+350+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+354,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+296,"io_enq_ready", false,-1);
    tracep->declBit(c+42,"io_enq_valid", false,-1);
    tracep->declBus(c+43,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+44,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+45,"io_enq_bits_last", false,-1);
    tracep->declBit(c+268,"io_deq_ready", false,-1);
    tracep->declBit(c+274,"io_deq_valid", false,-1);
    tracep->declBus(c+275,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+276,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+355,"wrap", false,-1);
    tracep->declBit(c+356,"wrap_1", false,-1);
    tracep->declBit(c+357,"maybe_full", false,-1);
    tracep->declBit(c+358,"ptr_match", false,-1);
    tracep->declBit(c+359,"empty", false,-1);
    tracep->declBit(c+360,"full", false,-1);
    tracep->declBit(c+49,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+356,"R0_addr", false,-1);
    tracep->declBit(c+1612,"R0_en", false,-1);
    tracep->declBit(c+1546,"R0_clk", false,-1);
    tracep->declQuad(c+361,"R0_data", false,-1, 35,0);
    tracep->declBit(c+355,"W0_addr", false,-1);
    tracep->declBit(c+49,"W0_en", false,-1);
    tracep->declBit(c+1546,"W0_clk", false,-1);
    tracep->declQuad(c+50,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+363+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+367,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+231,"in_arready", false,-1);
    tracep->declBit(c+176,"in_arvalid", false,-1);
    tracep->declBus(c+177,"in_arid", false,-1, 3,0);
    tracep->declBus(c+178,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+3,"in_rready", false,-1);
    tracep->declBit(c+1008,"in_rvalid", false,-1);
    tracep->declBus(c+1009,"in_rid", false,-1, 3,0);
    tracep->declBus(c+1010,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1613,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+1011,"in_rlast", false,-1);
    tracep->declBit(c+232,"in_awready", false,-1);
    tracep->declBit(c+52,"in_awvalid", false,-1);
    tracep->declBus(c+53,"in_awid", false,-1, 3,0);
    tracep->declBus(c+54,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+55,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+56,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+57,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+233,"in_wready", false,-1);
    tracep->declBit(c+58,"in_wvalid", false,-1);
    tracep->declBus(c+59,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+60,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"in_wlast", false,-1);
    tracep->declBit(c+1580,"in_bready", false,-1);
    tracep->declBit(c+1012,"in_bvalid", false,-1);
    tracep->declBus(c+1009,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1613,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+231,"out_arready", false,-1);
    tracep->declBit(c+176,"out_arvalid", false,-1);
    tracep->declBus(c+177,"out_arid", false,-1, 3,0);
    tracep->declBus(c+178,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+3,"out_rready", false,-1);
    tracep->declBit(c+1008,"out_rvalid", false,-1);
    tracep->declBus(c+1009,"out_rid", false,-1, 3,0);
    tracep->declBus(c+1010,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1613,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+1011,"out_rlast", false,-1);
    tracep->declBit(c+232,"out_awready", false,-1);
    tracep->declBit(c+52,"out_awvalid", false,-1);
    tracep->declBus(c+53,"out_awid", false,-1, 3,0);
    tracep->declBus(c+54,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+55,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+56,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+57,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+233,"out_wready", false,-1);
    tracep->declBit(c+58,"out_wvalid", false,-1);
    tracep->declBus(c+59,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+60,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"out_wlast", false,-1);
    tracep->declBit(c+1580,"out_bready", false,-1);
    tracep->declBit(c+1012,"out_bvalid", false,-1);
    tracep->declBus(c+1009,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1613,"out_bresp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+368,"auto_in_awready", false,-1);
    tracep->declBit(c+62,"auto_in_awvalid", false,-1);
    tracep->declBus(c+53,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+54,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+55,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+56,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+57,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+369,"auto_in_wready", false,-1);
    tracep->declBit(c+63,"auto_in_wvalid", false,-1);
    tracep->declBus(c+59,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+60,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"auto_in_wlast", false,-1);
    tracep->declBit(c+1581,"auto_in_bready", false,-1);
    tracep->declBit(c+370,"auto_in_bvalid", false,-1);
    tracep->declBus(c+371,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+372,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+373,"auto_in_arready", false,-1);
    tracep->declBit(c+182,"auto_in_arvalid", false,-1);
    tracep->declBus(c+177,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+125,"auto_in_rready", false,-1);
    tracep->declBit(c+374,"auto_in_rvalid", false,-1);
    tracep->declBus(c+375,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+376,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+377,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+378,"auto_in_rlast", false,-1);
    tracep->declBit(c+126,"auto_out_awready", false,-1);
    tracep->declBit(c+64,"auto_out_awvalid", false,-1);
    tracep->declBus(c+38,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+39,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+40,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+65,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+127,"auto_out_wready", false,-1);
    tracep->declBit(c+66,"auto_out_wvalid", false,-1);
    tracep->declBus(c+43,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+44,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+45,"auto_out_wlast", false,-1);
    tracep->declBit(c+128,"auto_out_bready", false,-1);
    tracep->declBit(c+379,"auto_out_bvalid", false,-1);
    tracep->declBus(c+371,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+380,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+381,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+234,"auto_out_arready", false,-1);
    tracep->declBit(c+183,"auto_out_arvalid", false,-1);
    tracep->declBus(c+169,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+170,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+171,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+172,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+184,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+125,"auto_out_rready", false,-1);
    tracep->declBit(c+374,"auto_out_rvalid", false,-1);
    tracep->declBus(c+375,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+376,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+377,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+382,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+383,"auto_out_rlast", false,-1);
    tracep->declBit(c+66,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+384,"w_idle", false,-1);
    tracep->declBit(c+129,"in_awready", false,-1);
    tracep->declBit(c+385,"busy", false,-1);
    tracep->declBus(c+386,"r_addr", false,-1, 31,0);
    tracep->declBus(c+387,"r_len", false,-1, 7,0);
    tracep->declBus(c+185,"len", false,-1, 7,0);
    tracep->declBus(c+186,"addr", false,-1, 31,0);
    tracep->declBit(c+388,"busy_1", false,-1);
    tracep->declBus(c+389,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+390,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+67,"len_1", false,-1, 7,0);
    tracep->declBus(c+68,"addr_1", false,-1, 31,0);
    tracep->declBit(c+391,"wbeats_latched", false,-1);
    tracep->declBit(c+64,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+69,"wbeats_valid", false,-1);
    tracep->declBus(c+392,"w_counter", false,-1, 8,0);
    tracep->declBus(c+70,"w_todo", false,-1, 8,0);
    tracep->declBit(c+45,"w_last", false,-1);
    tracep->declBit(c+128,"nodeOut_bready", false,-1);
    tracep->declBus(c+393,"error_0", false,-1, 1,0);
    tracep->declBus(c+394,"error_1", false,-1, 1,0);
    tracep->declBus(c+395,"error_2", false,-1, 1,0);
    tracep->declBus(c+396,"error_3", false,-1, 1,0);
    tracep->declBus(c+397,"error_4", false,-1, 1,0);
    tracep->declBus(c+398,"error_5", false,-1, 1,0);
    tracep->declBus(c+399,"error_6", false,-1, 1,0);
    tracep->declBus(c+400,"error_7", false,-1, 1,0);
    tracep->declBus(c+401,"error_8", false,-1, 1,0);
    tracep->declBus(c+402,"error_9", false,-1, 1,0);
    tracep->declBus(c+403,"error_10", false,-1, 1,0);
    tracep->declBus(c+404,"error_11", false,-1, 1,0);
    tracep->declBus(c+405,"error_12", false,-1, 1,0);
    tracep->declBus(c+406,"error_13", false,-1, 1,0);
    tracep->declBus(c+407,"error_14", false,-1, 1,0);
    tracep->declBus(c+408,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+373,"io_enq_ready", false,-1);
    tracep->declBit(c+182,"io_enq_valid", false,-1);
    tracep->declBus(c+177,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+178,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+179,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+180,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+181,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+235,"io_deq_ready", false,-1);
    tracep->declBit(c+183,"io_deq_valid", false,-1);
    tracep->declBus(c+169,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+187,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+188,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+171,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+172,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+409,"ram", false,-1, 48,0);
    tracep->declBit(c+411,"full", false,-1);
    tracep->declBit(c+183,"io_deq_valid_0", false,-1);
    tracep->declBit(c+236,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+368,"io_enq_ready", false,-1);
    tracep->declBit(c+62,"io_enq_valid", false,-1);
    tracep->declBus(c+53,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+54,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+55,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+56,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+57,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+130,"io_deq_ready", false,-1);
    tracep->declBit(c+71,"io_deq_valid", false,-1);
    tracep->declBus(c+38,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+72,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+73,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+40,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+41,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+412,"ram", false,-1, 48,0);
    tracep->declBit(c+414,"full", false,-1);
    tracep->declBit(c+71,"io_deq_valid_0", false,-1);
    tracep->declBit(c+131,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+369,"io_enq_ready", false,-1);
    tracep->declBit(c+63,"io_enq_valid", false,-1);
    tracep->declBus(c+59,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+60,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+61,"io_enq_bits_last", false,-1);
    tracep->declBit(c+132,"io_deq_ready", false,-1);
    tracep->declBit(c+74,"io_deq_valid", false,-1);
    tracep->declBus(c+43,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+44,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1582,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+415,"ram", false,-1, 36,0);
    tracep->declBit(c+417,"full", false,-1);
    tracep->declBit(c+74,"io_deq_valid_0", false,-1);
    tracep->declBit(c+133,"do_enq", false,-1);
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
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+134,"auto_in_awready", false,-1);
    tracep->declBit(c+75,"auto_in_awvalid", false,-1);
    tracep->declBus(c+38,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+76,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+108,"auto_in_wready", false,-1);
    tracep->declBit(c+77,"auto_in_wvalid", false,-1);
    tracep->declBus(c+43,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+44,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+135,"auto_in_bready", false,-1);
    tracep->declBit(c+418,"auto_in_bvalid", false,-1);
    tracep->declBus(c+419,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+420,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+136,"auto_in_arready", false,-1);
    tracep->declBit(c+189,"auto_in_arvalid", false,-1);
    tracep->declBus(c+169,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+137,"auto_in_rready", false,-1);
    tracep->declBit(c+421,"auto_in_rvalid", false,-1);
    tracep->declBus(c+422,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+423,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+424,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+136,"nodeIn_arready", false,-1);
    tracep->declBit(c+134,"nodeIn_awready", false,-1);
    tracep->declBit(c+78,"w_sel0", false,-1);
    tracep->declBit(c+418,"w_full", false,-1);
    tracep->declBus(c+419,"w_id", false,-1, 3,0);
    tracep->declBit(c+425,"r_sel1", false,-1);
    tracep->declBit(c+426,"w_sel1", false,-1);
    tracep->declBit(c+421,"r_full", false,-1);
    tracep->declBus(c+422,"r_id", false,-1, 3,0);
    tracep->declBit(c+237,"ren", false,-1);
    tracep->declBit(c+427,"rdata_REG", false,-1);
    tracep->declBus(c+428,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+429,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+430,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+431,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+191,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+237,"R0_en", false,-1);
    tracep->declBit(c+1546,"R0_clk", false,-1);
    tracep->declBus(c+432,"R0_data", false,-1, 31,0);
    tracep->declBus(c+79,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+138,"W0_en", false,-1);
    tracep->declBit(c+1546,"W0_clk", false,-1);
    tracep->declBus(c+43,"W0_data", false,-1, 31,0);
    tracep->declBus(c+44,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+238,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+80,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+53,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+54,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+55,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+56,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+57,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1583,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+81,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+59,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+60,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+82,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1476,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1477,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1584,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+239,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+192,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+177,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+139,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1478,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1479,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1480,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1481,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1482,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+232,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+52,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+53,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+54,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+55,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+56,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+57,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+233,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+58,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+59,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+60,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1580,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+1012,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+1009,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+1613,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+231,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+176,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+177,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+3,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+1008,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+1009,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+1010,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1613,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+1011,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+368,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+62,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+53,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+54,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+55,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+56,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+57,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+369,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+63,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+59,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+60,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1581,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+370,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+371,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+372,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+373,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+182,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+177,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+125,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+374,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+375,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+376,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+377,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+378,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1476,"in_0_bvalid", false,-1);
    tracep->declBit(c+1478,"in_0_rvalid", false,-1);
    tracep->declBit(c+240,"in_0_wready", false,-1);
    tracep->declBit(c+241,"in_0_awready", false,-1);
    tracep->declBit(c+1585,"in_0_arready", false,-1);
    tracep->declBit(c+238,"anonIn_awready", false,-1);
    tracep->declBit(c+239,"anonIn_arready", false,-1);
    tracep->declBit(c+193,"requestARIO_0_0", false,-1);
    tracep->declBit(c+194,"requestARIO_0_1", false,-1);
    tracep->declBit(c+83,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+84,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+195,"arSel", false,-1, 15,0);
    tracep->declBus(c+85,"awSel", false,-1, 15,0);
    tracep->declBus(c+1483,"rSel", false,-1, 15,0);
    tracep->declBus(c+1484,"bSel", false,-1, 15,0);
    tracep->declBus(c+433,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+434,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+435,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+436,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+437,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+438,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+439,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+440,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+441,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+442,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+443,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+444,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+445,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+446,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+447,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+448,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+449,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+450,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+451,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+452,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+453,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+454,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+455,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+456,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+457,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+458,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+459,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+460,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+461,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+462,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+463,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+464,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+465,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+466,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+467,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+468,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+469,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+470,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+471,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+472,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+473,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+474,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+475,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+476,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+477,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+478,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+479,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+480,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+481,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+482,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+483,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+484,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+485,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+486,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+487,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+488,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+489,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+490,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+491,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+492,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+493,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+494,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+495,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+496,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+196,"in_0_arvalid", false,-1);
    tracep->declBit(c+497,"latched", false,-1);
    tracep->declBit(c+86,"in_0_awvalid", false,-1);
    tracep->declBit(c+87,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+88,"in_0_wvalid", false,-1);
    tracep->declBit(c+498,"idle_2", false,-1);
    tracep->declBit(c+1485,"anyValid", false,-1);
    tracep->declBus(c+1486,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+499,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1487,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1488,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1489,"prefixOR_1", false,-1);
    tracep->declBit(c+1490,"winner_2_1", false,-1);
    tracep->declBit(c+500,"state_2_0", false,-1);
    tracep->declBit(c+501,"state_2_1", false,-1);
    tracep->declBit(c+1491,"muxState_2_0", false,-1);
    tracep->declBit(c+1492,"muxState_2_1", false,-1);
    tracep->declBit(c+502,"idle_3", false,-1);
    tracep->declBit(c+1493,"anyValid_1", false,-1);
    tracep->declBus(c+1494,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+503,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1495,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1496,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1497,"winner_3_0", false,-1);
    tracep->declBit(c+1498,"winner_3_1", false,-1);
    tracep->declBit(c+504,"state_3_0", false,-1);
    tracep->declBit(c+505,"state_3_1", false,-1);
    tracep->declBit(c+1499,"muxState_3_0", false,-1);
    tracep->declBit(c+1586,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+506,"io_enq_ready", false,-1);
    tracep->declBit(c+87,"io_enq_valid", false,-1);
    tracep->declBus(c+89,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+242,"io_deq_ready", false,-1);
    tracep->declBit(c+90,"io_deq_valid", false,-1);
    tracep->declBus(c+91,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+507,"wrap", false,-1);
    tracep->declBit(c+508,"wrap_1", false,-1);
    tracep->declBit(c+509,"maybe_full", false,-1);
    tracep->declBit(c+510,"ptr_match", false,-1);
    tracep->declBit(c+511,"empty", false,-1);
    tracep->declBit(c+512,"full", false,-1);
    tracep->declBit(c+90,"io_deq_valid_0", false,-1);
    tracep->declBit(c+243,"do_deq", false,-1);
    tracep->declBit(c+244,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+508,"R0_addr", false,-1);
    tracep->declBit(c+1612,"R0_en", false,-1);
    tracep->declBit(c+1546,"R0_clk", false,-1);
    tracep->declBus(c+513,"R0_data", false,-1, 1,0);
    tracep->declBit(c+507,"W0_addr", false,-1);
    tracep->declBit(c+244,"W0_en", false,-1);
    tracep->declBit(c+1546,"W0_clk", false,-1);
    tracep->declBus(c+89,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+514+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+140,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+92,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+38,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+39,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+40,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+127,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+66,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+43,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+44,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+45,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+128,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+379,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+371,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+380,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+245,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+197,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+169,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+170,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+171,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+172,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+125,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+374,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+375,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+376,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+377,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+383,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+134,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+75,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+38,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+76,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+108,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+77,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+43,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+44,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+135,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+418,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+419,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+420,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+136,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+189,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+169,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+137,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+421,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+422,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+423,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+424,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+93,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+94,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+516,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+198,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+169,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+199,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+4,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+517,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+518,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+519,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+295,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+37,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+38,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+39,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+40,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+296,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+42,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+43,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+44,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+45,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+297,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+298,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+299,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+300,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+168,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+169,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+170,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+171,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+172,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+2,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+301,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+302,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+303,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+304,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+305,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+379,"in_0_bvalid", false,-1);
    tracep->declBit(c+374,"in_0_rvalid", false,-1);
    tracep->declBit(c+141,"in_0_wready", false,-1);
    tracep->declBit(c+142,"in_0_awready", false,-1);
    tracep->declBit(c+245,"in_0_arready", false,-1);
    tracep->declBit(c+140,"anonIn_awready", false,-1);
    tracep->declBit(c+200,"requestARIO_0_0", false,-1);
    tracep->declBit(c+201,"requestARIO_0_1", false,-1);
    tracep->declBit(c+202,"requestARIO_0_2", false,-1);
    tracep->declBit(c+95,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+96,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+97,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+203,"arSel", false,-1, 15,0);
    tracep->declBus(c+98,"awSel", false,-1, 15,0);
    tracep->declBus(c+520,"rSel", false,-1, 15,0);
    tracep->declBus(c+521,"bSel", false,-1, 15,0);
    tracep->declBit(c+522,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+523,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+524,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+525,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+526,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+527,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+528,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+529,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+530,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+531,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+532,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+533,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+534,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+535,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+536,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+537,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+538,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+539,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+540,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+541,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+542,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+543,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+544,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+545,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+546,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+547,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+548,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+549,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+550,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+551,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+552,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+553,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+554,"latched", false,-1);
    tracep->declBit(c+99,"in_0_awvalid", false,-1);
    tracep->declBit(c+100,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+101,"in_0_wvalid", false,-1);
    tracep->declBit(c+555,"idle_3", false,-1);
    tracep->declBit(c+556,"anyValid", false,-1);
    tracep->declBus(c+557,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+558,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+559,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+560,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+561,"prefixOR_1", false,-1);
    tracep->declBit(c+562,"winner_3_1", false,-1);
    tracep->declBit(c+563,"winner_3_2", false,-1);
    tracep->declBit(c+564,"state_3_0", false,-1);
    tracep->declBit(c+565,"state_3_1", false,-1);
    tracep->declBit(c+566,"state_3_2", false,-1);
    tracep->declBit(c+567,"muxState_3_0", false,-1);
    tracep->declBit(c+568,"muxState_3_1", false,-1);
    tracep->declBit(c+569,"muxState_3_2", false,-1);
    tracep->declBit(c+570,"idle_4", false,-1);
    tracep->declBit(c+571,"anyValid_1", false,-1);
    tracep->declBus(c+572,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+573,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+574,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+575,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+576,"winner_4_0", false,-1);
    tracep->declBit(c+577,"winner_4_2", false,-1);
    tracep->declBit(c+578,"state_4_0", false,-1);
    tracep->declBit(c+579,"state_4_2", false,-1);
    tracep->declBit(c+580,"muxState_4_0", false,-1);
    tracep->declBit(c+581,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+582,"io_enq_ready", false,-1);
    tracep->declBit(c+100,"io_enq_valid", false,-1);
    tracep->declBus(c+102,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+143,"io_deq_ready", false,-1);
    tracep->declBit(c+103,"io_deq_valid", false,-1);
    tracep->declBus(c+104,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+583,"wrap", false,-1);
    tracep->declBit(c+584,"wrap_1", false,-1);
    tracep->declBit(c+585,"maybe_full", false,-1);
    tracep->declBit(c+586,"ptr_match", false,-1);
    tracep->declBit(c+587,"empty", false,-1);
    tracep->declBit(c+588,"full", false,-1);
    tracep->declBit(c+103,"io_deq_valid_0", false,-1);
    tracep->declBit(c+144,"do_deq", false,-1);
    tracep->declBit(c+145,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+584,"R0_addr", false,-1);
    tracep->declBit(c+1612,"R0_en", false,-1);
    tracep->declBit(c+1546,"R0_clk", false,-1);
    tracep->declBus(c+589,"R0_data", false,-1, 2,0);
    tracep->declBit(c+583,"W0_addr", false,-1);
    tracep->declBit(c+145,"W0_en", false,-1);
    tracep->declBit(c+1546,"W0_clk", false,-1);
    tracep->declBus(c+102,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+590+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+126,"auto_in_awready", false,-1);
    tracep->declBit(c+64,"auto_in_awvalid", false,-1);
    tracep->declBus(c+38,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+39,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+40,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+65,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+127,"auto_in_wready", false,-1);
    tracep->declBit(c+66,"auto_in_wvalid", false,-1);
    tracep->declBus(c+43,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+44,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+45,"auto_in_wlast", false,-1);
    tracep->declBit(c+128,"auto_in_bready", false,-1);
    tracep->declBit(c+379,"auto_in_bvalid", false,-1);
    tracep->declBus(c+371,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+380,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+381,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+234,"auto_in_arready", false,-1);
    tracep->declBit(c+183,"auto_in_arvalid", false,-1);
    tracep->declBus(c+169,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+170,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+171,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+172,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+184,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+125,"auto_in_rready", false,-1);
    tracep->declBit(c+374,"auto_in_rvalid", false,-1);
    tracep->declBus(c+375,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+376,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+377,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+382,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+383,"auto_in_rlast", false,-1);
    tracep->declBit(c+140,"auto_out_awready", false,-1);
    tracep->declBit(c+92,"auto_out_awvalid", false,-1);
    tracep->declBus(c+38,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+39,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+40,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+127,"auto_out_wready", false,-1);
    tracep->declBit(c+66,"auto_out_wvalid", false,-1);
    tracep->declBus(c+43,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+44,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+45,"auto_out_wlast", false,-1);
    tracep->declBit(c+128,"auto_out_bready", false,-1);
    tracep->declBit(c+379,"auto_out_bvalid", false,-1);
    tracep->declBus(c+371,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+380,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+245,"auto_out_arready", false,-1);
    tracep->declBit(c+197,"auto_out_arvalid", false,-1);
    tracep->declBus(c+169,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+170,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+171,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+172,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+125,"auto_out_rready", false,-1);
    tracep->declBit(c+374,"auto_out_rvalid", false,-1);
    tracep->declBus(c+375,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+376,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+377,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+383,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+592,"io_enq_ready", false,-1);
    tracep->declBit(c+215,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+5,"io_deq_ready", false,-1);
    tracep->declBit(c+593,"io_deq_valid", false,-1);
    tracep->declBit(c+594,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+593,"full", false,-1);
    tracep->declBit(c+594,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+595,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+596,"io_enq_ready", false,-1);
    tracep->declBit(c+216,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+6,"io_deq_ready", false,-1);
    tracep->declBit(c+597,"io_deq_valid", false,-1);
    tracep->declBit(c+598,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+597,"full", false,-1);
    tracep->declBit(c+598,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+599,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+600,"io_enq_ready", false,-1);
    tracep->declBit(c+217,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+7,"io_deq_ready", false,-1);
    tracep->declBit(c+601,"io_deq_valid", false,-1);
    tracep->declBit(c+602,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+601,"full", false,-1);
    tracep->declBit(c+602,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+603,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+604,"io_enq_ready", false,-1);
    tracep->declBit(c+218,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+8,"io_deq_ready", false,-1);
    tracep->declBit(c+605,"io_deq_valid", false,-1);
    tracep->declBit(c+606,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+605,"full", false,-1);
    tracep->declBit(c+606,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+607,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+608,"io_enq_ready", false,-1);
    tracep->declBit(c+219,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+9,"io_deq_ready", false,-1);
    tracep->declBit(c+609,"io_deq_valid", false,-1);
    tracep->declBit(c+610,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+609,"full", false,-1);
    tracep->declBit(c+610,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+611,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+612,"io_enq_ready", false,-1);
    tracep->declBit(c+220,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+10,"io_deq_ready", false,-1);
    tracep->declBit(c+613,"io_deq_valid", false,-1);
    tracep->declBit(c+614,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+613,"full", false,-1);
    tracep->declBit(c+614,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+615,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+616,"io_enq_ready", false,-1);
    tracep->declBit(c+221,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+617,"io_deq_valid", false,-1);
    tracep->declBit(c+618,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+617,"full", false,-1);
    tracep->declBit(c+618,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+619,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+620,"io_enq_ready", false,-1);
    tracep->declBit(c+222,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+621,"io_deq_valid", false,-1);
    tracep->declBit(c+622,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+621,"full", false,-1);
    tracep->declBit(c+622,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+623,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+624,"io_enq_ready", false,-1);
    tracep->declBit(c+109,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+625,"io_deq_valid", false,-1);
    tracep->declBit(c+626,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+625,"full", false,-1);
    tracep->declBit(c+626,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+627,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+628,"io_enq_ready", false,-1);
    tracep->declBit(c+110,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+629,"io_deq_valid", false,-1);
    tracep->declBit(c+630,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+629,"full", false,-1);
    tracep->declBit(c+630,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+631,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+632,"io_enq_ready", false,-1);
    tracep->declBit(c+111,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+633,"io_deq_valid", false,-1);
    tracep->declBit(c+634,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+633,"full", false,-1);
    tracep->declBit(c+634,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+635,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+636,"io_enq_ready", false,-1);
    tracep->declBit(c+112,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+637,"io_deq_valid", false,-1);
    tracep->declBit(c+638,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+637,"full", false,-1);
    tracep->declBit(c+638,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+639,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+640,"io_enq_ready", false,-1);
    tracep->declBit(c+223,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+641,"io_deq_valid", false,-1);
    tracep->declBit(c+642,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+641,"full", false,-1);
    tracep->declBit(c+642,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+643,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+644,"io_enq_ready", false,-1);
    tracep->declBit(c+113,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+645,"io_deq_valid", false,-1);
    tracep->declBit(c+646,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+645,"full", false,-1);
    tracep->declBit(c+646,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+647,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+648,"io_enq_ready", false,-1);
    tracep->declBit(c+114,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+649,"io_deq_valid", false,-1);
    tracep->declBit(c+650,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+649,"full", false,-1);
    tracep->declBit(c+650,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+651,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+652,"io_enq_ready", false,-1);
    tracep->declBit(c+115,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+653,"io_deq_valid", false,-1);
    tracep->declBit(c+654,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+653,"full", false,-1);
    tracep->declBit(c+654,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+655,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+656,"io_enq_ready", false,-1);
    tracep->declBit(c+116,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+657,"io_deq_valid", false,-1);
    tracep->declBit(c+658,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+657,"full", false,-1);
    tracep->declBit(c+658,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+659,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+660,"io_enq_ready", false,-1);
    tracep->declBit(c+117,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+22,"io_deq_ready", false,-1);
    tracep->declBit(c+661,"io_deq_valid", false,-1);
    tracep->declBit(c+662,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+661,"full", false,-1);
    tracep->declBit(c+662,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+663,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+664,"io_enq_ready", false,-1);
    tracep->declBit(c+118,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+23,"io_deq_ready", false,-1);
    tracep->declBit(c+665,"io_deq_valid", false,-1);
    tracep->declBit(c+666,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+665,"full", false,-1);
    tracep->declBit(c+666,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+667,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+668,"io_enq_ready", false,-1);
    tracep->declBit(c+119,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+24,"io_deq_ready", false,-1);
    tracep->declBit(c+669,"io_deq_valid", false,-1);
    tracep->declBit(c+670,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+669,"full", false,-1);
    tracep->declBit(c+670,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+671,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+672,"io_enq_ready", false,-1);
    tracep->declBit(c+120,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+25,"io_deq_ready", false,-1);
    tracep->declBit(c+673,"io_deq_valid", false,-1);
    tracep->declBit(c+674,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+673,"full", false,-1);
    tracep->declBit(c+674,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+675,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+676,"io_enq_ready", false,-1);
    tracep->declBit(c+121,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+26,"io_deq_ready", false,-1);
    tracep->declBit(c+677,"io_deq_valid", false,-1);
    tracep->declBit(c+678,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+677,"full", false,-1);
    tracep->declBit(c+678,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+679,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+680,"io_enq_ready", false,-1);
    tracep->declBit(c+122,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+27,"io_deq_ready", false,-1);
    tracep->declBit(c+681,"io_deq_valid", false,-1);
    tracep->declBit(c+682,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+681,"full", false,-1);
    tracep->declBit(c+682,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+683,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+684,"io_enq_ready", false,-1);
    tracep->declBit(c+224,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+28,"io_deq_ready", false,-1);
    tracep->declBit(c+685,"io_deq_valid", false,-1);
    tracep->declBit(c+686,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+685,"full", false,-1);
    tracep->declBit(c+686,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+687,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+688,"io_enq_ready", false,-1);
    tracep->declBit(c+123,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+29,"io_deq_ready", false,-1);
    tracep->declBit(c+689,"io_deq_valid", false,-1);
    tracep->declBit(c+690,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+689,"full", false,-1);
    tracep->declBit(c+690,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+691,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+692,"io_enq_ready", false,-1);
    tracep->declBit(c+124,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+30,"io_deq_ready", false,-1);
    tracep->declBit(c+693,"io_deq_valid", false,-1);
    tracep->declBit(c+694,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+693,"full", false,-1);
    tracep->declBit(c+694,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+695,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+696,"io_enq_ready", false,-1);
    tracep->declBit(c+225,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+31,"io_deq_ready", false,-1);
    tracep->declBit(c+697,"io_deq_valid", false,-1);
    tracep->declBit(c+698,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+697,"full", false,-1);
    tracep->declBit(c+698,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+699,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+700,"io_enq_ready", false,-1);
    tracep->declBit(c+226,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+32,"io_deq_ready", false,-1);
    tracep->declBit(c+701,"io_deq_valid", false,-1);
    tracep->declBit(c+702,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+701,"full", false,-1);
    tracep->declBit(c+702,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+703,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+704,"io_enq_ready", false,-1);
    tracep->declBit(c+227,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+33,"io_deq_ready", false,-1);
    tracep->declBit(c+705,"io_deq_valid", false,-1);
    tracep->declBit(c+706,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+705,"full", false,-1);
    tracep->declBit(c+706,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+707,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+708,"io_enq_ready", false,-1);
    tracep->declBit(c+228,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+34,"io_deq_ready", false,-1);
    tracep->declBit(c+709,"io_deq_valid", false,-1);
    tracep->declBit(c+710,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+709,"full", false,-1);
    tracep->declBit(c+710,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+711,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+712,"io_enq_ready", false,-1);
    tracep->declBit(c+229,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+35,"io_deq_ready", false,-1);
    tracep->declBit(c+713,"io_deq_valid", false,-1);
    tracep->declBit(c+714,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+713,"full", false,-1);
    tracep->declBit(c+714,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+715,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+716,"io_enq_ready", false,-1);
    tracep->declBit(c+230,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+36,"io_deq_ready", false,-1);
    tracep->declBit(c+717,"io_deq_valid", false,-1);
    tracep->declBit(c+718,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+717,"full", false,-1);
    tracep->declBit(c+718,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+719,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+105,"reset", false,-1);
    tracep->declBit(c+238,"auto_master_out_awready", false,-1);
    tracep->declBit(c+80,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+53,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+54,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+55,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+56,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+57,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1583,"auto_master_out_wready", false,-1);
    tracep->declBit(c+81,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+59,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+60,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+82,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1476,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1477,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1584,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+239,"auto_master_out_arready", false,-1);
    tracep->declBit(c+192,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+177,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+139,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1478,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1479,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1480,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1481,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1482,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+105,"reset", false,-1);
    tracep->declBit(c+1609,"io_interrupt", false,-1);
    tracep->declBit(c+238,"io_master_awready", false,-1);
    tracep->declBit(c+80,"io_master_awvalid", false,-1);
    tracep->declBus(c+54,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+53,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+55,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+56,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+57,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1583,"io_master_wready", false,-1);
    tracep->declBit(c+81,"io_master_wvalid", false,-1);
    tracep->declBus(c+59,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+60,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"io_master_wlast", false,-1);
    tracep->declBit(c+82,"io_master_bready", false,-1);
    tracep->declBit(c+1476,"io_master_bvalid", false,-1);
    tracep->declBus(c+1584,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1477,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+239,"io_master_arready", false,-1);
    tracep->declBit(c+192,"io_master_arvalid", false,-1);
    tracep->declBus(c+178,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+177,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+179,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+139,"io_master_rready", false,-1);
    tracep->declBit(c+1478,"io_master_rvalid", false,-1);
    tracep->declBus(c+1481,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1480,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1482,"io_master_rlast", false,-1);
    tracep->declBus(c+1479,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1614,"io_slave_awready", false,-1);
    tracep->declBit(c+1609,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1615,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1616,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1617,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1618,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1613,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1619,"io_slave_wready", false,-1);
    tracep->declBit(c+1609,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1615,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1616,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1609,"io_slave_wlast", false,-1);
    tracep->declBit(c+1609,"io_slave_bready", false,-1);
    tracep->declBit(c+1620,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1621,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1622,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1623,"io_slave_arready", false,-1);
    tracep->declBit(c+1609,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1615,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1616,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1617,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1618,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1613,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1609,"io_slave_rready", false,-1);
    tracep->declBit(c+1624,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1625,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1626,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1627,"io_slave_rlast", false,-1);
    tracep->declBus(c+1628,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1345,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+1346,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+1347,"IF_valid", false,-1);
    tracep->declBit(c+1402,"id_ready", false,-1);
    tracep->declBus(c+720,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+721,"id_ex_inst", false,-1, 31,0);
    tracep->declBit(c+722,"id_valid", false,-1);
    tracep->declBit(c+723,"ex_ready", false,-1);
    tracep->declBit(c+724,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+725,"id_ex_rd", false,-1, 3,0);
    tracep->declBus(c+726,"id_wb_rs1", false,-1, 3,0);
    tracep->declBus(c+727,"id_wb_rs2", false,-1, 3,0);
    tracep->declBus(c+728,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+729,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+730,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+731,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+732,"id_ex_MemLen", false,-1, 4,0);
    tracep->declBit(c+733,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+734,"id_ex_MemRead", false,-1);
    tracep->declBus(c+735,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+736,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+737,"id_ex_jal", false,-1);
    tracep->declBit(c+738,"id_ex_jalr", false,-1);
    tracep->declBit(c+739,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+740,"id_ex_csr_wen2", false,-1);
    tracep->declBit(c+741,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+742,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+743,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBus(c+744,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+745,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+746,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+747,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBus(c+748,"ex_lsu_inst", false,-1, 31,0);
    tracep->declBit(c+749,"ex_lsu_valid", false,-1);
    tracep->declBit(c+750,"lsu_ex_ready", false,-1);
    tracep->declBus(c+751,"ex_lsu_src2", false,-1, 31,0);
    tracep->declBit(c+752,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+753,"ex_lsu_rd", false,-1, 3,0);
    tracep->declBit(c+754,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+755,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+756,"ex_lsu_MemLen", false,-1, 4,0);
    tracep->declBus(c+757,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBit(c+1403,"ex_flush", false,-1);
    tracep->declBus(c+1404,"ex_flush_pc", false,-1, 31,0);
    tracep->declBit(c+758,"ex_lsu_csr", false,-1);
    tracep->declBit(c+759,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+760,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+761,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+762,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+763,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+764,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+765,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+766,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+767,"ex_lsu_csr_mret", false,-1);
    tracep->declBit(c+768,"lsu_wb_valid", false,-1);
    tracep->declBit(c+1612,"wb_lsu_ready", false,-1);
    tracep->declBit(c+769,"lsu_wb_RegWrite", false,-1);
    tracep->declBus(c+770,"lsu_wb_rd", false,-1, 3,0);
    tracep->declBus(c+771,"lsu_wb_write_rd_data", false,-1, 31,0);
    tracep->declBus(c+772,"lsu_wb_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+773,"lsu_wb_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+774,"lsu_wb_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+775,"lsu_wb_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+776,"lsu_wb_csr_wen1", false,-1);
    tracep->declBit(c+777,"lsu_wb_csr_wen2", false,-1);
    tracep->declBit(c+778,"wb_valid", false,-1);
    tracep->declBus(c+779,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+780,"wb_ex_src2", false,-1, 31,0);
    tracep->declBus(c+781,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+782,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBus(c+783,"lsu_ex_forward_rd", false,-1, 3,0);
    tracep->declBit(c+784,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+785,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBit(c+786,"ex_lsu_forward_las", false,-1);
    tracep->declBit(c+787,"lsu_axi_arvalid", false,-1);
    tracep->declBit(c+204,"axi_lsu_arready", false,-1);
    tracep->declBus(c+788,"lsu_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1629,"lsu_axi_arid", false,-1, 3,0);
    tracep->declBus(c+789,"lsu_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+790,"lsu_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+791,"lsu_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+146,"axi_lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+147,"axi_lsu_rvalid", false,-1);
    tracep->declBus(c+148,"axi_lsu_rid", false,-1, 3,0);
    tracep->declBit(c+149,"axi_lsu_rlast", false,-1);
    tracep->declBit(c+792,"lsu_axi_rready", false,-1);
    tracep->declBus(c+150,"axi_lsu_rresp", false,-1, 1,0);
    tracep->declBus(c+793,"lsu_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1629,"lsu_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1617,"lsu_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+794,"lsu_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1613,"lsu_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+795,"lsu_axi_awvalid", false,-1);
    tracep->declBit(c+246,"axi_lsu_awready", false,-1);
    tracep->declBus(c+796,"lsu_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+797,"lsu_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+798,"lsu_axi_wvalid", false,-1);
    tracep->declBit(c+799,"lsu_axi_wlast", false,-1);
    tracep->declBit(c+247,"axi_lsu_wready", false,-1);
    tracep->declBus(c+151,"axi_lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+152,"axi_lsu_bid", false,-1, 3,0);
    tracep->declBit(c+153,"axi_lsu_bvalid", false,-1);
    tracep->declBit(c+800,"lsu_axi_bready", false,-1);
    tracep->declBit(c+801,"if_axi_arvalid", false,-1);
    tracep->declBit(c+205,"axi_if_arready", false,-1);
    tracep->declBus(c+802,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+803,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+804,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+805,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+806,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+154,"axi_if_rdata", false,-1, 31,0);
    tracep->declBit(c+155,"axi_if_rvalid", false,-1);
    tracep->declBus(c+156,"axi_if_rid", false,-1, 3,0);
    tracep->declBit(c+157,"axi_if_rlast", false,-1);
    tracep->declBit(c+807,"if_axi_rready", false,-1);
    tracep->declBus(c+158,"axi_if_rresp", false,-1, 1,0);
    tracep->declBus(c+206,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+207,"clint_arvalid", false,-1);
    tracep->declBus(c+208,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+209,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+210,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+211,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+808,"clint_arready", false,-1);
    tracep->declBus(c+809,"clint_rresp", false,-1, 1,0);
    tracep->declBus(c+810,"clint_rdata", false,-1, 31,0);
    tracep->declBit(c+811,"clint_rvalid", false,-1);
    tracep->declBus(c+1630,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+812,"clint_rlast", false,-1);
    tracep->declBit(c+159,"clint_rready", false,-1);
    tracep->pushNamePrefix("axi_arb ");
    tracep->declBus(c+1631,"CLINT_ADDR_START", false,-1, 31,0);
    tracep->declBus(c+1632,"CLINT_ADDR_END", false,-1, 31,0);
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+105,"reset", false,-1);
    tracep->declBit(c+205,"ifu_arready", false,-1);
    tracep->declBit(c+801,"ifu_arvalid", false,-1);
    tracep->declBus(c+802,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+803,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+804,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+805,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+806,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+807,"ifu_rready", false,-1);
    tracep->declBit(c+155,"ifu_rvalid", false,-1);
    tracep->declBus(c+158,"ifu_rresp", false,-1, 1,0);
    tracep->declBus(c+154,"ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+157,"ifu_rlast", false,-1);
    tracep->declBus(c+156,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+246,"lsu_awready", false,-1);
    tracep->declBit(c+795,"lsu_awvalid", false,-1);
    tracep->declBus(c+793,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1629,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1617,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+794,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1613,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+247,"lsu_wready", false,-1);
    tracep->declBit(c+798,"lsu_wvalid", false,-1);
    tracep->declBus(c+796,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+797,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+799,"lsu_wlast", false,-1);
    tracep->declBit(c+800,"lsu_bready", false,-1);
    tracep->declBit(c+153,"lsu_bvalid", false,-1);
    tracep->declBus(c+151,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+152,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+204,"lsu_arready", false,-1);
    tracep->declBit(c+787,"lsu_arvalid", false,-1);
    tracep->declBus(c+788,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1629,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+789,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+790,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+791,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+792,"lsu_rready", false,-1);
    tracep->declBit(c+147,"lsu_rvalid", false,-1);
    tracep->declBus(c+150,"lsu_rresp", false,-1, 1,0);
    tracep->declBus(c+146,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+149,"lsu_rlast", false,-1);
    tracep->declBus(c+148,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+238,"io_master_awready", false,-1);
    tracep->declBit(c+80,"io_master_awvalid", false,-1);
    tracep->declBus(c+54,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+53,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+55,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+56,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+57,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1583,"io_master_wready", false,-1);
    tracep->declBit(c+81,"io_master_wvalid", false,-1);
    tracep->declBus(c+59,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+60,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"io_master_wlast", false,-1);
    tracep->declBit(c+82,"io_master_bready", false,-1);
    tracep->declBit(c+1476,"io_master_bvalid", false,-1);
    tracep->declBus(c+1584,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1477,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+239,"io_master_arready", false,-1);
    tracep->declBit(c+192,"io_master_arvalid", false,-1);
    tracep->declBus(c+178,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+177,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+179,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+139,"io_master_rready", false,-1);
    tracep->declBit(c+1478,"io_master_rvalid", false,-1);
    tracep->declBus(c+1481,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1480,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1482,"io_master_rlast", false,-1);
    tracep->declBus(c+1479,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+206,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+207,"clint_arvalid", false,-1);
    tracep->declBit(c+808,"clint_arready", false,-1);
    tracep->declBus(c+208,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+209,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+210,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+211,"clint_arburst", false,-1, 1,0);
    tracep->declBus(c+810,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+809,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+811,"clint_rvalid", false,-1);
    tracep->declBit(c+159,"clint_rready", false,-1);
    tracep->declBit(c+812,"clint_rlast", false,-1);
    tracep->declBus(c+1630,"clint_rid", false,-1, 3,0);
    tracep->declBus(c+1618,"NONE", false,-1, 2,0);
    tracep->declBus(c+1608,"IFU", false,-1, 2,0);
    tracep->declBus(c+1633,"LSU_READ", false,-1, 2,0);
    tracep->declBus(c+1634,"LSU_WRITE", false,-1, 2,0);
    tracep->declBus(c+1635,"CLINT", false,-1, 1,0);
    tracep->declBus(c+1636,"MASTER", false,-1, 1,0);
    tracep->declBus(c+813,"current_master", false,-1, 2,0);
    tracep->declBus(c+1587,"next_master", false,-1, 2,0);
    tracep->declBus(c+1613,"OKAY", false,-1, 1,0);
    tracep->declBus(c+1636,"SLVERR", false,-1, 1,0);
    tracep->declBus(c+1637,"DECERR", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint ");
    tracep->declBus(c+1638,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1638,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+105,"reset", false,-1);
    tracep->declBus(c+206,"araddr", false,-1, 31,0);
    tracep->declBit(c+207,"arvalid", false,-1);
    tracep->declBit(c+808,"arready", false,-1);
    tracep->declBus(c+810,"rdata", false,-1, 31,0);
    tracep->declBit(c+811,"rvalid", false,-1);
    tracep->declBit(c+812,"rlast", false,-1);
    tracep->declBit(c+159,"rready", false,-1);
    tracep->declBus(c+809,"rresp", false,-1, 1,0);
    tracep->declBus(c+1639,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1640,"BUSY", false,-1, 0,0);
    tracep->declBit(c+814,"clint_state", false,-1);
    tracep->declBit(c+815,"next_clint_state", false,-1);
    tracep->declBus(c+816,"araddr_reg", false,-1, 31,0);
    tracep->declQuad(c+817,"mtime", false,-1, 63,0);
    tracep->declBus(c+819,"mtime_low", false,-1, 31,0);
    tracep->declBus(c+820,"mtime_high", false,-1, 31,0);
    tracep->declBus(c+821,"clint_offset", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+105,"reset", false,-1);
    tracep->declBit(c+1402,"id_ready", false,-1);
    tracep->declBit(c+722,"id_valid", false,-1);
    tracep->declBit(c+723,"ex_ready", false,-1);
    tracep->declBit(c+750,"lsu_ready", false,-1);
    tracep->declBit(c+749,"ex_lsu_valid", false,-1);
    tracep->declBus(c+726,"id_wb_rs1", false,-1, 3,0);
    tracep->declBus(c+727,"id_wb_rs2", false,-1, 3,0);
    tracep->declBus(c+783,"lsu_ex_forward_rd", false,-1, 3,0);
    tracep->declBit(c+784,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+785,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBus(c+771,"lsu_wb_wdata", false,-1, 31,0);
    tracep->declBus(c+770,"lsu_wb_rd", false,-1, 3,0);
    tracep->declBit(c+769,"lsu_wb_RegWrite", false,-1);
    tracep->declBit(c+768,"lsu_wb_valid", false,-1);
    tracep->declBit(c+786,"ex_lsu_forward_las", false,-1);
    tracep->declBus(c+721,"id_ex_inst", false,-1, 31,0);
    tracep->declBus(c+720,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+729,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+728,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+730,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+779,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+780,"wb_ex_src2", false,-1, 31,0);
    tracep->declBit(c+724,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+725,"id_ex_rd", false,-1, 3,0);
    tracep->declBus(c+735,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+736,"id_ex_func3", false,-1, 2,0);
    tracep->declBus(c+731,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBit(c+737,"id_ex_jal", false,-1);
    tracep->declBit(c+738,"id_ex_jalr", false,-1);
    tracep->declBit(c+734,"id_ex_MemRead", false,-1);
    tracep->declBit(c+733,"id_ex_MemWrite", false,-1);
    tracep->declBus(c+732,"id_ex_MemLen", false,-1, 4,0);
    tracep->declBus(c+781,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+782,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBit(c+739,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+740,"id_ex_csr_wen2", false,-1);
    tracep->declBus(c+744,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+745,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+741,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+742,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+743,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBit(c+1403,"ex_flush", false,-1);
    tracep->declBus(c+1404,"ex_flush_pc", false,-1, 31,0);
    tracep->declBus(c+748,"ex_lsu_inst", false,-1, 31,0);
    tracep->declBus(c+751,"ex_lsu_src2", false,-1, 31,0);
    tracep->declBit(c+752,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+753,"ex_lsu_rd", false,-1, 3,0);
    tracep->declBit(c+754,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+755,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+756,"ex_lsu_MemLen", false,-1, 4,0);
    tracep->declBit(c+758,"ex_lsu_csr", false,-1);
    tracep->declBit(c+759,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+760,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+761,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+762,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+763,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+764,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+765,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+766,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+767,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+757,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBus(c+822,"src1", false,-1, 31,0);
    tracep->declBus(c+823,"src2", false,-1, 31,0);
    tracep->declBus(c+824,"ex_num1", false,-1, 31,0);
    tracep->declBus(c+825,"ex_num2", false,-1, 31,0);
    tracep->declBus(c+826,"process_result", false,-1, 31,0);
    tracep->declBit(c+827,"alu_zero", false,-1);
    tracep->declBit(c+828,"alu_less", false,-1);
    tracep->declBus(c+1405,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+1406,"take_branch", false,-1);
    tracep->declBit(c+829,"ex_flush_condition", false,-1);
    tracep->declBus(c+830,"mstatus", false,-1, 31,0);
    tracep->declBus(c+831,"mpie", false,-1, 31,0);
    tracep->declBus(c+832,"csr_write_data", false,-1, 31,0);
    tracep->declBus(c+833,"forward_rs1", false,-1, 1,0);
    tracep->declBus(c+834,"forward_rs2", false,-1, 1,0);
    tracep->declBit(c+835,"forward_las", false,-1);
    tracep->declBus(c+836,"load_use_flag", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+105,"reset", false,-1);
    tracep->declBus(c+1345,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+1346,"if_id_inst", false,-1, 31,0);
    tracep->declBit(c+1403,"ex_flush", false,-1);
    tracep->declBit(c+1347,"if_valid", false,-1);
    tracep->declBit(c+1402,"id_ready", false,-1);
    tracep->declBit(c+723,"ex_ready", false,-1);
    tracep->declBit(c+722,"id_valid", false,-1);
    tracep->declBus(c+720,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+721,"id_ex_inst", false,-1, 31,0);
    tracep->declBit(c+724,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+725,"id_ex_rd", false,-1, 3,0);
    tracep->declBus(c+726,"id_wb_rs1", false,-1, 3,0);
    tracep->declBus(c+727,"id_wb_rs2", false,-1, 3,0);
    tracep->declBus(c+728,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+729,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+730,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+731,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+732,"id_ex_MemLen", false,-1, 4,0);
    tracep->declBit(c+733,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+734,"id_ex_MemRead", false,-1);
    tracep->declBus(c+735,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+736,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+737,"id_ex_jal", false,-1);
    tracep->declBit(c+738,"id_ex_jalr", false,-1);
    tracep->declBit(c+739,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+740,"id_ex_csr_wen2", false,-1);
    tracep->declBit(c+741,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+742,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+743,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBus(c+744,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+745,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+746,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+747,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBus(c+1348,"opcode", false,-1, 6,0);
    tracep->declBus(c+1349,"rs1", false,-1, 3,0);
    tracep->declBus(c+1350,"rs2", false,-1, 3,0);
    tracep->declBus(c+1351,"rd", false,-1, 3,0);
    tracep->declBus(c+1352,"func3", false,-1, 2,0);
    tracep->declBus(c+1353,"func7", false,-1, 6,0);
    tracep->declBus(c+1354,"shamt", false,-1, 5,0);
    tracep->declBus(c+1355,"zimm", false,-1, 4,0);
    tracep->declBus(c+1356,"get_opcode", false,-1, 4,0);
    tracep->declBus(c+1357,"immI", false,-1, 31,0);
    tracep->declBus(c+1358,"immU", false,-1, 31,0);
    tracep->declBus(c+1359,"immS", false,-1, 31,0);
    tracep->declBus(c+1360,"immB", false,-1, 31,0);
    tracep->declBus(c+1361,"immJ", false,-1, 31,0);
    tracep->declBus(c+1615,"immR", false,-1, 31,0);
    tracep->declBus(c+1362,"immCSR", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+105,"reset", false,-1);
    tracep->declBit(c+1403,"EX_flush", false,-1);
    tracep->declBus(c+1404,"EX_flush_pc", false,-1, 31,0);
    tracep->declBit(c+1402,"ID_ready", false,-1);
    tracep->declBit(c+1347,"IF_valid", false,-1);
    tracep->declBus(c+1345,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+1346,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+801,"if_axi_arvalid", false,-1);
    tracep->declBit(c+205,"axi_if_arready", false,-1);
    tracep->declBus(c+802,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+803,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+804,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+805,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+806,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+154,"axi_if_rdata", false,-1, 31,0);
    tracep->declBit(c+155,"axi_if_rvalid", false,-1);
    tracep->declBit(c+807,"if_axi_rready", false,-1);
    tracep->declBus(c+158,"axi_if_rresp", false,-1, 1,0);
    tracep->declBus(c+156,"axi_if_rid", false,-1, 3,0);
    tracep->declBit(c+157,"axi_if_rlast", false,-1);
    tracep->declBus(c+1363,"state", false,-1, 1,0);
    tracep->declBus(c+1613,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1635,"WAIT_FLUSH", false,-1, 1,0);
    tracep->declBus(c+1637,"WAIT_CACHE", false,-1, 1,0);
    tracep->declBus(c+1641,"FENCEI", false,-1, 31,0);
    tracep->declBus(c+1642,"JAL_OPCODE", false,-1, 6,0);
    tracep->declBus(c+1542,"next_pc", false,-1, 31,0);
    tracep->declBit(c+1364,"cache_req", false,-1);
    tracep->declBit(c+1365,"flush_once", false,-1);
    tracep->declBit(c+1366,"once", false,-1);
    tracep->declBus(c+1407,"cache_inst", false,-1, 31,0);
    tracep->declBit(c+1408,"cache_valid", false,-1);
    tracep->declBus(c+837,"cache_araddr", false,-1, 31,0);
    tracep->declBit(c+838,"cache_arvalid", false,-1);
    tracep->declBus(c+1629,"cache_arid", false,-1, 3,0);
    tracep->declBus(c+1643,"cache_arlen", false,-1, 7,0);
    tracep->declBus(c+1633,"cache_arsize", false,-1, 2,0);
    tracep->declBus(c+1635,"cache_arburst", false,-1, 1,0);
    tracep->declBit(c+839,"cache_rready", false,-1);
    tracep->declBit(c+1367,"is_fencei", false,-1);
    tracep->declBit(c+1409,"is_jal", false,-1);
    tracep->declBus(c+1410,"immJ", false,-1, 31,0);
    tracep->declBus(c+1588,"jal_target", false,-1, 31,0);
    tracep->pushNamePrefix("u_icache ");
    tracep->declBus(c+1644,"CACHE_SIZE", false,-1, 31,0);
    tracep->declBus(c+1645,"BLOCK_SIZE", false,-1, 31,0);
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+105,"reset", false,-1);
    tracep->declBit(c+1367,"is_fencei", false,-1);
    tracep->declBus(c+1542,"addr", false,-1, 31,0);
    tracep->declBus(c+1407,"inst", false,-1, 31,0);
    tracep->declBit(c+1408,"valid", false,-1);
    tracep->declBus(c+837,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+838,"axi_arvalid", false,-1);
    tracep->declBit(c+205,"axi_arready", false,-1);
    tracep->declBus(c+1629,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1643,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1633,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1635,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+155,"axi_rvalid", false,-1);
    tracep->declBit(c+839,"axi_rready", false,-1);
    tracep->declBus(c+154,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+158,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+156,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+157,"axi_rlast", false,-1);
    tracep->declBus(c+1646,"NUM_BLOCKS", false,-1, 31,0);
    tracep->declBus(c+1646,"BLOCK_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1647,"INDEX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1648,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1646,"BEATS_PER_BLOCK", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+840+i*1,"tag_ram", true,(i+0), 25,0);
    }
    tracep->pushNamePrefix("data_ram");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+1411,"[0]", false,-1, 31,0);
    tracep->declBus(c+1412,"[1]", false,-1, 31,0);
    tracep->declBus(c+1413,"[2]", false,-1, 31,0);
    tracep->declBus(c+1414,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+1415,"[0]", false,-1, 31,0);
    tracep->declBus(c+1416,"[1]", false,-1, 31,0);
    tracep->declBus(c+1417,"[2]", false,-1, 31,0);
    tracep->declBus(c+1418,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+1419,"[0]", false,-1, 31,0);
    tracep->declBus(c+1420,"[1]", false,-1, 31,0);
    tracep->declBus(c+1421,"[2]", false,-1, 31,0);
    tracep->declBus(c+1422,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+1423,"[0]", false,-1, 31,0);
    tracep->declBus(c+1424,"[1]", false,-1, 31,0);
    tracep->declBus(c+1425,"[2]", false,-1, 31,0);
    tracep->declBus(c+1426,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+844+i*1,"valid_ram", true,(i+0));
    }
    tracep->declBus(c+1543,"req_tag", false,-1, 25,0);
    tracep->declBus(c+1544,"req_index", false,-1, 1,0);
    tracep->declBus(c+1545,"beat_idx", false,-1, 1,0);
    tracep->declBit(c+1589,"hit", false,-1);
    tracep->declBus(c+848,"saved_tag", false,-1, 25,0);
    tracep->declBus(c+849,"saved_index", false,-1, 1,0);
    tracep->declBus(c+1427,"saved_beat_idx", false,-1, 1,0);
    tracep->declBus(c+1613,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1635,"MISS", false,-1, 1,0);
    tracep->declBus(c+1636,"READ", false,-1, 1,0);
    tracep->declBus(c+1637,"FILL", false,-1, 1,0);
    tracep->declBus(c+1428,"state", false,-1, 1,0);
    tracep->declBus(c+1590,"next_state", false,-1, 1,0);
    tracep->declBit(c+1429,"busy", false,-1);
    tracep->declBus(c+850,"beat_cnt", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1430+i*1,"block_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+1649,"i", false,-1, 31,0);
    tracep->declBus(c+851,"idx", false,-1, 31,0);
    tracep->declBus(c+852,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+749,"ex_lsu_valid", false,-1);
    tracep->declBit(c+750,"lsu_ex_ready", false,-1);
    tracep->declBit(c+1612,"wb_lsu_ready", false,-1);
    tracep->declBit(c+768,"lsu_wb_valid", false,-1);
    tracep->declBit(c+786,"ex_lsu_forward_las", false,-1);
    tracep->declBit(c+752,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+753,"ex_lsu_rd", false,-1, 3,0);
    tracep->declBit(c+754,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+755,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+756,"ex_lsu_MemLen", false,-1, 4,0);
    tracep->declBus(c+757,"addr", false,-1, 31,0);
    tracep->declBus(c+751,"data_in", false,-1, 31,0);
    tracep->declBit(c+758,"ex_lsu_csr", false,-1);
    tracep->declBit(c+759,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+760,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+763,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+764,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+761,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+762,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+765,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+766,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+767,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+757,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBus(c+783,"lsu_ex_forward_rd", false,-1, 3,0);
    tracep->declBit(c+784,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+785,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBus(c+772,"lsu_wb_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+773,"lsu_wb_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+774,"lsu_wb_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+775,"lsu_wb_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+776,"lsu_wb_csr_wen1", false,-1);
    tracep->declBit(c+777,"lsu_wb_csr_wen2", false,-1);
    tracep->declBit(c+769,"lsu_wb_RegWrite", false,-1);
    tracep->declBus(c+770,"lsu_wb_rd", false,-1, 3,0);
    tracep->declBus(c+771,"lsu_wb_write_rd_data", false,-1, 31,0);
    tracep->declBit(c+787,"lsu_axi_arvalid", false,-1);
    tracep->declBit(c+204,"axi_lsu_arready", false,-1);
    tracep->declBus(c+788,"lsu_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1629,"lsu_axi_arid", false,-1, 3,0);
    tracep->declBus(c+789,"lsu_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+790,"lsu_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+791,"lsu_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+146,"axi_lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+147,"axi_lsu_rvalid", false,-1);
    tracep->declBit(c+792,"lsu_axi_rready", false,-1);
    tracep->declBus(c+150,"axi_lsu_rresp", false,-1, 1,0);
    tracep->declBus(c+148,"axi_lsu_rid", false,-1, 3,0);
    tracep->declBit(c+149,"axi_lsu_rlast", false,-1);
    tracep->declBus(c+793,"lsu_axi_awaddr", false,-1, 31,0);
    tracep->declBit(c+795,"lsu_axi_awvalid", false,-1);
    tracep->declBit(c+246,"axi_lsu_awready", false,-1);
    tracep->declBus(c+1629,"lsu_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1617,"lsu_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+794,"lsu_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1613,"lsu_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+796,"lsu_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+797,"lsu_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+798,"lsu_axi_wvalid", false,-1);
    tracep->declBit(c+247,"axi_lsu_wready", false,-1);
    tracep->declBit(c+799,"lsu_axi_wlast", false,-1);
    tracep->declBus(c+151,"axi_lsu_bresp", false,-1, 1,0);
    tracep->declBit(c+153,"axi_lsu_bvalid", false,-1);
    tracep->declBit(c+800,"lsu_axi_bready", false,-1);
    tracep->declBus(c+152,"axi_lsu_bid", false,-1, 3,0);
    tracep->declBus(c+1613,"OKAY", false,-1, 1,0);
    tracep->declBus(c+1650,"SDRAM_BASE", false,-1, 31,0);
    tracep->declBus(c+1651,"SDRAM_END", false,-1, 31,0);
    tracep->declBus(c+1613,"AXI_BURST_FIXED", false,-1, 1,0);
    tracep->declBus(c+1635,"AXI_BURST_INCR", false,-1, 1,0);
    tracep->declBus(c+1618,"AXI_SIZE_BYTE", false,-1, 2,0);
    tracep->declBus(c+1608,"AXI_SIZE_HALF", false,-1, 2,0);
    tracep->declBus(c+1633,"AXI_SIZE_WORD", false,-1, 2,0);
    tracep->declBus(c+1629,"AXI_ID", false,-1, 3,0);
    tracep->declBus(c+1646,"BURST_LEN", false,-1, 31,0);
    tracep->declBus(c+1645,"BLOCK_SIZE", false,-1, 31,0);
    tracep->declBit(c+853,"addr_in_sdram", false,-1);
    tracep->declBit(c+853,"burst_en", false,-1);
    tracep->declBus(c+1646,"BLOCK_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+854,"req_offset", false,-1, 3,0);
    tracep->declBus(c+855,"word_offset", false,-1, 1,0);
    tracep->declBus(c+856,"saved_word_offset", false,-1, 1,0);
    tracep->declBus(c+857,"saved_wdata", false,-1, 31,0);
    tracep->declBus(c+858,"saved_wstrb", false,-1, 3,0);
    tracep->declBus(c+859,"burst_cnt", false,-1, 3,0);
    tracep->declBus(c+860,"cache_addr", false,-1, 31,0);
    tracep->declBus(c+861,"rdata", false,-1, 31,0);
    tracep->declBit(c+862,"valid", false,-1);
    tracep->declBit(c+863,"busy", false,-1);
    tracep->declBus(c+864,"addr_reg", false,-1, 31,0);
    tracep->declBus(c+1613,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1636,"RD", false,-1, 1,0);
    tracep->declBus(c+1637,"WR", false,-1, 1,0);
    tracep->declBus(c+865,"state", false,-1, 1,0);
    tracep->declBus(c+160,"next_state", false,-1, 1,0);
    tracep->declBit(c+866,"aw_done", false,-1);
    tracep->declBit(c+867,"w_done", false,-1);
    tracep->declBit(c+868,"b_done", false,-1);
    tracep->declBit(c+869,"ar_done", false,-1);
    tracep->declBit(c+870,"we", false,-1);
    tracep->declBit(c+871,"req_valid", false,-1);
    tracep->declArray(c+872,"block_data", false,-1, 127,0);
    tracep->declBit(c+785,"l_load", false,-1);
    tracep->declBit(c+784,"l_rd_en", false,-1);
    tracep->declBus(c+783,"l_rd_addr", false,-1, 3,0);
    tracep->declBus(c+876,"l_MemLen", false,-1, 4,0);
    tracep->declBus(c+877,"read_lsu_data", false,-1, 31,0);
    tracep->declBit(c+878,"op_complete", false,-1);
    tracep->declBus(c+879,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBus(c+1646,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1638,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+769,"wen", false,-1);
    tracep->declBit(c+768,"lsu_wb_valid", false,-1);
    tracep->declBit(c+1612,"wb_lsu_ready", false,-1);
    tracep->declBus(c+771,"wdata", false,-1, 31,0);
    tracep->declBus(c+770,"waddr", false,-1, 3,0);
    tracep->declBus(c+726,"rs1", false,-1, 3,0);
    tracep->declBus(c+727,"rs2", false,-1, 3,0);
    tracep->declBus(c+779,"src1", false,-1, 31,0);
    tracep->declBus(c+780,"src2", false,-1, 31,0);
    tracep->declBit(c+778,"wb_valid", false,-1);
    tracep->declBus(c+746,"raddr_csr1", false,-1, 11,0);
    tracep->declBus(c+747,"raddr_csr2", false,-1, 11,0);
    tracep->declBit(c+776,"wen_csr1", false,-1);
    tracep->declBit(c+777,"wen_csr2", false,-1);
    tracep->declBus(c+772,"wdata_csr1", false,-1, 31,0);
    tracep->declBus(c+773,"wdata_csr2", false,-1, 31,0);
    tracep->declBus(c+774,"waddr_csr1", false,-1, 11,0);
    tracep->declBus(c+775,"waddr_csr2", false,-1, 11,0);
    tracep->declBus(c+781,"rdata_csr1", false,-1, 31,0);
    tracep->declBus(c+782,"rdata_csr2", false,-1, 31,0);
    tracep->declBus(c+880,"mstatus", false,-1, 31,0);
    tracep->declBus(c+881,"mtvec", false,-1, 31,0);
    tracep->declBus(c+882,"mepc", false,-1, 31,0);
    tracep->declBus(c+883,"mcause", false,-1, 31,0);
    tracep->declBus(c+1652,"MSTATUS", false,-1, 11,0);
    tracep->declBus(c+1653,"MTVEC", false,-1, 11,0);
    tracep->declBus(c+1654,"MEPC", false,-1, 11,0);
    tracep->declBus(c+1655,"MCAUSE", false,-1, 11,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+884+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+900,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"io_d", false,-1);
    tracep->declBit(c+901,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"io_d", false,-1);
    tracep->declBit(c+901,"io_q", false,-1);
    tracep->declBit(c+901,"sync_0", false,-1);
    tracep->declBit(c+902,"sync_1", false,-1);
    tracep->declBit(c+903,"sync_2", false,-1);
    tracep->declBit(c+904,"sync_3", false,-1);
    tracep->declBit(c+905,"sync_4", false,-1);
    tracep->declBit(c+906,"sync_5", false,-1);
    tracep->declBit(c+907,"sync_6", false,-1);
    tracep->declBit(c+908,"sync_7", false,-1);
    tracep->declBit(c+909,"sync_8", false,-1);
    tracep->declBit(c+910,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+1384,"auto_in_psel", false,-1);
    tracep->declBit(c+1000,"auto_in_penable", false,-1);
    tracep->declBit(c+1376,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1383,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1608,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+265,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1385,"auto_in_pready", false,-1);
    tracep->declBit(c+1611,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1386,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1548,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1549,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1550,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1551,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1552,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1553,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1554,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1555,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1556,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1557,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBus(c+1434,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1384,"in_psel", false,-1);
    tracep->declBit(c+1000,"in_penable", false,-1);
    tracep->declBus(c+1608,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1376,"in_pwrite", false,-1);
    tracep->declBus(c+265,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1385,"in_pready", false,-1);
    tracep->declBus(c+1386,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1611,"in_pslverr", false,-1);
    tracep->declBus(c+1548,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1549,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1550,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1551,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1552,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1553,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1554,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1555,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1556,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1557,"gpio_seg_7", false,-1, 7,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+911+i*1,"gpio_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+1435,"wen", false,-1);
    tracep->declBit(c+1436,"ren", false,-1);
    tracep->declBus(c+1437,"wdata", false,-1, 31,0);
    tracep->declBus(c+1438,"addr", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+1382,"auto_in_psel", false,-1);
    tracep->declBit(c+999,"auto_in_penable", false,-1);
    tracep->declBit(c+1376,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1383,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1608,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+265,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1007,"auto_in_pready", false,-1);
    tracep->declBit(c+1609,"auto_in_pslverr", false,-1);
    tracep->declBus(c+994,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1558,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1559,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBus(c+1434,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1382,"in_psel", false,-1);
    tracep->declBit(c+999,"in_penable", false,-1);
    tracep->declBus(c+1608,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1376,"in_pwrite", false,-1);
    tracep->declBus(c+265,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1007,"in_pready", false,-1);
    tracep->declBus(c+994,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1609,"in_pslverr", false,-1);
    tracep->declBit(c+1558,"ps2_clk", false,-1);
    tracep->declBit(c+1559,"ps2_data", false,-1);
    tracep->declBus(c+1013,"ps2_state", false,-1, 1,0);
    tracep->declBus(c+1610,"PS2_IDLE", false,-1, 31,0);
    tracep->declBus(c+1656,"PS2_READ", false,-1, 31,0);
    tracep->declBus(c+915,"buffer", false,-1, 9,0);
    tracep->declBus(c+916,"counter", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+917+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+933,"w_ptr", false,-1, 3,0);
    tracep->declBus(c+934,"r_ptr", false,-1, 3,0);
    tracep->declBit(c+935,"isn_empty", false,-1);
    tracep->declBus(c+936,"i", false,-1, 31,0);
    tracep->declBus(c+937,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+938,"sampling", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+93,"auto_in_awvalid", false,-1);
    tracep->declBit(c+94,"auto_in_wvalid", false,-1);
    tracep->declBit(c+516,"auto_in_arready", false,-1);
    tracep->declBit(c+198,"auto_in_arvalid", false,-1);
    tracep->declBus(c+169,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+199,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+4,"auto_in_rready", false,-1);
    tracep->declBit(c+517,"auto_in_rvalid", false,-1);
    tracep->declBus(c+518,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+519,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+517,"state", false,-1);
    tracep->declBus(c+519,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+518,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+212,"raddr", false,-1, 31,0);
    tracep->declBit(c+213,"ren", false,-1);
    tracep->declBus(c+214,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+1387,"auto_in_psel", false,-1);
    tracep->declBit(c+1001,"auto_in_penable", false,-1);
    tracep->declBit(c+1376,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1374,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+265,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1573,"auto_in_pready", false,-1);
    tracep->declBit(c+1609,"auto_in_pslverr", false,-1);
    tracep->declBus(c+267,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1468,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1469,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1570,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBus(c+1374,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1387,"in_psel", false,-1);
    tracep->declBit(c+1001,"in_penable", false,-1);
    tracep->declBus(c+1608,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1376,"in_pwrite", false,-1);
    tracep->declBus(c+265,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1573,"in_pready", false,-1);
    tracep->declBus(c+267,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1609,"in_pslverr", false,-1);
    tracep->declBit(c+1468,"qspi_sck", false,-1);
    tracep->declBit(c+1469,"qspi_ce_n", false,-1);
    tracep->declBus(c+1570,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1570,"din", false,-1, 3,0);
    tracep->declBus(c+1500,"dout", false,-1, 3,0);
    tracep->declBus(c+1501,"douten", false,-1, 3,0);
    tracep->declBit(c+1591,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1546,"clk_i", false,-1);
    tracep->declBit(c+1547,"rst_i", false,-1);
    tracep->declBus(c+1374,"adr_i", false,-1, 31,0);
    tracep->declBus(c+265,"dat_i", false,-1, 31,0);
    tracep->declBus(c+267,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1377,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1387,"cyc_i", false,-1);
    tracep->declBit(c+1387,"stb_i", false,-1);
    tracep->declBit(c+1591,"ack_o", false,-1);
    tracep->declBit(c+1376,"we_i", false,-1);
    tracep->declBit(c+1468,"sck", false,-1);
    tracep->declBit(c+1469,"ce_n", false,-1);
    tracep->declBus(c+1570,"din", false,-1, 3,0);
    tracep->declBus(c+1500,"dout", false,-1, 3,0);
    tracep->declBus(c+1501,"douten", false,-1, 3,0);
    tracep->declBus(c+1639,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1640,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+1014,"mr_sck", false,-1);
    tracep->declBit(c+1015,"mr_ce_n", false,-1);
    tracep->declBus(c+1570,"mr_din", false,-1, 3,0);
    tracep->declBus(c+1016,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+1017,"mr_doe", false,-1);
    tracep->declBit(c+1018,"mw_sck", false,-1);
    tracep->declBit(c+1019,"mw_ce_n", false,-1);
    tracep->declBus(c+1570,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1502,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+1020,"mw_doe", false,-1);
    tracep->declBit(c+1503,"mr_rd", false,-1);
    tracep->declBit(c+1021,"mr_done", false,-1);
    tracep->declBit(c+1504,"mw_wr", false,-1);
    tracep->declBit(c+1505,"mw_done", false,-1);
    tracep->declBit(c+1387,"wb_valid", false,-1);
    tracep->declBit(c+1439,"wb_we", false,-1);
    tracep->declBit(c+1440,"wb_re", false,-1);
    tracep->declBit(c+1022,"state", false,-1);
    tracep->declBit(c+1506,"nstate", false,-1);
    tracep->declBus(c+1441,"size", false,-1, 2,0);
    tracep->declBus(c+1442,"byte0", false,-1, 7,0);
    tracep->declBus(c+1443,"byte1", false,-1, 7,0);
    tracep->declBus(c+939,"byte2", false,-1, 7,0);
    tracep->declBus(c+940,"byte3", false,-1, 7,0);
    tracep->declBus(c+1003,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+1592,"rst_n", false,-1);
    tracep->declBus(c+1444,"addr", false,-1, 23,0);
    tracep->declBit(c+1503,"rd", false,-1);
    tracep->declBus(c+1657,"size", false,-1, 2,0);
    tracep->declBit(c+1021,"done", false,-1);
    tracep->declBus(c+267,"line", false,-1, 31,0);
    tracep->declBit(c+1014,"sck", false,-1);
    tracep->declBit(c+1015,"ce_n", false,-1);
    tracep->declBus(c+1570,"din", false,-1, 3,0);
    tracep->declBus(c+1016,"dout", false,-1, 3,0);
    tracep->declBit(c+1017,"douten", false,-1);
    tracep->declBus(c+1639,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1640,"READ", false,-1, 0,0);
    tracep->declBus(c+1658,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+1023,"state", false,-1);
    tracep->declBit(c+1507,"nstate", false,-1);
    tracep->declBus(c+1024,"counter", false,-1, 7,0);
    tracep->declBus(c+1025,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+941+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1659,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+1026,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+1592,"rst_n", false,-1);
    tracep->declBus(c+1445,"addr", false,-1, 23,0);
    tracep->declBus(c+1003,"line", false,-1, 31,0);
    tracep->declBus(c+1441,"size", false,-1, 2,0);
    tracep->declBit(c+1504,"wr", false,-1);
    tracep->declBit(c+1505,"done", false,-1);
    tracep->declBit(c+1018,"sck", false,-1);
    tracep->declBit(c+1019,"ce_n", false,-1);
    tracep->declBus(c+1570,"din", false,-1, 3,0);
    tracep->declBus(c+1502,"dout", false,-1, 3,0);
    tracep->declBit(c+1020,"douten", false,-1);
    tracep->declBus(c+1639,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1640,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1446,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+1027,"state", false,-1);
    tracep->declBit(c+1508,"nstate", false,-1);
    tracep->declBus(c+1028,"counter", false,-1, 7,0);
    tracep->declBus(c+1029,"saddr", false,-1, 23,0);
    tracep->declBus(c+1660,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+232,"auto_in_awready", false,-1);
    tracep->declBit(c+52,"auto_in_awvalid", false,-1);
    tracep->declBus(c+53,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+54,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+55,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+56,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+57,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+233,"auto_in_wready", false,-1);
    tracep->declBit(c+58,"auto_in_wvalid", false,-1);
    tracep->declBus(c+59,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+60,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"auto_in_wlast", false,-1);
    tracep->declBit(c+1580,"auto_in_bready", false,-1);
    tracep->declBit(c+1012,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1009,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1613,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+231,"auto_in_arready", false,-1);
    tracep->declBit(c+176,"auto_in_arvalid", false,-1);
    tracep->declBus(c+177,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+3,"auto_in_rready", false,-1);
    tracep->declBit(c+1008,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1009,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1010,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1613,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1011,"auto_in_rlast", false,-1);
    tracep->declBit(c+1571,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1512,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1513,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1514,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1515,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1516,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1572,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1517,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1518,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1530,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+232,"in_awready", false,-1);
    tracep->declBit(c+52,"in_awvalid", false,-1);
    tracep->declBus(c+54,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+53,"in_awid", false,-1, 3,0);
    tracep->declBus(c+55,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+56,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+57,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+233,"in_wready", false,-1);
    tracep->declBit(c+58,"in_wvalid", false,-1);
    tracep->declBus(c+59,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+60,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"in_wlast", false,-1);
    tracep->declBit(c+1580,"in_bready", false,-1);
    tracep->declBit(c+1012,"in_bvalid", false,-1);
    tracep->declBus(c+1613,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+1009,"in_bid", false,-1, 3,0);
    tracep->declBit(c+231,"in_arready", false,-1);
    tracep->declBit(c+176,"in_arvalid", false,-1);
    tracep->declBus(c+178,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+177,"in_arid", false,-1, 3,0);
    tracep->declBus(c+179,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+3,"in_rready", false,-1);
    tracep->declBit(c+1008,"in_rvalid", false,-1);
    tracep->declBus(c+1613,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+1010,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+1011,"in_rlast", false,-1);
    tracep->declBus(c+1009,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1571,"sdram_clk", false,-1);
    tracep->declBit(c+1512,"sdram_cke", false,-1);
    tracep->declBit(c+1513,"sdram_cs", false,-1);
    tracep->declBit(c+1514,"sdram_ras", false,-1);
    tracep->declBit(c+1515,"sdram_cas", false,-1);
    tracep->declBit(c+1516,"sdram_we", false,-1);
    tracep->declBus(c+1572,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1517,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1518,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1530,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+1030,"sdram_dout_en", false,-1);
    tracep->declBus(c+1031,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1546,"clk_i", false,-1);
    tracep->declBit(c+1547,"rst_i", false,-1);
    tracep->declBit(c+52,"inport_awvalid_i", false,-1);
    tracep->declBus(c+54,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+53,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+55,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+57,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+58,"inport_wvalid_i", false,-1);
    tracep->declBus(c+59,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+60,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+61,"inport_wlast_i", false,-1);
    tracep->declBit(c+1580,"inport_bready_i", false,-1);
    tracep->declBit(c+176,"inport_arvalid_i", false,-1);
    tracep->declBus(c+178,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+177,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+179,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+181,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+3,"inport_rready_i", false,-1);
    tracep->declBus(c+1530,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+232,"inport_awready_o", false,-1);
    tracep->declBit(c+233,"inport_wready_o", false,-1);
    tracep->declBit(c+1012,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1613,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1009,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+231,"inport_arready_o", false,-1);
    tracep->declBit(c+1008,"inport_rvalid_o", false,-1);
    tracep->declBus(c+1010,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1613,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1009,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+1011,"inport_rlast_o", false,-1);
    tracep->declBit(c+1571,"sdram_clk_o", false,-1);
    tracep->declBit(c+1512,"sdram_cke_o", false,-1);
    tracep->declBit(c+1513,"sdram_cs_o", false,-1);
    tracep->declBit(c+1514,"sdram_ras_o", false,-1);
    tracep->declBit(c+1515,"sdram_cas_o", false,-1);
    tracep->declBit(c+1516,"sdram_we_o", false,-1);
    tracep->declBus(c+1518,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1572,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1517,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+1031,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+1030,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1661,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1662,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1663,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1647,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+248,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+249,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+250,"ram_rd_w", false,-1);
    tracep->declBit(c+1519,"ram_accept_w", false,-1);
    tracep->declBus(c+59,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+1032,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1593,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+1033,"ram_ack_w", false,-1);
    tracep->declBit(c+1609,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1546,"clk_i", false,-1);
    tracep->declBit(c+1547,"rst_i", false,-1);
    tracep->declBit(c+52,"axi_awvalid_i", false,-1);
    tracep->declBus(c+54,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+53,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+55,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+57,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+58,"axi_wvalid_i", false,-1);
    tracep->declBus(c+59,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+60,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+61,"axi_wlast_i", false,-1);
    tracep->declBit(c+1580,"axi_bready_i", false,-1);
    tracep->declBit(c+176,"axi_arvalid_i", false,-1);
    tracep->declBus(c+178,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+177,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+179,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+181,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+3,"axi_rready_i", false,-1);
    tracep->declBit(c+1519,"ram_accept_i", false,-1);
    tracep->declBit(c+1033,"ram_ack_i", false,-1);
    tracep->declBit(c+1609,"ram_error_i", false,-1);
    tracep->declBus(c+1032,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+232,"axi_awready_o", false,-1);
    tracep->declBit(c+233,"axi_wready_o", false,-1);
    tracep->declBit(c+1012,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1613,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1009,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+231,"axi_arready_o", false,-1);
    tracep->declBit(c+1008,"axi_rvalid_o", false,-1);
    tracep->declBus(c+1010,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1613,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1009,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1011,"axi_rlast_o", false,-1);
    tracep->declBus(c+249,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+250,"ram_rd_o", false,-1);
    tracep->declBus(c+1593,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+248,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+59,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+1034,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+1035,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+1036,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+1037,"req_rd_q", false,-1);
    tracep->declBit(c+1038,"req_wr_q", false,-1);
    tracep->declBus(c+1039,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+1040,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+1041,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+1042,"req_prio_q", false,-1);
    tracep->declBit(c+1043,"req_hold_rd_q", false,-1);
    tracep->declBit(c+1044,"req_hold_wr_q", false,-1);
    tracep->declBit(c+1045,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+251,"req_push_w", false,-1);
    tracep->declBus(c+1594,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+1046,"req_out_valid_w", false,-1);
    tracep->declBus(c+1047,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+161,"resp_accept_w", false,-1);
    tracep->declBit(c+1048,"resp_is_write_w", false,-1);
    tracep->declBit(c+1049,"resp_is_read_w", false,-1);
    tracep->declBit(c+1011,"resp_is_last_w", false,-1);
    tracep->declBus(c+1009,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+1050,"resp_valid_w", false,-1);
    tracep->declBit(c+1051,"write_prio_w", false,-1);
    tracep->declBit(c+1052,"read_prio_w", false,-1);
    tracep->declBit(c+252,"write_active_w", false,-1);
    tracep->declBit(c+250,"read_active_w", false,-1);
    tracep->declBus(c+248,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1595,"wr_w", false,-1);
    tracep->declBit(c+250,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1664,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1646,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1647,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1546,"clk_i", false,-1);
    tracep->declBit(c+1547,"rst_i", false,-1);
    tracep->declBus(c+1594,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+251,"push_i", false,-1);
    tracep->declBit(c+161,"pop_i", false,-1);
    tracep->declBus(c+1047,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+1045,"accept_o", false,-1);
    tracep->declBit(c+1046,"valid_o", false,-1);
    tracep->declBus(c+1665,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1053+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+1057,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+1058,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+1059,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1638,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1646,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1647,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1546,"clk_i", false,-1);
    tracep->declBit(c+1547,"rst_i", false,-1);
    tracep->declBus(c+1032,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+1033,"push_i", false,-1);
    tracep->declBit(c+161,"pop_i", false,-1);
    tracep->declBus(c+1010,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+1060,"accept_o", false,-1);
    tracep->declBit(c+1050,"valid_o", false,-1);
    tracep->declBus(c+1665,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1061+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+1065,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+1066,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+1067,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1546,"clk_i", false,-1);
    tracep->declBit(c+1547,"rst_i", false,-1);
    tracep->declBus(c+249,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+250,"inport_rd_i", false,-1);
    tracep->declBus(c+1593,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+248,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+59,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1530,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1519,"inport_accept_o", false,-1);
    tracep->declBit(c+1033,"inport_ack_o", false,-1);
    tracep->declBit(c+1609,"inport_error_o", false,-1);
    tracep->declBus(c+1032,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1571,"sdram_clk_o", false,-1);
    tracep->declBit(c+1512,"sdram_cke_o", false,-1);
    tracep->declBit(c+1513,"sdram_cs_o", false,-1);
    tracep->declBit(c+1514,"sdram_ras_o", false,-1);
    tracep->declBit(c+1515,"sdram_cas_o", false,-1);
    tracep->declBit(c+1516,"sdram_we_o", false,-1);
    tracep->declBus(c+1518,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1572,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1517,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+1031,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+1030,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1661,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1662,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1663,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1647,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1647,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1646,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1666,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1667,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1668,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1669,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1670,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1646,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1671,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1672,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1673,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1674,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1675,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1676,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1629,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1616,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1677,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1646,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1616,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1629,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1676,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1672,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1674,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1673,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1675,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1671,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1678,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1679,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1680,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1680,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1638,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1680,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1647,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1647,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1664,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+248,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+249,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+250,"ram_rd_w", false,-1);
    tracep->declBit(c+1519,"ram_accept_w", false,-1);
    tracep->declBus(c+59,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+1032,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+1033,"ram_ack_w", false,-1);
    tracep->declBit(c+253,"ram_req_w", false,-1);
    tracep->declBus(c+1520,"command_q", false,-1, 3,0);
    tracep->declBus(c+1521,"addr_q", false,-1, 12,0);
    tracep->declBus(c+1031,"data_q", false,-1, 31,0);
    tracep->declBit(c+1068,"data_rd_en_q", false,-1);
    tracep->declBus(c+1518,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1512,"cke_q", false,-1);
    tracep->declBus(c+1517,"bank_q", false,-1, 1,0);
    tracep->declBus(c+1530,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+1069,"refresh_q", false,-1);
    tracep->declBus(c+1070,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1071+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1522,"state_q", false,-1, 3,0);
    tracep->declBus(c+254,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+255,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+1079,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+1080,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+256,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+257,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+258,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+259,"addr_bank_double", false,-1, 2,0);
    tracep->declBus(c+1646,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+1081,"delay_q", false,-1, 3,0);
    tracep->declBus(c+260,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1681,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1523,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+1082,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+1032,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+1083,"idx", false,-1, 31,0);
    tracep->declBus(c+1084,"rd_q", false,-1, 3,0);
    tracep->declBit(c+1033,"ack_q", false,-1);
    tracep->declArray(c+1524,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+1391,"auto_in_psel", false,-1);
    tracep->declBit(c+1392,"auto_in_penable", false,-1);
    tracep->declBit(c+1376,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1381,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1608,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+265,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1575,"auto_in_pready", false,-1);
    tracep->declBit(c+1393,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1576,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1005,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1006,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1568,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1569,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1682,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1683,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1666,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBus(c+1447,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1391,"in_psel", false,-1);
    tracep->declBit(c+1392,"in_penable", false,-1);
    tracep->declBus(c+1608,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1376,"in_pwrite", false,-1);
    tracep->declBus(c+265,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1575,"in_pready", false,-1);
    tracep->declBus(c+1576,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1393,"in_pslverr", false,-1);
    tracep->declBit(c+1005,"spi_sck", false,-1);
    tracep->declBus(c+1006,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1568,"spi_mosi", false,-1);
    tracep->declBit(c+1569,"spi_miso", false,-1);
    tracep->declBit(c+1085,"spi_irq_out", false,-1);
    tracep->declBus(c+1684,"SPI_ADDR_START", false,-1, 31,0);
    tracep->declBus(c+1685,"SPI_ADDR_END", false,-1, 31,0);
    tracep->declBus(c+1682,"FLASH_ADDR_START", false,-1, 31,0);
    tracep->declBus(c+1683,"FLASH_ADDR_END", false,-1, 31,0);
    tracep->declBit(c+1448,"is_spi_addr", false,-1);
    tracep->declBit(c+1449,"is_flash_addr", false,-1);
    tracep->declBus(c+1618,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1608,"INIT_DIV", false,-1, 2,0);
    tracep->declBus(c+1633,"INIT_SS", false,-1, 2,0);
    tracep->declBus(c+1634,"INIT_CTRL", false,-1, 2,0);
    tracep->declBus(c+1657,"WRITE_CMD", false,-1, 2,0);
    tracep->declBus(c+1686,"START_TRANS", false,-1, 2,0);
    tracep->declBus(c+1687,"WAIT_TRANS", false,-1, 2,0);
    tracep->declBus(c+1688,"READ_DATA", false,-1, 2,0);
    tracep->declBus(c+945,"xip_state", false,-1, 2,0);
    tracep->declBit(c+1450,"spi_master_psel", false,-1);
    tracep->declBus(c+1451,"apb_paddr", false,-1, 31,0);
    tracep->declBit(c+1452,"apb_psel", false,-1);
    tracep->declBit(c+1453,"apb_penable", false,-1);
    tracep->declBus(c+1454,"apb_pprot", false,-1, 2,0);
    tracep->declBit(c+1455,"apb_pwrite", false,-1);
    tracep->declBus(c+1456,"apb_pwdata", false,-1, 31,0);
    tracep->declBus(c+1457,"apb_pstrb", false,-1, 3,0);
    tracep->declBit(c+1086,"apb_pready", false,-1);
    tracep->declBus(c+1087,"apb_prdata", false,-1, 31,0);
    tracep->declBit(c+1609,"apb_pslverr", false,-1);
    tracep->declBit(c+1458,"flash_xip_sel", false,-1);
    tracep->declBus(c+946,"flash_xip_paddr", false,-1, 31,0);
    tracep->declBit(c+947,"flash_xip_psel", false,-1);
    tracep->declBit(c+948,"flash_xip_penable", false,-1);
    tracep->declBus(c+1608,"flash_xip_pprot", false,-1, 2,0);
    tracep->declBit(c+949,"flash_xip_pwrite", false,-1);
    tracep->declBus(c+950,"flash_xip_pwdata", false,-1, 31,0);
    tracep->declBus(c+1004,"flash_xip_pstrb", false,-1, 3,0);
    tracep->declBit(c+951,"flash_xip_pready", false,-1);
    tracep->declBus(c+952,"flash_xip_prdata", false,-1, 31,0);
    tracep->declBit(c+1609,"flash_xip_pslverr", false,-1);
    tracep->declBit(c+1612,"spi_ctrl_ass", false,-1);
    tracep->declBit(c+1612,"spi_ctrl_ie", false,-1);
    tracep->declBus(c+1689,"spi_ctrl_char_len", false,-1, 6,0);
    tracep->declBit(c+1609,"spi_ctrl_reserved", false,-1);
    tracep->declBit(c+1612,"spi_ctrl_tx_neg", false,-1);
    tracep->declBit(c+1609,"spi_ctrl_rx_neg", false,-1);
    tracep->declBit(c+1609,"spi_ctrl_lsb", false,-1);
    tracep->declBus(c+995,"spi_ctrl_data", false,-1, 31,0);
    tracep->declBit(c+996,"spi_ctrl_go", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1656,"Tp", false,-1, 31,0);
    tracep->declBit(c+1546,"wb_clk_i", false,-1);
    tracep->declBit(c+1547,"wb_rst_i", false,-1);
    tracep->declBus(c+1459,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1456,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1087,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1457,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1455,"wb_we_i", false,-1);
    tracep->declBit(c+1452,"wb_stb_i", false,-1);
    tracep->declBit(c+1453,"wb_cyc_i", false,-1);
    tracep->declBit(c+1086,"wb_ack_o", false,-1);
    tracep->declBit(c+1609,"wb_err_o", false,-1);
    tracep->declBit(c+1085,"wb_int_o", false,-1);
    tracep->declBus(c+1006,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+1005,"sclk_pad_o", false,-1);
    tracep->declBit(c+1568,"mosi_pad_o", false,-1);
    tracep->declBit(c+1569,"miso_pad_i", false,-1);
    tracep->declBus(c+1088,"divider", false,-1, 15,0);
    tracep->declBus(c+1089,"ctrl", false,-1, 13,0);
    tracep->declBus(c+1090,"ss", false,-1, 7,0);
    tracep->declBus(c+1509,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+1091,"rx", false,-1, 127,0);
    tracep->declBit(c+1095,"rx_negedge", false,-1);
    tracep->declBit(c+1096,"tx_negedge", false,-1);
    tracep->declBus(c+1097,"char_len", false,-1, 6,0);
    tracep->declBit(c+1098,"go", false,-1);
    tracep->declBit(c+1099,"lsb", false,-1);
    tracep->declBit(c+1100,"ie", false,-1);
    tracep->declBit(c+1101,"ass", false,-1);
    tracep->declBit(c+1460,"spi_divider_sel", false,-1);
    tracep->declBit(c+1461,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1462,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1463,"spi_ss_sel", false,-1);
    tracep->declBit(c+1102,"tip", false,-1);
    tracep->declBit(c+1103,"pos_edge", false,-1);
    tracep->declBit(c+1104,"neg_edge", false,-1);
    tracep->declBit(c+1105,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1656,"Tp", false,-1, 31,0);
    tracep->declBit(c+1546,"clk_in", false,-1);
    tracep->declBit(c+1547,"rst", false,-1);
    tracep->declBit(c+1102,"enable", false,-1);
    tracep->declBit(c+1098,"go", false,-1);
    tracep->declBit(c+1105,"last_clk", false,-1);
    tracep->declBus(c+1088,"divider", false,-1, 15,0);
    tracep->declBit(c+1005,"clk_out", false,-1);
    tracep->declBit(c+1103,"pos_edge", false,-1);
    tracep->declBit(c+1104,"neg_edge", false,-1);
    tracep->declBus(c+1106,"cnt", false,-1, 15,0);
    tracep->declBit(c+1107,"cnt_zero", false,-1);
    tracep->declBit(c+1108,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1656,"Tp", false,-1, 31,0);
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+1547,"rst", false,-1);
    tracep->declBus(c+1464,"latch", false,-1, 3,0);
    tracep->declBus(c+1457,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+1097,"len", false,-1, 6,0);
    tracep->declBit(c+1099,"lsb", false,-1);
    tracep->declBit(c+1098,"go", false,-1);
    tracep->declBit(c+1103,"pos_edge", false,-1);
    tracep->declBit(c+1104,"neg_edge", false,-1);
    tracep->declBit(c+1095,"rx_negedge", false,-1);
    tracep->declBit(c+1096,"tx_negedge", false,-1);
    tracep->declBit(c+1102,"tip", false,-1);
    tracep->declBit(c+1105,"last", false,-1);
    tracep->declBus(c+1456,"p_in", false,-1, 31,0);
    tracep->declArray(c+1091,"p_out", false,-1, 127,0);
    tracep->declBit(c+1005,"s_clk", false,-1);
    tracep->declBit(c+1569,"s_in", false,-1);
    tracep->declBit(c+1568,"s_out", false,-1);
    tracep->declBus(c+1109,"cnt", false,-1, 7,0);
    tracep->declArray(c+1091,"data", false,-1, 127,0);
    tracep->declBus(c+1110,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+1111,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+1112,"rx_clk", false,-1);
    tracep->declBit(c+1113,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+1388,"auto_in_psel", false,-1);
    tracep->declBit(c+1389,"auto_in_penable", false,-1);
    tracep->declBit(c+1376,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1383,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1608,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+265,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1390,"auto_in_pready", false,-1);
    tracep->declBit(c+1609,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1574,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1566,"uart_rx", false,-1);
    tracep->declBit(c+1567,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1388,"in_psel", false,-1);
    tracep->declBit(c+1389,"in_penable", false,-1);
    tracep->declBus(c+1608,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1390,"in_pready", false,-1);
    tracep->declBit(c+1609,"in_pslverr", false,-1);
    tracep->declBus(c+1434,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1376,"in_pwrite", false,-1);
    tracep->declBus(c+1574,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+265,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1566,"uart_rx", false,-1);
    tracep->declBit(c+1567,"uart_tx", false,-1);
    tracep->declBit(c+1114,"rtsn", false,-1);
    tracep->declBit(c+1609,"ctsn", false,-1);
    tracep->declBit(c+1115,"dtr_pad_o", false,-1);
    tracep->declBit(c+1609,"dsr_pad_i", false,-1);
    tracep->declBit(c+1609,"ri_pad_i", false,-1);
    tracep->declBit(c+1609,"dcd_pad_i", false,-1);
    tracep->declBit(c+1116,"interrupt", false,-1);
    tracep->declBit(c+106,"reg_we", false,-1);
    tracep->declBit(c+107,"reg_re", false,-1);
    tracep->declBus(c+1465,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1466,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+953,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1510,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+1117,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+1547,"wb_rst_i", false,-1);
    tracep->declBus(c+1465,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1467,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1510,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+106,"wb_we_i", false,-1);
    tracep->declBit(c+107,"wb_re_i", false,-1);
    tracep->declBit(c+1567,"stx_pad_o", false,-1);
    tracep->declBit(c+1566,"srx_pad_i", false,-1);
    tracep->declBus(c+1678,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+1117,"rts_pad_o", false,-1);
    tracep->declBit(c+1115,"dtr_pad_o", false,-1);
    tracep->declBit(c+1116,"int_o", false,-1);
    tracep->declBit(c+1118,"enable", false,-1);
    tracep->declBit(c+1119,"srx_pad", false,-1);
    tracep->declBus(c+1120,"ier", false,-1, 3,0);
    tracep->declBus(c+1121,"iir", false,-1, 3,0);
    tracep->declBus(c+1122,"fcr", false,-1, 1,0);
    tracep->declBus(c+1123,"mcr", false,-1, 4,0);
    tracep->declBus(c+1124,"lcr", false,-1, 7,0);
    tracep->declBus(c+1125,"msr", false,-1, 7,0);
    tracep->declBus(c+1126,"dl", false,-1, 15,0);
    tracep->declBus(c+1127,"scratch", false,-1, 7,0);
    tracep->declBit(c+1128,"start_dlc", false,-1);
    tracep->declBit(c+1129,"lsr_mask_d", false,-1);
    tracep->declBit(c+1130,"msi_reset", false,-1);
    tracep->declBus(c+1131,"dlc", false,-1, 15,0);
    tracep->declBus(c+1132,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+1133,"rx_reset", false,-1);
    tracep->declBit(c+1134,"tx_reset", false,-1);
    tracep->declBit(c+1135,"dlab", false,-1);
    tracep->declBit(c+1612,"cts_pad_i", false,-1);
    tracep->declBit(c+1609,"dsr_pad_i", false,-1);
    tracep->declBit(c+1609,"ri_pad_i", false,-1);
    tracep->declBit(c+1609,"dcd_pad_i", false,-1);
    tracep->declBit(c+1136,"loopback", false,-1);
    tracep->declBit(c+1609,"cts", false,-1);
    tracep->declBit(c+1612,"dsr", false,-1);
    tracep->declBit(c+1612,"ri", false,-1);
    tracep->declBit(c+1612,"dcd", false,-1);
    tracep->declBit(c+1137,"cts_c", false,-1);
    tracep->declBit(c+1138,"dsr_c", false,-1);
    tracep->declBit(c+1139,"ri_c", false,-1);
    tracep->declBit(c+1140,"dcd_c", false,-1);
    tracep->declBus(c+1141,"lsr", false,-1, 7,0);
    tracep->declBit(c+1142,"lsr0", false,-1);
    tracep->declBit(c+1143,"lsr1", false,-1);
    tracep->declBit(c+1144,"lsr2", false,-1);
    tracep->declBit(c+1145,"lsr3", false,-1);
    tracep->declBit(c+1146,"lsr4", false,-1);
    tracep->declBit(c+1147,"lsr5", false,-1);
    tracep->declBit(c+1148,"lsr6", false,-1);
    tracep->declBit(c+1149,"lsr7", false,-1);
    tracep->declBit(c+1150,"lsr0r", false,-1);
    tracep->declBit(c+1151,"lsr1r", false,-1);
    tracep->declBit(c+1152,"lsr2r", false,-1);
    tracep->declBit(c+1153,"lsr3r", false,-1);
    tracep->declBit(c+1154,"lsr4r", false,-1);
    tracep->declBit(c+1155,"lsr5r", false,-1);
    tracep->declBit(c+1156,"lsr6r", false,-1);
    tracep->declBit(c+1157,"lsr7r", false,-1);
    tracep->declBit(c+162,"lsr_mask", false,-1);
    tracep->declBit(c+1158,"rls_int", false,-1);
    tracep->declBit(c+1159,"rda_int", false,-1);
    tracep->declBit(c+1160,"ti_int", false,-1);
    tracep->declBit(c+1161,"thre_int", false,-1);
    tracep->declBit(c+1162,"ms_int", false,-1);
    tracep->declBit(c+1163,"tf_push", false,-1);
    tracep->declBit(c+1164,"rf_pop", false,-1);
    tracep->declBus(c+997,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1165,"rf_error_bit", false,-1);
    tracep->declBit(c+1143,"rf_overrun", false,-1);
    tracep->declBit(c+1166,"rf_push_pulse", false,-1);
    tracep->declBus(c+1167,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1168,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1169,"tstate", false,-1, 2,0);
    tracep->declBus(c+1170,"rstate", false,-1, 3,0);
    tracep->declBus(c+1171,"counter_t", false,-1, 9,0);
    tracep->declBit(c+1172,"thre_set_en", false,-1);
    tracep->declBus(c+1173,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+1174,"block_value", false,-1, 7,0);
    tracep->declBit(c+1175,"serial_out", false,-1);
    tracep->declBit(c+1176,"serial_in", false,-1);
    tracep->declBit(c+163,"lsr_mask_condition", false,-1);
    tracep->declBit(c+164,"iir_read", false,-1);
    tracep->declBit(c+165,"msr_read", false,-1);
    tracep->declBit(c+166,"fifo_read", false,-1);
    tracep->declBit(c+167,"fifo_write", false,-1);
    tracep->declBus(c+1177,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+1178,"lsr0_d", false,-1);
    tracep->declBit(c+1179,"lsr1_d", false,-1);
    tracep->declBit(c+1180,"lsr2_d", false,-1);
    tracep->declBit(c+1181,"lsr3_d", false,-1);
    tracep->declBit(c+1182,"lsr4_d", false,-1);
    tracep->declBit(c+1183,"lsr5_d", false,-1);
    tracep->declBit(c+1184,"lsr6_d", false,-1);
    tracep->declBit(c+1185,"lsr7_d", false,-1);
    tracep->declBit(c+1186,"rls_int_d", false,-1);
    tracep->declBit(c+1187,"thre_int_d", false,-1);
    tracep->declBit(c+1188,"ms_int_d", false,-1);
    tracep->declBit(c+1189,"ti_int_d", false,-1);
    tracep->declBit(c+1190,"rda_int_d", false,-1);
    tracep->declBit(c+1191,"rls_int_rise", false,-1);
    tracep->declBit(c+1192,"thre_int_rise", false,-1);
    tracep->declBit(c+1193,"ms_int_rise", false,-1);
    tracep->declBit(c+1194,"ti_int_rise", false,-1);
    tracep->declBit(c+1195,"rda_int_rise", false,-1);
    tracep->declBit(c+1196,"rls_int_pnd", false,-1);
    tracep->declBit(c+1197,"rda_int_pnd", false,-1);
    tracep->declBit(c+1198,"thre_int_pnd", false,-1);
    tracep->declBit(c+1199,"ms_int_pnd", false,-1);
    tracep->declBit(c+1200,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1656,"Tp", false,-1, 31,0);
    tracep->declBus(c+1656,"width", false,-1, 31,0);
    tracep->declBus(c+1640,"init_value", false,-1, 0,0);
    tracep->declBit(c+1547,"rst_i", false,-1);
    tracep->declBit(c+1546,"clk_i", false,-1);
    tracep->declBit(c+1609,"stage1_rst_i", false,-1);
    tracep->declBit(c+1612,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1566,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+1119,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+1201,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+1547,"wb_rst_i", false,-1);
    tracep->declBus(c+1124,"lcr", false,-1, 7,0);
    tracep->declBit(c+1164,"rf_pop", false,-1);
    tracep->declBit(c+1176,"srx_pad_i", false,-1);
    tracep->declBit(c+1118,"enable", false,-1);
    tracep->declBit(c+1133,"rx_reset", false,-1);
    tracep->declBit(c+162,"lsr_mask", false,-1);
    tracep->declBus(c+1171,"counter_t", false,-1, 9,0);
    tracep->declBus(c+1167,"rf_count", false,-1, 4,0);
    tracep->declBus(c+997,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1143,"rf_overrun", false,-1);
    tracep->declBit(c+1165,"rf_error_bit", false,-1);
    tracep->declBus(c+1170,"rstate", false,-1, 3,0);
    tracep->declBit(c+1166,"rf_push_pulse", false,-1);
    tracep->declBus(c+1202,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+1203,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+1204,"rshift", false,-1, 7,0);
    tracep->declBit(c+1205,"rparity", false,-1);
    tracep->declBit(c+1206,"rparity_error", false,-1);
    tracep->declBit(c+1207,"rframing_error", false,-1);
    tracep->declBit(c+1208,"rbit_in", false,-1);
    tracep->declBit(c+1209,"rparity_xor", false,-1);
    tracep->declBus(c+1210,"counter_b", false,-1, 7,0);
    tracep->declBit(c+1211,"rf_push_q", false,-1);
    tracep->declBus(c+1212,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+1213,"rf_push", false,-1);
    tracep->declBit(c+1214,"break_error", false,-1);
    tracep->declBit(c+1215,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+1216,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+1217,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+1218,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1616,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1629,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1676,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1672,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1674,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1673,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1675,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1671,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1678,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1679,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1690,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1219,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1220,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1691,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1645,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1646,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1692,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+1547,"wb_rst_i", false,-1);
    tracep->declBit(c+1166,"push", false,-1);
    tracep->declBit(c+1164,"pop", false,-1);
    tracep->declBus(c+1212,"data_in", false,-1, 10,0);
    tracep->declBit(c+1133,"fifo_reset", false,-1);
    tracep->declBit(c+162,"reset_status", false,-1);
    tracep->declBus(c+997,"data_out", false,-1, 10,0);
    tracep->declBit(c+1143,"overrun", false,-1);
    tracep->declBus(c+1167,"count", false,-1, 4,0);
    tracep->declBit(c+1165,"error_bit", false,-1);
    tracep->declBus(c+998,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1221+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1237,"top", false,-1, 3,0);
    tracep->declBus(c+1238,"bottom", false,-1, 3,0);
    tracep->declBus(c+1239,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1240,"word0", false,-1, 2,0);
    tracep->declBus(c+1241,"word1", false,-1, 2,0);
    tracep->declBus(c+1242,"word2", false,-1, 2,0);
    tracep->declBus(c+1243,"word3", false,-1, 2,0);
    tracep->declBus(c+1244,"word4", false,-1, 2,0);
    tracep->declBus(c+1245,"word5", false,-1, 2,0);
    tracep->declBus(c+1246,"word6", false,-1, 2,0);
    tracep->declBus(c+1247,"word7", false,-1, 2,0);
    tracep->declBus(c+1248,"word8", false,-1, 2,0);
    tracep->declBus(c+1249,"word9", false,-1, 2,0);
    tracep->declBus(c+1250,"word10", false,-1, 2,0);
    tracep->declBus(c+1251,"word11", false,-1, 2,0);
    tracep->declBus(c+1252,"word12", false,-1, 2,0);
    tracep->declBus(c+1253,"word13", false,-1, 2,0);
    tracep->declBus(c+1254,"word14", false,-1, 2,0);
    tracep->declBus(c+1255,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1646,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1666,"data_width", false,-1, 31,0);
    tracep->declBus(c+1645,"depth", false,-1, 31,0);
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+1166,"we", false,-1);
    tracep->declBus(c+1237,"a", false,-1, 3,0);
    tracep->declBus(c+1238,"dpra", false,-1, 3,0);
    tracep->declBus(c+1256,"di", false,-1, 7,0);
    tracep->declBus(c+998,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+954+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+1547,"wb_rst_i", false,-1);
    tracep->declBus(c+1124,"lcr", false,-1, 7,0);
    tracep->declBit(c+1163,"tf_push", false,-1);
    tracep->declBus(c+1467,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+1118,"enable", false,-1);
    tracep->declBit(c+1134,"tx_reset", false,-1);
    tracep->declBit(c+162,"lsr_mask", false,-1);
    tracep->declBit(c+1175,"stx_pad_o", false,-1);
    tracep->declBus(c+1169,"tstate", false,-1, 2,0);
    tracep->declBus(c+1168,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1257,"counter", false,-1, 4,0);
    tracep->declBus(c+1258,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1259,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1260,"stx_o_tmp", false,-1);
    tracep->declBit(c+1261,"parity_xor", false,-1);
    tracep->declBit(c+1262,"tf_pop", false,-1);
    tracep->declBit(c+1263,"bit_out", false,-1);
    tracep->declBus(c+1467,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1511,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1264,"tf_overrun", false,-1);
    tracep->declBus(c+1618,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1608,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1633,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1634,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1657,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1686,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1666,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1645,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1646,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1692,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+1547,"wb_rst_i", false,-1);
    tracep->declBit(c+1163,"push", false,-1);
    tracep->declBit(c+1262,"pop", false,-1);
    tracep->declBus(c+1467,"data_in", false,-1, 7,0);
    tracep->declBit(c+1134,"fifo_reset", false,-1);
    tracep->declBit(c+162,"reset_status", false,-1);
    tracep->declBus(c+1511,"data_out", false,-1, 7,0);
    tracep->declBit(c+1264,"overrun", false,-1);
    tracep->declBus(c+1168,"count", false,-1, 4,0);
    tracep->declBus(c+1265,"top", false,-1, 3,0);
    tracep->declBus(c+1266,"bottom", false,-1, 3,0);
    tracep->declBus(c+1267,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1646,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1666,"data_width", false,-1, 31,0);
    tracep->declBus(c+1645,"depth", false,-1, 31,0);
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+1163,"we", false,-1);
    tracep->declBus(c+1265,"a", false,-1, 3,0);
    tracep->declBus(c+1266,"dpra", false,-1, 3,0);
    tracep->declBus(c+1467,"di", false,-1, 7,0);
    tracep->declBus(c+1511,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+970+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBit(c+1379,"auto_in_psel", false,-1);
    tracep->declBit(c+1380,"auto_in_penable", false,-1);
    tracep->declBit(c+1376,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1381,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1608,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+265,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+266,"auto_in_pready", false,-1);
    tracep->declBit(c+1609,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1610,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1560,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1561,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1562,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1563,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1564,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1565,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1546,"clock", false,-1);
    tracep->declBit(c+1547,"reset", false,-1);
    tracep->declBus(c+1447,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1379,"in_psel", false,-1);
    tracep->declBit(c+1380,"in_penable", false,-1);
    tracep->declBus(c+1608,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1376,"in_pwrite", false,-1);
    tracep->declBus(c+265,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1377,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+266,"in_pready", false,-1);
    tracep->declBus(c+1610,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1609,"in_pslverr", false,-1);
    tracep->declBus(c+1560,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1561,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1562,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1563,"vga_hsync", false,-1);
    tracep->declBit(c+1564,"vga_vsync", false,-1);
    tracep->declBit(c+1565,"vga_valid", false,-1);
    tracep->declBus(c+1693,"NUM", false,-1, 31,0);
    tracep->declBit(c+986,"sync_reg", false,-1);
    tracep->declBus(c+1694,"H_FRONT", false,-1, 31,0);
    tracep->declBus(c+1695,"H_ACT", false,-1, 31,0);
    tracep->declBus(c+1696,"H_BACK", false,-1, 31,0);
    tracep->declBus(c+1697,"H_TOTAL", false,-1, 31,0);
    tracep->declBus(c+1647,"V_FRONT", false,-1, 31,0);
    tracep->declBus(c+1698,"V_ACT", false,-1, 31,0);
    tracep->declBus(c+1699,"V_BACK", false,-1, 31,0);
    tracep->declBus(c+1700,"V_TOTAL", false,-1, 31,0);
    tracep->declBus(c+1701,"VGA_SYNC", false,-1, 31,0);
    tracep->declBus(c+987,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+988,"y_cnt", false,-1, 9,0);
    tracep->declBus(c+989,"cnt", false,-1, 20,0);
    tracep->declBit(c+990,"h_valid", false,-1);
    tracep->declBit(c+991,"v_valid", false,-1);
    tracep->declBus(c+1610,"VGA_IDLE", false,-1, 31,0);
    tracep->declBus(c+1656,"VGA_WRITE", false,-1, 31,0);
    tracep->declBus(c+992,"vga_state", false,-1, 1,0);
    tracep->declBus(c+993,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+1005,"sck", false,-1);
    tracep->declBit(c+1596,"ss", false,-1);
    tracep->declBit(c+1568,"mosi", false,-1);
    tracep->declBit(c+1597,"miso", false,-1);
    tracep->declBus(c+1538,"data_in", false,-1, 7,0);
    tracep->declBus(c+1539,"data_out", false,-1, 7,0);
    tracep->declBus(c+1540,"bit_cnt", false,-1, 2,0);
    tracep->declBit(c+1541,"receiving", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+1005,"sck", false,-1);
    tracep->declBit(c+1268,"ss", false,-1);
    tracep->declBit(c+1568,"mosi", false,-1);
    tracep->declBit(c+1598,"miso", false,-1);
    tracep->declBit(c+1268,"reset", false,-1);
    tracep->declBus(c+1368,"state", false,-1, 2,0);
    tracep->declBus(c+1369,"counter", false,-1, 7,0);
    tracep->declBus(c+1370,"cmd", false,-1, 7,0);
    tracep->declBus(c+1371,"addr", false,-1, 23,0);
    tracep->declBus(c+1372,"data", false,-1, 31,0);
    tracep->declBit(c+1373,"ren", false,-1);
    tracep->declBus(c+1599,"rdata", false,-1, 31,0);
    tracep->declBus(c+1600,"raddr", false,-1, 31,0);
    tracep->declBus(c+1601,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+1005,"clock", false,-1);
    tracep->declBit(c+1373,"valid", false,-1);
    tracep->declBus(c+1370,"cmd", false,-1, 7,0);
    tracep->declBus(c+1600,"addr", false,-1, 31,0);
    tracep->declBus(c+1599,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1468,"sck", false,-1);
    tracep->declBit(c+1469,"ce_n", false,-1);
    tracep->declBus(c+1570,"dio", false,-1, 3,0);
    tracep->declBus(c+1659,"RCMD", false,-1, 7,0);
    tracep->declBus(c+1660,"WCMD", false,-1, 7,0);
    tracep->declBus(c+1702,"QPICMD", false,-1, 7,0);
    tracep->declBus(c+1533,"dout_en", false,-1, 3,0);
    tracep->declBus(c+1602,"dout", false,-1, 3,0);
    tracep->declBus(c+1570,"din", false,-1, 3,0);
    tracep->declBit(c+1603,"QPI_MODE", false,-1);
    tracep->declBus(c+1534,"cmd", false,-1, 7,0);
    tracep->declBus(c+1535,"addr", false,-1, 23,0);
    tracep->declBus(c+1604,"data", false,-1, 31,0);
    tracep->declBus(c+1605,"rdata", false,-1, 31,0);
    tracep->declBus(c+1536,"cnt", false,-1, 7,0);
    tracep->declBus(c+1537,"state", false,-1, 2,0);
    tracep->declBus(c+1618,"CMD", false,-1, 2,0);
    tracep->declBus(c+1608,"ADDR", false,-1, 2,0);
    tracep->declBus(c+1633,"DATA", false,-1, 2,0);
    tracep->declBus(c+1634,"DELAY", false,-1, 2,0);
    tracep->declBus(c+1657,"ERR", false,-1, 2,0);
    tracep->declBus(c+1606,"data_bswap", false,-1, 31,0);
    tracep->declBus(c+1607,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1571,"clk", false,-1);
    tracep->declBit(c+1512,"cke", false,-1);
    tracep->declBit(c+1513,"cs", false,-1);
    tracep->declBit(c+1514,"ras", false,-1);
    tracep->declBit(c+1515,"cas", false,-1);
    tracep->declBit(c+1516,"we", false,-1);
    tracep->declBus(c+1572,"a", false,-1, 13,0);
    tracep->declBus(c+1517,"ba", false,-1, 1,0);
    tracep->declBus(c+1518,"dqm", false,-1, 3,0);
    tracep->declBus(c+1530,"dq", false,-1, 31,0);
    tracep->declBus(c+1521,"addr", false,-1, 12,0);
    tracep->declBit(c+261,"bank_sel", false,-1);
    tracep->pushNamePrefix("sdram_32_u0 ");
    tracep->declBit(c+1571,"clk", false,-1);
    tracep->declBit(c+1512,"cke", false,-1);
    tracep->declBit(c+262,"cs", false,-1);
    tracep->declBit(c+1514,"ras", false,-1);
    tracep->declBit(c+1515,"cas", false,-1);
    tracep->declBit(c+1516,"we", false,-1);
    tracep->declBus(c+1521,"a", false,-1, 12,0);
    tracep->declBus(c+1517,"ba", false,-1, 1,0);
    tracep->declBus(c+1518,"dqm", false,-1, 3,0);
    tracep->declBus(c+1530,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("sdram_16_u1 ");
    tracep->declBit(c+1571,"clk", false,-1);
    tracep->declBit(c+1512,"cke", false,-1);
    tracep->declBit(c+262,"cs", false,-1);
    tracep->declBit(c+1514,"ras", false,-1);
    tracep->declBit(c+1515,"cas", false,-1);
    tracep->declBit(c+1516,"we", false,-1);
    tracep->declBus(c+1521,"a", false,-1, 12,0);
    tracep->declBus(c+1517,"ba", false,-1, 1,0);
    tracep->declBus(c+1527,"dqm", false,-1, 1,0);
    tracep->declBus(c+1531,"dq", false,-1, 15,0);
    tracep->declBus(c+1528,"cmd", false,-1, 2,0);
    tracep->declBus(c+1688,"NOP", false,-1, 2,0);
    tracep->declBus(c+1634,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1686,"READ", false,-1, 2,0);
    tracep->declBus(c+1657,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1687,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1633,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1608,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1618,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1703,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1269+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1273,"den", false,-1, 15,0);
    tracep->declBus(c+1531,"din", false,-1, 15,0);
    tracep->declBus(c+1274,"dout", false,-1, 15,0);
    tracep->declBus(c+1275,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1276,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1277,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1278,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1279,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1280,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1281,"read_flag", false,-1);
    tracep->declBus(c+1282,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1283,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1284,"w_data", false,-1, 15,0);
    tracep->declBus(c+1285,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1286,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1287,"Length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_16_u2 ");
    tracep->declBit(c+1571,"clk", false,-1);
    tracep->declBit(c+1512,"cke", false,-1);
    tracep->declBit(c+262,"cs", false,-1);
    tracep->declBit(c+1514,"ras", false,-1);
    tracep->declBit(c+1515,"cas", false,-1);
    tracep->declBit(c+1516,"we", false,-1);
    tracep->declBus(c+1521,"a", false,-1, 12,0);
    tracep->declBus(c+1517,"ba", false,-1, 1,0);
    tracep->declBus(c+1529,"dqm", false,-1, 1,0);
    tracep->declBus(c+1532,"dq", false,-1, 15,0);
    tracep->declBus(c+1528,"cmd", false,-1, 2,0);
    tracep->declBus(c+1688,"NOP", false,-1, 2,0);
    tracep->declBus(c+1634,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1686,"READ", false,-1, 2,0);
    tracep->declBus(c+1657,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1687,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1633,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1608,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1618,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1703,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1288+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1292,"den", false,-1, 15,0);
    tracep->declBus(c+1532,"din", false,-1, 15,0);
    tracep->declBus(c+1293,"dout", false,-1, 15,0);
    tracep->declBus(c+1294,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1295,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1296,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1297,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1298,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1299,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1300,"read_flag", false,-1);
    tracep->declBus(c+1301,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1302,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1303,"w_data", false,-1, 15,0);
    tracep->declBus(c+1304,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1305,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1306,"Length", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram_32_u1 ");
    tracep->declBit(c+1571,"clk", false,-1);
    tracep->declBit(c+1512,"cke", false,-1);
    tracep->declBit(c+263,"cs", false,-1);
    tracep->declBit(c+1514,"ras", false,-1);
    tracep->declBit(c+1515,"cas", false,-1);
    tracep->declBit(c+1516,"we", false,-1);
    tracep->declBus(c+1521,"a", false,-1, 12,0);
    tracep->declBus(c+1517,"ba", false,-1, 1,0);
    tracep->declBus(c+1518,"dqm", false,-1, 3,0);
    tracep->declBus(c+1530,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("sdram_16_u1 ");
    tracep->declBit(c+1571,"clk", false,-1);
    tracep->declBit(c+1512,"cke", false,-1);
    tracep->declBit(c+263,"cs", false,-1);
    tracep->declBit(c+1514,"ras", false,-1);
    tracep->declBit(c+1515,"cas", false,-1);
    tracep->declBit(c+1516,"we", false,-1);
    tracep->declBus(c+1521,"a", false,-1, 12,0);
    tracep->declBus(c+1517,"ba", false,-1, 1,0);
    tracep->declBus(c+1527,"dqm", false,-1, 1,0);
    tracep->declBus(c+1531,"dq", false,-1, 15,0);
    tracep->declBus(c+1528,"cmd", false,-1, 2,0);
    tracep->declBus(c+1688,"NOP", false,-1, 2,0);
    tracep->declBus(c+1634,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1686,"READ", false,-1, 2,0);
    tracep->declBus(c+1657,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1687,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1633,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1608,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1618,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1703,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1307+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1311,"den", false,-1, 15,0);
    tracep->declBus(c+1531,"din", false,-1, 15,0);
    tracep->declBus(c+1312,"dout", false,-1, 15,0);
    tracep->declBus(c+1313,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1314,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1315,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1316,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1317,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1318,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1319,"read_flag", false,-1);
    tracep->declBus(c+1320,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1321,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1322,"w_data", false,-1, 15,0);
    tracep->declBus(c+1323,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1324,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1325,"Length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_16_u2 ");
    tracep->declBit(c+1571,"clk", false,-1);
    tracep->declBit(c+1512,"cke", false,-1);
    tracep->declBit(c+263,"cs", false,-1);
    tracep->declBit(c+1514,"ras", false,-1);
    tracep->declBit(c+1515,"cas", false,-1);
    tracep->declBit(c+1516,"we", false,-1);
    tracep->declBus(c+1521,"a", false,-1, 12,0);
    tracep->declBus(c+1517,"ba", false,-1, 1,0);
    tracep->declBus(c+1529,"dqm", false,-1, 1,0);
    tracep->declBus(c+1532,"dq", false,-1, 15,0);
    tracep->declBus(c+1528,"cmd", false,-1, 2,0);
    tracep->declBus(c+1688,"NOP", false,-1, 2,0);
    tracep->declBus(c+1634,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1686,"READ", false,-1, 2,0);
    tracep->declBus(c+1657,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1687,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1633,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1608,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1618,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1703,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1326+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1330,"den", false,-1, 15,0);
    tracep->declBus(c+1532,"din", false,-1, 15,0);
    tracep->declBus(c+1331,"dout", false,-1, 15,0);
    tracep->declBus(c+1332,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1333,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1334,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1335,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1336,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1337,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1338,"read_flag", false,-1);
    tracep->declBus(c+1339,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1340,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1341,"w_data", false,-1, 15,0);
    tracep->declBus(c+1342,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1343,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1344,"Length", false,-1, 3,0);
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
    bufp->fullBit(oldp+1,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+2,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullBit(oldp+3,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                  >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))));
    bufp->fullBit(oldp+4,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                  >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+5,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                           & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+6,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+7,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+8,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+9,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+10,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+11,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+12,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+13,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                            & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+14,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+15,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+16,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+17,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+18,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+19,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+20,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+21,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+22,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+23,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 9U)))));
    bufp->fullBit(oldp+24,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+25,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+26,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+27,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+28,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+29,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+30,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+31,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+32,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+33,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+34,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+35,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+36,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+37,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullCData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+42,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+45,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+47,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                               << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                             << 0xbU) 
                                            | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+50,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                               << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid),4);
    bufp->fullIData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen),8);
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst),2);
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullIData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+65,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullCData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+76,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+77,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                               >> 2U))));
    bufp->fullBit(oldp+78,((0x7800U == (0x7fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xdU)))));
    bufp->fullSData(oldp+79,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                        >> 2U))),11);
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullSData(oldp+85,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)))),16);
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullCData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+93,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                            & (0U == ((6U & (4U ^ (0x1eU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1bU)))) 
                                      | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x18U)))))));
    bufp->fullBit(oldp+94,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                               >> 1U))));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+96,((0U == ((6U & (4U ^ (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                   | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                            >> 0x18U))))));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+98,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullBit(oldp+108,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+109,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+110,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+111,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+112,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+113,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+114,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+115,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+116,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+117,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+118,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+119,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+120,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+121,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+122,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+123,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+124,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullIData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_rdata),32);
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_rvalid));
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_rid),4);
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_rlast));
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_rresp),2);
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_bresp),2);
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_bid),4);
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_bvalid));
    bufp->fullIData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_if_rdata),32);
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_if_rvalid));
    bufp->fullCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_if_rid),4);
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_if_rlast));
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_if_rresp),2);
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__next_state),2);
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+168,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+174,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+184,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+189,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+190,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullSData(oldp+191,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullSData(oldp+195,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid)))),16);
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+198,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+199,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullSData(oldp+203,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_arready));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_if_arready));
    bufp->fullIData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullCData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullIData(oldp+212,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+215,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+216,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+217,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+218,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+219,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+220,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+221,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+222,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+223,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+224,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+225,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+226,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+227,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+228,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+229,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+230,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_awready));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_wready));
    bufp->fullIData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w),32);
    bufp->fullCData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+256,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+257,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+258,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                     >> 0xaU))),2);
    bufp->fullCData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_double),3);
    bufp->fullCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullBit(oldp+261,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sdram_32_u0__cs));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sdram_32_u1__cs));
    bufp->fullBit(oldp+264,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullBit(oldp+266,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_state))));
    bufp->fullIData(oldp+267,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+269,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+270,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+271,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+272,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+273,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+274,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+275,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+276,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+277,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+280,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+281,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+282,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+283,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+284,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+285,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+295,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullBit(oldp+296,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+297,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+298,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+299,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+300,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+301,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+302,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+303,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+304,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+305,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+368,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+369,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+372,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+373,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+376,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+377,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+378,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+382,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+384,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+420,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+423,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+424,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+506,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+516,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+520,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+521,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+582,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+592,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+596,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+600,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+604,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+608,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+612,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+616,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+620,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+624,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+628,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+632,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+636,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+640,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+644,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+648,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+652,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+656,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+660,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+664,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+668,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+672,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+676,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+680,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+684,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+688,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+692,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+696,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+700,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+704,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+708,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+712,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+716,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_pc),32);
    bufp->fullIData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst),32);
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ready));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_RegWrite));
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_rd),4);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs1),4);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs2),4);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_zimm),5);
    bufp->fullIData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_imm),32);
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_shamt),6);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_alu_op),4);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_MemLen),5);
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_MemWrite));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_MemRead));
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_opcode),7);
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_func3),3);
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_jal));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_jalr));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr_wen1));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr_wen2));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr_ecall));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr_mret));
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr_op),2);
    bufp->fullSData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr_wr_addr1),12);
    bufp->fullSData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr_wr_addr2),12);
    bufp->fullSData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_csr_addr1),12);
    bufp->fullSData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_csr_addr2),12);
    bufp->fullIData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_inst),32);
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_valid));
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ex_ready));
    bufp->fullIData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_src2),32);
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_RegWrite));
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_rd),4);
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_MemRead));
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_MemWrite));
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_MemLen),5);
    bufp->fullIData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_process_result),32);
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr));
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_wen1));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_wen2));
    bufp->fullSData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_wr_addr1),12);
    bufp->fullSData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_wr_addr2),12);
    bufp->fullIData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_wr_data1),32);
    bufp->fullIData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_wr_data2),32);
    bufp->fullIData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_rdata),32);
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_ecall));
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_mret));
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_valid));
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_RegWrite));
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_rd),4);
    bufp->fullIData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_write_rd_data),32);
    bufp->fullIData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_csr_wr_data1),32);
    bufp->fullIData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_csr_wr_data2),32);
    bufp->fullSData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_csr_wr_addr1),12);
    bufp->fullSData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_csr_wr_addr2),12);
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_csr_wen1));
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_csr_wen2));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_valid));
    bufp->fullIData(oldp+779,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs1))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs1])),32);
    bufp->fullIData(oldp+780,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs2))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs2])),32);
    bufp->fullIData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ex_csr_num1),32);
    bufp->fullIData(oldp+782,(((0x300U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_csr_addr2))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mstatus
                                : ((0x305U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_csr_addr2))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mtvec
                                    : ((0x341U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_csr_addr2))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mepc
                                        : ((0x342U 
                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_csr_addr2))
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mcause
                                            : 0U))))),32);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__l_rd_addr),4);
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__l_rd_en));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__l_load));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_forward_las));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_arvalid));
    bufp->fullIData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_araddr),32);
    bufp->fullCData(oldp+789,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__addr_in_sdram)
                                ? 3U : 0U)),8);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_arsize),3);
    bufp->fullCData(oldp+791,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__addr_in_sdram)
                                ? 1U : 0U)),2);
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_rready));
    bufp->fullIData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_awaddr),32);
    bufp->fullCData(oldp+794,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                                | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                                   | ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                                      | (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__saved_wstrb)))))
                                ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__saved_wstrb)) 
                                         | (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__saved_wstrb)))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_awvalid));
    bufp->fullIData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_wdata),32);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_wstrb),4);
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_wvalid));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_wlast));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_bready));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid));
    bufp->fullIData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr),32);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arid),4);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arlen),8);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arsize),3);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arburst),2);
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rready));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullIData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master),3);
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__clint_state));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__next_clint_state));
    bufp->fullIData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__araddr_reg),32);
    bufp->fullQData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime),64);
    bufp->fullIData(oldp+819,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime)),32);
    bufp->fullIData(oldp+820,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+821,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__araddr_reg 
                               - (IData)(0x2000000U))),32);
    bufp->fullIData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__src1),32);
    bufp->fullIData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__src2),32);
    bufp->fullIData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ex_num1),32);
    bufp->fullIData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ex_num2),32);
    bufp->fullIData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__process_result),32);
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_zero));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_less));
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ex_flush_condition));
    bufp->fullIData(oldp+830,((0x80U | ((0xffffe7f7U 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ex_csr_num1) 
                                        | (8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ex_csr_num1 
                                                 >> 4U))))),32);
    bufp->fullIData(oldp+831,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ex_csr_num1 
                                     >> 7U))),32);
    bufp->fullIData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_write_data),32);
    bufp->fullCData(oldp+833,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_h9653a62d__0) 
                                << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_h666fa1ae__0))),2);
    bufp->fullCData(oldp+834,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0) 
                                << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_h3556a05f__0))),2);
    bufp->fullBit(oldp+835,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_MemWrite) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_MemRead) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_RegWrite) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_valid) 
                                      & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_rd)) 
                                         & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_rd) 
                                             != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs1)) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_he5bf04e5__0)))))))));
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__load_use_flag),4);
    bufp->fullIData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_araddr),32);
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_arvalid));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_rready));
    bufp->fullIData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram[0]),26);
    bufp->fullIData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram[1]),26);
    bufp->fullIData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram[2]),26);
    bufp->fullIData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram[3]),26);
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[0]));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[1]));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[2]));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[3]));
    bufp->fullIData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_tag),26);
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_index),2);
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__beat_cnt),2);
    bufp->fullIData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__idx),32);
    bufp->fullIData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__b),32);
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__addr_in_sdram));
    bufp->fullCData(oldp+854,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_process_result)),4);
    bufp->fullCData(oldp+855,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_process_result 
                                     >> 2U))),2);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__saved_word_offset),2);
    bufp->fullIData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__saved_wdata),32);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__saved_wstrb),4);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__burst_cnt),4);
    bufp->fullIData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__cache_addr),32);
    bufp->fullIData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rdata),32);
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__valid));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__busy));
    bufp->fullIData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__addr_reg),32);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state),2);
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__b_done));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__ar_done));
    bufp->fullBit(oldp+870,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h86a19ed6__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_MemWrite))));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__req_valid));
    bufp->fullWData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__block_data),128);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__l_MemLen),5);
    bufp->fullIData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_lsu_data),32);
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__op_complete));
    bufp->fullIData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rd_data),32);
    bufp->fullIData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mstatus),32);
    bufp->fullIData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mtvec),32);
    bufp->fullIData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mepc),32);
    bufp->fullIData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mcause),32);
    bufp->fullIData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[0]),32);
    bufp->fullIData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[1]),32);
    bufp->fullIData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[2]),32);
    bufp->fullIData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[3]),32);
    bufp->fullIData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[4]),32);
    bufp->fullIData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[5]),32);
    bufp->fullIData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[6]),32);
    bufp->fullIData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[7]),32);
    bufp->fullIData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[8]),32);
    bufp->fullIData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[9]),32);
    bufp->fullIData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[10]),32);
    bufp->fullIData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[11]),32);
    bufp->fullIData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[12]),32);
    bufp->fullIData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[13]),32);
    bufp->fullIData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[14]),32);
    bufp->fullIData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[15]),32);
    bufp->fullIData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__i),32);
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[0]),32);
    bufp->fullIData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[1]),32);
    bufp->fullIData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[2]),32);
    bufp->fullIData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[3]),32);
    bufp->fullSData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),10);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[0]),8);
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[1]),8);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[2]),8);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[3]),8);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[4]),8);
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[5]),8);
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[6]),8);
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[7]),8);
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[8]),8);
    bufp->fullCData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[9]),8);
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[10]),8);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[11]),8);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[12]),8);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[13]),8);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[14]),8);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[15]),8);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__w_ptr),4);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__r_ptr),4);
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__isn_empty));
    bufp->fullIData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__i),32);
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+938,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+939,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+940,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),3);
    bufp->fullIData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_paddr),32);
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_psel));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pwrite));
    bufp->fullIData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pwdata),32);
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pready));
    bufp->fullIData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_prdata),32);
    bufp->fullCData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__sync_reg));
    bufp->fullSData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullSData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullIData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__cnt),21);
    bufp->fullBit(oldp+990,(((0x90U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt)) 
                             & (0x310U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt)))));
    bufp->fullBit(oldp+991,(((0x23U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt)) 
                             & (0x203U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt)))));
    bufp->fullCData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_state),2);
    bufp->fullIData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullIData(oldp+994,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__isn_empty)
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo
                                   [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__r_ptr]
                                    : 0U) : 0U)),32);
    bufp->fullIData(oldp+995,((0x3440U | (((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state)) 
                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable))) 
                                          << 8U))),32);
    bufp->fullBit(oldp+996,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable)))));
    bufp->fullSData(oldp+997,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+999,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1000,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1001,((IData)(((0U == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))))));
    bufp->fullCData(oldp+1002,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullIData(oldp+1003,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1004,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_psel) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite))
                                 ? 0xfU : 0U)),4);
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1007,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_state))));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+1009,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+1011,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 4U))));
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_state),2);
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+1016,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+1017,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+1020,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+1021,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+1026,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                       >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+1030,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+1045,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+1046,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+1048,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                  >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+1049,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U))));
    bufp->fullBit(oldp+1050,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+1051,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+1052,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+1060,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
    bufp->fullSData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready));
    bufp->fullIData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata),32);
    bufp->fullSData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+1095,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U))));
    bufp->fullBit(oldp+1096,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xaU))));
    bufp->fullCData(oldp+1097,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+1098,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 8U))));
    bufp->fullBit(oldp+1099,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1100,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1101,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+1105,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+1107,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+1108,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+1110,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                             - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                             - (IData)(1U))))),8);
    bufp->fullCData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+1114,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1115,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+1117,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 1U))));
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+1135,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                    >> 7U))));
    bufp->fullBit(oldp+1136,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 4U))));
    bufp->fullBit(oldp+1137,((IData)((0x10U != (0x12U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1138,((IData)((0x11U == (0x11U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1139,((IData)((0x14U == (0x14U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1140,((IData)((0x18U == (0x18U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+1141,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+1144,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1145,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+1146,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+1165,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+1172,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+1191,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+1192,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+1193,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+1194,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+1195,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1214,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1215,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1216,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1217,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1218,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1220,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1239,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1256,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1267,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullSData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1273,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout),16);
    bufp->fullCData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__brust_len),3);
    bufp->fullCData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank),2);
    bufp->fullCData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_cnt),4);
    bufp->fullCData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_cnt),4);
    bufp->fullBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag));
    bufp->fullSData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_addr),9);
    bufp->fullSData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_addr),9);
    bufp->fullSData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_data),16);
    bufp->fullIData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Length),4);
    bufp->fullSData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1292,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__dout),16);
    bufp->fullCData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__brust_len),3);
    bufp->fullCData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__L_Bank),2);
    bufp->fullCData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__r_cnt),4);
    bufp->fullCData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__w_cnt),4);
    bufp->fullBit(oldp+1300,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__read_flag));
    bufp->fullSData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__r_addr),9);
    bufp->fullSData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__w_addr),9);
    bufp->fullSData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__w_data),16);
    bufp->fullIData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__Length),4);
    bufp->fullSData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1311,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout),16);
    bufp->fullCData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__brust_len),3);
    bufp->fullCData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank),2);
    bufp->fullCData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_cnt),4);
    bufp->fullCData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_cnt),4);
    bufp->fullBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag));
    bufp->fullSData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_addr),9);
    bufp->fullSData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_addr),9);
    bufp->fullSData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_data),16);
    bufp->fullIData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Length),4);
    bufp->fullSData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1330,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__dout),16);
    bufp->fullCData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__brust_len),3);
    bufp->fullCData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__L_Bank),2);
    bufp->fullCData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__r_cnt),4);
    bufp->fullCData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__w_cnt),4);
    bufp->fullBit(oldp+1338,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__read_flag));
    bufp->fullSData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__r_addr),9);
    bufp->fullSData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__w_addr),9);
    bufp->fullSData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__w_data),16);
    bufp->fullIData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__Length),4);
    bufp->fullIData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_pc),32);
    bufp->fullIData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst),32);
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_valid));
    bufp->fullCData(oldp+1348,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst)),7);
    bufp->fullCData(oldp+1349,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0xfU))),4);
    bufp->fullCData(oldp+1350,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0x14U))),4);
    bufp->fullCData(oldp+1351,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                        >> 7U))),4);
    bufp->fullCData(oldp+1352,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1353,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+1354,((0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                         >> 0x14U))),6);
    bufp->fullCData(oldp+1355,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1356,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                         >> 2U))),5);
    bufp->fullIData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI),32);
    bufp->fullIData(oldp+1358,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst)),32);
    bufp->fullIData(oldp+1359,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1360,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
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
    bufp->fullIData(oldp+1361,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst) 
                                              | ((0x800U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                                       >> 0x14U)))))),32);
    bufp->fullIData(oldp+1362,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                         >> 0xfU))),32);
    bufp->fullCData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state),2);
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_req));
    bufp->fullBit(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_once));
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__once));
    bufp->fullBit(oldp+1367,((0x100fU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst)));
    bufp->fullCData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1373,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullCData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+1379,((IData)(((0x20000000U 
                                       == (0x30000000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel)))));
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1381,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+1382,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+1383,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+1384,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+1386,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____VdfgTmp_h430db664__0
                                 : 0U)),32);
    bufp->fullBit(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1390,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1393,(0U));
    bufp->fullBit(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1396,((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1399,((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullCData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+1401,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready));
    bufp->fullBit(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_flush));
    bufp->fullIData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_flush_pc),32);
    bufp->fullIData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jalr_target),32);
    bufp->fullBit(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__take_branch));
    bufp->fullIData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst),32);
    bufp->fullBit(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_valid));
    bufp->fullBit(oldp+1409,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst))));
    bufp->fullIData(oldp+1410,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst) 
                                              | ((0x800U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                       >> 0x14U)))))),32);
    bufp->fullIData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [0U][0U]),32);
    bufp->fullIData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [0U][1U]),32);
    bufp->fullIData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [0U][2U]),32);
    bufp->fullIData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [0U][3U]),32);
    bufp->fullIData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [1U][0U]),32);
    bufp->fullIData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [1U][1U]),32);
    bufp->fullIData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [1U][2U]),32);
    bufp->fullIData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [1U][3U]),32);
    bufp->fullIData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [2U][0U]),32);
    bufp->fullIData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [2U][1U]),32);
    bufp->fullIData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [2U][2U]),32);
    bufp->fullIData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [2U][3U]),32);
    bufp->fullIData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [3U][0U]),32);
    bufp->fullIData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [3U][1U]),32);
    bufp->fullIData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [3U][2U]),32);
    bufp->fullIData(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [3U][3U]),32);
    bufp->fullCData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_beat_idx),2);
    bufp->fullCData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state),2);
    bufp->fullBit(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__busy));
    bufp->fullIData(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data[0]),32);
    bufp->fullIData(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data[1]),32);
    bufp->fullIData(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data[2]),32);
    bufp->fullIData(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data[3]),32);
    bufp->fullIData(oldp+1434,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__wen));
    bufp->fullBit(oldp+1436,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready))));
    bufp->fullIData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__wdata),32);
    bufp->fullCData(oldp+1438,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullIData(oldp+1444,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1445,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+1446,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullIData(oldp+1447,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+1448,(((0x10001000U <= (0x3fffffffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                              & (0x10001fffU >= (0x3fffffffU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullBit(oldp+1449,(((0x30000000U <= (0x3fffffffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                              & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)))));
    bufp->fullBit(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel));
    bufp->fullIData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr),32);
    bufp->fullBit(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_psel));
    bufp->fullBit(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_penable));
    bufp->fullCData(oldp+1454,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                                 ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                                          ? 1U : 0U))),3);
    bufp->fullBit(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite));
    bufp->fullIData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata),32);
    bufp->fullCData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb),4);
    bufp->fullBit(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel));
    bufp->fullCData(oldp+1459,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)),5);
    bufp->fullBit(oldp+1460,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))));
    bufp->fullBit(oldp+1461,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))));
    bufp->fullCData(oldp+1462,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
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
    bufp->fullBit(oldp+1463,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))));
    bufp->fullCData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1465,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullBit(oldp+1468,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullBit(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullIData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata),32);
    bufp->fullCData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp),2);
    bufp->fullBit(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1483,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1484,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullCData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullIData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullBit(oldp+1513,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1514,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1515,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1516,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullCData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullSData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullCData(oldp+1527,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullCData(oldp+1528,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))),3);
    bufp->fullCData(oldp+1529,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullIData(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1531,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullSData(oldp+1532,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullCData(oldp+1533,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0)
                                 ? 0xfU : 0U)),4);
    bufp->fullCData(oldp+1534,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1535,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt),8);
    bufp->fullCData(oldp+1537,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_in),8);
    bufp->fullCData(oldp+1539,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_out),8);
    bufp->fullCData(oldp+1540,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt),3);
    bufp->fullBit(oldp+1541,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__receiving));
    bufp->fullIData(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next_pc),32);
    bufp->fullIData(oldp+1543,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next_pc 
                                >> 6U)),26);
    bufp->fullCData(oldp+1544,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next_pc 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1545,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next_pc 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1546,(vlSelf->clock));
    bufp->fullBit(oldp+1547,(vlSelf->reset));
    bufp->fullSData(oldp+1548,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1549,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1550,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1551,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1552,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1553,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1554,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1555,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1556,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1557,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1558,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1559,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1560,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1561,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1562,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1563,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1564,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1565,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1566,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1567,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1568,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1569,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->fullBit(oldp+1571,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1572,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullBit(oldp+1573,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1574,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1575,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pready)
                                         : 0U)))));
    bufp->fullIData(oldp+1576,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_prdata
                                     : 0U))),32);
    bufp->fullIData(oldp+1577,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullQData(oldp+1578,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullBit(oldp+1580,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
    bufp->fullBit(oldp+1581,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1582,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullBit(oldp+1583,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullCData(oldp+1584,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
    bufp->fullBit(oldp+1585,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
    bufp->fullBit(oldp+1586,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    bufp->fullCData(oldp+1587,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))
                                 ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))
                                          ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready))
                                                  ? 0U
                                                  : 3U)
                                              : (((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3)) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready)))
                                                  ? 0U
                                                  : 2U))
                                          : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))
                                              ? (((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3)) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready)))
                                                  ? 0U
                                                  : 1U)
                                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_awvalid)
                                                  ? 3U
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_arvalid)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid)
                                                    ? 1U
                                                    : 0U))))))),3);
    bufp->fullIData(oldp+1588,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_once)
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
    bufp->fullBit(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__hit));
    bufp->fullCData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__next_state),2);
    bufp->fullBit(oldp+1591,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1592,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1593,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen)
                                     : 0U))),8);
    bufp->fullCData(oldp+1594,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullBit(oldp+1595,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1596,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullBit(oldp+1597,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1598,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1600,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1601,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1602,((vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h2a2074af__0 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1603,(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE));
    bufp->fullIData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullIData(oldp+1605,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullIData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap),32);
    bufp->fullIData(oldp+1607,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                    >> 0x18U))))),32);
    bufp->fullCData(oldp+1608,(1U),3);
    bufp->fullBit(oldp+1609,(0U));
    bufp->fullIData(oldp+1610,(0U),32);
    bufp->fullBit(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1612,(1U));
    bufp->fullCData(oldp+1613,(0U),2);
    bufp->fullBit(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1615,(0U),32);
    bufp->fullCData(oldp+1616,(0U),4);
    bufp->fullCData(oldp+1617,(0U),8);
    bufp->fullCData(oldp+1618,(0U),3);
    bufp->fullBit(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullCData(oldp+1629,(1U),4);
    bufp->fullCData(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rid),4);
    bufp->fullIData(oldp+1631,(0x2000000U),32);
    bufp->fullIData(oldp+1632,(0x2000007U),32);
    bufp->fullCData(oldp+1633,(2U),3);
    bufp->fullCData(oldp+1634,(3U),3);
    bufp->fullCData(oldp+1635,(1U),2);
    bufp->fullCData(oldp+1636,(2U),2);
    bufp->fullCData(oldp+1637,(3U),2);
    bufp->fullIData(oldp+1638,(0x20U),32);
    bufp->fullBit(oldp+1639,(0U));
    bufp->fullBit(oldp+1640,(1U));
    bufp->fullIData(oldp+1641,(0x100fU),32);
    bufp->fullCData(oldp+1642,(0x6fU),7);
    bufp->fullCData(oldp+1643,(3U),8);
    bufp->fullIData(oldp+1644,(0x40U),32);
    bufp->fullIData(oldp+1645,(0x10U),32);
    bufp->fullIData(oldp+1646,(4U),32);
    bufp->fullIData(oldp+1647,(2U),32);
    bufp->fullIData(oldp+1648,(0x1aU),32);
    bufp->fullIData(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__i),32);
    bufp->fullIData(oldp+1650,(0xa0000000U),32);
    bufp->fullIData(oldp+1651,(0xbfffffffU),32);
    bufp->fullSData(oldp+1652,(0x300U),12);
    bufp->fullSData(oldp+1653,(0x305U),12);
    bufp->fullSData(oldp+1654,(0x341U),12);
    bufp->fullSData(oldp+1655,(0x342U),12);
    bufp->fullIData(oldp+1656,(1U),32);
    bufp->fullCData(oldp+1657,(4U),3);
    bufp->fullCData(oldp+1658,(0x1bU),8);
    bufp->fullCData(oldp+1659,(0xebU),8);
    bufp->fullCData(oldp+1660,(0x38U),8);
    bufp->fullIData(oldp+1661,(0x64U),32);
    bufp->fullIData(oldp+1662,(0x18U),32);
    bufp->fullIData(oldp+1663,(9U),32);
    bufp->fullIData(oldp+1664,(6U),32);
    bufp->fullIData(oldp+1665,(3U),32);
    bufp->fullIData(oldp+1666,(8U),32);
    bufp->fullIData(oldp+1667,(0xdU),32);
    bufp->fullIData(oldp+1668,(0x2000U),32);
    bufp->fullIData(oldp+1669,(0x2710U),32);
    bufp->fullIData(oldp+1670,(0x30cU),32);
    bufp->fullCData(oldp+1671,(7U),4);
    bufp->fullCData(oldp+1672,(3U),4);
    bufp->fullCData(oldp+1673,(5U),4);
    bufp->fullCData(oldp+1674,(4U),4);
    bufp->fullCData(oldp+1675,(6U),4);
    bufp->fullCData(oldp+1676,(2U),4);
    bufp->fullSData(oldp+1677,(0x20U),13);
    bufp->fullCData(oldp+1678,(8U),4);
    bufp->fullCData(oldp+1679,(9U),4);
    bufp->fullIData(oldp+1680,(0xaU),32);
    bufp->fullIData(oldp+1681,(0x11U),32);
    bufp->fullIData(oldp+1682,(0x30000000U),32);
    bufp->fullIData(oldp+1683,(0x3fffffffU),32);
    bufp->fullIData(oldp+1684,(0x10001000U),32);
    bufp->fullIData(oldp+1685,(0x10001fffU),32);
    bufp->fullCData(oldp+1686,(5U),3);
    bufp->fullCData(oldp+1687,(6U),3);
    bufp->fullCData(oldp+1688,(7U),3);
    bufp->fullCData(oldp+1689,(0x40U),7);
    bufp->fullCData(oldp+1690,(0xaU),4);
    bufp->fullIData(oldp+1691,(0xbU),32);
    bufp->fullIData(oldp+1692,(5U),32);
    bufp->fullIData(oldp+1693,(0x200000U),32);
    bufp->fullIData(oldp+1694,(0x60U),32);
    bufp->fullIData(oldp+1695,(0x90U),32);
    bufp->fullIData(oldp+1696,(0x310U),32);
    bufp->fullIData(oldp+1697,(0x320U),32);
    bufp->fullIData(oldp+1698,(0x23U),32);
    bufp->fullIData(oldp+1699,(0x203U),32);
    bufp->fullIData(oldp+1700,(0x20dU),32);
    bufp->fullIData(oldp+1701,(0x211ffff4U),32);
    bufp->fullCData(oldp+1702,(0x35U),8);
    bufp->fullIData(oldp+1703,(0x400000U),32);
}
