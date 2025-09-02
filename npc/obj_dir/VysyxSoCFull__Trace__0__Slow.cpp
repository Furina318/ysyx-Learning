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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBus(c+1576,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1577,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1578,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1579,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1580,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1581,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1582,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1583,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1584,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1585,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1586,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1587,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1588,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1589,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1590,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1591,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1592,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1593,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1594,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1595,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBus(c+1576,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1577,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1578,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1579,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1580,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1581,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1582,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1583,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1584,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1585,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1586,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1587,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1588,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1589,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1590,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1591,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1592,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1593,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1594,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1595,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1036,"spi_sck", false,-1);
    tracep->declBus(c+1037,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1596,"spi_mosi", false,-1);
    tracep->declBit(c+1597,"spi_miso", false,-1);
    tracep->declBit(c+1594,"uart_rx", false,-1);
    tracep->declBit(c+1595,"uart_tx", false,-1);
    tracep->declBit(c+1501,"psram_sck", false,-1);
    tracep->declBit(c+1502,"psram_ce_n", false,-1);
    tracep->declBus(c+1598,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1599,"sdram_clk", false,-1);
    tracep->declBit(c+1540,"sdram_cke", false,-1);
    tracep->declBit(c+1541,"sdram_cs", false,-1);
    tracep->declBit(c+1542,"sdram_ras", false,-1);
    tracep->declBit(c+1543,"sdram_cas", false,-1);
    tracep->declBit(c+1544,"sdram_we", false,-1);
    tracep->declBus(c+1600,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1545,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1546,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1558,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1576,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1577,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1578,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1579,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1580,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1581,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1582,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1583,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1584,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1585,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1586,"ps2_clk", false,-1);
    tracep->declBit(c+1587,"ps2_data", false,-1);
    tracep->declBus(c+1588,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1589,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1590,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1591,"vga_hsync", false,-1);
    tracep->declBit(c+1592,"vga_vsync", false,-1);
    tracep->declBit(c+1593,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBus(c+1405,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+264,"in_psel", false,-1);
    tracep->declBit(c+265,"in_penable", false,-1);
    tracep->declBus(c+1634,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1406,"in_pwrite", false,-1);
    tracep->declBus(c+266,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+267,"in_pready", false,-1);
    tracep->declBus(c+268,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+269,"in_pslverr", false,-1);
    tracep->declBus(c+1405,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1408,"out_psel", false,-1);
    tracep->declBit(c+265,"out_penable", false,-1);
    tracep->declBus(c+1634,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1406,"out_pwrite", false,-1);
    tracep->declBus(c+266,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1503,"out_pready", false,-1);
    tracep->declBus(c+1601,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1409,"out_pslverr", false,-1);
    tracep->declBus(c+270,"state", false,-1, 1,0);
    tracep->declBus(c+1635,"IDLE", false,-1, 31,0);
    tracep->declBus(c+1636,"WAIT", false,-1, 31,0);
    tracep->declBus(c+1637,"DELAY", false,-1, 31,0);
    tracep->declBus(c+271,"counter", false,-1, 31,0);
    tracep->declBus(c+268,"prdata_reg", false,-1, 31,0);
    tracep->declBit(c+269,"pslverr_reg", false,-1);
    tracep->declBus(c+1638,"R_S", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1408,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+265,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1406,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1405,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1634,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+266,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1503,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1409,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1601,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1410,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1411,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1406,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1412,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1634,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+266,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+272,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1639,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1635,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1413,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1031,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1406,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1414,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1634,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+266,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1038,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1639,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1026,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1415,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1032,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1406,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1414,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1634,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+266,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1416,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1640,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1417,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1418,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1033,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1406,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1405,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1634,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+266,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1602,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1639,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+273,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1419,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1420,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1406,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1414,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1634,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+266,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1421,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1639,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1603,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1422,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1423,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1406,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1412,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1634,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+266,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1604,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1424,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1605,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1425,"sel_0", false,-1);
    tracep->declBit(c+1426,"sel_1", false,-1);
    tracep->declBit(c+1427,"sel_2", false,-1);
    tracep->declBit(c+1428,"sel_3", false,-1);
    tracep->declBit(c+1429,"sel_4", false,-1);
    tracep->declBit(c+1430,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+274,"auto_in_awready", false,-1);
    tracep->declBit(c+275,"auto_in_awvalid", false,-1);
    tracep->declBus(c+276,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+277,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+278,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+279,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+274,"auto_in_wready", false,-1);
    tracep->declBit(c+280,"auto_in_wvalid", false,-1);
    tracep->declBus(c+281,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+282,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+283,"auto_in_bready", false,-1);
    tracep->declBit(c+1431,"auto_in_bvalid", false,-1);
    tracep->declBus(c+284,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+285,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+286,"auto_in_arready", false,-1);
    tracep->declBit(c+287,"auto_in_arvalid", false,-1);
    tracep->declBus(c+288,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+289,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+290,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+291,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+292,"auto_in_rready", false,-1);
    tracep->declBit(c+1432,"auto_in_rvalid", false,-1);
    tracep->declBus(c+293,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+294,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+285,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+264,"auto_out_psel", false,-1);
    tracep->declBit(c+265,"auto_out_penable", false,-1);
    tracep->declBit(c+1406,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1405,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+266,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+267,"auto_out_pready", false,-1);
    tracep->declBit(c+269,"auto_out_pslverr", false,-1);
    tracep->declBus(c+268,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+265,"nodeOut_penable", false,-1);
    tracep->declBus(c+295,"state", false,-1, 1,0);
    tracep->declBit(c+286,"accept_read", false,-1);
    tracep->declBit(c+274,"accept_write", false,-1);
    tracep->declBit(c+296,"is_write_r", false,-1);
    tracep->declBit(c+1406,"is_write", false,-1);
    tracep->declBus(c+293,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+284,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+297,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+298,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+299,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+300,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+301,"resp", false,-1, 1,0);
    tracep->declBus(c+302,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+285,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1432,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+303,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1431,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+304,"auto_in_awready", false,-1);
    tracep->declBit(c+37,"auto_in_awvalid", false,-1);
    tracep->declBus(c+38,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+39,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+40,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+305,"auto_in_wready", false,-1);
    tracep->declBit(c+42,"auto_in_wvalid", false,-1);
    tracep->declBus(c+43,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+44,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+45,"auto_in_wlast", false,-1);
    tracep->declBit(c+1,"auto_in_bready", false,-1);
    tracep->declBit(c+306,"auto_in_bvalid", false,-1);
    tracep->declBus(c+307,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+308,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+309,"auto_in_arready", false,-1);
    tracep->declBit(c+168,"auto_in_arvalid", false,-1);
    tracep->declBus(c+169,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+170,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+171,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+172,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+2,"auto_in_rready", false,-1);
    tracep->declBit(c+310,"auto_in_rvalid", false,-1);
    tracep->declBus(c+311,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+312,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+313,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+314,"auto_in_rlast", false,-1);
    tracep->declBit(c+274,"auto_out_awready", false,-1);
    tracep->declBit(c+275,"auto_out_awvalid", false,-1);
    tracep->declBus(c+276,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+277,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+278,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+279,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+274,"auto_out_wready", false,-1);
    tracep->declBit(c+280,"auto_out_wvalid", false,-1);
    tracep->declBus(c+281,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+282,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+283,"auto_out_bready", false,-1);
    tracep->declBit(c+1431,"auto_out_bvalid", false,-1);
    tracep->declBus(c+284,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+285,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+286,"auto_out_arready", false,-1);
    tracep->declBit(c+287,"auto_out_arvalid", false,-1);
    tracep->declBus(c+288,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+289,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+290,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+291,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+292,"auto_out_rready", false,-1);
    tracep->declBit(c+1432,"auto_out_rvalid", false,-1);
    tracep->declBus(c+293,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+294,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+285,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+283,"io_enq_ready", false,-1);
    tracep->declBit(c+1431,"io_enq_valid", false,-1);
    tracep->declBus(c+284,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+285,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+1,"io_deq_ready", false,-1);
    tracep->declBit(c+306,"io_deq_valid", false,-1);
    tracep->declBus(c+307,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+308,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+315,"wrap", false,-1);
    tracep->declBit(c+316,"wrap_1", false,-1);
    tracep->declBit(c+317,"maybe_full", false,-1);
    tracep->declBit(c+318,"ptr_match", false,-1);
    tracep->declBit(c+319,"empty", false,-1);
    tracep->declBit(c+320,"full", false,-1);
    tracep->declBit(c+1433,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+316,"R0_addr", false,-1);
    tracep->declBit(c+1641,"R0_en", false,-1);
    tracep->declBit(c+1574,"R0_clk", false,-1);
    tracep->declBus(c+321,"R0_data", false,-1, 5,0);
    tracep->declBit(c+315,"W0_addr", false,-1);
    tracep->declBit(c+1433,"W0_en", false,-1);
    tracep->declBit(c+1574,"W0_clk", false,-1);
    tracep->declBus(c+322,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+323+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+325,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+292,"io_enq_ready", false,-1);
    tracep->declBit(c+1432,"io_enq_valid", false,-1);
    tracep->declBus(c+293,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+294,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+285,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+2,"io_deq_ready", false,-1);
    tracep->declBit(c+310,"io_deq_valid", false,-1);
    tracep->declBus(c+311,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+312,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+313,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+314,"io_deq_bits_last", false,-1);
    tracep->declBit(c+326,"wrap", false,-1);
    tracep->declBit(c+327,"wrap_1", false,-1);
    tracep->declBit(c+328,"maybe_full", false,-1);
    tracep->declBit(c+329,"ptr_match", false,-1);
    tracep->declBit(c+330,"empty", false,-1);
    tracep->declBit(c+331,"full", false,-1);
    tracep->declBit(c+1434,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+327,"R0_addr", false,-1);
    tracep->declBit(c+1641,"R0_en", false,-1);
    tracep->declBit(c+1574,"R0_clk", false,-1);
    tracep->declQuad(c+332,"R0_data", false,-1, 38,0);
    tracep->declBit(c+326,"W0_addr", false,-1);
    tracep->declBit(c+1434,"W0_en", false,-1);
    tracep->declBit(c+1574,"W0_clk", false,-1);
    tracep->declQuad(c+334,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+336+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+340,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+309,"io_enq_ready", false,-1);
    tracep->declBit(c+168,"io_enq_valid", false,-1);
    tracep->declBus(c+169,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+170,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+171,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+172,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+286,"io_deq_ready", false,-1);
    tracep->declBit(c+287,"io_deq_valid", false,-1);
    tracep->declBus(c+288,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+289,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+290,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+291,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+341,"wrap", false,-1);
    tracep->declBit(c+342,"wrap_1", false,-1);
    tracep->declBit(c+343,"maybe_full", false,-1);
    tracep->declBit(c+344,"ptr_match", false,-1);
    tracep->declBit(c+345,"empty", false,-1);
    tracep->declBit(c+346,"full", false,-1);
    tracep->declBit(c+173,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+342,"R0_addr", false,-1);
    tracep->declBit(c+1641,"R0_en", false,-1);
    tracep->declBit(c+1574,"R0_clk", false,-1);
    tracep->declQuad(c+347,"R0_data", false,-1, 46,0);
    tracep->declBit(c+341,"W0_addr", false,-1);
    tracep->declBit(c+173,"W0_en", false,-1);
    tracep->declBit(c+1574,"W0_clk", false,-1);
    tracep->declQuad(c+174,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+349+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+353,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+304,"io_enq_ready", false,-1);
    tracep->declBit(c+37,"io_enq_valid", false,-1);
    tracep->declBus(c+38,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+39,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+40,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+41,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+274,"io_deq_ready", false,-1);
    tracep->declBit(c+275,"io_deq_valid", false,-1);
    tracep->declBus(c+276,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+277,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+278,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+279,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+354,"wrap", false,-1);
    tracep->declBit(c+355,"wrap_1", false,-1);
    tracep->declBit(c+356,"maybe_full", false,-1);
    tracep->declBit(c+357,"ptr_match", false,-1);
    tracep->declBit(c+358,"empty", false,-1);
    tracep->declBit(c+359,"full", false,-1);
    tracep->declBit(c+46,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+355,"R0_addr", false,-1);
    tracep->declBit(c+1641,"R0_en", false,-1);
    tracep->declBit(c+1574,"R0_clk", false,-1);
    tracep->declQuad(c+360,"R0_data", false,-1, 46,0);
    tracep->declBit(c+354,"W0_addr", false,-1);
    tracep->declBit(c+46,"W0_en", false,-1);
    tracep->declBit(c+1574,"W0_clk", false,-1);
    tracep->declQuad(c+47,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+362+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+366,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+305,"io_enq_ready", false,-1);
    tracep->declBit(c+42,"io_enq_valid", false,-1);
    tracep->declBus(c+43,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+44,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+45,"io_enq_bits_last", false,-1);
    tracep->declBit(c+274,"io_deq_ready", false,-1);
    tracep->declBit(c+280,"io_deq_valid", false,-1);
    tracep->declBus(c+281,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+282,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+367,"wrap", false,-1);
    tracep->declBit(c+368,"wrap_1", false,-1);
    tracep->declBit(c+369,"maybe_full", false,-1);
    tracep->declBit(c+370,"ptr_match", false,-1);
    tracep->declBit(c+371,"empty", false,-1);
    tracep->declBit(c+372,"full", false,-1);
    tracep->declBit(c+49,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+368,"R0_addr", false,-1);
    tracep->declBit(c+1641,"R0_en", false,-1);
    tracep->declBit(c+1574,"R0_clk", false,-1);
    tracep->declQuad(c+373,"R0_data", false,-1, 35,0);
    tracep->declBit(c+367,"W0_addr", false,-1);
    tracep->declBit(c+49,"W0_en", false,-1);
    tracep->declBit(c+1574,"W0_clk", false,-1);
    tracep->declQuad(c+50,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+375+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+379,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+231,"in_arready", false,-1);
    tracep->declBit(c+176,"in_arvalid", false,-1);
    tracep->declBus(c+177,"in_arid", false,-1, 3,0);
    tracep->declBus(c+178,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+3,"in_rready", false,-1);
    tracep->declBit(c+1039,"in_rvalid", false,-1);
    tracep->declBus(c+1040,"in_rid", false,-1, 3,0);
    tracep->declBus(c+1041,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1642,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+1042,"in_rlast", false,-1);
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
    tracep->declBit(c+1606,"in_bready", false,-1);
    tracep->declBit(c+1043,"in_bvalid", false,-1);
    tracep->declBus(c+1040,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1642,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+231,"out_arready", false,-1);
    tracep->declBit(c+176,"out_arvalid", false,-1);
    tracep->declBus(c+177,"out_arid", false,-1, 3,0);
    tracep->declBus(c+178,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+3,"out_rready", false,-1);
    tracep->declBit(c+1039,"out_rvalid", false,-1);
    tracep->declBus(c+1040,"out_rid", false,-1, 3,0);
    tracep->declBus(c+1041,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1642,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+1042,"out_rlast", false,-1);
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
    tracep->declBit(c+1606,"out_bready", false,-1);
    tracep->declBit(c+1043,"out_bvalid", false,-1);
    tracep->declBus(c+1040,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1642,"out_bresp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+380,"auto_in_awready", false,-1);
    tracep->declBit(c+62,"auto_in_awvalid", false,-1);
    tracep->declBus(c+53,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+54,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+55,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+56,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+57,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+381,"auto_in_wready", false,-1);
    tracep->declBit(c+63,"auto_in_wvalid", false,-1);
    tracep->declBus(c+59,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+60,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"auto_in_wlast", false,-1);
    tracep->declBit(c+1607,"auto_in_bready", false,-1);
    tracep->declBit(c+382,"auto_in_bvalid", false,-1);
    tracep->declBus(c+383,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+384,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+385,"auto_in_arready", false,-1);
    tracep->declBit(c+182,"auto_in_arvalid", false,-1);
    tracep->declBus(c+177,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+125,"auto_in_rready", false,-1);
    tracep->declBit(c+386,"auto_in_rvalid", false,-1);
    tracep->declBus(c+387,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+388,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+389,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+390,"auto_in_rlast", false,-1);
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
    tracep->declBit(c+391,"auto_out_bvalid", false,-1);
    tracep->declBus(c+383,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+392,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+393,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+234,"auto_out_arready", false,-1);
    tracep->declBit(c+183,"auto_out_arvalid", false,-1);
    tracep->declBus(c+169,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+170,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+171,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+172,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+184,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+125,"auto_out_rready", false,-1);
    tracep->declBit(c+386,"auto_out_rvalid", false,-1);
    tracep->declBus(c+387,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+388,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+389,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+394,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+395,"auto_out_rlast", false,-1);
    tracep->declBit(c+66,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+396,"w_idle", false,-1);
    tracep->declBit(c+129,"in_awready", false,-1);
    tracep->declBit(c+397,"busy", false,-1);
    tracep->declBus(c+398,"r_addr", false,-1, 31,0);
    tracep->declBus(c+399,"r_len", false,-1, 7,0);
    tracep->declBus(c+185,"len", false,-1, 7,0);
    tracep->declBus(c+186,"addr", false,-1, 31,0);
    tracep->declBit(c+400,"busy_1", false,-1);
    tracep->declBus(c+401,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+402,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+67,"len_1", false,-1, 7,0);
    tracep->declBus(c+68,"addr_1", false,-1, 31,0);
    tracep->declBit(c+403,"wbeats_latched", false,-1);
    tracep->declBit(c+64,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+69,"wbeats_valid", false,-1);
    tracep->declBus(c+404,"w_counter", false,-1, 8,0);
    tracep->declBus(c+70,"w_todo", false,-1, 8,0);
    tracep->declBit(c+45,"w_last", false,-1);
    tracep->declBit(c+128,"nodeOut_bready", false,-1);
    tracep->declBus(c+405,"error_0", false,-1, 1,0);
    tracep->declBus(c+406,"error_1", false,-1, 1,0);
    tracep->declBus(c+407,"error_2", false,-1, 1,0);
    tracep->declBus(c+408,"error_3", false,-1, 1,0);
    tracep->declBus(c+409,"error_4", false,-1, 1,0);
    tracep->declBus(c+410,"error_5", false,-1, 1,0);
    tracep->declBus(c+411,"error_6", false,-1, 1,0);
    tracep->declBus(c+412,"error_7", false,-1, 1,0);
    tracep->declBus(c+413,"error_8", false,-1, 1,0);
    tracep->declBus(c+414,"error_9", false,-1, 1,0);
    tracep->declBus(c+415,"error_10", false,-1, 1,0);
    tracep->declBus(c+416,"error_11", false,-1, 1,0);
    tracep->declBus(c+417,"error_12", false,-1, 1,0);
    tracep->declBus(c+418,"error_13", false,-1, 1,0);
    tracep->declBus(c+419,"error_14", false,-1, 1,0);
    tracep->declBus(c+420,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+385,"io_enq_ready", false,-1);
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
    tracep->declQuad(c+421,"ram", false,-1, 48,0);
    tracep->declBit(c+423,"full", false,-1);
    tracep->declBit(c+183,"io_deq_valid_0", false,-1);
    tracep->declBit(c+236,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+380,"io_enq_ready", false,-1);
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
    tracep->declQuad(c+424,"ram", false,-1, 48,0);
    tracep->declBit(c+426,"full", false,-1);
    tracep->declBit(c+71,"io_deq_valid_0", false,-1);
    tracep->declBit(c+131,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+381,"io_enq_ready", false,-1);
    tracep->declBit(c+63,"io_enq_valid", false,-1);
    tracep->declBus(c+59,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+60,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+61,"io_enq_bits_last", false,-1);
    tracep->declBit(c+132,"io_deq_ready", false,-1);
    tracep->declBit(c+74,"io_deq_valid", false,-1);
    tracep->declBus(c+43,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+44,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1608,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+427,"ram", false,-1, 36,0);
    tracep->declBit(c+429,"full", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+134,"auto_in_awready", false,-1);
    tracep->declBit(c+75,"auto_in_awvalid", false,-1);
    tracep->declBus(c+38,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+76,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+108,"auto_in_wready", false,-1);
    tracep->declBit(c+77,"auto_in_wvalid", false,-1);
    tracep->declBus(c+43,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+44,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+135,"auto_in_bready", false,-1);
    tracep->declBit(c+430,"auto_in_bvalid", false,-1);
    tracep->declBus(c+431,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+432,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+136,"auto_in_arready", false,-1);
    tracep->declBit(c+189,"auto_in_arvalid", false,-1);
    tracep->declBus(c+169,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+137,"auto_in_rready", false,-1);
    tracep->declBit(c+433,"auto_in_rvalid", false,-1);
    tracep->declBus(c+434,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+435,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+436,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+136,"nodeIn_arready", false,-1);
    tracep->declBit(c+134,"nodeIn_awready", false,-1);
    tracep->declBit(c+78,"w_sel0", false,-1);
    tracep->declBit(c+430,"w_full", false,-1);
    tracep->declBus(c+431,"w_id", false,-1, 3,0);
    tracep->declBit(c+437,"r_sel1", false,-1);
    tracep->declBit(c+438,"w_sel1", false,-1);
    tracep->declBit(c+433,"r_full", false,-1);
    tracep->declBus(c+434,"r_id", false,-1, 3,0);
    tracep->declBit(c+237,"ren", false,-1);
    tracep->declBit(c+439,"rdata_REG", false,-1);
    tracep->declBus(c+440,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+441,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+442,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+443,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+191,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+237,"R0_en", false,-1);
    tracep->declBit(c+1574,"R0_clk", false,-1);
    tracep->declBus(c+444,"R0_data", false,-1, 31,0);
    tracep->declBus(c+79,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+138,"W0_en", false,-1);
    tracep->declBit(c+1574,"W0_clk", false,-1);
    tracep->declBus(c+43,"W0_data", false,-1, 31,0);
    tracep->declBus(c+44,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+238,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+80,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+53,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+54,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+55,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+56,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+57,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1609,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+81,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+59,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+60,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+82,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1504,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1505,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1610,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+239,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+192,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+177,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+139,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1506,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1507,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1508,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1509,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1510,"auto_anon_in_rlast", false,-1);
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
    tracep->declBit(c+1606,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+1043,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+1040,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+1642,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+231,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+176,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+177,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+3,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+1039,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+1040,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+1041,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1642,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+1042,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+380,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+62,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+53,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+54,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+55,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+56,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+57,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+381,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+63,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+59,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+60,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1607,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+382,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+383,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+384,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+385,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+182,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+177,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+125,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+386,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+387,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+388,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+389,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+390,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1504,"in_0_bvalid", false,-1);
    tracep->declBit(c+1506,"in_0_rvalid", false,-1);
    tracep->declBit(c+240,"in_0_wready", false,-1);
    tracep->declBit(c+241,"in_0_awready", false,-1);
    tracep->declBit(c+1611,"in_0_arready", false,-1);
    tracep->declBit(c+238,"anonIn_awready", false,-1);
    tracep->declBit(c+239,"anonIn_arready", false,-1);
    tracep->declBit(c+193,"requestARIO_0_0", false,-1);
    tracep->declBit(c+194,"requestARIO_0_1", false,-1);
    tracep->declBit(c+83,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+84,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+195,"arSel", false,-1, 15,0);
    tracep->declBus(c+85,"awSel", false,-1, 15,0);
    tracep->declBus(c+1511,"rSel", false,-1, 15,0);
    tracep->declBus(c+1512,"bSel", false,-1, 15,0);
    tracep->declBus(c+445,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+446,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+447,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+448,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+449,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+450,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+451,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+452,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+453,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+454,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+455,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+456,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+457,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+458,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+459,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+460,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+461,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+462,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+463,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+464,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+465,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+466,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+467,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+468,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+469,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+470,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+471,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+472,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+473,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+474,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+475,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+476,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+477,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+478,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+479,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+480,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+481,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+482,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+483,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+484,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+485,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+486,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+487,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+488,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+489,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+490,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+491,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+492,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+493,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+494,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+495,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+496,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+497,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+498,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+499,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+500,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+501,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+502,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+503,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+504,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+505,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+506,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+507,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+508,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+196,"in_0_arvalid", false,-1);
    tracep->declBit(c+509,"latched", false,-1);
    tracep->declBit(c+86,"in_0_awvalid", false,-1);
    tracep->declBit(c+87,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+88,"in_0_wvalid", false,-1);
    tracep->declBit(c+510,"idle_2", false,-1);
    tracep->declBit(c+1513,"anyValid", false,-1);
    tracep->declBus(c+1514,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+511,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1515,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1516,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1517,"prefixOR_1", false,-1);
    tracep->declBit(c+1518,"winner_2_1", false,-1);
    tracep->declBit(c+512,"state_2_0", false,-1);
    tracep->declBit(c+513,"state_2_1", false,-1);
    tracep->declBit(c+1519,"muxState_2_0", false,-1);
    tracep->declBit(c+1520,"muxState_2_1", false,-1);
    tracep->declBit(c+514,"idle_3", false,-1);
    tracep->declBit(c+1521,"anyValid_1", false,-1);
    tracep->declBus(c+1522,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+515,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1523,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1524,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1525,"winner_3_0", false,-1);
    tracep->declBit(c+1526,"winner_3_1", false,-1);
    tracep->declBit(c+516,"state_3_0", false,-1);
    tracep->declBit(c+517,"state_3_1", false,-1);
    tracep->declBit(c+1527,"muxState_3_0", false,-1);
    tracep->declBit(c+1612,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+518,"io_enq_ready", false,-1);
    tracep->declBit(c+87,"io_enq_valid", false,-1);
    tracep->declBus(c+89,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+242,"io_deq_ready", false,-1);
    tracep->declBit(c+90,"io_deq_valid", false,-1);
    tracep->declBus(c+91,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+519,"wrap", false,-1);
    tracep->declBit(c+520,"wrap_1", false,-1);
    tracep->declBit(c+521,"maybe_full", false,-1);
    tracep->declBit(c+522,"ptr_match", false,-1);
    tracep->declBit(c+523,"empty", false,-1);
    tracep->declBit(c+524,"full", false,-1);
    tracep->declBit(c+90,"io_deq_valid_0", false,-1);
    tracep->declBit(c+243,"do_deq", false,-1);
    tracep->declBit(c+244,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+520,"R0_addr", false,-1);
    tracep->declBit(c+1641,"R0_en", false,-1);
    tracep->declBit(c+1574,"R0_clk", false,-1);
    tracep->declBus(c+525,"R0_data", false,-1, 1,0);
    tracep->declBit(c+519,"W0_addr", false,-1);
    tracep->declBit(c+244,"W0_en", false,-1);
    tracep->declBit(c+1574,"W0_clk", false,-1);
    tracep->declBus(c+89,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+526+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
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
    tracep->declBit(c+391,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+383,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+392,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+245,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+197,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+169,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+170,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+171,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+172,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+125,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+386,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+387,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+388,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+389,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+395,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+134,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+75,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+38,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+76,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+108,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+77,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+43,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+44,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+135,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+430,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+431,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+432,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+136,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+189,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+169,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+137,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+433,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+434,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+435,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+436,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+93,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+94,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+528,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+198,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+169,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+199,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+4,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+529,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+530,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+531,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+304,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+37,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+38,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+39,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+40,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+305,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+42,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+43,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+44,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+45,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+306,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+307,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+308,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+309,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+168,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+169,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+170,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+171,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+172,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+2,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+310,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+311,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+312,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+313,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+314,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+391,"in_0_bvalid", false,-1);
    tracep->declBit(c+386,"in_0_rvalid", false,-1);
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
    tracep->declBus(c+532,"rSel", false,-1, 15,0);
    tracep->declBus(c+533,"bSel", false,-1, 15,0);
    tracep->declBit(c+534,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+535,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+536,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+537,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+538,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+539,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+540,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+541,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+542,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+543,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+544,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+545,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+546,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+547,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+548,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+549,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+550,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+551,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+552,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+553,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+554,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+555,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+556,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+557,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+558,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+559,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+560,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+561,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+562,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+563,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+564,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+565,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+566,"latched", false,-1);
    tracep->declBit(c+99,"in_0_awvalid", false,-1);
    tracep->declBit(c+100,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+101,"in_0_wvalid", false,-1);
    tracep->declBit(c+567,"idle_3", false,-1);
    tracep->declBit(c+568,"anyValid", false,-1);
    tracep->declBus(c+569,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+570,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+571,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+572,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+573,"prefixOR_1", false,-1);
    tracep->declBit(c+574,"winner_3_1", false,-1);
    tracep->declBit(c+575,"winner_3_2", false,-1);
    tracep->declBit(c+576,"state_3_0", false,-1);
    tracep->declBit(c+577,"state_3_1", false,-1);
    tracep->declBit(c+578,"state_3_2", false,-1);
    tracep->declBit(c+579,"muxState_3_0", false,-1);
    tracep->declBit(c+580,"muxState_3_1", false,-1);
    tracep->declBit(c+581,"muxState_3_2", false,-1);
    tracep->declBit(c+582,"idle_4", false,-1);
    tracep->declBit(c+583,"anyValid_1", false,-1);
    tracep->declBus(c+584,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+585,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+586,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+587,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+588,"winner_4_0", false,-1);
    tracep->declBit(c+589,"winner_4_2", false,-1);
    tracep->declBit(c+590,"state_4_0", false,-1);
    tracep->declBit(c+591,"state_4_2", false,-1);
    tracep->declBit(c+592,"muxState_4_0", false,-1);
    tracep->declBit(c+593,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+594,"io_enq_ready", false,-1);
    tracep->declBit(c+100,"io_enq_valid", false,-1);
    tracep->declBus(c+102,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+143,"io_deq_ready", false,-1);
    tracep->declBit(c+103,"io_deq_valid", false,-1);
    tracep->declBus(c+104,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+595,"wrap", false,-1);
    tracep->declBit(c+596,"wrap_1", false,-1);
    tracep->declBit(c+597,"maybe_full", false,-1);
    tracep->declBit(c+598,"ptr_match", false,-1);
    tracep->declBit(c+599,"empty", false,-1);
    tracep->declBit(c+600,"full", false,-1);
    tracep->declBit(c+103,"io_deq_valid_0", false,-1);
    tracep->declBit(c+144,"do_deq", false,-1);
    tracep->declBit(c+145,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+596,"R0_addr", false,-1);
    tracep->declBit(c+1641,"R0_en", false,-1);
    tracep->declBit(c+1574,"R0_clk", false,-1);
    tracep->declBus(c+601,"R0_data", false,-1, 2,0);
    tracep->declBit(c+595,"W0_addr", false,-1);
    tracep->declBit(c+145,"W0_en", false,-1);
    tracep->declBit(c+1574,"W0_clk", false,-1);
    tracep->declBus(c+102,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+602+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
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
    tracep->declBit(c+391,"auto_in_bvalid", false,-1);
    tracep->declBus(c+383,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+392,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+393,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+234,"auto_in_arready", false,-1);
    tracep->declBit(c+183,"auto_in_arvalid", false,-1);
    tracep->declBus(c+169,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+170,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+171,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+172,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+184,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+125,"auto_in_rready", false,-1);
    tracep->declBit(c+386,"auto_in_rvalid", false,-1);
    tracep->declBus(c+387,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+388,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+389,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+394,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+395,"auto_in_rlast", false,-1);
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
    tracep->declBit(c+391,"auto_out_bvalid", false,-1);
    tracep->declBus(c+383,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+392,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+245,"auto_out_arready", false,-1);
    tracep->declBit(c+197,"auto_out_arvalid", false,-1);
    tracep->declBus(c+169,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+170,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+171,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+172,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+125,"auto_out_rready", false,-1);
    tracep->declBit(c+386,"auto_out_rvalid", false,-1);
    tracep->declBus(c+387,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+388,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+389,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+395,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+604,"io_enq_ready", false,-1);
    tracep->declBit(c+215,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+5,"io_deq_ready", false,-1);
    tracep->declBit(c+605,"io_deq_valid", false,-1);
    tracep->declBit(c+606,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+605,"full", false,-1);
    tracep->declBit(c+606,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+607,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+608,"io_enq_ready", false,-1);
    tracep->declBit(c+216,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+6,"io_deq_ready", false,-1);
    tracep->declBit(c+609,"io_deq_valid", false,-1);
    tracep->declBit(c+610,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+609,"full", false,-1);
    tracep->declBit(c+610,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+611,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+612,"io_enq_ready", false,-1);
    tracep->declBit(c+217,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+7,"io_deq_ready", false,-1);
    tracep->declBit(c+613,"io_deq_valid", false,-1);
    tracep->declBit(c+614,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+613,"full", false,-1);
    tracep->declBit(c+614,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+615,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+616,"io_enq_ready", false,-1);
    tracep->declBit(c+218,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+8,"io_deq_ready", false,-1);
    tracep->declBit(c+617,"io_deq_valid", false,-1);
    tracep->declBit(c+618,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+617,"full", false,-1);
    tracep->declBit(c+618,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+619,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+620,"io_enq_ready", false,-1);
    tracep->declBit(c+219,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+9,"io_deq_ready", false,-1);
    tracep->declBit(c+621,"io_deq_valid", false,-1);
    tracep->declBit(c+622,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+621,"full", false,-1);
    tracep->declBit(c+622,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+623,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+624,"io_enq_ready", false,-1);
    tracep->declBit(c+220,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+10,"io_deq_ready", false,-1);
    tracep->declBit(c+625,"io_deq_valid", false,-1);
    tracep->declBit(c+626,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+625,"full", false,-1);
    tracep->declBit(c+626,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+627,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+628,"io_enq_ready", false,-1);
    tracep->declBit(c+221,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+629,"io_deq_valid", false,-1);
    tracep->declBit(c+630,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+629,"full", false,-1);
    tracep->declBit(c+630,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+631,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+632,"io_enq_ready", false,-1);
    tracep->declBit(c+222,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+633,"io_deq_valid", false,-1);
    tracep->declBit(c+634,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+633,"full", false,-1);
    tracep->declBit(c+634,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+635,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+636,"io_enq_ready", false,-1);
    tracep->declBit(c+109,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+637,"io_deq_valid", false,-1);
    tracep->declBit(c+638,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+637,"full", false,-1);
    tracep->declBit(c+638,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+639,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+640,"io_enq_ready", false,-1);
    tracep->declBit(c+110,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+641,"io_deq_valid", false,-1);
    tracep->declBit(c+642,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+641,"full", false,-1);
    tracep->declBit(c+642,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+643,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+644,"io_enq_ready", false,-1);
    tracep->declBit(c+111,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+645,"io_deq_valid", false,-1);
    tracep->declBit(c+646,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+645,"full", false,-1);
    tracep->declBit(c+646,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+647,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+648,"io_enq_ready", false,-1);
    tracep->declBit(c+112,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+649,"io_deq_valid", false,-1);
    tracep->declBit(c+650,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+649,"full", false,-1);
    tracep->declBit(c+650,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+651,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+652,"io_enq_ready", false,-1);
    tracep->declBit(c+223,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+653,"io_deq_valid", false,-1);
    tracep->declBit(c+654,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+653,"full", false,-1);
    tracep->declBit(c+654,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+655,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+656,"io_enq_ready", false,-1);
    tracep->declBit(c+113,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+657,"io_deq_valid", false,-1);
    tracep->declBit(c+658,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+657,"full", false,-1);
    tracep->declBit(c+658,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+659,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+660,"io_enq_ready", false,-1);
    tracep->declBit(c+114,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+661,"io_deq_valid", false,-1);
    tracep->declBit(c+662,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+661,"full", false,-1);
    tracep->declBit(c+662,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+663,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+664,"io_enq_ready", false,-1);
    tracep->declBit(c+115,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+665,"io_deq_valid", false,-1);
    tracep->declBit(c+666,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+665,"full", false,-1);
    tracep->declBit(c+666,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+667,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+668,"io_enq_ready", false,-1);
    tracep->declBit(c+116,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+669,"io_deq_valid", false,-1);
    tracep->declBit(c+670,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+669,"full", false,-1);
    tracep->declBit(c+670,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+671,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+672,"io_enq_ready", false,-1);
    tracep->declBit(c+117,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+22,"io_deq_ready", false,-1);
    tracep->declBit(c+673,"io_deq_valid", false,-1);
    tracep->declBit(c+674,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+673,"full", false,-1);
    tracep->declBit(c+674,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+675,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+676,"io_enq_ready", false,-1);
    tracep->declBit(c+118,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+23,"io_deq_ready", false,-1);
    tracep->declBit(c+677,"io_deq_valid", false,-1);
    tracep->declBit(c+678,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+677,"full", false,-1);
    tracep->declBit(c+678,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+679,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+680,"io_enq_ready", false,-1);
    tracep->declBit(c+119,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+24,"io_deq_ready", false,-1);
    tracep->declBit(c+681,"io_deq_valid", false,-1);
    tracep->declBit(c+682,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+681,"full", false,-1);
    tracep->declBit(c+682,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+683,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+684,"io_enq_ready", false,-1);
    tracep->declBit(c+120,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+25,"io_deq_ready", false,-1);
    tracep->declBit(c+685,"io_deq_valid", false,-1);
    tracep->declBit(c+686,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+685,"full", false,-1);
    tracep->declBit(c+686,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+687,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+688,"io_enq_ready", false,-1);
    tracep->declBit(c+121,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+26,"io_deq_ready", false,-1);
    tracep->declBit(c+689,"io_deq_valid", false,-1);
    tracep->declBit(c+690,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+689,"full", false,-1);
    tracep->declBit(c+690,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+691,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+692,"io_enq_ready", false,-1);
    tracep->declBit(c+122,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+27,"io_deq_ready", false,-1);
    tracep->declBit(c+693,"io_deq_valid", false,-1);
    tracep->declBit(c+694,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+693,"full", false,-1);
    tracep->declBit(c+694,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+695,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+696,"io_enq_ready", false,-1);
    tracep->declBit(c+224,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+28,"io_deq_ready", false,-1);
    tracep->declBit(c+697,"io_deq_valid", false,-1);
    tracep->declBit(c+698,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+697,"full", false,-1);
    tracep->declBit(c+698,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+699,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+700,"io_enq_ready", false,-1);
    tracep->declBit(c+123,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+29,"io_deq_ready", false,-1);
    tracep->declBit(c+701,"io_deq_valid", false,-1);
    tracep->declBit(c+702,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+701,"full", false,-1);
    tracep->declBit(c+702,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+703,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+704,"io_enq_ready", false,-1);
    tracep->declBit(c+124,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+30,"io_deq_ready", false,-1);
    tracep->declBit(c+705,"io_deq_valid", false,-1);
    tracep->declBit(c+706,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+705,"full", false,-1);
    tracep->declBit(c+706,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+707,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+708,"io_enq_ready", false,-1);
    tracep->declBit(c+225,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+31,"io_deq_ready", false,-1);
    tracep->declBit(c+709,"io_deq_valid", false,-1);
    tracep->declBit(c+710,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+709,"full", false,-1);
    tracep->declBit(c+710,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+711,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+712,"io_enq_ready", false,-1);
    tracep->declBit(c+226,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+32,"io_deq_ready", false,-1);
    tracep->declBit(c+713,"io_deq_valid", false,-1);
    tracep->declBit(c+714,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+713,"full", false,-1);
    tracep->declBit(c+714,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+715,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+716,"io_enq_ready", false,-1);
    tracep->declBit(c+227,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+33,"io_deq_ready", false,-1);
    tracep->declBit(c+717,"io_deq_valid", false,-1);
    tracep->declBit(c+718,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+717,"full", false,-1);
    tracep->declBit(c+718,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+719,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+720,"io_enq_ready", false,-1);
    tracep->declBit(c+228,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+34,"io_deq_ready", false,-1);
    tracep->declBit(c+721,"io_deq_valid", false,-1);
    tracep->declBit(c+722,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+721,"full", false,-1);
    tracep->declBit(c+722,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+723,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+724,"io_enq_ready", false,-1);
    tracep->declBit(c+229,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+35,"io_deq_ready", false,-1);
    tracep->declBit(c+725,"io_deq_valid", false,-1);
    tracep->declBit(c+726,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+725,"full", false,-1);
    tracep->declBit(c+726,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+727,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+728,"io_enq_ready", false,-1);
    tracep->declBit(c+230,"io_enq_valid", false,-1);
    tracep->declBit(c+184,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+36,"io_deq_ready", false,-1);
    tracep->declBit(c+729,"io_deq_valid", false,-1);
    tracep->declBit(c+730,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+729,"full", false,-1);
    tracep->declBit(c+730,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+731,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+105,"reset", false,-1);
    tracep->declBit(c+238,"auto_master_out_awready", false,-1);
    tracep->declBit(c+80,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+53,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+54,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+55,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+56,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+57,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1609,"auto_master_out_wready", false,-1);
    tracep->declBit(c+81,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+59,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+60,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+82,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1504,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1505,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1610,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+239,"auto_master_out_arready", false,-1);
    tracep->declBit(c+192,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+177,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+139,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1506,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1507,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1508,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1509,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1510,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+105,"reset", false,-1);
    tracep->declBit(c+1639,"io_interrupt", false,-1);
    tracep->declBit(c+238,"io_master_awready", false,-1);
    tracep->declBit(c+80,"io_master_awvalid", false,-1);
    tracep->declBus(c+54,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+53,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+55,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+56,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+57,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1609,"io_master_wready", false,-1);
    tracep->declBit(c+81,"io_master_wvalid", false,-1);
    tracep->declBus(c+59,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+60,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"io_master_wlast", false,-1);
    tracep->declBit(c+82,"io_master_bready", false,-1);
    tracep->declBit(c+1504,"io_master_bvalid", false,-1);
    tracep->declBus(c+1610,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1505,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+239,"io_master_arready", false,-1);
    tracep->declBit(c+192,"io_master_arvalid", false,-1);
    tracep->declBus(c+178,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+177,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+179,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+139,"io_master_rready", false,-1);
    tracep->declBit(c+1506,"io_master_rvalid", false,-1);
    tracep->declBus(c+1509,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1508,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1510,"io_master_rlast", false,-1);
    tracep->declBus(c+1507,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1643,"io_slave_awready", false,-1);
    tracep->declBit(c+1639,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1644,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1645,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1646,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1647,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1642,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1648,"io_slave_wready", false,-1);
    tracep->declBit(c+1639,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1644,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1645,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1639,"io_slave_wlast", false,-1);
    tracep->declBit(c+1639,"io_slave_bready", false,-1);
    tracep->declBit(c+1649,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1650,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1651,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1652,"io_slave_arready", false,-1);
    tracep->declBit(c+1639,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1644,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1645,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1646,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1647,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1642,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1639,"io_slave_rready", false,-1);
    tracep->declBit(c+1653,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1654,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1655,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1656,"io_slave_rlast", false,-1);
    tracep->declBus(c+1657,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1376,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+1377,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+1378,"IF_valid", false,-1);
    tracep->declBit(c+1435,"id_ready", false,-1);
    tracep->declBus(c+732,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+733,"id_ex_inst", false,-1, 31,0);
    tracep->declBit(c+734,"id_valid", false,-1);
    tracep->declBit(c+735,"ex_ready", false,-1);
    tracep->declBit(c+736,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+737,"id_ex_rd", false,-1, 3,0);
    tracep->declBus(c+738,"id_wb_rs1", false,-1, 3,0);
    tracep->declBus(c+739,"id_wb_rs2", false,-1, 3,0);
    tracep->declBus(c+740,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+741,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+742,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+743,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+744,"id_ex_MemLen", false,-1, 4,0);
    tracep->declBit(c+745,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+746,"id_ex_MemRead", false,-1);
    tracep->declBus(c+747,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+748,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+749,"id_ex_jal", false,-1);
    tracep->declBit(c+750,"id_ex_jalr", false,-1);
    tracep->declBit(c+751,"id_ex_csr", false,-1);
    tracep->declBit(c+752,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+753,"id_ex_csr_wen2", false,-1);
    tracep->declBit(c+754,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+755,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+756,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBus(c+757,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+758,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+759,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+760,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBus(c+761,"ex_lsu_pc", false,-1, 31,0);
    tracep->declBus(c+762,"ex_lsu_inst", false,-1, 31,0);
    tracep->declBit(c+763,"ex_lsu_valid", false,-1);
    tracep->declBit(c+764,"lsu_ex_ready", false,-1);
    tracep->declBus(c+765,"ex_lsu_src2", false,-1, 31,0);
    tracep->declBit(c+766,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+767,"ex_lsu_rd", false,-1, 3,0);
    tracep->declBit(c+768,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+769,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+770,"ex_lsu_MemLen", false,-1, 4,0);
    tracep->declBus(c+771,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBit(c+1436,"ex_flush", false,-1);
    tracep->declBus(c+1437,"ex_flush_pc", false,-1, 31,0);
    tracep->declBit(c+772,"ex_lsu_csr", false,-1);
    tracep->declBit(c+773,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+774,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+775,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+776,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+777,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+778,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+779,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+780,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+781,"ex_lsu_csr_mret", false,-1);
    tracep->declBit(c+782,"lsu_wb_valid", false,-1);
    tracep->declBit(c+1641,"wb_lsu_ready", false,-1);
    tracep->declBit(c+783,"lsu_wb_RegWrite", false,-1);
    tracep->declBus(c+784,"lsu_wb_rd", false,-1, 3,0);
    tracep->declBus(c+785,"lsu_wb_write_rd_data", false,-1, 31,0);
    tracep->declBus(c+786,"lsu_wb_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+787,"lsu_wb_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+788,"lsu_wb_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+789,"lsu_wb_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+790,"lsu_wb_csr_wen1", false,-1);
    tracep->declBit(c+791,"lsu_wb_csr_wen2", false,-1);
    tracep->declBit(c+792,"wb_valid", false,-1);
    tracep->declBus(c+793,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+794,"wb_ex_src2", false,-1, 31,0);
    tracep->declBus(c+795,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+796,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBus(c+797,"lsu_ex_forward_rd", false,-1, 3,0);
    tracep->declBit(c+798,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+799,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBit(c+800,"ex_lsu_forward_las", false,-1);
    tracep->declBit(c+801,"lsu_axi_arvalid", false,-1);
    tracep->declBit(c+204,"axi_lsu_arready", false,-1);
    tracep->declBus(c+802,"lsu_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+803,"lsu_axi_arid", false,-1, 3,0);
    tracep->declBus(c+804,"lsu_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+805,"lsu_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+806,"lsu_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+146,"axi_lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+147,"axi_lsu_rvalid", false,-1);
    tracep->declBus(c+148,"axi_lsu_rid", false,-1, 3,0);
    tracep->declBit(c+149,"axi_lsu_rlast", false,-1);
    tracep->declBit(c+807,"lsu_axi_rready", false,-1);
    tracep->declBus(c+150,"axi_lsu_rresp", false,-1, 1,0);
    tracep->declBus(c+808,"lsu_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+809,"lsu_axi_awid", false,-1, 3,0);
    tracep->declBus(c+810,"lsu_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+811,"lsu_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+812,"lsu_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+813,"lsu_axi_awvalid", false,-1);
    tracep->declBit(c+246,"axi_lsu_awready", false,-1);
    tracep->declBus(c+814,"lsu_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+815,"lsu_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+816,"lsu_axi_wvalid", false,-1);
    tracep->declBit(c+817,"lsu_axi_wlast", false,-1);
    tracep->declBit(c+247,"axi_lsu_wready", false,-1);
    tracep->declBus(c+151,"axi_lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+152,"axi_lsu_bid", false,-1, 3,0);
    tracep->declBit(c+153,"axi_lsu_bvalid", false,-1);
    tracep->declBit(c+818,"lsu_axi_bready", false,-1);
    tracep->declBit(c+819,"if_axi_arvalid", false,-1);
    tracep->declBit(c+205,"axi_if_arready", false,-1);
    tracep->declBus(c+820,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+821,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+822,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+823,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+824,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+154,"axi_if_rdata", false,-1, 31,0);
    tracep->declBit(c+155,"axi_if_rvalid", false,-1);
    tracep->declBus(c+156,"axi_if_rid", false,-1, 3,0);
    tracep->declBit(c+157,"axi_if_rlast", false,-1);
    tracep->declBit(c+825,"if_axi_rready", false,-1);
    tracep->declBus(c+158,"axi_if_rresp", false,-1, 1,0);
    tracep->declBus(c+206,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+207,"clint_arvalid", false,-1);
    tracep->declBus(c+208,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+209,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+210,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+211,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+826,"clint_arready", false,-1);
    tracep->declBus(c+827,"clint_rresp", false,-1, 1,0);
    tracep->declBus(c+828,"clint_rdata", false,-1, 31,0);
    tracep->declBit(c+829,"clint_rvalid", false,-1);
    tracep->declBus(c+1658,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+830,"clint_rlast", false,-1);
    tracep->declBit(c+159,"clint_rready", false,-1);
    tracep->declBus(c+1644,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+1639,"clint_awvalid", false,-1);
    tracep->declBus(c+1645,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1646,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1647,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1642,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+831,"clint_awready", false,-1);
    tracep->declBus(c+1644,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1645,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1639,"clint_wvalid", false,-1);
    tracep->declBit(c+1639,"clint_wlast", false,-1);
    tracep->declBit(c+832,"clint_wready", false,-1);
    tracep->declBus(c+833,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1645,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+834,"clint_bvalid", false,-1);
    tracep->declBit(c+1639,"clint_bready", false,-1);
    tracep->pushNamePrefix("axi_arb ");
    tracep->declBus(c+1659,"CLINT_ADDR_START", false,-1, 31,0);
    tracep->declBus(c+1660,"CLINT_ADDR_END", false,-1, 31,0);
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+105,"reset", false,-1);
    tracep->declBit(c+205,"ifu_arready", false,-1);
    tracep->declBit(c+819,"ifu_arvalid", false,-1);
    tracep->declBus(c+820,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+821,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+822,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+823,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+824,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+825,"ifu_rready", false,-1);
    tracep->declBit(c+155,"ifu_rvalid", false,-1);
    tracep->declBus(c+158,"ifu_rresp", false,-1, 1,0);
    tracep->declBus(c+154,"ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+157,"ifu_rlast", false,-1);
    tracep->declBus(c+156,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+246,"lsu_awready", false,-1);
    tracep->declBit(c+813,"lsu_awvalid", false,-1);
    tracep->declBus(c+808,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+809,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+810,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+811,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+812,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+247,"lsu_wready", false,-1);
    tracep->declBit(c+816,"lsu_wvalid", false,-1);
    tracep->declBus(c+814,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+815,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+817,"lsu_wlast", false,-1);
    tracep->declBit(c+818,"lsu_bready", false,-1);
    tracep->declBit(c+153,"lsu_bvalid", false,-1);
    tracep->declBus(c+151,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+152,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+204,"lsu_arready", false,-1);
    tracep->declBit(c+801,"lsu_arvalid", false,-1);
    tracep->declBus(c+802,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+803,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+804,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+805,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+806,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+807,"lsu_rready", false,-1);
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
    tracep->declBit(c+1609,"io_master_wready", false,-1);
    tracep->declBit(c+81,"io_master_wvalid", false,-1);
    tracep->declBus(c+59,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+60,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"io_master_wlast", false,-1);
    tracep->declBit(c+82,"io_master_bready", false,-1);
    tracep->declBit(c+1504,"io_master_bvalid", false,-1);
    tracep->declBus(c+1610,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1505,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+239,"io_master_arready", false,-1);
    tracep->declBit(c+192,"io_master_arvalid", false,-1);
    tracep->declBus(c+178,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+177,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+179,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+139,"io_master_rready", false,-1);
    tracep->declBit(c+1506,"io_master_rvalid", false,-1);
    tracep->declBus(c+1509,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1508,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1510,"io_master_rlast", false,-1);
    tracep->declBus(c+1507,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+206,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+207,"clint_arvalid", false,-1);
    tracep->declBit(c+826,"clint_arready", false,-1);
    tracep->declBus(c+208,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+209,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+210,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+211,"clint_arburst", false,-1, 1,0);
    tracep->declBus(c+828,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+827,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+829,"clint_rvalid", false,-1);
    tracep->declBit(c+159,"clint_rready", false,-1);
    tracep->declBit(c+830,"clint_rlast", false,-1);
    tracep->declBus(c+1658,"clint_rid", false,-1, 3,0);
    tracep->declBus(c+1644,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+1639,"clint_awvalid", false,-1);
    tracep->declBit(c+831,"clint_awready", false,-1);
    tracep->declBus(c+1645,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1646,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1647,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1642,"clint_awburst", false,-1, 1,0);
    tracep->declBus(c+1644,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1645,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1639,"clint_wvalid", false,-1);
    tracep->declBit(c+832,"clint_wready", false,-1);
    tracep->declBit(c+1639,"clint_wlast", false,-1);
    tracep->declBus(c+833,"clint_bresp", false,-1, 1,0);
    tracep->declBit(c+834,"clint_bvalid", false,-1);
    tracep->declBit(c+1639,"clint_bready", false,-1);
    tracep->declBus(c+1645,"clint_bid", false,-1, 3,0);
    tracep->declBus(c+1647,"NONE", false,-1, 2,0);
    tracep->declBus(c+1634,"IFU", false,-1, 2,0);
    tracep->declBus(c+1661,"LSU_READ", false,-1, 2,0);
    tracep->declBus(c+1662,"LSU_WRITE", false,-1, 2,0);
    tracep->declBus(c+1663,"CLINT", false,-1, 1,0);
    tracep->declBus(c+1664,"MASTER", false,-1, 1,0);
    tracep->declBus(c+835,"current_master", false,-1, 2,0);
    tracep->declBus(c+1613,"next_master", false,-1, 2,0);
    tracep->declBus(c+1642,"OKAY", false,-1, 1,0);
    tracep->declBus(c+1664,"SLVERR", false,-1, 1,0);
    tracep->declBus(c+1665,"DECERR", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint ");
    tracep->declBus(c+1666,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1666,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1667,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+1636,"MIN_DELAY", false,-1, 31,0);
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+105,"reset", false,-1);
    tracep->declBus(c+206,"araddr", false,-1, 31,0);
    tracep->declBit(c+207,"arvalid", false,-1);
    tracep->declBit(c+826,"arready", false,-1);
    tracep->declBus(c+828,"rdata", false,-1, 31,0);
    tracep->declBit(c+829,"rvalid", false,-1);
    tracep->declBit(c+830,"rlast", false,-1);
    tracep->declBit(c+159,"rready", false,-1);
    tracep->declBus(c+827,"rresp", false,-1, 1,0);
    tracep->declBus(c+1644,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1639,"awvalid", false,-1);
    tracep->declBit(c+831,"awready", false,-1);
    tracep->declBus(c+1644,"wdata", false,-1, 31,0);
    tracep->declBus(c+1645,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1639,"wvalid", false,-1);
    tracep->declBit(c+832,"wready", false,-1);
    tracep->declBus(c+833,"bresp", false,-1, 1,0);
    tracep->declBit(c+834,"bvalid", false,-1);
    tracep->declBit(c+1639,"bready", false,-1);
    tracep->declBus(c+1642,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1663,"READ_ADDR", false,-1, 1,0);
    tracep->declBus(c+1665,"READ_DATA", false,-1, 1,0);
    tracep->declBus(c+836,"clint_state", false,-1, 1,0);
    tracep->declBus(c+837,"next_clint_state", false,-1, 1,0);
    tracep->declBus(c+838,"LFSR", false,-1, 2,0);
    tracep->declBus(c+839,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+840,"rdata_reg", false,-1, 31,0);
    tracep->declQuad(c+841,"mtime", false,-1, 63,0);
    tracep->declBus(c+843,"mtime_low", false,-1, 31,0);
    tracep->declBus(c+844,"mtime_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+105,"reset", false,-1);
    tracep->declBit(c+1435,"id_ready", false,-1);
    tracep->declBit(c+734,"id_valid", false,-1);
    tracep->declBit(c+735,"ex_ready", false,-1);
    tracep->declBit(c+764,"lsu_ready", false,-1);
    tracep->declBit(c+763,"ex_lsu_valid", false,-1);
    tracep->declBus(c+738,"id_wb_rs1", false,-1, 3,0);
    tracep->declBus(c+739,"id_wb_rs2", false,-1, 3,0);
    tracep->declBus(c+797,"lsu_ex_forward_rd", false,-1, 3,0);
    tracep->declBit(c+798,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+799,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBus(c+785,"lsu_wb_wdata", false,-1, 31,0);
    tracep->declBus(c+784,"lsu_wb_rd", false,-1, 3,0);
    tracep->declBit(c+783,"lsu_wb_RegWrite", false,-1);
    tracep->declBit(c+782,"lsu_wb_valid", false,-1);
    tracep->declBit(c+800,"ex_lsu_forward_las", false,-1);
    tracep->declBus(c+733,"id_ex_inst", false,-1, 31,0);
    tracep->declBus(c+732,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+741,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+740,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+742,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+793,"wb_ex_src1", false,-1, 31,0);
    tracep->declBus(c+794,"wb_ex_src2", false,-1, 31,0);
    tracep->declBit(c+736,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+737,"id_ex_rd", false,-1, 3,0);
    tracep->declBus(c+747,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+748,"id_ex_func3", false,-1, 2,0);
    tracep->declBus(c+743,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBit(c+749,"id_ex_jal", false,-1);
    tracep->declBit(c+750,"id_ex_jalr", false,-1);
    tracep->declBit(c+746,"id_ex_MemRead", false,-1);
    tracep->declBit(c+745,"id_ex_MemWrite", false,-1);
    tracep->declBus(c+744,"id_ex_MemLen", false,-1, 4,0);
    tracep->declBus(c+795,"wb_ex_csr_num1", false,-1, 31,0);
    tracep->declBus(c+796,"wb_ex_csr_num2", false,-1, 31,0);
    tracep->declBit(c+751,"id_ex_csr", false,-1);
    tracep->declBit(c+752,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+753,"id_ex_csr_wen2", false,-1);
    tracep->declBus(c+757,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+758,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+754,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+755,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+756,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBit(c+1436,"ex_flush", false,-1);
    tracep->declBus(c+1437,"ex_flush_pc", false,-1, 31,0);
    tracep->declBus(c+762,"ex_lsu_inst", false,-1, 31,0);
    tracep->declBus(c+761,"ex_lsu_pc", false,-1, 31,0);
    tracep->declBus(c+765,"ex_lsu_src2", false,-1, 31,0);
    tracep->declBit(c+766,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+767,"ex_lsu_rd", false,-1, 3,0);
    tracep->declBit(c+768,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+769,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+770,"ex_lsu_MemLen", false,-1, 4,0);
    tracep->declBit(c+772,"ex_lsu_csr", false,-1);
    tracep->declBit(c+773,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+774,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+775,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+776,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+777,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+778,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+779,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+780,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+781,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+771,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBus(c+845,"src1", false,-1, 31,0);
    tracep->declBus(c+846,"src2", false,-1, 31,0);
    tracep->declBus(c+847,"ex_num1", false,-1, 31,0);
    tracep->declBus(c+848,"ex_num2", false,-1, 31,0);
    tracep->declBus(c+849,"process_result", false,-1, 31,0);
    tracep->declBit(c+850,"alu_zero", false,-1);
    tracep->declBit(c+851,"alu_less", false,-1);
    tracep->declBus(c+1438,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+1439,"take_branch", false,-1);
    tracep->declBit(c+852,"ex_flush_condition", false,-1);
    tracep->declBus(c+853,"mstatus", false,-1, 31,0);
    tracep->declBus(c+854,"mpie", false,-1, 31,0);
    tracep->declBus(c+855,"csr_write_data", false,-1, 31,0);
    tracep->declBus(c+856,"forward_rs1", false,-1, 1,0);
    tracep->declBus(c+857,"forward_rs2", false,-1, 1,0);
    tracep->declBit(c+858,"forward_las", false,-1);
    tracep->declBus(c+859,"load_use_flag", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+105,"reset", false,-1);
    tracep->declBus(c+1376,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+1377,"if_id_inst", false,-1, 31,0);
    tracep->declBit(c+1436,"ex_flush", false,-1);
    tracep->declBit(c+1378,"if_valid", false,-1);
    tracep->declBit(c+1435,"id_ready", false,-1);
    tracep->declBit(c+735,"ex_ready", false,-1);
    tracep->declBit(c+734,"id_valid", false,-1);
    tracep->declBus(c+732,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+733,"id_ex_inst", false,-1, 31,0);
    tracep->declBit(c+736,"id_ex_RegWrite", false,-1);
    tracep->declBus(c+737,"id_ex_rd", false,-1, 3,0);
    tracep->declBus(c+738,"id_wb_rs1", false,-1, 3,0);
    tracep->declBus(c+739,"id_wb_rs2", false,-1, 3,0);
    tracep->declBus(c+740,"id_ex_zimm", false,-1, 4,0);
    tracep->declBus(c+741,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+742,"id_ex_shamt", false,-1, 5,0);
    tracep->declBus(c+743,"id_ex_alu_op", false,-1, 3,0);
    tracep->declBus(c+744,"id_ex_MemLen", false,-1, 4,0);
    tracep->declBit(c+745,"id_ex_MemWrite", false,-1);
    tracep->declBit(c+746,"id_ex_MemRead", false,-1);
    tracep->declBus(c+747,"id_ex_opcode", false,-1, 6,0);
    tracep->declBus(c+748,"id_ex_func3", false,-1, 2,0);
    tracep->declBit(c+749,"id_ex_jal", false,-1);
    tracep->declBit(c+750,"id_ex_jalr", false,-1);
    tracep->declBit(c+751,"id_ex_csr", false,-1);
    tracep->declBit(c+752,"id_ex_csr_wen1", false,-1);
    tracep->declBit(c+753,"id_ex_csr_wen2", false,-1);
    tracep->declBit(c+754,"id_ex_csr_ecall", false,-1);
    tracep->declBit(c+755,"id_ex_csr_mret", false,-1);
    tracep->declBus(c+756,"id_ex_csr_op", false,-1, 1,0);
    tracep->declBus(c+757,"id_ex_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+758,"id_ex_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+759,"id_wb_csr_addr1", false,-1, 11,0);
    tracep->declBus(c+760,"id_wb_csr_addr2", false,-1, 11,0);
    tracep->declBus(c+1379,"opcode", false,-1, 6,0);
    tracep->declBus(c+1380,"rs1", false,-1, 3,0);
    tracep->declBus(c+1381,"rs2", false,-1, 3,0);
    tracep->declBus(c+1382,"rd", false,-1, 3,0);
    tracep->declBus(c+1383,"func3", false,-1, 2,0);
    tracep->declBus(c+1384,"func7", false,-1, 6,0);
    tracep->declBus(c+1385,"shamt", false,-1, 5,0);
    tracep->declBus(c+1386,"zimm", false,-1, 4,0);
    tracep->declBus(c+1387,"get_opcode", false,-1, 4,0);
    tracep->declBus(c+1388,"immI", false,-1, 31,0);
    tracep->declBus(c+1389,"immU", false,-1, 31,0);
    tracep->declBus(c+1390,"immS", false,-1, 31,0);
    tracep->declBus(c+1391,"immB", false,-1, 31,0);
    tracep->declBus(c+1392,"immJ", false,-1, 31,0);
    tracep->declBus(c+1644,"immR", false,-1, 31,0);
    tracep->declBus(c+1393,"immCSR", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+105,"reset", false,-1);
    tracep->declBit(c+1436,"EX_flush", false,-1);
    tracep->declBus(c+1437,"EX_flush_pc", false,-1, 31,0);
    tracep->declBit(c+1435,"ID_ready", false,-1);
    tracep->declBit(c+1378,"IF_valid", false,-1);
    tracep->declBus(c+1376,"IF_ID_pc", false,-1, 31,0);
    tracep->declBus(c+1377,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+819,"if_axi_arvalid", false,-1);
    tracep->declBit(c+205,"axi_if_arready", false,-1);
    tracep->declBus(c+820,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+821,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+822,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+823,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+824,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+154,"axi_if_rdata", false,-1, 31,0);
    tracep->declBit(c+155,"axi_if_rvalid", false,-1);
    tracep->declBit(c+825,"if_axi_rready", false,-1);
    tracep->declBus(c+158,"axi_if_rresp", false,-1, 1,0);
    tracep->declBus(c+156,"axi_if_rid", false,-1, 3,0);
    tracep->declBit(c+157,"axi_if_rlast", false,-1);
    tracep->declBus(c+1394,"state", false,-1, 1,0);
    tracep->declBus(c+1642,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1663,"WAIT_FLUSH", false,-1, 1,0);
    tracep->declBus(c+1665,"WAIT_CACHE", false,-1, 1,0);
    tracep->declBus(c+1668,"FENCEI", false,-1, 31,0);
    tracep->declBus(c+1669,"JAL_OPCODE", false,-1, 6,0);
    tracep->declBus(c+1570,"next_pc", false,-1, 31,0);
    tracep->declBit(c+1395,"cache_req", false,-1);
    tracep->declBit(c+1396,"flush_once", false,-1);
    tracep->declBit(c+1397,"once", false,-1);
    tracep->declBus(c+1440,"cache_inst", false,-1, 31,0);
    tracep->declBit(c+1441,"cache_valid", false,-1);
    tracep->declBus(c+860,"cache_araddr", false,-1, 31,0);
    tracep->declBit(c+861,"cache_arvalid", false,-1);
    tracep->declBus(c+862,"cache_arid", false,-1, 3,0);
    tracep->declBus(c+863,"cache_arlen", false,-1, 7,0);
    tracep->declBus(c+864,"cache_arsize", false,-1, 2,0);
    tracep->declBus(c+865,"cache_arburst", false,-1, 1,0);
    tracep->declBit(c+866,"cache_rready", false,-1);
    tracep->declBit(c+1398,"is_fencei", false,-1);
    tracep->declBit(c+1442,"is_jal", false,-1);
    tracep->declBus(c+1443,"immJ", false,-1, 31,0);
    tracep->declBus(c+1614,"jal_target", false,-1, 31,0);
    tracep->pushNamePrefix("u_icache ");
    tracep->declBus(c+1670,"CACHE_SIZE", false,-1, 31,0);
    tracep->declBus(c+1671,"BLOCK_SIZE", false,-1, 31,0);
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+105,"reset", false,-1);
    tracep->declBit(c+1398,"is_fencei", false,-1);
    tracep->declBus(c+1570,"addr", false,-1, 31,0);
    tracep->declBus(c+1440,"inst", false,-1, 31,0);
    tracep->declBit(c+1441,"valid", false,-1);
    tracep->declBus(c+860,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+861,"axi_arvalid", false,-1);
    tracep->declBit(c+205,"axi_arready", false,-1);
    tracep->declBus(c+862,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+863,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+864,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+865,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+155,"axi_rvalid", false,-1);
    tracep->declBit(c+866,"axi_rready", false,-1);
    tracep->declBus(c+154,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+158,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+156,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+157,"axi_rlast", false,-1);
    tracep->declBus(c+1667,"NUM_BLOCKS", false,-1, 31,0);
    tracep->declBus(c+1667,"BLOCK_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1637,"INDEX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1672,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1667,"BEATS_PER_BLOCK", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+867+i*1,"tag_ram", true,(i+0), 25,0);
    }
    tracep->pushNamePrefix("data_ram");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+1444,"[0]", false,-1, 31,0);
    tracep->declBus(c+1445,"[1]", false,-1, 31,0);
    tracep->declBus(c+1446,"[2]", false,-1, 31,0);
    tracep->declBus(c+1447,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+1448,"[0]", false,-1, 31,0);
    tracep->declBus(c+1449,"[1]", false,-1, 31,0);
    tracep->declBus(c+1450,"[2]", false,-1, 31,0);
    tracep->declBus(c+1451,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+1452,"[0]", false,-1, 31,0);
    tracep->declBus(c+1453,"[1]", false,-1, 31,0);
    tracep->declBus(c+1454,"[2]", false,-1, 31,0);
    tracep->declBus(c+1455,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+1456,"[0]", false,-1, 31,0);
    tracep->declBus(c+1457,"[1]", false,-1, 31,0);
    tracep->declBus(c+1458,"[2]", false,-1, 31,0);
    tracep->declBus(c+1459,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+871+i*1,"valid_ram", true,(i+0));
    }
    tracep->declBus(c+1571,"req_tag", false,-1, 25,0);
    tracep->declBus(c+1572,"req_index", false,-1, 1,0);
    tracep->declBus(c+1573,"beat_idx", false,-1, 1,0);
    tracep->declBit(c+1615,"hit", false,-1);
    tracep->declBus(c+875,"saved_tag", false,-1, 25,0);
    tracep->declBus(c+876,"saved_index", false,-1, 1,0);
    tracep->declBus(c+1460,"saved_beat_idx", false,-1, 1,0);
    tracep->declBus(c+1642,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1663,"MISS", false,-1, 1,0);
    tracep->declBus(c+1664,"READ", false,-1, 1,0);
    tracep->declBus(c+1665,"FILL", false,-1, 1,0);
    tracep->declBus(c+1461,"state", false,-1, 1,0);
    tracep->declBus(c+1616,"next_state", false,-1, 1,0);
    tracep->declBit(c+1462,"busy", false,-1);
    tracep->declBus(c+877,"beat_cnt", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1463+i*1,"block_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+1673,"i", false,-1, 31,0);
    tracep->declBus(c+878,"idx", false,-1, 31,0);
    tracep->declBus(c+879,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+763,"ex_lsu_valid", false,-1);
    tracep->declBit(c+764,"lsu_ex_ready", false,-1);
    tracep->declBit(c+1641,"wb_lsu_ready", false,-1);
    tracep->declBit(c+782,"lsu_wb_valid", false,-1);
    tracep->declBit(c+800,"ex_lsu_forward_las", false,-1);
    tracep->declBit(c+766,"ex_lsu_RegWrite", false,-1);
    tracep->declBus(c+767,"ex_lsu_rd", false,-1, 3,0);
    tracep->declBit(c+768,"ex_lsu_MemRead", false,-1);
    tracep->declBit(c+769,"ex_lsu_MemWrite", false,-1);
    tracep->declBus(c+770,"ex_lsu_MemLen", false,-1, 4,0);
    tracep->declBus(c+761,"ex_lsu_pc", false,-1, 31,0);
    tracep->declBus(c+771,"addr", false,-1, 31,0);
    tracep->declBus(c+765,"data_in", false,-1, 31,0);
    tracep->declBit(c+772,"ex_lsu_csr", false,-1);
    tracep->declBit(c+773,"ex_lsu_csr_wen1", false,-1);
    tracep->declBit(c+774,"ex_lsu_csr_wen2", false,-1);
    tracep->declBus(c+777,"ex_lsu_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+778,"ex_lsu_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+775,"ex_lsu_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+776,"ex_lsu_csr_wr_addr2", false,-1, 11,0);
    tracep->declBus(c+779,"ex_lsu_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+780,"ex_lsu_csr_ecall", false,-1);
    tracep->declBit(c+781,"ex_lsu_csr_mret", false,-1);
    tracep->declBus(c+771,"ex_lsu_process_result", false,-1, 31,0);
    tracep->declBus(c+797,"lsu_ex_forward_rd", false,-1, 3,0);
    tracep->declBit(c+798,"lsu_ex_forward_RegWrite", false,-1);
    tracep->declBit(c+799,"lsu_ex_forward_MemRead", false,-1);
    tracep->declBus(c+786,"lsu_wb_csr_wr_data1", false,-1, 31,0);
    tracep->declBus(c+787,"lsu_wb_csr_wr_data2", false,-1, 31,0);
    tracep->declBus(c+788,"lsu_wb_csr_wr_addr1", false,-1, 11,0);
    tracep->declBus(c+789,"lsu_wb_csr_wr_addr2", false,-1, 11,0);
    tracep->declBit(c+790,"lsu_wb_csr_wen1", false,-1);
    tracep->declBit(c+791,"lsu_wb_csr_wen2", false,-1);
    tracep->declBit(c+783,"lsu_wb_RegWrite", false,-1);
    tracep->declBus(c+784,"lsu_wb_rd", false,-1, 3,0);
    tracep->declBus(c+785,"lsu_wb_write_rd_data", false,-1, 31,0);
    tracep->declBit(c+801,"lsu_axi_arvalid", false,-1);
    tracep->declBit(c+204,"axi_lsu_arready", false,-1);
    tracep->declBus(c+802,"lsu_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+803,"lsu_axi_arid", false,-1, 3,0);
    tracep->declBus(c+804,"lsu_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+805,"lsu_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+806,"lsu_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+146,"axi_lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+147,"axi_lsu_rvalid", false,-1);
    tracep->declBit(c+807,"lsu_axi_rready", false,-1);
    tracep->declBus(c+150,"axi_lsu_rresp", false,-1, 1,0);
    tracep->declBus(c+148,"axi_lsu_rid", false,-1, 3,0);
    tracep->declBit(c+149,"axi_lsu_rlast", false,-1);
    tracep->declBus(c+808,"lsu_axi_awaddr", false,-1, 31,0);
    tracep->declBit(c+813,"lsu_axi_awvalid", false,-1);
    tracep->declBit(c+246,"axi_lsu_awready", false,-1);
    tracep->declBus(c+809,"lsu_axi_awid", false,-1, 3,0);
    tracep->declBus(c+810,"lsu_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+811,"lsu_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+812,"lsu_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+814,"lsu_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+815,"lsu_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+816,"lsu_axi_wvalid", false,-1);
    tracep->declBit(c+247,"axi_lsu_wready", false,-1);
    tracep->declBit(c+817,"lsu_axi_wlast", false,-1);
    tracep->declBus(c+151,"axi_lsu_bresp", false,-1, 1,0);
    tracep->declBit(c+153,"axi_lsu_bvalid", false,-1);
    tracep->declBit(c+818,"lsu_axi_bready", false,-1);
    tracep->declBus(c+152,"axi_lsu_bid", false,-1, 3,0);
    tracep->declBus(c+1642,"OKAY", false,-1, 1,0);
    tracep->declBus(c+880,"cache_addr", false,-1, 31,0);
    tracep->declBus(c+881,"cache_rdata", false,-1, 31,0);
    tracep->declBit(c+882,"cache_valid", false,-1);
    tracep->declBit(c+883,"cache_busy", false,-1);
    tracep->declBit(c+884,"cache_req_valid", false,-1);
    tracep->declBit(c+885,"cache_we", false,-1);
    tracep->declBit(c+799,"l_load", false,-1);
    tracep->declBit(c+798,"l_rd_en", false,-1);
    tracep->declBus(c+797,"l_rd_addr", false,-1, 3,0);
    tracep->declBus(c+886,"l_MemLen", false,-1, 4,0);
    tracep->declBit(c+887,"read_pending", false,-1);
    tracep->declBit(c+888,"write_pending", false,-1);
    tracep->declBus(c+889,"read_lsu_data", false,-1, 31,0);
    tracep->declBit(c+890,"cache_op_complete", false,-1);
    tracep->declBus(c+891,"rd_data", false,-1, 31,0);
    tracep->pushNamePrefix("data_cache ");
    tracep->declBus(c+1671,"NUM_BLOCKS", false,-1, 31,0);
    tracep->declBus(c+1671,"BLOCK_SIZE", false,-1, 31,0);
    tracep->declBus(c+1667,"BURST_LEN", false,-1, 31,0);
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+105,"reset", false,-1);
    tracep->declBit(c+885,"we", false,-1);
    tracep->declBus(c+771,"addr", false,-1, 31,0);
    tracep->declBus(c+892,"wdata", false,-1, 31,0);
    tracep->declBus(c+893,"wstrb", false,-1, 3,0);
    tracep->declBus(c+881,"rdata", false,-1, 31,0);
    tracep->declBit(c+882,"valid", false,-1);
    tracep->declBit(c+883,"busy", false,-1);
    tracep->declBit(c+884,"req_valid", false,-1);
    tracep->declBus(c+886,"rstrb", false,-1, 4,0);
    tracep->declBus(c+803,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+802,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+801,"axi_arvalid", false,-1);
    tracep->declBus(c+804,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+805,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+806,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+204,"axi_arready", false,-1);
    tracep->declBit(c+147,"axi_rvalid", false,-1);
    tracep->declBit(c+149,"axi_rlast", false,-1);
    tracep->declBit(c+807,"axi_rready", false,-1);
    tracep->declBus(c+146,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+150,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+148,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+809,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+808,"axi_awaddr", false,-1, 31,0);
    tracep->declBit(c+813,"axi_awvalid", false,-1);
    tracep->declBus(c+810,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+811,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+812,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+246,"axi_awready", false,-1);
    tracep->declBus(c+814,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+815,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+816,"axi_wvalid", false,-1);
    tracep->declBit(c+817,"axi_wlast", false,-1);
    tracep->declBit(c+247,"axi_wready", false,-1);
    tracep->declBus(c+152,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+151,"axi_bresp", false,-1, 1,0);
    tracep->declBit(c+153,"axi_bvalid", false,-1);
    tracep->declBit(c+818,"axi_bready", false,-1);
    tracep->declBus(c+894,"addr_reg", false,-1, 31,0);
    tracep->declBus(c+1674,"SDRAM_BASE", false,-1, 31,0);
    tracep->declBus(c+1675,"SDRAM_END", false,-1, 31,0);
    tracep->declBus(c+1642,"AXI_BURST_FIXED", false,-1, 1,0);
    tracep->declBus(c+1663,"AXI_BURST_INCR", false,-1, 1,0);
    tracep->declBit(c+895,"addr_in_sdram", false,-1);
    tracep->declBit(c+895,"burst_en", false,-1);
    tracep->declBus(c+1676,"AXI_ID", false,-1, 3,0);
    tracep->declBus(c+1667,"BLOCK_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+896,"req_offset", false,-1, 3,0);
    tracep->declBus(c+897,"word_offset", false,-1, 1,0);
    tracep->declBus(c+898,"saved_word_offset", false,-1, 1,0);
    tracep->declBit(c+899,"saved_we", false,-1);
    tracep->declBus(c+900,"saved_wdata", false,-1, 31,0);
    tracep->declBus(c+901,"saved_wstrb", false,-1, 3,0);
    tracep->declBus(c+902,"burst_cnt", false,-1, 3,0);
    tracep->declBus(c+1647,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1661,"RD", false,-1, 2,0);
    tracep->declBus(c+1662,"WR", false,-1, 2,0);
    tracep->declBus(c+903,"state", false,-1, 2,0);
    tracep->declBus(c+160,"next_state", false,-1, 2,0);
    tracep->declBit(c+904,"aw_done", false,-1);
    tracep->declBit(c+905,"w_done", false,-1);
    tracep->declBit(c+906,"b_done", false,-1);
    tracep->declBit(c+907,"ar_done", false,-1);
    tracep->declBus(c+1647,"AXI_SIZE_BYTE", false,-1, 2,0);
    tracep->declBus(c+1634,"AXI_SIZE_HALF", false,-1, 2,0);
    tracep->declBus(c+1661,"AXI_SIZE_WORD", false,-1, 2,0);
    tracep->declArray(c+908,"block_data", false,-1, 127,0);
    tracep->declBus(c+1677,"s", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBus(c+1667,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1666,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+783,"wen", false,-1);
    tracep->declBit(c+782,"lsu_wb_valid", false,-1);
    tracep->declBit(c+1641,"wb_lsu_ready", false,-1);
    tracep->declBus(c+785,"wdata", false,-1, 31,0);
    tracep->declBus(c+784,"waddr", false,-1, 3,0);
    tracep->declBus(c+738,"rs1", false,-1, 3,0);
    tracep->declBus(c+739,"rs2", false,-1, 3,0);
    tracep->declBus(c+793,"src1", false,-1, 31,0);
    tracep->declBus(c+794,"src2", false,-1, 31,0);
    tracep->declBit(c+792,"wb_valid", false,-1);
    tracep->declBus(c+759,"raddr_csr1", false,-1, 11,0);
    tracep->declBus(c+760,"raddr_csr2", false,-1, 11,0);
    tracep->declBit(c+790,"wen_csr1", false,-1);
    tracep->declBit(c+791,"wen_csr2", false,-1);
    tracep->declBus(c+786,"wdata_csr1", false,-1, 31,0);
    tracep->declBus(c+787,"wdata_csr2", false,-1, 31,0);
    tracep->declBus(c+788,"waddr_csr1", false,-1, 11,0);
    tracep->declBus(c+789,"waddr_csr2", false,-1, 11,0);
    tracep->declBus(c+795,"rdata_csr1", false,-1, 31,0);
    tracep->declBus(c+796,"rdata_csr2", false,-1, 31,0);
    tracep->declBus(c+912,"mstatus", false,-1, 31,0);
    tracep->declBus(c+913,"mtvec", false,-1, 31,0);
    tracep->declBus(c+914,"mepc", false,-1, 31,0);
    tracep->declBus(c+915,"mcause", false,-1, 31,0);
    tracep->declBus(c+1678,"MSTATUS", false,-1, 11,0);
    tracep->declBus(c+1679,"MTVEC", false,-1, 11,0);
    tracep->declBus(c+1680,"MEPC", false,-1, 11,0);
    tracep->declBus(c+1681,"MCAUSE", false,-1, 11,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+916+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+932,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"io_d", false,-1);
    tracep->declBit(c+933,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"io_d", false,-1);
    tracep->declBit(c+933,"io_q", false,-1);
    tracep->declBit(c+933,"sync_0", false,-1);
    tracep->declBit(c+934,"sync_1", false,-1);
    tracep->declBit(c+935,"sync_2", false,-1);
    tracep->declBit(c+936,"sync_3", false,-1);
    tracep->declBit(c+937,"sync_4", false,-1);
    tracep->declBit(c+938,"sync_5", false,-1);
    tracep->declBit(c+939,"sync_6", false,-1);
    tracep->declBit(c+940,"sync_7", false,-1);
    tracep->declBit(c+941,"sync_8", false,-1);
    tracep->declBit(c+942,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1415,"auto_in_psel", false,-1);
    tracep->declBit(c+1032,"auto_in_penable", false,-1);
    tracep->declBit(c+1406,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1414,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1634,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+266,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1416,"auto_in_pready", false,-1);
    tracep->declBit(c+1640,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1417,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1576,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1577,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1578,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1579,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1580,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1581,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1582,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1583,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1584,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1585,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBus(c+1467,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1415,"in_psel", false,-1);
    tracep->declBit(c+1032,"in_penable", false,-1);
    tracep->declBus(c+1634,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1406,"in_pwrite", false,-1);
    tracep->declBus(c+266,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1416,"in_pready", false,-1);
    tracep->declBus(c+1417,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1640,"in_pslverr", false,-1);
    tracep->declBus(c+1576,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1577,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1578,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1579,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1580,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1581,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1582,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1583,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1584,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1585,"gpio_seg_7", false,-1, 7,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+943+i*1,"gpio_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+1468,"wen", false,-1);
    tracep->declBit(c+1469,"ren", false,-1);
    tracep->declBus(c+1470,"wdata", false,-1, 31,0);
    tracep->declBus(c+1471,"addr", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1413,"auto_in_psel", false,-1);
    tracep->declBit(c+1031,"auto_in_penable", false,-1);
    tracep->declBit(c+1406,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1414,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1634,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+266,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1038,"auto_in_pready", false,-1);
    tracep->declBit(c+1639,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1026,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1586,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1587,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBus(c+1467,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1413,"in_psel", false,-1);
    tracep->declBit(c+1031,"in_penable", false,-1);
    tracep->declBus(c+1634,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1406,"in_pwrite", false,-1);
    tracep->declBus(c+266,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1038,"in_pready", false,-1);
    tracep->declBus(c+1026,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1639,"in_pslverr", false,-1);
    tracep->declBit(c+1586,"ps2_clk", false,-1);
    tracep->declBit(c+1587,"ps2_data", false,-1);
    tracep->declBus(c+1044,"ps2_state", false,-1, 1,0);
    tracep->declBus(c+1635,"PS2_IDLE", false,-1, 31,0);
    tracep->declBus(c+1636,"PS2_READ", false,-1, 31,0);
    tracep->declBus(c+947,"buffer", false,-1, 9,0);
    tracep->declBus(c+948,"counter", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+949+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+965,"w_ptr", false,-1, 3,0);
    tracep->declBus(c+966,"r_ptr", false,-1, 3,0);
    tracep->declBit(c+967,"isn_empty", false,-1);
    tracep->declBus(c+968,"i", false,-1, 31,0);
    tracep->declBus(c+969,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+970,"sampling", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+93,"auto_in_awvalid", false,-1);
    tracep->declBit(c+94,"auto_in_wvalid", false,-1);
    tracep->declBit(c+528,"auto_in_arready", false,-1);
    tracep->declBit(c+198,"auto_in_arvalid", false,-1);
    tracep->declBus(c+169,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+199,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+4,"auto_in_rready", false,-1);
    tracep->declBit(c+529,"auto_in_rvalid", false,-1);
    tracep->declBus(c+530,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+531,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+529,"state", false,-1);
    tracep->declBus(c+531,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+530,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+212,"raddr", false,-1, 31,0);
    tracep->declBit(c+213,"ren", false,-1);
    tracep->declBus(c+214,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1418,"auto_in_psel", false,-1);
    tracep->declBit(c+1033,"auto_in_penable", false,-1);
    tracep->declBit(c+1406,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1405,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1634,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+266,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1602,"auto_in_pready", false,-1);
    tracep->declBit(c+1639,"auto_in_pslverr", false,-1);
    tracep->declBus(c+273,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1501,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1502,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1598,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBus(c+1405,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1418,"in_psel", false,-1);
    tracep->declBit(c+1033,"in_penable", false,-1);
    tracep->declBus(c+1634,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1406,"in_pwrite", false,-1);
    tracep->declBus(c+266,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1602,"in_pready", false,-1);
    tracep->declBus(c+273,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1639,"in_pslverr", false,-1);
    tracep->declBit(c+1501,"qspi_sck", false,-1);
    tracep->declBit(c+1502,"qspi_ce_n", false,-1);
    tracep->declBus(c+1598,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1598,"din", false,-1, 3,0);
    tracep->declBus(c+1528,"dout", false,-1, 3,0);
    tracep->declBus(c+1529,"douten", false,-1, 3,0);
    tracep->declBit(c+1617,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1574,"clk_i", false,-1);
    tracep->declBit(c+1575,"rst_i", false,-1);
    tracep->declBus(c+1405,"adr_i", false,-1, 31,0);
    tracep->declBus(c+266,"dat_i", false,-1, 31,0);
    tracep->declBus(c+273,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1407,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1418,"cyc_i", false,-1);
    tracep->declBit(c+1418,"stb_i", false,-1);
    tracep->declBit(c+1617,"ack_o", false,-1);
    tracep->declBit(c+1406,"we_i", false,-1);
    tracep->declBit(c+1501,"sck", false,-1);
    tracep->declBit(c+1502,"ce_n", false,-1);
    tracep->declBus(c+1598,"din", false,-1, 3,0);
    tracep->declBus(c+1528,"dout", false,-1, 3,0);
    tracep->declBus(c+1529,"douten", false,-1, 3,0);
    tracep->declBus(c+1682,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1683,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+1045,"mr_sck", false,-1);
    tracep->declBit(c+1046,"mr_ce_n", false,-1);
    tracep->declBus(c+1598,"mr_din", false,-1, 3,0);
    tracep->declBus(c+1047,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+1048,"mr_doe", false,-1);
    tracep->declBit(c+1049,"mw_sck", false,-1);
    tracep->declBit(c+1050,"mw_ce_n", false,-1);
    tracep->declBus(c+1598,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1530,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+1051,"mw_doe", false,-1);
    tracep->declBit(c+1531,"mr_rd", false,-1);
    tracep->declBit(c+1052,"mr_done", false,-1);
    tracep->declBit(c+1532,"mw_wr", false,-1);
    tracep->declBit(c+1533,"mw_done", false,-1);
    tracep->declBit(c+1418,"wb_valid", false,-1);
    tracep->declBit(c+1472,"wb_we", false,-1);
    tracep->declBit(c+1473,"wb_re", false,-1);
    tracep->declBit(c+1053,"state", false,-1);
    tracep->declBit(c+1534,"nstate", false,-1);
    tracep->declBus(c+1474,"size", false,-1, 2,0);
    tracep->declBus(c+1475,"byte0", false,-1, 7,0);
    tracep->declBus(c+1476,"byte1", false,-1, 7,0);
    tracep->declBus(c+971,"byte2", false,-1, 7,0);
    tracep->declBus(c+972,"byte3", false,-1, 7,0);
    tracep->declBus(c+1034,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1618,"rst_n", false,-1);
    tracep->declBus(c+1477,"addr", false,-1, 23,0);
    tracep->declBit(c+1531,"rd", false,-1);
    tracep->declBus(c+1684,"size", false,-1, 2,0);
    tracep->declBit(c+1052,"done", false,-1);
    tracep->declBus(c+273,"line", false,-1, 31,0);
    tracep->declBit(c+1045,"sck", false,-1);
    tracep->declBit(c+1046,"ce_n", false,-1);
    tracep->declBus(c+1598,"din", false,-1, 3,0);
    tracep->declBus(c+1047,"dout", false,-1, 3,0);
    tracep->declBit(c+1048,"douten", false,-1);
    tracep->declBus(c+1682,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1683,"READ", false,-1, 0,0);
    tracep->declBus(c+1685,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+1054,"state", false,-1);
    tracep->declBit(c+1535,"nstate", false,-1);
    tracep->declBus(c+1055,"counter", false,-1, 7,0);
    tracep->declBus(c+1056,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+973+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1686,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+1057,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1618,"rst_n", false,-1);
    tracep->declBus(c+1478,"addr", false,-1, 23,0);
    tracep->declBus(c+1034,"line", false,-1, 31,0);
    tracep->declBus(c+1474,"size", false,-1, 2,0);
    tracep->declBit(c+1532,"wr", false,-1);
    tracep->declBit(c+1533,"done", false,-1);
    tracep->declBit(c+1049,"sck", false,-1);
    tracep->declBit(c+1050,"ce_n", false,-1);
    tracep->declBus(c+1598,"din", false,-1, 3,0);
    tracep->declBus(c+1530,"dout", false,-1, 3,0);
    tracep->declBit(c+1051,"douten", false,-1);
    tracep->declBus(c+1682,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1683,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1479,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+1058,"state", false,-1);
    tracep->declBit(c+1536,"nstate", false,-1);
    tracep->declBus(c+1059,"counter", false,-1, 7,0);
    tracep->declBus(c+1060,"saddr", false,-1, 23,0);
    tracep->declBus(c+1687,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
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
    tracep->declBit(c+1606,"auto_in_bready", false,-1);
    tracep->declBit(c+1043,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1040,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1642,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+231,"auto_in_arready", false,-1);
    tracep->declBit(c+176,"auto_in_arvalid", false,-1);
    tracep->declBus(c+177,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+3,"auto_in_rready", false,-1);
    tracep->declBit(c+1039,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1040,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1041,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1642,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1042,"auto_in_rlast", false,-1);
    tracep->declBit(c+1599,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1540,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1541,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1542,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1543,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1544,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1600,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1545,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1546,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1558,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
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
    tracep->declBit(c+1606,"in_bready", false,-1);
    tracep->declBit(c+1043,"in_bvalid", false,-1);
    tracep->declBus(c+1642,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+1040,"in_bid", false,-1, 3,0);
    tracep->declBit(c+231,"in_arready", false,-1);
    tracep->declBit(c+176,"in_arvalid", false,-1);
    tracep->declBus(c+178,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+177,"in_arid", false,-1, 3,0);
    tracep->declBus(c+179,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+180,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+181,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+3,"in_rready", false,-1);
    tracep->declBit(c+1039,"in_rvalid", false,-1);
    tracep->declBus(c+1642,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+1041,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+1042,"in_rlast", false,-1);
    tracep->declBus(c+1040,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1599,"sdram_clk", false,-1);
    tracep->declBit(c+1540,"sdram_cke", false,-1);
    tracep->declBit(c+1541,"sdram_cs", false,-1);
    tracep->declBit(c+1542,"sdram_ras", false,-1);
    tracep->declBit(c+1543,"sdram_cas", false,-1);
    tracep->declBit(c+1544,"sdram_we", false,-1);
    tracep->declBus(c+1600,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1545,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1546,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1558,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+1061,"sdram_dout_en", false,-1);
    tracep->declBus(c+1062,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1574,"clk_i", false,-1);
    tracep->declBit(c+1575,"rst_i", false,-1);
    tracep->declBit(c+52,"inport_awvalid_i", false,-1);
    tracep->declBus(c+54,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+53,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+55,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+57,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+58,"inport_wvalid_i", false,-1);
    tracep->declBus(c+59,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+60,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+61,"inport_wlast_i", false,-1);
    tracep->declBit(c+1606,"inport_bready_i", false,-1);
    tracep->declBit(c+176,"inport_arvalid_i", false,-1);
    tracep->declBus(c+178,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+177,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+179,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+181,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+3,"inport_rready_i", false,-1);
    tracep->declBus(c+1558,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+232,"inport_awready_o", false,-1);
    tracep->declBit(c+233,"inport_wready_o", false,-1);
    tracep->declBit(c+1043,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1642,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1040,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+231,"inport_arready_o", false,-1);
    tracep->declBit(c+1039,"inport_rvalid_o", false,-1);
    tracep->declBus(c+1041,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1642,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1040,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+1042,"inport_rlast_o", false,-1);
    tracep->declBit(c+1599,"sdram_clk_o", false,-1);
    tracep->declBit(c+1540,"sdram_cke_o", false,-1);
    tracep->declBit(c+1541,"sdram_cs_o", false,-1);
    tracep->declBit(c+1542,"sdram_ras_o", false,-1);
    tracep->declBit(c+1543,"sdram_cas_o", false,-1);
    tracep->declBit(c+1544,"sdram_we_o", false,-1);
    tracep->declBus(c+1546,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1600,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1545,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+1062,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+1061,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1688,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1689,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1690,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1637,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+248,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+249,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+250,"ram_rd_w", false,-1);
    tracep->declBit(c+1547,"ram_accept_w", false,-1);
    tracep->declBus(c+59,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+1063,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1619,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+1064,"ram_ack_w", false,-1);
    tracep->declBit(c+1639,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1574,"clk_i", false,-1);
    tracep->declBit(c+1575,"rst_i", false,-1);
    tracep->declBit(c+52,"axi_awvalid_i", false,-1);
    tracep->declBus(c+54,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+53,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+55,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+57,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+58,"axi_wvalid_i", false,-1);
    tracep->declBus(c+59,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+60,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+61,"axi_wlast_i", false,-1);
    tracep->declBit(c+1606,"axi_bready_i", false,-1);
    tracep->declBit(c+176,"axi_arvalid_i", false,-1);
    tracep->declBus(c+178,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+177,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+179,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+181,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+3,"axi_rready_i", false,-1);
    tracep->declBit(c+1547,"ram_accept_i", false,-1);
    tracep->declBit(c+1064,"ram_ack_i", false,-1);
    tracep->declBit(c+1639,"ram_error_i", false,-1);
    tracep->declBus(c+1063,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+232,"axi_awready_o", false,-1);
    tracep->declBit(c+233,"axi_wready_o", false,-1);
    tracep->declBit(c+1043,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1642,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1040,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+231,"axi_arready_o", false,-1);
    tracep->declBit(c+1039,"axi_rvalid_o", false,-1);
    tracep->declBus(c+1041,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1642,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1040,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1042,"axi_rlast_o", false,-1);
    tracep->declBus(c+249,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+250,"ram_rd_o", false,-1);
    tracep->declBus(c+1619,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+248,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+59,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+1065,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+1066,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+1067,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+1068,"req_rd_q", false,-1);
    tracep->declBit(c+1069,"req_wr_q", false,-1);
    tracep->declBus(c+1070,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+1071,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+1072,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+1073,"req_prio_q", false,-1);
    tracep->declBit(c+1074,"req_hold_rd_q", false,-1);
    tracep->declBit(c+1075,"req_hold_wr_q", false,-1);
    tracep->declBit(c+1076,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+251,"req_push_w", false,-1);
    tracep->declBus(c+1620,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+1077,"req_out_valid_w", false,-1);
    tracep->declBus(c+1078,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+161,"resp_accept_w", false,-1);
    tracep->declBit(c+1079,"resp_is_write_w", false,-1);
    tracep->declBit(c+1080,"resp_is_read_w", false,-1);
    tracep->declBit(c+1042,"resp_is_last_w", false,-1);
    tracep->declBus(c+1040,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+1081,"resp_valid_w", false,-1);
    tracep->declBit(c+1082,"write_prio_w", false,-1);
    tracep->declBit(c+1083,"read_prio_w", false,-1);
    tracep->declBit(c+252,"write_active_w", false,-1);
    tracep->declBit(c+250,"read_active_w", false,-1);
    tracep->declBus(c+248,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1621,"wr_w", false,-1);
    tracep->declBit(c+250,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1691,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1667,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1637,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1574,"clk_i", false,-1);
    tracep->declBit(c+1575,"rst_i", false,-1);
    tracep->declBus(c+1620,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+251,"push_i", false,-1);
    tracep->declBit(c+161,"pop_i", false,-1);
    tracep->declBus(c+1078,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+1076,"accept_o", false,-1);
    tracep->declBit(c+1077,"valid_o", false,-1);
    tracep->declBus(c+1692,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1084+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+1088,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+1089,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+1090,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1666,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1667,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1637,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1574,"clk_i", false,-1);
    tracep->declBit(c+1575,"rst_i", false,-1);
    tracep->declBus(c+1063,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+1064,"push_i", false,-1);
    tracep->declBit(c+161,"pop_i", false,-1);
    tracep->declBus(c+1041,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+1091,"accept_o", false,-1);
    tracep->declBit(c+1081,"valid_o", false,-1);
    tracep->declBus(c+1692,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1092+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+1096,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+1097,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+1098,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1574,"clk_i", false,-1);
    tracep->declBit(c+1575,"rst_i", false,-1);
    tracep->declBus(c+249,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+250,"inport_rd_i", false,-1);
    tracep->declBus(c+1619,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+248,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+59,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1558,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1547,"inport_accept_o", false,-1);
    tracep->declBit(c+1064,"inport_ack_o", false,-1);
    tracep->declBit(c+1639,"inport_error_o", false,-1);
    tracep->declBus(c+1063,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1599,"sdram_clk_o", false,-1);
    tracep->declBit(c+1540,"sdram_cke_o", false,-1);
    tracep->declBit(c+1541,"sdram_cs_o", false,-1);
    tracep->declBit(c+1542,"sdram_ras_o", false,-1);
    tracep->declBit(c+1543,"sdram_cas_o", false,-1);
    tracep->declBit(c+1544,"sdram_we_o", false,-1);
    tracep->declBus(c+1546,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1600,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1545,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+1062,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+1061,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1688,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1689,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1690,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1637,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1637,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1667,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1693,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1694,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1695,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1696,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1697,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1667,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1698,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1699,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1700,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1701,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1702,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1703,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1676,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1645,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1704,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1667,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1645,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1676,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1703,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1699,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1701,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1700,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1702,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1698,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1705,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1706,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1707,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1707,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1666,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1707,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1637,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1637,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1691,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+248,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+249,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+250,"ram_rd_w", false,-1);
    tracep->declBit(c+1547,"ram_accept_w", false,-1);
    tracep->declBus(c+59,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+1063,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+1064,"ram_ack_w", false,-1);
    tracep->declBit(c+253,"ram_req_w", false,-1);
    tracep->declBus(c+1548,"command_q", false,-1, 3,0);
    tracep->declBus(c+1549,"addr_q", false,-1, 12,0);
    tracep->declBus(c+1062,"data_q", false,-1, 31,0);
    tracep->declBit(c+1099,"data_rd_en_q", false,-1);
    tracep->declBus(c+1546,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1540,"cke_q", false,-1);
    tracep->declBus(c+1545,"bank_q", false,-1, 1,0);
    tracep->declBus(c+1558,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+1100,"refresh_q", false,-1);
    tracep->declBus(c+1101,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1102+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1550,"state_q", false,-1, 3,0);
    tracep->declBus(c+254,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+255,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+1110,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+1111,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+256,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+257,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+258,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+259,"addr_bank_double", false,-1, 2,0);
    tracep->declBus(c+1667,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+1112,"delay_q", false,-1, 3,0);
    tracep->declBus(c+260,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1708,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1551,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+1113,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+1063,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+1114,"idx", false,-1, 31,0);
    tracep->declBus(c+1115,"rd_q", false,-1, 3,0);
    tracep->declBit(c+1064,"ack_q", false,-1);
    tracep->declArray(c+1552,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1422,"auto_in_psel", false,-1);
    tracep->declBit(c+1423,"auto_in_penable", false,-1);
    tracep->declBit(c+1406,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1412,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1634,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+266,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1604,"auto_in_pready", false,-1);
    tracep->declBit(c+1424,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1605,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1036,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1037,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1596,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1597,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1709,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1710,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1693,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBus(c+1480,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1422,"in_psel", false,-1);
    tracep->declBit(c+1423,"in_penable", false,-1);
    tracep->declBus(c+1634,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1406,"in_pwrite", false,-1);
    tracep->declBus(c+266,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1604,"in_pready", false,-1);
    tracep->declBus(c+1605,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1424,"in_pslverr", false,-1);
    tracep->declBit(c+1036,"spi_sck", false,-1);
    tracep->declBus(c+1037,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1596,"spi_mosi", false,-1);
    tracep->declBit(c+1597,"spi_miso", false,-1);
    tracep->declBit(c+1116,"spi_irq_out", false,-1);
    tracep->declBus(c+1711,"SPI_ADDR_START", false,-1, 31,0);
    tracep->declBus(c+1712,"SPI_ADDR_END", false,-1, 31,0);
    tracep->declBus(c+1709,"FLASH_ADDR_START", false,-1, 31,0);
    tracep->declBus(c+1710,"FLASH_ADDR_END", false,-1, 31,0);
    tracep->declBit(c+1481,"is_spi_addr", false,-1);
    tracep->declBit(c+1482,"is_flash_addr", false,-1);
    tracep->declBus(c+1647,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1634,"INIT_DIV", false,-1, 2,0);
    tracep->declBus(c+1661,"INIT_SS", false,-1, 2,0);
    tracep->declBus(c+1662,"INIT_CTRL", false,-1, 2,0);
    tracep->declBus(c+1684,"WRITE_CMD", false,-1, 2,0);
    tracep->declBus(c+1713,"START_TRANS", false,-1, 2,0);
    tracep->declBus(c+1714,"WAIT_TRANS", false,-1, 2,0);
    tracep->declBus(c+1715,"READ_DATA", false,-1, 2,0);
    tracep->declBus(c+977,"xip_state", false,-1, 2,0);
    tracep->declBit(c+1483,"spi_master_psel", false,-1);
    tracep->declBus(c+1484,"apb_paddr", false,-1, 31,0);
    tracep->declBit(c+1485,"apb_psel", false,-1);
    tracep->declBit(c+1486,"apb_penable", false,-1);
    tracep->declBus(c+1487,"apb_pprot", false,-1, 2,0);
    tracep->declBit(c+1488,"apb_pwrite", false,-1);
    tracep->declBus(c+1489,"apb_pwdata", false,-1, 31,0);
    tracep->declBus(c+1490,"apb_pstrb", false,-1, 3,0);
    tracep->declBit(c+1117,"apb_pready", false,-1);
    tracep->declBus(c+1118,"apb_prdata", false,-1, 31,0);
    tracep->declBit(c+1639,"apb_pslverr", false,-1);
    tracep->declBit(c+1491,"flash_xip_sel", false,-1);
    tracep->declBus(c+978,"flash_xip_paddr", false,-1, 31,0);
    tracep->declBit(c+979,"flash_xip_psel", false,-1);
    tracep->declBit(c+980,"flash_xip_penable", false,-1);
    tracep->declBus(c+1634,"flash_xip_pprot", false,-1, 2,0);
    tracep->declBit(c+981,"flash_xip_pwrite", false,-1);
    tracep->declBus(c+982,"flash_xip_pwdata", false,-1, 31,0);
    tracep->declBus(c+1035,"flash_xip_pstrb", false,-1, 3,0);
    tracep->declBit(c+983,"flash_xip_pready", false,-1);
    tracep->declBus(c+984,"flash_xip_prdata", false,-1, 31,0);
    tracep->declBit(c+1639,"flash_xip_pslverr", false,-1);
    tracep->declBit(c+1641,"spi_ctrl_ass", false,-1);
    tracep->declBit(c+1641,"spi_ctrl_ie", false,-1);
    tracep->declBus(c+1716,"spi_ctrl_char_len", false,-1, 6,0);
    tracep->declBit(c+1639,"spi_ctrl_reserved", false,-1);
    tracep->declBit(c+1641,"spi_ctrl_tx_neg", false,-1);
    tracep->declBit(c+1639,"spi_ctrl_rx_neg", false,-1);
    tracep->declBit(c+1639,"spi_ctrl_lsb", false,-1);
    tracep->declBus(c+1027,"spi_ctrl_data", false,-1, 31,0);
    tracep->declBit(c+1028,"spi_ctrl_go", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1636,"Tp", false,-1, 31,0);
    tracep->declBit(c+1574,"wb_clk_i", false,-1);
    tracep->declBit(c+1575,"wb_rst_i", false,-1);
    tracep->declBus(c+1492,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1489,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1118,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1490,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1488,"wb_we_i", false,-1);
    tracep->declBit(c+1485,"wb_stb_i", false,-1);
    tracep->declBit(c+1486,"wb_cyc_i", false,-1);
    tracep->declBit(c+1117,"wb_ack_o", false,-1);
    tracep->declBit(c+1639,"wb_err_o", false,-1);
    tracep->declBit(c+1116,"wb_int_o", false,-1);
    tracep->declBus(c+1037,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+1036,"sclk_pad_o", false,-1);
    tracep->declBit(c+1596,"mosi_pad_o", false,-1);
    tracep->declBit(c+1597,"miso_pad_i", false,-1);
    tracep->declBus(c+1119,"divider", false,-1, 15,0);
    tracep->declBus(c+1120,"ctrl", false,-1, 13,0);
    tracep->declBus(c+1121,"ss", false,-1, 7,0);
    tracep->declBus(c+1537,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+1122,"rx", false,-1, 127,0);
    tracep->declBit(c+1126,"rx_negedge", false,-1);
    tracep->declBit(c+1127,"tx_negedge", false,-1);
    tracep->declBus(c+1128,"char_len", false,-1, 6,0);
    tracep->declBit(c+1129,"go", false,-1);
    tracep->declBit(c+1130,"lsb", false,-1);
    tracep->declBit(c+1131,"ie", false,-1);
    tracep->declBit(c+1132,"ass", false,-1);
    tracep->declBit(c+1493,"spi_divider_sel", false,-1);
    tracep->declBit(c+1494,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1495,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1496,"spi_ss_sel", false,-1);
    tracep->declBit(c+1133,"tip", false,-1);
    tracep->declBit(c+1134,"pos_edge", false,-1);
    tracep->declBit(c+1135,"neg_edge", false,-1);
    tracep->declBit(c+1136,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1636,"Tp", false,-1, 31,0);
    tracep->declBit(c+1574,"clk_in", false,-1);
    tracep->declBit(c+1575,"rst", false,-1);
    tracep->declBit(c+1133,"enable", false,-1);
    tracep->declBit(c+1129,"go", false,-1);
    tracep->declBit(c+1136,"last_clk", false,-1);
    tracep->declBus(c+1119,"divider", false,-1, 15,0);
    tracep->declBit(c+1036,"clk_out", false,-1);
    tracep->declBit(c+1134,"pos_edge", false,-1);
    tracep->declBit(c+1135,"neg_edge", false,-1);
    tracep->declBus(c+1137,"cnt", false,-1, 15,0);
    tracep->declBit(c+1138,"cnt_zero", false,-1);
    tracep->declBit(c+1139,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1636,"Tp", false,-1, 31,0);
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1575,"rst", false,-1);
    tracep->declBus(c+1497,"latch", false,-1, 3,0);
    tracep->declBus(c+1490,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+1128,"len", false,-1, 6,0);
    tracep->declBit(c+1130,"lsb", false,-1);
    tracep->declBit(c+1129,"go", false,-1);
    tracep->declBit(c+1134,"pos_edge", false,-1);
    tracep->declBit(c+1135,"neg_edge", false,-1);
    tracep->declBit(c+1126,"rx_negedge", false,-1);
    tracep->declBit(c+1127,"tx_negedge", false,-1);
    tracep->declBit(c+1133,"tip", false,-1);
    tracep->declBit(c+1136,"last", false,-1);
    tracep->declBus(c+1489,"p_in", false,-1, 31,0);
    tracep->declArray(c+1122,"p_out", false,-1, 127,0);
    tracep->declBit(c+1036,"s_clk", false,-1);
    tracep->declBit(c+1597,"s_in", false,-1);
    tracep->declBit(c+1596,"s_out", false,-1);
    tracep->declBus(c+1140,"cnt", false,-1, 7,0);
    tracep->declArray(c+1122,"data", false,-1, 127,0);
    tracep->declBus(c+1141,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+1142,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+1143,"rx_clk", false,-1);
    tracep->declBit(c+1144,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1419,"auto_in_psel", false,-1);
    tracep->declBit(c+1420,"auto_in_penable", false,-1);
    tracep->declBit(c+1406,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1414,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1634,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+266,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1421,"auto_in_pready", false,-1);
    tracep->declBit(c+1639,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1603,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1594,"uart_rx", false,-1);
    tracep->declBit(c+1595,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1419,"in_psel", false,-1);
    tracep->declBit(c+1420,"in_penable", false,-1);
    tracep->declBus(c+1634,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1421,"in_pready", false,-1);
    tracep->declBit(c+1639,"in_pslverr", false,-1);
    tracep->declBus(c+1467,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1406,"in_pwrite", false,-1);
    tracep->declBus(c+1603,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+266,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1594,"uart_rx", false,-1);
    tracep->declBit(c+1595,"uart_tx", false,-1);
    tracep->declBit(c+1145,"rtsn", false,-1);
    tracep->declBit(c+1639,"ctsn", false,-1);
    tracep->declBit(c+1146,"dtr_pad_o", false,-1);
    tracep->declBit(c+1639,"dsr_pad_i", false,-1);
    tracep->declBit(c+1639,"ri_pad_i", false,-1);
    tracep->declBit(c+1639,"dcd_pad_i", false,-1);
    tracep->declBit(c+1147,"interrupt", false,-1);
    tracep->declBit(c+106,"reg_we", false,-1);
    tracep->declBit(c+107,"reg_re", false,-1);
    tracep->declBus(c+1498,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1499,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+985,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1538,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+1148,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1575,"wb_rst_i", false,-1);
    tracep->declBus(c+1498,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1500,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1538,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+106,"wb_we_i", false,-1);
    tracep->declBit(c+107,"wb_re_i", false,-1);
    tracep->declBit(c+1595,"stx_pad_o", false,-1);
    tracep->declBit(c+1594,"srx_pad_i", false,-1);
    tracep->declBus(c+1705,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+1148,"rts_pad_o", false,-1);
    tracep->declBit(c+1146,"dtr_pad_o", false,-1);
    tracep->declBit(c+1147,"int_o", false,-1);
    tracep->declBit(c+1149,"enable", false,-1);
    tracep->declBit(c+1150,"srx_pad", false,-1);
    tracep->declBus(c+1151,"ier", false,-1, 3,0);
    tracep->declBus(c+1152,"iir", false,-1, 3,0);
    tracep->declBus(c+1153,"fcr", false,-1, 1,0);
    tracep->declBus(c+1154,"mcr", false,-1, 4,0);
    tracep->declBus(c+1155,"lcr", false,-1, 7,0);
    tracep->declBus(c+1156,"msr", false,-1, 7,0);
    tracep->declBus(c+1157,"dl", false,-1, 15,0);
    tracep->declBus(c+1158,"scratch", false,-1, 7,0);
    tracep->declBit(c+1159,"start_dlc", false,-1);
    tracep->declBit(c+1160,"lsr_mask_d", false,-1);
    tracep->declBit(c+1161,"msi_reset", false,-1);
    tracep->declBus(c+1162,"dlc", false,-1, 15,0);
    tracep->declBus(c+1163,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+1164,"rx_reset", false,-1);
    tracep->declBit(c+1165,"tx_reset", false,-1);
    tracep->declBit(c+1166,"dlab", false,-1);
    tracep->declBit(c+1641,"cts_pad_i", false,-1);
    tracep->declBit(c+1639,"dsr_pad_i", false,-1);
    tracep->declBit(c+1639,"ri_pad_i", false,-1);
    tracep->declBit(c+1639,"dcd_pad_i", false,-1);
    tracep->declBit(c+1167,"loopback", false,-1);
    tracep->declBit(c+1639,"cts", false,-1);
    tracep->declBit(c+1641,"dsr", false,-1);
    tracep->declBit(c+1641,"ri", false,-1);
    tracep->declBit(c+1641,"dcd", false,-1);
    tracep->declBit(c+1168,"cts_c", false,-1);
    tracep->declBit(c+1169,"dsr_c", false,-1);
    tracep->declBit(c+1170,"ri_c", false,-1);
    tracep->declBit(c+1171,"dcd_c", false,-1);
    tracep->declBus(c+1172,"lsr", false,-1, 7,0);
    tracep->declBit(c+1173,"lsr0", false,-1);
    tracep->declBit(c+1174,"lsr1", false,-1);
    tracep->declBit(c+1175,"lsr2", false,-1);
    tracep->declBit(c+1176,"lsr3", false,-1);
    tracep->declBit(c+1177,"lsr4", false,-1);
    tracep->declBit(c+1178,"lsr5", false,-1);
    tracep->declBit(c+1179,"lsr6", false,-1);
    tracep->declBit(c+1180,"lsr7", false,-1);
    tracep->declBit(c+1181,"lsr0r", false,-1);
    tracep->declBit(c+1182,"lsr1r", false,-1);
    tracep->declBit(c+1183,"lsr2r", false,-1);
    tracep->declBit(c+1184,"lsr3r", false,-1);
    tracep->declBit(c+1185,"lsr4r", false,-1);
    tracep->declBit(c+1186,"lsr5r", false,-1);
    tracep->declBit(c+1187,"lsr6r", false,-1);
    tracep->declBit(c+1188,"lsr7r", false,-1);
    tracep->declBit(c+162,"lsr_mask", false,-1);
    tracep->declBit(c+1189,"rls_int", false,-1);
    tracep->declBit(c+1190,"rda_int", false,-1);
    tracep->declBit(c+1191,"ti_int", false,-1);
    tracep->declBit(c+1192,"thre_int", false,-1);
    tracep->declBit(c+1193,"ms_int", false,-1);
    tracep->declBit(c+1194,"tf_push", false,-1);
    tracep->declBit(c+1195,"rf_pop", false,-1);
    tracep->declBus(c+1029,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1196,"rf_error_bit", false,-1);
    tracep->declBit(c+1174,"rf_overrun", false,-1);
    tracep->declBit(c+1197,"rf_push_pulse", false,-1);
    tracep->declBus(c+1198,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1199,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1200,"tstate", false,-1, 2,0);
    tracep->declBus(c+1201,"rstate", false,-1, 3,0);
    tracep->declBus(c+1202,"counter_t", false,-1, 9,0);
    tracep->declBit(c+1203,"thre_set_en", false,-1);
    tracep->declBus(c+1204,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+1205,"block_value", false,-1, 7,0);
    tracep->declBit(c+1206,"serial_out", false,-1);
    tracep->declBit(c+1207,"serial_in", false,-1);
    tracep->declBit(c+163,"lsr_mask_condition", false,-1);
    tracep->declBit(c+164,"iir_read", false,-1);
    tracep->declBit(c+165,"msr_read", false,-1);
    tracep->declBit(c+166,"fifo_read", false,-1);
    tracep->declBit(c+167,"fifo_write", false,-1);
    tracep->declBus(c+1208,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+1209,"lsr0_d", false,-1);
    tracep->declBit(c+1210,"lsr1_d", false,-1);
    tracep->declBit(c+1211,"lsr2_d", false,-1);
    tracep->declBit(c+1212,"lsr3_d", false,-1);
    tracep->declBit(c+1213,"lsr4_d", false,-1);
    tracep->declBit(c+1214,"lsr5_d", false,-1);
    tracep->declBit(c+1215,"lsr6_d", false,-1);
    tracep->declBit(c+1216,"lsr7_d", false,-1);
    tracep->declBit(c+1217,"rls_int_d", false,-1);
    tracep->declBit(c+1218,"thre_int_d", false,-1);
    tracep->declBit(c+1219,"ms_int_d", false,-1);
    tracep->declBit(c+1220,"ti_int_d", false,-1);
    tracep->declBit(c+1221,"rda_int_d", false,-1);
    tracep->declBit(c+1222,"rls_int_rise", false,-1);
    tracep->declBit(c+1223,"thre_int_rise", false,-1);
    tracep->declBit(c+1224,"ms_int_rise", false,-1);
    tracep->declBit(c+1225,"ti_int_rise", false,-1);
    tracep->declBit(c+1226,"rda_int_rise", false,-1);
    tracep->declBit(c+1227,"rls_int_pnd", false,-1);
    tracep->declBit(c+1228,"rda_int_pnd", false,-1);
    tracep->declBit(c+1229,"thre_int_pnd", false,-1);
    tracep->declBit(c+1230,"ms_int_pnd", false,-1);
    tracep->declBit(c+1231,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1636,"Tp", false,-1, 31,0);
    tracep->declBus(c+1636,"width", false,-1, 31,0);
    tracep->declBus(c+1683,"init_value", false,-1, 0,0);
    tracep->declBit(c+1575,"rst_i", false,-1);
    tracep->declBit(c+1574,"clk_i", false,-1);
    tracep->declBit(c+1639,"stage1_rst_i", false,-1);
    tracep->declBit(c+1641,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1594,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+1150,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+1232,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1575,"wb_rst_i", false,-1);
    tracep->declBus(c+1155,"lcr", false,-1, 7,0);
    tracep->declBit(c+1195,"rf_pop", false,-1);
    tracep->declBit(c+1207,"srx_pad_i", false,-1);
    tracep->declBit(c+1149,"enable", false,-1);
    tracep->declBit(c+1164,"rx_reset", false,-1);
    tracep->declBit(c+162,"lsr_mask", false,-1);
    tracep->declBus(c+1202,"counter_t", false,-1, 9,0);
    tracep->declBus(c+1198,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1029,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1174,"rf_overrun", false,-1);
    tracep->declBit(c+1196,"rf_error_bit", false,-1);
    tracep->declBus(c+1201,"rstate", false,-1, 3,0);
    tracep->declBit(c+1197,"rf_push_pulse", false,-1);
    tracep->declBus(c+1233,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+1234,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+1235,"rshift", false,-1, 7,0);
    tracep->declBit(c+1236,"rparity", false,-1);
    tracep->declBit(c+1237,"rparity_error", false,-1);
    tracep->declBit(c+1238,"rframing_error", false,-1);
    tracep->declBit(c+1239,"rbit_in", false,-1);
    tracep->declBit(c+1240,"rparity_xor", false,-1);
    tracep->declBus(c+1241,"counter_b", false,-1, 7,0);
    tracep->declBit(c+1242,"rf_push_q", false,-1);
    tracep->declBus(c+1243,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+1244,"rf_push", false,-1);
    tracep->declBit(c+1245,"break_error", false,-1);
    tracep->declBit(c+1246,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+1247,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+1248,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+1249,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1645,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1676,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1703,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1699,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1701,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1700,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1702,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1698,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1705,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1706,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1717,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1250,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1251,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1718,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1671,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1667,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1719,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1575,"wb_rst_i", false,-1);
    tracep->declBit(c+1197,"push", false,-1);
    tracep->declBit(c+1195,"pop", false,-1);
    tracep->declBus(c+1243,"data_in", false,-1, 10,0);
    tracep->declBit(c+1164,"fifo_reset", false,-1);
    tracep->declBit(c+162,"reset_status", false,-1);
    tracep->declBus(c+1029,"data_out", false,-1, 10,0);
    tracep->declBit(c+1174,"overrun", false,-1);
    tracep->declBus(c+1198,"count", false,-1, 4,0);
    tracep->declBit(c+1196,"error_bit", false,-1);
    tracep->declBus(c+1030,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1252+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1268,"top", false,-1, 3,0);
    tracep->declBus(c+1269,"bottom", false,-1, 3,0);
    tracep->declBus(c+1270,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1271,"word0", false,-1, 2,0);
    tracep->declBus(c+1272,"word1", false,-1, 2,0);
    tracep->declBus(c+1273,"word2", false,-1, 2,0);
    tracep->declBus(c+1274,"word3", false,-1, 2,0);
    tracep->declBus(c+1275,"word4", false,-1, 2,0);
    tracep->declBus(c+1276,"word5", false,-1, 2,0);
    tracep->declBus(c+1277,"word6", false,-1, 2,0);
    tracep->declBus(c+1278,"word7", false,-1, 2,0);
    tracep->declBus(c+1279,"word8", false,-1, 2,0);
    tracep->declBus(c+1280,"word9", false,-1, 2,0);
    tracep->declBus(c+1281,"word10", false,-1, 2,0);
    tracep->declBus(c+1282,"word11", false,-1, 2,0);
    tracep->declBus(c+1283,"word12", false,-1, 2,0);
    tracep->declBus(c+1284,"word13", false,-1, 2,0);
    tracep->declBus(c+1285,"word14", false,-1, 2,0);
    tracep->declBus(c+1286,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1667,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1693,"data_width", false,-1, 31,0);
    tracep->declBus(c+1671,"depth", false,-1, 31,0);
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1197,"we", false,-1);
    tracep->declBus(c+1268,"a", false,-1, 3,0);
    tracep->declBus(c+1269,"dpra", false,-1, 3,0);
    tracep->declBus(c+1287,"di", false,-1, 7,0);
    tracep->declBus(c+1030,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+986+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1575,"wb_rst_i", false,-1);
    tracep->declBus(c+1155,"lcr", false,-1, 7,0);
    tracep->declBit(c+1194,"tf_push", false,-1);
    tracep->declBus(c+1500,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+1149,"enable", false,-1);
    tracep->declBit(c+1165,"tx_reset", false,-1);
    tracep->declBit(c+162,"lsr_mask", false,-1);
    tracep->declBit(c+1206,"stx_pad_o", false,-1);
    tracep->declBus(c+1200,"tstate", false,-1, 2,0);
    tracep->declBus(c+1199,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1288,"counter", false,-1, 4,0);
    tracep->declBus(c+1289,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1290,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1291,"stx_o_tmp", false,-1);
    tracep->declBit(c+1292,"parity_xor", false,-1);
    tracep->declBit(c+1293,"tf_pop", false,-1);
    tracep->declBit(c+1294,"bit_out", false,-1);
    tracep->declBus(c+1500,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1539,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1295,"tf_overrun", false,-1);
    tracep->declBus(c+1647,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1634,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1661,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1662,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1684,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1713,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1693,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1671,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1667,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1719,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1575,"wb_rst_i", false,-1);
    tracep->declBit(c+1194,"push", false,-1);
    tracep->declBit(c+1293,"pop", false,-1);
    tracep->declBus(c+1500,"data_in", false,-1, 7,0);
    tracep->declBit(c+1165,"fifo_reset", false,-1);
    tracep->declBit(c+162,"reset_status", false,-1);
    tracep->declBus(c+1539,"data_out", false,-1, 7,0);
    tracep->declBit(c+1295,"overrun", false,-1);
    tracep->declBus(c+1199,"count", false,-1, 4,0);
    tracep->declBus(c+1296,"top", false,-1, 3,0);
    tracep->declBus(c+1297,"bottom", false,-1, 3,0);
    tracep->declBus(c+1298,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1667,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1693,"data_width", false,-1, 31,0);
    tracep->declBus(c+1671,"depth", false,-1, 31,0);
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1194,"we", false,-1);
    tracep->declBus(c+1296,"a", false,-1, 3,0);
    tracep->declBus(c+1297,"dpra", false,-1, 3,0);
    tracep->declBus(c+1500,"di", false,-1, 7,0);
    tracep->declBus(c+1539,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1002+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1410,"auto_in_psel", false,-1);
    tracep->declBit(c+1411,"auto_in_penable", false,-1);
    tracep->declBit(c+1406,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1412,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1634,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+266,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+272,"auto_in_pready", false,-1);
    tracep->declBit(c+1639,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1635,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1588,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1589,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1590,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1591,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1592,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1593,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBus(c+1480,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1410,"in_psel", false,-1);
    tracep->declBit(c+1411,"in_penable", false,-1);
    tracep->declBus(c+1634,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1406,"in_pwrite", false,-1);
    tracep->declBus(c+266,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1407,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+272,"in_pready", false,-1);
    tracep->declBus(c+1635,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1639,"in_pslverr", false,-1);
    tracep->declBus(c+1588,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1589,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1590,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1591,"vga_hsync", false,-1);
    tracep->declBit(c+1592,"vga_vsync", false,-1);
    tracep->declBit(c+1593,"vga_valid", false,-1);
    tracep->declBus(c+1720,"NUM", false,-1, 31,0);
    tracep->declBit(c+1018,"sync_reg", false,-1);
    tracep->declBus(c+1721,"H_FRONT", false,-1, 31,0);
    tracep->declBus(c+1722,"H_ACT", false,-1, 31,0);
    tracep->declBus(c+1723,"H_BACK", false,-1, 31,0);
    tracep->declBus(c+1724,"H_TOTAL", false,-1, 31,0);
    tracep->declBus(c+1637,"V_FRONT", false,-1, 31,0);
    tracep->declBus(c+1725,"V_ACT", false,-1, 31,0);
    tracep->declBus(c+1726,"V_BACK", false,-1, 31,0);
    tracep->declBus(c+1727,"V_TOTAL", false,-1, 31,0);
    tracep->declBus(c+1728,"VGA_SYNC", false,-1, 31,0);
    tracep->declBus(c+1019,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+1020,"y_cnt", false,-1, 9,0);
    tracep->declBus(c+1021,"cnt", false,-1, 20,0);
    tracep->declBit(c+1022,"h_valid", false,-1);
    tracep->declBit(c+1023,"v_valid", false,-1);
    tracep->declBus(c+1635,"VGA_IDLE", false,-1, 31,0);
    tracep->declBus(c+1636,"VGA_WRITE", false,-1, 31,0);
    tracep->declBus(c+1024,"vga_state", false,-1, 1,0);
    tracep->declBus(c+1025,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+1036,"sck", false,-1);
    tracep->declBit(c+1622,"ss", false,-1);
    tracep->declBit(c+1596,"mosi", false,-1);
    tracep->declBit(c+1623,"miso", false,-1);
    tracep->declBus(c+1566,"data_in", false,-1, 7,0);
    tracep->declBus(c+1567,"data_out", false,-1, 7,0);
    tracep->declBus(c+1568,"bit_cnt", false,-1, 2,0);
    tracep->declBit(c+1569,"receiving", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+1036,"sck", false,-1);
    tracep->declBit(c+1299,"ss", false,-1);
    tracep->declBit(c+1596,"mosi", false,-1);
    tracep->declBit(c+1624,"miso", false,-1);
    tracep->declBit(c+1299,"reset", false,-1);
    tracep->declBus(c+1399,"state", false,-1, 2,0);
    tracep->declBus(c+1400,"counter", false,-1, 7,0);
    tracep->declBus(c+1401,"cmd", false,-1, 7,0);
    tracep->declBus(c+1402,"addr", false,-1, 23,0);
    tracep->declBus(c+1403,"data", false,-1, 31,0);
    tracep->declBit(c+1404,"ren", false,-1);
    tracep->declBus(c+1625,"rdata", false,-1, 31,0);
    tracep->declBus(c+1626,"raddr", false,-1, 31,0);
    tracep->declBus(c+1627,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+1036,"clock", false,-1);
    tracep->declBit(c+1404,"valid", false,-1);
    tracep->declBus(c+1401,"cmd", false,-1, 7,0);
    tracep->declBus(c+1626,"addr", false,-1, 31,0);
    tracep->declBus(c+1625,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1501,"sck", false,-1);
    tracep->declBit(c+1502,"ce_n", false,-1);
    tracep->declBus(c+1598,"dio", false,-1, 3,0);
    tracep->declBus(c+1686,"RCMD", false,-1, 7,0);
    tracep->declBus(c+1687,"WCMD", false,-1, 7,0);
    tracep->declBus(c+1729,"QPICMD", false,-1, 7,0);
    tracep->declBus(c+1561,"dout_en", false,-1, 3,0);
    tracep->declBus(c+1628,"dout", false,-1, 3,0);
    tracep->declBus(c+1598,"din", false,-1, 3,0);
    tracep->declBit(c+1629,"QPI_MODE", false,-1);
    tracep->declBus(c+1562,"cmd", false,-1, 7,0);
    tracep->declBus(c+1563,"addr", false,-1, 23,0);
    tracep->declBus(c+1630,"data", false,-1, 31,0);
    tracep->declBus(c+1631,"rdata", false,-1, 31,0);
    tracep->declBus(c+1564,"cnt", false,-1, 7,0);
    tracep->declBus(c+1565,"state", false,-1, 2,0);
    tracep->declBus(c+1647,"CMD", false,-1, 2,0);
    tracep->declBus(c+1634,"ADDR", false,-1, 2,0);
    tracep->declBus(c+1661,"DATA", false,-1, 2,0);
    tracep->declBus(c+1662,"DELAY", false,-1, 2,0);
    tracep->declBus(c+1684,"ERR", false,-1, 2,0);
    tracep->declBus(c+1632,"data_bswap", false,-1, 31,0);
    tracep->declBus(c+1633,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1599,"clk", false,-1);
    tracep->declBit(c+1540,"cke", false,-1);
    tracep->declBit(c+1541,"cs", false,-1);
    tracep->declBit(c+1542,"ras", false,-1);
    tracep->declBit(c+1543,"cas", false,-1);
    tracep->declBit(c+1544,"we", false,-1);
    tracep->declBus(c+1600,"a", false,-1, 13,0);
    tracep->declBus(c+1545,"ba", false,-1, 1,0);
    tracep->declBus(c+1546,"dqm", false,-1, 3,0);
    tracep->declBus(c+1558,"dq", false,-1, 31,0);
    tracep->declBus(c+1549,"addr", false,-1, 12,0);
    tracep->declBit(c+261,"bank_sel", false,-1);
    tracep->pushNamePrefix("sdram_32_u0 ");
    tracep->declBit(c+1599,"clk", false,-1);
    tracep->declBit(c+1540,"cke", false,-1);
    tracep->declBit(c+262,"cs", false,-1);
    tracep->declBit(c+1542,"ras", false,-1);
    tracep->declBit(c+1543,"cas", false,-1);
    tracep->declBit(c+1544,"we", false,-1);
    tracep->declBus(c+1549,"a", false,-1, 12,0);
    tracep->declBus(c+1545,"ba", false,-1, 1,0);
    tracep->declBus(c+1546,"dqm", false,-1, 3,0);
    tracep->declBus(c+1558,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("sdram_16_u1 ");
    tracep->declBit(c+1599,"clk", false,-1);
    tracep->declBit(c+1540,"cke", false,-1);
    tracep->declBit(c+262,"cs", false,-1);
    tracep->declBit(c+1542,"ras", false,-1);
    tracep->declBit(c+1543,"cas", false,-1);
    tracep->declBit(c+1544,"we", false,-1);
    tracep->declBus(c+1549,"a", false,-1, 12,0);
    tracep->declBus(c+1545,"ba", false,-1, 1,0);
    tracep->declBus(c+1555,"dqm", false,-1, 1,0);
    tracep->declBus(c+1559,"dq", false,-1, 15,0);
    tracep->declBus(c+1556,"cmd", false,-1, 2,0);
    tracep->declBus(c+1715,"NOP", false,-1, 2,0);
    tracep->declBus(c+1662,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1713,"READ", false,-1, 2,0);
    tracep->declBus(c+1684,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1714,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1661,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1634,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1647,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1730,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1300+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1304,"den", false,-1, 15,0);
    tracep->declBus(c+1559,"din", false,-1, 15,0);
    tracep->declBus(c+1305,"dout", false,-1, 15,0);
    tracep->declBus(c+1306,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1307,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1308,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1309,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1310,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1311,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1312,"read_flag", false,-1);
    tracep->declBus(c+1313,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1314,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1315,"w_data", false,-1, 15,0);
    tracep->declBus(c+1316,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1317,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1318,"Length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_16_u2 ");
    tracep->declBit(c+1599,"clk", false,-1);
    tracep->declBit(c+1540,"cke", false,-1);
    tracep->declBit(c+262,"cs", false,-1);
    tracep->declBit(c+1542,"ras", false,-1);
    tracep->declBit(c+1543,"cas", false,-1);
    tracep->declBit(c+1544,"we", false,-1);
    tracep->declBus(c+1549,"a", false,-1, 12,0);
    tracep->declBus(c+1545,"ba", false,-1, 1,0);
    tracep->declBus(c+1557,"dqm", false,-1, 1,0);
    tracep->declBus(c+1560,"dq", false,-1, 15,0);
    tracep->declBus(c+1556,"cmd", false,-1, 2,0);
    tracep->declBus(c+1715,"NOP", false,-1, 2,0);
    tracep->declBus(c+1662,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1713,"READ", false,-1, 2,0);
    tracep->declBus(c+1684,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1714,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1661,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1634,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1647,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1730,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1319+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1323,"den", false,-1, 15,0);
    tracep->declBus(c+1560,"din", false,-1, 15,0);
    tracep->declBus(c+1324,"dout", false,-1, 15,0);
    tracep->declBus(c+1325,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1326,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1327,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1328,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1329,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1330,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1331,"read_flag", false,-1);
    tracep->declBus(c+1332,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1333,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1334,"w_data", false,-1, 15,0);
    tracep->declBus(c+1335,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1336,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1337,"Length", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram_32_u1 ");
    tracep->declBit(c+1599,"clk", false,-1);
    tracep->declBit(c+1540,"cke", false,-1);
    tracep->declBit(c+263,"cs", false,-1);
    tracep->declBit(c+1542,"ras", false,-1);
    tracep->declBit(c+1543,"cas", false,-1);
    tracep->declBit(c+1544,"we", false,-1);
    tracep->declBus(c+1549,"a", false,-1, 12,0);
    tracep->declBus(c+1545,"ba", false,-1, 1,0);
    tracep->declBus(c+1546,"dqm", false,-1, 3,0);
    tracep->declBus(c+1558,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("sdram_16_u1 ");
    tracep->declBit(c+1599,"clk", false,-1);
    tracep->declBit(c+1540,"cke", false,-1);
    tracep->declBit(c+263,"cs", false,-1);
    tracep->declBit(c+1542,"ras", false,-1);
    tracep->declBit(c+1543,"cas", false,-1);
    tracep->declBit(c+1544,"we", false,-1);
    tracep->declBus(c+1549,"a", false,-1, 12,0);
    tracep->declBus(c+1545,"ba", false,-1, 1,0);
    tracep->declBus(c+1555,"dqm", false,-1, 1,0);
    tracep->declBus(c+1559,"dq", false,-1, 15,0);
    tracep->declBus(c+1556,"cmd", false,-1, 2,0);
    tracep->declBus(c+1715,"NOP", false,-1, 2,0);
    tracep->declBus(c+1662,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1713,"READ", false,-1, 2,0);
    tracep->declBus(c+1684,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1714,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1661,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1634,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1647,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1730,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1338+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1342,"den", false,-1, 15,0);
    tracep->declBus(c+1559,"din", false,-1, 15,0);
    tracep->declBus(c+1343,"dout", false,-1, 15,0);
    tracep->declBus(c+1344,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1345,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1346,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1347,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1348,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1349,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1350,"read_flag", false,-1);
    tracep->declBus(c+1351,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1352,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1353,"w_data", false,-1, 15,0);
    tracep->declBus(c+1354,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1355,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1356,"Length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_16_u2 ");
    tracep->declBit(c+1599,"clk", false,-1);
    tracep->declBit(c+1540,"cke", false,-1);
    tracep->declBit(c+263,"cs", false,-1);
    tracep->declBit(c+1542,"ras", false,-1);
    tracep->declBit(c+1543,"cas", false,-1);
    tracep->declBit(c+1544,"we", false,-1);
    tracep->declBus(c+1549,"a", false,-1, 12,0);
    tracep->declBus(c+1545,"ba", false,-1, 1,0);
    tracep->declBus(c+1557,"dqm", false,-1, 1,0);
    tracep->declBus(c+1560,"dq", false,-1, 15,0);
    tracep->declBus(c+1556,"cmd", false,-1, 2,0);
    tracep->declBus(c+1715,"NOP", false,-1, 2,0);
    tracep->declBus(c+1662,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1713,"READ", false,-1, 2,0);
    tracep->declBus(c+1684,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1714,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1661,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1634,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1647,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1730,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1357+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1361,"den", false,-1, 15,0);
    tracep->declBus(c+1560,"din", false,-1, 15,0);
    tracep->declBus(c+1362,"dout", false,-1, 15,0);
    tracep->declBus(c+1363,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1364,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1365,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1366,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1367,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1368,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1369,"read_flag", false,-1);
    tracep->declBus(c+1370,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1371,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1372,"w_data", false,-1, 15,0);
    tracep->declBus(c+1373,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1374,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1375,"Length", false,-1, 3,0);
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
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__data_cache__DOT__next_state),3);
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
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+265,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg));
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullIData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__counter),32);
    bufp->fullBit(oldp+272,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_state))));
    bufp->fullIData(oldp+273,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+275,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+276,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+277,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+278,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+279,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+280,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+281,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+282,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+283,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+287,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+288,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+289,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+290,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+291,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+292,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullIData(oldp+294,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+301,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg) 
                               << 1U)),2);
    bufp->fullCData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+304,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullBit(oldp+305,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+306,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+307,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+308,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+309,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+310,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+311,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+312,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+313,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+314,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+322,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullCData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+334,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                                << 0x23U) | (((QData)((IData)(
                                                              ((1U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg
                                                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                              << 3U) 
                                             | (QData)((IData)(
                                                               (1U 
                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold) 
                                                                   << 1U))))))),39);
    bufp->fullQData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+380,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+381,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+384,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+385,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+388,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+389,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+390,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+394,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+396,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+432,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+435,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+436,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+518,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+528,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+532,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+533,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+594,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+604,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+608,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+612,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+616,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+620,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+624,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+628,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+632,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+636,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+640,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+644,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+648,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+652,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+656,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+660,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+664,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+668,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+672,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+676,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+680,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+684,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+688,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+692,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+696,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+700,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+704,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+708,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+712,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+716,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+720,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+724,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+728,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_pc),32);
    bufp->fullIData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst),32);
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ready));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_RegWrite));
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_rd),4);
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs1),4);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs2),4);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_zimm),5);
    bufp->fullIData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_imm),32);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_shamt),6);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_alu_op),4);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_MemLen),5);
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_MemWrite));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_MemRead));
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_opcode),7);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_func3),3);
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_jal));
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_jalr));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr_wen1));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr_wen2));
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr_ecall));
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr_mret));
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr_op),2);
    bufp->fullSData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr_wr_addr1),12);
    bufp->fullSData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_csr_wr_addr2),12);
    bufp->fullSData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_csr_addr1),12);
    bufp->fullSData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_csr_addr2),12);
    bufp->fullIData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_pc),32);
    bufp->fullIData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_inst),32);
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_valid));
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ex_ready));
    bufp->fullIData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_src2),32);
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_RegWrite));
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_rd),4);
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_MemRead));
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_MemWrite));
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_MemLen),5);
    bufp->fullIData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_process_result),32);
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr));
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_wen1));
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_wen2));
    bufp->fullSData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_wr_addr1),12);
    bufp->fullSData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_wr_addr2),12);
    bufp->fullIData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_wr_data1),32);
    bufp->fullIData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_wr_data2),32);
    bufp->fullIData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_rdata),32);
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_ecall));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_csr_mret));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_valid));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_RegWrite));
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_rd),4);
    bufp->fullIData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_write_rd_data),32);
    bufp->fullIData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_csr_wr_data1),32);
    bufp->fullIData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_csr_wr_data2),32);
    bufp->fullSData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_csr_wr_addr1),12);
    bufp->fullSData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_csr_wr_addr2),12);
    bufp->fullBit(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_csr_wen1));
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wb_csr_wen2));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_valid));
    bufp->fullIData(oldp+793,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs1))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs1])),32);
    bufp->fullIData(oldp+794,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs2))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs2])),32);
    bufp->fullIData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ex_csr_num1),32);
    bufp->fullIData(oldp+796,(((0x300U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_csr_addr2))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mstatus
                                : ((0x305U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_csr_addr2))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mtvec
                                    : ((0x341U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_csr_addr2))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mepc
                                        : ((0x342U 
                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_csr_addr2))
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mcause
                                            : 0U))))),32);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__l_rd_addr),4);
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__l_rd_en));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__l_load));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_forward_las));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_arvalid));
    bufp->fullIData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_araddr),32);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_arid),4);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_arlen),8);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_arsize),3);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_arburst),2);
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_rready));
    bufp->fullIData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_awaddr),32);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_awid),4);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_awlen),8);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_awsize),3);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_awburst),2);
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_awvalid));
    bufp->fullIData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_wdata),32);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_wstrb),4);
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_wvalid));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_wlast));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_bready));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid));
    bufp->fullIData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr),32);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arid),4);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arlen),8);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arsize),3);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arburst),2);
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rready));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullIData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master),3);
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__clint_state),2);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__next_clint_state),2);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__LFSR),3);
    bufp->fullIData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__araddr_reg),32);
    bufp->fullIData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__rdata_reg),32);
    bufp->fullQData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime),64);
    bufp->fullIData(oldp+843,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime)),32);
    bufp->fullIData(oldp+844,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__src1),32);
    bufp->fullIData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__src2),32);
    bufp->fullIData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ex_num1),32);
    bufp->fullIData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ex_num2),32);
    bufp->fullIData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__process_result),32);
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_zero));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_less));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ex_flush_condition));
    bufp->fullIData(oldp+853,((0x80U | ((0xffffe7f7U 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ex_csr_num1) 
                                        | (8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ex_csr_num1 
                                                 >> 4U))))),32);
    bufp->fullIData(oldp+854,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ex_csr_num1 
                                     >> 7U))),32);
    bufp->fullIData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_write_data),32);
    bufp->fullCData(oldp+856,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_h9653a62d__0) 
                                << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_h666fa1ae__0))),2);
    bufp->fullCData(oldp+857,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0) 
                                << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_h3556a05f__0))),2);
    bufp->fullBit(oldp+858,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_MemWrite) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_MemRead) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_RegWrite) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_valid) 
                                      & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_rd)) 
                                         & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_rd) 
                                             != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wb_rs1)) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_he5bf04e5__0)))))))));
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__load_use_flag),4);
    bufp->fullIData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_araddr),32);
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_arvalid));
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_arid),4);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_arlen),8);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_arsize),3);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_arburst),2);
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_rready));
    bufp->fullIData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram[0]),26);
    bufp->fullIData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram[1]),26);
    bufp->fullIData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram[2]),26);
    bufp->fullIData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__tag_ram[3]),26);
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[0]));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[1]));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[2]));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__valid_ram[3]));
    bufp->fullIData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_tag),26);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_index),2);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__beat_cnt),2);
    bufp->fullIData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__idx),32);
    bufp->fullIData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__b),32);
    bufp->fullIData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__cache_addr),32);
    bufp->fullIData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__cache_rdata),32);
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__cache_valid));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__cache_busy));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__cache_req_valid));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__cache_we));
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__l_MemLen),5);
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_pending));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__write_pending));
    bufp->fullIData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_lsu_data),32);
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__cache_op_complete));
    bufp->fullIData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rd_data),32);
    bufp->fullIData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____Vcellinp__data_cache__wdata),32);
    bufp->fullCData(oldp+893,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_MemLen) 
                                       << (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_process_result)))),4);
    bufp->fullIData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__data_cache__DOT__addr_reg),32);
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__data_cache__DOT__addr_in_sdram));
    bufp->fullCData(oldp+896,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_process_result)),4);
    bufp->fullCData(oldp+897,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_lsu_process_result 
                                     >> 2U))),2);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__data_cache__DOT__saved_word_offset),2);
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__data_cache__DOT__saved_we));
    bufp->fullIData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__data_cache__DOT__saved_wdata),32);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__data_cache__DOT__saved_wstrb),4);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__data_cache__DOT__burst_cnt),4);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__data_cache__DOT__state),3);
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__data_cache__DOT__aw_done));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__data_cache__DOT__w_done));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__data_cache__DOT__b_done));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__data_cache__DOT__ar_done));
    bufp->fullWData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__data_cache__DOT__block_data),128);
    bufp->fullIData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mstatus),32);
    bufp->fullIData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mtvec),32);
    bufp->fullIData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mepc),32);
    bufp->fullIData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mcause),32);
    bufp->fullIData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[0]),32);
    bufp->fullIData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[1]),32);
    bufp->fullIData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[2]),32);
    bufp->fullIData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[3]),32);
    bufp->fullIData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[4]),32);
    bufp->fullIData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[5]),32);
    bufp->fullIData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[6]),32);
    bufp->fullIData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[7]),32);
    bufp->fullIData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[8]),32);
    bufp->fullIData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[9]),32);
    bufp->fullIData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[10]),32);
    bufp->fullIData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[11]),32);
    bufp->fullIData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[12]),32);
    bufp->fullIData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[13]),32);
    bufp->fullIData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[14]),32);
    bufp->fullIData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[15]),32);
    bufp->fullIData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__i),32);
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[0]),32);
    bufp->fullIData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[1]),32);
    bufp->fullIData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[2]),32);
    bufp->fullIData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[3]),32);
    bufp->fullSData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),10);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[0]),8);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[1]),8);
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[2]),8);
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[3]),8);
    bufp->fullCData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[4]),8);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[5]),8);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[6]),8);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[7]),8);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[8]),8);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[9]),8);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[10]),8);
    bufp->fullCData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[11]),8);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[12]),8);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[13]),8);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[14]),8);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[15]),8);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__w_ptr),4);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__r_ptr),4);
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__isn_empty));
    bufp->fullIData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__i),32);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+970,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+971,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+972,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),3);
    bufp->fullIData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_paddr),32);
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_psel));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pwrite));
    bufp->fullIData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pwdata),32);
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pready));
    bufp->fullIData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_prdata),32);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__sync_reg));
    bufp->fullSData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullSData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullIData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__cnt),21);
    bufp->fullBit(oldp+1022,(((0x90U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt)) 
                              & (0x310U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt)))));
    bufp->fullBit(oldp+1023,(((0x23U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt)) 
                              & (0x203U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt)))));
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_state),2);
    bufp->fullIData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullIData(oldp+1026,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_state))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__isn_empty)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo
                                    [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__r_ptr]
                                     : 0U) : 0U)),32);
    bufp->fullIData(oldp+1027,((0x3440U | (((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state)) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready) 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable))) 
                                           << 8U))),32);
    bufp->fullBit(oldp+1028,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable)))));
    bufp->fullSData(oldp+1029,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1031,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1032,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1033,((IData)(((0U == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))))));
    bufp->fullIData(oldp+1034,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1035,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_psel) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite))
                                 ? 0xfU : 0U)),4);
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+1037,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1038,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_state))));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+1040,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+1042,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 4U))));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_state),2);
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+1047,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+1048,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+1051,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+1052,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+1057,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                       >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+1061,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+1076,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+1077,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+1079,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                  >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+1080,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U))));
    bufp->fullBit(oldp+1081,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+1082,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+1083,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+1091,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
    bufp->fullSData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready));
    bufp->fullIData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata),32);
    bufp->fullSData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+1126,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U))));
    bufp->fullBit(oldp+1127,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xaU))));
    bufp->fullCData(oldp+1128,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+1129,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 8U))));
    bufp->fullBit(oldp+1130,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1131,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1132,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+1136,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+1138,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+1139,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+1141,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                             - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                             - (IData)(1U))))),8);
    bufp->fullCData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+1145,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1146,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+1148,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 1U))));
    bufp->fullBit(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+1166,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                    >> 7U))));
    bufp->fullBit(oldp+1167,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 4U))));
    bufp->fullBit(oldp+1168,((IData)((0x10U != (0x12U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1169,((IData)((0x11U == (0x11U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1170,((IData)((0x14U == (0x14U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1171,((IData)((0x18U == (0x18U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+1172,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+1175,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1176,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+1177,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+1196,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+1203,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+1222,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+1223,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+1224,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+1225,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+1226,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1245,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1246,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1247,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1248,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1249,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1251,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1270,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1287,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1298,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullSData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1304,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout),16);
    bufp->fullCData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__brust_len),3);
    bufp->fullCData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank),2);
    bufp->fullCData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_cnt),4);
    bufp->fullCData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_cnt),4);
    bufp->fullBit(oldp+1312,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag));
    bufp->fullSData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_addr),9);
    bufp->fullSData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_addr),9);
    bufp->fullSData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_data),16);
    bufp->fullIData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Length),4);
    bufp->fullSData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1323,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__dout),16);
    bufp->fullCData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__brust_len),3);
    bufp->fullCData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__L_Bank),2);
    bufp->fullCData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__r_cnt),4);
    bufp->fullCData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__w_cnt),4);
    bufp->fullBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__read_flag));
    bufp->fullSData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__r_addr),9);
    bufp->fullSData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__w_addr),9);
    bufp->fullSData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__w_data),16);
    bufp->fullIData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__Length),4);
    bufp->fullSData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1342,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout),16);
    bufp->fullCData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__brust_len),3);
    bufp->fullCData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank),2);
    bufp->fullCData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_cnt),4);
    bufp->fullCData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_cnt),4);
    bufp->fullBit(oldp+1350,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag));
    bufp->fullSData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_addr),9);
    bufp->fullSData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_addr),9);
    bufp->fullSData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_data),16);
    bufp->fullIData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Length),4);
    bufp->fullSData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1358,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1361,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__dout),16);
    bufp->fullCData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__brust_len),3);
    bufp->fullCData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__L_Bank),2);
    bufp->fullCData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__r_cnt),4);
    bufp->fullCData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__w_cnt),4);
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__read_flag));
    bufp->fullSData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__r_addr),9);
    bufp->fullSData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__w_addr),9);
    bufp->fullSData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__w_data),16);
    bufp->fullIData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__Length),4);
    bufp->fullIData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_pc),32);
    bufp->fullIData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst),32);
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_valid));
    bufp->fullCData(oldp+1379,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst)),7);
    bufp->fullCData(oldp+1380,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0xfU))),4);
    bufp->fullCData(oldp+1381,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0x14U))),4);
    bufp->fullCData(oldp+1382,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                        >> 7U))),4);
    bufp->fullCData(oldp+1383,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1384,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+1385,((0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                         >> 0x14U))),6);
    bufp->fullCData(oldp+1386,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1387,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                         >> 2U))),5);
    bufp->fullIData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI),32);
    bufp->fullIData(oldp+1389,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst)),32);
    bufp->fullIData(oldp+1390,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1391,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
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
    bufp->fullIData(oldp+1392,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst) 
                                              | ((0x800U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                                       >> 0x14U)))))),32);
    bufp->fullIData(oldp+1393,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst 
                                         >> 0xfU))),32);
    bufp->fullCData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state),2);
    bufp->fullBit(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_req));
    bufp->fullBit(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_once));
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__once));
    bufp->fullBit(oldp+1398,((0x100fU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_inst)));
    bufp->fullCData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1404,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullCData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1409,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                                   ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                                            ? 0U : 0U))) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)))));
    bufp->fullBit(oldp+1410,((IData)(((0x20000000U 
                                       == (0x30000000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel)))));
    bufp->fullBit(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1412,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+1413,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullIData(oldp+1414,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+1415,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+1417,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____VdfgTmp_h430db664__0
                                 : 0U)),32);
    bufp->fullBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1421,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1424,(0U));
    bufp->fullBit(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1427,((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1430,((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready));
    bufp->fullBit(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_flush));
    bufp->fullIData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_flush_pc),32);
    bufp->fullIData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jalr_target),32);
    bufp->fullBit(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__take_branch));
    bufp->fullIData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst),32);
    bufp->fullBit(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_valid));
    bufp->fullBit(oldp+1442,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst))));
    bufp->fullIData(oldp+1443,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst) 
                                              | ((0x800U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__cache_inst 
                                                       >> 0x14U)))))),32);
    bufp->fullIData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [0U][0U]),32);
    bufp->fullIData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [0U][1U]),32);
    bufp->fullIData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [0U][2U]),32);
    bufp->fullIData(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [0U][3U]),32);
    bufp->fullIData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [1U][0U]),32);
    bufp->fullIData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [1U][1U]),32);
    bufp->fullIData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [1U][2U]),32);
    bufp->fullIData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [1U][3U]),32);
    bufp->fullIData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [2U][0U]),32);
    bufp->fullIData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [2U][1U]),32);
    bufp->fullIData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [2U][2U]),32);
    bufp->fullIData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [2U][3U]),32);
    bufp->fullIData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [3U][0U]),32);
    bufp->fullIData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [3U][1U]),32);
    bufp->fullIData(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [3U][2U]),32);
    bufp->fullIData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__data_ram
                               [3U][3U]),32);
    bufp->fullCData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__saved_beat_idx),2);
    bufp->fullCData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__state),2);
    bufp->fullBit(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__busy));
    bufp->fullIData(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data[0]),32);
    bufp->fullIData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data[1]),32);
    bufp->fullIData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data[2]),32);
    bufp->fullIData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__block_data[3]),32);
    bufp->fullIData(oldp+1467,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__wen));
    bufp->fullBit(oldp+1469,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready))));
    bufp->fullIData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__wdata),32);
    bufp->fullCData(oldp+1471,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullIData(oldp+1477,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1478,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+1479,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullIData(oldp+1480,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+1481,(((0x10001000U <= (0x3fffffffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                              & (0x10001fffU >= (0x3fffffffU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullBit(oldp+1482,(((0x30000000U <= (0x3fffffffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                              & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)))));
    bufp->fullBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel));
    bufp->fullIData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr),32);
    bufp->fullBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_psel));
    bufp->fullBit(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_penable));
    bufp->fullCData(oldp+1487,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                                 ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                                          ? 1U : 0U))),3);
    bufp->fullBit(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite));
    bufp->fullIData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata),32);
    bufp->fullCData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb),4);
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel));
    bufp->fullCData(oldp+1492,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)),5);
    bufp->fullBit(oldp+1493,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))));
    bufp->fullBit(oldp+1494,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))));
    bufp->fullCData(oldp+1495,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
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
    bufp->fullBit(oldp+1496,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))));
    bufp->fullCData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1498,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullBit(oldp+1501,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1502,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullBit(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullIData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata),32);
    bufp->fullCData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp),2);
    bufp->fullBit(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1511,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1512,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullCData(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullIData(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullBit(oldp+1541,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1542,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1543,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1544,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullCData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullSData(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullCData(oldp+1555,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullCData(oldp+1556,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))),3);
    bufp->fullCData(oldp+1557,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullIData(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1559,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullSData(oldp+1560,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullCData(oldp+1561,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0)
                                 ? 0xfU : 0U)),4);
    bufp->fullCData(oldp+1562,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt),8);
    bufp->fullCData(oldp+1565,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+1566,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_in),8);
    bufp->fullCData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_out),8);
    bufp->fullCData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt),3);
    bufp->fullBit(oldp+1569,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__receiving));
    bufp->fullIData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next_pc),32);
    bufp->fullIData(oldp+1571,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next_pc 
                                >> 6U)),26);
    bufp->fullCData(oldp+1572,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next_pc 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1573,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next_pc 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1574,(vlSelf->clock));
    bufp->fullBit(oldp+1575,(vlSelf->reset));
    bufp->fullSData(oldp+1576,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1577,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1578,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1579,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1580,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1581,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1582,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1583,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1584,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1585,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1586,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1587,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1588,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1589,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1590,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1591,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1592,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1593,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1594,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1595,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1596,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1597,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->fullBit(oldp+1599,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1600,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullIData(oldp+1601,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_prdata
                                          : 0U)) : 0U) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                         ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                             << 0x18U) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                         : 0U) : 0U) 
                                   | (((0U == (3U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                >> 0x1cU)))
                                        ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                            [3U] << 0x18U) 
                                           | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                               [2U] 
                                               << 0x10U) 
                                              | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [1U] 
                                                  << 8U) 
                                                 | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                 [0U])))
                                        : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                   ? 
                                                  (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____VdfgTmp_h430db664__0
                                                    : 0U)
                                                   : 0U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                      ? 
                                                     ((1U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_state))
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__isn_empty)
                                                        ? 
                                                       vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo
                                                       [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__r_ptr]
                                                        : 0U)
                                                       : 0U)
                                                      : 0U) 
                                                    | ((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                            >> 0x1cU)))
                                                        ? 0U
                                                        : 0U))))))),32);
    bufp->fullBit(oldp+1602,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1603,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1604,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pready)
                                         : 0U)))));
    bufp->fullIData(oldp+1605,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_prdata
                                     : 0U))),32);
    bufp->fullBit(oldp+1606,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
    bufp->fullBit(oldp+1607,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1608,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullBit(oldp+1609,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullCData(oldp+1610,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
    bufp->fullBit(oldp+1611,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
    bufp->fullBit(oldp+1612,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    bufp->fullCData(oldp+1613,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))
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
    bufp->fullIData(oldp+1614,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_once)
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
    bufp->fullBit(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__hit));
    bufp->fullCData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__next_state),2);
    bufp->fullBit(oldp+1617,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1618,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1619,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen)
                                     : 0U))),8);
    bufp->fullCData(oldp+1620,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullBit(oldp+1621,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1622,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullBit(oldp+1623,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1624,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1626,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1628,((vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h2a2074af__0 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1629,(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE));
    bufp->fullIData(oldp+1630,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullIData(oldp+1631,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullIData(oldp+1632,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap),32);
    bufp->fullIData(oldp+1633,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                    >> 0x18U))))),32);
    bufp->fullCData(oldp+1634,(1U),3);
    bufp->fullIData(oldp+1635,(0U),32);
    bufp->fullIData(oldp+1636,(1U),32);
    bufp->fullIData(oldp+1637,(2U),32);
    bufp->fullIData(oldp+1638,(0x2fU),32);
    bufp->fullBit(oldp+1639,(0U));
    bufp->fullBit(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1641,(1U));
    bufp->fullCData(oldp+1642,(0U),2);
    bufp->fullBit(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1644,(0U),32);
    bufp->fullCData(oldp+1645,(0U),4);
    bufp->fullCData(oldp+1646,(0U),8);
    bufp->fullCData(oldp+1647,(0U),3);
    bufp->fullBit(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullCData(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rid),4);
    bufp->fullIData(oldp+1659,(0x2000000U),32);
    bufp->fullIData(oldp+1660,(0x2000007U),32);
    bufp->fullCData(oldp+1661,(2U),3);
    bufp->fullCData(oldp+1662,(3U),3);
    bufp->fullCData(oldp+1663,(1U),2);
    bufp->fullCData(oldp+1664,(2U),2);
    bufp->fullCData(oldp+1665,(3U),2);
    bufp->fullIData(oldp+1666,(0x20U),32);
    bufp->fullIData(oldp+1667,(4U),32);
    bufp->fullIData(oldp+1668,(0x100fU),32);
    bufp->fullCData(oldp+1669,(0x6fU),7);
    bufp->fullIData(oldp+1670,(0x40U),32);
    bufp->fullIData(oldp+1671,(0x10U),32);
    bufp->fullIData(oldp+1672,(0x1aU),32);
    bufp->fullIData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__u_icache__DOT__i),32);
    bufp->fullIData(oldp+1674,(0xa0000000U),32);
    bufp->fullIData(oldp+1675,(0xbfffffffU),32);
    bufp->fullCData(oldp+1676,(1U),4);
    bufp->fullIData(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__data_cache__DOT__s),32);
    bufp->fullSData(oldp+1678,(0x300U),12);
    bufp->fullSData(oldp+1679,(0x305U),12);
    bufp->fullSData(oldp+1680,(0x341U),12);
    bufp->fullSData(oldp+1681,(0x342U),12);
    bufp->fullBit(oldp+1682,(0U));
    bufp->fullBit(oldp+1683,(1U));
    bufp->fullCData(oldp+1684,(4U),3);
    bufp->fullCData(oldp+1685,(0x1bU),8);
    bufp->fullCData(oldp+1686,(0xebU),8);
    bufp->fullCData(oldp+1687,(0x38U),8);
    bufp->fullIData(oldp+1688,(0x64U),32);
    bufp->fullIData(oldp+1689,(0x18U),32);
    bufp->fullIData(oldp+1690,(9U),32);
    bufp->fullIData(oldp+1691,(6U),32);
    bufp->fullIData(oldp+1692,(3U),32);
    bufp->fullIData(oldp+1693,(8U),32);
    bufp->fullIData(oldp+1694,(0xdU),32);
    bufp->fullIData(oldp+1695,(0x2000U),32);
    bufp->fullIData(oldp+1696,(0x2710U),32);
    bufp->fullIData(oldp+1697,(0x30cU),32);
    bufp->fullCData(oldp+1698,(7U),4);
    bufp->fullCData(oldp+1699,(3U),4);
    bufp->fullCData(oldp+1700,(5U),4);
    bufp->fullCData(oldp+1701,(4U),4);
    bufp->fullCData(oldp+1702,(6U),4);
    bufp->fullCData(oldp+1703,(2U),4);
    bufp->fullSData(oldp+1704,(0x20U),13);
    bufp->fullCData(oldp+1705,(8U),4);
    bufp->fullCData(oldp+1706,(9U),4);
    bufp->fullIData(oldp+1707,(0xaU),32);
    bufp->fullIData(oldp+1708,(0x11U),32);
    bufp->fullIData(oldp+1709,(0x30000000U),32);
    bufp->fullIData(oldp+1710,(0x3fffffffU),32);
    bufp->fullIData(oldp+1711,(0x10001000U),32);
    bufp->fullIData(oldp+1712,(0x10001fffU),32);
    bufp->fullCData(oldp+1713,(5U),3);
    bufp->fullCData(oldp+1714,(6U),3);
    bufp->fullCData(oldp+1715,(7U),3);
    bufp->fullCData(oldp+1716,(0x40U),7);
    bufp->fullCData(oldp+1717,(0xaU),4);
    bufp->fullIData(oldp+1718,(0xbU),32);
    bufp->fullIData(oldp+1719,(5U),32);
    bufp->fullIData(oldp+1720,(0x200000U),32);
    bufp->fullIData(oldp+1721,(0x60U),32);
    bufp->fullIData(oldp+1722,(0x90U),32);
    bufp->fullIData(oldp+1723,(0x310U),32);
    bufp->fullIData(oldp+1724,(0x320U),32);
    bufp->fullIData(oldp+1725,(0x23U),32);
    bufp->fullIData(oldp+1726,(0x203U),32);
    bufp->fullIData(oldp+1727,(0x20dU),32);
    bufp->fullIData(oldp+1728,(0x211ffff4U),32);
    bufp->fullCData(oldp+1729,(0x35U),8);
    bufp->fullIData(oldp+1730,(0x400000U),32);
}
